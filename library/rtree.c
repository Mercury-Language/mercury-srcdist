/*
** Automatically generated from `rtree.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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


/* :- module rtree. */
/* :- implementation. */

/*
INIT mercury__rtree__init
ENDINIT
*/

#include "rtree.mih"


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




static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box_0_0[4];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box_0_0;

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box_0_0[1];

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box_0[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box_0[1];

static const MR_Integer mercury__rtree__rtree__functor_number_map_box_0[1];

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box3d_0_0[6];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box3d_0_0;

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box3d_0_0[1];

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box3d_0[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box3d_0[1];

static const MR_Integer mercury__rtree__rtree__functor_number_map_box3d_0[1];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_0[1];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_0;

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_1[2];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_1;

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_0[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_1[1];

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_delete_info_2[2];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_delete_info_2[2];

static const MR_Integer mercury__rtree__rtree__functor_number_map_delete_info_2[2];

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_interval_0_0[2];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_interval_0_0;

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_interval_0_0[1];

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_interval_0[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_interval_0[1];

static const MR_Integer mercury__rtree__rtree__functor_number_map_interval_0[1];

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0;

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1;

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2;

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3;

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_four_result_0[4];

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0[4];

static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_four_result_0[4];

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0;

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1;

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2;

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_three_result_0[3];

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0[3];

static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_three_result_0[3];

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0;

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1;

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_two_result_0[2];

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0[2];

static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_two_result_0[2];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_orphan_2_0[2];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_orphan_2_0;

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_orphan_2_0[1];

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_orphan_2[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_orphan_2[1];

static const MR_Integer mercury__rtree__rtree__functor_number_map_orphan_2[1];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_0;

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_1[2];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_1;

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2[1];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2;

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_0[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_1[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2[1];

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2[3];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2[3];

static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2[3];

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_0[1];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_0;

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_1[4];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_1;

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_2[6];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_2;

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_3[8];

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_3;

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_0[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_1[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_2[1];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_3[1];

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2_2[4];

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2_2[4];

static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2_2[4];

static const MR_ConstString mercury__rtree__rtree__type_class_id_var_names_region_1[1];

static const MR_TypeClassMethod mercury__rtree__rtree__type_class_id_method_ids_region_1[5];

static const MR_TypeClassId mercury__rtree__rtree__type_class_id_region_1;

static MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____box_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____box3d_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____delete_info_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____interval_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____orphan_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____orphans_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____rtree_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2);

static MR_Integer MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
  MR_Box mercury__rtree__K_6,
  MR_Word mercury__rtree__T_7,
  MR_Box mercury__rtree__QueryKey_8,
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_10,
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_11);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_47,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Word * mercury__rtree__HeadVar__4_4);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
  MR_Box mercury__rtree__K_6,
  MR_Word mercury__rtree__T_7,
  MR_Box mercury__rtree__QueryKey_8,
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_10,
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_11);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_47,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Word * mercury__rtree__HeadVar__4_4);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_29,
  MR_Word mercury__rtree__Four_6,
  MR_Box * mercury__rtree__K4_7,
  MR_Word * mercury__rtree__T4_8,
  MR_Box * mercury__rtree__K5_9,
  MR_Word * mercury__rtree__T5_10);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_52,
  MR_Box mercury__rtree__K0_10,
  MR_Word mercury__rtree__T0_11,
  MR_Box mercury__rtree__K1_12,
  MR_Word mercury__rtree__T1_13,
  MR_Box mercury__rtree__K2_14,
  MR_Word mercury__rtree__T2_15,
  MR_Box mercury__rtree__K_16,
  MR_Box mercury__rtree__V_17,
  MR_Word * mercury__rtree__T_18);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_48,
  MR_Box mercury__rtree__K0_8,
  MR_Word mercury__rtree__T0_9,
  MR_Box mercury__rtree__K1_10,
  MR_Word mercury__rtree__T1_11,
  MR_Box mercury__rtree__K_12,
  MR_Box mercury__rtree__V_13,
  MR_Word * mercury__rtree__T_14);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_45,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__K_2,
  MR_Box mercury__rtree__V_3,
  MR_Word * mercury__rtree__T_4);

static MR_Word MR_CALL 
mercury__rtree__minimum_of_four_4_f_0(
  MR_Word mercury__rtree__TypeInfo_for_T_18,
  MR_Box mercury__rtree__A_6,
  MR_Box mercury__rtree__B_7,
  MR_Box mercury__rtree__C_8,
  MR_Box mercury__rtree__D_9);

static void MR_CALL 
mercury__rtree__search_first_2_better_solution_three_11_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_26,
  MR_Word mercury__rtree__TypeInfo_for_E_27,
  MR_Word mercury__rtree__TypeInfo_for_K_28,
  MR_Box mercury__rtree__VM_12,
  MR_Box mercury__rtree__EM_13,
  MR_Box mercury__rtree__E1_14,
  MR_Box mercury__rtree__E2_15,
  MR_Word mercury__rtree__T0_16,
  MR_Word mercury__rtree__T1_17,
  MR_Word mercury__rtree__T2_18,
  MR_Word mercury__rtree__P_19,
  MR_Word mercury__rtree__C_20,
  MR_Box * mercury__rtree__V_21,
  MR_Box * mercury__rtree__E_22);

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_three_12_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_26,
  MR_Word mercury__rtree__TypeInfo_for_E_27,
  MR_Word mercury__rtree__TypeInfo_for_K_28,
  MR_Box mercury__rtree__VM_13,
  MR_Box mercury__rtree__EM_14,
  MR_Box mercury__rtree__E0_15,
  MR_Box mercury__rtree__E1_16,
  MR_Box mercury__rtree__E2_17,
  MR_Word mercury__rtree__T0_18,
  MR_Word mercury__rtree__T1_19,
  MR_Word mercury__rtree__T2_20,
  MR_Word mercury__rtree__P_21,
  MR_Word mercury__rtree__C_22,
  MR_Box * mercury__rtree__V_23,
  MR_Box * mercury__rtree__E_24);

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_two_10_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_22,
  MR_Word mercury__rtree__TypeInfo_for_E_23,
  MR_Word mercury__rtree__TypeInfo_for_K_24,
  MR_Box mercury__rtree__VM_11,
  MR_Box mercury__rtree__EM_12,
  MR_Box mercury__rtree__E0_13,
  MR_Box mercury__rtree__E1_14,
  MR_Word mercury__rtree__T0_15,
  MR_Word mercury__rtree__T1_16,
  MR_Word mercury__rtree__P_17,
  MR_Word mercury__rtree__C_18,
  MR_Box * mercury__rtree__V_19,
  MR_Box * mercury__rtree__E_20);

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_one_8_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_21,
  MR_Word mercury__rtree__TypeInfo_for_E_22,
  MR_Word mercury__rtree__TypeInfo_for_K_23,
  MR_Box mercury__rtree__VM_9,
  MR_Box mercury__rtree__EM_10,
  MR_Box mercury__rtree__E0_11,
  MR_Word mercury__rtree__T0_12,
  MR_Word mercury__rtree__P_13,
  MR_Word mercury__rtree__C_14,
  MR_Box * mercury__rtree__V_15,
  MR_Box * mercury__rtree__E_16);

static MR_bool MR_CALL 
mercury__rtree__search_first_2_try_first_from_four_12_p_0(
  MR_Word mercury__rtree__TypeInfo_for_E_27,
  MR_Word mercury__rtree__TypeInfo_for_K_28,
  MR_Word mercury__rtree__TypeInfo_for_V_29,
  MR_Box mercury__rtree__E1_13,
  MR_Box mercury__rtree__E2_14,
  MR_Box mercury__rtree__E3_15,
  MR_Word mercury__rtree__T0_16,
  MR_Word mercury__rtree__T1_17,
  MR_Word mercury__rtree__T2_18,
  MR_Word mercury__rtree__T3_19,
  MR_Word mercury__rtree__P_20,
  MR_Word mercury__rtree__C_21,
  MR_Box mercury__rtree__L_22,
  MR_Box * mercury__rtree__V_23,
  MR_Box * mercury__rtree__E_24);

static MR_bool MR_CALL 
mercury__rtree__search_first_2_four_choices_13_p_0(
  MR_Word mercury__rtree__TypeInfo_for_E_28,
  MR_Word mercury__rtree__TypeInfo_for_K_29,
  MR_Word mercury__rtree__TypeInfo_for_V_30,
  MR_Box mercury__rtree__E0_14,
  MR_Box mercury__rtree__E1_15,
  MR_Box mercury__rtree__E2_16,
  MR_Box mercury__rtree__E3_17,
  MR_Word mercury__rtree__T0_18,
  MR_Word mercury__rtree__T1_19,
  MR_Word mercury__rtree__T2_20,
  MR_Word mercury__rtree__T3_21,
  MR_Word mercury__rtree__P_22,
  MR_Word mercury__rtree__C_23,
  MR_Box mercury__rtree__L_24,
  MR_Box * mercury__rtree__V_25,
  MR_Box * mercury__rtree__E_26);

static MR_bool MR_CALL 
mercury__rtree__search_first_2_three_choices_11_p_0(
  MR_Word mercury__rtree__TypeInfo_for_E_24,
  MR_Word mercury__rtree__TypeInfo_for_K_25,
  MR_Word mercury__rtree__TypeInfo_for_V_26,
  MR_Box mercury__rtree__E0_12,
  MR_Box mercury__rtree__E1_13,
  MR_Box mercury__rtree__E2_14,
  MR_Word mercury__rtree__T0_15,
  MR_Word mercury__rtree__T1_16,
  MR_Word mercury__rtree__T2_17,
  MR_Word mercury__rtree__P_18,
  MR_Word mercury__rtree__C_19,
  MR_Box mercury__rtree__L_20,
  MR_Box * mercury__rtree__V_21,
  MR_Box * mercury__rtree__E_22);

static MR_bool MR_CALL 
mercury__rtree__search_first_2_two_choices_9_p_0(
  MR_Word mercury__rtree__TypeInfo_for_E_20,
  MR_Word mercury__rtree__TypeInfo_for_K_21,
  MR_Word mercury__rtree__TypeInfo_for_V_22,
  MR_Box mercury__rtree__E0_10,
  MR_Box mercury__rtree__E1_11,
  MR_Word mercury__rtree__T0_12,
  MR_Word mercury__rtree__T1_13,
  MR_Word mercury__rtree__P_14,
  MR_Word mercury__rtree__C_15,
  MR_Box mercury__rtree__L_16,
  MR_Box * mercury__rtree__V_17,
  MR_Box * mercury__rtree__E_18);

static void MR_CALL 
mercury__rtree__insert_tree_and_split_child3_11_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_56,
  MR_Word mercury__rtree__TypeClassInfo_for_region_55,
  MR_Box mercury__rtree__K0_12,
  MR_Word mercury__rtree__T0_13,
  MR_Box mercury__rtree__K1_14,
  MR_Word mercury__rtree__T1_15,
  MR_Box mercury__rtree__K2_16,
  MR_Word mercury__rtree__T2_17,
  MR_Box mercury__rtree__K_18,
  MR_Word mercury__rtree__S_19,
  MR_Integer mercury__rtree__D0_20,
  MR_Integer mercury__rtree__D_21,
  MR_Word * mercury__rtree__T_22);

static void MR_CALL 
mercury__rtree__insert_tree_and_split_child2_9_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_52,
  MR_Word mercury__rtree__TypeClassInfo_for_region_51,
  MR_Box mercury__rtree__K0_10,
  MR_Word mercury__rtree__T0_11,
  MR_Box mercury__rtree__K1_12,
  MR_Word mercury__rtree__T1_13,
  MR_Box mercury__rtree__K_14,
  MR_Word mercury__rtree__S_15,
  MR_Integer mercury__rtree__D0_16,
  MR_Integer mercury__rtree__D_17,
  MR_Word * mercury__rtree__T_18);

static MR_Word MR_CALL 
mercury__rtree__insert_tree_5_f_0(
  MR_Word mercury__rtree__TypeInfo_for_V_68,
  MR_Word mercury__rtree__TypeClassInfo_for_region_67,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__K_2,
  MR_Word mercury__rtree__S_3,
  MR_Integer mercury__rtree__D0_4,
  MR_Integer mercury__rtree__D_5);

static void MR_CALL 
mercury__rtree__reinsert_deleted_subtrees_4_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_31,
  MR_Word mercury__rtree__TypeClassInfo_for_region_30,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Integer mercury__rtree__Depth_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Word * mercury__rtree__HeadVar__4_4);

static MR_bool MR_CALL 
mercury__rtree__try_deletion4_14_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_43,
  MR_Word mercury__rtree__TypeClassInfo_for_region_42,
  MR_Box mercury__rtree__K0_15,
  MR_Word mercury__rtree__T0_16,
  MR_Box mercury__rtree__K1_17,
  MR_Word mercury__rtree__T1_18,
  MR_Box mercury__rtree__K2_19,
  MR_Word mercury__rtree__T2_20,
  MR_Box mercury__rtree__K3_21,
  MR_Word mercury__rtree__T3_22,
  MR_Box mercury__rtree__K_23,
  MR_Box mercury__rtree__V_24,
  MR_Integer mercury__rtree__D_25,
  MR_Box * mercury__rtree__DK_26,
  MR_Word * mercury__rtree__DT_27,
  MR_Word * mercury__rtree__DI_28);

static MR_bool MR_CALL 
mercury__rtree__try_deletion3_12_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_37,
  MR_Word mercury__rtree__TypeClassInfo_for_region_36,
  MR_Box mercury__rtree__K0_13,
  MR_Word mercury__rtree__T0_14,
  MR_Box mercury__rtree__K1_15,
  MR_Word mercury__rtree__T1_16,
  MR_Box mercury__rtree__K2_17,
  MR_Word mercury__rtree__T2_18,
  MR_Box mercury__rtree__K_19,
  MR_Box mercury__rtree__V_20,
  MR_Integer mercury__rtree__Depth_21,
  MR_Box * mercury__rtree__DK_22,
  MR_Word * mercury__rtree__DT_23,
  MR_Word * mercury__rtree__DI_24);

static MR_bool MR_CALL 
mercury__rtree__try_deletion2_10_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_32,
  MR_Word mercury__rtree__TypeClassInfo_for_region_31,
  MR_Box mercury__rtree__K0_11,
  MR_Word mercury__rtree__T0_12,
  MR_Box mercury__rtree__K1_13,
  MR_Word mercury__rtree__T1_14,
  MR_Box mercury__rtree__K_15,
  MR_Box mercury__rtree__V_16,
  MR_Integer mercury__rtree__Depth_17,
  MR_Box * mercury__rtree__DK_18,
  MR_Word * mercury__rtree__DT_19,
  MR_Word * mercury__rtree__Info_20);

static MR_bool MR_CALL 
mercury__rtree__delete_2_7_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_67,
  MR_Word mercury__rtree__TypeClassInfo_for_region_66,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__K_2,
  MR_Box mercury__rtree__V_3,
  MR_Integer mercury__rtree__Depth_4,
  MR_Box * mercury__rtree__HeadVar__5_5,
  MR_Word * mercury__rtree__HeadVar__6_6,
  MR_Word * mercury__rtree__HeadVar__7_7);

static MR_Word MR_CALL 
mercury__rtree__choose_subtree_4_f_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_27,
  MR_Box mercury__rtree__Key_6,
  MR_Box mercury__rtree__KA_7,
  MR_Box mercury__rtree__KB_8,
  MR_Box mercury__rtree__KC_9);

static MR_Word MR_CALL 
mercury__rtree__choose_subtree_3_f_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_15,
  MR_Box mercury__rtree__Key_5,
  MR_Box mercury__rtree__KA_6,
  MR_Box mercury__rtree__KB_7);


static /* final */ const MR_Box mercury__rtree_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__rtree_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__rtree_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__rtree_scalar_common_4[1][1];




static /* final */ const MR_Box mercury__rtree_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtree_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtree_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtree_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtree_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box_0_0 = {
  (MR_String) "box",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_box_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box_0_0
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_box_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box_0_0
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_box_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_box_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____box_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____box_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "box",
  {     mercury__rtree__rtree__du_name_ordered_box_0 },
  {     mercury__rtree__rtree__du_ptag_ordered_box_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_box_0
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box3d_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box3d_0_0 = {
  (MR_String) "box3d",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_box3d_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box3d_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box3d_0_0
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box3d_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_box3d_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box3d_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box3d_0_0
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_box3d_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_box3d_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____box3d_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____box3d_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "box3d",
  {     mercury__rtree__rtree__du_name_ordered_box3d_0 },
  {     mercury__rtree__rtree__du_ptag_ordered_box3d_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_box3d_0
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
  &mercury__rtree__rtree__type_ctor_info_orphan_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2
  }
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_0[1] = {
  (MR_PseudoTypeInfo) &mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_0 = {
  (MR_String) "deleting",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_delete_info_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_1 = {
  (MR_String) "finished",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__rtree__rtree__field_types_delete_info_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_0
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_1
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_delete_info_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_delete_info_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_delete_info_2_1
  }
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_delete_info_2[2] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_0,
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_1
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_delete_info_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_delete_info_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____delete_info_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____delete_info_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "delete_info",
  {     mercury__rtree__rtree__du_name_ordered_delete_info_2 },
  {     mercury__rtree__rtree__du_ptag_ordered_delete_info_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_delete_info_2
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_interval_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_interval_0_0 = {
  (MR_String) "interval",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_interval_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_interval_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_interval_0_0
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_interval_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_interval_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_interval_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_interval_0_0
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_interval_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_interval_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____interval_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____interval_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "interval",
  {     mercury__rtree__rtree__du_name_ordered_interval_0 },
  {     mercury__rtree__rtree__du_ptag_ordered_interval_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_interval_0
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0 = {
  (MR_String) "min4_first",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1 = {
  (MR_String) "min4_second",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2 = {
  (MR_String) "min4_third",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3 = {
  (MR_String) "min4_fourth",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_four_result_0[4] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3
};

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0[4] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_four_result_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_min_of_four_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_four_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_four_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_four_result",
  {     mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0 },
  {     mercury__rtree__rtree__enum_value_ordered_min_of_four_result_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_min_of_four_result_0
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0 = {
  (MR_String) "min3_first",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1 = {
  (MR_String) "min3_second",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2 = {
  (MR_String) "min3_third",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_three_result_0[3] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2
};

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0[3] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_three_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_min_of_three_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_three_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_three_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_three_result",
  {     mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0 },
  {     mercury__rtree__rtree__enum_value_ordered_min_of_three_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_min_of_three_result_0
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0 = {
  (MR_String) "min2_first",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1 = {
  (MR_String) "min2_second",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_two_result_0[2] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1
};

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0[2] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_two_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_min_of_two_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_two_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_two_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_two_result",
  {     mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0 },
  {     mercury__rtree__rtree__enum_value_ordered_min_of_two_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_min_of_two_result_0
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2 = {
  &mercury__rtree__rtree__type_ctor_info_rtree_2_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_orphan_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_orphan_2_0 = {
  (MR_String) "orphan",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_orphan_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_orphan_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_orphan_2_0
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_orphan_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_orphan_2_0
  }
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_orphan_2[1] = {
  &mercury__rtree__rtree__du_functor_desc_orphan_2_0
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_orphan_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_orphan_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____orphan_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____orphan_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "orphan",
  {     mercury__rtree__rtree__du_name_ordered_orphan_2 },
  {     mercury__rtree__rtree__du_ptag_ordered_orphan_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_orphan_2
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_orphans_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__rtree____Unify____orphans_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____orphans_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "orphans",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_0 = {
  (MR_String) "empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_1 = {
  (MR_String) "one",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__rtree__rtree__field_types_rtree_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2[1] = {
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2 = {
  (MR_String) "rtree",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__rtree__rtree__field_types_rtree_2_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_0
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_1
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2
  }
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2[3] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_0,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_1,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_rtree_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____rtree_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____rtree_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "rtree",
  {     mercury__rtree__rtree__du_name_ordered_rtree_2 },
  {     mercury__rtree__rtree__du_ptag_ordered_rtree_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_rtree_2
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_0 = {
  (MR_String) "leaf",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_rtree_2_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_1 = {
  (MR_String) "two",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__rtree__rtree__field_types_rtree_2_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_2[6] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_2 = {
  (MR_String) "three",
  (MR_Integer) 6,
  (MR_Integer) 63,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__rtree__rtree__field_types_rtree_2_2_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_3[8] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_3 = {
  (MR_String) "four",
  (MR_Integer) 8,
  (MR_Integer) 255,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__rtree__rtree__field_types_rtree_2_2_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_0
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_1
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_2[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_2
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_3[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_3
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2_2[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_3
  }
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2_2[4] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_3,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_0,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_2,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_1
};

static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2_2[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_rtree_2_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____rtree_2_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____rtree_2_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "rtree_2",
  {     mercury__rtree__rtree__du_name_ordered_rtree_2_2 },
  {     mercury__rtree__rtree__du_ptag_ordered_rtree_2_2 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_rtree_2_2
};

const MR_BaseTypeclassInfo base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__[10] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 5)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_rtree__region__arity1__rtree__box__arity0__[10] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 5)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__[10] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 5)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001))
};

static const MR_ConstString mercury__rtree__rtree__type_class_id_var_names_region_1[1] = {
  (MR_String) "K"
};

static const MR_TypeClassMethod mercury__rtree__rtree__type_class_id_method_ids_region_1[5] = {
  {
    (MR_String) "intersects",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "contains",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "size",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "bounding_region",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "bounding_region_size",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  }
};

static const MR_TypeClassId mercury__rtree__rtree__type_class_id_region_1 = {
  (MR_String) "rtree",
  (MR_String) "region",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 5,
  mercury__rtree__rtree__type_class_id_var_names_region_1,
  mercury__rtree__rtree__type_class_id_method_ids_region_1
};

const MR_TypeClassDeclStruct mercury__rtree__rtree__type_class_decl_region_1 = {
  &mercury__rtree__rtree__type_class_id_region_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____box_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____box_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____box_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____box3d_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____box3d_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____box3d_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____delete_info_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____delete_info_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____delete_info_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____interval_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____interval_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____interval_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____min_of_four_result_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____min_of_four_result_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____min_of_three_result_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____min_of_three_result_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____min_of_two_result_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0_10001(
  MR_Box * mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____min_of_two_result_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____orphan_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____orphan_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____orphan_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____orphans_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____orphans_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____orphans_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____rtree_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____rtree_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
    return mercury__rtree__succeeded;
  }
}

static void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0_10001(
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2,
  MR_Box * mercury__rtree__wrapper_arg_3,
  MR_Box mercury__rtree__wrapper_arg_4,
  MR_Box mercury__rtree__wrapper_arg_5)
{
  {
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

    {
      mercury__rtree____Compare____rtree_2_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__closure;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__closure;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1)
{
  {
    MR_Box mercury__rtree__wrapper_arg_2;
    MR_Box mercury__rtree__closure;
    MR_Float mercury__rtree__conv0_HeadVar__2_2;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0(((MR_Word) mercury__rtree__wrapper_arg_1));
    }
    mercury__rtree__wrapper_arg_2 = MR_box_float(mercury__rtree__conv0_HeadVar__2_2);
    return mercury__rtree__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_Box mercury__rtree__wrapper_arg_3;
    MR_Box mercury__rtree__closure;
    MR_Word mercury__rtree__conv0_HeadVar__3_3;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__3_3));
    return mercury__rtree__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_Box mercury__rtree__wrapper_arg_3;
    MR_Box mercury__rtree__closure;
    MR_Float mercury__rtree__conv0_HeadVar__3_3;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    mercury__rtree__wrapper_arg_3 = MR_box_float(mercury__rtree__conv0_HeadVar__3_3);
    return mercury__rtree__wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__closure;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__closure;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1)
{
  {
    MR_Box mercury__rtree__wrapper_arg_2;
    MR_Box mercury__rtree__closure;
    MR_Float mercury__rtree__conv0_HeadVar__2_2;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0(((MR_Word) mercury__rtree__wrapper_arg_1));
    }
    mercury__rtree__wrapper_arg_2 = MR_box_float(mercury__rtree__conv0_HeadVar__2_2);
    return mercury__rtree__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_Box mercury__rtree__wrapper_arg_3;
    MR_Box mercury__rtree__closure;
    MR_Word mercury__rtree__conv0_HeadVar__3_3;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__3_3));
    return mercury__rtree__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_Box mercury__rtree__wrapper_arg_3;
    MR_Box mercury__rtree__closure;
    MR_Float mercury__rtree__conv0_HeadVar__3_3;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    mercury__rtree__wrapper_arg_3 = MR_box_float(mercury__rtree__conv0_HeadVar__3_3);
    return mercury__rtree__wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__closure;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__closure;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    return mercury__rtree__succeeded;
  }
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1)
{
  {
    MR_Box mercury__rtree__wrapper_arg_2;
    MR_Box mercury__rtree__closure;
    MR_Float mercury__rtree__conv0_HeadVar__2_2;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0(((MR_Word) mercury__rtree__wrapper_arg_1));
    }
    mercury__rtree__wrapper_arg_2 = MR_box_float(mercury__rtree__conv0_HeadVar__2_2);
    return mercury__rtree__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_Box mercury__rtree__wrapper_arg_3;
    MR_Box mercury__rtree__closure;
    MR_Word mercury__rtree__conv0_HeadVar__3_3;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__3_3));
    return mercury__rtree__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box mercury__rtree__closure_arg,
  MR_Box mercury__rtree__wrapper_arg_1,
  MR_Box mercury__rtree__wrapper_arg_2)
{
  {
    MR_Box mercury__rtree__wrapper_arg_3;
    MR_Box mercury__rtree__closure;
    MR_Float mercury__rtree__conv0_HeadVar__3_3;

    mercury__rtree__closure = mercury__rtree__closure_arg;
    {
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
    mercury__rtree__wrapper_arg_3 = MR_box_float(mercury__rtree__conv0_HeadVar__3_3);
    return mercury__rtree__wrapper_arg_3;
  }
}

static MR_Integer MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__rtree__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
  MR_Box mercury__rtree__K_6,
  MR_Word mercury__rtree__T_7,
  MR_Box mercury__rtree__QueryKey_8,
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_10,
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_11)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 6)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__QueryKey_8, mercury__rtree__K_6);
    }
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__T_7, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_0_10, mercury__rtree__STATE_VARIABLE_Values_11);
      }
    else
      *mercury__rtree__STATE_VARIABLE_Values_11 = mercury__rtree__STATE_VARIABLE_Values_0_10;
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_47,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Word * mercury__rtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__rtree__Value_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__Value_5;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__HeadVar__3_3));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word mercury__rtree__STATE_VARIABLE_Values_16_16;

              {
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__K0_8, mercury__rtree__T0_9, mercury__rtree__HeadVar__2_2, mercury__rtree__HeadVar__3_3, &mercury__rtree__STATE_VARIABLE_Values_16_16);
              }
              {
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__K1_10, mercury__rtree__T1_11, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_16_16, mercury__rtree__HeadVar__4_4);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_20 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_22 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word mercury__rtree__STATE_VARIABLE_Values_28_28;
              MR_Word mercury__rtree__STATE_VARIABLE_Values_29_29;

              {
                mercury__rtree__succeeded = mercury__rtree__contains_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K0_18);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T0_19, mercury__rtree__HeadVar__2_2, mercury__rtree__HeadVar__3_3, &mercury__rtree__STATE_VARIABLE_Values_28_28);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_28_28 = mercury__rtree__HeadVar__3_3;
              {
                mercury__rtree__succeeded = mercury__rtree__contains_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K1_20);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T1_21, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_28_28, &mercury__rtree__STATE_VARIABLE_Values_29_29);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_29_29 = mercury__rtree__STATE_VARIABLE_Values_28_28;
              {
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_29_29, mercury__rtree__HeadVar__4_4);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mercury__rtree__K0_31 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_33 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_35 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
              MR_Box mercury__rtree__K3_37 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
              MR_Word mercury__rtree__T3_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
              MR_Word mercury__rtree__STATE_VARIABLE_Values_43_43;
              MR_Word mercury__rtree__STATE_VARIABLE_Values_44_44;
              MR_Word mercury__rtree__STATE_VARIABLE_Values_45_45;

              {
                mercury__rtree__succeeded = mercury__rtree__contains_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K0_31);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T0_32, mercury__rtree__HeadVar__2_2, mercury__rtree__HeadVar__3_3, &mercury__rtree__STATE_VARIABLE_Values_43_43);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_43_43 = mercury__rtree__HeadVar__3_3;
              {
                mercury__rtree__succeeded = mercury__rtree__contains_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K1_33);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T1_34, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_43_43, &mercury__rtree__STATE_VARIABLE_Values_44_44);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_44_44 = mercury__rtree__STATE_VARIABLE_Values_43_43;
              {
                mercury__rtree__succeeded = mercury__rtree__contains_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K2_35);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T2_36, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_44_44, &mercury__rtree__STATE_VARIABLE_Values_45_45);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_45_45 = mercury__rtree__STATE_VARIABLE_Values_44_44;
              {
                mercury__rtree__succeeded = mercury__rtree__contains_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K3_37);
              }
              if (mercury__rtree__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T3_38;
                    MR_Word mercury__rtree__next_value_of_HeadVar__3_3 = mercury__rtree__STATE_VARIABLE_Values_45_45;

                    mercury__rtree__HeadVar__3_3 = mercury__rtree__next_value_of_HeadVar__3_3;
                    mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              else
                *mercury__rtree__HeadVar__4_4 = mercury__rtree__STATE_VARIABLE_Values_45_45;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
  MR_Box mercury__rtree__K_6,
  MR_Word mercury__rtree__T_7,
  MR_Box mercury__rtree__QueryKey_8,
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_10,
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_11)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 5)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__QueryKey_8, mercury__rtree__K_6);
    }
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__T_7, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_0_10, mercury__rtree__STATE_VARIABLE_Values_11);
      }
    else
      *mercury__rtree__STATE_VARIABLE_Values_11 = mercury__rtree__STATE_VARIABLE_Values_0_10;
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_47,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Word * mercury__rtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__rtree__Value_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__Value_5;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__HeadVar__3_3));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word mercury__rtree__STATE_VARIABLE_Values_16_16;

              {
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__K0_8, mercury__rtree__T0_9, mercury__rtree__HeadVar__2_2, mercury__rtree__HeadVar__3_3, &mercury__rtree__STATE_VARIABLE_Values_16_16);
              }
              {
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__K1_10, mercury__rtree__T1_11, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_16_16, mercury__rtree__HeadVar__4_4);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_20 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_22 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word mercury__rtree__STATE_VARIABLE_Values_28_28;
              MR_Word mercury__rtree__STATE_VARIABLE_Values_29_29;

              {
                mercury__rtree__succeeded = mercury__rtree__intersects_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K0_18);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T0_19, mercury__rtree__HeadVar__2_2, mercury__rtree__HeadVar__3_3, &mercury__rtree__STATE_VARIABLE_Values_28_28);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_28_28 = mercury__rtree__HeadVar__3_3;
              {
                mercury__rtree__succeeded = mercury__rtree__intersects_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K1_20);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T1_21, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_28_28, &mercury__rtree__STATE_VARIABLE_Values_29_29);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_29_29 = mercury__rtree__STATE_VARIABLE_Values_28_28;
              {
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_29_29, mercury__rtree__HeadVar__4_4);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mercury__rtree__K0_31 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_33 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_35 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
              MR_Box mercury__rtree__K3_37 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
              MR_Word mercury__rtree__T3_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
              MR_Word mercury__rtree__STATE_VARIABLE_Values_43_43;
              MR_Word mercury__rtree__STATE_VARIABLE_Values_44_44;
              MR_Word mercury__rtree__STATE_VARIABLE_Values_45_45;

              {
                mercury__rtree__succeeded = mercury__rtree__intersects_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K0_31);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T0_32, mercury__rtree__HeadVar__2_2, mercury__rtree__HeadVar__3_3, &mercury__rtree__STATE_VARIABLE_Values_43_43);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_43_43 = mercury__rtree__HeadVar__3_3;
              {
                mercury__rtree__succeeded = mercury__rtree__intersects_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K1_33);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T1_34, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_43_43, &mercury__rtree__STATE_VARIABLE_Values_44_44);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_44_44 = mercury__rtree__STATE_VARIABLE_Values_43_43;
              {
                mercury__rtree__succeeded = mercury__rtree__intersects_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K2_35);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__T2_36, mercury__rtree__HeadVar__2_2, mercury__rtree__STATE_VARIABLE_Values_44_44, &mercury__rtree__STATE_VARIABLE_Values_45_45);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_45_45 = mercury__rtree__STATE_VARIABLE_Values_44_44;
              {
                mercury__rtree__succeeded = mercury__rtree__intersects_2_p_0(mercury__rtree__TypeClassInfo_for_region_47, mercury__rtree__HeadVar__2_2, mercury__rtree__K3_37);
              }
              if (mercury__rtree__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T3_38;
                    MR_Word mercury__rtree__next_value_of_HeadVar__3_3 = mercury__rtree__STATE_VARIABLE_Values_45_45;

                    mercury__rtree__HeadVar__3_3 = mercury__rtree__next_value_of_HeadVar__3_3;
                    mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              else
                *mercury__rtree__HeadVar__4_4 = mercury__rtree__STATE_VARIABLE_Values_45_45;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_29,
  MR_Word mercury__rtree__Four_6,
  MR_Box * mercury__rtree__K4_7,
  MR_Word * mercury__rtree__T4_8,
  MR_Box * mercury__rtree__K5_9,
  MR_Word * mercury__rtree__T5_10)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__K0_11 = (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 0));
    MR_Word mercury__rtree__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 1)));
    MR_Box mercury__rtree__K1_13 = (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 2));
    MR_Word mercury__rtree__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 3)));
    MR_Box mercury__rtree__K2_15 = (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 4));
    MR_Word mercury__rtree__T2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 5)));
    MR_Box mercury__rtree__K3_17 = (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 6));
    MR_Word mercury__rtree__T3_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 7)));
    MR_Float mercury__rtree__A01_19;
    MR_Float mercury__rtree__A23_20;
    MR_Float mercury__rtree__A0123_21;
    MR_Float mercury__rtree__A02_22;
    MR_Float mercury__rtree__A13_23;
    MR_Float mercury__rtree__A0213_24;
    MR_Float mercury__rtree__A03_25;
    MR_Float mercury__rtree__A12_26;
    MR_Float mercury__rtree__A0312_27;
    MR_Word mercury__rtree__Min_28;
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
    MR_Box mercury__rtree__conv1_A01_19;
    MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv3_A23_20;
    MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv5_A02_22;
    MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv7_A13_23;
    MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv9_A03_25;
    MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv11_A12_26;

    {
      mercury__rtree__conv1_A01_19 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K1_13);
    }
    mercury__rtree__A01_19 = MR_unbox_float(mercury__rtree__conv1_A01_19);
    mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv3_A23_20 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K2_15, mercury__rtree__K3_17);
    }
    mercury__rtree__A23_20 = MR_unbox_float(mercury__rtree__conv3_A23_20);
    mercury__rtree__A0123_21 = (mercury__rtree__A01_19 + mercury__rtree__A23_20);
    mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv5_A02_22 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K2_15);
    }
    mercury__rtree__A02_22 = MR_unbox_float(mercury__rtree__conv5_A02_22);
    mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv7_A13_23 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K3_17);
    }
    mercury__rtree__A13_23 = MR_unbox_float(mercury__rtree__conv7_A13_23);
    mercury__rtree__A0213_24 = (mercury__rtree__A02_22 + mercury__rtree__A13_23);
    mercury__rtree__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv9_A03_25 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K3_17);
    }
    mercury__rtree__A03_25 = MR_unbox_float(mercury__rtree__conv9_A03_25);
    mercury__rtree__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv11_A12_26 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K2_15);
    }
    mercury__rtree__A12_26 = MR_unbox_float(mercury__rtree__conv11_A12_26);
    mercury__rtree__A0312_27 = (mercury__rtree__A03_25 + mercury__rtree__A12_26);
    mercury__rtree__succeeded = (mercury__rtree__A0123_21 <= mercury__rtree__A0213_24);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__succeeded = (mercury__rtree__A0123_21 <= mercury__rtree__A0312_27);
        if (mercury__rtree__succeeded)
          mercury__rtree__Min_28 = (MR_Integer) 0;
        else
          mercury__rtree__Min_28 = (MR_Integer) 2;
      }
    else
      {
        mercury__rtree__succeeded = (mercury__rtree__A0213_24 <= mercury__rtree__A0312_27);
        if (mercury__rtree__succeeded)
          mercury__rtree__Min_28 = (MR_Integer) 1;
        else
          mercury__rtree__Min_28 = (MR_Integer) 2;
      }
    switch (mercury__rtree__Min_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box MR_CALL (* mercury__rtree__func_12)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
          MR_Box MR_CALL (* mercury__rtree__func_13)(MR_Box, MR_Box, MR_Box);

          {
            *mercury__rtree__K4_7 = mercury__rtree__func_12(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K1_13);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T4_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_11;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T0_12));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_13;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_14));
          }
          mercury__rtree__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
          {
            *mercury__rtree__K5_9 = mercury__rtree__func_13(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K2_15, mercury__rtree__K3_17);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T5_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K2_15;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T2_16));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K3_17;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T3_18));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box MR_CALL (* mercury__rtree__func_14)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
          MR_Box MR_CALL (* mercury__rtree__func_15)(MR_Box, MR_Box, MR_Box);

          {
            *mercury__rtree__K4_7 = mercury__rtree__func_14(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K2_15);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T4_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_11;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T0_12));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K2_15;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T2_16));
          }
          mercury__rtree__func_15 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
          {
            *mercury__rtree__K5_9 = mercury__rtree__func_15(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K3_17);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T5_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K1_13;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T1_14));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K3_17;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T3_18));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box MR_CALL (* mercury__rtree__func_16)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
          MR_Box MR_CALL (* mercury__rtree__func_17)(MR_Box, MR_Box, MR_Box);

          {
            *mercury__rtree__K4_7 = mercury__rtree__func_16(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K3_17);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T4_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_11;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T0_12));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K3_17;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T3_18));
          }
          mercury__rtree__func_17 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
          {
            *mercury__rtree__K5_9 = mercury__rtree__func_17(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K2_15);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T5_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K1_13;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T1_14));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K2_15;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T2_16));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_52,
  MR_Box mercury__rtree__K0_10,
  MR_Word mercury__rtree__T0_11,
  MR_Box mercury__rtree__K1_12,
  MR_Word mercury__rtree__T1_13,
  MR_Box mercury__rtree__K2_14,
  MR_Word mercury__rtree__T2_15,
  MR_Box mercury__rtree__K_16,
  MR_Box mercury__rtree__V_17,
  MR_Word * mercury__rtree__T_18)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__T0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__rtree__Var_47;

          {
            mercury__rtree__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__rtree__Var_47, 0) = mercury__rtree__V_17;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_18 = base;
            MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K0_10;
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T0_11));
            MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_12;
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
            MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_14;
            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T2_15));
            MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K_16;
            MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__Var_47));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__NK0_24;
          MR_Word mercury__rtree__NT0_25;
          MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

          {
            mercury__rtree__NK0_24 = mercury__rtree__func_11(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K0_10);
          }
          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T0_11, mercury__rtree__K_16, mercury__rtree__V_17, &mercury__rtree__NT0_25);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_18 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__NK0_24;
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__NT0_25));
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_12;
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_14;
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_15));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__NK0_48;
          MR_Word mercury__rtree__NT0_49;
          MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

          {
            mercury__rtree__NK0_48 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K0_10);
          }
          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T0_11, mercury__rtree__K_16, mercury__rtree__V_17, &mercury__rtree__NT0_49);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_18 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__NK0_48;
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__NT0_49));
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_12;
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_14;
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_15));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K3_40;
          MR_Word mercury__rtree__T3_41;
          MR_Box mercury__rtree__K4_42;
          MR_Word mercury__rtree__T4_43;
          MR_Word mercury__rtree__Result_44;
          MR_Float mercury__rtree__SizeA_58;
          MR_Float mercury__rtree__SizeB_59;
          MR_Float mercury__rtree__EnlargedSizeA_60;
          MR_Float mercury__rtree__EnlargedSizeB_61;
          MR_Float mercury__rtree__IncreaseForA_62;
          MR_Float mercury__rtree__IncreaseForB_63;
          MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
          MR_Box mercury__rtree__conv1_SizeA_58;
          MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
          MR_Box mercury__rtree__conv3_SizeB_59;
          MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__rtree__conv5_EnlargedSizeA_60;
          MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__rtree__conv7_EnlargedSizeB_61;

          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T0_11, &mercury__rtree__K3_40, &mercury__rtree__T3_41, &mercury__rtree__K4_42, &mercury__rtree__T4_43);
          }
          mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 7)));
          {
            mercury__rtree__conv1_SizeA_58 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K2_14);
          }
          mercury__rtree__SizeA_58 = MR_unbox_float(mercury__rtree__conv1_SizeA_58);
          mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 7)));
          {
            mercury__rtree__conv3_SizeB_59 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K3_40);
          }
          mercury__rtree__SizeB_59 = MR_unbox_float(mercury__rtree__conv3_SizeB_59);
          mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 9)));
          {
            mercury__rtree__conv5_EnlargedSizeA_60 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K2_14);
          }
          mercury__rtree__EnlargedSizeA_60 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_60);
          mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 9)));
          {
            mercury__rtree__conv7_EnlargedSizeB_61 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K3_40);
          }
          mercury__rtree__EnlargedSizeB_61 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_61);
          mercury__rtree__IncreaseForA_62 = (mercury__rtree__EnlargedSizeA_60 - mercury__rtree__SizeA_58);
          mercury__rtree__IncreaseForB_63 = (mercury__rtree__EnlargedSizeB_61 - mercury__rtree__SizeB_59);
          mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_62 < mercury__rtree__IncreaseForB_63);
          if (mercury__rtree__succeeded)
            mercury__rtree__Result_44 = (MR_Integer) 0;
          else
            {
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_62 > mercury__rtree__IncreaseForB_63);
              if (mercury__rtree__succeeded)
                mercury__rtree__Result_44 = (MR_Integer) 1;
              else
                {
                  mercury__rtree__succeeded = (mercury__rtree__SizeA_58 <= mercury__rtree__SizeB_59);
                  if (mercury__rtree__succeeded)
                    mercury__rtree__Result_44 = (MR_Integer) 0;
                  else
                    mercury__rtree__Result_44 = (MR_Integer) 1;
                }
            }
          switch (mercury__rtree__Result_44) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__K5_45;
                MR_Word mercury__rtree__T5_46;
                MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

                {
                  mercury__rtree__K5_45 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K3_40);
                }
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T3_41, mercury__rtree__K_16, mercury__rtree__V_17, &mercury__rtree__T5_46);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__T_18 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K1_12;
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T1_13));
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K2_14;
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T2_15));
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K4_42;
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T4_43));
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K5_45;
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T5_46));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__rtree__K5_50;
                MR_Word mercury__rtree__T5_51;
                MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

                {
                  mercury__rtree__K5_50 = mercury__rtree__func_9(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K4_42);
                }
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T4_43, mercury__rtree__K_16, mercury__rtree__V_17, &mercury__rtree__T5_51);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__T_18 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K1_12;
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T1_13));
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K2_14;
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T2_15));
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K3_40;
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T3_41));
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K5_50;
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T5_51));
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_48,
  MR_Box mercury__rtree__K0_8,
  MR_Word mercury__rtree__T0_9,
  MR_Box mercury__rtree__K1_10,
  MR_Word mercury__rtree__T1_11,
  MR_Box mercury__rtree__K_12,
  MR_Box mercury__rtree__V_13,
  MR_Word * mercury__rtree__T_14)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__T0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__rtree__Var_43;

          {
            mercury__rtree__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__rtree__Var_43, 0) = mercury__rtree__V_13;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_14 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K0_8;
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T0_9));
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_10;
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_11));
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K_12;
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__Var_43));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__NK0_20;
          MR_Word mercury__rtree__NT0_21;
          MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

          {
            mercury__rtree__NK0_20 = mercury__rtree__func_11(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K0_8);
          }
          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T0_9, mercury__rtree__K_12, mercury__rtree__V_13, &mercury__rtree__NT0_21);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__NK0_20;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__NT0_21));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_10;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_11));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__NK0_44;
          MR_Word mercury__rtree__NT0_45;
          MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

          {
            mercury__rtree__NK0_44 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K0_8);
          }
          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T0_9, mercury__rtree__K_12, mercury__rtree__V_13, &mercury__rtree__NT0_45);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__NK0_44;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__NT0_45));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_10;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_11));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K2_36;
          MR_Word mercury__rtree__T2_37;
          MR_Box mercury__rtree__K3_38;
          MR_Word mercury__rtree__T3_39;
          MR_Word mercury__rtree__Result_40;
          MR_Float mercury__rtree__SizeA_54;
          MR_Float mercury__rtree__SizeB_55;
          MR_Float mercury__rtree__EnlargedSizeA_56;
          MR_Float mercury__rtree__EnlargedSizeB_57;
          MR_Float mercury__rtree__IncreaseForA_58;
          MR_Float mercury__rtree__IncreaseForB_59;
          MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
          MR_Box mercury__rtree__conv1_SizeA_54;
          MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
          MR_Box mercury__rtree__conv3_SizeB_55;
          MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__rtree__conv5_EnlargedSizeA_56;
          MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__rtree__conv7_EnlargedSizeB_57;

          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T0_9, &mercury__rtree__K2_36, &mercury__rtree__T2_37, &mercury__rtree__K3_38, &mercury__rtree__T3_39);
          }
          mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 7)));
          {
            mercury__rtree__conv1_SizeA_54 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K2_36);
          }
          mercury__rtree__SizeA_54 = MR_unbox_float(mercury__rtree__conv1_SizeA_54);
          mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 7)));
          {
            mercury__rtree__conv3_SizeB_55 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K3_38);
          }
          mercury__rtree__SizeB_55 = MR_unbox_float(mercury__rtree__conv3_SizeB_55);
          mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 9)));
          {
            mercury__rtree__conv5_EnlargedSizeA_56 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K2_36);
          }
          mercury__rtree__EnlargedSizeA_56 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_56);
          mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 9)));
          {
            mercury__rtree__conv7_EnlargedSizeB_57 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K3_38);
          }
          mercury__rtree__EnlargedSizeB_57 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_57);
          mercury__rtree__IncreaseForA_58 = (mercury__rtree__EnlargedSizeA_56 - mercury__rtree__SizeA_54);
          mercury__rtree__IncreaseForB_59 = (mercury__rtree__EnlargedSizeB_57 - mercury__rtree__SizeB_55);
          mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 < mercury__rtree__IncreaseForB_59);
          if (mercury__rtree__succeeded)
            mercury__rtree__Result_40 = (MR_Integer) 0;
          else
            {
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 > mercury__rtree__IncreaseForB_59);
              if (mercury__rtree__succeeded)
                mercury__rtree__Result_40 = (MR_Integer) 1;
              else
                {
                  mercury__rtree__succeeded = (mercury__rtree__SizeA_54 <= mercury__rtree__SizeB_55);
                  if (mercury__rtree__succeeded)
                    mercury__rtree__Result_40 = (MR_Integer) 0;
                  else
                    mercury__rtree__Result_40 = (MR_Integer) 1;
                }
            }
          switch (mercury__rtree__Result_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__K4_41;
                MR_Word mercury__rtree__T4_42;
                MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

                {
                  mercury__rtree__K4_41 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K2_36);
                }
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T2_37, mercury__rtree__K_12, mercury__rtree__V_13, &mercury__rtree__T4_42);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__T_14 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_10;
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_11));
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K3_38;
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T3_39));
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K4_41;
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T4_42));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__rtree__K4_46;
                MR_Word mercury__rtree__T4_47;
                MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

                {
                  mercury__rtree__K4_46 = mercury__rtree__func_9(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K3_38);
                }
                {
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T3_39, mercury__rtree__K_12, mercury__rtree__V_13, &mercury__rtree__T4_47);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__T_14 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_10;
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_11));
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K2_36;
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T2_37));
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K4_46;
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T4_47));
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_45,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__K_2,
  MR_Box mercury__rtree__V_3,
  MR_Word * mercury__rtree__T_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__error_1_p_0((MR_String) "insert: leaf unexpected");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_12 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word mercury__rtree__Result_17;

              {
                mercury__rtree__Result_17 = mercury__rtree__choose_subtree_3_f_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K_2, mercury__rtree__K0_10, mercury__rtree__K1_12);
              }
              switch (mercury__rtree__Result_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K0_10, mercury__rtree__T0_11, mercury__rtree__K1_12, mercury__rtree__T1_13, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K1_12, mercury__rtree__T1_13, mercury__rtree__K0_10, mercury__rtree__T0_11, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_20 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_22 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word mercury__rtree__Result_27;
              MR_Float mercury__rtree__AreaA_52;
              MR_Float mercury__rtree__AreaB_53;
              MR_Float mercury__rtree__AreaC_54;
              MR_Float mercury__rtree__EnlargedAreaA_55;
              MR_Float mercury__rtree__EnlargedAreaB_56;
              MR_Float mercury__rtree__EnlargedAreaC_57;
              MR_Float mercury__rtree__IncreaseForA_58;
              MR_Float mercury__rtree__IncreaseForB_59;
              MR_Float mercury__rtree__IncreaseForC_60;
              MR_Word mercury__rtree__Result0_61;
              MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7)));
              MR_Box mercury__rtree__conv1_AreaA_52;
              MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
              MR_Box mercury__rtree__conv3_AreaB_53;
              MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box);
              MR_Box mercury__rtree__conv5_AreaC_54;
              MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
              MR_Box mercury__rtree__conv7_EnlargedAreaA_55;
              MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box);
              MR_Box mercury__rtree__conv9_EnlargedAreaB_56;
              MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box);
              MR_Box mercury__rtree__conv11_EnlargedAreaC_57;

              {
                mercury__rtree__conv1_AreaA_52 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K0_18);
              }
              mercury__rtree__AreaA_52 = MR_unbox_float(mercury__rtree__conv1_AreaA_52);
              mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7)));
              {
                mercury__rtree__conv3_AreaB_53 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K1_20);
              }
              mercury__rtree__AreaB_53 = MR_unbox_float(mercury__rtree__conv3_AreaB_53);
              mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7)));
              {
                mercury__rtree__conv5_AreaC_54 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K2_22);
              }
              mercury__rtree__AreaC_54 = MR_unbox_float(mercury__rtree__conv5_AreaC_54);
              mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9)));
              {
                mercury__rtree__conv7_EnlargedAreaA_55 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K_2, mercury__rtree__K0_18);
              }
              mercury__rtree__EnlargedAreaA_55 = MR_unbox_float(mercury__rtree__conv7_EnlargedAreaA_55);
              mercury__rtree__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9)));
              {
                mercury__rtree__conv9_EnlargedAreaB_56 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K_2, mercury__rtree__K1_20);
              }
              mercury__rtree__EnlargedAreaB_56 = MR_unbox_float(mercury__rtree__conv9_EnlargedAreaB_56);
              mercury__rtree__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9)));
              {
                mercury__rtree__conv11_EnlargedAreaC_57 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K_2, mercury__rtree__K2_22);
              }
              mercury__rtree__EnlargedAreaC_57 = MR_unbox_float(mercury__rtree__conv11_EnlargedAreaC_57);
              mercury__rtree__IncreaseForA_58 = (mercury__rtree__EnlargedAreaA_55 - mercury__rtree__AreaA_52);
              mercury__rtree__IncreaseForB_59 = (mercury__rtree__EnlargedAreaB_56 - mercury__rtree__AreaB_53);
              mercury__rtree__IncreaseForC_60 = (mercury__rtree__EnlargedAreaC_57 - mercury__rtree__AreaC_54);
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 < mercury__rtree__IncreaseForB_59);
              if (mercury__rtree__succeeded)
                mercury__rtree__Result0_61 = (MR_Integer) 0;
              else
                {
                  mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 > mercury__rtree__IncreaseForB_59);
                  if (mercury__rtree__succeeded)
                    mercury__rtree__Result0_61 = (MR_Integer) 1;
                  else
                    {
                      mercury__rtree__succeeded = (mercury__rtree__AreaA_52 <= mercury__rtree__AreaB_53);
                      if (mercury__rtree__succeeded)
                        mercury__rtree__Result0_61 = (MR_Integer) 0;
                      else
                        mercury__rtree__Result0_61 = (MR_Integer) 1;
                    }
                }
              mercury__rtree__succeeded = (mercury__rtree__Result0_61 == (MR_Integer) 0);
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 < mercury__rtree__IncreaseForC_60);
                  if (mercury__rtree__succeeded)
                    mercury__rtree__Result_27 = (MR_Integer) 0;
                  else
                    {
                      mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 > mercury__rtree__IncreaseForC_60);
                      if (mercury__rtree__succeeded)
                        mercury__rtree__Result_27 = (MR_Integer) 2;
                      else
                        {
                          mercury__rtree__succeeded = (mercury__rtree__AreaA_52 <= mercury__rtree__AreaC_54);
                          if (mercury__rtree__succeeded)
                            mercury__rtree__Result_27 = (MR_Integer) 0;
                          else
                            mercury__rtree__Result_27 = (MR_Integer) 2;
                        }
                    }
                }
              else
                {
                  mercury__rtree__succeeded = (mercury__rtree__IncreaseForB_59 < mercury__rtree__IncreaseForC_60);
                  if (mercury__rtree__succeeded)
                    mercury__rtree__Result_27 = (MR_Integer) 1;
                  else
                    {
                      mercury__rtree__succeeded = (mercury__rtree__IncreaseForB_59 > mercury__rtree__IncreaseForC_60);
                      if (mercury__rtree__succeeded)
                        mercury__rtree__Result_27 = (MR_Integer) 2;
                      else
                        {
                          mercury__rtree__succeeded = (mercury__rtree__AreaA_52 <= mercury__rtree__AreaB_53);
                          if (mercury__rtree__succeeded)
                            mercury__rtree__Result_27 = (MR_Integer) 1;
                          else
                            mercury__rtree__Result_27 = (MR_Integer) 2;
                        }
                    }
                }
              switch (mercury__rtree__Result_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mercury__rtree__K0_40;
              MR_Word mercury__rtree__T0_41;
              MR_Box mercury__rtree__K1_42;
              MR_Word mercury__rtree__T1_43;
              MR_Word mercury__rtree__Var_44;

              {
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__HeadVar__1_1, &mercury__rtree__K0_40, &mercury__rtree__T0_41, &mercury__rtree__K1_42, &mercury__rtree__T1_43);
              }
              {
                mercury__rtree__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__rtree__Var_44, 0) = mercury__rtree__K0_40;
                MR_hl_field(MR_mktag(1), mercury__rtree__Var_44, 1) = ((MR_Box) (mercury__rtree__T0_41));
                MR_hl_field(MR_mktag(1), mercury__rtree__Var_44, 2) = mercury__rtree__K1_42;
                MR_hl_field(MR_mktag(1), mercury__rtree__Var_44, 3) = ((MR_Box) (mercury__rtree__T1_43));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__Var_44;

                mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__3_3;

    {
      mercury__rtree__HeadVar__3_3 = mercury__rtree__box3d_bounding_region_volume_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__HeadVar__3_3;

    {
      mercury__rtree__HeadVar__3_3 = mercury__rtree__box3d_bounding_region_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0(
  MR_Word mercury__rtree__HeadVar__1_1)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__2_2;
    MR_Float mercury__rtree__XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float mercury__rtree__XMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float mercury__rtree__YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
    MR_Float mercury__rtree__YMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
    MR_Float mercury__rtree__ZMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
    MR_Float mercury__rtree__ZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 4)));
    MR_Float mercury__rtree__Var_10;
    MR_Float mercury__rtree__Var_11 = (mercury__rtree__XMax_4 - mercury__rtree__XMin_5);
    MR_Float mercury__rtree__Var_12 = (mercury__rtree__YMax_6 - mercury__rtree__YMin_7);
    MR_Float mercury__rtree__Var_13;

    mercury__rtree__Var_10 = (mercury__rtree__Var_11 * mercury__rtree__Var_12);
    mercury__rtree__Var_13 = (mercury__rtree__ZMax_8 - mercury__rtree__ZMin_9);
    mercury__rtree__HeadVar__2_2 = (mercury__rtree__Var_10 * mercury__rtree__Var_13);
    return mercury__rtree__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
    MR_Float mercury__rtree__AZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 4)));
    MR_Float mercury__rtree__AZMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
    MR_Float mercury__rtree__BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
    MR_Float mercury__rtree__BZMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 4)));
    MR_Float mercury__rtree__BZMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));

    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 >= mercury__rtree__BXMin_11);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__succeeded = (mercury__rtree__AXMax_6 <= mercury__rtree__BXMax_12);
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__succeeded = (mercury__rtree__AYMin_7 >= mercury__rtree__BYMin_13);
            if (mercury__rtree__succeeded)
              {
                mercury__rtree__succeeded = (mercury__rtree__AYMax_8 <= mercury__rtree__BYMax_14);
                if (mercury__rtree__succeeded)
                  {
                    mercury__rtree__succeeded = (mercury__rtree__AZMin_9 >= mercury__rtree__BZMin_15);
                    if (mercury__rtree__succeeded)
                      mercury__rtree__succeeded = (mercury__rtree__AZMax_10 <= mercury__rtree__BZMax_16);
                  }
              }
          }
      }
    return mercury__rtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree__box3d_intersects_2_p_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__succeeded;
  }
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__3_3;

    {
      mercury__rtree__HeadVar__3_3 = mercury__rtree__box_bounding_region_area_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__HeadVar__3_3;

    {
      mercury__rtree__HeadVar__3_3 = mercury__rtree__box_bounding_region_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0(
  MR_Word mercury__rtree__HeadVar__1_1)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__2_2;
    MR_Float mercury__rtree__XMin_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float mercury__rtree__XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float mercury__rtree__YMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
    MR_Float mercury__rtree__YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
    MR_Float mercury__rtree__Var_7 = (mercury__rtree__XMax_4 - mercury__rtree__XMin_3);
    MR_Float mercury__rtree__Var_8 = (mercury__rtree__YMax_6 - mercury__rtree__YMin_5);

    mercury__rtree__HeadVar__2_2 = (mercury__rtree__Var_7 * mercury__rtree__Var_8);
    return mercury__rtree__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
    MR_Float mercury__rtree__BXMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));

    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 >= mercury__rtree__BXMin_9);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__succeeded = (mercury__rtree__AXMax_6 <= mercury__rtree__BXMax_10);
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__succeeded = (mercury__rtree__AYMin_7 >= mercury__rtree__BYMin_11);
            if (mercury__rtree__succeeded)
              mercury__rtree__succeeded = (mercury__rtree__AYMax_8 <= mercury__rtree__BYMax_12);
          }
      }
    return mercury__rtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;

    {
      mercury__rtree__succeeded = mercury__rtree__box_intersects_2_p_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__succeeded;
  }
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__3_3;

    {
      mercury__rtree__HeadVar__3_3 = mercury__rtree__interval_bounding_region_length_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__HeadVar__3_3;

    {
      mercury__rtree__HeadVar__3_3 = mercury__rtree__interval_bounding_region_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0(
  MR_Word mercury__rtree__HeadVar__1_1)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__2_2;
    MR_Float mercury__rtree__Max_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float mercury__rtree__Min_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

    mercury__rtree__HeadVar__2_2 = (mercury__rtree__Max_3 - mercury__rtree__Min_4);
    return mercury__rtree__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
    MR_Float mercury__rtree__BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));

    mercury__rtree__succeeded = (mercury__rtree__AMin_5 >= mercury__rtree__BMin_7);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = (mercury__rtree__AMax_6 <= mercury__rtree__BMax_8);
    return mercury__rtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
    MR_Float mercury__rtree__BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));

    mercury__rtree__succeeded = (mercury__rtree__AMin_5 <= mercury__rtree__BMin_7);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = (mercury__rtree__AMax_6 >= mercury__rtree__BMin_7);
    else
      mercury__rtree__succeeded = (mercury__rtree__AMin_5 <= mercury__rtree__BMax_8);
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_173,
  MR_Word mercury__rtree__TypeInfo_for_V_174,
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rtree__succeeded;
        MR_Integer mercury__rtree__CastX_171 = (MR_Integer) mercury__rtree__HeadVar__2_2;
        MR_Integer mercury__rtree__CastY_172 = (MR_Integer) mercury__rtree__HeadVar__3_3;

        mercury__rtree__succeeded = (mercury__rtree__CastX_171 == mercury__rtree__CastY_172);
        if (mercury__rtree__succeeded)
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__Var_201 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box mercury__rtree__Var_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));

                      {
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_V_174, mercury__rtree__HeadVar__1_1, mercury__rtree__Var_201, mercury__rtree__Var_5);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__rtree__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
                MR_Box mercury__rtree__Var_209 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
                MR_Word mercury__rtree__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
                MR_Box mercury__rtree__Var_211 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box mercury__rtree__Var_36 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
                      MR_Word mercury__rtree__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
                      MR_Box mercury__rtree__Var_38 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 2));
                      MR_Word mercury__rtree__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
                      MR_Word mercury__rtree__Var_40;

                      {
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__Var_40, mercury__rtree__Var_211, mercury__rtree__Var_36);
                      }
                      mercury__rtree__succeeded = (mercury__rtree__Var_40 == (MR_Integer) 0);
                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                      if (mercury__rtree__succeeded)
                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_40;
                      else
                        {
                          MR_Word mercury__rtree__Var_41;

                          {
                            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__Var_41, mercury__rtree__Var_210, mercury__rtree__Var_37);
                          }
                          mercury__rtree__succeeded = (mercury__rtree__Var_41 == (MR_Integer) 0);
                          mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                          if (mercury__rtree__succeeded)
                            *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_41;
                          else
                            {
                              MR_Word mercury__rtree__Var_42;

                              {
                                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__Var_42, mercury__rtree__Var_209, mercury__rtree__Var_38);
                              }
                              mercury__rtree__succeeded = (mercury__rtree__Var_42 == (MR_Integer) 0);
                              mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                              if (mercury__rtree__succeeded)
                                *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_42;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word mercury__rtree__next_value_of_HeadVar__2_2 = mercury__rtree__Var_208;
                                    MR_Word mercury__rtree__next_value_of_HeadVar__3_3 = mercury__rtree__Var_39;

                                    mercury__rtree__HeadVar__3_3 = mercury__rtree__next_value_of_HeadVar__3_3;
                                    mercury__rtree__HeadVar__2_2 = mercury__rtree__next_value_of_HeadVar__2_2;
                                  }
                                  continue;
                                }
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__rtree__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
                MR_Box mercury__rtree__Var_203 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
                MR_Word mercury__rtree__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
                MR_Box mercury__rtree__Var_205 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
                MR_Word mercury__rtree__Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
                MR_Box mercury__rtree__Var_207 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Box mercury__rtree__Var_88 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
                      MR_Word mercury__rtree__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
                      MR_Box mercury__rtree__Var_90 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 2));
                      MR_Word mercury__rtree__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
                      MR_Box mercury__rtree__Var_92 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 4));
                      MR_Word mercury__rtree__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 5)));
                      MR_Word mercury__rtree__Var_94;

                      {
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__Var_94, mercury__rtree__Var_207, mercury__rtree__Var_88);
                      }
                      mercury__rtree__succeeded = (mercury__rtree__Var_94 == (MR_Integer) 0);
                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                      if (mercury__rtree__succeeded)
                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_94;
                      else
                        {
                          MR_Word mercury__rtree__Var_95;

                          {
                            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__Var_95, mercury__rtree__Var_206, mercury__rtree__Var_89);
                          }
                          mercury__rtree__succeeded = (mercury__rtree__Var_95 == (MR_Integer) 0);
                          mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                          if (mercury__rtree__succeeded)
                            *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_95;
                          else
                            {
                              MR_Word mercury__rtree__Var_96;

                              {
                                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__Var_96, mercury__rtree__Var_205, mercury__rtree__Var_90);
                              }
                              mercury__rtree__succeeded = (mercury__rtree__Var_96 == (MR_Integer) 0);
                              mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                              if (mercury__rtree__succeeded)
                                *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_96;
                              else
                                {
                                  MR_Word mercury__rtree__Var_97;

                                  {
                                    mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__Var_97, mercury__rtree__Var_204, mercury__rtree__Var_91);
                                  }
                                  mercury__rtree__succeeded = (mercury__rtree__Var_97 == (MR_Integer) 0);
                                  mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                                  if (mercury__rtree__succeeded)
                                    *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_97;
                                  else
                                    {
                                      MR_Word mercury__rtree__Var_98;

                                      {
                                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__Var_98, mercury__rtree__Var_203, mercury__rtree__Var_92);
                                      }
                                      mercury__rtree__succeeded = (mercury__rtree__Var_98 == (MR_Integer) 0);
                                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                                      if (mercury__rtree__succeeded)
                                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_98;
                                      else
                                        {
                                          /* direct tailcall eliminated */
                                          {
                                            MR_Word mercury__rtree__next_value_of_HeadVar__2_2 = mercury__rtree__Var_202;
                                            MR_Word mercury__rtree__next_value_of_HeadVar__3_3 = mercury__rtree__Var_93;

                                            mercury__rtree__HeadVar__3_3 = mercury__rtree__next_value_of_HeadVar__3_3;
                                            mercury__rtree__HeadVar__2_2 = mercury__rtree__next_value_of_HeadVar__2_2;
                                          }
                                          continue;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__rtree__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
                MR_Box mercury__rtree__Var_194 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
                MR_Word mercury__rtree__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
                MR_Box mercury__rtree__Var_196 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
                MR_Word mercury__rtree__Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
                MR_Box mercury__rtree__Var_198 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
                MR_Word mercury__rtree__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
                MR_Box mercury__rtree__Var_200 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Box mercury__rtree__Var_156 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
                      MR_Word mercury__rtree__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
                      MR_Box mercury__rtree__Var_158 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 2));
                      MR_Word mercury__rtree__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
                      MR_Box mercury__rtree__Var_160 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 4));
                      MR_Word mercury__rtree__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 5)));
                      MR_Box mercury__rtree__Var_162 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 6));
                      MR_Word mercury__rtree__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 7)));
                      MR_Word mercury__rtree__Var_164;

                      {
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__Var_164, mercury__rtree__Var_200, mercury__rtree__Var_156);
                      }
                      mercury__rtree__succeeded = (mercury__rtree__Var_164 == (MR_Integer) 0);
                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                      if (mercury__rtree__succeeded)
                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_164;
                      else
                        {
                          MR_Word mercury__rtree__Var_165;

                          {
                            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__Var_165, mercury__rtree__Var_199, mercury__rtree__Var_157);
                          }
                          mercury__rtree__succeeded = (mercury__rtree__Var_165 == (MR_Integer) 0);
                          mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                          if (mercury__rtree__succeeded)
                            *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_165;
                          else
                            {
                              MR_Word mercury__rtree__Var_166;

                              {
                                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__Var_166, mercury__rtree__Var_198, mercury__rtree__Var_158);
                              }
                              mercury__rtree__succeeded = (mercury__rtree__Var_166 == (MR_Integer) 0);
                              mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                              if (mercury__rtree__succeeded)
                                *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_166;
                              else
                                {
                                  MR_Word mercury__rtree__Var_167;

                                  {
                                    mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__Var_167, mercury__rtree__Var_197, mercury__rtree__Var_159);
                                  }
                                  mercury__rtree__succeeded = (mercury__rtree__Var_167 == (MR_Integer) 0);
                                  mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                                  if (mercury__rtree__succeeded)
                                    *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_167;
                                  else
                                    {
                                      MR_Word mercury__rtree__Var_168;

                                      {
                                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__Var_168, mercury__rtree__Var_196, mercury__rtree__Var_160);
                                      }
                                      mercury__rtree__succeeded = (mercury__rtree__Var_168 == (MR_Integer) 0);
                                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                                      if (mercury__rtree__succeeded)
                                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_168;
                                      else
                                        {
                                          MR_Word mercury__rtree__Var_169;

                                          {
                                            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__Var_169, mercury__rtree__Var_195, mercury__rtree__Var_161);
                                          }
                                          mercury__rtree__succeeded = (mercury__rtree__Var_169 == (MR_Integer) 0);
                                          mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                                          if (mercury__rtree__succeeded)
                                            *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_169;
                                          else
                                            {
                                              MR_Word mercury__rtree__Var_170;

                                              {
                                                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__Var_170, mercury__rtree__Var_194, mercury__rtree__Var_162);
                                              }
                                              mercury__rtree__succeeded = (mercury__rtree__Var_170 == (MR_Integer) 0);
                                              mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                                              if (mercury__rtree__succeeded)
                                                *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_170;
                                              else
                                                {
                                                  /* direct tailcall eliminated */
                                                  {
                                                    MR_Word mercury__rtree__next_value_of_HeadVar__2_2 = mercury__rtree__Var_193;
                                                    MR_Word mercury__rtree__next_value_of_HeadVar__3_3 = mercury__rtree__Var_163;

                                                    mercury__rtree__HeadVar__3_3 = mercury__rtree__next_value_of_HeadVar__3_3;
                                                    mercury__rtree__HeadVar__2_2 = mercury__rtree__next_value_of_HeadVar__2_2;
                                                  }
                                                  continue;
                                                }
                                            }
                                        }
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
      break;
    }
}

MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_43,
  MR_Word mercury__rtree__TypeInfo_for_V_44,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rtree__succeeded;
        MR_Integer mercury__rtree__CastX_41 = (MR_Integer) mercury__rtree__HeadVar__1_1;
        MR_Integer mercury__rtree__CastY_42 = (MR_Integer) mercury__rtree__HeadVar__2_2;

        mercury__rtree__succeeded = (mercury__rtree__CastX_41 == mercury__rtree__CastY_42);
        if (mercury__rtree__succeeded)
          mercury__rtree__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__Var_3 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
                MR_Box mercury__rtree__Var_4;

                mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
                if (mercury__rtree__succeeded)
                  {
                    mercury__rtree__Var_4 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
                    {
                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_44, mercury__rtree__Var_3, mercury__rtree__Var_4);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__rtree__Var_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
                MR_Word mercury__rtree__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
                MR_Box mercury__rtree__Var_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
                MR_Word mercury__rtree__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mercury__rtree__Var_9;
                MR_Word mercury__rtree__Var_10;
                MR_Box mercury__rtree__Var_11;
                MR_Word mercury__rtree__Var_12;

                mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__rtree__succeeded)
                  {
                    mercury__rtree__Var_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
                    mercury__rtree__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__rtree__Var_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
                    mercury__rtree__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__Var_5, mercury__rtree__Var_9);
                    }
                    if (mercury__rtree__succeeded)
                      {
                        {
                          mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__Var_6, mercury__rtree__Var_10);
                        }
                        if (mercury__rtree__succeeded)
                          {
                            {
                              mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__Var_7, mercury__rtree__Var_11);
                            }
                            if (mercury__rtree__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__Var_8;
                                  MR_Word mercury__rtree__next_value_of_HeadVar__2_2 = mercury__rtree__Var_12;

                                  mercury__rtree__HeadVar__2_2 = mercury__rtree__next_value_of_HeadVar__2_2;
                                  mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box mercury__rtree__Var_13 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
                MR_Word mercury__rtree__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
                MR_Box mercury__rtree__Var_15 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
                MR_Word mercury__rtree__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mercury__rtree__Var_17 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
                MR_Word mercury__rtree__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
                MR_Box mercury__rtree__Var_19;
                MR_Word mercury__rtree__Var_20;
                MR_Box mercury__rtree__Var_21;
                MR_Word mercury__rtree__Var_22;
                MR_Box mercury__rtree__Var_23;
                MR_Word mercury__rtree__Var_24;

                mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (mercury__rtree__succeeded)
                  {
                    mercury__rtree__Var_19 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
                    mercury__rtree__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__rtree__Var_21 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
                    mercury__rtree__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
                    mercury__rtree__Var_23 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
                    mercury__rtree__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
                    {
                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__Var_13, mercury__rtree__Var_19);
                    }
                    if (mercury__rtree__succeeded)
                      {
                        {
                          mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__Var_14, mercury__rtree__Var_20);
                        }
                        if (mercury__rtree__succeeded)
                          {
                            {
                              mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__Var_15, mercury__rtree__Var_21);
                            }
                            if (mercury__rtree__succeeded)
                              {
                                {
                                  mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__Var_16, mercury__rtree__Var_22);
                                }
                                if (mercury__rtree__succeeded)
                                  {
                                    {
                                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__Var_17, mercury__rtree__Var_23);
                                    }
                                    if (mercury__rtree__succeeded)
                                      {
                                        /* direct tailcall eliminated */
                                        {
                                          MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__Var_18;
                                          MR_Word mercury__rtree__next_value_of_HeadVar__2_2 = mercury__rtree__Var_24;

                                          mercury__rtree__HeadVar__2_2 = mercury__rtree__next_value_of_HeadVar__2_2;
                                          mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                                        }
                                        continue;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Box mercury__rtree__Var_25 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
                MR_Word mercury__rtree__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
                MR_Box mercury__rtree__Var_27 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
                MR_Word mercury__rtree__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mercury__rtree__Var_29 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
                MR_Word mercury__rtree__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
                MR_Box mercury__rtree__Var_31 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
                MR_Word mercury__rtree__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
                MR_Box mercury__rtree__Var_33;
                MR_Word mercury__rtree__Var_34;
                MR_Box mercury__rtree__Var_35;
                MR_Word mercury__rtree__Var_36;
                MR_Box mercury__rtree__Var_37;
                MR_Word mercury__rtree__Var_38;
                MR_Box mercury__rtree__Var_39;
                MR_Word mercury__rtree__Var_40;

                mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
                if (mercury__rtree__succeeded)
                  {
                    mercury__rtree__Var_33 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
                    mercury__rtree__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__rtree__Var_35 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
                    mercury__rtree__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
                    mercury__rtree__Var_37 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
                    mercury__rtree__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
                    mercury__rtree__Var_39 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
                    mercury__rtree__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
                    {
                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__Var_25, mercury__rtree__Var_33);
                    }
                    if (mercury__rtree__succeeded)
                      {
                        {
                          mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__Var_26, mercury__rtree__Var_34);
                        }
                        if (mercury__rtree__succeeded)
                          {
                            {
                              mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__Var_27, mercury__rtree__Var_35);
                            }
                            if (mercury__rtree__succeeded)
                              {
                                {
                                  mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__Var_28, mercury__rtree__Var_36);
                                }
                                if (mercury__rtree__succeeded)
                                  {
                                    {
                                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__Var_29, mercury__rtree__Var_37);
                                    }
                                    if (mercury__rtree__succeeded)
                                      {
                                        {
                                          mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__Var_30, mercury__rtree__Var_38);
                                        }
                                        if (mercury__rtree__succeeded)
                                          {
                                            {
                                              mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__Var_31, mercury__rtree__Var_39);
                                            }
                                            if (mercury__rtree__succeeded)
                                              {
                                                /* direct tailcall eliminated */
                                                {
                                                  MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__Var_32;
                                                  MR_Word mercury__rtree__next_value_of_HeadVar__2_2 = mercury__rtree__Var_40;

                                                  mercury__rtree__HeadVar__2_2 = mercury__rtree__next_value_of_HeadVar__2_2;
                                                  mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                                                }
                                                continue;
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
              break;
          }
        return mercury__rtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__rtree____Compare____rtree_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_25,
  MR_Word mercury__rtree__TypeInfo_for_V_26,
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_23 = (MR_Integer) mercury__rtree__HeadVar__2_2;
    MR_Integer mercury__rtree__CastY_24 = (MR_Integer) mercury__rtree__HeadVar__3_3;

    mercury__rtree__succeeded = (mercury__rtree__CastX_23 == mercury__rtree__CastY_24);
    if (mercury__rtree__succeeded)
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box mercury__rtree__Var_29 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
            MR_Box mercury__rtree__Var_30 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__rtree__Var_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box mercury__rtree__Var_12 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word mercury__rtree__Var_13;

                  {
                    mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_25, &mercury__rtree__Var_13, mercury__rtree__Var_30, mercury__rtree__Var_11);
                  }
                  mercury__rtree__succeeded = (mercury__rtree__Var_13 == (MR_Integer) 0);
                  mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                  if (mercury__rtree__succeeded)
                    *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_13;
                  else
                    {
                      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__HeadVar__1_1, mercury__rtree__Var_29, mercury__rtree__Var_12);
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__rtree__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__rtree__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__HeadVar__1_1, mercury__rtree__Var_31, mercury__rtree__Var_22);
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
mercury__rtree____Unify____rtree_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_13,
  MR_Word mercury__rtree__TypeInfo_for_V_14,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_11 = (MR_Integer) mercury__rtree__HeadVar__1_1;
    MR_Integer mercury__rtree__CastY_12 = (MR_Integer) mercury__rtree__HeadVar__2_2;

    mercury__rtree__succeeded = (mercury__rtree__CastX_11 == mercury__rtree__CastY_12);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__rtree__CastX_3 = (MR_Integer) mercury__rtree__HeadVar__1_1;
            MR_Integer mercury__rtree__CastY_4 = (MR_Integer) mercury__rtree__HeadVar__2_2;

            mercury__rtree__succeeded = (mercury__rtree__CastY_4 == mercury__rtree__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box mercury__rtree__Var_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mercury__rtree__Var_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1));
            MR_Box mercury__rtree__Var_7;
            MR_Box mercury__rtree__Var_8;

            mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__rtree__succeeded)
              {
                mercury__rtree__Var_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
                mercury__rtree__Var_8 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
                {
                  mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_13, mercury__rtree__Var_5, mercury__rtree__Var_7);
                }
                if (mercury__rtree__succeeded)
                  {
                    mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_14, mercury__rtree__Var_6, mercury__rtree__Var_8);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__rtree__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__rtree__Var_10;

            mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__rtree__succeeded)
              {
                mercury__rtree__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_13, mercury__rtree__TypeInfo_for_V_14, mercury__rtree__Var_9, mercury__rtree__Var_10);
                }
              }
          }
          break;
      }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____orphans_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_6,
  MR_Word mercury__rtree__TypeInfo_for_V_7,
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__TypeCtorInfo_8_8 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
    MR_Word mercury__rtree__TypeInfo_9_9;
    MR_Word mercury__rtree__Cast_HeadVar1_4 = mercury__rtree__HeadVar__2_2;
    MR_Word mercury__rtree__Cast_HeadVar2_5 = mercury__rtree__HeadVar__3_3;

    {
      mercury__rtree__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_9_9, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_9_9, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_6));
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_9_9, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_7));
    }
    {
      mercury__list____Compare____list_1_0(mercury__rtree__TypeInfo_9_9, mercury__rtree__HeadVar__1_1, (MR_Word) mercury__rtree__Cast_HeadVar1_4, (MR_Word) mercury__rtree__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_5,
  MR_Word mercury__rtree__TypeInfo_for_V_6,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__TypeCtorInfo_7_7 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
    MR_Word mercury__rtree__TypeInfo_8_8;
    MR_Word mercury__rtree__Cast_HeadVar1_3 = mercury__rtree__HeadVar__1_1;
    MR_Word mercury__rtree__Cast_HeadVar2_4 = mercury__rtree__HeadVar__2_2;

    {
      mercury__rtree__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_8_8, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_8_8, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_5));
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_8_8, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_6));
    }
    {
      mercury__rtree__succeeded = mercury__list____Unify____list_1_0(mercury__rtree__TypeInfo_8_8, (MR_Word) mercury__rtree__Cast_HeadVar1_3, (MR_Word) mercury__rtree__Cast_HeadVar2_4);
    }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____orphan_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_11,
  MR_Word mercury__rtree__TypeInfo_for_V_12,
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_9 = (MR_Integer) mercury__rtree__HeadVar__2_2;
    MR_Integer mercury__rtree__CastY_10 = (MR_Integer) mercury__rtree__HeadVar__3_3;

    mercury__rtree__succeeded = (mercury__rtree__CastX_9 == mercury__rtree__CastY_10);
    if (mercury__rtree__succeeded)
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__rtree__Var_4 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__rtree__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__rtree__Var_6 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Word mercury__rtree__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__rtree__Var_8;

        {
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_11, &mercury__rtree__Var_8, mercury__rtree__Var_4, mercury__rtree__Var_6);
        }
        mercury__rtree__succeeded = (mercury__rtree__Var_8 == (MR_Integer) 0);
        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
        if (mercury__rtree__succeeded)
          *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_8;
        else
          {
            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_11, mercury__rtree__TypeInfo_for_V_12, mercury__rtree__HeadVar__1_1, mercury__rtree__Var_5, mercury__rtree__Var_7);
          }
      }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_9,
  MR_Word mercury__rtree__TypeInfo_for_V_10,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_7 = (MR_Integer) mercury__rtree__HeadVar__1_1;
    MR_Integer mercury__rtree__CastY_8 = (MR_Integer) mercury__rtree__HeadVar__2_2;

    mercury__rtree__succeeded = (mercury__rtree__CastX_7 == mercury__rtree__CastY_8);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__rtree__Var_3 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__rtree__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mercury__rtree__Var_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__rtree__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_9, mercury__rtree__Var_3, mercury__rtree__Var_5);
        }
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_9, mercury__rtree__TypeInfo_for_V_10, mercury__rtree__Var_4, mercury__rtree__Var_6);
          }
      }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0(
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__Cast_HeadVar1_4 = (MR_Integer) mercury__rtree__HeadVar__2_2;
    MR_Integer mercury__rtree__Cast_HeadVar2_5 = (MR_Integer) mercury__rtree__HeadVar__3_3;

    mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 < mercury__rtree__Cast_HeadVar2_5);
    if (mercury__rtree__succeeded)
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 == mercury__rtree__Cast_HeadVar2_5);
        if (mercury__rtree__succeeded)
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0(
  MR_Word mercury__rtree__HeadVar__2_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__2_1 == mercury__rtree__HeadVar__2_2);

    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0(
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__Cast_HeadVar1_4 = (MR_Integer) mercury__rtree__HeadVar__2_2;
    MR_Integer mercury__rtree__Cast_HeadVar2_5 = (MR_Integer) mercury__rtree__HeadVar__3_3;

    mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 < mercury__rtree__Cast_HeadVar2_5);
    if (mercury__rtree__succeeded)
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 == mercury__rtree__Cast_HeadVar2_5);
        if (mercury__rtree__succeeded)
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0(
  MR_Word mercury__rtree__HeadVar__2_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__2_1 == mercury__rtree__HeadVar__2_2);

    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0(
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__Cast_HeadVar1_4 = (MR_Integer) mercury__rtree__HeadVar__2_2;
    MR_Integer mercury__rtree__Cast_HeadVar2_5 = (MR_Integer) mercury__rtree__HeadVar__3_3;

    mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 < mercury__rtree__Cast_HeadVar2_5);
    if (mercury__rtree__succeeded)
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 == mercury__rtree__Cast_HeadVar2_5);
        if (mercury__rtree__succeeded)
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0(
  MR_Word mercury__rtree__HeadVar__2_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__2_1 == mercury__rtree__HeadVar__2_2);

    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____interval_0_0(
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_9 = (MR_Integer) mercury__rtree__HeadVar__2_2;
    MR_Integer mercury__rtree__CastY_10 = (MR_Integer) mercury__rtree__HeadVar__3_3;

    mercury__rtree__succeeded = (mercury__rtree__CastX_9 == mercury__rtree__CastY_10);
    if (mercury__rtree__succeeded)
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float mercury__rtree__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__rtree__Var_8;

        mercury__rtree__succeeded = (mercury__rtree__Var_4 < mercury__rtree__Var_6);
        if (mercury__rtree__succeeded)
          mercury__rtree__Var_8 = (MR_Integer) 1;
        else
          {
            mercury__rtree__succeeded = (mercury__rtree__Var_4 > mercury__rtree__Var_6);
            if (mercury__rtree__succeeded)
              mercury__rtree__Var_8 = (MR_Integer) 2;
            else
              mercury__rtree__Var_8 = (MR_Integer) 0;
          }
        mercury__rtree__succeeded = (mercury__rtree__Var_8 == (MR_Integer) 0);
        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
        if (mercury__rtree__succeeded)
          *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_8;
        else
          {
            mercury__rtree__succeeded = (mercury__rtree__Var_5 < mercury__rtree__Var_7);
            if (mercury__rtree__succeeded)
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__rtree__succeeded = (mercury__rtree__Var_5 > mercury__rtree__Var_7);
                if (mercury__rtree__succeeded)
                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                else
                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_7 = (MR_Integer) mercury__rtree__HeadVar__1_1;
    MR_Integer mercury__rtree__CastY_8 = (MR_Integer) mercury__rtree__HeadVar__2_2;

    mercury__rtree__succeeded = (mercury__rtree__CastX_7 == mercury__rtree__CastY_8);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = MR_TRUE;
    else
      {
        MR_Float mercury__rtree__Var_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));

        mercury__rtree__succeeded = (mercury__rtree__Var_3 == mercury__rtree__Var_5);
        if (mercury__rtree__succeeded)
          mercury__rtree__succeeded = (mercury__rtree__Var_4 == mercury__rtree__Var_6);
      }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____delete_info_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_19,
  MR_Word mercury__rtree__TypeInfo_for_V_20,
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_17 = (MR_Integer) mercury__rtree__HeadVar__2_2;
    MR_Integer mercury__rtree__CastY_18 = (MR_Integer) mercury__rtree__HeadVar__3_3;

    mercury__rtree__succeeded = (mercury__rtree__CastX_17 == mercury__rtree__CastY_18);
    if (mercury__rtree__succeeded)
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__rtree__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mercury__rtree__TypeCtorInfo_26_26 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
            MR_Word mercury__rtree__TypeInfo_27_27;
            MR_Word mercury__rtree__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__rtree__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_27_27, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_26_26));
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_27_27, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_19));
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_27_27, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_20));
            }
            {
              mercury__list____Compare____list_1_0(mercury__rtree__TypeInfo_27_27, mercury__rtree__HeadVar__1_1, (MR_Word) mercury__rtree__Var_30, (MR_Word) mercury__rtree__Var_5);
            }
          }
        else
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word mercury__rtree__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__rtree__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Integer mercury__rtree__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__rtree__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__rtree__Var_16;

            mercury__rtree__succeeded = (mercury__rtree__Var_32 < mercury__rtree__Var_14);
            if (mercury__rtree__succeeded)
              mercury__rtree__Var_16 = (MR_Integer) 1;
            else
              {
                mercury__rtree__succeeded = (mercury__rtree__Var_32 == mercury__rtree__Var_14);
                if (mercury__rtree__succeeded)
                  mercury__rtree__Var_16 = (MR_Integer) 0;
                else
                  mercury__rtree__Var_16 = (MR_Integer) 2;
              }
            mercury__rtree__succeeded = (mercury__rtree__Var_16 == (MR_Integer) 0);
            mercury__rtree__succeeded = !(mercury__rtree__succeeded);
            if (mercury__rtree__succeeded)
              *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_16;
            else
              {
                MR_Word mercury__rtree__TypeCtorInfo_22_22 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
                MR_Word mercury__rtree__TypeInfo_23_23;

                {
                  mercury__rtree__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_23_23, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_22_22));
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_23_23, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_19));
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_23_23, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_20));
                }
                {
                  mercury__list____Compare____list_1_0(mercury__rtree__TypeInfo_23_23, mercury__rtree__HeadVar__1_1, (MR_Word) mercury__rtree__Var_31, (MR_Word) mercury__rtree__Var_15);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0(
  MR_Word mercury__rtree__TypeInfo_for_K_11,
  MR_Word mercury__rtree__TypeInfo_for_V_12,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_9 = (MR_Integer) mercury__rtree__HeadVar__1_1;
    MR_Integer mercury__rtree__CastY_10 = (MR_Integer) mercury__rtree__HeadVar__2_2;

    mercury__rtree__succeeded = (mercury__rtree__CastX_9 == mercury__rtree__CastY_10);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__rtree__TypeCtorInfo_13_13;
        MR_Word mercury__rtree__TypeInfo_14_14;
        MR_Word mercury__rtree__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__rtree__Var_4;

        mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
            mercury__rtree__TypeCtorInfo_13_13 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
            {
              mercury__rtree__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_14_14, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_13_13));
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_14_14, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_11));
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_14_14, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_12));
            }
            {
              mercury__rtree__succeeded = mercury__list____Unify____list_1_0(mercury__rtree__TypeInfo_14_14, (MR_Word) mercury__rtree__Var_3, (MR_Word) mercury__rtree__Var_4);
            }
          }
      }
    else
      {
        MR_Word mercury__rtree__TypeCtorInfo_17_17;
        MR_Word mercury__rtree__TypeInfo_18_18;
        MR_Integer mercury__rtree__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__rtree__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__rtree__Var_7;
        MR_Word mercury__rtree__Var_8;

        mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
            mercury__rtree__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
            mercury__rtree__succeeded = (mercury__rtree__Var_5 == mercury__rtree__Var_7);
            if (mercury__rtree__succeeded)
              {
                mercury__rtree__TypeCtorInfo_17_17 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
                {
                  mercury__rtree__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_18_18, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_17_17));
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_18_18, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_11));
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_18_18, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_12));
                }
                {
                  mercury__rtree__succeeded = mercury__list____Unify____list_1_0(mercury__rtree__TypeInfo_18_18, (MR_Word) mercury__rtree__Var_6, (MR_Word) mercury__rtree__Var_8);
                }
              }
          }
      }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____box3d_0_0(
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_21 = (MR_Integer) mercury__rtree__HeadVar__2_2;
    MR_Integer mercury__rtree__CastY_22 = (MR_Integer) mercury__rtree__HeadVar__3_3;

    mercury__rtree__succeeded = (mercury__rtree__CastX_21 == mercury__rtree__CastY_22);
    if (mercury__rtree__succeeded)
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float mercury__rtree__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float mercury__rtree__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
        MR_Float mercury__rtree__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 4)));
        MR_Float mercury__rtree__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
        MR_Float mercury__rtree__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Float mercury__rtree__Var_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
        MR_Float mercury__rtree__Var_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 4)));
        MR_Float mercury__rtree__Var_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mercury__rtree__Var_16;

        mercury__rtree__succeeded = (mercury__rtree__Var_4 < mercury__rtree__Var_10);
        if (mercury__rtree__succeeded)
          mercury__rtree__Var_16 = (MR_Integer) 1;
        else
          {
            mercury__rtree__succeeded = (mercury__rtree__Var_4 > mercury__rtree__Var_10);
            if (mercury__rtree__succeeded)
              mercury__rtree__Var_16 = (MR_Integer) 2;
            else
              mercury__rtree__Var_16 = (MR_Integer) 0;
          }
        mercury__rtree__succeeded = (mercury__rtree__Var_16 == (MR_Integer) 0);
        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
        if (mercury__rtree__succeeded)
          *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_16;
        else
          {
            MR_Word mercury__rtree__Var_17;

            mercury__rtree__succeeded = (mercury__rtree__Var_5 < mercury__rtree__Var_11);
            if (mercury__rtree__succeeded)
              mercury__rtree__Var_17 = (MR_Integer) 1;
            else
              {
                mercury__rtree__succeeded = (mercury__rtree__Var_5 > mercury__rtree__Var_11);
                if (mercury__rtree__succeeded)
                  mercury__rtree__Var_17 = (MR_Integer) 2;
                else
                  mercury__rtree__Var_17 = (MR_Integer) 0;
              }
            mercury__rtree__succeeded = (mercury__rtree__Var_17 == (MR_Integer) 0);
            mercury__rtree__succeeded = !(mercury__rtree__succeeded);
            if (mercury__rtree__succeeded)
              *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_17;
            else
              {
                MR_Word mercury__rtree__Var_18;

                mercury__rtree__succeeded = (mercury__rtree__Var_6 < mercury__rtree__Var_12);
                if (mercury__rtree__succeeded)
                  mercury__rtree__Var_18 = (MR_Integer) 1;
                else
                  {
                    mercury__rtree__succeeded = (mercury__rtree__Var_6 > mercury__rtree__Var_12);
                    if (mercury__rtree__succeeded)
                      mercury__rtree__Var_18 = (MR_Integer) 2;
                    else
                      mercury__rtree__Var_18 = (MR_Integer) 0;
                  }
                mercury__rtree__succeeded = (mercury__rtree__Var_18 == (MR_Integer) 0);
                mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                if (mercury__rtree__succeeded)
                  *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_18;
                else
                  {
                    MR_Word mercury__rtree__Var_19;

                    mercury__rtree__succeeded = (mercury__rtree__Var_7 < mercury__rtree__Var_13);
                    if (mercury__rtree__succeeded)
                      mercury__rtree__Var_19 = (MR_Integer) 1;
                    else
                      {
                        mercury__rtree__succeeded = (mercury__rtree__Var_7 > mercury__rtree__Var_13);
                        if (mercury__rtree__succeeded)
                          mercury__rtree__Var_19 = (MR_Integer) 2;
                        else
                          mercury__rtree__Var_19 = (MR_Integer) 0;
                      }
                    mercury__rtree__succeeded = (mercury__rtree__Var_19 == (MR_Integer) 0);
                    mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                    if (mercury__rtree__succeeded)
                      *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_19;
                    else
                      {
                        MR_Word mercury__rtree__Var_20;

                        mercury__rtree__succeeded = (mercury__rtree__Var_8 < mercury__rtree__Var_14);
                        if (mercury__rtree__succeeded)
                          mercury__rtree__Var_20 = (MR_Integer) 1;
                        else
                          {
                            mercury__rtree__succeeded = (mercury__rtree__Var_8 > mercury__rtree__Var_14);
                            if (mercury__rtree__succeeded)
                              mercury__rtree__Var_20 = (MR_Integer) 2;
                            else
                              mercury__rtree__Var_20 = (MR_Integer) 0;
                          }
                        mercury__rtree__succeeded = (mercury__rtree__Var_20 == (MR_Integer) 0);
                        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                        if (mercury__rtree__succeeded)
                          *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_20;
                        else
                          {
                            mercury__rtree__succeeded = (mercury__rtree__Var_9 < mercury__rtree__Var_15);
                            if (mercury__rtree__succeeded)
                              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
                            else
                              {
                                mercury__rtree__succeeded = (mercury__rtree__Var_9 > mercury__rtree__Var_15);
                                if (mercury__rtree__succeeded)
                                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                                else
                                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_15 = (MR_Integer) mercury__rtree__HeadVar__1_1;
    MR_Integer mercury__rtree__CastY_16 = (MR_Integer) mercury__rtree__HeadVar__2_2;

    mercury__rtree__succeeded = (mercury__rtree__CastX_15 == mercury__rtree__CastY_16);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = MR_TRUE;
    else
      {
        MR_Float mercury__rtree__Var_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float mercury__rtree__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
        MR_Float mercury__rtree__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 4)));
        MR_Float mercury__rtree__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
        MR_Float mercury__rtree__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float mercury__rtree__Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
        MR_Float mercury__rtree__Var_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 4)));
        MR_Float mercury__rtree__Var_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));

        mercury__rtree__succeeded = (mercury__rtree__Var_3 == mercury__rtree__Var_9);
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__succeeded = (mercury__rtree__Var_4 == mercury__rtree__Var_10);
            if (mercury__rtree__succeeded)
              {
                mercury__rtree__succeeded = (mercury__rtree__Var_5 == mercury__rtree__Var_11);
                if (mercury__rtree__succeeded)
                  {
                    mercury__rtree__succeeded = (mercury__rtree__Var_6 == mercury__rtree__Var_12);
                    if (mercury__rtree__succeeded)
                      {
                        mercury__rtree__succeeded = (mercury__rtree__Var_7 == mercury__rtree__Var_13);
                        if (mercury__rtree__succeeded)
                          mercury__rtree__succeeded = (mercury__rtree__Var_8 == mercury__rtree__Var_14);
                      }
                  }
              }
          }
      }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree____Compare____box_0_0(
  MR_Word * mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_15 = (MR_Integer) mercury__rtree__HeadVar__2_2;
    MR_Integer mercury__rtree__CastY_16 = (MR_Integer) mercury__rtree__HeadVar__3_3;

    mercury__rtree__succeeded = (mercury__rtree__CastX_15 == mercury__rtree__CastY_16);
    if (mercury__rtree__succeeded)
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float mercury__rtree__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float mercury__rtree__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
        MR_Float mercury__rtree__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Float mercury__rtree__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__rtree__Var_12;

        mercury__rtree__succeeded = (mercury__rtree__Var_4 < mercury__rtree__Var_8);
        if (mercury__rtree__succeeded)
          mercury__rtree__Var_12 = (MR_Integer) 1;
        else
          {
            mercury__rtree__succeeded = (mercury__rtree__Var_4 > mercury__rtree__Var_8);
            if (mercury__rtree__succeeded)
              mercury__rtree__Var_12 = (MR_Integer) 2;
            else
              mercury__rtree__Var_12 = (MR_Integer) 0;
          }
        mercury__rtree__succeeded = (mercury__rtree__Var_12 == (MR_Integer) 0);
        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
        if (mercury__rtree__succeeded)
          *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_12;
        else
          {
            MR_Word mercury__rtree__Var_13;

            mercury__rtree__succeeded = (mercury__rtree__Var_5 < mercury__rtree__Var_9);
            if (mercury__rtree__succeeded)
              mercury__rtree__Var_13 = (MR_Integer) 1;
            else
              {
                mercury__rtree__succeeded = (mercury__rtree__Var_5 > mercury__rtree__Var_9);
                if (mercury__rtree__succeeded)
                  mercury__rtree__Var_13 = (MR_Integer) 2;
                else
                  mercury__rtree__Var_13 = (MR_Integer) 0;
              }
            mercury__rtree__succeeded = (mercury__rtree__Var_13 == (MR_Integer) 0);
            mercury__rtree__succeeded = !(mercury__rtree__succeeded);
            if (mercury__rtree__succeeded)
              *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_13;
            else
              {
                MR_Word mercury__rtree__Var_14;

                mercury__rtree__succeeded = (mercury__rtree__Var_6 < mercury__rtree__Var_10);
                if (mercury__rtree__succeeded)
                  mercury__rtree__Var_14 = (MR_Integer) 1;
                else
                  {
                    mercury__rtree__succeeded = (mercury__rtree__Var_6 > mercury__rtree__Var_10);
                    if (mercury__rtree__succeeded)
                      mercury__rtree__Var_14 = (MR_Integer) 2;
                    else
                      mercury__rtree__Var_14 = (MR_Integer) 0;
                  }
                mercury__rtree__succeeded = (mercury__rtree__Var_14 == (MR_Integer) 0);
                mercury__rtree__succeeded = !(mercury__rtree__succeeded);
                if (mercury__rtree__succeeded)
                  *mercury__rtree__HeadVar__1_1 = mercury__rtree__Var_14;
                else
                  {
                    mercury__rtree__succeeded = (mercury__rtree__Var_7 < mercury__rtree__Var_11);
                    if (mercury__rtree__succeeded)
                      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
                    else
                      {
                        mercury__rtree__succeeded = (mercury__rtree__Var_7 > mercury__rtree__Var_11);
                        if (mercury__rtree__succeeded)
                          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0(
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Integer mercury__rtree__CastX_11 = (MR_Integer) mercury__rtree__HeadVar__1_1;
    MR_Integer mercury__rtree__CastY_12 = (MR_Integer) mercury__rtree__HeadVar__2_2;

    mercury__rtree__succeeded = (mercury__rtree__CastX_11 == mercury__rtree__CastY_12);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = MR_TRUE;
    else
      {
        MR_Float mercury__rtree__Var_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Float mercury__rtree__Var_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
        MR_Float mercury__rtree__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float mercury__rtree__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float mercury__rtree__Var_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
        MR_Float mercury__rtree__Var_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));

        mercury__rtree__succeeded = (mercury__rtree__Var_3 == mercury__rtree__Var_7);
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__succeeded = (mercury__rtree__Var_4 == mercury__rtree__Var_8);
            if (mercury__rtree__succeeded)
              {
                mercury__rtree__succeeded = (mercury__rtree__Var_5 == mercury__rtree__Var_9);
                if (mercury__rtree__succeeded)
                  mercury__rtree__succeeded = (mercury__rtree__Var_6 == mercury__rtree__Var_10);
              }
          }
      }
    return mercury__rtree__succeeded;
  }
}

MR_Float MR_CALL 
mercury__rtree__bounding_region_size_2_f_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_4,
  MR_Box mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__3_3;
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_4, (MR_Integer) 0)), (MR_Integer) 9)));
    MR_Box mercury__rtree__conv1_HeadVar__3_3;

    {
      mercury__rtree__conv1_HeadVar__3_3 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_4), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    mercury__rtree__HeadVar__3_3 = MR_unbox_float(mercury__rtree__conv1_HeadVar__3_3);
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
mercury__rtree__bounding_region_2_f_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_4,
  MR_Box mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__HeadVar__3_3;
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_4, (MR_Integer) 0)), (MR_Integer) 8)));

    {
      mercury__rtree__HeadVar__3_3 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_4), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__rtree__size_1_f_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_3,
  MR_Box mercury__rtree__HeadVar__1_1)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__2_2;
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 7)));
    MR_Box mercury__rtree__conv1_HeadVar__2_2;

    {
      mercury__rtree__conv1_HeadVar__2_2 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_3), mercury__rtree__HeadVar__1_1);
    }
    mercury__rtree__HeadVar__2_2 = MR_unbox_float(mercury__rtree__conv1_HeadVar__2_2);
    return mercury__rtree__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__rtree__contains_2_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_3,
  MR_Box mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 6)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_3), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rtree__intersects_2_p_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_3,
  MR_Box mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 5)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_3), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
    return mercury__rtree__succeeded;
  }
}

MR_Float MR_CALL 
mercury__rtree__interval_bounding_region_length_2_f_0(
  MR_Word mercury__rtree__A_4,
  MR_Word mercury__rtree__B_5)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__3_3;
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__BMax_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
    MR_Float mercury__rtree__AMin_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__BMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
    MR_Float mercury__rtree__Var_10;
    MR_Float mercury__rtree__Var_11;

    mercury__rtree__succeeded = (mercury__rtree__AMax_6 >= mercury__rtree__BMax_7);
    if (mercury__rtree__succeeded)
      mercury__rtree__Var_10 = mercury__rtree__AMax_6;
    else
      mercury__rtree__Var_10 = mercury__rtree__BMax_7;
    mercury__rtree__succeeded = (mercury__rtree__AMin_8 <= mercury__rtree__BMin_9);
    if (mercury__rtree__succeeded)
      mercury__rtree__Var_11 = mercury__rtree__AMin_8;
    else
      mercury__rtree__Var_11 = mercury__rtree__BMin_9;
    mercury__rtree__HeadVar__3_3 = (mercury__rtree__Var_10 - mercury__rtree__Var_11);
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rtree__interval_bounding_region_2_f_0(
  MR_Word mercury__rtree__A_4,
  MR_Word mercury__rtree__B_5)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__HeadVar__3_3;
    MR_Float mercury__rtree__AMin_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
    MR_Float mercury__rtree__AMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__BMax_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
    MR_Float mercury__rtree__Var_10;
    MR_Float mercury__rtree__Var_11;

    mercury__rtree__succeeded = (mercury__rtree__AMin_6 <= mercury__rtree__BMin_7);
    if (mercury__rtree__succeeded)
      mercury__rtree__Var_10 = mercury__rtree__AMin_6;
    else
      mercury__rtree__Var_10 = mercury__rtree__BMin_7;
    mercury__rtree__succeeded = (mercury__rtree__AMax_8 >= mercury__rtree__BMax_9);
    if (mercury__rtree__succeeded)
      mercury__rtree__Var_11 = mercury__rtree__AMax_8;
    else
      mercury__rtree__Var_11 = mercury__rtree__BMax_9;
    {
      mercury__rtree__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, 0) = MR_box_float(mercury__rtree__Var_10);
      MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, 1) = MR_box_float(mercury__rtree__Var_11);
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Float MR_CALL 
mercury__rtree__interval_length_1_f_0(
  MR_Word mercury__rtree__HeadVar__1_1)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__2_2;
    MR_Float mercury__rtree__Max_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float mercury__rtree__Min_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

    mercury__rtree__HeadVar__2_2 = (mercury__rtree__Max_3 - mercury__rtree__Min_4);
    return mercury__rtree__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__rtree__interval_contains_2_p_0(
  MR_Word mercury__rtree__A_3,
  MR_Word mercury__rtree__B_4)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));

    mercury__rtree__succeeded = (mercury__rtree__AMin_5 >= mercury__rtree__BMin_7);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = (mercury__rtree__AMax_6 <= mercury__rtree__BMax_8);
    return mercury__rtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rtree__interval_intersects_2_p_0(
  MR_Word mercury__rtree__A_3,
  MR_Word mercury__rtree__B_4)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));

    mercury__rtree__succeeded = (mercury__rtree__AMin_5 <= mercury__rtree__BMin_7);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = (mercury__rtree__AMax_6 >= mercury__rtree__BMin_7);
    else
      mercury__rtree__succeeded = (mercury__rtree__AMin_5 <= mercury__rtree__BMax_8);
    return mercury__rtree__succeeded;
  }
}

MR_Float MR_CALL 
mercury__rtree__box_bounding_region_area_2_f_0(
  MR_Word mercury__rtree__A_4,
  MR_Word mercury__rtree__B_5)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__3_3;
    MR_Float mercury__rtree__XMax_6;
    MR_Float mercury__rtree__XMin_7;
    MR_Float mercury__rtree__YMax_8;
    MR_Float mercury__rtree__YMin_9;
    MR_Float mercury__rtree__AXMin_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 3)));
    MR_Float mercury__rtree__BXMin_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 3)));
    MR_Float mercury__rtree__Var_18;
    MR_Float mercury__rtree__Var_19;

    mercury__rtree__succeeded = (mercury__rtree__AXMin_10 <= mercury__rtree__BXMin_14);
    if (mercury__rtree__succeeded)
      mercury__rtree__XMin_7 = mercury__rtree__AXMin_10;
    else
      mercury__rtree__XMin_7 = mercury__rtree__BXMin_14;
    mercury__rtree__succeeded = (mercury__rtree__AXMax_11 >= mercury__rtree__BXMax_15);
    if (mercury__rtree__succeeded)
      mercury__rtree__XMax_6 = mercury__rtree__AXMax_11;
    else
      mercury__rtree__XMax_6 = mercury__rtree__BXMax_15;
    mercury__rtree__Var_18 = (mercury__rtree__XMax_6 - mercury__rtree__XMin_7);
    mercury__rtree__succeeded = (mercury__rtree__AYMin_12 <= mercury__rtree__BYMin_16);
    if (mercury__rtree__succeeded)
      mercury__rtree__YMin_9 = mercury__rtree__AYMin_12;
    else
      mercury__rtree__YMin_9 = mercury__rtree__BYMin_16;
    mercury__rtree__succeeded = (mercury__rtree__AYMax_13 >= mercury__rtree__BYMax_17);
    if (mercury__rtree__succeeded)
      mercury__rtree__YMax_8 = mercury__rtree__AYMax_13;
    else
      mercury__rtree__YMax_8 = mercury__rtree__BYMax_17;
    mercury__rtree__Var_19 = (mercury__rtree__YMax_8 - mercury__rtree__YMin_9);
    mercury__rtree__HeadVar__3_3 = (mercury__rtree__Var_18 * mercury__rtree__Var_19);
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rtree__box_bounding_region_2_f_0(
  MR_Word mercury__rtree__A_4,
  MR_Word mercury__rtree__B_5)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__C_6;
    MR_Float mercury__rtree__AXMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 3)));
    MR_Float mercury__rtree__BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 3)));
    MR_Float mercury__rtree__CXMin_15;
    MR_Float mercury__rtree__CXMax_16;
    MR_Float mercury__rtree__CYMin_17;
    MR_Float mercury__rtree__CYMax_18;

    mercury__rtree__succeeded = (mercury__rtree__AXMin_7 <= mercury__rtree__BXMin_11);
    if (mercury__rtree__succeeded)
      mercury__rtree__CXMin_15 = mercury__rtree__AXMin_7;
    else
      mercury__rtree__CXMin_15 = mercury__rtree__BXMin_11;
    mercury__rtree__succeeded = (mercury__rtree__AXMax_8 >= mercury__rtree__BXMax_12);
    if (mercury__rtree__succeeded)
      mercury__rtree__CXMax_16 = mercury__rtree__AXMax_8;
    else
      mercury__rtree__CXMax_16 = mercury__rtree__BXMax_12;
    mercury__rtree__succeeded = (mercury__rtree__AYMin_9 <= mercury__rtree__BYMin_13);
    if (mercury__rtree__succeeded)
      mercury__rtree__CYMin_17 = mercury__rtree__AYMin_9;
    else
      mercury__rtree__CYMin_17 = mercury__rtree__BYMin_13;
    mercury__rtree__succeeded = (mercury__rtree__AYMax_10 >= mercury__rtree__BYMax_14);
    if (mercury__rtree__succeeded)
      mercury__rtree__CYMax_18 = mercury__rtree__AYMax_10;
    else
      mercury__rtree__CYMax_18 = mercury__rtree__BYMax_14;
    {
      mercury__rtree__C_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 0) = MR_box_float(mercury__rtree__CXMin_15);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 1) = MR_box_float(mercury__rtree__CXMax_16);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 2) = MR_box_float(mercury__rtree__CYMin_17);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 3) = MR_box_float(mercury__rtree__CYMax_18);
    }
    return mercury__rtree__C_6;
  }
}

MR_Float MR_CALL 
mercury__rtree__box_area_1_f_0(
  MR_Word mercury__rtree__HeadVar__1_1)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__2_2;
    MR_Float mercury__rtree__XMin_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float mercury__rtree__XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
    MR_Float mercury__rtree__YMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
    MR_Float mercury__rtree__YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
    MR_Float mercury__rtree__Var_7 = (mercury__rtree__XMax_4 - mercury__rtree__XMin_3);
    MR_Float mercury__rtree__Var_8 = (mercury__rtree__YMax_6 - mercury__rtree__YMin_5);

    mercury__rtree__HeadVar__2_2 = (mercury__rtree__Var_7 * mercury__rtree__Var_8);
    return mercury__rtree__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__rtree__box_contains_2_p_0(
  MR_Word mercury__rtree__A_3,
  MR_Word mercury__rtree__B_4)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 3)));
    MR_Float mercury__rtree__BXMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 3)));

    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 >= mercury__rtree__BXMin_9);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__succeeded = (mercury__rtree__AXMax_6 <= mercury__rtree__BXMax_10);
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__succeeded = (mercury__rtree__AYMin_7 >= mercury__rtree__BYMin_11);
            if (mercury__rtree__succeeded)
              mercury__rtree__succeeded = (mercury__rtree__AYMax_8 <= mercury__rtree__BYMax_12);
          }
      }
    return mercury__rtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rtree__box_intersects_2_p_0(
  MR_Word mercury__rtree__A_3,
  MR_Word mercury__rtree__B_4)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 3)));
    MR_Float mercury__rtree__BXMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 3)));

    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 <= mercury__rtree__BXMin_9);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = (mercury__rtree__AXMax_6 >= mercury__rtree__BXMin_9);
    else
      mercury__rtree__succeeded = (mercury__rtree__AXMin_5 <= mercury__rtree__BXMax_10);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__succeeded = (mercury__rtree__AYMin_7 <= mercury__rtree__BYMin_11);
        if (mercury__rtree__succeeded)
          mercury__rtree__succeeded = (mercury__rtree__AYMax_8 >= mercury__rtree__BYMin_11);
        else
          mercury__rtree__succeeded = (mercury__rtree__AYMin_7 <= mercury__rtree__BYMax_12);
      }
    return mercury__rtree__succeeded;
  }
}

MR_Float MR_CALL 
mercury__rtree__box3d_bounding_region_volume_2_f_0(
  MR_Word mercury__rtree__A_4,
  MR_Word mercury__rtree__B_5)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__Volume_6;
    MR_Float mercury__rtree__AXMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 3)));
    MR_Float mercury__rtree__AZMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 4)));
    MR_Float mercury__rtree__AZMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 5)));
    MR_Float mercury__rtree__BXMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 3)));
    MR_Float mercury__rtree__BZMin_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 4)));
    MR_Float mercury__rtree__BZMax_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 5)));
    MR_Float mercury__rtree__XMin_19;
    MR_Float mercury__rtree__XMax_20;
    MR_Float mercury__rtree__YMin_21;
    MR_Float mercury__rtree__YMax_22;
    MR_Float mercury__rtree__ZMin_23;
    MR_Float mercury__rtree__ZMax_24;
    MR_Float mercury__rtree__Var_25;
    MR_Float mercury__rtree__Var_26;
    MR_Float mercury__rtree__Var_27;
    MR_Float mercury__rtree__Var_28;

    mercury__rtree__succeeded = (mercury__rtree__AXMin_7 <= mercury__rtree__BXMin_13);
    if (mercury__rtree__succeeded)
      mercury__rtree__XMin_19 = mercury__rtree__AXMin_7;
    else
      mercury__rtree__XMin_19 = mercury__rtree__BXMin_13;
    mercury__rtree__succeeded = (mercury__rtree__AXMax_8 >= mercury__rtree__BXMax_14);
    if (mercury__rtree__succeeded)
      mercury__rtree__XMax_20 = mercury__rtree__AXMax_8;
    else
      mercury__rtree__XMax_20 = mercury__rtree__BXMax_14;
    mercury__rtree__succeeded = (mercury__rtree__AYMin_9 <= mercury__rtree__BYMin_15);
    if (mercury__rtree__succeeded)
      mercury__rtree__YMin_21 = mercury__rtree__AYMin_9;
    else
      mercury__rtree__YMin_21 = mercury__rtree__BYMin_15;
    mercury__rtree__succeeded = (mercury__rtree__AYMax_10 >= mercury__rtree__BYMax_16);
    if (mercury__rtree__succeeded)
      mercury__rtree__YMax_22 = mercury__rtree__AYMax_10;
    else
      mercury__rtree__YMax_22 = mercury__rtree__BYMax_16;
    mercury__rtree__succeeded = (mercury__rtree__AZMin_11 <= mercury__rtree__BZMin_17);
    if (mercury__rtree__succeeded)
      mercury__rtree__ZMin_23 = mercury__rtree__AZMin_11;
    else
      mercury__rtree__ZMin_23 = mercury__rtree__BZMin_17;
    mercury__rtree__succeeded = (mercury__rtree__AZMax_12 >= mercury__rtree__BZMax_18);
    if (mercury__rtree__succeeded)
      mercury__rtree__ZMax_24 = mercury__rtree__AZMax_12;
    else
      mercury__rtree__ZMax_24 = mercury__rtree__BZMax_18;
    mercury__rtree__Var_26 = (mercury__rtree__XMax_20 - mercury__rtree__XMin_19);
    mercury__rtree__Var_27 = (mercury__rtree__YMax_22 - mercury__rtree__YMin_21);
    mercury__rtree__Var_25 = (mercury__rtree__Var_26 * mercury__rtree__Var_27);
    mercury__rtree__Var_28 = (mercury__rtree__ZMax_24 - mercury__rtree__ZMin_23);
    mercury__rtree__Volume_6 = (mercury__rtree__Var_25 * mercury__rtree__Var_28);
    return mercury__rtree__Volume_6;
  }
}

MR_Word MR_CALL 
mercury__rtree__box3d_bounding_region_2_f_0(
  MR_Word mercury__rtree__A_4,
  MR_Word mercury__rtree__B_5)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__C_6;
    MR_Float mercury__rtree__AXMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 3)));
    MR_Float mercury__rtree__AZMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 4)));
    MR_Float mercury__rtree__AZMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 5)));
    MR_Float mercury__rtree__BXMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 3)));
    MR_Float mercury__rtree__BZMin_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 4)));
    MR_Float mercury__rtree__BZMax_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 5)));
    MR_Float mercury__rtree__CXMin_19;
    MR_Float mercury__rtree__CXMax_20;
    MR_Float mercury__rtree__CYMin_21;
    MR_Float mercury__rtree__CYMax_22;
    MR_Float mercury__rtree__CZMin_23;
    MR_Float mercury__rtree__CZMax_24;

    mercury__rtree__succeeded = (mercury__rtree__AXMin_7 <= mercury__rtree__BXMin_13);
    if (mercury__rtree__succeeded)
      mercury__rtree__CXMin_19 = mercury__rtree__AXMin_7;
    else
      mercury__rtree__CXMin_19 = mercury__rtree__BXMin_13;
    mercury__rtree__succeeded = (mercury__rtree__AXMax_8 >= mercury__rtree__BXMax_14);
    if (mercury__rtree__succeeded)
      mercury__rtree__CXMax_20 = mercury__rtree__AXMax_8;
    else
      mercury__rtree__CXMax_20 = mercury__rtree__BXMax_14;
    mercury__rtree__succeeded = (mercury__rtree__AYMin_9 <= mercury__rtree__BYMin_15);
    if (mercury__rtree__succeeded)
      mercury__rtree__CYMin_21 = mercury__rtree__AYMin_9;
    else
      mercury__rtree__CYMin_21 = mercury__rtree__BYMin_15;
    mercury__rtree__succeeded = (mercury__rtree__AYMax_10 >= mercury__rtree__BYMax_16);
    if (mercury__rtree__succeeded)
      mercury__rtree__CYMax_22 = mercury__rtree__AYMax_10;
    else
      mercury__rtree__CYMax_22 = mercury__rtree__BYMax_16;
    mercury__rtree__succeeded = (mercury__rtree__AZMin_11 <= mercury__rtree__BZMin_17);
    if (mercury__rtree__succeeded)
      mercury__rtree__CZMin_23 = mercury__rtree__AZMin_11;
    else
      mercury__rtree__CZMin_23 = mercury__rtree__BZMin_17;
    mercury__rtree__succeeded = (mercury__rtree__AZMax_12 >= mercury__rtree__BZMax_18);
    if (mercury__rtree__succeeded)
      mercury__rtree__CZMax_24 = mercury__rtree__AZMax_12;
    else
      mercury__rtree__CZMax_24 = mercury__rtree__BZMax_18;
    {
      mercury__rtree__C_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 0) = MR_box_float(mercury__rtree__CXMin_19);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 1) = MR_box_float(mercury__rtree__CXMax_20);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 2) = MR_box_float(mercury__rtree__CYMin_21);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 3) = MR_box_float(mercury__rtree__CYMax_22);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 4) = MR_box_float(mercury__rtree__CZMin_23);
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 5) = MR_box_float(mercury__rtree__CZMax_24);
    }
    return mercury__rtree__C_6;
  }
}

MR_Float MR_CALL 
mercury__rtree__box3d_volume_1_f_0(
  MR_Word mercury__rtree__Box_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__HeadVar__2_2;
    MR_Float mercury__rtree__XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 1)));
    MR_Float mercury__rtree__XMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 0)));
    MR_Float mercury__rtree__YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 3)));
    MR_Float mercury__rtree__YMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 2)));
    MR_Float mercury__rtree__ZMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 5)));
    MR_Float mercury__rtree__ZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 4)));
    MR_Float mercury__rtree__Var_10;
    MR_Float mercury__rtree__Var_11 = (mercury__rtree__XMax_4 - mercury__rtree__XMin_5);
    MR_Float mercury__rtree__Var_12 = (mercury__rtree__YMax_6 - mercury__rtree__YMin_7);
    MR_Float mercury__rtree__Var_13;

    mercury__rtree__Var_10 = (mercury__rtree__Var_11 * mercury__rtree__Var_12);
    mercury__rtree__Var_13 = (mercury__rtree__ZMax_8 - mercury__rtree__ZMin_9);
    mercury__rtree__HeadVar__2_2 = (mercury__rtree__Var_10 * mercury__rtree__Var_13);
    return mercury__rtree__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__rtree__box3d_contains_2_p_0(
  MR_Word mercury__rtree__A_3,
  MR_Word mercury__rtree__B_4)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 3)));
    MR_Float mercury__rtree__AZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 4)));
    MR_Float mercury__rtree__AZMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 5)));
    MR_Float mercury__rtree__BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 3)));
    MR_Float mercury__rtree__BZMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 4)));
    MR_Float mercury__rtree__BZMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 5)));

    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 >= mercury__rtree__BXMin_11);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__succeeded = (mercury__rtree__AXMax_6 <= mercury__rtree__BXMax_12);
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__succeeded = (mercury__rtree__AYMin_7 >= mercury__rtree__BYMin_13);
            if (mercury__rtree__succeeded)
              {
                mercury__rtree__succeeded = (mercury__rtree__AYMax_8 <= mercury__rtree__BYMax_14);
                if (mercury__rtree__succeeded)
                  {
                    mercury__rtree__succeeded = (mercury__rtree__AZMin_9 >= mercury__rtree__BZMin_15);
                    if (mercury__rtree__succeeded)
                      mercury__rtree__succeeded = (mercury__rtree__AZMax_10 <= mercury__rtree__BZMax_16);
                  }
              }
          }
      }
    return mercury__rtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rtree__box3d_intersects_2_p_0(
  MR_Word mercury__rtree__A_3,
  MR_Word mercury__rtree__B_4)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 2)));
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 3)));
    MR_Float mercury__rtree__AZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 4)));
    MR_Float mercury__rtree__AZMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 5)));
    MR_Float mercury__rtree__BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
    MR_Float mercury__rtree__BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));
    MR_Float mercury__rtree__BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 2)));
    MR_Float mercury__rtree__BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 3)));
    MR_Float mercury__rtree__BZMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 4)));
    MR_Float mercury__rtree__BZMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 5)));

    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 <= mercury__rtree__BXMin_11);
    if (mercury__rtree__succeeded)
      mercury__rtree__succeeded = (mercury__rtree__AXMax_6 >= mercury__rtree__BXMin_11);
    else
      mercury__rtree__succeeded = (mercury__rtree__AXMin_5 <= mercury__rtree__BXMax_12);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__succeeded = (mercury__rtree__AYMin_7 <= mercury__rtree__BYMin_13);
        if (mercury__rtree__succeeded)
          mercury__rtree__succeeded = (mercury__rtree__AYMax_8 >= mercury__rtree__BYMin_13);
        else
          mercury__rtree__succeeded = (mercury__rtree__AYMin_7 <= mercury__rtree__BYMax_14);
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__succeeded = (mercury__rtree__AZMin_9 <= mercury__rtree__BZMin_15);
            if (mercury__rtree__succeeded)
              mercury__rtree__succeeded = (mercury__rtree__AZMax_10 >= mercury__rtree__BZMin_15);
            else
              mercury__rtree__succeeded = (mercury__rtree__AZMin_9 <= mercury__rtree__BZMax_16);
          }
      }
    return mercury__rtree__succeeded;
  }
}

static MR_Word MR_CALL 
mercury__rtree__minimum_of_four_4_f_0(
  MR_Word mercury__rtree__TypeInfo_for_T_18,
  MR_Box mercury__rtree__A_6,
  MR_Box mercury__rtree__B_7,
  MR_Box mercury__rtree__C_8,
  MR_Box mercury__rtree__D_9)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__Min_10;
    MR_Word mercury__rtree__Min0_11;
    MR_Box mercury__rtree__MinItem0_12;
    MR_Word mercury__rtree__Min1_13;
    MR_Box mercury__rtree__MinItem_14;
    MR_Word mercury__rtree__Var_19;
    MR_Word mercury__rtree__Var_20;
    MR_Word mercury__rtree__Var_21;

    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_T_18, &mercury__rtree__Var_19, mercury__rtree__A_6, mercury__rtree__B_7);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_19);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Min0_11 = (MR_Integer) 0;
        mercury__rtree__MinItem0_12 = mercury__rtree__A_6;
      }
    else
      {
        mercury__rtree__Min0_11 = (MR_Integer) 1;
        mercury__rtree__MinItem0_12 = mercury__rtree__B_7;
      }
    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_T_18, &mercury__rtree__Var_20, mercury__rtree__MinItem0_12, mercury__rtree__C_8);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_20);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Min1_13 = mercury__rtree__Min0_11;
        mercury__rtree__MinItem_14 = mercury__rtree__MinItem0_12;
      }
    else
      {
        mercury__rtree__Min1_13 = (MR_Integer) 2;
        mercury__rtree__MinItem_14 = mercury__rtree__C_8;
      }
    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_T_18, &mercury__rtree__Var_21, mercury__rtree__MinItem_14, mercury__rtree__D_9);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_21);
    if (mercury__rtree__succeeded)
      mercury__rtree__Min_10 = mercury__rtree__Min1_13;
    else
      mercury__rtree__Min_10 = (MR_Integer) 3;
    return mercury__rtree__Min_10;
  }
}

MR_bool MR_CALL 
mercury__rtree__map_values_key_2_4_p_1(
  MR_Word mercury__rtree__TypeInfo_for_K_29,
  MR_Word mercury__rtree__TypeInfo_for_V_30,
  MR_Word mercury__rtree__TypeInfo_for_W_31,
  MR_Word mercury__rtree__P_5,
  MR_Box mercury__rtree__K_6,
  MR_Word mercury__rtree__T_7,
  MR_Word * mercury__rtree__U_8)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__T_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__rtree__V_9 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_7, (MR_Integer) 0));
          MR_Box mercury__rtree__W_10;
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_5, (MR_Integer) 1)));

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_5), mercury__rtree__K_6, mercury__rtree__V_9, &mercury__rtree__W_10);
          }
          if (mercury__rtree__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__rtree__U_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mercury__rtree__W_10;
              }
              mercury__rtree__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
        break;
    }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree__map_values_key_2_4_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_29,
  MR_Word mercury__rtree__TypeInfo_for_V_30,
  MR_Word mercury__rtree__TypeInfo_for_W_31,
  MR_Word mercury__rtree__P_5,
  MR_Box mercury__rtree__K_6,
  MR_Word mercury__rtree__T_7,
  MR_Word * mercury__rtree__U_8)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__T_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__rtree__V_9 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_7, (MR_Integer) 0));
          MR_Box mercury__rtree__W_10;
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_5, (MR_Integer) 1)));

          {
            mercury__rtree__func_0(((MR_Box) mercury__rtree__P_5), mercury__rtree__K_6, mercury__rtree__V_9, &mercury__rtree__W_10);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__rtree__U_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = mercury__rtree__W_10;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__rtree__map_values_2_3_p_1(
  MR_Word mercury__rtree__TypeInfo_for_K_38,
  MR_Word mercury__rtree__TypeInfo_for_V_39,
  MR_Word mercury__rtree__TypeInfo_for_W_40,
  MR_Word mercury__rtree__P_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word * mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__error_1_p_0((MR_String) "map_values_2: unexpected leaf.");
          }
          mercury__rtree__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Word mercury__rtree__U0_13;
          MR_Word mercury__rtree__U1_14;

          {
            mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_9, mercury__rtree__T0_10, &mercury__rtree__U0_13);
          }
          if (mercury__rtree__succeeded)
            {
              {
                mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_11, mercury__rtree__T1_12, &mercury__rtree__U1_14);
              }
              if (mercury__rtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rtree__HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_9;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__U0_13));
                    MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_11;
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__U1_14));
                  }
                  mercury__rtree__succeeded = MR_TRUE;
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__K0_16 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_18 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_20 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Word mercury__rtree__U0_22;
          MR_Word mercury__rtree__U1_23;
          MR_Word mercury__rtree__U2_24;

          {
            mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_16, mercury__rtree__T0_17, &mercury__rtree__U0_22);
          }
          if (mercury__rtree__succeeded)
            {
              {
                mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_18, mercury__rtree__T1_19, &mercury__rtree__U1_23);
              }
              if (mercury__rtree__succeeded)
                {
                  {
                    mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K2_20, mercury__rtree__T2_21, &mercury__rtree__U2_24);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__rtree__HeadVar__3_3 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K0_16;
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__U0_22));
                        MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_18;
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__U1_23));
                        MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_20;
                        MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__U2_24));
                      }
                      mercury__rtree__succeeded = MR_TRUE;
                    }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K0_26 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_28 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_30 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Box mercury__rtree__K3_32 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
          MR_Word mercury__rtree__T3_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
          MR_Word mercury__rtree__U0_34;
          MR_Word mercury__rtree__U1_35;
          MR_Word mercury__rtree__U2_36;
          MR_Word mercury__rtree__U3_37;

          switch (MR_tag((MR_Word) mercury__rtree__T0_27)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__V_45 = (MR_hl_field(MR_mktag(0), mercury__rtree__T0_27, (MR_Integer) 0));
                MR_Box mercury__rtree__W_46;
                MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

                {
                  mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K0_26, mercury__rtree__V_45, &mercury__rtree__W_46);
                }
                if (mercury__rtree__succeeded)
                  {
                    {
                      mercury__rtree__U0_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__rtree__U0_34, 0) = mercury__rtree__W_46;
                    }
                    mercury__rtree__succeeded = MR_TRUE;
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T0_27, &mercury__rtree__U0_34);
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T0_27, &mercury__rtree__U0_34);
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T0_27, &mercury__rtree__U0_34);
              }
              break;
          }
          if (mercury__rtree__succeeded)
            {
              switch (MR_tag((MR_Word) mercury__rtree__T1_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Box mercury__rtree__V_69 = (MR_hl_field(MR_mktag(0), mercury__rtree__T1_29, (MR_Integer) 0));
                    MR_Box mercury__rtree__W_70;
                    MR_bool MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

                    {
                      mercury__rtree__succeeded = mercury__rtree__func_1(((MR_Box) mercury__rtree__P_1), mercury__rtree__K1_28, mercury__rtree__V_69, &mercury__rtree__W_70);
                    }
                    if (mercury__rtree__succeeded)
                      {
                        {
                          mercury__rtree__U1_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__rtree__U1_35, 0) = mercury__rtree__W_70;
                        }
                        mercury__rtree__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T1_29, &mercury__rtree__U1_35);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T1_29, &mercury__rtree__U1_35);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T1_29, &mercury__rtree__U1_35);
                  }
                  break;
              }
              if (mercury__rtree__succeeded)
                {
                  {
                    mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K2_30, mercury__rtree__T2_31, &mercury__rtree__U2_36);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      {
                        mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K3_32, mercury__rtree__T3_33, &mercury__rtree__U3_37);
                      }
                      if (mercury__rtree__succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__rtree__HeadVar__3_3 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K0_26;
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__U0_34));
                            MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_28;
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__U1_35));
                            MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_30;
                            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__U2_36));
                            MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K3_32;
                            MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__U3_37));
                          }
                          mercury__rtree__succeeded = MR_TRUE;
                        }
                    }
                }
            }
        }
        break;
    }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree__map_values_2_3_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_38,
  MR_Word mercury__rtree__TypeInfo_for_V_39,
  MR_Word mercury__rtree__TypeInfo_for_W_40,
  MR_Word mercury__rtree__P_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word * mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__error_1_p_0((MR_String) "map_values_2: unexpected leaf.");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Word mercury__rtree__U0_13;
          MR_Word mercury__rtree__U1_14;

          {
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_9, mercury__rtree__T0_10, &mercury__rtree__U0_13);
          }
          {
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_11, mercury__rtree__T1_12, &mercury__rtree__U1_14);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__U0_13));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_11;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__U1_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__K0_16 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_18 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_20 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Word mercury__rtree__U0_22;
          MR_Word mercury__rtree__U1_23;
          MR_Word mercury__rtree__U2_24;

          {
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_16, mercury__rtree__T0_17, &mercury__rtree__U0_22);
          }
          {
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_18, mercury__rtree__T1_19, &mercury__rtree__U1_23);
          }
          {
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K2_20, mercury__rtree__T2_21, &mercury__rtree__U2_24);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K0_16;
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__U0_22));
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_18;
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__U1_23));
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_20;
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__U2_24));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K0_26 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_28 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_30 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Box mercury__rtree__K3_32 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
          MR_Word mercury__rtree__T3_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
          MR_Word mercury__rtree__U0_34;
          MR_Word mercury__rtree__U1_35;
          MR_Word mercury__rtree__U2_36;
          MR_Word mercury__rtree__U3_37;

          switch (MR_tag((MR_Word) mercury__rtree__T0_27)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__V_45 = (MR_hl_field(MR_mktag(0), mercury__rtree__T0_27, (MR_Integer) 0));
                MR_Box mercury__rtree__W_46;
                void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

                {
                  mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K0_26, mercury__rtree__V_45, &mercury__rtree__W_46);
                }
                {
                  mercury__rtree__U0_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__rtree__U0_34, 0) = mercury__rtree__W_46;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T0_27, &mercury__rtree__U0_34);
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T0_27, &mercury__rtree__U0_34);
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T0_27, &mercury__rtree__U0_34);
              }
              break;
          }
          switch (MR_tag((MR_Word) mercury__rtree__T1_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__V_69 = (MR_hl_field(MR_mktag(0), mercury__rtree__T1_29, (MR_Integer) 0));
                MR_Box mercury__rtree__W_70;
                void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

                {
                  mercury__rtree__func_1(((MR_Box) mercury__rtree__P_1), mercury__rtree__K1_28, mercury__rtree__V_69, &mercury__rtree__W_70);
                }
                {
                  mercury__rtree__U1_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__rtree__U1_35, 0) = mercury__rtree__W_70;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T1_29, &mercury__rtree__U1_35);
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T1_29, &mercury__rtree__U1_35);
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__T1_29, &mercury__rtree__U1_35);
              }
              break;
          }
          {
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K2_30, mercury__rtree__T2_31, &mercury__rtree__U2_36);
          }
          {
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K3_32, mercury__rtree__T3_33, &mercury__rtree__U3_37);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K0_26;
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__U0_34));
            MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_28;
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__U1_35));
            MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_30;
            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__U2_36));
            MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K3_32;
            MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__U3_37));
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__rtree__fold_subtree_5_p_2(
  MR_Word mercury__rtree__TypeInfo_for_K_33,
  MR_Word mercury__rtree__TypeInfo_for_V_34,
  MR_Word mercury__rtree__TypeInfo_for_A_35,
  MR_Word mercury__rtree__P_6,
  MR_Box mercury__rtree__K_7,
  MR_Word mercury__rtree__T_8,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_29,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_30)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__T_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__rtree__V_10 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_6, (MR_Integer) 1)));

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_6), mercury__rtree__K_7, mercury__rtree__V_10, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
        break;
    }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree__fold_subtree_5_p_1(
  MR_Word mercury__rtree__TypeInfo_for_K_33,
  MR_Word mercury__rtree__TypeInfo_for_V_34,
  MR_Word mercury__rtree__TypeInfo_for_A_35,
  MR_Word mercury__rtree__P_6,
  MR_Box mercury__rtree__K_7,
  MR_Word mercury__rtree__T_8,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_29,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_30)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__T_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__rtree__V_10 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_6, (MR_Integer) 1)));

          {
            mercury__rtree__func_0(((MR_Box) mercury__rtree__P_6), mercury__rtree__K_7, mercury__rtree__V_10, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
        break;
    }
  }
}

void MR_CALL 
mercury__rtree__fold_subtree_5_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_33,
  MR_Word mercury__rtree__TypeInfo_for_V_34,
  MR_Word mercury__rtree__TypeInfo_for_A_35,
  MR_Word mercury__rtree__P_6,
  MR_Box mercury__rtree__K_7,
  MR_Word mercury__rtree__T_8,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_29,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_30)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__T_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__rtree__V_10 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_6, (MR_Integer) 1)));

          {
            mercury__rtree__func_0(((MR_Box) mercury__rtree__P_6), mercury__rtree__K_7, mercury__rtree__V_10, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__rtree__fold_2_4_p_2(
  MR_Word mercury__rtree__TypeInfo_for_K_49,
  MR_Word mercury__rtree__TypeInfo_for_V_50,
  MR_Word mercury__rtree__TypeInfo_for_A_51,
  MR_Word mercury__rtree__P_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
          }
          mercury__rtree__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_18_18;

          {
            mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_11, mercury__rtree__T0_12, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_18_18);
          }
          if (mercury__rtree__succeeded)
            {
              mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_13, mercury__rtree__T1_14, mercury__rtree__STATE_VARIABLE_Acc_18_18, mercury__rtree__STATE_VARIABLE_Acc_4);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__K0_21 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_23 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_25 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_30_30;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_31_31;

          {
            mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_21, mercury__rtree__T0_22, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_30_30);
          }
          if (mercury__rtree__succeeded)
            {
              {
                mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_23, mercury__rtree__T1_24, mercury__rtree__STATE_VARIABLE_Acc_30_30, &mercury__rtree__STATE_VARIABLE_Acc_31_31);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_25, mercury__rtree__T2_26, mercury__rtree__STATE_VARIABLE_Acc_31_31, mercury__rtree__STATE_VARIABLE_Acc_4);
                }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K0_34 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_36 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_38 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Box mercury__rtree__K3_40 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
          MR_Word mercury__rtree__T3_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_45_45;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_46_46;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_47_47;

          switch (MR_tag((MR_Word) mercury__rtree__T0_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__V_58 = (MR_hl_field(MR_mktag(0), mercury__rtree__T0_35, (MR_Integer) 0));
                MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

                {
                  mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K0_34, mercury__rtree__V_58, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
              }
              break;
          }
          if (mercury__rtree__succeeded)
            {
              {
                mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_36, mercury__rtree__T1_37, mercury__rtree__STATE_VARIABLE_Acc_45_45, &mercury__rtree__STATE_VARIABLE_Acc_46_46);
              }
              if (mercury__rtree__succeeded)
                {
                  {
                    mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_38, mercury__rtree__T2_39, mercury__rtree__STATE_VARIABLE_Acc_46_46, &mercury__rtree__STATE_VARIABLE_Acc_47_47);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K3_40, mercury__rtree__T3_41, mercury__rtree__STATE_VARIABLE_Acc_47_47, mercury__rtree__STATE_VARIABLE_Acc_4);
                    }
                }
            }
        }
        break;
    }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree__fold_2_4_p_1(
  MR_Word mercury__rtree__TypeInfo_for_K_49,
  MR_Word mercury__rtree__TypeInfo_for_V_50,
  MR_Word mercury__rtree__TypeInfo_for_A_51,
  MR_Word mercury__rtree__P_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_18_18;

          {
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_11, mercury__rtree__T0_12, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_18_18);
          }
          {
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_13, mercury__rtree__T1_14, mercury__rtree__STATE_VARIABLE_Acc_18_18, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__K0_21 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_23 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_25 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_30_30;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_31_31;

          {
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_21, mercury__rtree__T0_22, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_30_30);
          }
          {
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_23, mercury__rtree__T1_24, mercury__rtree__STATE_VARIABLE_Acc_30_30, &mercury__rtree__STATE_VARIABLE_Acc_31_31);
          }
          {
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_25, mercury__rtree__T2_26, mercury__rtree__STATE_VARIABLE_Acc_31_31, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K0_34 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_36 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_38 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Box mercury__rtree__K3_40 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
          MR_Word mercury__rtree__T3_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_45_45;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_46_46;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_47_47;

          switch (MR_tag((MR_Word) mercury__rtree__T0_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__V_58 = (MR_hl_field(MR_mktag(0), mercury__rtree__T0_35, (MR_Integer) 0));
                void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

                {
                  mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K0_34, mercury__rtree__V_58, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
              }
              break;
          }
          {
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_36, mercury__rtree__T1_37, mercury__rtree__STATE_VARIABLE_Acc_45_45, &mercury__rtree__STATE_VARIABLE_Acc_46_46);
          }
          {
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_38, mercury__rtree__T2_39, mercury__rtree__STATE_VARIABLE_Acc_46_46, &mercury__rtree__STATE_VARIABLE_Acc_47_47);
          }
          {
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K3_40, mercury__rtree__T3_41, mercury__rtree__STATE_VARIABLE_Acc_47_47, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__rtree__fold_2_4_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_49,
  MR_Word mercury__rtree__TypeInfo_for_V_50,
  MR_Word mercury__rtree__TypeInfo_for_A_51,
  MR_Word mercury__rtree__P_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_18_18;

          {
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_11, mercury__rtree__T0_12, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_18_18);
          }
          {
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_13, mercury__rtree__T1_14, mercury__rtree__STATE_VARIABLE_Acc_18_18, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__K0_21 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_23 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_25 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_30_30;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_31_31;

          {
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_21, mercury__rtree__T0_22, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_30_30);
          }
          {
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_23, mercury__rtree__T1_24, mercury__rtree__STATE_VARIABLE_Acc_30_30, &mercury__rtree__STATE_VARIABLE_Acc_31_31);
          }
          {
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_25, mercury__rtree__T2_26, mercury__rtree__STATE_VARIABLE_Acc_31_31, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K0_34 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_36 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_38 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
          MR_Box mercury__rtree__K3_40 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
          MR_Word mercury__rtree__T3_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_45_45;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_46_46;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_47_47;

          switch (MR_tag((MR_Word) mercury__rtree__T0_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__V_58 = (MR_hl_field(MR_mktag(0), mercury__rtree__T0_35, (MR_Integer) 0));
                void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

                {
                  mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K0_34, mercury__rtree__V_58, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
              }
              break;
          }
          {
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_36, mercury__rtree__T1_37, mercury__rtree__STATE_VARIABLE_Acc_45_45, &mercury__rtree__STATE_VARIABLE_Acc_46_46);
          }
          {
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_38, mercury__rtree__T2_39, mercury__rtree__STATE_VARIABLE_Acc_46_46, &mercury__rtree__STATE_VARIABLE_Acc_47_47);
          }
          {
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K3_40, mercury__rtree__T3_41, mercury__rtree__STATE_VARIABLE_Acc_47_47, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__rtree__search_general_fold_subtree_6_p_1(
  MR_Word mercury__rtree__TypeInfo_for_K_17,
  MR_Word mercury__rtree__TypeInfo_for_V_18,
  MR_Word mercury__rtree__TypeInfo_for_A_19,
  MR_Box mercury__rtree__K_7,
  MR_Word mercury__rtree__T_8,
  MR_Word mercury__rtree__KTest_9,
  MR_Word mercury__rtree__VPred_10,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_14)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_9, (MR_Integer) 1)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_9), mercury__rtree__K_7);
    }
    if (mercury__rtree__succeeded)
      {
        MR_Box mercury__rtree__V_12;

        mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__V_12 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
            {
              void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_10, (MR_Integer) 1)));

              {
                mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_10), mercury__rtree__K_7, mercury__rtree__V_12, mercury__rtree__STATE_VARIABLE_Acc_0_13, mercury__rtree__STATE_VARIABLE_Acc_14);
              }
            }
          }
        else
          {
            mercury__rtree__search_general_fold_2_5_p_1(mercury__rtree__TypeInfo_for_K_17, mercury__rtree__TypeInfo_for_V_18, mercury__rtree__TypeInfo_for_A_19, mercury__rtree__T_8, mercury__rtree__KTest_9, mercury__rtree__VPred_10, mercury__rtree__STATE_VARIABLE_Acc_0_13, mercury__rtree__STATE_VARIABLE_Acc_14);
          }
      }
    else
      *mercury__rtree__STATE_VARIABLE_Acc_14 = mercury__rtree__STATE_VARIABLE_Acc_0_13;
  }
}

void MR_CALL 
mercury__rtree__search_general_fold_subtree_6_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_17,
  MR_Word mercury__rtree__TypeInfo_for_V_18,
  MR_Word mercury__rtree__TypeInfo_for_A_19,
  MR_Box mercury__rtree__K_7,
  MR_Word mercury__rtree__T_8,
  MR_Word mercury__rtree__KTest_9,
  MR_Word mercury__rtree__VPred_10,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_13,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_14)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_9, (MR_Integer) 1)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_9), mercury__rtree__K_7);
    }
    if (mercury__rtree__succeeded)
      {
        MR_Box mercury__rtree__V_12;

        mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__V_12 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
            {
              void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_10, (MR_Integer) 1)));

              {
                mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_10), mercury__rtree__K_7, mercury__rtree__V_12, mercury__rtree__STATE_VARIABLE_Acc_0_13, mercury__rtree__STATE_VARIABLE_Acc_14);
              }
            }
          }
        else
          {
            mercury__rtree__search_general_fold_2_5_p_0(mercury__rtree__TypeInfo_for_K_17, mercury__rtree__TypeInfo_for_V_18, mercury__rtree__TypeInfo_for_A_19, mercury__rtree__T_8, mercury__rtree__KTest_9, mercury__rtree__VPred_10, mercury__rtree__STATE_VARIABLE_Acc_0_13, mercury__rtree__STATE_VARIABLE_Acc_14);
          }
      }
    else
      *mercury__rtree__STATE_VARIABLE_Acc_14 = mercury__rtree__STATE_VARIABLE_Acc_0_13;
  }
}

void MR_CALL 
mercury__rtree__search_general_fold_2_5_p_1(
  MR_Word mercury__rtree__TypeInfo_for_K_57,
  MR_Word mercury__rtree__TypeInfo_for_V_58,
  MR_Word mercury__rtree__TypeInfo_for_A_59,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__KTest_2,
  MR_Word mercury__rtree__VPred_3,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_5)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__error_1_p_0((MR_String) "search_general_fold_2: unexpected leaf node");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_16 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_18 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_22_22;

          {
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_16, mercury__rtree__T0_17, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_22_22);
          }
          {
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_18, mercury__rtree__T1_19, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_22_22, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__K0_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_30 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_32 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_36_36;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_37_37;

          {
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_28, mercury__rtree__T0_29, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_36_36);
          }
          {
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_30, mercury__rtree__T1_31, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_36_36, &mercury__rtree__STATE_VARIABLE_Acc_37_37);
          }
          {
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K2_32, mercury__rtree__T2_33, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_37_37, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K0_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
          MR_Box mercury__rtree__K3_49 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
          MR_Word mercury__rtree__T3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_53_53;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_54_54;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_55_55;
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_2, (MR_Integer) 1)));
          MR_bool MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
          MR_bool MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box);

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_2), mercury__rtree__K0_43);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Box mercury__rtree__V_67;

              mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T0_44)) == (MR_mktag((MR_Integer) 0)));
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__V_67 = (MR_hl_field(MR_mktag(0), mercury__rtree__T0_44, (MR_Integer) 0));
                  {
                    void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_3, (MR_Integer) 1)));

                    {
                      mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_3), mercury__rtree__K0_43, mercury__rtree__V_67, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_53_53);
                    }
                  }
                }
              else
                {
                  mercury__rtree__search_general_fold_2_5_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__T0_44, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_53_53);
                }
            }
          else
            mercury__rtree__STATE_VARIABLE_Acc_53_53 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
          mercury__rtree__func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_2, (MR_Integer) 1)));
          {
            mercury__rtree__succeeded = mercury__rtree__func_2(((MR_Box) mercury__rtree__KTest_2), mercury__rtree__K1_45);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Box mercury__rtree__V_77;

              mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T1_46)) == (MR_mktag((MR_Integer) 0)));
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__V_77 = (MR_hl_field(MR_mktag(0), mercury__rtree__T1_46, (MR_Integer) 0));
                  {
                    void MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_3, (MR_Integer) 1)));

                    {
                      mercury__rtree__func_3(((MR_Box) mercury__rtree__VPred_3), mercury__rtree__K1_45, mercury__rtree__V_77, mercury__rtree__STATE_VARIABLE_Acc_53_53, &mercury__rtree__STATE_VARIABLE_Acc_54_54);
                    }
                  }
                }
              else
                {
                  mercury__rtree__search_general_fold_2_5_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__T1_46, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_53_53, &mercury__rtree__STATE_VARIABLE_Acc_54_54);
                }
            }
          else
            mercury__rtree__STATE_VARIABLE_Acc_54_54 = mercury__rtree__STATE_VARIABLE_Acc_53_53;
          mercury__rtree__func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_2, (MR_Integer) 1)));
          {
            mercury__rtree__succeeded = mercury__rtree__func_4(((MR_Box) mercury__rtree__KTest_2), mercury__rtree__K2_47);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Box mercury__rtree__V_87;

              mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T2_48)) == (MR_mktag((MR_Integer) 0)));
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__V_87 = (MR_hl_field(MR_mktag(0), mercury__rtree__T2_48, (MR_Integer) 0));
                  {
                    void MR_CALL (* mercury__rtree__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_3, (MR_Integer) 1)));

                    {
                      mercury__rtree__func_5(((MR_Box) mercury__rtree__VPred_3), mercury__rtree__K2_47, mercury__rtree__V_87, mercury__rtree__STATE_VARIABLE_Acc_54_54, &mercury__rtree__STATE_VARIABLE_Acc_55_55);
                    }
                  }
                }
              else
                {
                  mercury__rtree__search_general_fold_2_5_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__T2_48, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_54_54, &mercury__rtree__STATE_VARIABLE_Acc_55_55);
                }
            }
          else
            mercury__rtree__STATE_VARIABLE_Acc_55_55 = mercury__rtree__STATE_VARIABLE_Acc_54_54;
          {
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_55_55, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__rtree__search_general_fold_2_5_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_57,
  MR_Word mercury__rtree__TypeInfo_for_V_58,
  MR_Word mercury__rtree__TypeInfo_for_A_59,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__KTest_2,
  MR_Word mercury__rtree__VPred_3,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_5)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__error_1_p_0((MR_String) "search_general_fold_2: unexpected leaf node");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_16 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_18 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_22_22;

          {
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_16, mercury__rtree__T0_17, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_22_22);
          }
          {
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_18, mercury__rtree__T1_19, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_22_22, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__K0_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_30 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_32 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_36_36;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_37_37;

          {
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_28, mercury__rtree__T0_29, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_36_36);
          }
          {
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_30, mercury__rtree__T1_31, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_36_36, &mercury__rtree__STATE_VARIABLE_Acc_37_37);
          }
          {
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K2_32, mercury__rtree__T2_33, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_37_37, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K0_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
          MR_Box mercury__rtree__K3_49 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
          MR_Word mercury__rtree__T3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_53_53;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_54_54;
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_55_55;
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_2, (MR_Integer) 1)));
          MR_bool MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
          MR_bool MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box);

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_2), mercury__rtree__K0_43);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Box mercury__rtree__V_67;

              mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T0_44)) == (MR_mktag((MR_Integer) 0)));
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__V_67 = (MR_hl_field(MR_mktag(0), mercury__rtree__T0_44, (MR_Integer) 0));
                  {
                    void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_3, (MR_Integer) 1)));

                    {
                      mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_3), mercury__rtree__K0_43, mercury__rtree__V_67, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_53_53);
                    }
                  }
                }
              else
                {
                  mercury__rtree__search_general_fold_2_5_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__T0_44, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_53_53);
                }
            }
          else
            mercury__rtree__STATE_VARIABLE_Acc_53_53 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
          mercury__rtree__func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_2, (MR_Integer) 1)));
          {
            mercury__rtree__succeeded = mercury__rtree__func_2(((MR_Box) mercury__rtree__KTest_2), mercury__rtree__K1_45);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Box mercury__rtree__V_77;

              mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T1_46)) == (MR_mktag((MR_Integer) 0)));
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__V_77 = (MR_hl_field(MR_mktag(0), mercury__rtree__T1_46, (MR_Integer) 0));
                  {
                    void MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_3, (MR_Integer) 1)));

                    {
                      mercury__rtree__func_3(((MR_Box) mercury__rtree__VPred_3), mercury__rtree__K1_45, mercury__rtree__V_77, mercury__rtree__STATE_VARIABLE_Acc_53_53, &mercury__rtree__STATE_VARIABLE_Acc_54_54);
                    }
                  }
                }
              else
                {
                  mercury__rtree__search_general_fold_2_5_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__T1_46, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_53_53, &mercury__rtree__STATE_VARIABLE_Acc_54_54);
                }
            }
          else
            mercury__rtree__STATE_VARIABLE_Acc_54_54 = mercury__rtree__STATE_VARIABLE_Acc_53_53;
          mercury__rtree__func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_2, (MR_Integer) 1)));
          {
            mercury__rtree__succeeded = mercury__rtree__func_4(((MR_Box) mercury__rtree__KTest_2), mercury__rtree__K2_47);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Box mercury__rtree__V_87;

              mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T2_48)) == (MR_mktag((MR_Integer) 0)));
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__V_87 = (MR_hl_field(MR_mktag(0), mercury__rtree__T2_48, (MR_Integer) 0));
                  {
                    void MR_CALL (* mercury__rtree__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_3, (MR_Integer) 1)));

                    {
                      mercury__rtree__func_5(((MR_Box) mercury__rtree__VPred_3), mercury__rtree__K2_47, mercury__rtree__V_87, mercury__rtree__STATE_VARIABLE_Acc_54_54, &mercury__rtree__STATE_VARIABLE_Acc_55_55);
                    }
                  }
                }
              else
                {
                  mercury__rtree__search_general_fold_2_5_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__T2_48, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_54_54, &mercury__rtree__STATE_VARIABLE_Acc_55_55);
                }
            }
          else
            mercury__rtree__STATE_VARIABLE_Acc_55_55 = mercury__rtree__STATE_VARIABLE_Acc_54_54;
          {
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_55_55, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__rtree__search_first_2_better_solution_three_11_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_26,
  MR_Word mercury__rtree__TypeInfo_for_E_27,
  MR_Word mercury__rtree__TypeInfo_for_K_28,
  MR_Box mercury__rtree__VM_12,
  MR_Box mercury__rtree__EM_13,
  MR_Box mercury__rtree__E1_14,
  MR_Box mercury__rtree__E2_15,
  MR_Word mercury__rtree__T0_16,
  MR_Word mercury__rtree__T1_17,
  MR_Word mercury__rtree__T2_18,
  MR_Word mercury__rtree__P_19,
  MR_Word mercury__rtree__C_20,
  MR_Box * mercury__rtree__V_21,
  MR_Box * mercury__rtree__E_22)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__V0_23;
    MR_Box mercury__rtree__F0_24;

    {
      mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__T0_16, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__EM_13, &mercury__rtree__V0_23, &mercury__rtree__F0_24);
    }
    if (mercury__rtree__succeeded)
      {
        MR_Word mercury__rtree__Var_29;

        {
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_29, mercury__rtree__EM_13, mercury__rtree__F0_24);
        }
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_29);
        if (mercury__rtree__succeeded)
          {
            MR_Word mercury__rtree__R_40;
            MR_Word mercury__rtree__Var_47;

            {
              mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_47, mercury__rtree__EM_13, mercury__rtree__E1_14);
            }
            mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_47);
            if (mercury__rtree__succeeded)
              {
                MR_Word mercury__rtree__Var_48;

                {
                  mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_48, mercury__rtree__EM_13, mercury__rtree__E2_15);
                }
                mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_48);
                if (mercury__rtree__succeeded)
                  mercury__rtree__R_40 = (MR_Integer) 0;
                else
                  mercury__rtree__R_40 = (MR_Integer) 2;
              }
            else
              {
                MR_Word mercury__rtree__Var_49;

                {
                  mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_49, mercury__rtree__E1_14, mercury__rtree__E2_15);
                }
                mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_49);
                if (mercury__rtree__succeeded)
                  mercury__rtree__R_40 = (MR_Integer) 1;
                else
                  mercury__rtree__R_40 = (MR_Integer) 2;
              }
            switch (mercury__rtree__R_40) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *mercury__rtree__V_21 = mercury__rtree__VM_12;
                  *mercury__rtree__E_22 = mercury__rtree__EM_13;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__rtree__V0_59;
                  MR_Box mercury__rtree__F0_60;

                  {
                    mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__T1_17, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__EM_13, &mercury__rtree__V0_59, &mercury__rtree__F0_60);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      MR_Word mercury__rtree__Var_62;

                      {
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_62, mercury__rtree__EM_13, mercury__rtree__F0_60);
                      }
                      mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_62);
                      if (mercury__rtree__succeeded)
                        {
                          mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E2_15, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                        }
                      else
                        {
                          mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_59, mercury__rtree__F0_60, mercury__rtree__E2_15, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                        }
                    }
                  else
                    {
                      mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E2_15, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Box mercury__rtree__V0_72;
                  MR_Box mercury__rtree__F0_73;

                  {
                    mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__EM_13, &mercury__rtree__V0_72, &mercury__rtree__F0_73);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      MR_Word mercury__rtree__Var_75;

                      {
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_75, mercury__rtree__EM_13, mercury__rtree__F0_73);
                      }
                      mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_75);
                      if (mercury__rtree__succeeded)
                        {
                          mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E1_14, mercury__rtree__T1_17, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                        }
                      else
                        {
                          mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_72, mercury__rtree__F0_73, mercury__rtree__E1_14, mercury__rtree__T1_17, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                        }
                    }
                  else
                    {
                      mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E1_14, mercury__rtree__T1_17, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                    }
                }
                break;
            }
          }
        else
          {
            mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_23, mercury__rtree__F0_24, mercury__rtree__E1_14, mercury__rtree__E2_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
          }
      }
    else
      {
        mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E1_14, mercury__rtree__E2_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
      }
  }
}

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_three_12_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_26,
  MR_Word mercury__rtree__TypeInfo_for_E_27,
  MR_Word mercury__rtree__TypeInfo_for_K_28,
  MR_Box mercury__rtree__VM_13,
  MR_Box mercury__rtree__EM_14,
  MR_Box mercury__rtree__E0_15,
  MR_Box mercury__rtree__E1_16,
  MR_Box mercury__rtree__E2_17,
  MR_Word mercury__rtree__T0_18,
  MR_Word mercury__rtree__T1_19,
  MR_Word mercury__rtree__T2_20,
  MR_Word mercury__rtree__P_21,
  MR_Word mercury__rtree__C_22,
  MR_Box * mercury__rtree__V_23,
  MR_Box * mercury__rtree__E_24)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__R_25;
    MR_Word mercury__rtree__Min0_34;
    MR_Box mercury__rtree__MinItem0_35;
    MR_Word mercury__rtree__Min1_36;
    MR_Box mercury__rtree__MinItem_37;
    MR_Word mercury__rtree__Var_41;
    MR_Word mercury__rtree__Var_42;
    MR_Word mercury__rtree__Var_43;

    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_41, mercury__rtree__EM_14, mercury__rtree__E0_15);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_41);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Min0_34 = (MR_Integer) 0;
        mercury__rtree__MinItem0_35 = mercury__rtree__EM_14;
      }
    else
      {
        mercury__rtree__Min0_34 = (MR_Integer) 1;
        mercury__rtree__MinItem0_35 = mercury__rtree__E0_15;
      }
    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_42, mercury__rtree__MinItem0_35, mercury__rtree__E1_16);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_42);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Min1_36 = mercury__rtree__Min0_34;
        mercury__rtree__MinItem_37 = mercury__rtree__MinItem0_35;
      }
    else
      {
        mercury__rtree__Min1_36 = (MR_Integer) 2;
        mercury__rtree__MinItem_37 = mercury__rtree__E1_16;
      }
    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_43, mercury__rtree__MinItem_37, mercury__rtree__E2_17);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_43);
    if (mercury__rtree__succeeded)
      mercury__rtree__R_25 = mercury__rtree__Min1_36;
    else
      mercury__rtree__R_25 = (MR_Integer) 3;
    switch (mercury__rtree__R_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__rtree__V_23 = mercury__rtree__VM_13;
          *mercury__rtree__E_24 = mercury__rtree__EM_14;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__V0_55;
          MR_Box mercury__rtree__F0_56;

          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__T2_20, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__EM_14, &mercury__rtree__V0_55, &mercury__rtree__F0_56);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Word mercury__rtree__Var_58;

              {
                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_58, mercury__rtree__EM_14, mercury__rtree__F0_56);
              }
              mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_58);
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E0_15, mercury__rtree__E1_16, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
                }
              else
                {
                  mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_55, mercury__rtree__F0_56, mercury__rtree__E0_15, mercury__rtree__E1_16, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
                }
            }
          else
            {
              mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E0_15, mercury__rtree__E1_16, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__V0_70;
          MR_Box mercury__rtree__F0_71;

          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__T0_18, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__EM_14, &mercury__rtree__V0_70, &mercury__rtree__F0_71);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Word mercury__rtree__Var_73;

              {
                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__Var_73, mercury__rtree__EM_14, mercury__rtree__F0_71);
              }
              mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_73);
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E1_16, mercury__rtree__E2_17, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
                }
              else
                {
                  mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_70, mercury__rtree__F0_71, mercury__rtree__E1_16, mercury__rtree__E2_17, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
                }
            }
          else
            {
              mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E1_16, mercury__rtree__E2_17, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E0_15, mercury__rtree__E2_17, mercury__rtree__T1_19, mercury__rtree__T0_18, mercury__rtree__T2_20, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_two_10_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_22,
  MR_Word mercury__rtree__TypeInfo_for_E_23,
  MR_Word mercury__rtree__TypeInfo_for_K_24,
  MR_Box mercury__rtree__VM_11,
  MR_Box mercury__rtree__EM_12,
  MR_Box mercury__rtree__E0_13,
  MR_Box mercury__rtree__E1_14,
  MR_Word mercury__rtree__T0_15,
  MR_Word mercury__rtree__T1_16,
  MR_Word mercury__rtree__P_17,
  MR_Word mercury__rtree__C_18,
  MR_Box * mercury__rtree__V_19,
  MR_Box * mercury__rtree__E_20)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__R_21;
    MR_Word mercury__rtree__Var_31;

    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__Var_31, mercury__rtree__EM_12, mercury__rtree__E0_13);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_31);
    if (mercury__rtree__succeeded)
      {
        MR_Word mercury__rtree__Var_32;

        {
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__Var_32, mercury__rtree__EM_12, mercury__rtree__E1_14);
        }
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_32);
        if (mercury__rtree__succeeded)
          mercury__rtree__R_21 = (MR_Integer) 0;
        else
          mercury__rtree__R_21 = (MR_Integer) 2;
      }
    else
      {
        MR_Word mercury__rtree__Var_33;

        {
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__Var_33, mercury__rtree__E0_13, mercury__rtree__E1_14);
        }
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_33);
        if (mercury__rtree__succeeded)
          mercury__rtree__R_21 = (MR_Integer) 1;
        else
          mercury__rtree__R_21 = (MR_Integer) 2;
      }
    switch (mercury__rtree__R_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__rtree__V_19 = mercury__rtree__VM_11;
          *mercury__rtree__E_20 = mercury__rtree__EM_12;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__V0_43;
          MR_Box mercury__rtree__F0_44;

          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__T0_15, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__EM_12, &mercury__rtree__V0_43, &mercury__rtree__F0_44);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Word mercury__rtree__Var_46;

              {
                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__Var_46, mercury__rtree__EM_12, mercury__rtree__F0_44);
              }
              mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_46);
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__VM_11, mercury__rtree__EM_12, mercury__rtree__E1_14, mercury__rtree__T1_16, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
                }
              else
                {
                  mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__V0_43, mercury__rtree__F0_44, mercury__rtree__E1_14, mercury__rtree__T1_16, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
                }
            }
          else
            {
              mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__VM_11, mercury__rtree__EM_12, mercury__rtree__E1_14, mercury__rtree__T1_16, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__V0_56;
          MR_Box mercury__rtree__F0_57;

          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__T1_16, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__EM_12, &mercury__rtree__V0_56, &mercury__rtree__F0_57);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Word mercury__rtree__Var_59;

              {
                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__Var_59, mercury__rtree__EM_12, mercury__rtree__F0_57);
              }
              mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_59);
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__VM_11, mercury__rtree__EM_12, mercury__rtree__E0_13, mercury__rtree__T0_15, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
                }
              else
                {
                  mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__V0_56, mercury__rtree__F0_57, mercury__rtree__E0_13, mercury__rtree__T0_15, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
                }
            }
          else
            {
              mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__VM_11, mercury__rtree__EM_12, mercury__rtree__E0_13, mercury__rtree__T0_15, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
            }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_one_8_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_21,
  MR_Word mercury__rtree__TypeInfo_for_E_22,
  MR_Word mercury__rtree__TypeInfo_for_K_23,
  MR_Box mercury__rtree__VM_9,
  MR_Box mercury__rtree__EM_10,
  MR_Box mercury__rtree__E0_11,
  MR_Word mercury__rtree__T0_12,
  MR_Word mercury__rtree__P_13,
  MR_Word mercury__rtree__C_14,
  MR_Box * mercury__rtree__V_15,
  MR_Box * mercury__rtree__E_16)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__Var_24;

    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_22, &mercury__rtree__Var_24, mercury__rtree__EM_10, mercury__rtree__E0_11);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_24);
    if (mercury__rtree__succeeded)
      {
        *mercury__rtree__V_15 = mercury__rtree__VM_9;
        *mercury__rtree__E_16 = mercury__rtree__EM_10;
      }
    else
      {
        MR_Box mercury__rtree__V0_17;
        MR_Box mercury__rtree__F0_18;

        {
          mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_23, mercury__rtree__TypeInfo_for_V_21, mercury__rtree__TypeInfo_for_E_22, mercury__rtree__T0_12, mercury__rtree__P_13, mercury__rtree__C_14, mercury__rtree__EM_10, &mercury__rtree__V0_17, &mercury__rtree__F0_18);
        }
        if (mercury__rtree__succeeded)
          {
            MR_Word mercury__rtree__Var_25;

            {
              mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_22, &mercury__rtree__Var_25, mercury__rtree__EM_10, mercury__rtree__F0_18);
            }
            mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_25);
            if (mercury__rtree__succeeded)
              {
                *mercury__rtree__V_15 = mercury__rtree__VM_9;
                *mercury__rtree__E_16 = mercury__rtree__EM_10;
              }
            else
              {
                *mercury__rtree__V_15 = mercury__rtree__V0_17;
                *mercury__rtree__E_16 = mercury__rtree__F0_18;
              }
          }
        else
          {
            *mercury__rtree__V_15 = mercury__rtree__VM_9;
            *mercury__rtree__E_16 = mercury__rtree__EM_10;
          }
      }
  }
}

static MR_bool MR_CALL 
mercury__rtree__search_first_2_try_first_from_four_12_p_0(
  MR_Word mercury__rtree__TypeInfo_for_E_27,
  MR_Word mercury__rtree__TypeInfo_for_K_28,
  MR_Word mercury__rtree__TypeInfo_for_V_29,
  MR_Box mercury__rtree__E1_13,
  MR_Box mercury__rtree__E2_14,
  MR_Box mercury__rtree__E3_15,
  MR_Word mercury__rtree__T0_16,
  MR_Word mercury__rtree__T1_17,
  MR_Word mercury__rtree__T2_18,
  MR_Word mercury__rtree__T3_19,
  MR_Word mercury__rtree__P_20,
  MR_Word mercury__rtree__C_21,
  MR_Box mercury__rtree__L_22,
  MR_Box * mercury__rtree__V_23,
  MR_Box * mercury__rtree__E_24)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__V0_25;
    MR_Box mercury__rtree__E0_26;

    {
      mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_29, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__T0_16, mercury__rtree__P_20, mercury__rtree__C_21, mercury__rtree__L_22, &mercury__rtree__V0_25, &mercury__rtree__E0_26);
    }
    if (mercury__rtree__succeeded)
      {
        MR_Word mercury__rtree__R_42;

        {
          mercury__rtree__R_42 = mercury__rtree__minimum_of_four_4_f_0(mercury__rtree__TypeInfo_for_E_27, mercury__rtree__E0_26, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__E3_15);
        }
        switch (mercury__rtree__R_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rtree__V_23 = mercury__rtree__V0_25;
              *mercury__rtree__E_24 = mercury__rtree__E0_26;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_29, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_25, mercury__rtree__E0_26, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__T3_19, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__P_20, mercury__rtree__C_21, mercury__rtree__V_23, mercury__rtree__E_24);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_29, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_25, mercury__rtree__E0_26, mercury__rtree__E2_14, mercury__rtree__E3_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__T3_19, mercury__rtree__P_20, mercury__rtree__C_21, mercury__rtree__V_23, mercury__rtree__E_24);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_29, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_25, mercury__rtree__E0_26, mercury__rtree__E1_13, mercury__rtree__E3_15, mercury__rtree__T2_18, mercury__rtree__T1_17, mercury__rtree__T3_19, mercury__rtree__P_20, mercury__rtree__C_21, mercury__rtree__V_23, mercury__rtree__E_24);
            }
            break;
        }
        mercury__rtree__succeeded = MR_TRUE;
      }
    else
      {
        mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_29, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__E3_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__T3_19, mercury__rtree__P_20, mercury__rtree__C_21, mercury__rtree__L_22, mercury__rtree__V_23, mercury__rtree__E_24);
      }
    return mercury__rtree__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rtree__search_first_2_four_choices_13_p_0(
  MR_Word mercury__rtree__TypeInfo_for_E_28,
  MR_Word mercury__rtree__TypeInfo_for_K_29,
  MR_Word mercury__rtree__TypeInfo_for_V_30,
  MR_Box mercury__rtree__E0_14,
  MR_Box mercury__rtree__E1_15,
  MR_Box mercury__rtree__E2_16,
  MR_Box mercury__rtree__E3_17,
  MR_Word mercury__rtree__T0_18,
  MR_Word mercury__rtree__T1_19,
  MR_Word mercury__rtree__T2_20,
  MR_Word mercury__rtree__T3_21,
  MR_Word mercury__rtree__P_22,
  MR_Word mercury__rtree__C_23,
  MR_Box mercury__rtree__L_24,
  MR_Box * mercury__rtree__V_25,
  MR_Box * mercury__rtree__E_26)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__R_27;
    MR_Word mercury__rtree__Min0_36;
    MR_Box mercury__rtree__MinItem0_37;
    MR_Word mercury__rtree__Min1_38;
    MR_Box mercury__rtree__MinItem_39;
    MR_Word mercury__rtree__Var_43;
    MR_Word mercury__rtree__Var_44;
    MR_Word mercury__rtree__Var_45;

    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_28, &mercury__rtree__Var_43, mercury__rtree__E0_14, mercury__rtree__E1_15);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_43);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Min0_36 = (MR_Integer) 0;
        mercury__rtree__MinItem0_37 = mercury__rtree__E0_14;
      }
    else
      {
        mercury__rtree__Min0_36 = (MR_Integer) 1;
        mercury__rtree__MinItem0_37 = mercury__rtree__E1_15;
      }
    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_28, &mercury__rtree__Var_44, mercury__rtree__MinItem0_37, mercury__rtree__E2_16);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_44);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Min1_38 = mercury__rtree__Min0_36;
        mercury__rtree__MinItem_39 = mercury__rtree__MinItem0_37;
      }
    else
      {
        mercury__rtree__Min1_38 = (MR_Integer) 2;
        mercury__rtree__MinItem_39 = mercury__rtree__E2_16;
      }
    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_28, &mercury__rtree__Var_45, mercury__rtree__MinItem_39, mercury__rtree__E3_17);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_45);
    if (mercury__rtree__succeeded)
      mercury__rtree__R_27 = mercury__rtree__Min1_38;
    else
      mercury__rtree__R_27 = (MR_Integer) 3;
    switch (mercury__rtree__R_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__rtree__V0_58;
          MR_Box mercury__rtree__E0_59;

          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_E_28, mercury__rtree__T0_18, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, &mercury__rtree__V0_58, &mercury__rtree__E0_59);
          }
          if (mercury__rtree__succeeded)
            {
              {
                mercury__rtree__search_first_2_find_better_solution_three_12_p_0(mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__V0_58, mercury__rtree__E0_59, mercury__rtree__E1_15, mercury__rtree__E2_16, mercury__rtree__E3_17, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__V_25, mercury__rtree__E_26);
              }
              mercury__rtree__succeeded = MR_TRUE;
            }
          else
            {
              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E1_15, mercury__rtree__E2_16, mercury__rtree__E3_17, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__V0_72;
          MR_Box mercury__rtree__E0_73;

          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_E_28, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, &mercury__rtree__V0_72, &mercury__rtree__E0_73);
          }
          if (mercury__rtree__succeeded)
            {
              {
                mercury__rtree__search_first_2_find_better_solution_three_12_p_0(mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__V0_72, mercury__rtree__E0_73, mercury__rtree__E0_14, mercury__rtree__E1_15, mercury__rtree__E2_16, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__V_25, mercury__rtree__E_26);
              }
              mercury__rtree__succeeded = MR_TRUE;
            }
          else
            {
              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E0_14, mercury__rtree__E1_15, mercury__rtree__E2_16, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E0_14, mercury__rtree__E2_16, mercury__rtree__E3_17, mercury__rtree__T1_19, mercury__rtree__T0_18, mercury__rtree__T2_20, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E0_14, mercury__rtree__E1_15, mercury__rtree__E3_17, mercury__rtree__T2_20, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
        }
        break;
    }
    return mercury__rtree__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rtree__search_first_2_three_choices_11_p_0(
  MR_Word mercury__rtree__TypeInfo_for_E_24,
  MR_Word mercury__rtree__TypeInfo_for_K_25,
  MR_Word mercury__rtree__TypeInfo_for_V_26,
  MR_Box mercury__rtree__E0_12,
  MR_Box mercury__rtree__E1_13,
  MR_Box mercury__rtree__E2_14,
  MR_Word mercury__rtree__T0_15,
  MR_Word mercury__rtree__T1_16,
  MR_Word mercury__rtree__T2_17,
  MR_Word mercury__rtree__P_18,
  MR_Word mercury__rtree__C_19,
  MR_Box mercury__rtree__L_20,
  MR_Box * mercury__rtree__V_21,
  MR_Box * mercury__rtree__E_22)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__R_23;
    MR_Word mercury__rtree__Var_33;

    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_24, &mercury__rtree__Var_33, mercury__rtree__E0_12, mercury__rtree__E1_13);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_33);
    if (mercury__rtree__succeeded)
      {
        MR_Word mercury__rtree__Var_34;

        {
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_24, &mercury__rtree__Var_34, mercury__rtree__E0_12, mercury__rtree__E2_14);
        }
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_34);
        if (mercury__rtree__succeeded)
          mercury__rtree__R_23 = (MR_Integer) 0;
        else
          mercury__rtree__R_23 = (MR_Integer) 2;
      }
    else
      {
        MR_Word mercury__rtree__Var_35;

        {
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_24, &mercury__rtree__Var_35, mercury__rtree__E1_13, mercury__rtree__E2_14);
        }
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_35);
        if (mercury__rtree__succeeded)
          mercury__rtree__R_23 = (MR_Integer) 1;
        else
          mercury__rtree__R_23 = (MR_Integer) 2;
      }
    switch (mercury__rtree__R_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__rtree__V0_46;
          MR_Box mercury__rtree__E0_47;

          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_24, mercury__rtree__T0_15, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, &mercury__rtree__V0_46, &mercury__rtree__E0_47);
          }
          if (mercury__rtree__succeeded)
            {
              {
                mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__V0_46, mercury__rtree__E0_47, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__T1_16, mercury__rtree__T2_17, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__V_21, mercury__rtree__E_22);
              }
              mercury__rtree__succeeded = MR_TRUE;
            }
          else
            {
              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__T1_16, mercury__rtree__T2_17, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, mercury__rtree__V_21, mercury__rtree__E_22);
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__V0_58;
          MR_Box mercury__rtree__E0_59;

          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_24, mercury__rtree__T1_16, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, &mercury__rtree__V0_58, &mercury__rtree__E0_59);
          }
          if (mercury__rtree__succeeded)
            {
              {
                mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__V0_58, mercury__rtree__E0_59, mercury__rtree__E0_12, mercury__rtree__E2_14, mercury__rtree__T0_15, mercury__rtree__T2_17, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__V_21, mercury__rtree__E_22);
              }
              mercury__rtree__succeeded = MR_TRUE;
            }
          else
            {
              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__E0_12, mercury__rtree__E2_14, mercury__rtree__T0_15, mercury__rtree__T2_17, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, mercury__rtree__V_21, mercury__rtree__E_22);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__V0_70;
          MR_Box mercury__rtree__E0_71;

          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_24, mercury__rtree__T2_17, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, &mercury__rtree__V0_70, &mercury__rtree__E0_71);
          }
          if (mercury__rtree__succeeded)
            {
              {
                mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__V0_70, mercury__rtree__E0_71, mercury__rtree__E0_12, mercury__rtree__E1_13, mercury__rtree__T0_15, mercury__rtree__T1_16, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__V_21, mercury__rtree__E_22);
              }
              mercury__rtree__succeeded = MR_TRUE;
            }
          else
            {
              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__E0_12, mercury__rtree__E1_13, mercury__rtree__T0_15, mercury__rtree__T1_16, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, mercury__rtree__V_21, mercury__rtree__E_22);
            }
        }
        break;
    }
    return mercury__rtree__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rtree__search_first_2_two_choices_9_p_0(
  MR_Word mercury__rtree__TypeInfo_for_E_20,
  MR_Word mercury__rtree__TypeInfo_for_K_21,
  MR_Word mercury__rtree__TypeInfo_for_V_22,
  MR_Box mercury__rtree__E0_10,
  MR_Box mercury__rtree__E1_11,
  MR_Word mercury__rtree__T0_12,
  MR_Word mercury__rtree__T1_13,
  MR_Word mercury__rtree__P_14,
  MR_Word mercury__rtree__C_15,
  MR_Box mercury__rtree__L_16,
  MR_Box * mercury__rtree__V_17,
  MR_Box * mercury__rtree__E_18)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__Var_23;

    {
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_20, &mercury__rtree__Var_23, mercury__rtree__E0_10, mercury__rtree__E1_11);
    }
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__Var_23);
    if (mercury__rtree__succeeded)
      {
        MR_Box mercury__rtree__V0_32;
        MR_Box mercury__rtree__E0_33;

        {
          mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_21, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_20, mercury__rtree__T0_12, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__L_16, &mercury__rtree__V0_32, &mercury__rtree__E0_33);
        }
        if (mercury__rtree__succeeded)
          {
            {
              mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_20, mercury__rtree__TypeInfo_for_K_21, mercury__rtree__V0_32, mercury__rtree__E0_33, mercury__rtree__E1_11, mercury__rtree__T1_13, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__V_17, mercury__rtree__E_18);
            }
            mercury__rtree__succeeded = MR_TRUE;
          }
        else
          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_21, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_20, mercury__rtree__T1_13, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__L_16, mercury__rtree__V_17, mercury__rtree__E_18);
          }
      }
    else
      {
        MR_Box mercury__rtree__V0_42;
        MR_Box mercury__rtree__E0_43;

        {
          mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_21, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_20, mercury__rtree__T1_13, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__L_16, &mercury__rtree__V0_42, &mercury__rtree__E0_43);
        }
        if (mercury__rtree__succeeded)
          {
            {
              mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_20, mercury__rtree__TypeInfo_for_K_21, mercury__rtree__V0_42, mercury__rtree__E0_43, mercury__rtree__E0_10, mercury__rtree__T0_12, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__V_17, mercury__rtree__E_18);
            }
            mercury__rtree__succeeded = MR_TRUE;
          }
        else
          {
            mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_21, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_20, mercury__rtree__T0_12, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__L_16, mercury__rtree__V_17, mercury__rtree__E_18);
          }
      }
    return mercury__rtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rtree__search_first_2_6_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_76,
  MR_Word mercury__rtree__TypeInfo_for_V_77,
  MR_Word mercury__rtree__TypeInfo_for_E_78,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__P_2,
  MR_Word mercury__rtree__C_3,
  MR_Box mercury__rtree__L_4,
  MR_Box * mercury__rtree__V_5,
  MR_Box * mercury__rtree__E_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rtree__V_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              {
                mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_V_77, mercury__rtree__TypeInfo_for_E_78, *mercury__rtree__V_5, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__E_6);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rtree__K0_12 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_14 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__E0_21;

              {
                mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K0_12, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E0_21);
              }
              if (mercury__rtree__succeeded)
                {
                  MR_Box mercury__rtree__E1_22;

                  {
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_14, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E1_22);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_21, mercury__rtree__E1_22, mercury__rtree__T0_13, mercury__rtree__T1_15, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T0_13;

                        mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                }
              else
                {
                  MR_Box mercury__rtree__Var_23;

                  {
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_14, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__Var_23);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T1_15;

                        mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rtree__K0_24 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_26 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
              MR_Box mercury__rtree__E0_35;

              {
                mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K0_24, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E0_35);
              }
              if (mercury__rtree__succeeded)
                {
                  MR_Box mercury__rtree__E1_36;

                  {
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_26, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E1_36);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      MR_Box mercury__rtree__E2_37;

                      {
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_28, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_37);
                      }
                      if (mercury__rtree__succeeded)
                        {
                          mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_35, mercury__rtree__E1_36, mercury__rtree__E2_37, mercury__rtree__T0_25, mercury__rtree__T1_27, mercury__rtree__T2_29, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                        }
                      else
                        {
                          mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_35, mercury__rtree__E1_36, mercury__rtree__T0_25, mercury__rtree__T1_27, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                        }
                    }
                  else
                    {
                      MR_Box mercury__rtree__E2_39;

                      {
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_28, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_39);
                      }
                      if (mercury__rtree__succeeded)
                        {
                          mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_35, mercury__rtree__E2_39, mercury__rtree__T0_25, mercury__rtree__T2_29, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                        }
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T0_25;

                            mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                }
              else
                {
                  MR_Box mercury__rtree__E1_41;

                  {
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_26, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E1_41);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      MR_Box mercury__rtree__E2_40;

                      {
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_28, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_40);
                      }
                      if (mercury__rtree__succeeded)
                        {
                          mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_41, mercury__rtree__E2_40, mercury__rtree__T1_27, mercury__rtree__T2_29, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                        }
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T1_27;

                            mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                  else
                    {
                      MR_Box mercury__rtree__Var_38;

                      {
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_28, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__Var_38);
                      }
                      if (mercury__rtree__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T2_29;

                            mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mercury__rtree__K0_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
              MR_Box mercury__rtree__K3_49 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
              MR_Word mercury__rtree__T3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
              MR_Box mercury__rtree__E0_56;
              MR_Word mercury__rtree__Var_83;
              MR_Word mercury__rtree__Var_84;
              MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_2, (MR_Integer) 1)));

              {
                mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_2), mercury__rtree__K0_43, &mercury__rtree__E0_56);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__Var_83 = (MR_Integer) 1;
                  {
                    mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_78, &mercury__rtree__Var_84, mercury__rtree__E0_56, mercury__rtree__L_4);
                  }
                  mercury__rtree__succeeded = (mercury__rtree__Var_83 == mercury__rtree__Var_84);
                }
              if (mercury__rtree__succeeded)
                {
                  MR_Box mercury__rtree__E1_57;
                  MR_Word mercury__rtree__Var_89;
                  MR_Word mercury__rtree__Var_90;
                  MR_bool MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_2, (MR_Integer) 1)));

                  {
                    mercury__rtree__succeeded = mercury__rtree__func_1(((MR_Box) mercury__rtree__P_2), mercury__rtree__K1_45, &mercury__rtree__E1_57);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      mercury__rtree__Var_89 = (MR_Integer) 1;
                      {
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_78, &mercury__rtree__Var_90, mercury__rtree__E1_57, mercury__rtree__L_4);
                      }
                      mercury__rtree__succeeded = (mercury__rtree__Var_89 == mercury__rtree__Var_90);
                    }
                  if (mercury__rtree__succeeded)
                    {
                      MR_Box mercury__rtree__E2_58;

                      {
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_47, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_58);
                      }
                      if (mercury__rtree__succeeded)
                        {
                          MR_Box mercury__rtree__E3_59;

                          {
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_59);
                          }
                          if (mercury__rtree__succeeded)
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_four_choices_13_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__E2_58, mercury__rtree__E3_59, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                          else
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__E2_58, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                        }
                      else
                        {
                          MR_Box mercury__rtree__E3_61;

                          {
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_61);
                          }
                          if (mercury__rtree__succeeded)
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__E3_61, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                          else
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                        }
                    }
                  else
                    {
                      MR_Box mercury__rtree__E2_64;

                      {
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_47, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_64);
                      }
                      if (mercury__rtree__succeeded)
                        {
                          MR_Box mercury__rtree__E3_62;

                          {
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_62);
                          }
                          if (mercury__rtree__succeeded)
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E2_64, mercury__rtree__E3_62, mercury__rtree__T0_44, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                          else
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E2_64, mercury__rtree__T0_44, mercury__rtree__T2_48, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                        }
                      else
                        {
                          MR_Box mercury__rtree__E3_63;

                          {
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_63);
                          }
                          if (mercury__rtree__succeeded)
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E3_63, mercury__rtree__T0_44, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                          else
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T0_44;

                                mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                        }
                    }
                }
              else
                {
                  MR_Box mercury__rtree__E1_73;

                  {
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_45, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E1_73);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      MR_Box mercury__rtree__E2_68;

                      {
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_47, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_68);
                      }
                      if (mercury__rtree__succeeded)
                        {
                          MR_Box mercury__rtree__E3_66;

                          {
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_66);
                          }
                          if (mercury__rtree__succeeded)
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_73, mercury__rtree__E2_68, mercury__rtree__E3_66, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                          else
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_73, mercury__rtree__E2_68, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                        }
                      else
                        {
                          MR_Box mercury__rtree__E3_67;

                          {
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_67);
                          }
                          if (mercury__rtree__succeeded)
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_73, mercury__rtree__E3_67, mercury__rtree__T1_46, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                          else
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T1_46;

                                mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                        }
                    }
                  else
                    {
                      MR_Box mercury__rtree__E2_71;

                      {
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_47, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_71);
                      }
                      if (mercury__rtree__succeeded)
                        {
                          MR_Box mercury__rtree__E3_70;

                          {
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_70);
                          }
                          if (mercury__rtree__succeeded)
                            {
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E2_71, mercury__rtree__E3_70, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
                          else
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T2_48;

                                mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                        }
                      else
                        {
                          MR_Box mercury__rtree__Var_60;

                          {
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__Var_60);
                          }
                          if (mercury__rtree__succeeded)
                            {
                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T3_50;

                                mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                              }
                              continue;
                            }
                        }
                    }
                }
            }
            break;
        }
        return mercury__rtree__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__rtree__maybe_limit_4_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_10,
  MR_Word mercury__rtree__TypeInfo_for_E_11,
  MR_Box mercury__rtree__K_5,
  MR_Word mercury__rtree__P_6,
  MR_Box mercury__rtree__L_7,
  MR_Box * mercury__rtree__E_8)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__Var_9;
    MR_Word mercury__rtree__Var_12;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_6, (MR_Integer) 1)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_6), mercury__rtree__K_5, mercury__rtree__E_8);
    }
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Var_9 = (MR_Integer) 1;
        {
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_11, &mercury__rtree__Var_12, *mercury__rtree__E_8, mercury__rtree__L_7);
        }
        mercury__rtree__succeeded = (mercury__rtree__Var_9 == mercury__rtree__Var_12);
      }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree__search_general_subtree_6_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_15,
  MR_Word mercury__rtree__TypeInfo_for_V_16,
  MR_Box mercury__rtree__K_7,
  MR_Word mercury__rtree__T_8,
  MR_Word mercury__rtree__KeyTest_9,
  MR_Word mercury__rtree__ValueTest_10,
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_12,
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_13)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KeyTest_9, (MR_Integer) 1)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KeyTest_9), mercury__rtree__K_7);
    }
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__search_general_2_5_p_0(mercury__rtree__TypeInfo_for_K_15, mercury__rtree__TypeInfo_for_V_16, mercury__rtree__T_8, mercury__rtree__KeyTest_9, mercury__rtree__ValueTest_10, mercury__rtree__STATE_VARIABLE_Values_0_12, mercury__rtree__STATE_VARIABLE_Values_13);
      }
    else
      *mercury__rtree__STATE_VARIABLE_Values_13 = mercury__rtree__STATE_VARIABLE_Values_0_12;
  }
}

void MR_CALL 
mercury__rtree__search_general_2_5_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_58,
  MR_Word mercury__rtree__TypeInfo_for_V_59,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__KeyTest_2,
  MR_Word mercury__rtree__ValueTest_3,
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_4,
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__rtree__Value_6 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_bool MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__ValueTest_3, (MR_Integer) 1)));

              {
                mercury__rtree__succeeded = mercury__rtree__func_4(((MR_Box) mercury__rtree__ValueTest_3), mercury__rtree__Value_6);
              }
              if (mercury__rtree__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__STATE_VARIABLE_Values_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__Value_6;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_Values_0_4));
                }
              else
                *mercury__rtree__STATE_VARIABLE_Values_5 = mercury__rtree__STATE_VARIABLE_Values_0_4;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rtree__K0_17 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_19 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word mercury__rtree__STATE_VARIABLE_Values_23_23;

              {
                mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K0_17, mercury__rtree__T0_18, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_0_4, &mercury__rtree__STATE_VARIABLE_Values_23_23);
              }
              {
                mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K1_19, mercury__rtree__T1_20, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_23_23, mercury__rtree__STATE_VARIABLE_Values_5);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rtree__K0_29 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_31 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_33 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word mercury__rtree__STATE_VARIABLE_Values_37_37;
              MR_Word mercury__rtree__STATE_VARIABLE_Values_38_38;

              {
                mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K0_29, mercury__rtree__T0_30, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_0_4, &mercury__rtree__STATE_VARIABLE_Values_37_37);
              }
              {
                mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K1_31, mercury__rtree__T1_32, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_37_37, &mercury__rtree__STATE_VARIABLE_Values_38_38);
              }
              {
                mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K2_33, mercury__rtree__T2_34, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_38_38, mercury__rtree__STATE_VARIABLE_Values_5);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mercury__rtree__K0_44 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_46 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_48 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
              MR_Box mercury__rtree__K3_50 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
              MR_Word mercury__rtree__T3_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
              MR_Word mercury__rtree__STATE_VARIABLE_Values_54_54;
              MR_Word mercury__rtree__STATE_VARIABLE_Values_55_55;
              MR_Word mercury__rtree__STATE_VARIABLE_Values_56_56;
              MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KeyTest_2, (MR_Integer) 1)));
              MR_bool MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box);
              MR_bool MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
              MR_bool MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box);

              {
                mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KeyTest_2), mercury__rtree__K0_44);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__search_general_2_5_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__T0_45, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_0_4, &mercury__rtree__STATE_VARIABLE_Values_54_54);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_54_54 = mercury__rtree__STATE_VARIABLE_Values_0_4;
              mercury__rtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KeyTest_2, (MR_Integer) 1)));
              {
                mercury__rtree__succeeded = mercury__rtree__func_1(((MR_Box) mercury__rtree__KeyTest_2), mercury__rtree__K1_46);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__search_general_2_5_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__T1_47, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_54_54, &mercury__rtree__STATE_VARIABLE_Values_55_55);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_55_55 = mercury__rtree__STATE_VARIABLE_Values_54_54;
              mercury__rtree__func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KeyTest_2, (MR_Integer) 1)));
              {
                mercury__rtree__succeeded = mercury__rtree__func_2(((MR_Box) mercury__rtree__KeyTest_2), mercury__rtree__K2_48);
              }
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__search_general_2_5_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__T2_49, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_55_55, &mercury__rtree__STATE_VARIABLE_Values_56_56);
                }
              else
                mercury__rtree__STATE_VARIABLE_Values_56_56 = mercury__rtree__STATE_VARIABLE_Values_55_55;
              mercury__rtree__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KeyTest_2, (MR_Integer) 1)));
              {
                mercury__rtree__succeeded = mercury__rtree__func_3(((MR_Box) mercury__rtree__KeyTest_2), mercury__rtree__K3_50);
              }
              if (mercury__rtree__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__T3_51;
                    MR_Word mercury__rtree__next_value_of_STATE_VARIABLE_Values_0_4 = mercury__rtree__STATE_VARIABLE_Values_56_56;

                    mercury__rtree__STATE_VARIABLE_Values_0_4 = mercury__rtree__next_value_of_STATE_VARIABLE_Values_0_4;
                    mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              else
                *mercury__rtree__STATE_VARIABLE_Values_5 = mercury__rtree__STATE_VARIABLE_Values_56_56;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__rtree__insert_tree_and_split_child3_11_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_56,
  MR_Word mercury__rtree__TypeClassInfo_for_region_55,
  MR_Box mercury__rtree__K0_12,
  MR_Word mercury__rtree__T0_13,
  MR_Box mercury__rtree__K1_14,
  MR_Word mercury__rtree__T1_15,
  MR_Box mercury__rtree__K2_16,
  MR_Word mercury__rtree__T2_17,
  MR_Box mercury__rtree__K_18,
  MR_Word mercury__rtree__S_19,
  MR_Integer mercury__rtree__D0_20,
  MR_Integer mercury__rtree__D_21,
  MR_Word * mercury__rtree__T_22)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__T0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
          *mercury__rtree__T_22 = base;
          MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K0_12;
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T0_13));
          MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_14;
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T1_15));
          MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_16;
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T2_17));
          MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K_18;
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__S_19));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__NK0_28;
          MR_Word mercury__rtree__NT0_29;
          MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

          {
            mercury__rtree__NK0_28 = mercury__rtree__func_11(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K0_12);
          }
          {
            mercury__rtree__NT0_29 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T0_13, mercury__rtree__K_18, mercury__rtree__S_19, mercury__rtree__D0_20, mercury__rtree__D_21);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_22 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__NK0_28;
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__NT0_29));
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_14;
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_15));
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_16;
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_17));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__NK0_51;
          MR_Word mercury__rtree__NT0_52;
          MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

          {
            mercury__rtree__NK0_51 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K0_12);
          }
          {
            mercury__rtree__NT0_52 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T0_13, mercury__rtree__K_18, mercury__rtree__S_19, mercury__rtree__D0_20, mercury__rtree__D_21);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_22 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__NK0_51;
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__NT0_52));
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_14;
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_15));
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_16;
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_17));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K3_44;
          MR_Word mercury__rtree__T3_45;
          MR_Box mercury__rtree__K4_46;
          MR_Word mercury__rtree__T4_47;
          MR_Word mercury__rtree__Result_48;
          MR_Float mercury__rtree__SizeA_61;
          MR_Float mercury__rtree__SizeB_62;
          MR_Float mercury__rtree__EnlargedSizeA_63;
          MR_Float mercury__rtree__EnlargedSizeB_64;
          MR_Float mercury__rtree__IncreaseForA_65;
          MR_Float mercury__rtree__IncreaseForB_66;
          MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
          MR_Box mercury__rtree__conv1_SizeA_61;
          MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
          MR_Box mercury__rtree__conv3_SizeB_62;
          MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__rtree__conv5_EnlargedSizeA_63;
          MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__rtree__conv7_EnlargedSizeB_64;

          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T0_13, &mercury__rtree__K3_44, &mercury__rtree__T3_45, &mercury__rtree__K4_46, &mercury__rtree__T4_47);
          }
          mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 7)));
          {
            mercury__rtree__conv1_SizeA_61 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K2_16);
          }
          mercury__rtree__SizeA_61 = MR_unbox_float(mercury__rtree__conv1_SizeA_61);
          mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 7)));
          {
            mercury__rtree__conv3_SizeB_62 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K3_44);
          }
          mercury__rtree__SizeB_62 = MR_unbox_float(mercury__rtree__conv3_SizeB_62);
          mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 9)));
          {
            mercury__rtree__conv5_EnlargedSizeA_63 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K2_16);
          }
          mercury__rtree__EnlargedSizeA_63 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_63);
          mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 9)));
          {
            mercury__rtree__conv7_EnlargedSizeB_64 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K3_44);
          }
          mercury__rtree__EnlargedSizeB_64 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_64);
          mercury__rtree__IncreaseForA_65 = (mercury__rtree__EnlargedSizeA_63 - mercury__rtree__SizeA_61);
          mercury__rtree__IncreaseForB_66 = (mercury__rtree__EnlargedSizeB_64 - mercury__rtree__SizeB_62);
          mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_65 < mercury__rtree__IncreaseForB_66);
          if (mercury__rtree__succeeded)
            mercury__rtree__Result_48 = (MR_Integer) 0;
          else
            {
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_65 > mercury__rtree__IncreaseForB_66);
              if (mercury__rtree__succeeded)
                mercury__rtree__Result_48 = (MR_Integer) 1;
              else
                {
                  mercury__rtree__succeeded = (mercury__rtree__SizeA_61 <= mercury__rtree__SizeB_62);
                  if (mercury__rtree__succeeded)
                    mercury__rtree__Result_48 = (MR_Integer) 0;
                  else
                    mercury__rtree__Result_48 = (MR_Integer) 1;
                }
            }
          switch (mercury__rtree__Result_48) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__K5_49;
                MR_Word mercury__rtree__T5_50;
                MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

                {
                  mercury__rtree__K5_49 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K3_44);
                }
                {
                  mercury__rtree__T5_50 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T3_45, mercury__rtree__K_18, mercury__rtree__S_19, mercury__rtree__D0_20, mercury__rtree__D_21);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__T_22 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K1_14;
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T1_15));
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K2_16;
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T2_17));
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K4_46;
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T4_47));
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K5_49;
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T5_50));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__rtree__K5_53;
                MR_Word mercury__rtree__T5_54;
                MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

                {
                  mercury__rtree__K5_53 = mercury__rtree__func_9(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K4_46);
                }
                {
                  mercury__rtree__T5_54 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T4_47, mercury__rtree__K_18, mercury__rtree__S_19, mercury__rtree__D0_20, mercury__rtree__D_21);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__T_22 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K1_14;
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T1_15));
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K2_16;
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T2_17));
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K3_44;
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T3_45));
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K5_53;
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T5_54));
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__rtree__insert_tree_and_split_child2_9_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_52,
  MR_Word mercury__rtree__TypeClassInfo_for_region_51,
  MR_Box mercury__rtree__K0_10,
  MR_Word mercury__rtree__T0_11,
  MR_Box mercury__rtree__K1_12,
  MR_Word mercury__rtree__T1_13,
  MR_Box mercury__rtree__K_14,
  MR_Word mercury__rtree__S_15,
  MR_Integer mercury__rtree__D0_16,
  MR_Integer mercury__rtree__D_17,
  MR_Word * mercury__rtree__T_18)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__T0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          *mercury__rtree__T_18 = base;
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K0_10;
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T0_11));
          MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_12;
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
          MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K_14;
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__S_15));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__NK0_24;
          MR_Word mercury__rtree__NT0_25;
          MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

          {
            mercury__rtree__NK0_24 = mercury__rtree__func_11(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K0_10);
          }
          {
            mercury__rtree__NT0_25 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_52, mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T0_11, mercury__rtree__K_14, mercury__rtree__S_15, mercury__rtree__D0_16, mercury__rtree__D_17);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__NK0_24;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__NT0_25));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_12;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__NK0_47;
          MR_Word mercury__rtree__NT0_48;
          MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

          {
            mercury__rtree__NK0_47 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K0_10);
          }
          {
            mercury__rtree__NT0_48 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_52, mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T0_11, mercury__rtree__K_14, mercury__rtree__S_15, mercury__rtree__D0_16, mercury__rtree__D_17);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__T_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__NK0_47;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__NT0_48));
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_12;
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K2_40;
          MR_Word mercury__rtree__T2_41;
          MR_Box mercury__rtree__K3_42;
          MR_Word mercury__rtree__T3_43;
          MR_Word mercury__rtree__Result_44;
          MR_Float mercury__rtree__SizeA_57;
          MR_Float mercury__rtree__SizeB_58;
          MR_Float mercury__rtree__EnlargedSizeA_59;
          MR_Float mercury__rtree__EnlargedSizeB_60;
          MR_Float mercury__rtree__IncreaseForA_61;
          MR_Float mercury__rtree__IncreaseForB_62;
          MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
          MR_Box mercury__rtree__conv1_SizeA_57;
          MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
          MR_Box mercury__rtree__conv3_SizeB_58;
          MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__rtree__conv5_EnlargedSizeA_59;
          MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
          MR_Box mercury__rtree__conv7_EnlargedSizeB_60;

          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T0_11, &mercury__rtree__K2_40, &mercury__rtree__T2_41, &mercury__rtree__K3_42, &mercury__rtree__T3_43);
          }
          mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 7)));
          {
            mercury__rtree__conv1_SizeA_57 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K2_40);
          }
          mercury__rtree__SizeA_57 = MR_unbox_float(mercury__rtree__conv1_SizeA_57);
          mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 7)));
          {
            mercury__rtree__conv3_SizeB_58 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K3_42);
          }
          mercury__rtree__SizeB_58 = MR_unbox_float(mercury__rtree__conv3_SizeB_58);
          mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 9)));
          {
            mercury__rtree__conv5_EnlargedSizeA_59 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K2_40);
          }
          mercury__rtree__EnlargedSizeA_59 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_59);
          mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 9)));
          {
            mercury__rtree__conv7_EnlargedSizeB_60 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K3_42);
          }
          mercury__rtree__EnlargedSizeB_60 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_60);
          mercury__rtree__IncreaseForA_61 = (mercury__rtree__EnlargedSizeA_59 - mercury__rtree__SizeA_57);
          mercury__rtree__IncreaseForB_62 = (mercury__rtree__EnlargedSizeB_60 - mercury__rtree__SizeB_58);
          mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_61 < mercury__rtree__IncreaseForB_62);
          if (mercury__rtree__succeeded)
            mercury__rtree__Result_44 = (MR_Integer) 0;
          else
            {
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_61 > mercury__rtree__IncreaseForB_62);
              if (mercury__rtree__succeeded)
                mercury__rtree__Result_44 = (MR_Integer) 1;
              else
                {
                  mercury__rtree__succeeded = (mercury__rtree__SizeA_57 <= mercury__rtree__SizeB_58);
                  if (mercury__rtree__succeeded)
                    mercury__rtree__Result_44 = (MR_Integer) 0;
                  else
                    mercury__rtree__Result_44 = (MR_Integer) 1;
                }
            }
          switch (mercury__rtree__Result_44) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__rtree__K4_45;
                MR_Word mercury__rtree__T4_46;
                MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

                {
                  mercury__rtree__K4_45 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K2_40);
                }
                {
                  mercury__rtree__T4_46 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_52, mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T2_41, mercury__rtree__K_14, mercury__rtree__S_15, mercury__rtree__D0_16, mercury__rtree__D_17);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__T_18 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_12;
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_13));
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K3_42;
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T3_43));
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K4_45;
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T4_46));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__rtree__K4_49;
                MR_Word mercury__rtree__T4_50;
                MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

                {
                  mercury__rtree__K4_49 = mercury__rtree__func_9(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K3_42);
                }
                {
                  mercury__rtree__T4_50 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_52, mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T3_43, mercury__rtree__K_14, mercury__rtree__S_15, mercury__rtree__D0_16, mercury__rtree__D_17);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__T_18 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_12;
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_13));
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K2_40;
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T2_41));
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K4_49;
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T4_50));
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
mercury__rtree__insert_tree_5_f_0(
  MR_Word mercury__rtree__TypeInfo_for_V_68,
  MR_Word mercury__rtree__TypeClassInfo_for_region_67,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__K_2,
  MR_Word mercury__rtree__S_3,
  MR_Integer mercury__rtree__D0_4,
  MR_Integer mercury__rtree__D_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rtree__succeeded;
        MR_Word mercury__rtree__HeadVar__6_6;

        switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__rtree__TypeInfo_70_70;
              MR_Word mercury__rtree__TypeCtorInfo_71_71 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_rtree_2_2;
              MR_Word mercury__rtree__TypeInfo_72_72;
              MR_Box mercury__rtree__conv0_HeadVar__6_6;

{
#define MR_PROC_LABEL mercury__rtree__insert_tree_5_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__rtree__TypeClassInfo_for_region_67 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__rtree__TypeInfo_70_70  = TypeInfo;
}
              {
                mercury__rtree__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_72_72, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_71_71));
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_72_72, 1) = ((MR_Box) (mercury__rtree__TypeInfo_70_70));
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_72_72, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_68));
              }
              {
                mercury__rtree__conv0_HeadVar__6_6 = mercury__require__func_error_1_f_0(mercury__rtree__TypeInfo_72_72, (MR_String) "insert_tree: leaf unexpected");
              }
              mercury__rtree__HeadVar__6_6 = ((MR_Word) mercury__rtree__conv0_HeadVar__6_6);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rtree__K0_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_15 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));

              mercury__rtree__succeeded = (mercury__rtree__D0_4 == mercury__rtree__D_5);
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 0) = mercury__rtree__K0_13;
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 1) = ((MR_Box) (mercury__rtree__T0_14));
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 2) = mercury__rtree__K1_15;
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 3) = ((MR_Box) (mercury__rtree__T1_16));
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 4) = mercury__rtree__K_2;
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 5) = ((MR_Box) (mercury__rtree__S_3));
                }
              else
                {
                  MR_Word mercury__rtree__Result_22;
                  MR_Float mercury__rtree__SizeA_77;
                  MR_Float mercury__rtree__SizeB_78;
                  MR_Float mercury__rtree__EnlargedSizeA_79;
                  MR_Float mercury__rtree__EnlargedSizeB_80;
                  MR_Float mercury__rtree__IncreaseForA_81;
                  MR_Float mercury__rtree__IncreaseForB_82;
                  MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7)));
                  MR_Box mercury__rtree__conv2_SizeA_77;
                  MR_Box MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box);
                  MR_Box mercury__rtree__conv4_SizeB_78;
                  MR_Box MR_CALL (* mercury__rtree__func_5)(MR_Box, MR_Box, MR_Box);
                  MR_Box mercury__rtree__conv6_EnlargedSizeA_79;
                  MR_Box MR_CALL (* mercury__rtree__func_7)(MR_Box, MR_Box, MR_Box);
                  MR_Box mercury__rtree__conv8_EnlargedSizeB_80;

                  {
                    mercury__rtree__conv2_SizeA_77 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K0_13);
                  }
                  mercury__rtree__SizeA_77 = MR_unbox_float(mercury__rtree__conv2_SizeA_77);
                  mercury__rtree__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7)));
                  {
                    mercury__rtree__conv4_SizeB_78 = mercury__rtree__func_3(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K1_15);
                  }
                  mercury__rtree__SizeB_78 = MR_unbox_float(mercury__rtree__conv4_SizeB_78);
                  mercury__rtree__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9)));
                  {
                    mercury__rtree__conv6_EnlargedSizeA_79 = mercury__rtree__func_5(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K_2, mercury__rtree__K0_13);
                  }
                  mercury__rtree__EnlargedSizeA_79 = MR_unbox_float(mercury__rtree__conv6_EnlargedSizeA_79);
                  mercury__rtree__func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9)));
                  {
                    mercury__rtree__conv8_EnlargedSizeB_80 = mercury__rtree__func_7(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K_2, mercury__rtree__K1_15);
                  }
                  mercury__rtree__EnlargedSizeB_80 = MR_unbox_float(mercury__rtree__conv8_EnlargedSizeB_80);
                  mercury__rtree__IncreaseForA_81 = (mercury__rtree__EnlargedSizeA_79 - mercury__rtree__SizeA_77);
                  mercury__rtree__IncreaseForB_82 = (mercury__rtree__EnlargedSizeB_80 - mercury__rtree__SizeB_78);
                  mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_81 < mercury__rtree__IncreaseForB_82);
                  if (mercury__rtree__succeeded)
                    mercury__rtree__Result_22 = (MR_Integer) 0;
                  else
                    {
                      mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_81 > mercury__rtree__IncreaseForB_82);
                      if (mercury__rtree__succeeded)
                        mercury__rtree__Result_22 = (MR_Integer) 1;
                      else
                        {
                          mercury__rtree__succeeded = (mercury__rtree__SizeA_77 <= mercury__rtree__SizeB_78);
                          if (mercury__rtree__succeeded)
                            mercury__rtree__Result_22 = (MR_Integer) 0;
                          else
                            mercury__rtree__Result_22 = (MR_Integer) 1;
                        }
                    }
                  switch (mercury__rtree__Result_22) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer mercury__rtree__Var_25 = (mercury__rtree__D0_4 + (MR_Integer) 1);

                        {
                          mercury__rtree__insert_tree_and_split_child2_9_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K0_13, mercury__rtree__T0_14, mercury__rtree__K1_15, mercury__rtree__T1_16, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__Var_25, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer mercury__rtree__Var_23 = (mercury__rtree__D0_4 + (MR_Integer) 1);

                        {
                          mercury__rtree__insert_tree_and_split_child2_9_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K1_15, mercury__rtree__T1_16, mercury__rtree__K0_13, mercury__rtree__T0_14, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__Var_23, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rtree__K0_27 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Word mercury__rtree__T0_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
              MR_Box mercury__rtree__K1_29 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
              MR_Word mercury__rtree__T1_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rtree__K2_31 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
              MR_Word mercury__rtree__T2_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));

              mercury__rtree__succeeded = (mercury__rtree__D0_4 == mercury__rtree__D_5);
              if (mercury__rtree__succeeded)
                {
                  mercury__rtree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 0) = mercury__rtree__K0_27;
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 1) = ((MR_Box) (mercury__rtree__T0_28));
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 2) = mercury__rtree__K1_29;
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 3) = ((MR_Box) (mercury__rtree__T1_30));
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 4) = mercury__rtree__K2_31;
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 5) = ((MR_Box) (mercury__rtree__T2_32));
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 6) = mercury__rtree__K_2;
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 7) = ((MR_Box) (mercury__rtree__S_3));
                }
              else
                {
                  MR_Word mercury__rtree__Result_38;

                  {
                    mercury__rtree__Result_38 = mercury__rtree__choose_subtree_4_f_0(mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K_2, mercury__rtree__K0_27, mercury__rtree__K1_29, mercury__rtree__K2_31);
                  }
                  switch (mercury__rtree__Result_38) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer mercury__rtree__Var_43 = (mercury__rtree__D0_4 + (MR_Integer) 1);

                        {
                          mercury__rtree__insert_tree_and_split_child3_11_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K0_27, mercury__rtree__T0_28, mercury__rtree__K1_29, mercury__rtree__T1_30, mercury__rtree__K2_31, mercury__rtree__T2_32, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__Var_43, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer mercury__rtree__Var_41 = (mercury__rtree__D0_4 + (MR_Integer) 1);

                        {
                          mercury__rtree__insert_tree_and_split_child3_11_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K1_29, mercury__rtree__T1_30, mercury__rtree__K0_27, mercury__rtree__T0_28, mercury__rtree__K2_31, mercury__rtree__T2_32, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__Var_41, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Integer mercury__rtree__Var_39 = (mercury__rtree__D0_4 + (MR_Integer) 1);

                        {
                          mercury__rtree__insert_tree_and_split_child3_11_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K2_31, mercury__rtree__T2_32, mercury__rtree__K0_27, mercury__rtree__T0_28, mercury__rtree__K1_29, mercury__rtree__T1_30, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__Var_39, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Box mercury__rtree__K0_59;
              MR_Word mercury__rtree__T0_60;
              MR_Box mercury__rtree__K1_61;
              MR_Word mercury__rtree__T1_62;
              MR_Word mercury__rtree__NRT_63;
              MR_Integer mercury__rtree__Var_65;

              {
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__HeadVar__1_1, &mercury__rtree__K0_59, &mercury__rtree__T0_60, &mercury__rtree__K1_61, &mercury__rtree__T1_62);
              }
              {
                mercury__rtree__NRT_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__rtree__NRT_63, 0) = mercury__rtree__K0_59;
                MR_hl_field(MR_mktag(1), mercury__rtree__NRT_63, 1) = ((MR_Box) (mercury__rtree__T0_60));
                MR_hl_field(MR_mktag(1), mercury__rtree__NRT_63, 2) = mercury__rtree__K1_61;
                MR_hl_field(MR_mktag(1), mercury__rtree__NRT_63, 3) = ((MR_Box) (mercury__rtree__T1_62));
              }
              mercury__rtree__Var_65 = (mercury__rtree__D_5 + (MR_Integer) 1);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__NRT_63;
                MR_Integer mercury__rtree__next_value_of_D_5 = mercury__rtree__Var_65;

                mercury__rtree__D_5 = mercury__rtree__next_value_of_D_5;
                mercury__rtree__D0_4 = (MR_Integer) 1;
                mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
        }
        return mercury__rtree__HeadVar__6_6;
      }
      break;
    }
}

static void MR_CALL 
mercury__rtree__reinsert_deleted_subtrees_4_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_31,
  MR_Word mercury__rtree__TypeClassInfo_for_region_30,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Integer mercury__rtree__Depth_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Word * mercury__rtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rtree__succeeded;

        if ((mercury__rtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__rtree__HeadVar__4_4 = mercury__rtree__HeadVar__3_3;
        else
          {
            MR_Box mercury__rtree__K_9;
            MR_Word mercury__rtree__T_10;
            MR_Word mercury__rtree__DLs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__rtree__T1_15;
            MR_Word mercury__rtree__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
            MR_Box mercury__rtree__Var_16;
            MR_Word mercury__rtree__Var_17;
            MR_Box mercury__rtree__Var_18;
            MR_Word mercury__rtree__Var_19;
            MR_Box mercury__rtree__Var_20;
            MR_Word mercury__rtree__Var_21;
            MR_Box mercury__rtree__Var_22;
            MR_Word mercury__rtree__Var_23;

            mercury__rtree__K_9 = (MR_hl_field(MR_mktag(0), mercury__rtree__Var_24, (MR_Integer) 0));
            mercury__rtree__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__Var_24, (MR_Integer) 1)));
            {
              mercury__rtree__T1_15 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_31, mercury__rtree__TypeClassInfo_for_region_30, mercury__rtree__HeadVar__3_3, mercury__rtree__K_9, mercury__rtree__T_10, (MR_Integer) 1, mercury__rtree__Depth_2);
            }
            mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)));
            if (mercury__rtree__succeeded)
              {
                mercury__rtree__Var_16 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
                mercury__rtree__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
                mercury__rtree__Var_18 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 2));
                mercury__rtree__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
                mercury__rtree__Var_20 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 4));
                mercury__rtree__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 5)));
                mercury__rtree__Var_22 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 6));
                mercury__rtree__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 7)));
                {
                  MR_Integer mercury__rtree__Var_26 = (mercury__rtree__Depth_2 + (MR_Integer) 2);

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__DLs_11;
                    MR_Integer mercury__rtree__next_value_of_Depth_2 = mercury__rtree__Var_26;
                    MR_Word mercury__rtree__next_value_of_HeadVar__3_3 = mercury__rtree__T1_15;

                    mercury__rtree__HeadVar__3_3 = mercury__rtree__next_value_of_HeadVar__3_3;
                    mercury__rtree__Depth_2 = mercury__rtree__next_value_of_Depth_2;
                    mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              }
            else
              {
                MR_Integer mercury__rtree__Var_28 = (mercury__rtree__Depth_2 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__rtree__next_value_of_HeadVar__1_1 = mercury__rtree__DLs_11;
                  MR_Integer mercury__rtree__next_value_of_Depth_2 = mercury__rtree__Var_28;
                  MR_Word mercury__rtree__next_value_of_HeadVar__3_3 = mercury__rtree__T1_15;

                  mercury__rtree__HeadVar__3_3 = mercury__rtree__next_value_of_HeadVar__3_3;
                  mercury__rtree__Depth_2 = mercury__rtree__next_value_of_Depth_2;
                  mercury__rtree__HeadVar__1_1 = mercury__rtree__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__rtree__try_deletion4_14_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_43,
  MR_Word mercury__rtree__TypeClassInfo_for_region_42,
  MR_Box mercury__rtree__K0_15,
  MR_Word mercury__rtree__T0_16,
  MR_Box mercury__rtree__K1_17,
  MR_Word mercury__rtree__T1_18,
  MR_Box mercury__rtree__K2_19,
  MR_Word mercury__rtree__T2_20,
  MR_Box mercury__rtree__K3_21,
  MR_Word mercury__rtree__T3_22,
  MR_Box mercury__rtree__K_23,
  MR_Box mercury__rtree__V_24,
  MR_Integer mercury__rtree__D_25,
  MR_Box * mercury__rtree__DK_26,
  MR_Word * mercury__rtree__DT_27,
  MR_Word * mercury__rtree__DI_28)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__DK0_29;
    MR_Word mercury__rtree__DT0_30;
    MR_Word mercury__rtree__DI0_31;
    MR_Integer mercury__rtree__Var_38;
    MR_Integer mercury__rtree__Var_39;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 6)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K_23, mercury__rtree__K0_15);
    }
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Var_39 = (MR_Integer) 1;
        mercury__rtree__Var_38 = (mercury__rtree__D_25 + mercury__rtree__Var_39);
        {
          mercury__rtree__succeeded = mercury__rtree__delete_2_7_p_0(mercury__rtree__TypeInfo_for_V_43, mercury__rtree__TypeClassInfo_for_region_42, mercury__rtree__T0_16, mercury__rtree__K_23, mercury__rtree__V_24, mercury__rtree__Var_38, &mercury__rtree__DK0_29, &mercury__rtree__DT0_30, &mercury__rtree__DI0_31);
        }
        if (mercury__rtree__succeeded)
          {
            if (((MR_tag((MR_Word) mercury__rtree__DI0_31)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__rtree__DLs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__DI0_31, (MR_Integer) 0)));
                MR_Box mercury__rtree__K12_33;
                MR_Integer mercury__rtree__Var_40 = (mercury__rtree__D_25 + (MR_Integer) 1);
                MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box);
                MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box, MR_Box);

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__DI_28 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__rtree__Var_40));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__DLs_32));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__DT_27 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_17;
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_18));
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K2_19;
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T2_20));
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K3_21;
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T3_22));
                }
                mercury__rtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
                {
                  mercury__rtree__K12_33 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K1_17, mercury__rtree__K2_19);
                }
                mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
                {
                  *mercury__rtree__DK_26 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K3_21, mercury__rtree__K12_33);
                }
              }
            else
              {
                MR_Box mercury__rtree__TK_36;
                MR_Box mercury__rtree__K23_37;
                MR_Box MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box, MR_Box);
                MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
                MR_Box MR_CALL (* mercury__rtree__func_5)(MR_Box, MR_Box, MR_Box);

                *mercury__rtree__DI_28 = mercury__rtree__DI0_31;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__DT_27 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__DK0_29;
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__DT0_30));
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_17;
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T1_18));
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_19;
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T2_20));
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K3_21;
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T3_22));
                }
                mercury__rtree__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
                {
                  mercury__rtree__TK_36 = mercury__rtree__func_3(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__DK0_29, mercury__rtree__K1_17);
                }
                mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
                {
                  mercury__rtree__K23_37 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K2_19, mercury__rtree__K3_21);
                }
                mercury__rtree__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
                {
                  *mercury__rtree__DK_26 = mercury__rtree__func_5(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__TK_36, mercury__rtree__K23_37);
                }
              }
            mercury__rtree__succeeded = MR_TRUE;
          }
      }
    return mercury__rtree__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rtree__try_deletion3_12_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_37,
  MR_Word mercury__rtree__TypeClassInfo_for_region_36,
  MR_Box mercury__rtree__K0_13,
  MR_Word mercury__rtree__T0_14,
  MR_Box mercury__rtree__K1_15,
  MR_Word mercury__rtree__T1_16,
  MR_Box mercury__rtree__K2_17,
  MR_Word mercury__rtree__T2_18,
  MR_Box mercury__rtree__K_19,
  MR_Box mercury__rtree__V_20,
  MR_Integer mercury__rtree__Depth_21,
  MR_Box * mercury__rtree__DK_22,
  MR_Word * mercury__rtree__DT_23,
  MR_Word * mercury__rtree__DI_24)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__DK0_25;
    MR_Word mercury__rtree__DT0_26;
    MR_Word mercury__rtree__DI0_27;
    MR_Integer mercury__rtree__Var_32;
    MR_Integer mercury__rtree__Var_33;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 6)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_36), mercury__rtree__K_19, mercury__rtree__K0_13);
    }
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Var_33 = (MR_Integer) 1;
        mercury__rtree__Var_32 = (mercury__rtree__Depth_21 + mercury__rtree__Var_33);
        {
          mercury__rtree__succeeded = mercury__rtree__delete_2_7_p_0(mercury__rtree__TypeInfo_for_V_37, mercury__rtree__TypeClassInfo_for_region_36, mercury__rtree__T0_14, mercury__rtree__K_19, mercury__rtree__V_20, mercury__rtree__Var_32, &mercury__rtree__DK0_25, &mercury__rtree__DT0_26, &mercury__rtree__DI0_27);
        }
        if (mercury__rtree__succeeded)
          {
            if (((MR_tag((MR_Word) mercury__rtree__DI0_27)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__rtree__DLs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__DI0_27, (MR_Integer) 0)));
                MR_Integer mercury__rtree__Var_34 = (mercury__rtree__Depth_21 + (MR_Integer) 1);
                MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box);

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__DI_24 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__rtree__Var_34));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__DLs_28));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__DT_23 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K1_15;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T1_16));
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K2_17;
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T2_18));
                }
                mercury__rtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8)));
                {
                  *mercury__rtree__DK_22 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_36), mercury__rtree__K1_15, mercury__rtree__K2_17);
                }
              }
            else
              {
                MR_Box mercury__rtree__TK_31;
                MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box, MR_Box);
                MR_Box MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box, MR_Box);

                *mercury__rtree__DI_24 = mercury__rtree__DI0_27;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__DT_23 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__DK0_25;
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__DT0_26));
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_15;
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_16));
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_17;
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_18));
                }
                mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8)));
                {
                  mercury__rtree__TK_31 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_36), mercury__rtree__DK0_25, mercury__rtree__K1_15);
                }
                mercury__rtree__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8)));
                {
                  *mercury__rtree__DK_22 = mercury__rtree__func_3(((MR_Box) mercury__rtree__TypeClassInfo_for_region_36), mercury__rtree__TK_31, mercury__rtree__K2_17);
                }
              }
            mercury__rtree__succeeded = MR_TRUE;
          }
      }
    return mercury__rtree__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rtree__try_deletion2_10_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_32,
  MR_Word mercury__rtree__TypeClassInfo_for_region_31,
  MR_Box mercury__rtree__K0_11,
  MR_Word mercury__rtree__T0_12,
  MR_Box mercury__rtree__K1_13,
  MR_Word mercury__rtree__T1_14,
  MR_Box mercury__rtree__K_15,
  MR_Box mercury__rtree__V_16,
  MR_Integer mercury__rtree__Depth_17,
  MR_Box * mercury__rtree__DK_18,
  MR_Word * mercury__rtree__DT_19,
  MR_Word * mercury__rtree__Info_20)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Box mercury__rtree__DK0_21;
    MR_Word mercury__rtree__DT0_22;
    MR_Word mercury__rtree__Info0_23;
    MR_Integer mercury__rtree__Var_28;
    MR_Integer mercury__rtree__Var_29;
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_31, (MR_Integer) 0)), (MR_Integer) 6)));

    {
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_31), mercury__rtree__K_15, mercury__rtree__K0_11);
    }
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__Var_29 = (MR_Integer) 1;
        mercury__rtree__Var_28 = (mercury__rtree__Depth_17 + mercury__rtree__Var_29);
        {
          mercury__rtree__succeeded = mercury__rtree__delete_2_7_p_0(mercury__rtree__TypeInfo_for_V_32, mercury__rtree__TypeClassInfo_for_region_31, mercury__rtree__T0_12, mercury__rtree__K_15, mercury__rtree__V_16, mercury__rtree__Var_28, &mercury__rtree__DK0_21, &mercury__rtree__DT0_22, &mercury__rtree__Info0_23);
        }
        if (mercury__rtree__succeeded)
          {
            if (((MR_tag((MR_Word) mercury__rtree__Info0_23)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__rtree__DLs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__Info0_23, (MR_Integer) 0)));
                MR_Word mercury__rtree__Del_25;
                MR_Word mercury__rtree__Var_30;

                {
                  mercury__rtree__Del_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__rtree__Del_25, 0) = mercury__rtree__K1_13;
                  MR_hl_field(MR_mktag(0), mercury__rtree__Del_25, 1) = ((MR_Box) (mercury__rtree__T1_14));
                }
                {
                  mercury__rtree__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__rtree__Var_30, 0) = ((MR_Box) (mercury__rtree__Del_25));
                  MR_hl_field(MR_mktag(1), mercury__rtree__Var_30, 1) = ((MR_Box) (mercury__rtree__DLs_24));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__rtree__Info_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__rtree__Var_30));
                }
                *mercury__rtree__DT_19 = mercury__rtree__DT0_22;
                *mercury__rtree__DK_18 = mercury__rtree__K_15;
              }
            else
              {
                MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box);

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__DT_19 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__DK0_21;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__DT0_22));
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_13;
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_14));
                }
                mercury__rtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_31, (MR_Integer) 0)), (MR_Integer) 8)));
                {
                  *mercury__rtree__DK_18 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_31), mercury__rtree__K1_13, mercury__rtree__DK0_21);
                }
                *mercury__rtree__Info_20 = mercury__rtree__Info0_23;
              }
            mercury__rtree__succeeded = MR_TRUE;
          }
      }
    return mercury__rtree__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rtree__delete_2_7_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_67,
  MR_Word mercury__rtree__TypeClassInfo_for_region_66,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__K_2,
  MR_Box mercury__rtree__V_3,
  MR_Integer mercury__rtree__Depth_4,
  MR_Box * mercury__rtree__HeadVar__5_5,
  MR_Word * mercury__rtree__HeadVar__6_6,
  MR_Word * mercury__rtree__HeadVar__7_7)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__rtree__V_8 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__Var_11;

          {
            mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__V_3, mercury__rtree__V_8);
          }
          if (mercury__rtree__succeeded)
            {
              *mercury__rtree__HeadVar__5_5 = mercury__rtree__K_2;
              *mercury__rtree__HeadVar__6_6 = mercury__rtree__HeadVar__1_1;
              mercury__rtree__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *mercury__rtree__HeadVar__7_7 = (MR_Word) &mercury__rtree_scalar_common_4[0];
              mercury__rtree__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_12 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_14 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Box mercury__rtree__DK0_22;
          MR_Word mercury__rtree__DT0_23;
          MR_Word mercury__rtree__Info0_24;
          MR_Box mercury__rtree__DK0_78;
          MR_Word mercury__rtree__DT0_79;
          MR_Word mercury__rtree__Info0_80;
          MR_Integer mercury__rtree__Var_85;
          MR_Integer mercury__rtree__Var_86;

          {
            mercury__rtree__succeeded = mercury__rtree__contains_2_p_0(mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K_2, mercury__rtree__K0_12);
          }
          if (mercury__rtree__succeeded)
            {
              mercury__rtree__Var_86 = (MR_Integer) 1;
              mercury__rtree__Var_85 = (mercury__rtree__Depth_4 + mercury__rtree__Var_86);
              {
                mercury__rtree__succeeded = mercury__rtree__delete_2_7_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__T0_13, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Var_85, &mercury__rtree__DK0_78, &mercury__rtree__DT0_79, &mercury__rtree__Info0_80);
              }
              if (mercury__rtree__succeeded)
                {
                  if (((MR_tag((MR_Word) mercury__rtree__Info0_80)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word mercury__rtree__DLs_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__Info0_80, (MR_Integer) 0)));
                      MR_Word mercury__rtree__Del_82;
                      MR_Word mercury__rtree__Var_87;

                      {
                        mercury__rtree__Del_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__rtree__Del_82, 0) = mercury__rtree__K1_14;
                        MR_hl_field(MR_mktag(0), mercury__rtree__Del_82, 1) = ((MR_Box) (mercury__rtree__T1_15));
                      }
                      {
                        mercury__rtree__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__rtree__Var_87, 0) = ((MR_Box) (mercury__rtree__Del_82));
                        MR_hl_field(MR_mktag(1), mercury__rtree__Var_87, 1) = ((MR_Box) (mercury__rtree__DLs_81));
                      }
                      {
                        mercury__rtree__Info0_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__rtree__Info0_24, 0) = ((MR_Box) (mercury__rtree__Var_87));
                      }
                      mercury__rtree__DT0_23 = mercury__rtree__DT0_79;
                      mercury__rtree__DK0_22 = mercury__rtree__K_2;
                    }
                  else
                    {
                      {
                        mercury__rtree__DT0_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__rtree__DT0_23, 0) = mercury__rtree__DK0_78;
                        MR_hl_field(MR_mktag(1), mercury__rtree__DT0_23, 1) = ((MR_Box) (mercury__rtree__DT0_79));
                        MR_hl_field(MR_mktag(1), mercury__rtree__DT0_23, 2) = mercury__rtree__K1_14;
                        MR_hl_field(MR_mktag(1), mercury__rtree__DT0_23, 3) = ((MR_Box) (mercury__rtree__T1_15));
                      }
                      {
                        mercury__rtree__DK0_22 = mercury__rtree__bounding_region_2_f_0(mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K1_14, mercury__rtree__DK0_78);
                      }
                      mercury__rtree__Info0_24 = mercury__rtree__Info0_80;
                    }
                  mercury__rtree__succeeded = MR_TRUE;
                }
            }
          if (mercury__rtree__succeeded)
            {
              *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_22;
              *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_23;
              *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_24;
              mercury__rtree__succeeded = MR_TRUE;
            }
          else
            {
              mercury__rtree__succeeded = mercury__rtree__try_deletion2_10_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K1_14, mercury__rtree__T1_15, mercury__rtree__K0_12, mercury__rtree__T0_13, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6, mercury__rtree__HeadVar__7_7);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rtree__K0_25 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_27 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_29 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
          MR_Box mercury__rtree__DK0_37;
          MR_Word mercury__rtree__DT0_38;
          MR_Word mercury__rtree__Info0_39;

          {
            mercury__rtree__succeeded = mercury__rtree__try_deletion3_12_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K0_25, mercury__rtree__T0_26, mercury__rtree__K1_27, mercury__rtree__T1_28, mercury__rtree__K2_29, mercury__rtree__T2_30, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_37, &mercury__rtree__DT0_38, &mercury__rtree__Info0_39);
          }
          if (mercury__rtree__succeeded)
            {
              *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_37;
              *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_38;
              *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_39;
              mercury__rtree__succeeded = MR_TRUE;
            }
          else
            {
              MR_Box mercury__rtree__DK0_40;
              MR_Word mercury__rtree__DT0_41;
              MR_Word mercury__rtree__Info0_42;

              {
                mercury__rtree__succeeded = mercury__rtree__try_deletion3_12_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K1_27, mercury__rtree__T1_28, mercury__rtree__K0_25, mercury__rtree__T0_26, mercury__rtree__K2_29, mercury__rtree__T2_30, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_40, &mercury__rtree__DT0_41, &mercury__rtree__Info0_42);
              }
              if (mercury__rtree__succeeded)
                {
                  *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_40;
                  *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_41;
                  *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_42;
                  mercury__rtree__succeeded = MR_TRUE;
                }
              else
                {
                  mercury__rtree__succeeded = mercury__rtree__try_deletion3_12_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K2_29, mercury__rtree__T2_30, mercury__rtree__K0_25, mercury__rtree__T0_26, mercury__rtree__K1_27, mercury__rtree__T1_28, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6, mercury__rtree__HeadVar__7_7);
                }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box mercury__rtree__K0_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rtree__T0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_Box mercury__rtree__K1_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
          MR_Word mercury__rtree__T1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Box mercury__rtree__K2_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
          MR_Word mercury__rtree__T2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
          MR_Box mercury__rtree__K3_49 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
          MR_Word mercury__rtree__T3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
          MR_Box mercury__rtree__DK0_57;
          MR_Word mercury__rtree__DT0_58;
          MR_Word mercury__rtree__Info0_59;

          {
            mercury__rtree__succeeded = mercury__rtree__try_deletion4_14_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_57, &mercury__rtree__DT0_58, &mercury__rtree__Info0_59);
          }
          if (mercury__rtree__succeeded)
            {
              *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_57;
              *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_58;
              *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_59;
              mercury__rtree__succeeded = MR_TRUE;
            }
          else
            {
              MR_Box mercury__rtree__DK0_63;
              MR_Word mercury__rtree__DT0_64;
              MR_Word mercury__rtree__Info0_65;

              {
                mercury__rtree__succeeded = mercury__rtree__try_deletion4_14_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_63, &mercury__rtree__DT0_64, &mercury__rtree__Info0_65);
              }
              if (mercury__rtree__succeeded)
                {
                  *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_63;
                  *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_64;
                  *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_65;
                  mercury__rtree__succeeded = MR_TRUE;
                }
              else
                {
                  MR_Box mercury__rtree__DK0_60;
                  MR_Word mercury__rtree__DT0_61;
                  MR_Word mercury__rtree__Info0_62;

                  {
                    mercury__rtree__succeeded = mercury__rtree__try_deletion4_14_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_60, &mercury__rtree__DT0_61, &mercury__rtree__Info0_62);
                  }
                  if (mercury__rtree__succeeded)
                    {
                      *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_60;
                      *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_61;
                      *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_62;
                      mercury__rtree__succeeded = MR_TRUE;
                    }
                  else
                    {
                      mercury__rtree__succeeded = mercury__rtree__try_deletion4_14_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6, mercury__rtree__HeadVar__7_7);
                    }
                }
            }
        }
        break;
    }
    return mercury__rtree__succeeded;
  }
}

static MR_Word MR_CALL 
mercury__rtree__choose_subtree_4_f_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_27,
  MR_Box mercury__rtree__Key_6,
  MR_Box mercury__rtree__KA_7,
  MR_Box mercury__rtree__KB_8,
  MR_Box mercury__rtree__KC_9)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__Result_10;
    MR_Float mercury__rtree__AreaA_11;
    MR_Float mercury__rtree__AreaB_12;
    MR_Float mercury__rtree__AreaC_13;
    MR_Float mercury__rtree__EnlargedAreaA_14;
    MR_Float mercury__rtree__EnlargedAreaB_15;
    MR_Float mercury__rtree__EnlargedAreaC_16;
    MR_Float mercury__rtree__IncreaseForA_17;
    MR_Float mercury__rtree__IncreaseForB_18;
    MR_Float mercury__rtree__IncreaseForC_19;
    MR_Word mercury__rtree__Result0_20;
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7)));
    MR_Box mercury__rtree__conv1_AreaA_11;
    MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
    MR_Box mercury__rtree__conv3_AreaB_12;
    MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box);
    MR_Box mercury__rtree__conv5_AreaC_13;
    MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv7_EnlargedAreaA_14;
    MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv9_EnlargedAreaB_15;
    MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv11_EnlargedAreaC_16;

    {
      mercury__rtree__conv1_AreaA_11 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__KA_7);
    }
    mercury__rtree__AreaA_11 = MR_unbox_float(mercury__rtree__conv1_AreaA_11);
    mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      mercury__rtree__conv3_AreaB_12 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__KB_8);
    }
    mercury__rtree__AreaB_12 = MR_unbox_float(mercury__rtree__conv3_AreaB_12);
    mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      mercury__rtree__conv5_AreaC_13 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__KC_9);
    }
    mercury__rtree__AreaC_13 = MR_unbox_float(mercury__rtree__conv5_AreaC_13);
    mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv7_EnlargedAreaA_14 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__Key_6, mercury__rtree__KA_7);
    }
    mercury__rtree__EnlargedAreaA_14 = MR_unbox_float(mercury__rtree__conv7_EnlargedAreaA_14);
    mercury__rtree__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv9_EnlargedAreaB_15 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__Key_6, mercury__rtree__KB_8);
    }
    mercury__rtree__EnlargedAreaB_15 = MR_unbox_float(mercury__rtree__conv9_EnlargedAreaB_15);
    mercury__rtree__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv11_EnlargedAreaC_16 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__Key_6, mercury__rtree__KC_9);
    }
    mercury__rtree__EnlargedAreaC_16 = MR_unbox_float(mercury__rtree__conv11_EnlargedAreaC_16);
    mercury__rtree__IncreaseForA_17 = (mercury__rtree__EnlargedAreaA_14 - mercury__rtree__AreaA_11);
    mercury__rtree__IncreaseForB_18 = (mercury__rtree__EnlargedAreaB_15 - mercury__rtree__AreaB_12);
    mercury__rtree__IncreaseForC_19 = (mercury__rtree__EnlargedAreaC_16 - mercury__rtree__AreaC_13);
    mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_17 < mercury__rtree__IncreaseForB_18);
    if (mercury__rtree__succeeded)
      mercury__rtree__Result0_20 = (MR_Integer) 0;
    else
      {
        mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_17 > mercury__rtree__IncreaseForB_18);
        if (mercury__rtree__succeeded)
          mercury__rtree__Result0_20 = (MR_Integer) 1;
        else
          {
            mercury__rtree__succeeded = (mercury__rtree__AreaA_11 <= mercury__rtree__AreaB_12);
            if (mercury__rtree__succeeded)
              mercury__rtree__Result0_20 = (MR_Integer) 0;
            else
              mercury__rtree__Result0_20 = (MR_Integer) 1;
          }
      }
    mercury__rtree__succeeded = (mercury__rtree__Result0_20 == (MR_Integer) 0);
    if (mercury__rtree__succeeded)
      {
        mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_17 < mercury__rtree__IncreaseForC_19);
        if (mercury__rtree__succeeded)
          mercury__rtree__Result_10 = (MR_Integer) 0;
        else
          {
            mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_17 > mercury__rtree__IncreaseForC_19);
            if (mercury__rtree__succeeded)
              mercury__rtree__Result_10 = (MR_Integer) 2;
            else
              {
                mercury__rtree__succeeded = (mercury__rtree__AreaA_11 <= mercury__rtree__AreaC_13);
                if (mercury__rtree__succeeded)
                  mercury__rtree__Result_10 = (MR_Integer) 0;
                else
                  mercury__rtree__Result_10 = (MR_Integer) 2;
              }
          }
      }
    else
      {
        mercury__rtree__succeeded = (mercury__rtree__IncreaseForB_18 < mercury__rtree__IncreaseForC_19);
        if (mercury__rtree__succeeded)
          mercury__rtree__Result_10 = (MR_Integer) 1;
        else
          {
            mercury__rtree__succeeded = (mercury__rtree__IncreaseForB_18 > mercury__rtree__IncreaseForC_19);
            if (mercury__rtree__succeeded)
              mercury__rtree__Result_10 = (MR_Integer) 2;
            else
              {
                mercury__rtree__succeeded = (mercury__rtree__AreaA_11 <= mercury__rtree__AreaB_12);
                if (mercury__rtree__succeeded)
                  mercury__rtree__Result_10 = (MR_Integer) 1;
                else
                  mercury__rtree__Result_10 = (MR_Integer) 2;
              }
          }
      }
    return mercury__rtree__Result_10;
  }
}

static MR_Word MR_CALL 
mercury__rtree__choose_subtree_3_f_0(
  MR_Word mercury__rtree__TypeClassInfo_for_region_15,
  MR_Box mercury__rtree__Key_5,
  MR_Box mercury__rtree__KA_6,
  MR_Box mercury__rtree__KB_7)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__Result_8;
    MR_Float mercury__rtree__SizeA_9;
    MR_Float mercury__rtree__SizeB_10;
    MR_Float mercury__rtree__EnlargedSizeA_11;
    MR_Float mercury__rtree__EnlargedSizeB_12;
    MR_Float mercury__rtree__IncreaseForA_13;
    MR_Float mercury__rtree__IncreaseForB_14;
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 7)));
    MR_Box mercury__rtree__conv1_SizeA_9;
    MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
    MR_Box mercury__rtree__conv3_SizeB_10;
    MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv5_EnlargedSizeA_11;
    MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__rtree__conv7_EnlargedSizeB_12;

    {
      mercury__rtree__conv1_SizeA_9 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__KA_6);
    }
    mercury__rtree__SizeA_9 = MR_unbox_float(mercury__rtree__conv1_SizeA_9);
    mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      mercury__rtree__conv3_SizeB_10 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__KB_7);
    }
    mercury__rtree__SizeB_10 = MR_unbox_float(mercury__rtree__conv3_SizeB_10);
    mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv5_EnlargedSizeA_11 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__Key_5, mercury__rtree__KA_6);
    }
    mercury__rtree__EnlargedSizeA_11 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_11);
    mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 9)));
    {
      mercury__rtree__conv7_EnlargedSizeB_12 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__Key_5, mercury__rtree__KB_7);
    }
    mercury__rtree__EnlargedSizeB_12 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_12);
    mercury__rtree__IncreaseForA_13 = (mercury__rtree__EnlargedSizeA_11 - mercury__rtree__SizeA_9);
    mercury__rtree__IncreaseForB_14 = (mercury__rtree__EnlargedSizeB_12 - mercury__rtree__SizeB_10);
    mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_13 < mercury__rtree__IncreaseForB_14);
    if (mercury__rtree__succeeded)
      mercury__rtree__Result_8 = (MR_Integer) 0;
    else
      {
        mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_13 > mercury__rtree__IncreaseForB_14);
        if (mercury__rtree__succeeded)
          mercury__rtree__Result_8 = (MR_Integer) 1;
        else
          {
            mercury__rtree__succeeded = (mercury__rtree__SizeA_9 <= mercury__rtree__SizeB_10);
            if (mercury__rtree__succeeded)
              mercury__rtree__Result_8 = (MR_Integer) 0;
            else
              mercury__rtree__Result_8 = (MR_Integer) 1;
          }
      }
    return mercury__rtree__Result_8;
  }
}

MR_bool MR_CALL 
mercury__rtree__map_values_3_p_1(
  MR_Word mercury__rtree__TypeInfo_for_K_12,
  MR_Word mercury__rtree__TypeInfo_for_V_13,
  MR_Word mercury__rtree__TypeInfo_for_W_14,
  MR_Word mercury__rtree__P_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word * mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__rtree__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
          MR_Box mercury__rtree__W_8;
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K_6, mercury__rtree__V_7, &mercury__rtree__W_8);
          }
          if (mercury__rtree__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rtree__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K_6;
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rtree__W_8;
              }
              mercury__rtree__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__rtree__U_11;

          {
            mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_12, mercury__rtree__TypeInfo_for_V_13, mercury__rtree__TypeInfo_for_W_14, mercury__rtree__P_1, mercury__rtree__T_10, &mercury__rtree__U_11);
          }
          if (mercury__rtree__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rtree__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__U_11));
              }
              mercury__rtree__succeeded = MR_TRUE;
            }
        }
        break;
    }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree__map_values_3_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_12,
  MR_Word mercury__rtree__TypeInfo_for_V_13,
  MR_Word mercury__rtree__TypeInfo_for_W_14,
  MR_Word mercury__rtree__P_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word * mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
          MR_Box mercury__rtree__W_8;
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

          {
            mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K_6, mercury__rtree__V_7, &mercury__rtree__W_8);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K_6;
            MR_hl_field(MR_mktag(1), base, 1) = mercury__rtree__W_8;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__rtree__U_11;

          {
            mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_12, mercury__rtree__TypeInfo_for_V_13, mercury__rtree__TypeInfo_for_W_14, mercury__rtree__P_1, mercury__rtree__T_10, &mercury__rtree__U_11);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__U_11));
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__rtree__fold_4_p_2(
  MR_Word mercury__rtree__TypeInfo_for_K_22,
  MR_Word mercury__rtree__TypeInfo_for_V_23,
  MR_Word mercury__rtree__TypeInfo_for_A_24,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__rtree__STATE_VARIABLE_Acc_4 = mercury__rtree__STATE_VARIABLE_Acc_0_3;
          mercury__rtree__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__HeadVar__1_1), mercury__rtree__K_10, mercury__rtree__V_11, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

          {
            mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_22, mercury__rtree__TypeInfo_for_V_23, mercury__rtree__TypeInfo_for_A_24, mercury__rtree__HeadVar__1_1, mercury__rtree__T_17, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
    }
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree__fold_4_p_1(
  MR_Word mercury__rtree__TypeInfo_for_K_22,
  MR_Word mercury__rtree__TypeInfo_for_V_23,
  MR_Word mercury__rtree__TypeInfo_for_A_24,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rtree__STATE_VARIABLE_Acc_4 = mercury__rtree__STATE_VARIABLE_Acc_0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

          {
            mercury__rtree__func_0(((MR_Box) mercury__rtree__HeadVar__1_1), mercury__rtree__K_10, mercury__rtree__V_11, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

          {
            mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_22, mercury__rtree__TypeInfo_for_V_23, mercury__rtree__TypeInfo_for_A_24, mercury__rtree__HeadVar__1_1, mercury__rtree__T_17, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__rtree__fold_4_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_22,
  MR_Word mercury__rtree__TypeInfo_for_V_23,
  MR_Word mercury__rtree__TypeInfo_for_A_24,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rtree__STATE_VARIABLE_Acc_4 = mercury__rtree__STATE_VARIABLE_Acc_0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

          {
            mercury__rtree__func_0(((MR_Box) mercury__rtree__HeadVar__1_1), mercury__rtree__K_10, mercury__rtree__V_11, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

          {
            mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_22, mercury__rtree__TypeInfo_for_V_23, mercury__rtree__TypeInfo_for_A_24, mercury__rtree__HeadVar__1_1, mercury__rtree__T_17, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__rtree__search_general_fold_5_p_1(
  MR_Word mercury__rtree__TypeInfo_for_K_26,
  MR_Word mercury__rtree__TypeInfo_for_V_27,
  MR_Word mercury__rtree__TypeInfo_for_A_28,
  MR_Word mercury__rtree__KTest_1,
  MR_Word mercury__rtree__VPred_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_5)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
          MR_Box mercury__rtree__V_14 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_1, (MR_Integer) 1)));

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_1), mercury__rtree__K_13);
          }
          if (mercury__rtree__succeeded)
            {
              void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_2, (MR_Integer) 1)));

              {
                mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_2), mercury__rtree__K_13, mercury__rtree__V_14, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
              }
            }
          else
            *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__T_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

          {
            mercury__rtree__search_general_fold_2_5_p_1(mercury__rtree__TypeInfo_for_K_26, mercury__rtree__TypeInfo_for_V_27, mercury__rtree__TypeInfo_for_A_28, mercury__rtree__T_21, mercury__rtree__KTest_1, mercury__rtree__VPred_2, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__rtree__search_general_fold_5_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_26,
  MR_Word mercury__rtree__TypeInfo_for_V_27,
  MR_Word mercury__rtree__TypeInfo_for_A_28,
  MR_Word mercury__rtree__KTest_1,
  MR_Word mercury__rtree__VPred_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_5)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
          MR_Box mercury__rtree__V_14 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_1, (MR_Integer) 1)));

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_1), mercury__rtree__K_13);
          }
          if (mercury__rtree__succeeded)
            {
              void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_2, (MR_Integer) 1)));

              {
                mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_2), mercury__rtree__K_13, mercury__rtree__V_14, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
              }
            }
          else
            *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__T_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

          {
            mercury__rtree__search_general_fold_2_5_p_0(mercury__rtree__TypeInfo_for_K_26, mercury__rtree__TypeInfo_for_V_27, mercury__rtree__TypeInfo_for_A_28, mercury__rtree__T_21, mercury__rtree__KTest_1, mercury__rtree__VPred_2, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__rtree__search_first_6_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_20,
  MR_Word mercury__rtree__TypeInfo_for_L_21,
  MR_Word mercury__rtree__TypeInfo_for_V_22,
  MR_Word mercury__rtree__P_1,
  MR_Word mercury__rtree__C_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Box mercury__rtree__L_4,
  MR_Box * mercury__rtree__HeadVar__5_5,
  MR_Box * mercury__rtree__HeadVar__6_6)
{
  {
    MR_bool mercury__rtree__succeeded;

    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__rtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rtree__Var_13;
        MR_Word mercury__rtree__Var_27;
        MR_Word mercury__rtree__Var_28;
        MR_Word mercury__rtree__Var_33;
        MR_Word mercury__rtree__Var_34;
        MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box *);
        MR_bool MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box *);

        *mercury__rtree__HeadVar__5_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
        mercury__rtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));
        {
          mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K0_9, &mercury__rtree__Var_13);
        }
        if (mercury__rtree__succeeded)
          {
            mercury__rtree__Var_27 = (MR_Integer) 1;
            {
              mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_L_21, &mercury__rtree__Var_28, mercury__rtree__Var_13, mercury__rtree__L_4);
            }
            mercury__rtree__succeeded = (mercury__rtree__Var_27 == mercury__rtree__Var_28);
            if (mercury__rtree__succeeded)
              {
                mercury__rtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__C_2, (MR_Integer) 1)));
                {
                  mercury__rtree__succeeded = mercury__rtree__func_1(((MR_Box) mercury__rtree__C_2), *mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6);
                }
                if (mercury__rtree__succeeded)
                  {
                    mercury__rtree__Var_33 = (MR_Integer) 1;
                    {
                      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_L_21, &mercury__rtree__Var_34, *mercury__rtree__HeadVar__6_6, mercury__rtree__L_4);
                    }
                    mercury__rtree__succeeded = (mercury__rtree__Var_33 == mercury__rtree__Var_34);
                  }
              }
          }
      }
    else
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word mercury__rtree__T_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

        {
          mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_20, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_L_21, mercury__rtree__T_16, mercury__rtree__P_1, mercury__rtree__C_2, mercury__rtree__L_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6);
        }
      }
    else
      mercury__rtree__succeeded = MR_FALSE;
    return mercury__rtree__succeeded;
  }
}

MR_Word MR_CALL 
mercury__rtree__search_general_3_f_0(
  MR_Word mercury__rtree__TypeInfo_for_K_17,
  MR_Word mercury__rtree__TypeInfo_for_V_18,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Word mercury__rtree__HeadVar__2_2,
  MR_Word mercury__rtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__HeadVar__4_4;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
          MR_Box mercury__rtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
          MR_bool MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box);

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__HeadVar__1_1), mercury__rtree__K_9);
          }
          if (mercury__rtree__succeeded)
            {
              mercury__rtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
              {
                mercury__rtree__succeeded = mercury__rtree__func_1(((MR_Box) mercury__rtree__HeadVar__2_2), mercury__rtree__V_10);
              }
            }
          if (mercury__rtree__succeeded)
            {
              MR_Word mercury__rtree__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__4_4, 0) = mercury__rtree__V_10;
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__4_4, 1) = ((MR_Box) (mercury__rtree__Var_11));
              }
            }
          else
            mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
          MR_Word mercury__rtree__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            mercury__rtree__search_general_2_5_p_0(mercury__rtree__TypeInfo_for_K_17, mercury__rtree__TypeInfo_for_V_18, mercury__rtree__T_14, mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2, mercury__rtree__Var_16, &mercury__rtree__HeadVar__4_4);
          }
        }
        break;
    }
    return mercury__rtree__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__rtree__search_contains_2_f_0(
  MR_Word mercury__rtree__TypeInfo_for_V_14,
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__K_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__HeadVar__3_3;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rtree__V0_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1));
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 6)));

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__K_2, mercury__rtree__K0_5);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Word mercury__rtree__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 0) = mercury__rtree__V0_6;
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 1) = ((MR_Box) (mercury__rtree__Var_8));
              }
            }
          else
            mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mercury__rtree__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__T_9, mercury__rtree__K_2, mercury__rtree__Var_12, &mercury__rtree__HeadVar__3_3);
          }
        }
        break;
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__rtree__search_intersects_2_f_0(
  MR_Word mercury__rtree__TypeInfo_for_V_14,
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
  MR_Word mercury__rtree__HeadVar__1_1,
  MR_Box mercury__rtree__QueryKey_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__HeadVar__3_3;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rtree__V_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1));
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 5)));

          {
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__QueryKey_2, mercury__rtree__K_5);
          }
          if (mercury__rtree__succeeded)
            {
              MR_Word mercury__rtree__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 0) = mercury__rtree__V_6;
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 1) = ((MR_Box) (mercury__rtree__Var_8));
              }
            }
          else
            mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__RTree_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mercury__rtree__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__RTree_9, mercury__rtree__QueryKey_2, mercury__rtree__Var_12, &mercury__rtree__HeadVar__3_3);
          }
        }
        break;
    }
    return mercury__rtree__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__rtree__delete_4_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_56,
  MR_Word mercury__rtree__TypeClassInfo_for_region_55,
  MR_Box mercury__rtree__K_1,
  MR_Box mercury__rtree__V_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Word * mercury__rtree__HeadVar__4_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__rtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rtree__Var_57 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
        MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box);

        {
          mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__V_2, mercury__rtree__Var_57);
        }
        if (mercury__rtree__succeeded)
          {
            *mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            mercury__rtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 6)));
            {
              mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_1, mercury__rtree__K0_7);
            }
          }
      }
    else
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word mercury__rtree__Info_13;
        MR_Word mercury__rtree__STATE_VARIABLE_T_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__rtree__STATE_VARIABLE_T_27_27;
        MR_Box mercury__rtree__Var_12;

        {
          mercury__rtree__succeeded = mercury__rtree__delete_2_7_p_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__STATE_VARIABLE_T_25_25, mercury__rtree__K_1, mercury__rtree__V_2, (MR_Integer) 1, &mercury__rtree__Var_12, &mercury__rtree__STATE_VARIABLE_T_27_27, &mercury__rtree__Info_13);
        }
        if (mercury__rtree__succeeded)
          {
            if (((MR_tag((MR_Word) mercury__rtree__Info_13)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__rtree__Orphans_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__Info_13, (MR_Integer) 0)));

                if ((mercury__rtree__Orphans_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__require__error_1_p_0((MR_String) "delete: expected delete info");
                    }
                  }
                else
                  {
                    MR_Word mercury__rtree__Orphan_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Orphans_53, (MR_Integer) 0)));
                    MR_Word mercury__rtree__Orphans0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Orphans_53, (MR_Integer) 1)));
                    MR_Box mercury__rtree__OrphanKey_18 = (MR_hl_field(MR_mktag(0), mercury__rtree__Orphan_16, (MR_Integer) 0));
                    MR_Word mercury__rtree__OrphanTree_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__Orphan_16, (MR_Integer) 1)));
                    MR_Box mercury__rtree__OrphanValue_20;

                    mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__OrphanTree_19)) == (MR_mktag((MR_Integer) 0)));
                    if (mercury__rtree__succeeded)
                      {
                        mercury__rtree__OrphanValue_20 = (MR_hl_field(MR_mktag(0), mercury__rtree__OrphanTree_19, (MR_Integer) 0));
                        mercury__rtree__succeeded = (mercury__rtree__Orphans0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mercury__rtree__succeeded)
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__rtree__HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__OrphanKey_18;
                            MR_hl_field(MR_mktag(1), base, 1) = mercury__rtree__OrphanValue_20;
                          }
                        else
                          {
                            MR_Box mercury__rtree__NextOrphanKey_21;
                            MR_Word mercury__rtree__NextOrphanTree_22;
                            MR_Word mercury__rtree__Var_30;
                            MR_Word mercury__rtree__Var_31;

                            mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__Orphans0_17)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__rtree__succeeded)
                              {
                                mercury__rtree__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Orphans0_17, (MR_Integer) 0)));
                                mercury__rtree__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Orphans0_17, (MR_Integer) 1)));
                                mercury__rtree__NextOrphanKey_21 = (MR_hl_field(MR_mktag(0), mercury__rtree__Var_30, (MR_Integer) 0));
                                mercury__rtree__NextOrphanTree_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__Var_30, (MR_Integer) 1)));
                                mercury__rtree__succeeded = (mercury__rtree__Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                            if (mercury__rtree__succeeded)
                              {
                                MR_Word mercury__rtree__STATE_VARIABLE_T_38_42;

                                {
                                  mercury__rtree__STATE_VARIABLE_T_38_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), mercury__rtree__STATE_VARIABLE_T_38_42, 0) = mercury__rtree__OrphanKey_18;
                                  MR_hl_field(MR_mktag(1), mercury__rtree__STATE_VARIABLE_T_38_42, 1) = ((MR_Box) (mercury__rtree__OrphanTree_19));
                                  MR_hl_field(MR_mktag(1), mercury__rtree__STATE_VARIABLE_T_38_42, 2) = mercury__rtree__NextOrphanKey_21;
                                  MR_hl_field(MR_mktag(1), mercury__rtree__STATE_VARIABLE_T_38_42, 3) = ((MR_Box) (mercury__rtree__NextOrphanTree_22));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  *mercury__rtree__HeadVar__4_4 = base;
                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_T_38_42));
                                }
                              }
                            else
                              {
                                {
                                  mercury__require__error_1_p_0((MR_String) "delete: unbalanced rtree");
                                }
                              }
                          }
                      }
                    else
                      {
                        MR_Word mercury__rtree__STATE_VARIABLE_T_38_47;

                        {
                          mercury__rtree__reinsert_deleted_subtrees_4_p_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__Orphans0_17, (MR_Integer) 1, mercury__rtree__OrphanTree_19, &mercury__rtree__STATE_VARIABLE_T_38_47);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__rtree__HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_T_38_47));
                        }
                      }
                  }
              }
            else
              {
                MR_Integer mercury__rtree__Depth_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__Info_13, (MR_Integer) 0)));
                MR_Word mercury__rtree__Orphans_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Info_13, (MR_Integer) 1)));
                MR_Word mercury__rtree__STATE_VARIABLE_T_38_38;

                {
                  mercury__rtree__reinsert_deleted_subtrees_4_p_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__Orphans_15, mercury__rtree__Depth_14, mercury__rtree__STATE_VARIABLE_T_27_27, &mercury__rtree__STATE_VARIABLE_T_38_38);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rtree__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_T_38_38));
                }
              }
            mercury__rtree__succeeded = MR_TRUE;
          }
      }
    else
      mercury__rtree__succeeded = MR_FALSE;
    return mercury__rtree__succeeded;
  }
}

void MR_CALL 
mercury__rtree__insert_4_p_0(
  MR_Word mercury__rtree__TypeInfo_for_V_22,
  MR_Word mercury__rtree__TypeClassInfo_for_region_21,
  MR_Box mercury__rtree__K_1,
  MR_Box mercury__rtree__V_2,
  MR_Word mercury__rtree__HeadVar__3_3,
  MR_Word * mercury__rtree__HeadVar__4_4)
{
  {
    MR_bool mercury__rtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__rtree__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K_1;
          MR_hl_field(MR_mktag(1), base, 1) = mercury__rtree__V_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
          MR_Box mercury__rtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
          MR_Word mercury__rtree__Var_12;
          MR_Word mercury__rtree__Var_13;
          MR_Word mercury__rtree__Var_14;

          {
            mercury__rtree__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__rtree__Var_13, 0) = mercury__rtree__V0_10;
          }
          {
            mercury__rtree__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__rtree__Var_14, 0) = mercury__rtree__V_2;
          }
          {
            mercury__rtree__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__rtree__Var_12, 0) = mercury__rtree__K0_9;
            MR_hl_field(MR_mktag(1), mercury__rtree__Var_12, 1) = ((MR_Box) (mercury__rtree__Var_13));
            MR_hl_field(MR_mktag(1), mercury__rtree__Var_12, 2) = mercury__rtree__K_1;
            MR_hl_field(MR_mktag(1), mercury__rtree__Var_12, 3) = ((MR_Box) (mercury__rtree__Var_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__Var_12));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rtree__STATE_VARIABLE_T_0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
          MR_Word mercury__rtree__STATE_VARIABLE_T_19;

          {
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_21, mercury__rtree__STATE_VARIABLE_T_0_18, mercury__rtree__K_1, mercury__rtree__V_2, &mercury__rtree__STATE_VARIABLE_T_19);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rtree__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_T_19));
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__rtree__insert_3_f_0(
  MR_Word mercury__rtree__TypeInfo_for_V_12,
  MR_Word mercury__rtree__TypeClassInfo_for_region_11,
  MR_Box mercury__rtree__K_5,
  MR_Box mercury__rtree__V_6,
  MR_Word mercury__rtree__STATE_VARIABLE_Tree_0_8)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__STATE_VARIABLE_Tree_9;

    {
      mercury__rtree__insert_4_p_0(mercury__rtree__TypeInfo_for_V_12, mercury__rtree__TypeClassInfo_for_region_11, mercury__rtree__K_5, mercury__rtree__V_6, mercury__rtree__STATE_VARIABLE_Tree_0_8, &mercury__rtree__STATE_VARIABLE_Tree_9);
    }
    return mercury__rtree__STATE_VARIABLE_Tree_9;
  }
}

MR_bool MR_CALL 
mercury__rtree__is_empty_1_p_0(
  MR_Word mercury__rtree__TypeInfo_for_K_2,
  MR_Word mercury__rtree__TypeInfo_for_V_3,
  MR_Word mercury__rtree__HeadVar__1_1)
{
  {
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__rtree__succeeded;
  }
}

MR_Word MR_CALL 
mercury__rtree__init_0_f_0(
  MR_Word mercury__rtree__TypeInfo_for_V_3,
  MR_Word mercury__rtree__TypeClassInfo_for_region_2)
{
  {
    MR_bool mercury__rtree__succeeded;
    MR_Word mercury__rtree__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__rtree__HeadVar__1_1;
  }
}

void mercury__rtree__init(void)
{
}

void mercury__rtree__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_box_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_box3d_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_delete_info_2);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_interval_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_min_of_four_result_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_min_of_three_result_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_min_of_two_result_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_orphan_2);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_orphans_2);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_rtree_2);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_rtree_2_2);
}

void mercury__rtree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__rtree__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module rtree. */
