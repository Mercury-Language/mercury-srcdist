/*
** Automatically generated from `rtree.m'
** by the Mercury compiler,
** version rotd-2022-04-15
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


// :- module rtree.
// :- implementation.

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

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_ordinal_ordered_min_of_four_result_0[4];

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0[4];

static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_four_result_0[4];

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0;

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1;

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2;

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_ordinal_ordered_min_of_three_result_0[3];

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0[3];

static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_three_result_0[3];

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0;

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1;

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_ordinal_ordered_min_of_two_result_0[2];

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
mercury__rtree__search_first_2_try_first_from_four_12_p_0(
  MR_Word TypeInfo_for_E_27,
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Box E1_13,
  MR_Box E2_14,
  MR_Box E3_15,
  MR_Word T0_16,
  MR_Word T1_17,
  MR_Word T2_18,
  MR_Word T3_19,
  MR_Word P_20,
  MR_Word C_21,
  MR_Box L_22,
  MR_Box * V_23,
  MR_Box * E_24);

static MR_bool MR_CALL 
mercury__rtree__search_first_2_four_choices_13_p_0(
  MR_Word TypeInfo_for_E_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box E0_14,
  MR_Box E1_15,
  MR_Box E2_16,
  MR_Box E3_17,
  MR_Word T0_18,
  MR_Word T1_19,
  MR_Word T2_20,
  MR_Word T3_21,
  MR_Word P_22,
  MR_Word C_23,
  MR_Box L_24,
  MR_Box * V_25,
  MR_Box * E_26);

static MR_bool MR_CALL 
mercury__rtree__search_first_2_three_choices_11_p_0(
  MR_Word TypeInfo_for_E_24,
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Box E0_12,
  MR_Box E1_13,
  MR_Box E2_14,
  MR_Word T0_15,
  MR_Word T1_16,
  MR_Word T2_17,
  MR_Word P_18,
  MR_Word C_19,
  MR_Box L_20,
  MR_Box * V_21,
  MR_Box * E_22);

static MR_bool MR_CALL 
mercury__rtree__search_first_2_two_choices_9_p_0(
  MR_Word TypeInfo_for_E_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Box E0_10,
  MR_Box E1_11,
  MR_Word T0_12,
  MR_Word T1_13,
  MR_Word P_14,
  MR_Word C_15,
  MR_Box L_16,
  MR_Box * V_17,
  MR_Box * E_18);

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_three_12_p_0(
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_E_27,
  MR_Word TypeInfo_for_K_28,
  MR_Box VM_13,
  MR_Box EM_14,
  MR_Box E0_15,
  MR_Box E1_16,
  MR_Box E2_17,
  MR_Word T0_18,
  MR_Word T1_19,
  MR_Word T2_20,
  MR_Word P_21,
  MR_Word C_22,
  MR_Box * V_23,
  MR_Box * E_24);

static void MR_CALL 
mercury__rtree__search_first_2_better_solution_three_11_p_0(
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_E_27,
  MR_Word TypeInfo_for_K_28,
  MR_Box VM_12,
  MR_Box EM_13,
  MR_Box E1_14,
  MR_Box E2_15,
  MR_Word T0_16,
  MR_Word T1_17,
  MR_Word T2_18,
  MR_Word P_19,
  MR_Word C_20,
  MR_Box * V_21,
  MR_Box * E_22);

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_two_10_p_0(
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_E_23,
  MR_Word TypeInfo_for_K_24,
  MR_Box VM_11,
  MR_Box EM_12,
  MR_Box E0_13,
  MR_Box E1_14,
  MR_Word T0_15,
  MR_Word T1_16,
  MR_Word P_17,
  MR_Word C_18,
  MR_Box * V_19,
  MR_Box * E_20);

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_one_8_p_0(
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_E_22,
  MR_Word TypeInfo_for_K_23,
  MR_Box VM_9,
  MR_Box EM_10,
  MR_Box E0_11,
  MR_Word T0_12,
  MR_Word P_13,
  MR_Word C_14,
  MR_Box * V_15,
  MR_Box * E_16);

static MR_Word MR_CALL 
mercury__rtree__minimum_of_four_4_f_0(
  MR_Word TypeInfo_for_T_18,
  MR_Box A_6,
  MR_Box B_7,
  MR_Box C_8,
  MR_Box D_9);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_region_47,
  MR_Word tscc_proc_1_input_2_HeadVar__1_1,
  MR_Box tscc_proc_1_input_3_HeadVar__2_2,
  MR_Word tscc_proc_1_input_4_HeadVar__3_3,
  MR_Word * tscc_output_ptr_1_HeadVar__4_4);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_region_13,
  MR_Box tscc_proc_2_input_2_K_6,
  MR_Word tscc_proc_2_input_3_T_7,
  MR_Box tscc_proc_2_input_4_QueryKey_8,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10,
  MR_Word * tscc_output_ptr_1_HeadVar__4_4);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_region_47,
  MR_Word tscc_proc_1_input_2_HeadVar__1_1,
  MR_Box tscc_proc_1_input_3_HeadVar__2_2,
  MR_Word tscc_proc_1_input_4_HeadVar__3_3,
  MR_Word * tscc_output_ptr_1_HeadVar__4_4);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_region_13,
  MR_Box tscc_proc_2_input_2_K_6,
  MR_Word tscc_proc_2_input_3_T_7,
  MR_Box tscc_proc_2_input_4_QueryKey_8,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10,
  MR_Word * tscc_output_ptr_1_HeadVar__4_4);

static void MR_CALL 
mercury__rtree__reinsert_deleted_subtrees_4_p_0(
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeClassInfo_for_region_30,
  MR_Word HeadVar__1_1,
  MR_Integer Depth_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__rtree__insert_tree_5_f_0(
  MR_Word TypeInfo_for_V_68,
  MR_Word TypeClassInfo_for_region_67,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Word S_3,
  MR_Integer D0_4,
  MR_Integer D_5);

static void MR_CALL 
mercury__rtree__LCMC__func__insert_tree__1_6_p_0(
  MR_Word TypeInfo_for_V_68,
  MR_Word TypeClassInfo_for_region_67,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Word S_3,
  MR_Integer D0_4,
  MR_Integer D_5,
  MR_Word * AddrOfHeadVar__6_83);

static void MR_CALL 
mercury__rtree__insert_tree_and_split_child3_11_p_0(
  MR_Word TypeInfo_for_V_56,
  MR_Word TypeClassInfo_for_region_55,
  MR_Box K0_12,
  MR_Word T0_13,
  MR_Box K1_14,
  MR_Word T1_15,
  MR_Box K2_16,
  MR_Word T2_17,
  MR_Box K_18,
  MR_Word S_19,
  MR_Integer D0_20,
  MR_Integer D_21,
  MR_Word * T_22);

static void MR_CALL 
mercury__rtree__insert_tree_and_split_child2_9_p_0(
  MR_Word TypeInfo_for_V_52,
  MR_Word TypeClassInfo_for_region_51,
  MR_Box K0_10,
  MR_Word T0_11,
  MR_Box K1_12,
  MR_Word T1_13,
  MR_Box K_14,
  MR_Word S_15,
  MR_Integer D0_16,
  MR_Integer D_17,
  MR_Word * T_18);

static MR_Word MR_CALL 
mercury__rtree__choose_subtree_4_f_0(
  MR_Word TypeClassInfo_for_region_27,
  MR_Box Key_6,
  MR_Box KA_7,
  MR_Box KB_8,
  MR_Box KC_9);

static MR_bool MR_CALL 
mercury__rtree__delete_2_7_p_0(
  MR_Word TypeInfo_for_V_67,
  MR_Word TypeClassInfo_for_region_66,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Integer Depth_4,
  MR_Box * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
mercury__rtree__try_deletion4_14_p_0(
  MR_Word TypeInfo_for_V_43,
  MR_Word TypeClassInfo_for_region_42,
  MR_Box K0_15,
  MR_Word T0_16,
  MR_Box K1_17,
  MR_Word T1_18,
  MR_Box K2_19,
  MR_Word T2_20,
  MR_Box K3_21,
  MR_Word T3_22,
  MR_Box K_23,
  MR_Box V_24,
  MR_Integer D_25,
  MR_Box * DK_26,
  MR_Word * DT_27,
  MR_Word * DI_28);

static MR_bool MR_CALL 
mercury__rtree__try_deletion3_12_p_0(
  MR_Word TypeInfo_for_V_37,
  MR_Word TypeClassInfo_for_region_36,
  MR_Box K0_13,
  MR_Word T0_14,
  MR_Box K1_15,
  MR_Word T1_16,
  MR_Box K2_17,
  MR_Word T2_18,
  MR_Box K_19,
  MR_Box V_20,
  MR_Integer Depth_21,
  MR_Box * DK_22,
  MR_Word * DT_23,
  MR_Word * DI_24);

static MR_bool MR_CALL 
mercury__rtree__try_deletion2_10_p_0(
  MR_Word TypeInfo_for_V_32,
  MR_Word TypeClassInfo_for_region_31,
  MR_Box K0_11,
  MR_Word T0_12,
  MR_Box K1_13,
  MR_Word T1_14,
  MR_Box K_15,
  MR_Box V_16,
  MR_Integer Depth_17,
  MR_Box * DK_18,
  MR_Word * DT_19,
  MR_Word * Info_20);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_region_45,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * T_4);

static void MR_CALL 
mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(
  MR_Word TypeClassInfo_for_region_45,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * AddrOfT_89);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(
  MR_Word TypeClassInfo_for_region_52,
  MR_Box K0_10,
  MR_Word T0_11,
  MR_Box K1_12,
  MR_Word T1_13,
  MR_Box K2_14,
  MR_Word T2_15,
  MR_Box K_16,
  MR_Box V_17,
  MR_Word * T_18);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_region_48,
  MR_Box K0_8,
  MR_Word T0_9,
  MR_Box K1_10,
  MR_Word T1_11,
  MR_Box K_12,
  MR_Box V_13,
  MR_Word * T_14);

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_region_29,
  MR_Word Four_6,
  MR_Box * K4_7,
  MR_Word * T4_8,
  MR_Box * K5_9,
  MR_Word * T5_10);

static MR_Word MR_CALL 
mercury__rtree__choose_subtree_3_f_0(
  MR_Word TypeClassInfo_for_region_15,
  MR_Box Key_5,
  MR_Box KA_6,
  MR_Box KB_7);

static MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____box_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____box3d_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____delete_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____interval_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____orphan_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____orphans_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____rtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);


static /* final */ const MR_Box mercury__rtree_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__rtree_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__rtree_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__rtree_scalar_common_4[1][1];




static /* final */ const MR_Box mercury__rtree_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtree_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtree_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtree_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtree_scalar_common_4[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
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



static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box_0_0 = {
  (MR_String) "box",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__rtree__rtree__field_types_box_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box_0_0
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_box_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____box_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____box_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "box",
  { mercury__rtree__rtree__du_name_ordered_box_0 },
  { mercury__rtree__rtree__du_ptag_ordered_box_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_box_0,

};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box3d_0_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box3d_0_0 = {
  (MR_String) "box3d",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__rtree__rtree__field_types_box3d_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box3d_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box3d_0_0
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box3d_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_box3d_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____box3d_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____box3d_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "box3d",
  { mercury__rtree__rtree__du_name_ordered_box3d_0 },
  { mercury__rtree__rtree__du_ptag_ordered_box3d_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_box3d_0,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
  &mercury__rtree__rtree__type_ctor_info_orphan_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2)
  }
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_0 = {
  (MR_String) "deleting",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__rtree__rtree__field_types_delete_info_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_1 = {
  (MR_String) "finished",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__rtree__rtree__field_types_delete_info_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_0
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_1
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_delete_info_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_delete_info_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_delete_info_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____delete_info_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____delete_info_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "delete_info",
  { mercury__rtree__rtree__du_name_ordered_delete_info_2 },
  { mercury__rtree__rtree__du_ptag_ordered_delete_info_2 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_delete_info_2,

};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_interval_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_interval_0_0 = {
  (MR_String) "interval",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__rtree__rtree__field_types_interval_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_interval_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_interval_0_0
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_interval_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_interval_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____interval_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____interval_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "interval",
  { mercury__rtree__rtree__du_name_ordered_interval_0 },
  { mercury__rtree__rtree__du_ptag_ordered_interval_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_interval_0,

};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0 = {
  (MR_String) "min4_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1 = {
  (MR_String) "min4_second",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2 = {
  (MR_String) "min4_third",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3 = {
  (MR_String) "min4_fourth",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_ordinal_ordered_min_of_four_result_0[4] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_four_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_four_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_four_result",
  { mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0 },
  { mercury__rtree__rtree__enum_ordinal_ordered_min_of_four_result_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_min_of_four_result_0,

};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0 = {
  (MR_String) "min3_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1 = {
  (MR_String) "min3_second",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2 = {
  (MR_String) "min3_third",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_ordinal_ordered_min_of_three_result_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_three_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_three_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_three_result",
  { mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0 },
  { mercury__rtree__rtree__enum_ordinal_ordered_min_of_three_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_min_of_three_result_0,

};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0 = {
  (MR_String) "min2_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1 = {
  (MR_String) "min2_second",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_ordinal_ordered_min_of_two_result_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_two_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_two_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_two_result",
  { mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0 },
  { mercury__rtree__rtree__enum_ordinal_ordered_min_of_two_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_min_of_two_result_0,

};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2 = {
  &mercury__rtree__rtree__type_ctor_info_rtree_2_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_orphan_2_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_orphan_2_0 = {
  (MR_String) "orphan",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__rtree__rtree__field_types_orphan_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_orphan_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_orphan_2_0
};

static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_orphan_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_orphan_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____orphan_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____orphan_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "orphan",
  { mercury__rtree__rtree__du_name_ordered_orphan_2 },
  { mercury__rtree__rtree__du_ptag_ordered_orphan_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_orphan_2,

};

const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_orphans_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__rtree____Unify____orphans_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____orphans_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "orphans",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_0 = {
  (MR_String) "empty",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_1 = {
  (MR_String) "one",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__rtree__rtree__field_types_rtree_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2 = {
  (MR_String) "rtree",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__rtree__rtree__field_types_rtree_2_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____rtree_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____rtree_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "rtree",
  { mercury__rtree__rtree__du_name_ordered_rtree_2 },
  { mercury__rtree__rtree__du_ptag_ordered_rtree_2 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_rtree_2,

};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_0 = {
  (MR_String) "leaf",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__rtree__rtree__field_types_rtree_2_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_1[4] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_1 = {
  (MR_String) "two",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__rtree__rtree__field_types_rtree_2_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_2[6] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_2 = {
  (MR_String) "three",
  INT16_C(6),
  UINT16_C(63),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__rtree__rtree__field_types_rtree_2_2_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_3[8] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_3 = {
  (MR_String) "four",
  INT16_C(8),
  UINT16_C(255),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mercury__rtree__rtree__field_types_rtree_2_2_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____rtree_2_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____rtree_2_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "rtree_2",
  { mercury__rtree__rtree__du_name_ordered_rtree_2_2 },
  { mercury__rtree__rtree__du_ptag_ordered_rtree_2_2 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__rtree__rtree__functor_number_map_rtree_2_2,

};

const MR_BaseTypeclassInfo base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__[10] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 5)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_rtree__region__arity1__rtree__box__arity0__[10] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 5)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__[10] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 5)),
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
    MR_PREDICATE
  },
  {
    (MR_String) "contains",
    (MR_Integer) 2,
    MR_PREDICATE
  },
  {
    (MR_String) "size",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "bounding_region",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "bounding_region_size",
    (MR_Integer) 3,
    MR_FUNCTION
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

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Float HeadVar__3_3;

  HeadVar__3_3 = mercury__rtree__box3d_bounding_region_volume_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__rtree__box3d_bounding_region_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Float XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
  MR_Float XMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Float YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
  MR_Float YMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
  MR_Float ZMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
  MR_Float ZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
  MR_Float Var_10;
  MR_Float Var_11 = (XMax_4 - XMin_5);
  MR_Float Var_12 = (YMax_6 - YMin_7);
  MR_Float Var_13;

  Var_10 = (Var_11 * Var_12);
  Var_13 = (ZMax_8 - ZMin_9);
  HeadVar__2_2 = (Var_10 * Var_13);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Float AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Float AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
  MR_Float AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
  MR_Float AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
  MR_Float AZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
  MR_Float AZMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
  MR_Float BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
  MR_Float BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
  MR_Float BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
  MR_Float BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
  MR_Float BZMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
  MR_Float BZMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

  succeeded = (AXMin_5 >= BXMin_11);
  if (succeeded)
  {
    succeeded = (AXMax_6 <= BXMax_12);
    if (succeeded)
    {
      succeeded = (AYMin_7 >= BYMin_13);
      if (succeeded)
      {
        succeeded = (AYMax_8 <= BYMax_14);
        if (succeeded)
        {
          succeeded = (AZMin_9 >= BZMin_15);
          if (succeeded)
            succeeded = (AZMax_10 <= BZMax_16);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtree__box3d_intersects_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Float HeadVar__3_3;

  HeadVar__3_3 = mercury__rtree__box_bounding_region_area_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__rtree__box_bounding_region_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Float XMin_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Float XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
  MR_Float YMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
  MR_Float YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
  MR_Float Var_7 = (XMax_4 - XMin_3);
  MR_Float Var_8 = (YMax_6 - YMin_5);

  HeadVar__2_2 = (Var_7 * Var_8);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Float AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Float AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
  MR_Float AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
  MR_Float AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
  MR_Float BXMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
  MR_Float BXMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
  MR_Float BYMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
  MR_Float BYMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

  succeeded = (AXMin_5 >= BXMin_9);
  if (succeeded)
  {
    succeeded = (AXMax_6 <= BXMax_10);
    if (succeeded)
    {
      succeeded = (AYMin_7 >= BYMin_11);
      if (succeeded)
        succeeded = (AYMax_8 <= BYMax_12);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtree__box_intersects_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Float HeadVar__3_3;

  HeadVar__3_3 = mercury__rtree__interval_bounding_region_length_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__rtree__interval_bounding_region_2_f_0(HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Float Max_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Float Min_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

  HeadVar__2_2 = (Max_3 - Min_4);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Float AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Float AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
  MR_Float BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
  MR_Float BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

  succeeded = (AMin_5 >= BMin_7);
  if (succeeded)
    succeeded = (AMax_6 <= BMax_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Float AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Float AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
  MR_Float BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
  MR_Float BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

  succeeded = (AMin_5 <= BMin_7);
  if (succeeded)
    succeeded = (AMax_6 >= BMin_7);
  else
    succeeded = (AMin_5 <= BMax_8);
  return succeeded;
}

void MR_CALL 
mercury__rtree____Compare____rtree_2_0(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
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
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Var_29 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgY1_10 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                MR_Box ArgY2_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
                MR_Word SubResult1_11;

                mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, &SubResult1_11, Var_30, ArgY1_10);
                succeeded = (SubResult1_11 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_11;
                else
                  mercury__builtin__compare_3_p_0(TypeInfo_for_V_26, HeadVar__1_1, Var_29, ArgY2_13);
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
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__rtree____Compare____rtree_2_2_0(TypeInfo_for_K_25, TypeInfo_for_V_26, HeadVar__1_1, Var_31, ArgY1_22);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_6;
          MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
          MR_Box ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
            ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_13, ArgX1_5, ArgY1_6);
            if (succeeded)
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_14, ArgX2_7, ArgY2_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__rtree____Unify____rtree_2_2_0(TypeInfo_for_K_13, TypeInfo_for_V_14, ArgX1_9, ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__rtree____Compare____orphans_2_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__rtree__rtree__type_ctor_info_orphan_2));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_K_6));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_for_V_7));
  }
  mercury__list____Compare____list_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__rtree__rtree__type_ctor_info_orphan_2));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_K_5));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 2) = ((MR_Box) (TypeInfo_for_V_6));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__rtree____Compare____orphan_2_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_K_11, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__rtree____Compare____rtree_2_2_0(TypeInfo_for_K_11, TypeInfo_for_V_12, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0(
  MR_Word TypeInfo_for_K_173,
  MR_Word TypeInfo_for_V_174,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_171 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_172 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_171 == CastY_172);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Var_201 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_V_174, HeadVar__1_1, Var_201, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            MR_Box Var_209 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
            MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Box Var_211 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_33 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Word ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Box ArgY3_39 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
                  MR_Word ArgY4_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_34;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_173, &SubResult1_34, Var_211, ArgY1_33);
                  succeeded = (SubResult1_34 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_34;
                  else
                  {
                    MR_Word SubResult2_37;

                    mercury__rtree____Compare____rtree_2_2_0(TypeInfo_for_K_173, TypeInfo_for_V_174, &SubResult2_37, Var_210, ArgY2_36);
                    succeeded = (SubResult2_37 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_37;
                    else
                    {
                      MR_Word SubResult3_40;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_K_173, &SubResult3_40, Var_209, ArgY3_39);
                      succeeded = (SubResult3_40 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_40;
                      else
                      {
                        MR_Word next_value_of_HeadVar__2_2 = Var_208;
                        MR_Word next_value_of_HeadVar__3_3 = ArgY4_42;

                        // direct tailcall eliminated
                        ;
                        HeadVar__2_2 = next_value_of_HeadVar__2_2;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        continue;
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
            MR_Box Var_203 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
            MR_Word Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Box Var_205 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
            MR_Word Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Box Var_207 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

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
                  MR_Box ArgY1_83 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
                  MR_Word ArgY2_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Box ArgY3_89 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2));
                  MR_Word ArgY4_92 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Box ArgY5_95 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 4));
                  MR_Word ArgY6_98 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 5))));
                  MR_Word SubResult1_84;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_173, &SubResult1_84, Var_207, ArgY1_83);
                  succeeded = (SubResult1_84 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_84;
                  else
                  {
                    MR_Word SubResult2_87;

                    mercury__rtree____Compare____rtree_2_2_0(TypeInfo_for_K_173, TypeInfo_for_V_174, &SubResult2_87, Var_206, ArgY2_86);
                    succeeded = (SubResult2_87 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_87;
                    else
                    {
                      MR_Word SubResult3_90;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_K_173, &SubResult3_90, Var_205, ArgY3_89);
                      succeeded = (SubResult3_90 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_90;
                      else
                      {
                        MR_Word SubResult4_93;

                        mercury__rtree____Compare____rtree_2_2_0(TypeInfo_for_K_173, TypeInfo_for_V_174, &SubResult4_93, Var_204, ArgY4_92);
                        succeeded = (SubResult4_93 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult4_93;
                        else
                        {
                          MR_Word SubResult5_96;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_K_173, &SubResult5_96, Var_203, ArgY5_95);
                          succeeded = (SubResult5_96 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult5_96;
                          else
                          {
                            MR_Word next_value_of_HeadVar__2_2 = Var_202;
                            MR_Word next_value_of_HeadVar__3_3 = ArgY6_98;

                            // direct tailcall eliminated
                            ;
                            HeadVar__2_2 = next_value_of_HeadVar__2_2;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            continue;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
            MR_Box Var_194 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
            MR_Word Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
            MR_Box Var_196 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
            MR_Word Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
            MR_Box Var_198 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
            MR_Word Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Box Var_200 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));

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
                {
                  MR_Box ArgY1_149 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0));
                  MR_Word ArgY2_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Box ArgY3_155 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2));
                  MR_Word ArgY4_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Box ArgY5_161 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4));
                  MR_Word ArgY6_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                  MR_Box ArgY7_167 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 6));
                  MR_Word ArgY8_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 7))));
                  MR_Word SubResult1_150;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_173, &SubResult1_150, Var_200, ArgY1_149);
                  succeeded = (SubResult1_150 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_150;
                  else
                  {
                    MR_Word SubResult2_153;

                    mercury__rtree____Compare____rtree_2_2_0(TypeInfo_for_K_173, TypeInfo_for_V_174, &SubResult2_153, Var_199, ArgY2_152);
                    succeeded = (SubResult2_153 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_153;
                    else
                    {
                      MR_Word SubResult3_156;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_K_173, &SubResult3_156, Var_198, ArgY3_155);
                      succeeded = (SubResult3_156 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_156;
                      else
                      {
                        MR_Word SubResult4_159;

                        mercury__rtree____Compare____rtree_2_2_0(TypeInfo_for_K_173, TypeInfo_for_V_174, &SubResult4_159, Var_197, ArgY4_158);
                        succeeded = (SubResult4_159 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult4_159;
                        else
                        {
                          MR_Word SubResult5_162;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_K_173, &SubResult5_162, Var_196, ArgY5_161);
                          succeeded = (SubResult5_162 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult5_162;
                          else
                          {
                            MR_Word SubResult6_165;

                            mercury__rtree____Compare____rtree_2_2_0(TypeInfo_for_K_173, TypeInfo_for_V_174, &SubResult6_165, Var_195, ArgY6_164);
                            succeeded = (SubResult6_165 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult6_165;
                            else
                            {
                              MR_Word SubResult7_168;

                              mercury__builtin__compare_3_p_0(TypeInfo_for_K_173, &SubResult7_168, Var_194, ArgY7_167);
                              succeeded = (SubResult7_168 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult7_168;
                              else
                              {
                                MR_Word next_value_of_HeadVar__2_2 = Var_193;
                                MR_Word next_value_of_HeadVar__3_3 = ArgY8_170;

                                // direct tailcall eliminated
                                ;
                                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                                HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
    break;
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_9, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__rtree____Unify____rtree_2_2_0(TypeInfo_for_K_9, TypeInfo_for_V_10, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0(
  MR_Word TypeInfo_for_K_43,
  MR_Word TypeInfo_for_V_44,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_41 == CastY_42);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_44, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Box ArgX3_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
            MR_Box ArgY3_10;
            MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_12;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
              ArgY4_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_43, ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                succeeded = mercury__rtree____Unify____rtree_2_2_0(TypeInfo_for_K_43, TypeInfo_for_V_44, ArgX2_7, ArgY2_8);
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_43, ArgX3_9, ArgY3_10);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = ArgX4_11;
                    next_value_of_HeadVar__2_2 = ArgY4_12;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    continue;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_13 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_14;
            MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_16;
            MR_Box ArgX3_17 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
            MR_Box ArgY3_18;
            MR_Word ArgX4_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_20;
            MR_Box ArgX5_21 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
            MR_Box ArgY5_22;
            MR_Word ArgX6_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
            MR_Word ArgY6_24;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_14 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
              ArgY4_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              ArgY5_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
              ArgY6_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_43, ArgX1_13, ArgY1_14);
              if (succeeded)
              {
                succeeded = mercury__rtree____Unify____rtree_2_2_0(TypeInfo_for_K_43, TypeInfo_for_V_44, ArgX2_15, ArgY2_16);
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_43, ArgX3_17, ArgY3_18);
                  if (succeeded)
                  {
                    succeeded = mercury__rtree____Unify____rtree_2_2_0(TypeInfo_for_K_43, TypeInfo_for_V_44, ArgX4_19, ArgY4_20);
                    if (succeeded)
                    {
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_43, ArgX5_21, ArgY5_22);
                      if (succeeded)
                      {
                        // direct tailcall eliminated
                        ;
                        next_value_of_HeadVar__1_1 = ArgX6_23;
                        next_value_of_HeadVar__2_2 = ArgY6_24;
                        HeadVar__1_1 = next_value_of_HeadVar__1_1;
                        HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
            MR_Box ArgX1_25 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_26;
            MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_28;
            MR_Box ArgX3_29 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
            MR_Box ArgY3_30;
            MR_Word ArgX4_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_32;
            MR_Box ArgX5_33 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
            MR_Box ArgY5_34;
            MR_Word ArgX6_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
            MR_Word ArgY6_36;
            MR_Box ArgX7_37 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
            MR_Box ArgY7_38;
            MR_Word ArgX8_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
            MR_Word ArgY8_40;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_26 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_30 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
              ArgY4_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              ArgY5_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
              ArgY6_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
              ArgY7_38 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
              ArgY8_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_43, ArgX1_25, ArgY1_26);
              if (succeeded)
              {
                succeeded = mercury__rtree____Unify____rtree_2_2_0(TypeInfo_for_K_43, TypeInfo_for_V_44, ArgX2_27, ArgY2_28);
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_43, ArgX3_29, ArgY3_30);
                  if (succeeded)
                  {
                    succeeded = mercury__rtree____Unify____rtree_2_2_0(TypeInfo_for_K_43, TypeInfo_for_V_44, ArgX4_31, ArgY4_32);
                    if (succeeded)
                    {
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_43, ArgX5_33, ArgY5_34);
                      if (succeeded)
                      {
                        succeeded = mercury__rtree____Unify____rtree_2_2_0(TypeInfo_for_K_43, TypeInfo_for_V_44, ArgX6_35, ArgY6_36);
                        if (succeeded)
                        {
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_43, ArgX7_37, ArgY7_38);
                          if (succeeded)
                          {
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__1_1 = ArgX8_39;
                            next_value_of_HeadVar__2_2 = ArgY8_40;
                            HeadVar__1_1 = next_value_of_HeadVar__1_1;
                            HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0(
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
mercury__rtree____Unify____min_of_two_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0(
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
mercury__rtree____Unify____min_of_three_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0(
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
mercury__rtree____Unify____min_of_four_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__rtree____Compare____interval_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Float ArgY2_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 2;
      else
        SubResult1_6 = (MR_Integer) 0;
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
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtree____Compare____delete_info_2_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
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
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_27_27;
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      {
        TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (&mercury__rtree__rtree__type_ctor_info_orphan_2));
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_K_19));
        MR_hl_field(MR_mktag(0), TypeInfo_27_27, 2) = ((MR_Box) (TypeInfo_for_V_20));
      }
      mercury__list____Compare____list_1_0(TypeInfo_27_27, HeadVar__1_1, (MR_Word) (Var_30), (MR_Word) (ArgY1_5));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer ArgY1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      succeeded = (Var_32 < ArgY1_13);
      if (succeeded)
        SubResult1_14 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_32 == ArgY1_13);
        if (succeeded)
          SubResult1_14 = (MR_Integer) 0;
        else
          SubResult1_14 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
      {
        MR_Word TypeInfo_23_23;

        {
          TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__rtree__rtree__type_ctor_info_orphan_2));
          MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_K_19));
          MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_V_20));
        }
        mercury__list____Compare____list_1_0(TypeInfo_23_23, HeadVar__1_1, (MR_Word) (Var_31), (MR_Word) (ArgY2_16));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeCtorInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      TypeCtorInfo_13_13 = (MR_Word) (&mercury__rtree__rtree__type_ctor_info_orphan_2);
      {
        TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (TypeCtorInfo_13_13));
        MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_K_11));
        MR_hl_field(MR_mktag(0), TypeInfo_14_14, 2) = ((MR_Box) (TypeInfo_for_V_12));
      }
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_14_14, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    }
  }
  else
  {
    MR_Word TypeCtorInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (ArgX1_5 == ArgY1_6);
      if (succeeded)
      {
        TypeCtorInfo_17_17 = (MR_Word) (&mercury__rtree__rtree__type_ctor_info_orphan_2);
        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_K_11));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 2) = ((MR_Box) (TypeInfo_for_V_12));
        }
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_18_18, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__rtree____Compare____box3d_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Float ArgY2_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Float ArgX3_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
    MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
    MR_Float ArgX4_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
    MR_Float ArgY4_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
    MR_Float ArgX5_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
    MR_Float ArgY5_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
    MR_Float ArgX6_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
    MR_Float ArgY6_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 2;
      else
        SubResult1_6 = (MR_Integer) 0;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 2;
        else
          SubResult2_9 = (MR_Integer) 0;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 2;
          else
            SubResult3_12 = (MR_Integer) 0;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            SubResult4_15 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 2;
            else
              SubResult4_15 = (MR_Integer) 0;
          }
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              SubResult5_18 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
                SubResult5_18 = (MR_Integer) 2;
              else
                SubResult5_18 = (MR_Integer) 0;
            }
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
    MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
    MR_Float ArgX5_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
    MR_Float ArgY5_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
    MR_Float ArgX6_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
    MR_Float ArgY6_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__rtree____Compare____box_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Float ArgY2_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Float ArgX3_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
    MR_Float ArgY3_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
    MR_Float ArgX4_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
    MR_Float ArgY4_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 2;
      else
        SubResult1_6 = (MR_Integer) 0;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 2;
        else
          SubResult2_9 = (MR_Integer) 0;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 2;
          else
            SubResult3_12 = (MR_Integer) 0;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Float ArgX3_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Float ArgY3_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
    MR_Float ArgX4_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Float ArgY4_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

MR_Float MR_CALL 
mercury__rtree__bounding_region_size_2_f_0(
  MR_Word TypeClassInfo_for_region_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Float HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_4, (MR_Integer) 0)), (MR_Integer) 9))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_region_4)), HeadVar__1_1, HeadVar__2_2);
  HeadVar__3_3 = MR_unbox_float(conv1_HeadVar__3_3);
  return HeadVar__3_3;
}

MR_Float MR_CALL 
mercury__rtree__size_1_f_0(
  MR_Word TypeClassInfo_for_region_3,
  MR_Box HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 7))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_region_3)), HeadVar__1_1);
  HeadVar__2_2 = MR_unbox_float(conv1_HeadVar__2_2);
  return HeadVar__2_2;
}

MR_Float MR_CALL 
mercury__rtree__interval_bounding_region_length_2_f_0(
  MR_Word A_4,
  MR_Word B_5)
{
  MR_bool succeeded;
  MR_Float HeadVar__3_3;
  MR_Float AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1)));
  MR_Float BMax_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1)));
  MR_Float AMin_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0)));
  MR_Float BMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0)));
  MR_Float Var_10;
  MR_Float Var_11;

  succeeded = (AMax_6 >= BMax_7);
  if (succeeded)
    Var_10 = AMax_6;
  else
    Var_10 = BMax_7;
  succeeded = (AMin_8 <= BMin_9);
  if (succeeded)
    Var_11 = AMin_8;
  else
    Var_11 = BMin_9;
  HeadVar__3_3 = (Var_10 - Var_11);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__rtree__interval_bounding_region_2_f_0(
  MR_Word A_4,
  MR_Word B_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Float AMin_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0)));
  MR_Float BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0)));
  MR_Float AMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1)));
  MR_Float BMax_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1)));
  MR_Float Var_10;
  MR_Float Var_11;

  succeeded = (AMin_6 <= BMin_7);
  if (succeeded)
    Var_10 = AMin_6;
  else
    Var_10 = BMin_7;
  succeeded = (AMax_8 >= BMax_9);
  if (succeeded)
    Var_11 = AMax_8;
  else
    Var_11 = BMax_9;
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = MR_box_float(Var_10);
    MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = MR_box_float(Var_11);
  }
  return HeadVar__3_3;
}

MR_Float MR_CALL 
mercury__rtree__interval_length_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Float Max_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Float Min_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

  HeadVar__2_2 = (Max_3 - Min_4);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__rtree__interval_contains_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  MR_bool succeeded;
  MR_Float AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 0)));
  MR_Float AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 1)));
  MR_Float BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 0)));
  MR_Float BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 1)));

  succeeded = (AMin_5 >= BMin_7);
  if (succeeded)
    succeeded = (AMax_6 <= BMax_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__interval_intersects_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  MR_bool succeeded;
  MR_Float AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 0)));
  MR_Float AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 1)));
  MR_Float BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 0)));
  MR_Float BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 1)));

  succeeded = (AMin_5 <= BMin_7);
  if (succeeded)
    succeeded = (AMax_6 >= BMin_7);
  else
    succeeded = (AMin_5 <= BMax_8);
  return succeeded;
}

MR_Float MR_CALL 
mercury__rtree__box_bounding_region_area_2_f_0(
  MR_Word A_4,
  MR_Word B_5)
{
  MR_bool succeeded;
  MR_Float HeadVar__3_3;
  MR_Float XMax_6;
  MR_Float XMin_7;
  MR_Float YMax_8;
  MR_Float YMin_9;
  MR_Float AXMin_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0)));
  MR_Float AXMax_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1)));
  MR_Float AYMin_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2)));
  MR_Float AYMax_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3)));
  MR_Float BXMin_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0)));
  MR_Float BXMax_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1)));
  MR_Float BYMin_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2)));
  MR_Float BYMax_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 3)));
  MR_Float Var_18;
  MR_Float Var_19;

  succeeded = (AXMin_10 <= BXMin_14);
  if (succeeded)
    XMin_7 = AXMin_10;
  else
    XMin_7 = BXMin_14;
  succeeded = (AXMax_11 >= BXMax_15);
  if (succeeded)
    XMax_6 = AXMax_11;
  else
    XMax_6 = BXMax_15;
  Var_18 = (XMax_6 - XMin_7);
  succeeded = (AYMin_12 <= BYMin_16);
  if (succeeded)
    YMin_9 = AYMin_12;
  else
    YMin_9 = BYMin_16;
  succeeded = (AYMax_13 >= BYMax_17);
  if (succeeded)
    YMax_8 = AYMax_13;
  else
    YMax_8 = BYMax_17;
  Var_19 = (YMax_8 - YMin_9);
  HeadVar__3_3 = (Var_18 * Var_19);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__rtree__box_bounding_region_2_f_0(
  MR_Word A_4,
  MR_Word B_5)
{
  MR_bool succeeded;
  MR_Word C_6;
  MR_Float AXMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0)));
  MR_Float AXMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1)));
  MR_Float AYMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2)));
  MR_Float AYMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3)));
  MR_Float BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0)));
  MR_Float BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1)));
  MR_Float BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2)));
  MR_Float BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 3)));
  MR_Float CXMin_15;
  MR_Float CXMax_16;
  MR_Float CYMin_17;
  MR_Float CYMax_18;

  succeeded = (AXMin_7 <= BXMin_11);
  if (succeeded)
    CXMin_15 = AXMin_7;
  else
    CXMin_15 = BXMin_11;
  succeeded = (AXMax_8 >= BXMax_12);
  if (succeeded)
    CXMax_16 = AXMax_8;
  else
    CXMax_16 = BXMax_12;
  succeeded = (AYMin_9 <= BYMin_13);
  if (succeeded)
    CYMin_17 = AYMin_9;
  else
    CYMin_17 = BYMin_13;
  succeeded = (AYMax_10 >= BYMax_14);
  if (succeeded)
    CYMax_18 = AYMax_10;
  else
    CYMax_18 = BYMax_14;
  {
    C_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), C_6, 0) = MR_box_float(CXMin_15);
    MR_hl_field(MR_mktag(0), C_6, 1) = MR_box_float(CXMax_16);
    MR_hl_field(MR_mktag(0), C_6, 2) = MR_box_float(CYMin_17);
    MR_hl_field(MR_mktag(0), C_6, 3) = MR_box_float(CYMax_18);
  }
  return C_6;
}

MR_Float MR_CALL 
mercury__rtree__box_area_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Float HeadVar__2_2;
  MR_Float XMin_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
  MR_Float XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
  MR_Float YMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
  MR_Float YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
  MR_Float Var_7 = (XMax_4 - XMin_3);
  MR_Float Var_8 = (YMax_6 - YMin_5);

  HeadVar__2_2 = (Var_7 * Var_8);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__rtree__box_contains_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  MR_bool succeeded;
  MR_Float AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 0)));
  MR_Float AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 1)));
  MR_Float AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 2)));
  MR_Float AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 3)));
  MR_Float BXMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 0)));
  MR_Float BXMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 1)));
  MR_Float BYMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 2)));
  MR_Float BYMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 3)));

  succeeded = (AXMin_5 >= BXMin_9);
  if (succeeded)
  {
    succeeded = (AXMax_6 <= BXMax_10);
    if (succeeded)
    {
      succeeded = (AYMin_7 >= BYMin_11);
      if (succeeded)
        succeeded = (AYMax_8 <= BYMax_12);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__box_intersects_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  MR_bool succeeded;
  MR_Float AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 0)));
  MR_Float AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 1)));
  MR_Float AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 2)));
  MR_Float AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 3)));
  MR_Float BXMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 0)));
  MR_Float BXMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 1)));
  MR_Float BYMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 2)));
  MR_Float BYMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 3)));

  succeeded = (AXMin_5 <= BXMin_9);
  if (succeeded)
    succeeded = (AXMax_6 >= BXMin_9);
  else
    succeeded = (AXMin_5 <= BXMax_10);
  if (succeeded)
  {
    succeeded = (AYMin_7 <= BYMin_11);
    if (succeeded)
      succeeded = (AYMax_8 >= BYMin_11);
    else
      succeeded = (AYMin_7 <= BYMax_12);
  }
  return succeeded;
}

MR_Float MR_CALL 
mercury__rtree__box3d_bounding_region_volume_2_f_0(
  MR_Word A_4,
  MR_Word B_5)
{
  MR_bool succeeded;
  MR_Float Volume_6;
  MR_Float AXMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0)));
  MR_Float AXMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1)));
  MR_Float AYMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2)));
  MR_Float AYMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3)));
  MR_Float AZMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 4)));
  MR_Float AZMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 5)));
  MR_Float BXMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0)));
  MR_Float BXMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1)));
  MR_Float BYMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2)));
  MR_Float BYMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 3)));
  MR_Float BZMin_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 4)));
  MR_Float BZMax_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 5)));
  MR_Float XMin_19;
  MR_Float XMax_20;
  MR_Float YMin_21;
  MR_Float YMax_22;
  MR_Float ZMin_23;
  MR_Float ZMax_24;
  MR_Float Var_25;
  MR_Float Var_26;
  MR_Float Var_27;
  MR_Float Var_28;

  succeeded = (AXMin_7 <= BXMin_13);
  if (succeeded)
    XMin_19 = AXMin_7;
  else
    XMin_19 = BXMin_13;
  succeeded = (AXMax_8 >= BXMax_14);
  if (succeeded)
    XMax_20 = AXMax_8;
  else
    XMax_20 = BXMax_14;
  succeeded = (AYMin_9 <= BYMin_15);
  if (succeeded)
    YMin_21 = AYMin_9;
  else
    YMin_21 = BYMin_15;
  succeeded = (AYMax_10 >= BYMax_16);
  if (succeeded)
    YMax_22 = AYMax_10;
  else
    YMax_22 = BYMax_16;
  succeeded = (AZMin_11 <= BZMin_17);
  if (succeeded)
    ZMin_23 = AZMin_11;
  else
    ZMin_23 = BZMin_17;
  succeeded = (AZMax_12 >= BZMax_18);
  if (succeeded)
    ZMax_24 = AZMax_12;
  else
    ZMax_24 = BZMax_18;
  Var_26 = (XMax_20 - XMin_19);
  Var_27 = (YMax_22 - YMin_21);
  Var_25 = (Var_26 * Var_27);
  Var_28 = (ZMax_24 - ZMin_23);
  Volume_6 = (Var_25 * Var_28);
  return Volume_6;
}

MR_Word MR_CALL 
mercury__rtree__box3d_bounding_region_2_f_0(
  MR_Word A_4,
  MR_Word B_5)
{
  MR_bool succeeded;
  MR_Word C_6;
  MR_Float AXMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0)));
  MR_Float AXMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1)));
  MR_Float AYMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2)));
  MR_Float AYMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3)));
  MR_Float AZMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 4)));
  MR_Float AZMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 5)));
  MR_Float BXMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0)));
  MR_Float BXMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1)));
  MR_Float BYMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2)));
  MR_Float BYMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 3)));
  MR_Float BZMin_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 4)));
  MR_Float BZMax_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 5)));
  MR_Float CXMin_19;
  MR_Float CXMax_20;
  MR_Float CYMin_21;
  MR_Float CYMax_22;
  MR_Float CZMin_23;
  MR_Float CZMax_24;

  succeeded = (AXMin_7 <= BXMin_13);
  if (succeeded)
    CXMin_19 = AXMin_7;
  else
    CXMin_19 = BXMin_13;
  succeeded = (AXMax_8 >= BXMax_14);
  if (succeeded)
    CXMax_20 = AXMax_8;
  else
    CXMax_20 = BXMax_14;
  succeeded = (AYMin_9 <= BYMin_15);
  if (succeeded)
    CYMin_21 = AYMin_9;
  else
    CYMin_21 = BYMin_15;
  succeeded = (AYMax_10 >= BYMax_16);
  if (succeeded)
    CYMax_22 = AYMax_10;
  else
    CYMax_22 = BYMax_16;
  succeeded = (AZMin_11 <= BZMin_17);
  if (succeeded)
    CZMin_23 = AZMin_11;
  else
    CZMin_23 = BZMin_17;
  succeeded = (AZMax_12 >= BZMax_18);
  if (succeeded)
    CZMax_24 = AZMax_12;
  else
    CZMax_24 = BZMax_18;
  {
    C_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), C_6, 0) = MR_box_float(CXMin_19);
    MR_hl_field(MR_mktag(0), C_6, 1) = MR_box_float(CXMax_20);
    MR_hl_field(MR_mktag(0), C_6, 2) = MR_box_float(CYMin_21);
    MR_hl_field(MR_mktag(0), C_6, 3) = MR_box_float(CYMax_22);
    MR_hl_field(MR_mktag(0), C_6, 4) = MR_box_float(CZMin_23);
    MR_hl_field(MR_mktag(0), C_6, 5) = MR_box_float(CZMax_24);
  }
  return C_6;
}

MR_Float MR_CALL 
mercury__rtree__box3d_volume_1_f_0(
  MR_Word Box_3)
{
  MR_Float HeadVar__2_2;
  MR_Float XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), Box_3, (MR_Integer) 1)));
  MR_Float XMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), Box_3, (MR_Integer) 0)));
  MR_Float YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), Box_3, (MR_Integer) 3)));
  MR_Float YMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), Box_3, (MR_Integer) 2)));
  MR_Float ZMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), Box_3, (MR_Integer) 5)));
  MR_Float ZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), Box_3, (MR_Integer) 4)));
  MR_Float Var_10;
  MR_Float Var_11 = (XMax_4 - XMin_5);
  MR_Float Var_12 = (YMax_6 - YMin_7);
  MR_Float Var_13;

  Var_10 = (Var_11 * Var_12);
  Var_13 = (ZMax_8 - ZMin_9);
  HeadVar__2_2 = (Var_10 * Var_13);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__rtree__box3d_contains_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  MR_bool succeeded;
  MR_Float AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 0)));
  MR_Float AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 1)));
  MR_Float AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 2)));
  MR_Float AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 3)));
  MR_Float AZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 4)));
  MR_Float AZMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 5)));
  MR_Float BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 0)));
  MR_Float BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 1)));
  MR_Float BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 2)));
  MR_Float BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 3)));
  MR_Float BZMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 4)));
  MR_Float BZMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 5)));

  succeeded = (AXMin_5 >= BXMin_11);
  if (succeeded)
  {
    succeeded = (AXMax_6 <= BXMax_12);
    if (succeeded)
    {
      succeeded = (AYMin_7 >= BYMin_13);
      if (succeeded)
      {
        succeeded = (AYMax_8 <= BYMax_14);
        if (succeeded)
        {
          succeeded = (AZMin_9 >= BZMin_15);
          if (succeeded)
            succeeded = (AZMax_10 <= BZMax_16);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__box3d_intersects_2_p_0(
  MR_Word A_3,
  MR_Word B_4)
{
  MR_bool succeeded;
  MR_Float AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 0)));
  MR_Float AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 1)));
  MR_Float AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 2)));
  MR_Float AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 3)));
  MR_Float AZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 4)));
  MR_Float AZMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), A_3, (MR_Integer) 5)));
  MR_Float BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 0)));
  MR_Float BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 1)));
  MR_Float BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 2)));
  MR_Float BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 3)));
  MR_Float BZMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 4)));
  MR_Float BZMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), B_4, (MR_Integer) 5)));

  succeeded = (AXMin_5 <= BXMin_11);
  if (succeeded)
    succeeded = (AXMax_6 >= BXMin_11);
  else
    succeeded = (AXMin_5 <= BXMax_12);
  if (succeeded)
  {
    succeeded = (AYMin_7 <= BYMin_13);
    if (succeeded)
      succeeded = (AYMax_8 >= BYMin_13);
    else
      succeeded = (AYMin_7 <= BYMax_14);
    if (succeeded)
    {
      succeeded = (AZMin_9 <= BZMin_15);
      if (succeeded)
        succeeded = (AZMax_10 >= BZMin_15);
      else
        succeeded = (AZMin_9 <= BZMax_16);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__map_values_3_p_1(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Box W_8;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (P_1)), K_6, V_7, &W_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = K_6;
            MR_hl_field(MR_mktag(1), base, 1) = W_8;
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word U_11;

        succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_12, TypeInfo_for_V_13, TypeInfo_for_W_14, P_1, T_10, &U_11);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (U_11));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__map_values_key_2_4_p_1(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_W_31,
  MR_Word P_5,
  MR_Box K_6,
  MR_Word T_7,
  MR_Word * U_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) T_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box V_9 = (MR_hl_field(MR_mktag(0), T_7, (MR_Integer) 0));
        MR_Box W_10;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (P_5)), K_6, V_9, &W_10);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *U_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = W_10;
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, U_8);
      break;
    case (MR_Integer) 2:
      succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, U_8);
      break;
    case (MR_Integer) 3:
      succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, U_8);
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__LCMC__pred__map_values_key_2__1_4_p_1(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_W_31,
  MR_Word P_5,
  MR_Box K_6,
  MR_Word T_7,
  MR_Word * AddrOfU_32)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) T_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box V_9 = (MR_hl_field(MR_mktag(0), T_7, (MR_Integer) 0));
        MR_Box W_10;
        MR_Word U_33;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (P_5)), K_6, V_9, &W_10);
        if (succeeded)
        {
          {
            U_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), U_33, 0) = W_10;
          }
          *AddrOfU_32 = U_33;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word U_35;

        succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, &U_35);
        if (succeeded)
        {
          *AddrOfU_32 = U_35;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word U_34;

        succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, &U_34);
        if (succeeded)
        {
          *AddrOfU_32 = U_34;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word U_8;

        succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, &U_8);
        if (succeeded)
        {
          *AddrOfU_32 = U_8;
          succeeded = MR_TRUE;
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__map_values_2_3_p_1(
  MR_Word TypeInfo_for_K_38,
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_W_40,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__error_1_p_0((MR_String) "map_values_2: unexpected leaf.");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word T0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box K1_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        MR_Word T1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Word U0_13;
        MR_Word * AddrU1_91;

        succeeded = mercury__rtree__map_values_key_2_4_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K0_9, T0_10, &U0_13);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = K0_9;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (U0_13));
            MR_hl_field(MR_mktag(1), base, 2) = K1_11;
            MR_hl_field(MR_mktag(1), base, 3) = NULL;
          }
          AddrU1_91 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 3)));
          succeeded = mercury__rtree__LCMC__pred__map_values_key_2__1_4_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K1_11, T1_12, AddrU1_91);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_16 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
        MR_Word T0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box K1_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
        MR_Word T1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box K2_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
        MR_Word T2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
        MR_Word U0_22;
        MR_Word U1_23;
        MR_Word * AddrU2_90;

        succeeded = mercury__rtree__map_values_key_2_4_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K0_16, T0_17, &U0_22);
        if (succeeded)
        {
          succeeded = mercury__rtree__map_values_key_2_4_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K1_18, T1_19, &U1_23);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(2), base, 0) = K0_16;
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (U0_22));
              MR_hl_field(MR_mktag(2), base, 2) = K1_18;
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (U1_23));
              MR_hl_field(MR_mktag(2), base, 4) = K2_20;
              MR_hl_field(MR_mktag(2), base, 5) = NULL;
            }
            AddrU2_90 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 5)));
            succeeded = mercury__rtree__LCMC__pred__map_values_key_2__1_4_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K2_20, T2_21, AddrU2_90);
          }
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box K0_26 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
        MR_Word T0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box K1_28 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
        MR_Word T1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box K2_30 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
        MR_Word T2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
        MR_Box K3_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
        MR_Word T3_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
        MR_Word U0_34;
        MR_Word U1_35;
        MR_Word U2_36;
        MR_Word * AddrU3_89;

        switch (MR_tag((MR_Word) T0_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box V_45 = (MR_hl_field(MR_mktag(0), T0_27, (MR_Integer) 0));
              MR_Box W_46;
              MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

              succeeded = func_0(((MR_Box) (P_1)), K0_26, V_45, &W_46);
              if (succeeded)
              {
                {
                  U0_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), U0_34, 0) = W_46;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T0_27, &U0_34);
            break;
          case (MR_Integer) 2:
            succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T0_27, &U0_34);
            break;
          case (MR_Integer) 3:
            succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T0_27, &U0_34);
            break;
        }
        if (succeeded)
        {
          switch (MR_tag((MR_Word) T1_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box V_69 = (MR_hl_field(MR_mktag(0), T1_29, (MR_Integer) 0));
                MR_Box W_70;
                MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

                succeeded = func_1(((MR_Box) (P_1)), K1_28, V_69, &W_70);
                if (succeeded)
                {
                  {
                    U1_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), U1_35, 0) = W_70;
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T1_29, &U1_35);
              break;
            case (MR_Integer) 2:
              succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T1_29, &U1_35);
              break;
            case (MR_Integer) 3:
              succeeded = mercury__rtree__map_values_2_3_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T1_29, &U1_35);
              break;
          }
          if (succeeded)
          {
            succeeded = mercury__rtree__map_values_key_2_4_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K2_30, T2_31, &U2_36);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(3), base, 0) = K0_26;
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (U0_34));
                MR_hl_field(MR_mktag(3), base, 2) = K1_28;
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (U1_35));
                MR_hl_field(MR_mktag(3), base, 4) = K2_30;
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (U2_36));
                MR_hl_field(MR_mktag(3), base, 6) = K3_32;
                MR_hl_field(MR_mktag(3), base, 7) = NULL;
              }
              AddrU3_89 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *HeadVar__3_3, (MR_Integer) 7)));
              succeeded = mercury__rtree__LCMC__pred__map_values_key_2__1_4_p_1(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K3_32, T3_33, AddrU3_89);
            }
          }
        }
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
mercury__rtree__map_values_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word TypeInfo_for_W_14,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Box W_8;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_0(((MR_Box) (P_1)), K_6, V_7, &W_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K_6;
          MR_hl_field(MR_mktag(1), base, 1) = W_8;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word U_11;

        mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, TypeInfo_for_W_14, P_1, T_10, &U_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (U_11));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__rtree__map_values_key_2_4_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_W_31,
  MR_Word P_5,
  MR_Box K_6,
  MR_Word T_7,
  MR_Word * U_8)
{
  switch (MR_tag((MR_Word) T_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box V_9 = (MR_hl_field(MR_mktag(0), T_7, (MR_Integer) 0));
        MR_Box W_10;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

        func_0(((MR_Box) (P_5)), K_6, V_9, &W_10);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *U_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = W_10;
        }
      }
      break;
    case (MR_Integer) 1:
      mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, U_8);
      break;
    case (MR_Integer) 2:
      mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, U_8);
      break;
    case (MR_Integer) 3:
      mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, U_8);
      break;
  }
}

void MR_CALL 
mercury__rtree__LCMC__pred__map_values_key_2__1_4_p_0(
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_W_31,
  MR_Word P_5,
  MR_Box K_6,
  MR_Word T_7,
  MR_Word * AddrOfU_32)
{
  switch (MR_tag((MR_Word) T_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box V_9 = (MR_hl_field(MR_mktag(0), T_7, (MR_Integer) 0));
        MR_Box W_10;
        MR_Word U_33;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

        func_0(((MR_Box) (P_5)), K_6, V_9, &W_10);
        {
          U_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), U_33, 0) = W_10;
        }
        *AddrOfU_32 = U_33;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word U_35;

        mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, &U_35);
        *AddrOfU_32 = U_35;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word U_34;

        mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, &U_34);
        *AddrOfU_32 = U_34;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word U_8;

        mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_W_31, P_5, T_7, &U_8);
        *AddrOfU_32 = U_8;
      }
      break;
  }
}

void MR_CALL 
mercury__rtree__map_values_2_3_p_0(
  MR_Word TypeInfo_for_K_38,
  MR_Word TypeInfo_for_V_39,
  MR_Word TypeInfo_for_W_40,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__error_1_p_0((MR_String) "map_values_2: unexpected leaf.");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word T0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box K1_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        MR_Word T1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Word U0_13;
        MR_Word * AddrU1_91;

        mercury__rtree__map_values_key_2_4_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K0_9, T0_10, &U0_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K0_9;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (U0_13));
          MR_hl_field(MR_mktag(1), base, 2) = K1_11;
          MR_hl_field(MR_mktag(1), base, 3) = NULL;
        }
        AddrU1_91 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 3)));
        mercury__rtree__LCMC__pred__map_values_key_2__1_4_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K1_11, T1_12, AddrU1_91);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_16 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
        MR_Word T0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box K1_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
        MR_Word T1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box K2_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
        MR_Word T2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
        MR_Word U0_22;
        MR_Word U1_23;
        MR_Word * AddrU2_90;

        mercury__rtree__map_values_key_2_4_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K0_16, T0_17, &U0_22);
        mercury__rtree__map_values_key_2_4_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K1_18, T1_19, &U1_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = K0_16;
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (U0_22));
          MR_hl_field(MR_mktag(2), base, 2) = K1_18;
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (U1_23));
          MR_hl_field(MR_mktag(2), base, 4) = K2_20;
          MR_hl_field(MR_mktag(2), base, 5) = NULL;
        }
        AddrU2_90 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 5)));
        mercury__rtree__LCMC__pred__map_values_key_2__1_4_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K2_20, T2_21, AddrU2_90);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box K0_26 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
        MR_Word T0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box K1_28 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
        MR_Word T1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box K2_30 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
        MR_Word T2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
        MR_Box K3_32 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
        MR_Word T3_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
        MR_Word U0_34;
        MR_Word U1_35;
        MR_Word U2_36;
        MR_Word * AddrU3_89;

        switch (MR_tag((MR_Word) T0_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box V_45 = (MR_hl_field(MR_mktag(0), T0_27, (MR_Integer) 0));
              MR_Box W_46;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

              func_0(((MR_Box) (P_1)), K0_26, V_45, &W_46);
              {
                U0_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), U0_34, 0) = W_46;
              }
            }
            break;
          case (MR_Integer) 1:
            mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T0_27, &U0_34);
            break;
          case (MR_Integer) 2:
            mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T0_27, &U0_34);
            break;
          case (MR_Integer) 3:
            mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T0_27, &U0_34);
            break;
        }
        switch (MR_tag((MR_Word) T1_29)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box V_69 = (MR_hl_field(MR_mktag(0), T1_29, (MR_Integer) 0));
              MR_Box W_70;
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

              func_1(((MR_Box) (P_1)), K1_28, V_69, &W_70);
              {
                U1_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), U1_35, 0) = W_70;
              }
            }
            break;
          case (MR_Integer) 1:
            mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T1_29, &U1_35);
            break;
          case (MR_Integer) 2:
            mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T1_29, &U1_35);
            break;
          case (MR_Integer) 3:
            mercury__rtree__map_values_2_3_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, T1_29, &U1_35);
            break;
        }
        mercury__rtree__map_values_key_2_4_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K2_30, T2_31, &U2_36);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = K0_26;
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (U0_34));
          MR_hl_field(MR_mktag(3), base, 2) = K1_28;
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (U1_35));
          MR_hl_field(MR_mktag(3), base, 4) = K2_30;
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (U2_36));
          MR_hl_field(MR_mktag(3), base, 6) = K3_32;
          MR_hl_field(MR_mktag(3), base, 7) = NULL;
        }
        AddrU3_89 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *HeadVar__3_3, (MR_Integer) 7)));
        mercury__rtree__LCMC__pred__map_values_key_2__1_4_p_0(TypeInfo_for_K_38, TypeInfo_for_V_39, TypeInfo_for_W_40, P_1, K3_32, T3_33, AddrU3_89);
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__rtree__fold_4_p_2(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

        succeeded = mercury__rtree__fold_2_4_p_2(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, HeadVar__1_1, T_17, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__fold_2_4_p_2(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_49,
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_50,
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_51,
  MR_Word tscc_proc_1_input_4_P_1,
  MR_Word tscc_proc_1_input_5_HeadVar__2_2,
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_4)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_33;
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_34;
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_35;
  MR_Word tscc_proc_2_input_4_P_6;
  MR_Box tscc_proc_2_input_5_K_7;
  MR_Word tscc_proc_2_input_6_T_8;
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
  MR_bool tscc_output_succeeded;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_4;

  // The code for TSCC PROC 1: pred rtree.fold_2/4-2.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.fold_2/4-2
  ;
  // proc 2 in TSCC: pred rtree.fold_subtree/5-2
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_49 = tscc_proc_1_input_1_TypeInfo_for_K_49;
    MR_Word TypeInfo_for_V_50 = tscc_proc_1_input_2_TypeInfo_for_V_50;
    MR_Word TypeInfo_for_A_51 = tscc_proc_1_input_3_TypeInfo_for_A_51;
    MR_Word P_1 = tscc_proc_1_input_4_P_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_5_HeadVar__2_2;
    MR_Box STATE_VARIABLE_Acc_0_3 = tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
    MR_Box STATE_VARIABLE_Acc_4;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_13 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_11, T0_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_18_18);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
            next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
            next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
            next_value_of_tscc_proc_2_input_4_P_6 = P_1;
            next_value_of_tscc_proc_2_input_5_K_7 = K1_13;
            next_value_of_tscc_proc_2_input_6_T_8 = T1_14;
            next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_18_18;
            tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
            tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
            tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
            tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
            tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
            tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
            tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_25 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_30_30;
          MR_Box STATE_VARIABLE_Acc_31_31;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_21, T0_22, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_30_30);
          if (succeeded)
          {
            succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_23, T1_24, STATE_VARIABLE_Acc_30_30, &STATE_VARIABLE_Acc_31_31);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
              next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
              next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
              next_value_of_tscc_proc_2_input_4_P_6 = P_1;
              next_value_of_tscc_proc_2_input_5_K_7 = K2_25;
              next_value_of_tscc_proc_2_input_6_T_8 = T2_26;
              next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_31_31;
              tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
              tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
              tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
              tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
              tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
              tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
              tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
              goto top_of_proc_2;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_38 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box K3_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
          MR_Word T3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_45_45;
          MR_Box STATE_VARIABLE_Acc_46_46;
          MR_Box STATE_VARIABLE_Acc_47_47;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          switch (MR_tag((MR_Word) T0_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box V_58 = (MR_hl_field(MR_mktag(0), T0_35, (MR_Integer) 0));
                MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

                succeeded = func_0(((MR_Box) (P_1)), K0_34, V_58, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 1:
              succeeded = mercury__rtree__fold_2_4_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 2:
              succeeded = mercury__rtree__fold_2_4_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 3:
              succeeded = mercury__rtree__fold_2_4_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
          }
          if (succeeded)
          {
            succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_36, T1_37, STATE_VARIABLE_Acc_45_45, &STATE_VARIABLE_Acc_46_46);
            if (succeeded)
            {
              succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K2_38, T2_39, STATE_VARIABLE_Acc_46_46, &STATE_VARIABLE_Acc_47_47);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
                next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
                next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
                next_value_of_tscc_proc_2_input_4_P_6 = P_1;
                next_value_of_tscc_proc_2_input_5_K_7 = K3_40;
                next_value_of_tscc_proc_2_input_6_T_8 = T3_41;
                next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_47_47;
                tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
                tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
                tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
                tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
                tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
                tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
                tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
                goto top_of_proc_2;
              }
            }
          }
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_33 = tscc_proc_2_input_1_TypeInfo_for_K_33;
    MR_Word TypeInfo_for_V_34 = tscc_proc_2_input_2_TypeInfo_for_V_34;
    MR_Word TypeInfo_for_A_35 = tscc_proc_2_input_3_TypeInfo_for_A_35;
    MR_Word P_6 = tscc_proc_2_input_4_P_6;
    MR_Box K_7 = tscc_proc_2_input_5_K_7;
    MR_Word T_8 = tscc_proc_2_input_6_T_8;
    MR_Box STATE_VARIABLE_Acc_0_29 = tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
    MR_Box STATE_VARIABLE_Acc_30;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) T_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box V_10 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));

          succeeded = func_1(((MR_Box) (P_6)), K_7, V_10, STATE_VARIABLE_Acc_0_29, &STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_30;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_4 = tscc_output_1_STATE_VARIABLE_Acc_4;
  return tscc_output_succeeded;
}

MR_bool MR_CALL 
mercury__rtree__fold_subtree_5_p_2(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_33,
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_34,
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_35,
  MR_Word tscc_proc_2_input_4_P_6,
  MR_Box tscc_proc_2_input_5_K_7,
  MR_Word tscc_proc_2_input_6_T_8,
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_4)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_49;
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_50;
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_51;
  MR_Word tscc_proc_1_input_4_P_1;
  MR_Word tscc_proc_1_input_5_HeadVar__2_2;
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
  MR_bool tscc_output_succeeded;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_4;

  // The code for TSCC PROC 2: pred rtree.fold_subtree/5-2.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.fold_2/4-2
  ;
  // proc 2 in TSCC: pred rtree.fold_subtree/5-2
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_49 = tscc_proc_1_input_1_TypeInfo_for_K_49;
    MR_Word TypeInfo_for_V_50 = tscc_proc_1_input_2_TypeInfo_for_V_50;
    MR_Word TypeInfo_for_A_51 = tscc_proc_1_input_3_TypeInfo_for_A_51;
    MR_Word P_1 = tscc_proc_1_input_4_P_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_5_HeadVar__2_2;
    MR_Box STATE_VARIABLE_Acc_0_3 = tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
    MR_Box STATE_VARIABLE_Acc_4;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_13 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_11, T0_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_18_18);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
            next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
            next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
            next_value_of_tscc_proc_2_input_4_P_6 = P_1;
            next_value_of_tscc_proc_2_input_5_K_7 = K1_13;
            next_value_of_tscc_proc_2_input_6_T_8 = T1_14;
            next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_18_18;
            tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
            tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
            tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
            tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
            tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
            tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
            tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
            goto top_of_proc_2;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_25 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_30_30;
          MR_Box STATE_VARIABLE_Acc_31_31;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_21, T0_22, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_30_30);
          if (succeeded)
          {
            succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_23, T1_24, STATE_VARIABLE_Acc_30_30, &STATE_VARIABLE_Acc_31_31);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
              next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
              next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
              next_value_of_tscc_proc_2_input_4_P_6 = P_1;
              next_value_of_tscc_proc_2_input_5_K_7 = K2_25;
              next_value_of_tscc_proc_2_input_6_T_8 = T2_26;
              next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_31_31;
              tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
              tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
              tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
              tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
              tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
              tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
              tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
              goto top_of_proc_2;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_38 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box K3_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
          MR_Word T3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_45_45;
          MR_Box STATE_VARIABLE_Acc_46_46;
          MR_Box STATE_VARIABLE_Acc_47_47;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          switch (MR_tag((MR_Word) T0_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box V_58 = (MR_hl_field(MR_mktag(0), T0_35, (MR_Integer) 0));
                MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

                succeeded = func_0(((MR_Box) (P_1)), K0_34, V_58, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 1:
              succeeded = mercury__rtree__fold_2_4_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 2:
              succeeded = mercury__rtree__fold_2_4_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 3:
              succeeded = mercury__rtree__fold_2_4_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
          }
          if (succeeded)
          {
            succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_36, T1_37, STATE_VARIABLE_Acc_45_45, &STATE_VARIABLE_Acc_46_46);
            if (succeeded)
            {
              succeeded = mercury__rtree__fold_subtree_5_p_2(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K2_38, T2_39, STATE_VARIABLE_Acc_46_46, &STATE_VARIABLE_Acc_47_47);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
                next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
                next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
                next_value_of_tscc_proc_2_input_4_P_6 = P_1;
                next_value_of_tscc_proc_2_input_5_K_7 = K3_40;
                next_value_of_tscc_proc_2_input_6_T_8 = T3_41;
                next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_47_47;
                tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
                tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
                tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
                tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
                tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
                tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
                tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
                goto top_of_proc_2;
              }
            }
          }
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_33 = tscc_proc_2_input_1_TypeInfo_for_K_33;
    MR_Word TypeInfo_for_V_34 = tscc_proc_2_input_2_TypeInfo_for_V_34;
    MR_Word TypeInfo_for_A_35 = tscc_proc_2_input_3_TypeInfo_for_A_35;
    MR_Word P_6 = tscc_proc_2_input_4_P_6;
    MR_Box K_7 = tscc_proc_2_input_5_K_7;
    MR_Word T_8 = tscc_proc_2_input_6_T_8;
    MR_Box STATE_VARIABLE_Acc_0_29 = tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
    MR_Box STATE_VARIABLE_Acc_30;
    MR_bool succeeded = MR_TRUE;

    switch (MR_tag((MR_Word) T_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box V_10 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));

          succeeded = func_1(((MR_Box) (P_6)), K_7, V_10, STATE_VARIABLE_Acc_0_29, &STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_succeeded = succeeded;
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_30;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_4 = tscc_output_1_STATE_VARIABLE_Acc_4;
  return tscc_output_succeeded;
}

void MR_CALL 
mercury__rtree__fold_4_p_1(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

        func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

        mercury__rtree__fold_2_4_p_1(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, HeadVar__1_1, T_17, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
      }
      break;
  }
}

void MR_CALL 
mercury__rtree__fold_2_4_p_1(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_49,
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_50,
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_51,
  MR_Word tscc_proc_1_input_4_P_1,
  MR_Word tscc_proc_1_input_5_HeadVar__2_2,
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_4)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_33;
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_34;
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_35;
  MR_Word tscc_proc_2_input_4_P_6;
  MR_Box tscc_proc_2_input_5_K_7;
  MR_Word tscc_proc_2_input_6_T_8;
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_4;

  // The code for TSCC PROC 1: pred rtree.fold_2/4-1.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.fold_2/4-1
  ;
  // proc 2 in TSCC: pred rtree.fold_subtree/5-1
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_49 = tscc_proc_1_input_1_TypeInfo_for_K_49;
    MR_Word TypeInfo_for_V_50 = tscc_proc_1_input_2_TypeInfo_for_V_50;
    MR_Word TypeInfo_for_A_51 = tscc_proc_1_input_3_TypeInfo_for_A_51;
    MR_Word P_1 = tscc_proc_1_input_4_P_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_5_HeadVar__2_2;
    MR_Box STATE_VARIABLE_Acc_0_3 = tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
    MR_Box STATE_VARIABLE_Acc_4;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_13 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_11, T0_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K1_13;
          next_value_of_tscc_proc_2_input_6_T_8 = T1_14;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_18_18;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_25 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_30_30;
          MR_Box STATE_VARIABLE_Acc_31_31;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_21, T0_22, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_30_30);
          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_23, T1_24, STATE_VARIABLE_Acc_30_30, &STATE_VARIABLE_Acc_31_31);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K2_25;
          next_value_of_tscc_proc_2_input_6_T_8 = T2_26;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_31_31;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_38 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box K3_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
          MR_Word T3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_45_45;
          MR_Box STATE_VARIABLE_Acc_46_46;
          MR_Box STATE_VARIABLE_Acc_47_47;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          switch (MR_tag((MR_Word) T0_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box V_58 = (MR_hl_field(MR_mktag(0), T0_35, (MR_Integer) 0));
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

                func_0(((MR_Box) (P_1)), K0_34, V_58, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 1:
              mercury__rtree__fold_2_4_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 2:
              mercury__rtree__fold_2_4_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 3:
              mercury__rtree__fold_2_4_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
          }
          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_36, T1_37, STATE_VARIABLE_Acc_45_45, &STATE_VARIABLE_Acc_46_46);
          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K2_38, T2_39, STATE_VARIABLE_Acc_46_46, &STATE_VARIABLE_Acc_47_47);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K3_40;
          next_value_of_tscc_proc_2_input_6_T_8 = T3_41;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_47_47;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_33 = tscc_proc_2_input_1_TypeInfo_for_K_33;
    MR_Word TypeInfo_for_V_34 = tscc_proc_2_input_2_TypeInfo_for_V_34;
    MR_Word TypeInfo_for_A_35 = tscc_proc_2_input_3_TypeInfo_for_A_35;
    MR_Word P_6 = tscc_proc_2_input_4_P_6;
    MR_Box K_7 = tscc_proc_2_input_5_K_7;
    MR_Word T_8 = tscc_proc_2_input_6_T_8;
    MR_Box STATE_VARIABLE_Acc_0_29 = tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
    MR_Box STATE_VARIABLE_Acc_30;

    switch (MR_tag((MR_Word) T_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box V_10 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));

          func_1(((MR_Box) (P_6)), K_7, V_10, STATE_VARIABLE_Acc_0_29, &STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_30;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_4 = tscc_output_1_STATE_VARIABLE_Acc_4;
  return;
}

void MR_CALL 
mercury__rtree__fold_subtree_5_p_1(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_33,
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_34,
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_35,
  MR_Word tscc_proc_2_input_4_P_6,
  MR_Box tscc_proc_2_input_5_K_7,
  MR_Word tscc_proc_2_input_6_T_8,
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_4)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_49;
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_50;
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_51;
  MR_Word tscc_proc_1_input_4_P_1;
  MR_Word tscc_proc_1_input_5_HeadVar__2_2;
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_4;

  // The code for TSCC PROC 2: pred rtree.fold_subtree/5-1.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.fold_2/4-1
  ;
  // proc 2 in TSCC: pred rtree.fold_subtree/5-1
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_49 = tscc_proc_1_input_1_TypeInfo_for_K_49;
    MR_Word TypeInfo_for_V_50 = tscc_proc_1_input_2_TypeInfo_for_V_50;
    MR_Word TypeInfo_for_A_51 = tscc_proc_1_input_3_TypeInfo_for_A_51;
    MR_Word P_1 = tscc_proc_1_input_4_P_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_5_HeadVar__2_2;
    MR_Box STATE_VARIABLE_Acc_0_3 = tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
    MR_Box STATE_VARIABLE_Acc_4;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_13 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_11, T0_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K1_13;
          next_value_of_tscc_proc_2_input_6_T_8 = T1_14;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_18_18;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_25 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_30_30;
          MR_Box STATE_VARIABLE_Acc_31_31;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_21, T0_22, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_30_30);
          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_23, T1_24, STATE_VARIABLE_Acc_30_30, &STATE_VARIABLE_Acc_31_31);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K2_25;
          next_value_of_tscc_proc_2_input_6_T_8 = T2_26;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_31_31;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_38 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box K3_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
          MR_Word T3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_45_45;
          MR_Box STATE_VARIABLE_Acc_46_46;
          MR_Box STATE_VARIABLE_Acc_47_47;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          switch (MR_tag((MR_Word) T0_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box V_58 = (MR_hl_field(MR_mktag(0), T0_35, (MR_Integer) 0));
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

                func_0(((MR_Box) (P_1)), K0_34, V_58, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 1:
              mercury__rtree__fold_2_4_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 2:
              mercury__rtree__fold_2_4_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 3:
              mercury__rtree__fold_2_4_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
          }
          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_36, T1_37, STATE_VARIABLE_Acc_45_45, &STATE_VARIABLE_Acc_46_46);
          mercury__rtree__fold_subtree_5_p_1(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K2_38, T2_39, STATE_VARIABLE_Acc_46_46, &STATE_VARIABLE_Acc_47_47);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K3_40;
          next_value_of_tscc_proc_2_input_6_T_8 = T3_41;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_47_47;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_33 = tscc_proc_2_input_1_TypeInfo_for_K_33;
    MR_Word TypeInfo_for_V_34 = tscc_proc_2_input_2_TypeInfo_for_V_34;
    MR_Word TypeInfo_for_A_35 = tscc_proc_2_input_3_TypeInfo_for_A_35;
    MR_Word P_6 = tscc_proc_2_input_4_P_6;
    MR_Box K_7 = tscc_proc_2_input_5_K_7;
    MR_Word T_8 = tscc_proc_2_input_6_T_8;
    MR_Box STATE_VARIABLE_Acc_0_29 = tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
    MR_Box STATE_VARIABLE_Acc_30;

    switch (MR_tag((MR_Word) T_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box V_10 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));

          func_1(((MR_Box) (P_6)), K_7, V_10, STATE_VARIABLE_Acc_0_29, &STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_30;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_4 = tscc_output_1_STATE_VARIABLE_Acc_4;
  return;
}

void MR_CALL 
mercury__rtree__fold_4_p_0(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

        func_0(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

        mercury__rtree__fold_2_4_p_0(TypeInfo_for_K_22, TypeInfo_for_V_23, TypeInfo_for_A_24, HeadVar__1_1, T_17, STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
      }
      break;
  }
}

void MR_CALL 
mercury__rtree__fold_2_4_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_49,
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_50,
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_51,
  MR_Word tscc_proc_1_input_4_P_1,
  MR_Word tscc_proc_1_input_5_HeadVar__2_2,
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_4)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_33;
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_34;
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_35;
  MR_Word tscc_proc_2_input_4_P_6;
  MR_Box tscc_proc_2_input_5_K_7;
  MR_Word tscc_proc_2_input_6_T_8;
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_4;

  // The code for TSCC PROC 1: pred rtree.fold_2/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.fold_2/4-0
  ;
  // proc 2 in TSCC: pred rtree.fold_subtree/5-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_49 = tscc_proc_1_input_1_TypeInfo_for_K_49;
    MR_Word TypeInfo_for_V_50 = tscc_proc_1_input_2_TypeInfo_for_V_50;
    MR_Word TypeInfo_for_A_51 = tscc_proc_1_input_3_TypeInfo_for_A_51;
    MR_Word P_1 = tscc_proc_1_input_4_P_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_5_HeadVar__2_2;
    MR_Box STATE_VARIABLE_Acc_0_3 = tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
    MR_Box STATE_VARIABLE_Acc_4;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_13 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_11, T0_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K1_13;
          next_value_of_tscc_proc_2_input_6_T_8 = T1_14;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_18_18;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_25 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_30_30;
          MR_Box STATE_VARIABLE_Acc_31_31;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_21, T0_22, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_30_30);
          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_23, T1_24, STATE_VARIABLE_Acc_30_30, &STATE_VARIABLE_Acc_31_31);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K2_25;
          next_value_of_tscc_proc_2_input_6_T_8 = T2_26;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_31_31;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_38 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box K3_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
          MR_Word T3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_45_45;
          MR_Box STATE_VARIABLE_Acc_46_46;
          MR_Box STATE_VARIABLE_Acc_47_47;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          switch (MR_tag((MR_Word) T0_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box V_58 = (MR_hl_field(MR_mktag(0), T0_35, (MR_Integer) 0));
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

                func_0(((MR_Box) (P_1)), K0_34, V_58, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 1:
              mercury__rtree__fold_2_4_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 2:
              mercury__rtree__fold_2_4_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 3:
              mercury__rtree__fold_2_4_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
          }
          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_36, T1_37, STATE_VARIABLE_Acc_45_45, &STATE_VARIABLE_Acc_46_46);
          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K2_38, T2_39, STATE_VARIABLE_Acc_46_46, &STATE_VARIABLE_Acc_47_47);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K3_40;
          next_value_of_tscc_proc_2_input_6_T_8 = T3_41;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_47_47;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_33 = tscc_proc_2_input_1_TypeInfo_for_K_33;
    MR_Word TypeInfo_for_V_34 = tscc_proc_2_input_2_TypeInfo_for_V_34;
    MR_Word TypeInfo_for_A_35 = tscc_proc_2_input_3_TypeInfo_for_A_35;
    MR_Word P_6 = tscc_proc_2_input_4_P_6;
    MR_Box K_7 = tscc_proc_2_input_5_K_7;
    MR_Word T_8 = tscc_proc_2_input_6_T_8;
    MR_Box STATE_VARIABLE_Acc_0_29 = tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
    MR_Box STATE_VARIABLE_Acc_30;

    switch (MR_tag((MR_Word) T_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box V_10 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));

          func_1(((MR_Box) (P_6)), K_7, V_10, STATE_VARIABLE_Acc_0_29, &STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_30;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_4 = tscc_output_1_STATE_VARIABLE_Acc_4;
  return;
}

void MR_CALL 
mercury__rtree__fold_subtree_5_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_33,
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_34,
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_35,
  MR_Word tscc_proc_2_input_4_P_6,
  MR_Box tscc_proc_2_input_5_K_7,
  MR_Word tscc_proc_2_input_6_T_8,
  MR_Box tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_4)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_49;
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_50;
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_51;
  MR_Word tscc_proc_1_input_4_P_1;
  MR_Word tscc_proc_1_input_5_HeadVar__2_2;
  MR_Box tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_4;

  // The code for TSCC PROC 2: pred rtree.fold_subtree/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.fold_2/4-0
  ;
  // proc 2 in TSCC: pred rtree.fold_subtree/5-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_49 = tscc_proc_1_input_1_TypeInfo_for_K_49;
    MR_Word TypeInfo_for_V_50 = tscc_proc_1_input_2_TypeInfo_for_V_50;
    MR_Word TypeInfo_for_A_51 = tscc_proc_1_input_3_TypeInfo_for_A_51;
    MR_Word P_1 = tscc_proc_1_input_4_P_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_5_HeadVar__2_2;
    MR_Box STATE_VARIABLE_Acc_0_3 = tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
    MR_Box STATE_VARIABLE_Acc_4;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_13 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_11, T0_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K1_13;
          next_value_of_tscc_proc_2_input_6_T_8 = T1_14;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_18_18;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_23 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_25 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_30_30;
          MR_Box STATE_VARIABLE_Acc_31_31;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K0_21, T0_22, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_30_30);
          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_23, T1_24, STATE_VARIABLE_Acc_30_30, &STATE_VARIABLE_Acc_31_31);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K2_25;
          next_value_of_tscc_proc_2_input_6_T_8 = T2_26;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_31_31;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_34 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box K1_36 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
          MR_Word T1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box K2_38 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4));
          MR_Word T2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
          MR_Box K3_40 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 6));
          MR_Word T3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_45_45;
          MR_Box STATE_VARIABLE_Acc_46_46;
          MR_Box STATE_VARIABLE_Acc_47_47;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_2_input_4_P_6;
          MR_Box next_value_of_tscc_proc_2_input_5_K_7;
          MR_Word next_value_of_tscc_proc_2_input_6_T_8;
          MR_Box next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;

          switch (MR_tag((MR_Word) T0_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box V_58 = (MR_hl_field(MR_mktag(0), T0_35, (MR_Integer) 0));
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

                func_0(((MR_Box) (P_1)), K0_34, V_58, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              }
              break;
            case (MR_Integer) 1:
              mercury__rtree__fold_2_4_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 2:
              mercury__rtree__fold_2_4_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
            case (MR_Integer) 3:
              mercury__rtree__fold_2_4_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, T0_35, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_45_45);
              break;
          }
          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K1_36, T1_37, STATE_VARIABLE_Acc_45_45, &STATE_VARIABLE_Acc_46_46);
          mercury__rtree__fold_subtree_5_p_0(TypeInfo_for_K_49, TypeInfo_for_V_50, TypeInfo_for_A_51, P_1, K2_38, T2_39, STATE_VARIABLE_Acc_46_46, &STATE_VARIABLE_Acc_47_47);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33 = TypeInfo_for_K_49;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34 = TypeInfo_for_V_50;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35 = TypeInfo_for_A_51;
          next_value_of_tscc_proc_2_input_4_P_6 = P_1;
          next_value_of_tscc_proc_2_input_5_K_7 = K3_40;
          next_value_of_tscc_proc_2_input_6_T_8 = T3_41;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = STATE_VARIABLE_Acc_47_47;
          tscc_proc_2_input_1_TypeInfo_for_K_33 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_33;
          tscc_proc_2_input_2_TypeInfo_for_V_34 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_34;
          tscc_proc_2_input_3_TypeInfo_for_A_35 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_35;
          tscc_proc_2_input_4_P_6 = next_value_of_tscc_proc_2_input_4_P_6;
          tscc_proc_2_input_5_K_7 = next_value_of_tscc_proc_2_input_5_K_7;
          tscc_proc_2_input_6_T_8 = next_value_of_tscc_proc_2_input_6_T_8;
          tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_33 = tscc_proc_2_input_1_TypeInfo_for_K_33;
    MR_Word TypeInfo_for_V_34 = tscc_proc_2_input_2_TypeInfo_for_V_34;
    MR_Word TypeInfo_for_A_35 = tscc_proc_2_input_3_TypeInfo_for_A_35;
    MR_Word P_6 = tscc_proc_2_input_4_P_6;
    MR_Box K_7 = tscc_proc_2_input_5_K_7;
    MR_Word T_8 = tscc_proc_2_input_6_T_8;
    MR_Box STATE_VARIABLE_Acc_0_29 = tscc_proc_2_input_7_STATE_VARIABLE_Acc_0_29;
    MR_Box STATE_VARIABLE_Acc_30;

    switch (MR_tag((MR_Word) T_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box V_10 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));

          func_1(((MR_Box) (P_6)), K_7, V_10, STATE_VARIABLE_Acc_0_29, &STATE_VARIABLE_Acc_30);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49 = TypeInfo_for_K_33;
          MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50 = TypeInfo_for_V_34;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51 = TypeInfo_for_A_35;
          MR_Word next_value_of_tscc_proc_1_input_4_P_1 = P_6;
          MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__2_2 = T_8;
          MR_Box next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_0_29;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_TypeInfo_for_K_49 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_49;
          tscc_proc_1_input_2_TypeInfo_for_V_50 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_50;
          tscc_proc_1_input_3_TypeInfo_for_A_51 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_51;
          tscc_proc_1_input_4_P_1 = next_value_of_tscc_proc_1_input_4_P_1;
          tscc_proc_1_input_5_HeadVar__2_2 = next_value_of_tscc_proc_1_input_5_HeadVar__2_2;
          tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Acc_0_3;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_30;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_4 = tscc_output_1_STATE_VARIABLE_Acc_4;
  return;
}

void MR_CALL 
mercury__rtree__search_general_fold_5_p_1(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word KTest_1,
  MR_Word VPred_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__3_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_0_4;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Box V_14 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_1, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (KTest_1)), K_13);
        if (succeeded)
        {
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_2, (MR_Integer) 1))));

          func_1(((MR_Box) (VPred_2)), K_13, V_14, STATE_VARIABLE_Acc_0_4, STATE_VARIABLE_Acc_5);
        }
        else
          *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_0_4;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

        mercury__rtree__search_general_fold_2_5_p_1(TypeInfo_for_K_26, TypeInfo_for_V_27, TypeInfo_for_A_28, T_21, KTest_1, VPred_2, STATE_VARIABLE_Acc_0_4, STATE_VARIABLE_Acc_5);
      }
      break;
  }
}

void MR_CALL 
mercury__rtree__search_general_fold_2_5_p_1(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_57,
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_58,
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_59,
  MR_Word tscc_proc_1_input_4_HeadVar__1_1,
  MR_Word tscc_proc_1_input_5_KTest_2,
  MR_Word tscc_proc_1_input_6_VPred_3,
  MR_Box tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_5)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_17;
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_18;
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_19;
  MR_Box tscc_proc_2_input_4_K_7;
  MR_Word tscc_proc_2_input_5_T_8;
  MR_Word tscc_proc_2_input_6_KTest_9;
  MR_Word tscc_proc_2_input_7_VPred_10;
  MR_Box tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_5;

  // The code for TSCC PROC 1: pred rtree.search_general_fold_2/5-1.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.search_general_fold_2/5-1
  ;
  // proc 2 in TSCC: pred rtree.search_general_fold_subtree/6-1
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_57 = tscc_proc_1_input_1_TypeInfo_for_K_57;
    MR_Word TypeInfo_for_V_58 = tscc_proc_1_input_2_TypeInfo_for_V_58;
    MR_Word TypeInfo_for_A_59 = tscc_proc_1_input_3_TypeInfo_for_A_59;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_4_HeadVar__1_1;
    MR_Word KTest_2 = tscc_proc_1_input_5_KTest_2;
    MR_Word VPred_3 = tscc_proc_1_input_6_VPred_3;
    MR_Box STATE_VARIABLE_Acc_0_4 = tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
    MR_Box STATE_VARIABLE_Acc_5;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "search_general_fold_2: unexpected leaf node");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_16 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_18 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_22_22;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          mercury__rtree__search_general_fold_subtree_6_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K0_16, T0_17, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_22_22);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K1_18;
          next_value_of_tscc_proc_2_input_5_T_8 = T1_19;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_22_22;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_28 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_30 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_32 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_36_36;
          MR_Box STATE_VARIABLE_Acc_37_37;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          mercury__rtree__search_general_fold_subtree_6_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K0_28, T0_29, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_36_36);
          mercury__rtree__search_general_fold_subtree_6_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K1_30, T1_31, KTest_2, VPred_3, STATE_VARIABLE_Acc_36_36, &STATE_VARIABLE_Acc_37_37);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K2_32;
          next_value_of_tscc_proc_2_input_5_T_8 = T2_33;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_37_37;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_43 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_45 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_47 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_49 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_53_53;
          MR_Box STATE_VARIABLE_Acc_54_54;
          MR_Box STATE_VARIABLE_Acc_55_55;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box);
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box);
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          succeeded = func_0(((MR_Box) (KTest_2)), K0_43);
          if (succeeded)
          {
            MR_Box V_67;

            succeeded = ((MR_tag((MR_Word) T0_44)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_67 = (MR_hl_field(MR_mktag(0), T0_44, (MR_Integer) 0));
              {
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_1(((MR_Box) (VPred_3)), K0_43, V_67, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_53_53);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T0_44, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_53_53);
          }
          else
            STATE_VARIABLE_Acc_53_53 = STATE_VARIABLE_Acc_0_4;
          func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          succeeded = func_2(((MR_Box) (KTest_2)), K1_45);
          if (succeeded)
          {
            MR_Box V_77;

            succeeded = ((MR_tag((MR_Word) T1_46)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_77 = (MR_hl_field(MR_mktag(0), T1_46, (MR_Integer) 0));
              {
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_3(((MR_Box) (VPred_3)), K1_45, V_77, STATE_VARIABLE_Acc_53_53, &STATE_VARIABLE_Acc_54_54);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T1_46, KTest_2, VPred_3, STATE_VARIABLE_Acc_53_53, &STATE_VARIABLE_Acc_54_54);
          }
          else
            STATE_VARIABLE_Acc_54_54 = STATE_VARIABLE_Acc_53_53;
          func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          succeeded = func_4(((MR_Box) (KTest_2)), K2_47);
          if (succeeded)
          {
            MR_Box V_87;

            succeeded = ((MR_tag((MR_Word) T2_48)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_87 = (MR_hl_field(MR_mktag(0), T2_48, (MR_Integer) 0));
              {
                void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_5(((MR_Box) (VPred_3)), K2_47, V_87, STATE_VARIABLE_Acc_54_54, &STATE_VARIABLE_Acc_55_55);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T2_48, KTest_2, VPred_3, STATE_VARIABLE_Acc_54_54, &STATE_VARIABLE_Acc_55_55);
          }
          else
            STATE_VARIABLE_Acc_55_55 = STATE_VARIABLE_Acc_54_54;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K3_49;
          next_value_of_tscc_proc_2_input_5_T_8 = T3_50;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_55_55;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_5;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_17 = tscc_proc_2_input_1_TypeInfo_for_K_17;
    MR_Word TypeInfo_for_V_18 = tscc_proc_2_input_2_TypeInfo_for_V_18;
    MR_Word TypeInfo_for_A_19 = tscc_proc_2_input_3_TypeInfo_for_A_19;
    MR_Box K_7 = tscc_proc_2_input_4_K_7;
    MR_Word T_8 = tscc_proc_2_input_5_T_8;
    MR_Word KTest_9 = tscc_proc_2_input_6_KTest_9;
    MR_Word VPred_10 = tscc_proc_2_input_7_VPred_10;
    MR_Box STATE_VARIABLE_Acc_0_13 = tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
    MR_Box STATE_VARIABLE_Acc_14;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_6)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_9, (MR_Integer) 1))));

    succeeded = func_6(((MR_Box) (KTest_9)), K_7);
    if (succeeded)
    {
      MR_Box V_12;

      succeeded = ((MR_tag((MR_Word) T_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        V_12 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
        {
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_10, (MR_Integer) 1))));

          func_7(((MR_Box) (VPred_10)), K_7, V_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_14);
        }
      }
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_57 = TypeInfo_for_K_17;
        MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_58 = TypeInfo_for_V_18;
        MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_59 = TypeInfo_for_A_19;
        MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__1_1 = T_8;
        MR_Word next_value_of_tscc_proc_1_input_5_KTest_2 = KTest_9;
        MR_Word next_value_of_tscc_proc_1_input_6_VPred_3 = VPred_10;
        MR_Box next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_TypeInfo_for_K_57 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_57;
        tscc_proc_1_input_2_TypeInfo_for_V_58 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_58;
        tscc_proc_1_input_3_TypeInfo_for_A_59 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_59;
        tscc_proc_1_input_4_HeadVar__1_1 = next_value_of_tscc_proc_1_input_4_HeadVar__1_1;
        tscc_proc_1_input_5_KTest_2 = next_value_of_tscc_proc_1_input_5_KTest_2;
        tscc_proc_1_input_6_VPred_3 = next_value_of_tscc_proc_1_input_6_VPred_3;
        tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
        goto top_of_proc_1;
      }
    }
    else
      STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    tscc_output_1_STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_14;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_5 = tscc_output_1_STATE_VARIABLE_Acc_5;
  return;
}

void MR_CALL 
mercury__rtree__search_general_fold_subtree_6_p_1(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_17,
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_18,
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_19,
  MR_Box tscc_proc_2_input_4_K_7,
  MR_Word tscc_proc_2_input_5_T_8,
  MR_Word tscc_proc_2_input_6_KTest_9,
  MR_Word tscc_proc_2_input_7_VPred_10,
  MR_Box tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_5)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_57;
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_58;
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_59;
  MR_Word tscc_proc_1_input_4_HeadVar__1_1;
  MR_Word tscc_proc_1_input_5_KTest_2;
  MR_Word tscc_proc_1_input_6_VPred_3;
  MR_Box tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_5;

  // The code for TSCC PROC 2: pred rtree.search_general_fold_subtree/6-1.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.search_general_fold_2/5-1
  ;
  // proc 2 in TSCC: pred rtree.search_general_fold_subtree/6-1
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_57 = tscc_proc_1_input_1_TypeInfo_for_K_57;
    MR_Word TypeInfo_for_V_58 = tscc_proc_1_input_2_TypeInfo_for_V_58;
    MR_Word TypeInfo_for_A_59 = tscc_proc_1_input_3_TypeInfo_for_A_59;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_4_HeadVar__1_1;
    MR_Word KTest_2 = tscc_proc_1_input_5_KTest_2;
    MR_Word VPred_3 = tscc_proc_1_input_6_VPred_3;
    MR_Box STATE_VARIABLE_Acc_0_4 = tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
    MR_Box STATE_VARIABLE_Acc_5;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "search_general_fold_2: unexpected leaf node");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_16 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_18 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_22_22;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          mercury__rtree__search_general_fold_subtree_6_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K0_16, T0_17, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_22_22);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K1_18;
          next_value_of_tscc_proc_2_input_5_T_8 = T1_19;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_22_22;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_28 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_30 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_32 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_36_36;
          MR_Box STATE_VARIABLE_Acc_37_37;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          mercury__rtree__search_general_fold_subtree_6_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K0_28, T0_29, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_36_36);
          mercury__rtree__search_general_fold_subtree_6_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K1_30, T1_31, KTest_2, VPred_3, STATE_VARIABLE_Acc_36_36, &STATE_VARIABLE_Acc_37_37);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K2_32;
          next_value_of_tscc_proc_2_input_5_T_8 = T2_33;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_37_37;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_43 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_45 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_47 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_49 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_53_53;
          MR_Box STATE_VARIABLE_Acc_54_54;
          MR_Box STATE_VARIABLE_Acc_55_55;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box);
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box);
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          succeeded = func_0(((MR_Box) (KTest_2)), K0_43);
          if (succeeded)
          {
            MR_Box V_67;

            succeeded = ((MR_tag((MR_Word) T0_44)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_67 = (MR_hl_field(MR_mktag(0), T0_44, (MR_Integer) 0));
              {
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_1(((MR_Box) (VPred_3)), K0_43, V_67, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_53_53);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T0_44, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_53_53);
          }
          else
            STATE_VARIABLE_Acc_53_53 = STATE_VARIABLE_Acc_0_4;
          func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          succeeded = func_2(((MR_Box) (KTest_2)), K1_45);
          if (succeeded)
          {
            MR_Box V_77;

            succeeded = ((MR_tag((MR_Word) T1_46)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_77 = (MR_hl_field(MR_mktag(0), T1_46, (MR_Integer) 0));
              {
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_3(((MR_Box) (VPred_3)), K1_45, V_77, STATE_VARIABLE_Acc_53_53, &STATE_VARIABLE_Acc_54_54);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T1_46, KTest_2, VPred_3, STATE_VARIABLE_Acc_53_53, &STATE_VARIABLE_Acc_54_54);
          }
          else
            STATE_VARIABLE_Acc_54_54 = STATE_VARIABLE_Acc_53_53;
          func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          succeeded = func_4(((MR_Box) (KTest_2)), K2_47);
          if (succeeded)
          {
            MR_Box V_87;

            succeeded = ((MR_tag((MR_Word) T2_48)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_87 = (MR_hl_field(MR_mktag(0), T2_48, (MR_Integer) 0));
              {
                void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_5(((MR_Box) (VPred_3)), K2_47, V_87, STATE_VARIABLE_Acc_54_54, &STATE_VARIABLE_Acc_55_55);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_1(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T2_48, KTest_2, VPred_3, STATE_VARIABLE_Acc_54_54, &STATE_VARIABLE_Acc_55_55);
          }
          else
            STATE_VARIABLE_Acc_55_55 = STATE_VARIABLE_Acc_54_54;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K3_49;
          next_value_of_tscc_proc_2_input_5_T_8 = T3_50;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_55_55;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_5;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_17 = tscc_proc_2_input_1_TypeInfo_for_K_17;
    MR_Word TypeInfo_for_V_18 = tscc_proc_2_input_2_TypeInfo_for_V_18;
    MR_Word TypeInfo_for_A_19 = tscc_proc_2_input_3_TypeInfo_for_A_19;
    MR_Box K_7 = tscc_proc_2_input_4_K_7;
    MR_Word T_8 = tscc_proc_2_input_5_T_8;
    MR_Word KTest_9 = tscc_proc_2_input_6_KTest_9;
    MR_Word VPred_10 = tscc_proc_2_input_7_VPred_10;
    MR_Box STATE_VARIABLE_Acc_0_13 = tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
    MR_Box STATE_VARIABLE_Acc_14;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_6)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_9, (MR_Integer) 1))));

    succeeded = func_6(((MR_Box) (KTest_9)), K_7);
    if (succeeded)
    {
      MR_Box V_12;

      succeeded = ((MR_tag((MR_Word) T_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        V_12 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
        {
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_10, (MR_Integer) 1))));

          func_7(((MR_Box) (VPred_10)), K_7, V_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_14);
        }
      }
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_57 = TypeInfo_for_K_17;
        MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_58 = TypeInfo_for_V_18;
        MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_59 = TypeInfo_for_A_19;
        MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__1_1 = T_8;
        MR_Word next_value_of_tscc_proc_1_input_5_KTest_2 = KTest_9;
        MR_Word next_value_of_tscc_proc_1_input_6_VPred_3 = VPred_10;
        MR_Box next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_TypeInfo_for_K_57 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_57;
        tscc_proc_1_input_2_TypeInfo_for_V_58 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_58;
        tscc_proc_1_input_3_TypeInfo_for_A_59 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_59;
        tscc_proc_1_input_4_HeadVar__1_1 = next_value_of_tscc_proc_1_input_4_HeadVar__1_1;
        tscc_proc_1_input_5_KTest_2 = next_value_of_tscc_proc_1_input_5_KTest_2;
        tscc_proc_1_input_6_VPred_3 = next_value_of_tscc_proc_1_input_6_VPred_3;
        tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
        goto top_of_proc_1;
      }
    }
    else
      STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    tscc_output_1_STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_14;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_5 = tscc_output_1_STATE_VARIABLE_Acc_5;
  return;
}

void MR_CALL 
mercury__rtree__search_general_fold_5_p_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Word TypeInfo_for_A_28,
  MR_Word KTest_1,
  MR_Word VPred_2,
  MR_Word HeadVar__3_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__3_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_0_4;
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Box V_14 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_1, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (KTest_1)), K_13);
        if (succeeded)
        {
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_2, (MR_Integer) 1))));

          func_1(((MR_Box) (VPred_2)), K_13, V_14, STATE_VARIABLE_Acc_0_4, STATE_VARIABLE_Acc_5);
        }
        else
          *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_0_4;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

        mercury__rtree__search_general_fold_2_5_p_0(TypeInfo_for_K_26, TypeInfo_for_V_27, TypeInfo_for_A_28, T_21, KTest_1, VPred_2, STATE_VARIABLE_Acc_0_4, STATE_VARIABLE_Acc_5);
      }
      break;
  }
}

void MR_CALL 
mercury__rtree__search_general_fold_2_5_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_57,
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_58,
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_59,
  MR_Word tscc_proc_1_input_4_HeadVar__1_1,
  MR_Word tscc_proc_1_input_5_KTest_2,
  MR_Word tscc_proc_1_input_6_VPred_3,
  MR_Box tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_5)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_17;
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_18;
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_19;
  MR_Box tscc_proc_2_input_4_K_7;
  MR_Word tscc_proc_2_input_5_T_8;
  MR_Word tscc_proc_2_input_6_KTest_9;
  MR_Word tscc_proc_2_input_7_VPred_10;
  MR_Box tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_5;

  // The code for TSCC PROC 1: pred rtree.search_general_fold_2/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.search_general_fold_2/5-0
  ;
  // proc 2 in TSCC: pred rtree.search_general_fold_subtree/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_57 = tscc_proc_1_input_1_TypeInfo_for_K_57;
    MR_Word TypeInfo_for_V_58 = tscc_proc_1_input_2_TypeInfo_for_V_58;
    MR_Word TypeInfo_for_A_59 = tscc_proc_1_input_3_TypeInfo_for_A_59;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_4_HeadVar__1_1;
    MR_Word KTest_2 = tscc_proc_1_input_5_KTest_2;
    MR_Word VPred_3 = tscc_proc_1_input_6_VPred_3;
    MR_Box STATE_VARIABLE_Acc_0_4 = tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
    MR_Box STATE_VARIABLE_Acc_5;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "search_general_fold_2: unexpected leaf node");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_16 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_18 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_22_22;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          mercury__rtree__search_general_fold_subtree_6_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K0_16, T0_17, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_22_22);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K1_18;
          next_value_of_tscc_proc_2_input_5_T_8 = T1_19;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_22_22;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_28 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_30 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_32 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_36_36;
          MR_Box STATE_VARIABLE_Acc_37_37;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          mercury__rtree__search_general_fold_subtree_6_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K0_28, T0_29, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_36_36);
          mercury__rtree__search_general_fold_subtree_6_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K1_30, T1_31, KTest_2, VPred_3, STATE_VARIABLE_Acc_36_36, &STATE_VARIABLE_Acc_37_37);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K2_32;
          next_value_of_tscc_proc_2_input_5_T_8 = T2_33;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_37_37;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_43 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_45 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_47 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_49 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_53_53;
          MR_Box STATE_VARIABLE_Acc_54_54;
          MR_Box STATE_VARIABLE_Acc_55_55;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box);
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box);
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          succeeded = func_0(((MR_Box) (KTest_2)), K0_43);
          if (succeeded)
          {
            MR_Box V_67;

            succeeded = ((MR_tag((MR_Word) T0_44)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_67 = (MR_hl_field(MR_mktag(0), T0_44, (MR_Integer) 0));
              {
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_1(((MR_Box) (VPred_3)), K0_43, V_67, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_53_53);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T0_44, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_53_53);
          }
          else
            STATE_VARIABLE_Acc_53_53 = STATE_VARIABLE_Acc_0_4;
          func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          succeeded = func_2(((MR_Box) (KTest_2)), K1_45);
          if (succeeded)
          {
            MR_Box V_77;

            succeeded = ((MR_tag((MR_Word) T1_46)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_77 = (MR_hl_field(MR_mktag(0), T1_46, (MR_Integer) 0));
              {
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_3(((MR_Box) (VPred_3)), K1_45, V_77, STATE_VARIABLE_Acc_53_53, &STATE_VARIABLE_Acc_54_54);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T1_46, KTest_2, VPred_3, STATE_VARIABLE_Acc_53_53, &STATE_VARIABLE_Acc_54_54);
          }
          else
            STATE_VARIABLE_Acc_54_54 = STATE_VARIABLE_Acc_53_53;
          func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          succeeded = func_4(((MR_Box) (KTest_2)), K2_47);
          if (succeeded)
          {
            MR_Box V_87;

            succeeded = ((MR_tag((MR_Word) T2_48)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_87 = (MR_hl_field(MR_mktag(0), T2_48, (MR_Integer) 0));
              {
                void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_5(((MR_Box) (VPred_3)), K2_47, V_87, STATE_VARIABLE_Acc_54_54, &STATE_VARIABLE_Acc_55_55);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T2_48, KTest_2, VPred_3, STATE_VARIABLE_Acc_54_54, &STATE_VARIABLE_Acc_55_55);
          }
          else
            STATE_VARIABLE_Acc_55_55 = STATE_VARIABLE_Acc_54_54;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K3_49;
          next_value_of_tscc_proc_2_input_5_T_8 = T3_50;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_55_55;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_5;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_17 = tscc_proc_2_input_1_TypeInfo_for_K_17;
    MR_Word TypeInfo_for_V_18 = tscc_proc_2_input_2_TypeInfo_for_V_18;
    MR_Word TypeInfo_for_A_19 = tscc_proc_2_input_3_TypeInfo_for_A_19;
    MR_Box K_7 = tscc_proc_2_input_4_K_7;
    MR_Word T_8 = tscc_proc_2_input_5_T_8;
    MR_Word KTest_9 = tscc_proc_2_input_6_KTest_9;
    MR_Word VPred_10 = tscc_proc_2_input_7_VPred_10;
    MR_Box STATE_VARIABLE_Acc_0_13 = tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
    MR_Box STATE_VARIABLE_Acc_14;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_6)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_9, (MR_Integer) 1))));

    succeeded = func_6(((MR_Box) (KTest_9)), K_7);
    if (succeeded)
    {
      MR_Box V_12;

      succeeded = ((MR_tag((MR_Word) T_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        V_12 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
        {
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_10, (MR_Integer) 1))));

          func_7(((MR_Box) (VPred_10)), K_7, V_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_14);
        }
      }
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_57 = TypeInfo_for_K_17;
        MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_58 = TypeInfo_for_V_18;
        MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_59 = TypeInfo_for_A_19;
        MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__1_1 = T_8;
        MR_Word next_value_of_tscc_proc_1_input_5_KTest_2 = KTest_9;
        MR_Word next_value_of_tscc_proc_1_input_6_VPred_3 = VPred_10;
        MR_Box next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_TypeInfo_for_K_57 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_57;
        tscc_proc_1_input_2_TypeInfo_for_V_58 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_58;
        tscc_proc_1_input_3_TypeInfo_for_A_59 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_59;
        tscc_proc_1_input_4_HeadVar__1_1 = next_value_of_tscc_proc_1_input_4_HeadVar__1_1;
        tscc_proc_1_input_5_KTest_2 = next_value_of_tscc_proc_1_input_5_KTest_2;
        tscc_proc_1_input_6_VPred_3 = next_value_of_tscc_proc_1_input_6_VPred_3;
        tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
        goto top_of_proc_1;
      }
    }
    else
      STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    tscc_output_1_STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_14;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_5 = tscc_output_1_STATE_VARIABLE_Acc_5;
  return;
}

void MR_CALL 
mercury__rtree__search_general_fold_subtree_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_17,
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_18,
  MR_Word tscc_proc_2_input_3_TypeInfo_for_A_19,
  MR_Box tscc_proc_2_input_4_K_7,
  MR_Word tscc_proc_2_input_5_T_8,
  MR_Word tscc_proc_2_input_6_KTest_9,
  MR_Word tscc_proc_2_input_7_VPred_10,
  MR_Box tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13,
  MR_Box * tscc_output_ptr_1_STATE_VARIABLE_Acc_5)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_57;
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_58;
  MR_Word tscc_proc_1_input_3_TypeInfo_for_A_59;
  MR_Word tscc_proc_1_input_4_HeadVar__1_1;
  MR_Word tscc_proc_1_input_5_KTest_2;
  MR_Word tscc_proc_1_input_6_VPred_3;
  MR_Box tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
  MR_Box tscc_output_1_STATE_VARIABLE_Acc_5;

  // The code for TSCC PROC 2: pred rtree.search_general_fold_subtree/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.search_general_fold_2/5-0
  ;
  // proc 2 in TSCC: pred rtree.search_general_fold_subtree/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_57 = tscc_proc_1_input_1_TypeInfo_for_K_57;
    MR_Word TypeInfo_for_V_58 = tscc_proc_1_input_2_TypeInfo_for_V_58;
    MR_Word TypeInfo_for_A_59 = tscc_proc_1_input_3_TypeInfo_for_A_59;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_4_HeadVar__1_1;
    MR_Word KTest_2 = tscc_proc_1_input_5_KTest_2;
    MR_Word VPred_3 = tscc_proc_1_input_6_VPred_3;
    MR_Box STATE_VARIABLE_Acc_0_4 = tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
    MR_Box STATE_VARIABLE_Acc_5;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "search_general_fold_2: unexpected leaf node");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_16 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_18 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_22_22;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          mercury__rtree__search_general_fold_subtree_6_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K0_16, T0_17, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_22_22);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K1_18;
          next_value_of_tscc_proc_2_input_5_T_8 = T1_19;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_22_22;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_28 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_30 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_32 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box STATE_VARIABLE_Acc_36_36;
          MR_Box STATE_VARIABLE_Acc_37_37;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          mercury__rtree__search_general_fold_subtree_6_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K0_28, T0_29, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_36_36);
          mercury__rtree__search_general_fold_subtree_6_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, K1_30, T1_31, KTest_2, VPred_3, STATE_VARIABLE_Acc_36_36, &STATE_VARIABLE_Acc_37_37);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K2_32;
          next_value_of_tscc_proc_2_input_5_T_8 = T2_33;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_37_37;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_43 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_45 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_47 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_49 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Box STATE_VARIABLE_Acc_53_53;
          MR_Box STATE_VARIABLE_Acc_54_54;
          MR_Box STATE_VARIABLE_Acc_55_55;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box);
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box);
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          MR_Box next_value_of_tscc_proc_2_input_4_K_7;
          MR_Word next_value_of_tscc_proc_2_input_5_T_8;
          MR_Word next_value_of_tscc_proc_2_input_6_KTest_9;
          MR_Word next_value_of_tscc_proc_2_input_7_VPred_10;
          MR_Box next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;

          succeeded = func_0(((MR_Box) (KTest_2)), K0_43);
          if (succeeded)
          {
            MR_Box V_67;

            succeeded = ((MR_tag((MR_Word) T0_44)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_67 = (MR_hl_field(MR_mktag(0), T0_44, (MR_Integer) 0));
              {
                void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_1(((MR_Box) (VPred_3)), K0_43, V_67, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_53_53);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T0_44, KTest_2, VPred_3, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_53_53);
          }
          else
            STATE_VARIABLE_Acc_53_53 = STATE_VARIABLE_Acc_0_4;
          func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          succeeded = func_2(((MR_Box) (KTest_2)), K1_45);
          if (succeeded)
          {
            MR_Box V_77;

            succeeded = ((MR_tag((MR_Word) T1_46)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_77 = (MR_hl_field(MR_mktag(0), T1_46, (MR_Integer) 0));
              {
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_3(((MR_Box) (VPred_3)), K1_45, V_77, STATE_VARIABLE_Acc_53_53, &STATE_VARIABLE_Acc_54_54);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T1_46, KTest_2, VPred_3, STATE_VARIABLE_Acc_53_53, &STATE_VARIABLE_Acc_54_54);
          }
          else
            STATE_VARIABLE_Acc_54_54 = STATE_VARIABLE_Acc_53_53;
          func_4 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_2, (MR_Integer) 1))));
          succeeded = func_4(((MR_Box) (KTest_2)), K2_47);
          if (succeeded)
          {
            MR_Box V_87;

            succeeded = ((MR_tag((MR_Word) T2_48)) == (MR_Integer) 0);
            if (succeeded)
            {
              V_87 = (MR_hl_field(MR_mktag(0), T2_48, (MR_Integer) 0));
              {
                void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_3, (MR_Integer) 1))));

                func_5(((MR_Box) (VPred_3)), K2_47, V_87, STATE_VARIABLE_Acc_54_54, &STATE_VARIABLE_Acc_55_55);
              }
            }
            else
              mercury__rtree__search_general_fold_2_5_p_0(TypeInfo_for_K_57, TypeInfo_for_V_58, TypeInfo_for_A_59, T2_48, KTest_2, VPred_3, STATE_VARIABLE_Acc_54_54, &STATE_VARIABLE_Acc_55_55);
          }
          else
            STATE_VARIABLE_Acc_55_55 = STATE_VARIABLE_Acc_54_54;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17 = TypeInfo_for_K_57;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18 = TypeInfo_for_V_58;
          next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19 = TypeInfo_for_A_59;
          next_value_of_tscc_proc_2_input_4_K_7 = K3_49;
          next_value_of_tscc_proc_2_input_5_T_8 = T3_50;
          next_value_of_tscc_proc_2_input_6_KTest_9 = KTest_2;
          next_value_of_tscc_proc_2_input_7_VPred_10 = VPred_3;
          next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_55_55;
          tscc_proc_2_input_1_TypeInfo_for_K_17 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_17;
          tscc_proc_2_input_2_TypeInfo_for_V_18 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_18;
          tscc_proc_2_input_3_TypeInfo_for_A_19 = next_value_of_tscc_proc_2_input_3_TypeInfo_for_A_19;
          tscc_proc_2_input_4_K_7 = next_value_of_tscc_proc_2_input_4_K_7;
          tscc_proc_2_input_5_T_8 = next_value_of_tscc_proc_2_input_5_T_8;
          tscc_proc_2_input_6_KTest_9 = next_value_of_tscc_proc_2_input_6_KTest_9;
          tscc_proc_2_input_7_VPred_10 = next_value_of_tscc_proc_2_input_7_VPred_10;
          tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13 = next_value_of_tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_5;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_17 = tscc_proc_2_input_1_TypeInfo_for_K_17;
    MR_Word TypeInfo_for_V_18 = tscc_proc_2_input_2_TypeInfo_for_V_18;
    MR_Word TypeInfo_for_A_19 = tscc_proc_2_input_3_TypeInfo_for_A_19;
    MR_Box K_7 = tscc_proc_2_input_4_K_7;
    MR_Word T_8 = tscc_proc_2_input_5_T_8;
    MR_Word KTest_9 = tscc_proc_2_input_6_KTest_9;
    MR_Word VPred_10 = tscc_proc_2_input_7_VPred_10;
    MR_Box STATE_VARIABLE_Acc_0_13 = tscc_proc_2_input_8_STATE_VARIABLE_Acc_0_13;
    MR_Box STATE_VARIABLE_Acc_14;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_6)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KTest_9, (MR_Integer) 1))));

    succeeded = func_6(((MR_Box) (KTest_9)), K_7);
    if (succeeded)
    {
      MR_Box V_12;

      succeeded = ((MR_tag((MR_Word) T_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        V_12 = (MR_hl_field(MR_mktag(0), T_8, (MR_Integer) 0));
        {
          void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), VPred_10, (MR_Integer) 1))));

          func_7(((MR_Box) (VPred_10)), K_7, V_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_14);
        }
      }
      else
      {
        MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_57 = TypeInfo_for_K_17;
        MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_58 = TypeInfo_for_V_18;
        MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_59 = TypeInfo_for_A_19;
        MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__1_1 = T_8;
        MR_Word next_value_of_tscc_proc_1_input_5_KTest_2 = KTest_9;
        MR_Word next_value_of_tscc_proc_1_input_6_VPred_3 = VPred_10;
        MR_Box next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_0_13;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_TypeInfo_for_K_57 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_57;
        tscc_proc_1_input_2_TypeInfo_for_V_58 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_58;
        tscc_proc_1_input_3_TypeInfo_for_A_59 = next_value_of_tscc_proc_1_input_3_TypeInfo_for_A_59;
        tscc_proc_1_input_4_HeadVar__1_1 = next_value_of_tscc_proc_1_input_4_HeadVar__1_1;
        tscc_proc_1_input_5_KTest_2 = next_value_of_tscc_proc_1_input_5_KTest_2;
        tscc_proc_1_input_6_VPred_3 = next_value_of_tscc_proc_1_input_6_VPred_3;
        tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_Acc_0_4;
        goto top_of_proc_1;
      }
    }
    else
      STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    tscc_output_1_STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_14;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Acc_5 = tscc_output_1_STATE_VARIABLE_Acc_5;
  return;
}

MR_bool MR_CALL 
mercury__rtree__search_first_6_p_0(
  MR_Word TypeInfo_for_K_20,
  MR_Word TypeInfo_for_L_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word P_1,
  MR_Word C_2,
  MR_Word HeadVar__3_3,
  MR_Box L_4,
  MR_Box * HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
  {
    MR_Box K0_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
    MR_Box Var_13;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *);
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

    *HeadVar__5_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
    succeeded = func_0(((MR_Box) (P_1)), K0_9, &Var_13);
    if (succeeded)
    {
      Var_27 = (MR_Integer) 1;
      mercury__builtin__compare_3_p_0(TypeInfo_for_L_21, &Var_28, Var_13, L_4);
      succeeded = (Var_27 == Var_28);
      if (succeeded)
      {
        func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), C_2, (MR_Integer) 1))));
        succeeded = func_1(((MR_Box) (C_2)), *HeadVar__5_5, HeadVar__6_6);
        if (succeeded)
        {
          Var_33 = (MR_Integer) 1;
          mercury__builtin__compare_3_p_0(TypeInfo_for_L_21, &Var_34, *HeadVar__6_6, L_4);
          succeeded = (Var_33 == Var_34);
        }
      }
    }
  }
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2))
  {
    MR_Word T_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

    succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_20, TypeInfo_for_V_22, TypeInfo_for_L_21, T_16, P_1, C_2, L_4, HeadVar__5_5, HeadVar__6_6);
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__search_first_2_try_first_from_four_12_p_0(
  MR_Word TypeInfo_for_E_27,
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Box E1_13,
  MR_Box E2_14,
  MR_Box E3_15,
  MR_Word T0_16,
  MR_Word T1_17,
  MR_Word T2_18,
  MR_Word T3_19,
  MR_Word P_20,
  MR_Word C_21,
  MR_Box L_22,
  MR_Box * V_23,
  MR_Box * E_24)
{
  MR_bool succeeded;
  MR_Box V0_25;
  MR_Box E0_26;

  succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_28, TypeInfo_for_V_29, TypeInfo_for_E_27, T0_16, P_20, C_21, L_22, &V0_25, &E0_26);
  if (succeeded)
  {
    MR_Word R_42;

    R_42 = mercury__rtree__minimum_of_four_4_f_0(TypeInfo_for_E_27, E0_26, E1_13, E2_14, E3_15);
    switch (R_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *V_23 = V0_25;
          *E_24 = E0_26;
        }
        break;
      case (MR_Integer) 3:
        mercury__rtree__search_first_2_better_solution_three_11_p_0(TypeInfo_for_V_29, TypeInfo_for_E_27, TypeInfo_for_K_28, V0_25, E0_26, E1_13, E2_14, T3_19, T1_17, T2_18, P_20, C_21, V_23, E_24);
        break;
      case (MR_Integer) 1:
        mercury__rtree__search_first_2_better_solution_three_11_p_0(TypeInfo_for_V_29, TypeInfo_for_E_27, TypeInfo_for_K_28, V0_25, E0_26, E2_14, E3_15, T1_17, T2_18, T3_19, P_20, C_21, V_23, E_24);
        break;
      case (MR_Integer) 2:
        mercury__rtree__search_first_2_better_solution_three_11_p_0(TypeInfo_for_V_29, TypeInfo_for_E_27, TypeInfo_for_K_28, V0_25, E0_26, E1_13, E3_15, T2_18, T1_17, T3_19, P_20, C_21, V_23, E_24);
        break;
    }
    succeeded = MR_TRUE;
  }
  else
    succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(TypeInfo_for_E_27, TypeInfo_for_K_28, TypeInfo_for_V_29, E1_13, E2_14, E3_15, T1_17, T2_18, T3_19, P_20, C_21, L_22, V_23, E_24);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__search_first_2_four_choices_13_p_0(
  MR_Word TypeInfo_for_E_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word TypeInfo_for_V_30,
  MR_Box E0_14,
  MR_Box E1_15,
  MR_Box E2_16,
  MR_Box E3_17,
  MR_Word T0_18,
  MR_Word T1_19,
  MR_Word T2_20,
  MR_Word T3_21,
  MR_Word P_22,
  MR_Word C_23,
  MR_Box L_24,
  MR_Box * V_25,
  MR_Box * E_26)
{
  MR_bool succeeded;
  MR_Word R_27;
  MR_Word Min0_36;
  MR_Box MinItem0_37;
  MR_Word Min1_38;
  MR_Box MinItem_39;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;

  mercury__builtin__compare_3_p_0(TypeInfo_for_E_28, &Var_43, E0_14, E1_15);
  succeeded = ((MR_Integer) 1 == Var_43);
  if (succeeded)
  {
    Min0_36 = (MR_Integer) 0;
    MinItem0_37 = E0_14;
  }
  else
  {
    Min0_36 = (MR_Integer) 1;
    MinItem0_37 = E1_15;
  }
  mercury__builtin__compare_3_p_0(TypeInfo_for_E_28, &Var_44, MinItem0_37, E2_16);
  succeeded = ((MR_Integer) 1 == Var_44);
  if (succeeded)
  {
    Min1_38 = Min0_36;
    MinItem_39 = MinItem0_37;
  }
  else
  {
    Min1_38 = (MR_Integer) 2;
    MinItem_39 = E2_16;
  }
  mercury__builtin__compare_3_p_0(TypeInfo_for_E_28, &Var_45, MinItem_39, E3_17);
  succeeded = ((MR_Integer) 1 == Var_45);
  if (succeeded)
    R_27 = Min1_38;
  else
    R_27 = (MR_Integer) 3;
  switch (R_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box V0_58;
        MR_Box E0_59;

        succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_E_28, T0_18, P_22, C_23, L_24, &V0_58, &E0_59);
        if (succeeded)
        {
          mercury__rtree__search_first_2_find_better_solution_three_12_p_0(TypeInfo_for_V_30, TypeInfo_for_E_28, TypeInfo_for_K_29, V0_58, E0_59, E1_15, E2_16, E3_17, T1_19, T2_20, T3_21, P_22, C_23, V_25, E_26);
          succeeded = MR_TRUE;
        }
        else
          succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(TypeInfo_for_E_28, TypeInfo_for_K_29, TypeInfo_for_V_30, E1_15, E2_16, E3_17, T1_19, T2_20, T3_21, P_22, C_23, L_24, V_25, E_26);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box V0_72;
        MR_Box E0_73;

        succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_29, TypeInfo_for_V_30, TypeInfo_for_E_28, T3_21, P_22, C_23, L_24, &V0_72, &E0_73);
        if (succeeded)
        {
          mercury__rtree__search_first_2_find_better_solution_three_12_p_0(TypeInfo_for_V_30, TypeInfo_for_E_28, TypeInfo_for_K_29, V0_72, E0_73, E0_14, E1_15, E2_16, T0_18, T1_19, T2_20, P_22, C_23, V_25, E_26);
          succeeded = MR_TRUE;
        }
        else
          succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(TypeInfo_for_E_28, TypeInfo_for_K_29, TypeInfo_for_V_30, E0_14, E1_15, E2_16, T0_18, T1_19, T2_20, P_22, C_23, L_24, V_25, E_26);
      }
      break;
    case (MR_Integer) 1:
      succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(TypeInfo_for_E_28, TypeInfo_for_K_29, TypeInfo_for_V_30, E0_14, E2_16, E3_17, T1_19, T0_18, T2_20, T3_21, P_22, C_23, L_24, V_25, E_26);
      break;
    case (MR_Integer) 2:
      succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(TypeInfo_for_E_28, TypeInfo_for_K_29, TypeInfo_for_V_30, E0_14, E1_15, E3_17, T2_20, T0_18, T1_19, T3_21, P_22, C_23, L_24, V_25, E_26);
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__search_first_2_three_choices_11_p_0(
  MR_Word TypeInfo_for_E_24,
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Box E0_12,
  MR_Box E1_13,
  MR_Box E2_14,
  MR_Word T0_15,
  MR_Word T1_16,
  MR_Word T2_17,
  MR_Word P_18,
  MR_Word C_19,
  MR_Box L_20,
  MR_Box * V_21,
  MR_Box * E_22)
{
  MR_bool succeeded;
  MR_Word R_23;
  MR_Word Var_33;

  mercury__builtin__compare_3_p_0(TypeInfo_for_E_24, &Var_33, E0_12, E1_13);
  succeeded = ((MR_Integer) 1 == Var_33);
  if (succeeded)
  {
    MR_Word Var_34;

    mercury__builtin__compare_3_p_0(TypeInfo_for_E_24, &Var_34, E0_12, E2_14);
    succeeded = ((MR_Integer) 1 == Var_34);
    if (succeeded)
      R_23 = (MR_Integer) 0;
    else
      R_23 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_35;

    mercury__builtin__compare_3_p_0(TypeInfo_for_E_24, &Var_35, E1_13, E2_14);
    succeeded = ((MR_Integer) 1 == Var_35);
    if (succeeded)
      R_23 = (MR_Integer) 1;
    else
      R_23 = (MR_Integer) 2;
  }
  switch (R_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box V0_46;
        MR_Box E0_47;

        succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_E_24, T0_15, P_18, C_19, L_20, &V0_46, &E0_47);
        if (succeeded)
        {
          mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_24, TypeInfo_for_K_25, V0_46, E0_47, E1_13, E2_14, T1_16, T2_17, P_18, C_19, V_21, E_22);
          succeeded = MR_TRUE;
        }
        else
          succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_24, TypeInfo_for_K_25, TypeInfo_for_V_26, E1_13, E2_14, T1_16, T2_17, P_18, C_19, L_20, V_21, E_22);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box V0_58;
        MR_Box E0_59;

        succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_E_24, T1_16, P_18, C_19, L_20, &V0_58, &E0_59);
        if (succeeded)
        {
          mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_24, TypeInfo_for_K_25, V0_58, E0_59, E0_12, E2_14, T0_15, T2_17, P_18, C_19, V_21, E_22);
          succeeded = MR_TRUE;
        }
        else
          succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_24, TypeInfo_for_K_25, TypeInfo_for_V_26, E0_12, E2_14, T0_15, T2_17, P_18, C_19, L_20, V_21, E_22);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box V0_70;
        MR_Box E0_71;

        succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_E_24, T2_17, P_18, C_19, L_20, &V0_70, &E0_71);
        if (succeeded)
        {
          mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_24, TypeInfo_for_K_25, V0_70, E0_71, E0_12, E1_13, T0_15, T1_16, P_18, C_19, V_21, E_22);
          succeeded = MR_TRUE;
        }
        else
          succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_24, TypeInfo_for_K_25, TypeInfo_for_V_26, E0_12, E1_13, T0_15, T1_16, P_18, C_19, L_20, V_21, E_22);
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__search_first_2_two_choices_9_p_0(
  MR_Word TypeInfo_for_E_20,
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Box E0_10,
  MR_Box E1_11,
  MR_Word T0_12,
  MR_Word T1_13,
  MR_Word P_14,
  MR_Word C_15,
  MR_Box L_16,
  MR_Box * V_17,
  MR_Box * E_18)
{
  MR_bool succeeded;
  MR_Word Var_23;

  mercury__builtin__compare_3_p_0(TypeInfo_for_E_20, &Var_23, E0_10, E1_11);
  succeeded = ((MR_Integer) 1 == Var_23);
  if (succeeded)
  {
    MR_Box V0_32;
    MR_Box E0_33;

    succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_E_20, T0_12, P_14, C_15, L_16, &V0_32, &E0_33);
    if (succeeded)
    {
      mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_22, TypeInfo_for_E_20, TypeInfo_for_K_21, V0_32, E0_33, E1_11, T1_13, P_14, C_15, V_17, E_18);
      succeeded = MR_TRUE;
    }
    else
      succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_E_20, T1_13, P_14, C_15, L_16, V_17, E_18);
  }
  else
  {
    MR_Box V0_42;
    MR_Box E0_43;

    succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_E_20, T1_13, P_14, C_15, L_16, &V0_42, &E0_43);
    if (succeeded)
    {
      mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_22, TypeInfo_for_E_20, TypeInfo_for_K_21, V0_42, E0_43, E0_10, T0_12, P_14, C_15, V_17, E_18);
      succeeded = MR_TRUE;
    }
    else
      succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, TypeInfo_for_E_20, T0_12, P_14, C_15, L_16, V_17, E_18);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__search_first_2_6_p_0(
  MR_Word TypeInfo_for_K_76,
  MR_Word TypeInfo_for_V_77,
  MR_Word TypeInfo_for_E_78,
  MR_Word HeadVar__1_1,
  MR_Word P_2,
  MR_Word C_3,
  MR_Box L_4,
  MR_Box * V_5,
  MR_Box * E_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *V_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
          succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_V_77, TypeInfo_for_E_78, *V_5, C_3, L_4, E_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_12 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_14 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box E0_21;

          succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K0_12, P_2, L_4, &E0_21);
          if (succeeded)
          {
            MR_Box E1_22;

            succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K1_14, P_2, L_4, &E1_22);
            if (succeeded)
              succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_21, E1_22, T0_13, T1_15, P_2, C_3, L_4, V_5, E_6);
            else
            {
              MR_Word next_value_of_HeadVar__1_1 = T0_13;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
          }
          else
          {
            MR_Box Var_23;
            MR_Word next_value_of_HeadVar__1_1;

            succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K1_14, P_2, L_4, &Var_23);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = T1_15;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_24 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_26 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_28 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box E0_35;

          succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K0_24, P_2, L_4, &E0_35);
          if (succeeded)
          {
            MR_Box E1_36;

            succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K1_26, P_2, L_4, &E1_36);
            if (succeeded)
            {
              MR_Box E2_37;

              succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K2_28, P_2, L_4, &E2_37);
              if (succeeded)
                succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_35, E1_36, E2_37, T0_25, T1_27, T2_29, P_2, C_3, L_4, V_5, E_6);
              else
                succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_35, E1_36, T0_25, T1_27, P_2, C_3, L_4, V_5, E_6);
            }
            else
            {
              MR_Box E2_39;

              succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K2_28, P_2, L_4, &E2_39);
              if (succeeded)
                succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_35, E2_39, T0_25, T2_29, P_2, C_3, L_4, V_5, E_6);
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = T0_25;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
          }
          else
          {
            MR_Box E1_41;

            succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K1_26, P_2, L_4, &E1_41);
            if (succeeded)
            {
              MR_Box E2_40;

              succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K2_28, P_2, L_4, &E2_40);
              if (succeeded)
                succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E1_41, E2_40, T1_27, T2_29, P_2, C_3, L_4, V_5, E_6);
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = T1_27;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            else
            {
              MR_Box Var_38;
              MR_Word next_value_of_HeadVar__1_1;

              succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K2_28, P_2, L_4, &Var_38);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = T2_29;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_43 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_45 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_47 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_49 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Box E0_56;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_2, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_2)), K0_43, &E0_56);
          if (succeeded)
          {
            Var_83 = (MR_Integer) 1;
            mercury__builtin__compare_3_p_0(TypeInfo_for_E_78, &Var_84, E0_56, L_4);
            succeeded = (Var_83 == Var_84);
          }
          if (succeeded)
          {
            MR_Box E1_57;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_2, (MR_Integer) 1))));

            succeeded = func_1(((MR_Box) (P_2)), K1_45, &E1_57);
            if (succeeded)
            {
              Var_89 = (MR_Integer) 1;
              mercury__builtin__compare_3_p_0(TypeInfo_for_E_78, &Var_90, E1_57, L_4);
              succeeded = (Var_89 == Var_90);
            }
            if (succeeded)
            {
              MR_Box E2_58;

              succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K2_47, P_2, L_4, &E2_58);
              if (succeeded)
              {
                MR_Box E3_59;

                succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K3_49, P_2, L_4, &E3_59);
                if (succeeded)
                  succeeded = mercury__rtree__search_first_2_four_choices_13_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_56, E1_57, E2_58, E3_59, T0_44, T1_46, T2_48, T3_50, P_2, C_3, L_4, V_5, E_6);
                else
                  succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_56, E1_57, E2_58, T0_44, T1_46, T2_48, P_2, C_3, L_4, V_5, E_6);
              }
              else
              {
                MR_Box E3_61;

                succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K3_49, P_2, L_4, &E3_61);
                if (succeeded)
                  succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_56, E1_57, E3_61, T0_44, T1_46, T3_50, P_2, C_3, L_4, V_5, E_6);
                else
                  succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_56, E1_57, T0_44, T1_46, P_2, C_3, L_4, V_5, E_6);
              }
            }
            else
            {
              MR_Box E2_64;

              succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K2_47, P_2, L_4, &E2_64);
              if (succeeded)
              {
                MR_Box E3_62;

                succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K3_49, P_2, L_4, &E3_62);
                if (succeeded)
                  succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_56, E2_64, E3_62, T0_44, T2_48, T3_50, P_2, C_3, L_4, V_5, E_6);
                else
                  succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_56, E2_64, T0_44, T2_48, P_2, C_3, L_4, V_5, E_6);
              }
              else
              {
                MR_Box E3_63;

                succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K3_49, P_2, L_4, &E3_63);
                if (succeeded)
                  succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E0_56, E3_63, T0_44, T3_50, P_2, C_3, L_4, V_5, E_6);
                else
                {
                  MR_Word next_value_of_HeadVar__1_1 = T0_44;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
            }
          }
          else
          {
            MR_Box E1_73;

            succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K1_45, P_2, L_4, &E1_73);
            if (succeeded)
            {
              MR_Box E2_68;

              succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K2_47, P_2, L_4, &E2_68);
              if (succeeded)
              {
                MR_Box E3_66;

                succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K3_49, P_2, L_4, &E3_66);
                if (succeeded)
                  succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E1_73, E2_68, E3_66, T1_46, T2_48, T3_50, P_2, C_3, L_4, V_5, E_6);
                else
                  succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E1_73, E2_68, T1_46, T2_48, P_2, C_3, L_4, V_5, E_6);
              }
              else
              {
                MR_Box E3_67;

                succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K3_49, P_2, L_4, &E3_67);
                if (succeeded)
                  succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E1_73, E3_67, T1_46, T3_50, P_2, C_3, L_4, V_5, E_6);
                else
                {
                  MR_Word next_value_of_HeadVar__1_1 = T1_46;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
            }
            else
            {
              MR_Box E2_71;

              succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K2_47, P_2, L_4, &E2_71);
              if (succeeded)
              {
                MR_Box E3_70;

                succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K3_49, P_2, L_4, &E3_70);
                if (succeeded)
                  succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(TypeInfo_for_E_78, TypeInfo_for_K_76, TypeInfo_for_V_77, E2_71, E3_70, T2_48, T3_50, P_2, C_3, L_4, V_5, E_6);
                else
                {
                  MR_Word next_value_of_HeadVar__1_1 = T2_48;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              else
              {
                MR_Box Var_60;
                MR_Word next_value_of_HeadVar__1_1;

                succeeded = mercury__rtree__maybe_limit_4_p_0(TypeInfo_for_K_76, TypeInfo_for_E_78, K3_49, P_2, L_4, &Var_60);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = T3_50;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
            }
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_three_12_p_0(
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_E_27,
  MR_Word TypeInfo_for_K_28,
  MR_Box VM_13,
  MR_Box EM_14,
  MR_Box E0_15,
  MR_Box E1_16,
  MR_Box E2_17,
  MR_Word T0_18,
  MR_Word T1_19,
  MR_Word T2_20,
  MR_Word P_21,
  MR_Word C_22,
  MR_Box * V_23,
  MR_Box * E_24)
{
  MR_bool succeeded;
  MR_Word R_25;
  MR_Word Min0_34;
  MR_Box MinItem0_35;
  MR_Word Min1_36;
  MR_Box MinItem_37;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;

  mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_41, EM_14, E0_15);
  succeeded = ((MR_Integer) 1 == Var_41);
  if (succeeded)
  {
    Min0_34 = (MR_Integer) 0;
    MinItem0_35 = EM_14;
  }
  else
  {
    Min0_34 = (MR_Integer) 1;
    MinItem0_35 = E0_15;
  }
  mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_42, MinItem0_35, E1_16);
  succeeded = ((MR_Integer) 1 == Var_42);
  if (succeeded)
  {
    Min1_36 = Min0_34;
    MinItem_37 = MinItem0_35;
  }
  else
  {
    Min1_36 = (MR_Integer) 2;
    MinItem_37 = E1_16;
  }
  mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_43, MinItem_37, E2_17);
  succeeded = ((MR_Integer) 1 == Var_43);
  if (succeeded)
    R_25 = Min1_36;
  else
    R_25 = (MR_Integer) 3;
  switch (R_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *V_23 = VM_13;
        *E_24 = EM_14;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box V0_55;
        MR_Box F0_56;

        succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_28, TypeInfo_for_V_26, TypeInfo_for_E_27, T2_20, P_21, C_22, EM_14, &V0_55, &F0_56);
        if (succeeded)
        {
          MR_Word Var_58;

          mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_58, EM_14, F0_56);
          succeeded = ((MR_Integer) 1 == Var_58);
          if (succeeded)
            mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_13, EM_14, E0_15, E1_16, T0_18, T1_19, P_21, C_22, V_23, E_24);
          else
            mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, V0_55, F0_56, E0_15, E1_16, T0_18, T1_19, P_21, C_22, V_23, E_24);
        }
        else
          mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_13, EM_14, E0_15, E1_16, T0_18, T1_19, P_21, C_22, V_23, E_24);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box V0_70;
        MR_Box F0_71;

        succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_28, TypeInfo_for_V_26, TypeInfo_for_E_27, T0_18, P_21, C_22, EM_14, &V0_70, &F0_71);
        if (succeeded)
        {
          MR_Word Var_73;

          mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_73, EM_14, F0_71);
          succeeded = ((MR_Integer) 1 == Var_73);
          if (succeeded)
            mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_13, EM_14, E1_16, E2_17, T1_19, T2_20, P_21, C_22, V_23, E_24);
          else
            mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, V0_70, F0_71, E1_16, E2_17, T1_19, T2_20, P_21, C_22, V_23, E_24);
        }
        else
          mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_13, EM_14, E1_16, E2_17, T1_19, T2_20, P_21, C_22, V_23, E_24);
      }
      break;
    case (MR_Integer) 2:
      mercury__rtree__search_first_2_better_solution_three_11_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_13, EM_14, E0_15, E2_17, T1_19, T0_18, T2_20, P_21, C_22, V_23, E_24);
      break;
  }
}

static void MR_CALL 
mercury__rtree__search_first_2_better_solution_three_11_p_0(
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_E_27,
  MR_Word TypeInfo_for_K_28,
  MR_Box VM_12,
  MR_Box EM_13,
  MR_Box E1_14,
  MR_Box E2_15,
  MR_Word T0_16,
  MR_Word T1_17,
  MR_Word T2_18,
  MR_Word P_19,
  MR_Word C_20,
  MR_Box * V_21,
  MR_Box * E_22)
{
  MR_bool succeeded;
  MR_Box V0_23;
  MR_Box F0_24;

  succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_28, TypeInfo_for_V_26, TypeInfo_for_E_27, T0_16, P_19, C_20, EM_13, &V0_23, &F0_24);
  if (succeeded)
  {
    MR_Word Var_29;

    mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_29, EM_13, F0_24);
    succeeded = ((MR_Integer) 1 == Var_29);
    if (succeeded)
    {
      MR_Word R_40;
      MR_Word Var_47;

      mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_47, EM_13, E1_14);
      succeeded = ((MR_Integer) 1 == Var_47);
      if (succeeded)
      {
        MR_Word Var_48;

        mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_48, EM_13, E2_15);
        succeeded = ((MR_Integer) 1 == Var_48);
        if (succeeded)
          R_40 = (MR_Integer) 0;
        else
          R_40 = (MR_Integer) 2;
      }
      else
      {
        MR_Word Var_49;

        mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_49, E1_14, E2_15);
        succeeded = ((MR_Integer) 1 == Var_49);
        if (succeeded)
          R_40 = (MR_Integer) 1;
        else
          R_40 = (MR_Integer) 2;
      }
      switch (R_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *V_21 = VM_12;
            *E_22 = EM_13;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box V0_59;
            MR_Box F0_60;

            succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_28, TypeInfo_for_V_26, TypeInfo_for_E_27, T1_17, P_19, C_20, EM_13, &V0_59, &F0_60);
            if (succeeded)
            {
              MR_Word Var_62;

              mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_62, EM_13, F0_60);
              succeeded = ((MR_Integer) 1 == Var_62);
              if (succeeded)
                mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_12, EM_13, E2_15, T2_18, P_19, C_20, V_21, E_22);
              else
                mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, V0_59, F0_60, E2_15, T2_18, P_19, C_20, V_21, E_22);
            }
            else
              mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_12, EM_13, E2_15, T2_18, P_19, C_20, V_21, E_22);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box V0_72;
            MR_Box F0_73;

            succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_28, TypeInfo_for_V_26, TypeInfo_for_E_27, T2_18, P_19, C_20, EM_13, &V0_72, &F0_73);
            if (succeeded)
            {
              MR_Word Var_75;

              mercury__builtin__compare_3_p_0(TypeInfo_for_E_27, &Var_75, EM_13, F0_73);
              succeeded = ((MR_Integer) 1 == Var_75);
              if (succeeded)
                mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_12, EM_13, E1_14, T1_17, P_19, C_20, V_21, E_22);
              else
                mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, V0_72, F0_73, E1_14, T1_17, P_19, C_20, V_21, E_22);
            }
            else
              mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_12, EM_13, E1_14, T1_17, P_19, C_20, V_21, E_22);
          }
          break;
      }
    }
    else
      mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, V0_23, F0_24, E1_14, E2_15, T1_17, T2_18, P_19, C_20, V_21, E_22);
  }
  else
    mercury__rtree__search_first_2_find_better_solution_two_10_p_0(TypeInfo_for_V_26, TypeInfo_for_E_27, TypeInfo_for_K_28, VM_12, EM_13, E1_14, E2_15, T1_17, T2_18, P_19, C_20, V_21, E_22);
}

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_two_10_p_0(
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeInfo_for_E_23,
  MR_Word TypeInfo_for_K_24,
  MR_Box VM_11,
  MR_Box EM_12,
  MR_Box E0_13,
  MR_Box E1_14,
  MR_Word T0_15,
  MR_Word T1_16,
  MR_Word P_17,
  MR_Word C_18,
  MR_Box * V_19,
  MR_Box * E_20)
{
  MR_bool succeeded;
  MR_Word R_21;
  MR_Word Var_31;

  mercury__builtin__compare_3_p_0(TypeInfo_for_E_23, &Var_31, EM_12, E0_13);
  succeeded = ((MR_Integer) 1 == Var_31);
  if (succeeded)
  {
    MR_Word Var_32;

    mercury__builtin__compare_3_p_0(TypeInfo_for_E_23, &Var_32, EM_12, E1_14);
    succeeded = ((MR_Integer) 1 == Var_32);
    if (succeeded)
      R_21 = (MR_Integer) 0;
    else
      R_21 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_33;

    mercury__builtin__compare_3_p_0(TypeInfo_for_E_23, &Var_33, E0_13, E1_14);
    succeeded = ((MR_Integer) 1 == Var_33);
    if (succeeded)
      R_21 = (MR_Integer) 1;
    else
      R_21 = (MR_Integer) 2;
  }
  switch (R_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *V_19 = VM_11;
        *E_20 = EM_12;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box V0_43;
        MR_Box F0_44;

        succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_24, TypeInfo_for_V_22, TypeInfo_for_E_23, T0_15, P_17, C_18, EM_12, &V0_43, &F0_44);
        if (succeeded)
        {
          MR_Word Var_46;

          mercury__builtin__compare_3_p_0(TypeInfo_for_E_23, &Var_46, EM_12, F0_44);
          succeeded = ((MR_Integer) 1 == Var_46);
          if (succeeded)
            mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_22, TypeInfo_for_E_23, TypeInfo_for_K_24, VM_11, EM_12, E1_14, T1_16, P_17, C_18, V_19, E_20);
          else
            mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_22, TypeInfo_for_E_23, TypeInfo_for_K_24, V0_43, F0_44, E1_14, T1_16, P_17, C_18, V_19, E_20);
        }
        else
          mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_22, TypeInfo_for_E_23, TypeInfo_for_K_24, VM_11, EM_12, E1_14, T1_16, P_17, C_18, V_19, E_20);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box V0_56;
        MR_Box F0_57;

        succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_24, TypeInfo_for_V_22, TypeInfo_for_E_23, T1_16, P_17, C_18, EM_12, &V0_56, &F0_57);
        if (succeeded)
        {
          MR_Word Var_59;

          mercury__builtin__compare_3_p_0(TypeInfo_for_E_23, &Var_59, EM_12, F0_57);
          succeeded = ((MR_Integer) 1 == Var_59);
          if (succeeded)
            mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_22, TypeInfo_for_E_23, TypeInfo_for_K_24, VM_11, EM_12, E0_13, T0_15, P_17, C_18, V_19, E_20);
          else
            mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_22, TypeInfo_for_E_23, TypeInfo_for_K_24, V0_56, F0_57, E0_13, T0_15, P_17, C_18, V_19, E_20);
        }
        else
          mercury__rtree__search_first_2_find_better_solution_one_8_p_0(TypeInfo_for_V_22, TypeInfo_for_E_23, TypeInfo_for_K_24, VM_11, EM_12, E0_13, T0_15, P_17, C_18, V_19, E_20);
      }
      break;
  }
}

static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_one_8_p_0(
  MR_Word TypeInfo_for_V_21,
  MR_Word TypeInfo_for_E_22,
  MR_Word TypeInfo_for_K_23,
  MR_Box VM_9,
  MR_Box EM_10,
  MR_Box E0_11,
  MR_Word T0_12,
  MR_Word P_13,
  MR_Word C_14,
  MR_Box * V_15,
  MR_Box * E_16)
{
  MR_bool succeeded;
  MR_Word Var_24;

  mercury__builtin__compare_3_p_0(TypeInfo_for_E_22, &Var_24, EM_10, E0_11);
  succeeded = ((MR_Integer) 1 == Var_24);
  if (succeeded)
  {
    *V_15 = VM_9;
    *E_16 = EM_10;
  }
  else
  {
    MR_Box V0_17;
    MR_Box F0_18;

    succeeded = mercury__rtree__search_first_2_6_p_0(TypeInfo_for_K_23, TypeInfo_for_V_21, TypeInfo_for_E_22, T0_12, P_13, C_14, EM_10, &V0_17, &F0_18);
    if (succeeded)
    {
      MR_Word Var_25;

      mercury__builtin__compare_3_p_0(TypeInfo_for_E_22, &Var_25, EM_10, F0_18);
      succeeded = ((MR_Integer) 1 == Var_25);
      if (succeeded)
      {
        *V_15 = VM_9;
        *E_16 = EM_10;
      }
      else
      {
        *V_15 = V0_17;
        *E_16 = F0_18;
      }
    }
    else
    {
      *V_15 = VM_9;
      *E_16 = EM_10;
    }
  }
}

static MR_Word MR_CALL 
mercury__rtree__minimum_of_four_4_f_0(
  MR_Word TypeInfo_for_T_18,
  MR_Box A_6,
  MR_Box B_7,
  MR_Box C_8,
  MR_Box D_9)
{
  MR_bool succeeded;
  MR_Word Min_10;
  MR_Word Min0_11;
  MR_Box MinItem0_12;
  MR_Word Min1_13;
  MR_Box MinItem_14;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  mercury__builtin__compare_3_p_0(TypeInfo_for_T_18, &Var_19, A_6, B_7);
  succeeded = ((MR_Integer) 1 == Var_19);
  if (succeeded)
  {
    Min0_11 = (MR_Integer) 0;
    MinItem0_12 = A_6;
  }
  else
  {
    Min0_11 = (MR_Integer) 1;
    MinItem0_12 = B_7;
  }
  mercury__builtin__compare_3_p_0(TypeInfo_for_T_18, &Var_20, MinItem0_12, C_8);
  succeeded = ((MR_Integer) 1 == Var_20);
  if (succeeded)
  {
    Min1_13 = Min0_11;
    MinItem_14 = MinItem0_12;
  }
  else
  {
    Min1_13 = (MR_Integer) 2;
    MinItem_14 = C_8;
  }
  mercury__builtin__compare_3_p_0(TypeInfo_for_T_18, &Var_21, MinItem_14, D_9);
  succeeded = ((MR_Integer) 1 == Var_21);
  if (succeeded)
    Min_10 = Min1_13;
  else
    Min_10 = (MR_Integer) 3;
  return Min_10;
}

MR_bool MR_CALL 
mercury__rtree__maybe_limit_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_E_11,
  MR_Box K_5,
  MR_Word P_6,
  MR_Box L_7,
  MR_Box * E_8)
{
  MR_bool succeeded;
  MR_Word Var_9;
  MR_Word Var_12;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));

  succeeded = func_0(((MR_Box) (P_6)), K_5, E_8);
  if (succeeded)
  {
    Var_9 = (MR_Integer) 1;
    mercury__builtin__compare_3_p_0(TypeInfo_for_E_11, &Var_12, *E_8, L_7);
    succeeded = (Var_9 == Var_12);
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__rtree__search_general_3_f_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;

  switch (MR_tag((MR_Word) HeadVar__3_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Box V_10 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box);

        succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_9);
        if (succeeded)
        {
          func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          succeeded = func_1(((MR_Box) (HeadVar__2_2)), V_10);
        }
        if (succeeded)
          {
            HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = V_10;
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        else
          HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

        mercury__rtree__search_general_2_5_p_0(TypeInfo_for_K_17, TypeInfo_for_V_18, T_14, HeadVar__1_1, HeadVar__2_2, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__4_4);
      }
      break;
  }
  return HeadVar__4_4;
}

void MR_CALL 
mercury__rtree__search_general_2_5_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_58,
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_59,
  MR_Word tscc_proc_1_input_3_HeadVar__1_1,
  MR_Word tscc_proc_1_input_4_KeyTest_2,
  MR_Word tscc_proc_1_input_5_ValueTest_3,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Values_5)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_15;
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_16;
  MR_Box tscc_proc_2_input_3_K_7;
  MR_Word tscc_proc_2_input_4_T_8;
  MR_Word tscc_proc_2_input_5_KeyTest_9;
  MR_Word tscc_proc_2_input_6_ValueTest_10;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;
  MR_Word tscc_output_1_STATE_VARIABLE_Values_5;

  // The code for TSCC PROC 1: pred rtree.search_general_2/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.search_general_2/5-0
  ;
  // proc 2 in TSCC: pred rtree.search_general_subtree/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_58 = tscc_proc_1_input_1_TypeInfo_for_K_58;
    MR_Word TypeInfo_for_V_59 = tscc_proc_1_input_2_TypeInfo_for_V_59;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_3_HeadVar__1_1;
    MR_Word KeyTest_2 = tscc_proc_1_input_4_KeyTest_2;
    MR_Word ValueTest_3 = tscc_proc_1_input_5_ValueTest_3;
    MR_Word STATE_VARIABLE_Values_0_4 = tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4;
    MR_Word STATE_VARIABLE_Values_5;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Value_6 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ValueTest_3, (MR_Integer) 1))));

          succeeded = func_4(((MR_Box) (ValueTest_3)), Value_6);
          if (succeeded)
            {
              STATE_VARIABLE_Values_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Values_5, 0) = Value_6;
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Values_5, 1) = ((MR_Box) (STATE_VARIABLE_Values_0_4));
            }
          else
            STATE_VARIABLE_Values_5 = STATE_VARIABLE_Values_0_4;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_17 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_19 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Values_23_23;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16;
          MR_Box next_value_of_tscc_proc_2_input_3_K_7;
          MR_Word next_value_of_tscc_proc_2_input_4_T_8;
          MR_Word next_value_of_tscc_proc_2_input_5_KeyTest_9;
          MR_Word next_value_of_tscc_proc_2_input_6_ValueTest_10;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;

          mercury__rtree__search_general_subtree_6_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, K0_17, T0_18, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_0_4, &STATE_VARIABLE_Values_23_23);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15 = TypeInfo_for_K_58;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16 = TypeInfo_for_V_59;
          next_value_of_tscc_proc_2_input_3_K_7 = K1_19;
          next_value_of_tscc_proc_2_input_4_T_8 = T1_20;
          next_value_of_tscc_proc_2_input_5_KeyTest_9 = KeyTest_2;
          next_value_of_tscc_proc_2_input_6_ValueTest_10 = ValueTest_3;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12 = STATE_VARIABLE_Values_23_23;
          tscc_proc_2_input_1_TypeInfo_for_K_15 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15;
          tscc_proc_2_input_2_TypeInfo_for_V_16 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16;
          tscc_proc_2_input_3_K_7 = next_value_of_tscc_proc_2_input_3_K_7;
          tscc_proc_2_input_4_T_8 = next_value_of_tscc_proc_2_input_4_T_8;
          tscc_proc_2_input_5_KeyTest_9 = next_value_of_tscc_proc_2_input_5_KeyTest_9;
          tscc_proc_2_input_6_ValueTest_10 = next_value_of_tscc_proc_2_input_6_ValueTest_10;
          tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_29 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_31 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_33 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Word STATE_VARIABLE_Values_37_37;
          MR_Word STATE_VARIABLE_Values_38_38;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16;
          MR_Box next_value_of_tscc_proc_2_input_3_K_7;
          MR_Word next_value_of_tscc_proc_2_input_4_T_8;
          MR_Word next_value_of_tscc_proc_2_input_5_KeyTest_9;
          MR_Word next_value_of_tscc_proc_2_input_6_ValueTest_10;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;

          mercury__rtree__search_general_subtree_6_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, K0_29, T0_30, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_0_4, &STATE_VARIABLE_Values_37_37);
          mercury__rtree__search_general_subtree_6_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, K1_31, T1_32, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_37_37, &STATE_VARIABLE_Values_38_38);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15 = TypeInfo_for_K_58;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16 = TypeInfo_for_V_59;
          next_value_of_tscc_proc_2_input_3_K_7 = K2_33;
          next_value_of_tscc_proc_2_input_4_T_8 = T2_34;
          next_value_of_tscc_proc_2_input_5_KeyTest_9 = KeyTest_2;
          next_value_of_tscc_proc_2_input_6_ValueTest_10 = ValueTest_3;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12 = STATE_VARIABLE_Values_38_38;
          tscc_proc_2_input_1_TypeInfo_for_K_15 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15;
          tscc_proc_2_input_2_TypeInfo_for_V_16 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16;
          tscc_proc_2_input_3_K_7 = next_value_of_tscc_proc_2_input_3_K_7;
          tscc_proc_2_input_4_T_8 = next_value_of_tscc_proc_2_input_4_T_8;
          tscc_proc_2_input_5_KeyTest_9 = next_value_of_tscc_proc_2_input_5_KeyTest_9;
          tscc_proc_2_input_6_ValueTest_10 = next_value_of_tscc_proc_2_input_6_ValueTest_10;
          tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_44 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_46 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_48 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_50 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Word STATE_VARIABLE_Values_54_54;
          MR_Word STATE_VARIABLE_Values_55_55;
          MR_Word STATE_VARIABLE_Values_56_56;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_2, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box);
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box);
          MR_bool MR_CALL (* func_3)(MR_Box, MR_Box);

          succeeded = func_0(((MR_Box) (KeyTest_2)), K0_44);
          if (succeeded)
            mercury__rtree__search_general_2_5_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, T0_45, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_0_4, &STATE_VARIABLE_Values_54_54);
          else
            STATE_VARIABLE_Values_54_54 = STATE_VARIABLE_Values_0_4;
          func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_2, (MR_Integer) 1))));
          succeeded = func_1(((MR_Box) (KeyTest_2)), K1_46);
          if (succeeded)
            mercury__rtree__search_general_2_5_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, T1_47, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_54_54, &STATE_VARIABLE_Values_55_55);
          else
            STATE_VARIABLE_Values_55_55 = STATE_VARIABLE_Values_54_54;
          func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_2, (MR_Integer) 1))));
          succeeded = func_2(((MR_Box) (KeyTest_2)), K2_48);
          if (succeeded)
            mercury__rtree__search_general_2_5_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, T2_49, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_55_55, &STATE_VARIABLE_Values_56_56);
          else
            STATE_VARIABLE_Values_56_56 = STATE_VARIABLE_Values_55_55;
          func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_2, (MR_Integer) 1))));
          succeeded = func_3(((MR_Box) (KeyTest_2)), K3_50);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_58 = TypeInfo_for_K_58;
            MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_59 = TypeInfo_for_V_59;
            MR_Word next_value_of_tscc_proc_1_input_3_HeadVar__1_1 = T3_51;
            MR_Word next_value_of_tscc_proc_1_input_4_KeyTest_2 = KeyTest_2;
            MR_Word next_value_of_tscc_proc_1_input_5_ValueTest_3 = ValueTest_3;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4 = STATE_VARIABLE_Values_56_56;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_TypeInfo_for_K_58 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_58;
            tscc_proc_1_input_2_TypeInfo_for_V_59 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_59;
            tscc_proc_1_input_3_HeadVar__1_1 = next_value_of_tscc_proc_1_input_3_HeadVar__1_1;
            tscc_proc_1_input_4_KeyTest_2 = next_value_of_tscc_proc_1_input_4_KeyTest_2;
            tscc_proc_1_input_5_ValueTest_3 = next_value_of_tscc_proc_1_input_5_ValueTest_3;
            tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4;
            goto top_of_proc_1;
          }
          else
            STATE_VARIABLE_Values_5 = STATE_VARIABLE_Values_56_56;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Values_5 = STATE_VARIABLE_Values_5;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_15 = tscc_proc_2_input_1_TypeInfo_for_K_15;
    MR_Word TypeInfo_for_V_16 = tscc_proc_2_input_2_TypeInfo_for_V_16;
    MR_Box K_7 = tscc_proc_2_input_3_K_7;
    MR_Word T_8 = tscc_proc_2_input_4_T_8;
    MR_Word KeyTest_9 = tscc_proc_2_input_5_KeyTest_9;
    MR_Word ValueTest_10 = tscc_proc_2_input_6_ValueTest_10;
    MR_Word STATE_VARIABLE_Values_0_12 = tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;
    MR_Word STATE_VARIABLE_Values_13;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_5)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_9, (MR_Integer) 1))));

    succeeded = func_5(((MR_Box) (KeyTest_9)), K_7);
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_58 = TypeInfo_for_K_15;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_59 = TypeInfo_for_V_16;
      MR_Word next_value_of_tscc_proc_1_input_3_HeadVar__1_1 = T_8;
      MR_Word next_value_of_tscc_proc_1_input_4_KeyTest_2 = KeyTest_9;
      MR_Word next_value_of_tscc_proc_1_input_5_ValueTest_3 = ValueTest_10;
      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4 = STATE_VARIABLE_Values_0_12;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeInfo_for_K_58 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_58;
      tscc_proc_1_input_2_TypeInfo_for_V_59 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_59;
      tscc_proc_1_input_3_HeadVar__1_1 = next_value_of_tscc_proc_1_input_3_HeadVar__1_1;
      tscc_proc_1_input_4_KeyTest_2 = next_value_of_tscc_proc_1_input_4_KeyTest_2;
      tscc_proc_1_input_5_ValueTest_3 = next_value_of_tscc_proc_1_input_5_ValueTest_3;
      tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4;
      goto top_of_proc_1;
    }
    else
      STATE_VARIABLE_Values_13 = STATE_VARIABLE_Values_0_12;
    tscc_output_1_STATE_VARIABLE_Values_5 = STATE_VARIABLE_Values_13;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Values_5 = tscc_output_1_STATE_VARIABLE_Values_5;
  return;
}

void MR_CALL 
mercury__rtree__search_general_subtree_6_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_K_15,
  MR_Word tscc_proc_2_input_2_TypeInfo_for_V_16,
  MR_Box tscc_proc_2_input_3_K_7,
  MR_Word tscc_proc_2_input_4_T_8,
  MR_Word tscc_proc_2_input_5_KeyTest_9,
  MR_Word tscc_proc_2_input_6_ValueTest_10,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Values_5)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_K_58;
  MR_Word tscc_proc_1_input_2_TypeInfo_for_V_59;
  MR_Word tscc_proc_1_input_3_HeadVar__1_1;
  MR_Word tscc_proc_1_input_4_KeyTest_2;
  MR_Word tscc_proc_1_input_5_ValueTest_3;
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4;
  MR_Word tscc_output_1_STATE_VARIABLE_Values_5;

  // The code for TSCC PROC 2: pred rtree.search_general_subtree/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.search_general_2/5-0
  ;
  // proc 2 in TSCC: pred rtree.search_general_subtree/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_K_58 = tscc_proc_1_input_1_TypeInfo_for_K_58;
    MR_Word TypeInfo_for_V_59 = tscc_proc_1_input_2_TypeInfo_for_V_59;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_3_HeadVar__1_1;
    MR_Word KeyTest_2 = tscc_proc_1_input_4_KeyTest_2;
    MR_Word ValueTest_3 = tscc_proc_1_input_5_ValueTest_3;
    MR_Word STATE_VARIABLE_Values_0_4 = tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4;
    MR_Word STATE_VARIABLE_Values_5;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Value_6 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
          MR_bool MR_CALL (* func_4)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ValueTest_3, (MR_Integer) 1))));

          succeeded = func_4(((MR_Box) (ValueTest_3)), Value_6);
          if (succeeded)
            {
              STATE_VARIABLE_Values_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Values_5, 0) = Value_6;
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Values_5, 1) = ((MR_Box) (STATE_VARIABLE_Values_0_4));
            }
          else
            STATE_VARIABLE_Values_5 = STATE_VARIABLE_Values_0_4;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_17 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_19 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Values_23_23;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16;
          MR_Box next_value_of_tscc_proc_2_input_3_K_7;
          MR_Word next_value_of_tscc_proc_2_input_4_T_8;
          MR_Word next_value_of_tscc_proc_2_input_5_KeyTest_9;
          MR_Word next_value_of_tscc_proc_2_input_6_ValueTest_10;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;

          mercury__rtree__search_general_subtree_6_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, K0_17, T0_18, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_0_4, &STATE_VARIABLE_Values_23_23);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15 = TypeInfo_for_K_58;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16 = TypeInfo_for_V_59;
          next_value_of_tscc_proc_2_input_3_K_7 = K1_19;
          next_value_of_tscc_proc_2_input_4_T_8 = T1_20;
          next_value_of_tscc_proc_2_input_5_KeyTest_9 = KeyTest_2;
          next_value_of_tscc_proc_2_input_6_ValueTest_10 = ValueTest_3;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12 = STATE_VARIABLE_Values_23_23;
          tscc_proc_2_input_1_TypeInfo_for_K_15 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15;
          tscc_proc_2_input_2_TypeInfo_for_V_16 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16;
          tscc_proc_2_input_3_K_7 = next_value_of_tscc_proc_2_input_3_K_7;
          tscc_proc_2_input_4_T_8 = next_value_of_tscc_proc_2_input_4_T_8;
          tscc_proc_2_input_5_KeyTest_9 = next_value_of_tscc_proc_2_input_5_KeyTest_9;
          tscc_proc_2_input_6_ValueTest_10 = next_value_of_tscc_proc_2_input_6_ValueTest_10;
          tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_29 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_31 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_33 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Word STATE_VARIABLE_Values_37_37;
          MR_Word STATE_VARIABLE_Values_38_38;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15;
          MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16;
          MR_Box next_value_of_tscc_proc_2_input_3_K_7;
          MR_Word next_value_of_tscc_proc_2_input_4_T_8;
          MR_Word next_value_of_tscc_proc_2_input_5_KeyTest_9;
          MR_Word next_value_of_tscc_proc_2_input_6_ValueTest_10;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;

          mercury__rtree__search_general_subtree_6_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, K0_29, T0_30, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_0_4, &STATE_VARIABLE_Values_37_37);
          mercury__rtree__search_general_subtree_6_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, K1_31, T1_32, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_37_37, &STATE_VARIABLE_Values_38_38);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15 = TypeInfo_for_K_58;
          next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16 = TypeInfo_for_V_59;
          next_value_of_tscc_proc_2_input_3_K_7 = K2_33;
          next_value_of_tscc_proc_2_input_4_T_8 = T2_34;
          next_value_of_tscc_proc_2_input_5_KeyTest_9 = KeyTest_2;
          next_value_of_tscc_proc_2_input_6_ValueTest_10 = ValueTest_3;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12 = STATE_VARIABLE_Values_38_38;
          tscc_proc_2_input_1_TypeInfo_for_K_15 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_K_15;
          tscc_proc_2_input_2_TypeInfo_for_V_16 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_V_16;
          tscc_proc_2_input_3_K_7 = next_value_of_tscc_proc_2_input_3_K_7;
          tscc_proc_2_input_4_T_8 = next_value_of_tscc_proc_2_input_4_T_8;
          tscc_proc_2_input_5_KeyTest_9 = next_value_of_tscc_proc_2_input_5_KeyTest_9;
          tscc_proc_2_input_6_ValueTest_10 = next_value_of_tscc_proc_2_input_6_ValueTest_10;
          tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_44 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_46 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_48 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_50 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Word STATE_VARIABLE_Values_54_54;
          MR_Word STATE_VARIABLE_Values_55_55;
          MR_Word STATE_VARIABLE_Values_56_56;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_2, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box);
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box);
          MR_bool MR_CALL (* func_3)(MR_Box, MR_Box);

          succeeded = func_0(((MR_Box) (KeyTest_2)), K0_44);
          if (succeeded)
            mercury__rtree__search_general_2_5_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, T0_45, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_0_4, &STATE_VARIABLE_Values_54_54);
          else
            STATE_VARIABLE_Values_54_54 = STATE_VARIABLE_Values_0_4;
          func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_2, (MR_Integer) 1))));
          succeeded = func_1(((MR_Box) (KeyTest_2)), K1_46);
          if (succeeded)
            mercury__rtree__search_general_2_5_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, T1_47, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_54_54, &STATE_VARIABLE_Values_55_55);
          else
            STATE_VARIABLE_Values_55_55 = STATE_VARIABLE_Values_54_54;
          func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_2, (MR_Integer) 1))));
          succeeded = func_2(((MR_Box) (KeyTest_2)), K2_48);
          if (succeeded)
            mercury__rtree__search_general_2_5_p_0(TypeInfo_for_K_58, TypeInfo_for_V_59, T2_49, KeyTest_2, ValueTest_3, STATE_VARIABLE_Values_55_55, &STATE_VARIABLE_Values_56_56);
          else
            STATE_VARIABLE_Values_56_56 = STATE_VARIABLE_Values_55_55;
          func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_2, (MR_Integer) 1))));
          succeeded = func_3(((MR_Box) (KeyTest_2)), K3_50);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_58 = TypeInfo_for_K_58;
            MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_59 = TypeInfo_for_V_59;
            MR_Word next_value_of_tscc_proc_1_input_3_HeadVar__1_1 = T3_51;
            MR_Word next_value_of_tscc_proc_1_input_4_KeyTest_2 = KeyTest_2;
            MR_Word next_value_of_tscc_proc_1_input_5_ValueTest_3 = ValueTest_3;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4 = STATE_VARIABLE_Values_56_56;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_TypeInfo_for_K_58 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_58;
            tscc_proc_1_input_2_TypeInfo_for_V_59 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_59;
            tscc_proc_1_input_3_HeadVar__1_1 = next_value_of_tscc_proc_1_input_3_HeadVar__1_1;
            tscc_proc_1_input_4_KeyTest_2 = next_value_of_tscc_proc_1_input_4_KeyTest_2;
            tscc_proc_1_input_5_ValueTest_3 = next_value_of_tscc_proc_1_input_5_ValueTest_3;
            tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4;
            goto top_of_proc_1;
          }
          else
            STATE_VARIABLE_Values_5 = STATE_VARIABLE_Values_56_56;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Values_5 = STATE_VARIABLE_Values_5;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_K_15 = tscc_proc_2_input_1_TypeInfo_for_K_15;
    MR_Word TypeInfo_for_V_16 = tscc_proc_2_input_2_TypeInfo_for_V_16;
    MR_Box K_7 = tscc_proc_2_input_3_K_7;
    MR_Word T_8 = tscc_proc_2_input_4_T_8;
    MR_Word KeyTest_9 = tscc_proc_2_input_5_KeyTest_9;
    MR_Word ValueTest_10 = tscc_proc_2_input_6_ValueTest_10;
    MR_Word STATE_VARIABLE_Values_0_12 = tscc_proc_2_input_7_STATE_VARIABLE_Values_0_12;
    MR_Word STATE_VARIABLE_Values_13;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_5)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), KeyTest_9, (MR_Integer) 1))));

    succeeded = func_5(((MR_Box) (KeyTest_9)), K_7);
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_58 = TypeInfo_for_K_15;
      MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_59 = TypeInfo_for_V_16;
      MR_Word next_value_of_tscc_proc_1_input_3_HeadVar__1_1 = T_8;
      MR_Word next_value_of_tscc_proc_1_input_4_KeyTest_2 = KeyTest_9;
      MR_Word next_value_of_tscc_proc_1_input_5_ValueTest_3 = ValueTest_10;
      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4 = STATE_VARIABLE_Values_0_12;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeInfo_for_K_58 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_K_58;
      tscc_proc_1_input_2_TypeInfo_for_V_59 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_V_59;
      tscc_proc_1_input_3_HeadVar__1_1 = next_value_of_tscc_proc_1_input_3_HeadVar__1_1;
      tscc_proc_1_input_4_KeyTest_2 = next_value_of_tscc_proc_1_input_4_KeyTest_2;
      tscc_proc_1_input_5_ValueTest_3 = next_value_of_tscc_proc_1_input_5_ValueTest_3;
      tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_Values_0_4;
      goto top_of_proc_1;
    }
    else
      STATE_VARIABLE_Values_13 = STATE_VARIABLE_Values_0_12;
    tscc_output_1_STATE_VARIABLE_Values_5 = STATE_VARIABLE_Values_13;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Values_5 = tscc_output_1_STATE_VARIABLE_Values_5;
  return;
}

MR_Word MR_CALL 
mercury__rtree__search_contains_2_f_0(
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeClassInfo_for_region_13,
  MR_Word HeadVar__1_1,
  MR_Box K_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
        MR_Box V0_6 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 6))));

        succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_13)), K_2, K0_5);
        if (succeeded)
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = V0_6;
            MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        else
          HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));

        mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_13, T_9, K_2, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__3_3);
      }
      break;
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_region_47,
  MR_Word tscc_proc_1_input_2_HeadVar__1_1,
  MR_Box tscc_proc_1_input_3_HeadVar__2_2,
  MR_Word tscc_proc_1_input_4_HeadVar__3_3,
  MR_Word * tscc_output_ptr_1_HeadVar__4_4)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_region_13;
  MR_Box tscc_proc_2_input_2_K_6;
  MR_Word tscc_proc_2_input_3_T_7;
  MR_Box tscc_proc_2_input_4_QueryKey_8;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
  MR_Word tscc_output_1_HeadVar__4_4;

  // The code for TSCC PROC 1: pred rtree.UnusedArgs__pred__search_contains_2__[1]_0/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.UnusedArgs__pred__search_contains_2__[1]_0/4-0
  ;
  // proc 2 in TSCC: pred rtree.UnusedArgs__pred__search_contains_subtree__[1]_0/5-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_region_47 = tscc_proc_1_input_1_TypeClassInfo_for_region_47;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
    MR_Box HeadVar__2_2 = tscc_proc_1_input_3_HeadVar__2_2;
    MR_Word HeadVar__3_3 = tscc_proc_1_input_4_HeadVar__3_3;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Value_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));

          {
            HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = Value_5;
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (HeadVar__3_3));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_8 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Values_16_16;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          MR_Box next_value_of_tscc_proc_2_input_2_K_6;
          MR_Word next_value_of_tscc_proc_2_input_3_T_7;
          MR_Box next_value_of_tscc_proc_2_input_4_QueryKey_8;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;

          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_47, K0_8, T0_9, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_16_16);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13 = TypeClassInfo_for_region_47;
          next_value_of_tscc_proc_2_input_2_K_6 = K1_10;
          next_value_of_tscc_proc_2_input_3_T_7 = T1_11;
          next_value_of_tscc_proc_2_input_4_QueryKey_8 = HeadVar__2_2;
          next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = STATE_VARIABLE_Values_16_16;
          tscc_proc_2_input_1_TypeClassInfo_for_region_13 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          tscc_proc_2_input_2_K_6 = next_value_of_tscc_proc_2_input_2_K_6;
          tscc_proc_2_input_3_T_7 = next_value_of_tscc_proc_2_input_3_T_7;
          tscc_proc_2_input_4_QueryKey_8 = next_value_of_tscc_proc_2_input_4_QueryKey_8;
          tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_18 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_20 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_22 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Word STATE_VARIABLE_Values_28_28;
          MR_Word STATE_VARIABLE_Values_29_29;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          MR_Box next_value_of_tscc_proc_2_input_2_K_6;
          MR_Word next_value_of_tscc_proc_2_input_3_T_7;
          MR_Box next_value_of_tscc_proc_2_input_4_QueryKey_8;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;

          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K0_18);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T0_19, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_28_28);
          else
            STATE_VARIABLE_Values_28_28 = HeadVar__3_3;
          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K1_20);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T1_21, HeadVar__2_2, STATE_VARIABLE_Values_28_28, &STATE_VARIABLE_Values_29_29);
          else
            STATE_VARIABLE_Values_29_29 = STATE_VARIABLE_Values_28_28;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13 = TypeClassInfo_for_region_47;
          next_value_of_tscc_proc_2_input_2_K_6 = K2_22;
          next_value_of_tscc_proc_2_input_3_T_7 = T2_23;
          next_value_of_tscc_proc_2_input_4_QueryKey_8 = HeadVar__2_2;
          next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = STATE_VARIABLE_Values_29_29;
          tscc_proc_2_input_1_TypeClassInfo_for_region_13 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          tscc_proc_2_input_2_K_6 = next_value_of_tscc_proc_2_input_2_K_6;
          tscc_proc_2_input_3_T_7 = next_value_of_tscc_proc_2_input_3_T_7;
          tscc_proc_2_input_4_QueryKey_8 = next_value_of_tscc_proc_2_input_4_QueryKey_8;
          tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_31 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_33 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_35 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_37 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Word STATE_VARIABLE_Values_43_43;
          MR_Word STATE_VARIABLE_Values_44_44;
          MR_Word STATE_VARIABLE_Values_45_45;

          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K0_31);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T0_32, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_43_43);
          else
            STATE_VARIABLE_Values_43_43 = HeadVar__3_3;
          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K1_33);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T1_34, HeadVar__2_2, STATE_VARIABLE_Values_43_43, &STATE_VARIABLE_Values_44_44);
          else
            STATE_VARIABLE_Values_44_44 = STATE_VARIABLE_Values_43_43;
          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K2_35);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T2_36, HeadVar__2_2, STATE_VARIABLE_Values_44_44, &STATE_VARIABLE_Values_45_45);
          else
            STATE_VARIABLE_Values_45_45 = STATE_VARIABLE_Values_44_44;
          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K3_37);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47 = TypeClassInfo_for_region_47;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = T3_38;
            MR_Box next_value_of_tscc_proc_1_input_3_HeadVar__2_2 = HeadVar__2_2;
            MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__3_3 = STATE_VARIABLE_Values_45_45;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_TypeClassInfo_for_region_47 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47;
            tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
            tscc_proc_1_input_3_HeadVar__2_2 = next_value_of_tscc_proc_1_input_3_HeadVar__2_2;
            tscc_proc_1_input_4_HeadVar__3_3 = next_value_of_tscc_proc_1_input_4_HeadVar__3_3;
            goto top_of_proc_1;
          }
          else
            HeadVar__4_4 = STATE_VARIABLE_Values_45_45;
        }
        break;
    }
    tscc_output_1_HeadVar__4_4 = HeadVar__4_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_region_13 = tscc_proc_2_input_1_TypeClassInfo_for_region_13;
    MR_Box K_6 = tscc_proc_2_input_2_K_6;
    MR_Word T_7 = tscc_proc_2_input_3_T_7;
    MR_Box QueryKey_8 = tscc_proc_2_input_4_QueryKey_8;
    MR_Word STATE_VARIABLE_Values_0_10 = tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
    MR_Word STATE_VARIABLE_Values_11;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 6))));

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_13)), QueryKey_8, K_6);
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47 = TypeClassInfo_for_region_13;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = T_7;
      MR_Box next_value_of_tscc_proc_1_input_3_HeadVar__2_2 = QueryKey_8;
      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__3_3 = STATE_VARIABLE_Values_0_10;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_region_47 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47;
      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      tscc_proc_1_input_3_HeadVar__2_2 = next_value_of_tscc_proc_1_input_3_HeadVar__2_2;
      tscc_proc_1_input_4_HeadVar__3_3 = next_value_of_tscc_proc_1_input_4_HeadVar__3_3;
      goto top_of_proc_1;
    }
    else
      STATE_VARIABLE_Values_11 = STATE_VARIABLE_Values_0_10;
    tscc_output_1_HeadVar__4_4 = STATE_VARIABLE_Values_11;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_HeadVar__4_4 = tscc_output_1_HeadVar__4_4;
  return;
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_region_13,
  MR_Box tscc_proc_2_input_2_K_6,
  MR_Word tscc_proc_2_input_3_T_7,
  MR_Box tscc_proc_2_input_4_QueryKey_8,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10,
  MR_Word * tscc_output_ptr_1_HeadVar__4_4)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_region_47;
  MR_Word tscc_proc_1_input_2_HeadVar__1_1;
  MR_Box tscc_proc_1_input_3_HeadVar__2_2;
  MR_Word tscc_proc_1_input_4_HeadVar__3_3;
  MR_Word tscc_output_1_HeadVar__4_4;

  // The code for TSCC PROC 2: pred rtree.UnusedArgs__pred__search_contains_subtree__[1]_0/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.UnusedArgs__pred__search_contains_2__[1]_0/4-0
  ;
  // proc 2 in TSCC: pred rtree.UnusedArgs__pred__search_contains_subtree__[1]_0/5-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_region_47 = tscc_proc_1_input_1_TypeClassInfo_for_region_47;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
    MR_Box HeadVar__2_2 = tscc_proc_1_input_3_HeadVar__2_2;
    MR_Word HeadVar__3_3 = tscc_proc_1_input_4_HeadVar__3_3;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Value_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));

          {
            HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = Value_5;
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (HeadVar__3_3));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_8 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Values_16_16;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          MR_Box next_value_of_tscc_proc_2_input_2_K_6;
          MR_Word next_value_of_tscc_proc_2_input_3_T_7;
          MR_Box next_value_of_tscc_proc_2_input_4_QueryKey_8;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;

          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_47, K0_8, T0_9, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_16_16);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13 = TypeClassInfo_for_region_47;
          next_value_of_tscc_proc_2_input_2_K_6 = K1_10;
          next_value_of_tscc_proc_2_input_3_T_7 = T1_11;
          next_value_of_tscc_proc_2_input_4_QueryKey_8 = HeadVar__2_2;
          next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = STATE_VARIABLE_Values_16_16;
          tscc_proc_2_input_1_TypeClassInfo_for_region_13 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          tscc_proc_2_input_2_K_6 = next_value_of_tscc_proc_2_input_2_K_6;
          tscc_proc_2_input_3_T_7 = next_value_of_tscc_proc_2_input_3_T_7;
          tscc_proc_2_input_4_QueryKey_8 = next_value_of_tscc_proc_2_input_4_QueryKey_8;
          tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_18 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_20 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_22 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Word STATE_VARIABLE_Values_28_28;
          MR_Word STATE_VARIABLE_Values_29_29;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          MR_Box next_value_of_tscc_proc_2_input_2_K_6;
          MR_Word next_value_of_tscc_proc_2_input_3_T_7;
          MR_Box next_value_of_tscc_proc_2_input_4_QueryKey_8;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;

          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K0_18);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T0_19, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_28_28);
          else
            STATE_VARIABLE_Values_28_28 = HeadVar__3_3;
          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K1_20);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T1_21, HeadVar__2_2, STATE_VARIABLE_Values_28_28, &STATE_VARIABLE_Values_29_29);
          else
            STATE_VARIABLE_Values_29_29 = STATE_VARIABLE_Values_28_28;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13 = TypeClassInfo_for_region_47;
          next_value_of_tscc_proc_2_input_2_K_6 = K2_22;
          next_value_of_tscc_proc_2_input_3_T_7 = T2_23;
          next_value_of_tscc_proc_2_input_4_QueryKey_8 = HeadVar__2_2;
          next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = STATE_VARIABLE_Values_29_29;
          tscc_proc_2_input_1_TypeClassInfo_for_region_13 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          tscc_proc_2_input_2_K_6 = next_value_of_tscc_proc_2_input_2_K_6;
          tscc_proc_2_input_3_T_7 = next_value_of_tscc_proc_2_input_3_T_7;
          tscc_proc_2_input_4_QueryKey_8 = next_value_of_tscc_proc_2_input_4_QueryKey_8;
          tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_31 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_33 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_35 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_37 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Word STATE_VARIABLE_Values_43_43;
          MR_Word STATE_VARIABLE_Values_44_44;
          MR_Word STATE_VARIABLE_Values_45_45;

          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K0_31);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T0_32, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_43_43);
          else
            STATE_VARIABLE_Values_43_43 = HeadVar__3_3;
          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K1_33);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T1_34, HeadVar__2_2, STATE_VARIABLE_Values_43_43, &STATE_VARIABLE_Values_44_44);
          else
            STATE_VARIABLE_Values_44_44 = STATE_VARIABLE_Values_43_43;
          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K2_35);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T2_36, HeadVar__2_2, STATE_VARIABLE_Values_44_44, &STATE_VARIABLE_Values_45_45);
          else
            STATE_VARIABLE_Values_45_45 = STATE_VARIABLE_Values_44_44;
          succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K3_37);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47 = TypeClassInfo_for_region_47;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = T3_38;
            MR_Box next_value_of_tscc_proc_1_input_3_HeadVar__2_2 = HeadVar__2_2;
            MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__3_3 = STATE_VARIABLE_Values_45_45;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_TypeClassInfo_for_region_47 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47;
            tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
            tscc_proc_1_input_3_HeadVar__2_2 = next_value_of_tscc_proc_1_input_3_HeadVar__2_2;
            tscc_proc_1_input_4_HeadVar__3_3 = next_value_of_tscc_proc_1_input_4_HeadVar__3_3;
            goto top_of_proc_1;
          }
          else
            HeadVar__4_4 = STATE_VARIABLE_Values_45_45;
        }
        break;
    }
    tscc_output_1_HeadVar__4_4 = HeadVar__4_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_region_13 = tscc_proc_2_input_1_TypeClassInfo_for_region_13;
    MR_Box K_6 = tscc_proc_2_input_2_K_6;
    MR_Word T_7 = tscc_proc_2_input_3_T_7;
    MR_Box QueryKey_8 = tscc_proc_2_input_4_QueryKey_8;
    MR_Word STATE_VARIABLE_Values_0_10 = tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
    MR_Word STATE_VARIABLE_Values_11;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 6))));

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_13)), QueryKey_8, K_6);
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47 = TypeClassInfo_for_region_13;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = T_7;
      MR_Box next_value_of_tscc_proc_1_input_3_HeadVar__2_2 = QueryKey_8;
      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__3_3 = STATE_VARIABLE_Values_0_10;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_region_47 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47;
      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      tscc_proc_1_input_3_HeadVar__2_2 = next_value_of_tscc_proc_1_input_3_HeadVar__2_2;
      tscc_proc_1_input_4_HeadVar__3_3 = next_value_of_tscc_proc_1_input_4_HeadVar__3_3;
      goto top_of_proc_1;
    }
    else
      STATE_VARIABLE_Values_11 = STATE_VARIABLE_Values_0_10;
    tscc_output_1_HeadVar__4_4 = STATE_VARIABLE_Values_11;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_HeadVar__4_4 = tscc_output_1_HeadVar__4_4;
  return;
}

MR_Word MR_CALL 
mercury__rtree__search_intersects_2_f_0(
  MR_Word TypeInfo_for_V_14,
  MR_Word TypeClassInfo_for_region_13,
  MR_Word HeadVar__1_1,
  MR_Box QueryKey_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box K_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
        MR_Box V_6 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 5))));

        succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_13)), QueryKey_2, K_5);
        if (succeeded)
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = V_6;
            MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        else
          HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RTree_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));

        mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_13, RTree_9, QueryKey_2, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__3_3);
      }
      break;
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_region_47,
  MR_Word tscc_proc_1_input_2_HeadVar__1_1,
  MR_Box tscc_proc_1_input_3_HeadVar__2_2,
  MR_Word tscc_proc_1_input_4_HeadVar__3_3,
  MR_Word * tscc_output_ptr_1_HeadVar__4_4)
{
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_region_13;
  MR_Box tscc_proc_2_input_2_K_6;
  MR_Word tscc_proc_2_input_3_T_7;
  MR_Box tscc_proc_2_input_4_QueryKey_8;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
  MR_Word tscc_output_1_HeadVar__4_4;

  // The code for TSCC PROC 1: pred rtree.UnusedArgs__pred__search_intersects_2__[1]_0/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.UnusedArgs__pred__search_intersects_2__[1]_0/4-0
  ;
  // proc 2 in TSCC: pred rtree.UnusedArgs__pred__search_intersects_subtree__[1]_0/5-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_region_47 = tscc_proc_1_input_1_TypeClassInfo_for_region_47;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
    MR_Box HeadVar__2_2 = tscc_proc_1_input_3_HeadVar__2_2;
    MR_Word HeadVar__3_3 = tscc_proc_1_input_4_HeadVar__3_3;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Value_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));

          {
            HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = Value_5;
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (HeadVar__3_3));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_8 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Values_16_16;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          MR_Box next_value_of_tscc_proc_2_input_2_K_6;
          MR_Word next_value_of_tscc_proc_2_input_3_T_7;
          MR_Box next_value_of_tscc_proc_2_input_4_QueryKey_8;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;

          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_47, K0_8, T0_9, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_16_16);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13 = TypeClassInfo_for_region_47;
          next_value_of_tscc_proc_2_input_2_K_6 = K1_10;
          next_value_of_tscc_proc_2_input_3_T_7 = T1_11;
          next_value_of_tscc_proc_2_input_4_QueryKey_8 = HeadVar__2_2;
          next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = STATE_VARIABLE_Values_16_16;
          tscc_proc_2_input_1_TypeClassInfo_for_region_13 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          tscc_proc_2_input_2_K_6 = next_value_of_tscc_proc_2_input_2_K_6;
          tscc_proc_2_input_3_T_7 = next_value_of_tscc_proc_2_input_3_T_7;
          tscc_proc_2_input_4_QueryKey_8 = next_value_of_tscc_proc_2_input_4_QueryKey_8;
          tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_18 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_20 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_22 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Word STATE_VARIABLE_Values_28_28;
          MR_Word STATE_VARIABLE_Values_29_29;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          MR_Box next_value_of_tscc_proc_2_input_2_K_6;
          MR_Word next_value_of_tscc_proc_2_input_3_T_7;
          MR_Box next_value_of_tscc_proc_2_input_4_QueryKey_8;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;

          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K0_18);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T0_19, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_28_28);
          else
            STATE_VARIABLE_Values_28_28 = HeadVar__3_3;
          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K1_20);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T1_21, HeadVar__2_2, STATE_VARIABLE_Values_28_28, &STATE_VARIABLE_Values_29_29);
          else
            STATE_VARIABLE_Values_29_29 = STATE_VARIABLE_Values_28_28;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13 = TypeClassInfo_for_region_47;
          next_value_of_tscc_proc_2_input_2_K_6 = K2_22;
          next_value_of_tscc_proc_2_input_3_T_7 = T2_23;
          next_value_of_tscc_proc_2_input_4_QueryKey_8 = HeadVar__2_2;
          next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = STATE_VARIABLE_Values_29_29;
          tscc_proc_2_input_1_TypeClassInfo_for_region_13 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          tscc_proc_2_input_2_K_6 = next_value_of_tscc_proc_2_input_2_K_6;
          tscc_proc_2_input_3_T_7 = next_value_of_tscc_proc_2_input_3_T_7;
          tscc_proc_2_input_4_QueryKey_8 = next_value_of_tscc_proc_2_input_4_QueryKey_8;
          tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_31 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_33 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_35 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_37 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Word STATE_VARIABLE_Values_43_43;
          MR_Word STATE_VARIABLE_Values_44_44;
          MR_Word STATE_VARIABLE_Values_45_45;

          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K0_31);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T0_32, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_43_43);
          else
            STATE_VARIABLE_Values_43_43 = HeadVar__3_3;
          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K1_33);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T1_34, HeadVar__2_2, STATE_VARIABLE_Values_43_43, &STATE_VARIABLE_Values_44_44);
          else
            STATE_VARIABLE_Values_44_44 = STATE_VARIABLE_Values_43_43;
          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K2_35);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T2_36, HeadVar__2_2, STATE_VARIABLE_Values_44_44, &STATE_VARIABLE_Values_45_45);
          else
            STATE_VARIABLE_Values_45_45 = STATE_VARIABLE_Values_44_44;
          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K3_37);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47 = TypeClassInfo_for_region_47;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = T3_38;
            MR_Box next_value_of_tscc_proc_1_input_3_HeadVar__2_2 = HeadVar__2_2;
            MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__3_3 = STATE_VARIABLE_Values_45_45;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_TypeClassInfo_for_region_47 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47;
            tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
            tscc_proc_1_input_3_HeadVar__2_2 = next_value_of_tscc_proc_1_input_3_HeadVar__2_2;
            tscc_proc_1_input_4_HeadVar__3_3 = next_value_of_tscc_proc_1_input_4_HeadVar__3_3;
            goto top_of_proc_1;
          }
          else
            HeadVar__4_4 = STATE_VARIABLE_Values_45_45;
        }
        break;
    }
    tscc_output_1_HeadVar__4_4 = HeadVar__4_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_region_13 = tscc_proc_2_input_1_TypeClassInfo_for_region_13;
    MR_Box K_6 = tscc_proc_2_input_2_K_6;
    MR_Word T_7 = tscc_proc_2_input_3_T_7;
    MR_Box QueryKey_8 = tscc_proc_2_input_4_QueryKey_8;
    MR_Word STATE_VARIABLE_Values_0_10 = tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
    MR_Word STATE_VARIABLE_Values_11;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 5))));

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_13)), QueryKey_8, K_6);
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47 = TypeClassInfo_for_region_13;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = T_7;
      MR_Box next_value_of_tscc_proc_1_input_3_HeadVar__2_2 = QueryKey_8;
      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__3_3 = STATE_VARIABLE_Values_0_10;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_region_47 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47;
      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      tscc_proc_1_input_3_HeadVar__2_2 = next_value_of_tscc_proc_1_input_3_HeadVar__2_2;
      tscc_proc_1_input_4_HeadVar__3_3 = next_value_of_tscc_proc_1_input_4_HeadVar__3_3;
      goto top_of_proc_1;
    }
    else
      STATE_VARIABLE_Values_11 = STATE_VARIABLE_Values_0_10;
    tscc_output_1_HeadVar__4_4 = STATE_VARIABLE_Values_11;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_HeadVar__4_4 = tscc_output_1_HeadVar__4_4;
  return;
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word tscc_proc_2_input_1_TypeClassInfo_for_region_13,
  MR_Box tscc_proc_2_input_2_K_6,
  MR_Word tscc_proc_2_input_3_T_7,
  MR_Box tscc_proc_2_input_4_QueryKey_8,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10,
  MR_Word * tscc_output_ptr_1_HeadVar__4_4)
{
  MR_Word tscc_proc_1_input_1_TypeClassInfo_for_region_47;
  MR_Word tscc_proc_1_input_2_HeadVar__1_1;
  MR_Box tscc_proc_1_input_3_HeadVar__2_2;
  MR_Word tscc_proc_1_input_4_HeadVar__3_3;
  MR_Word tscc_output_1_HeadVar__4_4;

  // The code for TSCC PROC 2: pred rtree.UnusedArgs__pred__search_intersects_subtree__[1]_0/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtree.UnusedArgs__pred__search_intersects_2__[1]_0/4-0
  ;
  // proc 2 in TSCC: pred rtree.UnusedArgs__pred__search_intersects_subtree__[1]_0/5-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeClassInfo_for_region_47 = tscc_proc_1_input_1_TypeClassInfo_for_region_47;
    MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
    MR_Box HeadVar__2_2 = tscc_proc_1_input_3_HeadVar__2_2;
    MR_Word HeadVar__3_3 = tscc_proc_1_input_4_HeadVar__3_3;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Value_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));

          {
            HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = Value_5;
            MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (HeadVar__3_3));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_8 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_Values_16_16;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          MR_Box next_value_of_tscc_proc_2_input_2_K_6;
          MR_Word next_value_of_tscc_proc_2_input_3_T_7;
          MR_Box next_value_of_tscc_proc_2_input_4_QueryKey_8;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;

          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_47, K0_8, T0_9, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_16_16);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13 = TypeClassInfo_for_region_47;
          next_value_of_tscc_proc_2_input_2_K_6 = K1_10;
          next_value_of_tscc_proc_2_input_3_T_7 = T1_11;
          next_value_of_tscc_proc_2_input_4_QueryKey_8 = HeadVar__2_2;
          next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = STATE_VARIABLE_Values_16_16;
          tscc_proc_2_input_1_TypeClassInfo_for_region_13 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          tscc_proc_2_input_2_K_6 = next_value_of_tscc_proc_2_input_2_K_6;
          tscc_proc_2_input_3_T_7 = next_value_of_tscc_proc_2_input_3_T_7;
          tscc_proc_2_input_4_QueryKey_8 = next_value_of_tscc_proc_2_input_4_QueryKey_8;
          tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_18 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_20 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_22 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Word STATE_VARIABLE_Values_28_28;
          MR_Word STATE_VARIABLE_Values_29_29;
          MR_Word next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          MR_Box next_value_of_tscc_proc_2_input_2_K_6;
          MR_Word next_value_of_tscc_proc_2_input_3_T_7;
          MR_Box next_value_of_tscc_proc_2_input_4_QueryKey_8;
          MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;

          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K0_18);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T0_19, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_28_28);
          else
            STATE_VARIABLE_Values_28_28 = HeadVar__3_3;
          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K1_20);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T1_21, HeadVar__2_2, STATE_VARIABLE_Values_28_28, &STATE_VARIABLE_Values_29_29);
          else
            STATE_VARIABLE_Values_29_29 = STATE_VARIABLE_Values_28_28;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13 = TypeClassInfo_for_region_47;
          next_value_of_tscc_proc_2_input_2_K_6 = K2_22;
          next_value_of_tscc_proc_2_input_3_T_7 = T2_23;
          next_value_of_tscc_proc_2_input_4_QueryKey_8 = HeadVar__2_2;
          next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = STATE_VARIABLE_Values_29_29;
          tscc_proc_2_input_1_TypeClassInfo_for_region_13 = next_value_of_tscc_proc_2_input_1_TypeClassInfo_for_region_13;
          tscc_proc_2_input_2_K_6 = next_value_of_tscc_proc_2_input_2_K_6;
          tscc_proc_2_input_3_T_7 = next_value_of_tscc_proc_2_input_3_T_7;
          tscc_proc_2_input_4_QueryKey_8 = next_value_of_tscc_proc_2_input_4_QueryKey_8;
          tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_31 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_33 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_35 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
          MR_Box K3_37 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
          MR_Word T3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
          MR_Word STATE_VARIABLE_Values_43_43;
          MR_Word STATE_VARIABLE_Values_44_44;
          MR_Word STATE_VARIABLE_Values_45_45;

          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K0_31);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T0_32, HeadVar__2_2, HeadVar__3_3, &STATE_VARIABLE_Values_43_43);
          else
            STATE_VARIABLE_Values_43_43 = HeadVar__3_3;
          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K1_33);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T1_34, HeadVar__2_2, STATE_VARIABLE_Values_43_43, &STATE_VARIABLE_Values_44_44);
          else
            STATE_VARIABLE_Values_44_44 = STATE_VARIABLE_Values_43_43;
          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K2_35);
          if (succeeded)
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_47, T2_36, HeadVar__2_2, STATE_VARIABLE_Values_44_44, &STATE_VARIABLE_Values_45_45);
          else
            STATE_VARIABLE_Values_45_45 = STATE_VARIABLE_Values_44_44;
          succeeded = mercury__rtree__intersects_2_p_0(TypeClassInfo_for_region_47, HeadVar__2_2, K3_37);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47 = TypeClassInfo_for_region_47;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = T3_38;
            MR_Box next_value_of_tscc_proc_1_input_3_HeadVar__2_2 = HeadVar__2_2;
            MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__3_3 = STATE_VARIABLE_Values_45_45;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_TypeClassInfo_for_region_47 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47;
            tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
            tscc_proc_1_input_3_HeadVar__2_2 = next_value_of_tscc_proc_1_input_3_HeadVar__2_2;
            tscc_proc_1_input_4_HeadVar__3_3 = next_value_of_tscc_proc_1_input_4_HeadVar__3_3;
            goto top_of_proc_1;
          }
          else
            HeadVar__4_4 = STATE_VARIABLE_Values_45_45;
        }
        break;
    }
    tscc_output_1_HeadVar__4_4 = HeadVar__4_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeClassInfo_for_region_13 = tscc_proc_2_input_1_TypeClassInfo_for_region_13;
    MR_Box K_6 = tscc_proc_2_input_2_K_6;
    MR_Word T_7 = tscc_proc_2_input_3_T_7;
    MR_Box QueryKey_8 = tscc_proc_2_input_4_QueryKey_8;
    MR_Word STATE_VARIABLE_Values_0_10 = tscc_proc_2_input_5_STATE_VARIABLE_Values_0_10;
    MR_Word STATE_VARIABLE_Values_11;
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 5))));

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_13)), QueryKey_8, K_6);
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47 = TypeClassInfo_for_region_13;
      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = T_7;
      MR_Box next_value_of_tscc_proc_1_input_3_HeadVar__2_2 = QueryKey_8;
      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__3_3 = STATE_VARIABLE_Values_0_10;

      // direct tailcall eliminated
      ;
      tscc_proc_1_input_1_TypeClassInfo_for_region_47 = next_value_of_tscc_proc_1_input_1_TypeClassInfo_for_region_47;
      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
      tscc_proc_1_input_3_HeadVar__2_2 = next_value_of_tscc_proc_1_input_3_HeadVar__2_2;
      tscc_proc_1_input_4_HeadVar__3_3 = next_value_of_tscc_proc_1_input_4_HeadVar__3_3;
      goto top_of_proc_1;
    }
    else
      STATE_VARIABLE_Values_11 = STATE_VARIABLE_Values_0_10;
    tscc_output_1_HeadVar__4_4 = STATE_VARIABLE_Values_11;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_HeadVar__4_4 = tscc_output_1_HeadVar__4_4;
  return;
}

MR_bool MR_CALL 
mercury__rtree__intersects_2_p_0(
  MR_Word TypeClassInfo_for_region_3,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 5))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_3)), HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtree__delete_4_p_0(
  MR_Word TypeInfo_for_V_52,
  MR_Word TypeClassInfo_for_region_51,
  MR_Box K_1,
  MR_Box V_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
  {
    MR_Box K0_7 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
    MR_Box Var_53 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_52, V_2, Var_53);
    if (succeeded)
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 6))));
      succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_51)), K_1, K0_7);
    }
  }
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2))
  {
    MR_Word Info_13;
    MR_Word STATE_VARIABLE_T_25_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_T_27_27;
    MR_Box Var_12;

    succeeded = mercury__rtree__delete_2_7_p_0(TypeInfo_for_V_52, TypeClassInfo_for_region_51, STATE_VARIABLE_T_25_25, K_1, V_2, (MR_Integer) 1, &Var_12, &STATE_VARIABLE_T_27_27, &Info_13);
    if (succeeded)
    {
      if (((MR_tag((MR_Word) Info_13)) == (MR_Integer) 0))
      {
        MR_Word Orphans_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 0))));

        if ((Orphans_49 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__require__error_2_p_0((MR_String) "predicate \140rtree.delete\'/4", (MR_String) "expected delete info");
        else
        {
          MR_Word Orphan_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Orphans_49, (MR_Integer) 0))));
          MR_Word Orphans0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Orphans_49, (MR_Integer) 1))));
          MR_Box OrphanKey_18 = (MR_hl_field(MR_mktag(0), Orphan_16, (MR_Integer) 0));
          MR_Word OrphanTree_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Orphan_16, (MR_Integer) 1))));
          MR_Box OrphanValue_20;

          succeeded = ((MR_tag((MR_Word) OrphanTree_19)) == (MR_Integer) 0);
          if (succeeded)
          {
            OrphanValue_20 = (MR_hl_field(MR_mktag(0), OrphanTree_19, (MR_Integer) 0));
            succeeded = (Orphans0_17 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = OrphanKey_18;
                MR_hl_field(MR_mktag(1), base, 1) = OrphanValue_20;
              }
            else
            {
              MR_Box NextOrphanKey_21;
              MR_Word NextOrphanTree_22;
              MR_Word Var_31;
              MR_Word Var_32;

              succeeded = (Orphans0_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Orphans0_17, (MR_Integer) 0))));
                Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Orphans0_17, (MR_Integer) 1))));
                NextOrphanKey_21 = (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0));
                NextOrphanTree_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1))));
                succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_T_40_42;

                {
                  STATE_VARIABLE_T_40_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_T_40_42, 0) = OrphanKey_18;
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_T_40_42, 1) = ((MR_Box) (OrphanTree_19));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_T_40_42, 2) = NextOrphanKey_21;
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_T_40_42, 3) = ((MR_Box) (NextOrphanTree_22));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (STATE_VARIABLE_T_40_42));
                }
              }
              else
                mercury__require__error_2_p_0((MR_String) "predicate \140rtree.delete\'/4", (MR_String) "unbalanced rtree");
            }
          }
          else
          {
            MR_Word STATE_VARIABLE_T_40_45;

            mercury__rtree__reinsert_deleted_subtrees_4_p_0(TypeInfo_for_V_52, TypeClassInfo_for_region_51, Orphans0_17, (MR_Integer) 1, OrphanTree_19, &STATE_VARIABLE_T_40_45);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (STATE_VARIABLE_T_40_45));
            }
          }
        }
      }
      else
      {
        MR_Integer Depth_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Info_13, (MR_Integer) 0))));
        MR_Word Orphans_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Info_13, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_T_40_40;

        mercury__rtree__reinsert_deleted_subtrees_4_p_0(TypeInfo_for_V_52, TypeClassInfo_for_region_51, Orphans_15, Depth_14, STATE_VARIABLE_T_27_27, &STATE_VARIABLE_T_40_40);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (STATE_VARIABLE_T_40_40));
        }
      }
      succeeded = MR_TRUE;
    }
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
mercury__rtree__reinsert_deleted_subtrees_4_p_0(
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeClassInfo_for_region_30,
  MR_Word HeadVar__1_1,
  MR_Integer Depth_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box K_9;
      MR_Word T_10;
      MR_Word DLs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word T1_15;
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      K_9 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
      T1_15 = mercury__rtree__insert_tree_5_f_0(TypeInfo_for_V_31, TypeClassInfo_for_region_30, HeadVar__3_3, K_9, T_10, (MR_Integer) 1, Depth_2);
      succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3);
      if (succeeded)
      {
        MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Depth_2 + (MR_Unsigned) 2);
        MR_Word next_value_of_HeadVar__1_1 = DLs_11;
        MR_Integer next_value_of_Depth_2 = Var_26;
        MR_Word next_value_of_HeadVar__3_3 = T1_15;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        Depth_2 = next_value_of_Depth_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
      else
      {
        MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) Depth_2 + (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__1_1 = DLs_11;
        MR_Integer next_value_of_Depth_2 = Var_28;
        MR_Word next_value_of_HeadVar__3_3 = T1_15;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        Depth_2 = next_value_of_Depth_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__rtree__insert_tree_5_f_0(
  MR_Word TypeInfo_for_V_68,
  MR_Word TypeClassInfo_for_region_67,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Word S_3,
  MR_Integer D0_4,
  MR_Integer D_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__6_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_70_70;
          MR_Word TypeInfo_72_72;
          MR_Box conv0_HeadVar__6_6;

{
#define MR_PROC_LABEL mercury__rtree__insert_tree_5_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_region_67 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_70_70  = TypeInfo;
}
          {
            TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_72_72, 0) = ((MR_Box) (&mercury__rtree__rtree__type_ctor_info_rtree_2_2));
            MR_hl_field(MR_mktag(0), TypeInfo_72_72, 1) = ((MR_Box) (TypeInfo_70_70));
            MR_hl_field(MR_mktag(0), TypeInfo_72_72, 2) = ((MR_Box) (TypeInfo_for_V_68));
          }
          conv0_HeadVar__6_6 = mercury__require__func_error_1_f_0(TypeInfo_72_72, (MR_String) "insert_tree: leaf unexpected");
          HeadVar__6_6 = ((MR_Word) (conv0_HeadVar__6_6));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_13 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_15 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

          succeeded = (D0_4 == D_5);
          if (succeeded)
            {
              HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HeadVar__6_6, 0) = K0_13;
              MR_hl_field(MR_mktag(2), HeadVar__6_6, 1) = ((MR_Box) (T0_14));
              MR_hl_field(MR_mktag(2), HeadVar__6_6, 2) = K1_15;
              MR_hl_field(MR_mktag(2), HeadVar__6_6, 3) = ((MR_Box) (T1_16));
              MR_hl_field(MR_mktag(2), HeadVar__6_6, 4) = K_2;
              MR_hl_field(MR_mktag(2), HeadVar__6_6, 5) = ((MR_Box) (S_3));
            }
          else
          {
            MR_Word Result_22;
            MR_Float SizeA_77;
            MR_Float SizeB_78;
            MR_Float EnlargedSizeA_79;
            MR_Float EnlargedSizeB_80;
            MR_Float IncreaseForA_81;
            MR_Float IncreaseForB_82;
            MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7))));
            MR_Box conv2_SizeA_77;
            MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
            MR_Box conv4_SizeB_78;
            MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);
            MR_Box conv6_EnlargedSizeA_79;
            MR_Box MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box);
            MR_Box conv8_EnlargedSizeB_80;

            conv2_SizeA_77 = func_1(((MR_Box) (TypeClassInfo_for_region_67)), K0_13);
            SizeA_77 = MR_unbox_float(conv2_SizeA_77);
            func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7))));
            conv4_SizeB_78 = func_3(((MR_Box) (TypeClassInfo_for_region_67)), K1_15);
            SizeB_78 = MR_unbox_float(conv4_SizeB_78);
            func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9))));
            conv6_EnlargedSizeA_79 = func_5(((MR_Box) (TypeClassInfo_for_region_67)), K_2, K0_13);
            EnlargedSizeA_79 = MR_unbox_float(conv6_EnlargedSizeA_79);
            func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9))));
            conv8_EnlargedSizeB_80 = func_7(((MR_Box) (TypeClassInfo_for_region_67)), K_2, K1_15);
            EnlargedSizeB_80 = MR_unbox_float(conv8_EnlargedSizeB_80);
            IncreaseForA_81 = (EnlargedSizeA_79 - SizeA_77);
            IncreaseForB_82 = (EnlargedSizeB_80 - SizeB_78);
            succeeded = (IncreaseForA_81 < IncreaseForB_82);
            if (succeeded)
              Result_22 = (MR_Integer) 0;
            else
            {
              succeeded = (IncreaseForA_81 > IncreaseForB_82);
              if (succeeded)
                Result_22 = (MR_Integer) 1;
              else
              {
                succeeded = (SizeA_77 <= SizeB_78);
                if (succeeded)
                  Result_22 = (MR_Integer) 0;
                else
                  Result_22 = (MR_Integer) 1;
              }
            }
            switch (Result_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);

                  mercury__rtree__insert_tree_and_split_child2_9_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K0_13, T0_14, K1_15, T1_16, K_2, S_3, Var_25, D_5, &HeadVar__6_6);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);

                  mercury__rtree__insert_tree_and_split_child2_9_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K1_15, T1_16, K0_13, T0_14, K_2, S_3, Var_23, D_5, &HeadVar__6_6);
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_27 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_29 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_31 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));

          succeeded = (D0_4 == D_5);
          if (succeeded)
            {
              HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__6_6, 0) = K0_27;
              MR_hl_field(MR_mktag(3), HeadVar__6_6, 1) = ((MR_Box) (T0_28));
              MR_hl_field(MR_mktag(3), HeadVar__6_6, 2) = K1_29;
              MR_hl_field(MR_mktag(3), HeadVar__6_6, 3) = ((MR_Box) (T1_30));
              MR_hl_field(MR_mktag(3), HeadVar__6_6, 4) = K2_31;
              MR_hl_field(MR_mktag(3), HeadVar__6_6, 5) = ((MR_Box) (T2_32));
              MR_hl_field(MR_mktag(3), HeadVar__6_6, 6) = K_2;
              MR_hl_field(MR_mktag(3), HeadVar__6_6, 7) = ((MR_Box) (S_3));
            }
          else
          {
            MR_Word Result_38;

            Result_38 = mercury__rtree__choose_subtree_4_f_0(TypeClassInfo_for_region_67, K_2, K0_27, K1_29, K2_31);
            switch (Result_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_43 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);

                  mercury__rtree__insert_tree_and_split_child3_11_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K0_27, T0_28, K1_29, T1_30, K2_31, T2_32, K_2, S_3, Var_43, D_5, &HeadVar__6_6);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);

                  mercury__rtree__insert_tree_and_split_child3_11_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K1_29, T1_30, K0_27, T0_28, K2_31, T2_32, K_2, S_3, Var_41, D_5, &HeadVar__6_6);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);

                  mercury__rtree__insert_tree_and_split_child3_11_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K2_31, T2_32, K0_27, T0_28, K1_29, T1_30, K_2, S_3, Var_39, D_5, &HeadVar__6_6);
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_59;
          MR_Word T0_60;
          MR_Box K1_61;
          MR_Word T1_62;
          MR_Word NRT_63;
          MR_Integer Var_65;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Integer next_value_of_D_5;

          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_67, HeadVar__1_1, &K0_59, &T0_60, &K1_61, &T1_62);
          {
            NRT_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NRT_63, 0) = K0_59;
            MR_hl_field(MR_mktag(1), NRT_63, 1) = ((MR_Box) (T0_60));
            MR_hl_field(MR_mktag(1), NRT_63, 2) = K1_61;
            MR_hl_field(MR_mktag(1), NRT_63, 3) = ((MR_Box) (T1_62));
          }
          Var_65 = (MR_Integer) ((MR_Unsigned) D_5 + (MR_Unsigned) 1);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = NRT_63;
          next_value_of_D_5 = Var_65;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          D0_4 = (MR_Integer) 1;
          D_5 = next_value_of_D_5;
          continue;
        }
        break;
    }
    return HeadVar__6_6;
    break;
  }
}

static void MR_CALL 
mercury__rtree__LCMC__func__insert_tree__1_6_p_0(
  MR_Word TypeInfo_for_V_68,
  MR_Word TypeClassInfo_for_region_67,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Word S_3,
  MR_Integer D0_4,
  MR_Integer D_5,
  MR_Word * AddrOfHeadVar__6_83)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_70_70;
          MR_Word TypeInfo_72_72;
          MR_Box conv0_HeadVar__6_6;

{
#define MR_PROC_LABEL mercury__rtree__LCMC__func__insert_tree__1_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_region_67 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_70_70  = TypeInfo;
}
          {
            TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_72_72, 0) = ((MR_Box) (&mercury__rtree__rtree__type_ctor_info_rtree_2_2));
            MR_hl_field(MR_mktag(0), TypeInfo_72_72, 1) = ((MR_Box) (TypeInfo_70_70));
            MR_hl_field(MR_mktag(0), TypeInfo_72_72, 2) = ((MR_Box) (TypeInfo_for_V_68));
          }
          {
            conv0_HeadVar__6_6 = mercury__require__func_error_1_f_0(TypeInfo_72_72, (MR_String) "insert_tree: leaf unexpected");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_13 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_15 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

          succeeded = (D0_4 == D_5);
          if (succeeded)
          {
            MR_Word HeadVar__6_92;

            {
              HeadVar__6_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HeadVar__6_92, 0) = K0_13;
              MR_hl_field(MR_mktag(2), HeadVar__6_92, 1) = ((MR_Box) (T0_14));
              MR_hl_field(MR_mktag(2), HeadVar__6_92, 2) = K1_15;
              MR_hl_field(MR_mktag(2), HeadVar__6_92, 3) = ((MR_Box) (T1_16));
              MR_hl_field(MR_mktag(2), HeadVar__6_92, 4) = K_2;
              MR_hl_field(MR_mktag(2), HeadVar__6_92, 5) = ((MR_Box) (S_3));
            }
            *AddrOfHeadVar__6_83 = HeadVar__6_92;
          }
          else
          {
            MR_Word Result_22;
            MR_Float SizeA_77;
            MR_Float SizeB_78;
            MR_Float EnlargedSizeA_79;
            MR_Float EnlargedSizeB_80;
            MR_Float IncreaseForA_81;
            MR_Float IncreaseForB_82;
            MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7))));
            MR_Box conv2_SizeA_77;
            MR_Box MR_CALL (* func_3)(MR_Box, MR_Box);
            MR_Box conv4_SizeB_78;
            MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);
            MR_Box conv6_EnlargedSizeA_79;
            MR_Box MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box);
            MR_Box conv8_EnlargedSizeB_80;

            conv2_SizeA_77 = func_1(((MR_Box) (TypeClassInfo_for_region_67)), K0_13);
            SizeA_77 = MR_unbox_float(conv2_SizeA_77);
            func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7))));
            conv4_SizeB_78 = func_3(((MR_Box) (TypeClassInfo_for_region_67)), K1_15);
            SizeB_78 = MR_unbox_float(conv4_SizeB_78);
            func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9))));
            conv6_EnlargedSizeA_79 = func_5(((MR_Box) (TypeClassInfo_for_region_67)), K_2, K0_13);
            EnlargedSizeA_79 = MR_unbox_float(conv6_EnlargedSizeA_79);
            func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9))));
            conv8_EnlargedSizeB_80 = func_7(((MR_Box) (TypeClassInfo_for_region_67)), K_2, K1_15);
            EnlargedSizeB_80 = MR_unbox_float(conv8_EnlargedSizeB_80);
            IncreaseForA_81 = (EnlargedSizeA_79 - SizeA_77);
            IncreaseForB_82 = (EnlargedSizeB_80 - SizeB_78);
            succeeded = (IncreaseForA_81 < IncreaseForB_82);
            if (succeeded)
              Result_22 = (MR_Integer) 0;
            else
            {
              succeeded = (IncreaseForA_81 > IncreaseForB_82);
              if (succeeded)
                Result_22 = (MR_Integer) 1;
              else
              {
                succeeded = (SizeA_77 <= SizeB_78);
                if (succeeded)
                  Result_22 = (MR_Integer) 0;
                else
                  Result_22 = (MR_Integer) 1;
              }
            }
            switch (Result_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);
                  MR_Word HeadVar__6_93;

                  mercury__rtree__insert_tree_and_split_child2_9_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K0_13, T0_14, K1_15, T1_16, K_2, S_3, Var_25, D_5, &HeadVar__6_93);
                  *AddrOfHeadVar__6_83 = HeadVar__6_93;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);
                  MR_Word HeadVar__6_94;

                  mercury__rtree__insert_tree_and_split_child2_9_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K1_15, T1_16, K0_13, T0_14, K_2, S_3, Var_23, D_5, &HeadVar__6_94);
                  *AddrOfHeadVar__6_83 = HeadVar__6_94;
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_27 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_29 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_31 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));

          succeeded = (D0_4 == D_5);
          if (succeeded)
          {
            MR_Word HeadVar__6_84;

            {
              HeadVar__6_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HeadVar__6_84, 0) = K0_27;
              MR_hl_field(MR_mktag(3), HeadVar__6_84, 1) = ((MR_Box) (T0_28));
              MR_hl_field(MR_mktag(3), HeadVar__6_84, 2) = K1_29;
              MR_hl_field(MR_mktag(3), HeadVar__6_84, 3) = ((MR_Box) (T1_30));
              MR_hl_field(MR_mktag(3), HeadVar__6_84, 4) = K2_31;
              MR_hl_field(MR_mktag(3), HeadVar__6_84, 5) = ((MR_Box) (T2_32));
              MR_hl_field(MR_mktag(3), HeadVar__6_84, 6) = K_2;
              MR_hl_field(MR_mktag(3), HeadVar__6_84, 7) = ((MR_Box) (S_3));
            }
            *AddrOfHeadVar__6_83 = HeadVar__6_84;
          }
          else
          {
            MR_Word Result_38;

            Result_38 = mercury__rtree__choose_subtree_4_f_0(TypeClassInfo_for_region_67, K_2, K0_27, K1_29, K2_31);
            switch (Result_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Var_43 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);
                  MR_Word HeadVar__6_85;

                  mercury__rtree__insert_tree_and_split_child3_11_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K0_27, T0_28, K1_29, T1_30, K2_31, T2_32, K_2, S_3, Var_43, D_5, &HeadVar__6_85);
                  *AddrOfHeadVar__6_83 = HeadVar__6_85;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);
                  MR_Word HeadVar__6_86;

                  mercury__rtree__insert_tree_and_split_child3_11_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K1_29, T1_30, K0_27, T0_28, K2_31, T2_32, K_2, S_3, Var_41, D_5, &HeadVar__6_86);
                  *AddrOfHeadVar__6_83 = HeadVar__6_86;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) D0_4 + (MR_Unsigned) 1);
                  MR_Word HeadVar__6_87;

                  mercury__rtree__insert_tree_and_split_child3_11_p_0(TypeInfo_for_V_68, TypeClassInfo_for_region_67, K2_31, T2_32, K0_27, T0_28, K1_29, T1_30, K_2, S_3, Var_39, D_5, &HeadVar__6_87);
                  *AddrOfHeadVar__6_83 = HeadVar__6_87;
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_59;
          MR_Word T0_60;
          MR_Box K1_61;
          MR_Word T1_62;
          MR_Word NRT_63;
          MR_Integer Var_65;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Integer next_value_of_D_5;

          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_67, HeadVar__1_1, &K0_59, &T0_60, &K1_61, &T1_62);
          {
            NRT_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NRT_63, 0) = K0_59;
            MR_hl_field(MR_mktag(1), NRT_63, 1) = ((MR_Box) (T0_60));
            MR_hl_field(MR_mktag(1), NRT_63, 2) = K1_61;
            MR_hl_field(MR_mktag(1), NRT_63, 3) = ((MR_Box) (T1_62));
          }
          Var_65 = (MR_Integer) ((MR_Unsigned) D_5 + (MR_Unsigned) 1);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = NRT_63;
          next_value_of_D_5 = Var_65;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          D0_4 = (MR_Integer) 1;
          D_5 = next_value_of_D_5;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__rtree__insert_tree_and_split_child3_11_p_0(
  MR_Word TypeInfo_for_V_56,
  MR_Word TypeClassInfo_for_region_55,
  MR_Box K0_12,
  MR_Word T0_13,
  MR_Box K1_14,
  MR_Word T1_15,
  MR_Box K2_16,
  MR_Word T2_17,
  MR_Box K_18,
  MR_Word S_19,
  MR_Integer D0_20,
  MR_Integer D_21,
  MR_Word * T_22)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) T0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
        *T_22 = base;
        MR_hl_field(MR_mktag(3), base, 0) = K0_12;
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (T0_13));
        MR_hl_field(MR_mktag(3), base, 2) = K1_14;
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (T1_15));
        MR_hl_field(MR_mktag(3), base, 4) = K2_16;
        MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (T2_17));
        MR_hl_field(MR_mktag(3), base, 6) = K_18;
        MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (S_19));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box NK0_28;
        MR_Box MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Word * AddrNT0_70;

        NK0_28 = func_11(((MR_Box) (TypeClassInfo_for_region_55)), K_18, K0_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *T_22 = base;
          MR_hl_field(MR_mktag(2), base, 0) = NK0_28;
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
          MR_hl_field(MR_mktag(2), base, 2) = K1_14;
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T1_15));
          MR_hl_field(MR_mktag(2), base, 4) = K2_16;
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (T2_17));
        }
        AddrNT0_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *T_22, (MR_Integer) 1)));
        mercury__rtree__LCMC__func__insert_tree__1_6_p_0(TypeInfo_for_V_56, TypeClassInfo_for_region_55, T0_13, K_18, S_19, D0_20, D_21, AddrNT0_70);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box NK0_51;
        MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Word * AddrNT0_69;

        NK0_51 = func_10(((MR_Box) (TypeClassInfo_for_region_55)), K_18, K0_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *T_22 = base;
          MR_hl_field(MR_mktag(2), base, 0) = NK0_51;
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
          MR_hl_field(MR_mktag(2), base, 2) = K1_14;
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T1_15));
          MR_hl_field(MR_mktag(2), base, 4) = K2_16;
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (T2_17));
        }
        AddrNT0_69 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *T_22, (MR_Integer) 1)));
        mercury__rtree__LCMC__func__insert_tree__1_6_p_0(TypeInfo_for_V_56, TypeClassInfo_for_region_55, T0_13, K_18, S_19, D0_20, D_21, AddrNT0_69);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box K3_44;
        MR_Word T3_45;
        MR_Box K4_46;
        MR_Word T4_47;
        MR_Word Result_48;
        MR_Float SizeA_61;
        MR_Float SizeB_62;
        MR_Float EnlargedSizeA_63;
        MR_Float EnlargedSizeB_64;
        MR_Float IncreaseForA_65;
        MR_Float IncreaseForB_66;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_SizeA_61;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
        MR_Box conv3_SizeB_62;
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
        MR_Box conv5_EnlargedSizeA_63;
        MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
        MR_Box conv7_EnlargedSizeB_64;

        mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_55, T0_13, &K3_44, &T3_45, &K4_46, &T4_47);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 7))));
        conv1_SizeA_61 = func_0(((MR_Box) (TypeClassInfo_for_region_55)), K2_16);
        SizeA_61 = MR_unbox_float(conv1_SizeA_61);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 7))));
        conv3_SizeB_62 = func_2(((MR_Box) (TypeClassInfo_for_region_55)), K3_44);
        SizeB_62 = MR_unbox_float(conv3_SizeB_62);
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 9))));
        conv5_EnlargedSizeA_63 = func_4(((MR_Box) (TypeClassInfo_for_region_55)), K_18, K2_16);
        EnlargedSizeA_63 = MR_unbox_float(conv5_EnlargedSizeA_63);
        func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 9))));
        conv7_EnlargedSizeB_64 = func_6(((MR_Box) (TypeClassInfo_for_region_55)), K_18, K3_44);
        EnlargedSizeB_64 = MR_unbox_float(conv7_EnlargedSizeB_64);
        IncreaseForA_65 = (EnlargedSizeA_63 - SizeA_61);
        IncreaseForB_66 = (EnlargedSizeB_64 - SizeB_62);
        succeeded = (IncreaseForA_65 < IncreaseForB_66);
        if (succeeded)
          Result_48 = (MR_Integer) 0;
        else
        {
          succeeded = (IncreaseForA_65 > IncreaseForB_66);
          if (succeeded)
            Result_48 = (MR_Integer) 1;
          else
          {
            succeeded = (SizeA_61 <= SizeB_62);
            if (succeeded)
              Result_48 = (MR_Integer) 0;
            else
              Result_48 = (MR_Integer) 1;
          }
        }
        switch (Result_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box K5_49;
              MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8))));
              MR_Word * AddrT5_67;

              K5_49 = func_8(((MR_Box) (TypeClassInfo_for_region_55)), K_18, K3_44);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
                *T_22 = base;
                MR_hl_field(MR_mktag(3), base, 0) = K1_14;
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (T1_15));
                MR_hl_field(MR_mktag(3), base, 2) = K2_16;
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (T2_17));
                MR_hl_field(MR_mktag(3), base, 4) = K4_46;
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (T4_47));
                MR_hl_field(MR_mktag(3), base, 6) = K5_49;
                MR_hl_field(MR_mktag(3), base, 7) = NULL;
              }
              AddrT5_67 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *T_22, (MR_Integer) 7)));
              mercury__rtree__LCMC__func__insert_tree__1_6_p_0(TypeInfo_for_V_56, TypeClassInfo_for_region_55, T3_45, K_18, S_19, D0_20, D_21, AddrT5_67);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box K5_53;
              MR_Box MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8))));
              MR_Word * AddrT5_68;

              K5_53 = func_9(((MR_Box) (TypeClassInfo_for_region_55)), K_18, K4_46);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
                *T_22 = base;
                MR_hl_field(MR_mktag(3), base, 0) = K1_14;
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (T1_15));
                MR_hl_field(MR_mktag(3), base, 2) = K2_16;
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (T2_17));
                MR_hl_field(MR_mktag(3), base, 4) = K3_44;
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (T3_45));
                MR_hl_field(MR_mktag(3), base, 6) = K5_53;
                MR_hl_field(MR_mktag(3), base, 7) = NULL;
              }
              AddrT5_68 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *T_22, (MR_Integer) 7)));
              mercury__rtree__LCMC__func__insert_tree__1_6_p_0(TypeInfo_for_V_56, TypeClassInfo_for_region_55, T4_47, K_18, S_19, D0_20, D_21, AddrT5_68);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
mercury__rtree__insert_tree_and_split_child2_9_p_0(
  MR_Word TypeInfo_for_V_52,
  MR_Word TypeClassInfo_for_region_51,
  MR_Box K0_10,
  MR_Word T0_11,
  MR_Box K1_12,
  MR_Word T1_13,
  MR_Box K_14,
  MR_Word S_15,
  MR_Integer D0_16,
  MR_Integer D_17,
  MR_Word * T_18)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) T0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        *T_18 = base;
        MR_hl_field(MR_mktag(2), base, 0) = K0_10;
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (T0_11));
        MR_hl_field(MR_mktag(2), base, 2) = K1_12;
        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T1_13));
        MR_hl_field(MR_mktag(2), base, 4) = K_14;
        MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (S_15));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box NK0_24;
        MR_Box MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Word * AddrNT0_66;

        NK0_24 = func_11(((MR_Box) (TypeClassInfo_for_region_51)), K_14, K0_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = NK0_24;
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
          MR_hl_field(MR_mktag(1), base, 2) = K1_12;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T1_13));
        }
        AddrNT0_66 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *T_18, (MR_Integer) 1)));
        mercury__rtree__LCMC__func__insert_tree__1_6_p_0(TypeInfo_for_V_52, TypeClassInfo_for_region_51, T0_11, K_14, S_15, D0_16, D_17, AddrNT0_66);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box NK0_47;
        MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Word * AddrNT0_65;

        NK0_47 = func_10(((MR_Box) (TypeClassInfo_for_region_51)), K_14, K0_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = NK0_47;
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
          MR_hl_field(MR_mktag(1), base, 2) = K1_12;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T1_13));
        }
        AddrNT0_65 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *T_18, (MR_Integer) 1)));
        mercury__rtree__LCMC__func__insert_tree__1_6_p_0(TypeInfo_for_V_52, TypeClassInfo_for_region_51, T0_11, K_14, S_15, D0_16, D_17, AddrNT0_65);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box K2_40;
        MR_Word T2_41;
        MR_Box K3_42;
        MR_Word T3_43;
        MR_Word Result_44;
        MR_Float SizeA_57;
        MR_Float SizeB_58;
        MR_Float EnlargedSizeA_59;
        MR_Float EnlargedSizeB_60;
        MR_Float IncreaseForA_61;
        MR_Float IncreaseForB_62;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_SizeA_57;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
        MR_Box conv3_SizeB_58;
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
        MR_Box conv5_EnlargedSizeA_59;
        MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
        MR_Box conv7_EnlargedSizeB_60;

        mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_51, T0_11, &K2_40, &T2_41, &K3_42, &T3_43);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 7))));
        conv1_SizeA_57 = func_0(((MR_Box) (TypeClassInfo_for_region_51)), K2_40);
        SizeA_57 = MR_unbox_float(conv1_SizeA_57);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 7))));
        conv3_SizeB_58 = func_2(((MR_Box) (TypeClassInfo_for_region_51)), K3_42);
        SizeB_58 = MR_unbox_float(conv3_SizeB_58);
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 9))));
        conv5_EnlargedSizeA_59 = func_4(((MR_Box) (TypeClassInfo_for_region_51)), K_14, K2_40);
        EnlargedSizeA_59 = MR_unbox_float(conv5_EnlargedSizeA_59);
        func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 9))));
        conv7_EnlargedSizeB_60 = func_6(((MR_Box) (TypeClassInfo_for_region_51)), K_14, K3_42);
        EnlargedSizeB_60 = MR_unbox_float(conv7_EnlargedSizeB_60);
        IncreaseForA_61 = (EnlargedSizeA_59 - SizeA_57);
        IncreaseForB_62 = (EnlargedSizeB_60 - SizeB_58);
        succeeded = (IncreaseForA_61 < IncreaseForB_62);
        if (succeeded)
          Result_44 = (MR_Integer) 0;
        else
        {
          succeeded = (IncreaseForA_61 > IncreaseForB_62);
          if (succeeded)
            Result_44 = (MR_Integer) 1;
          else
          {
            succeeded = (SizeA_57 <= SizeB_58);
            if (succeeded)
              Result_44 = (MR_Integer) 0;
            else
              Result_44 = (MR_Integer) 1;
          }
        }
        switch (Result_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box K4_45;
              MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8))));
              MR_Word * AddrT4_63;

              K4_45 = func_8(((MR_Box) (TypeClassInfo_for_region_51)), K_14, K2_40);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *T_18 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K1_12;
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (T1_13));
                MR_hl_field(MR_mktag(2), base, 2) = K3_42;
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T3_43));
                MR_hl_field(MR_mktag(2), base, 4) = K4_45;
                MR_hl_field(MR_mktag(2), base, 5) = NULL;
              }
              AddrT4_63 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *T_18, (MR_Integer) 5)));
              mercury__rtree__LCMC__func__insert_tree__1_6_p_0(TypeInfo_for_V_52, TypeClassInfo_for_region_51, T2_41, K_14, S_15, D0_16, D_17, AddrT4_63);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box K4_49;
              MR_Box MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8))));
              MR_Word * AddrT4_64;

              K4_49 = func_9(((MR_Box) (TypeClassInfo_for_region_51)), K_14, K3_42);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *T_18 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K1_12;
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (T1_13));
                MR_hl_field(MR_mktag(2), base, 2) = K2_40;
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T2_41));
                MR_hl_field(MR_mktag(2), base, 4) = K4_49;
                MR_hl_field(MR_mktag(2), base, 5) = NULL;
              }
              AddrT4_64 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *T_18, (MR_Integer) 5)));
              mercury__rtree__LCMC__func__insert_tree__1_6_p_0(TypeInfo_for_V_52, TypeClassInfo_for_region_51, T3_43, K_14, S_15, D0_16, D_17, AddrT4_64);
            }
            break;
        }
      }
      break;
  }
}

static MR_Word MR_CALL 
mercury__rtree__choose_subtree_4_f_0(
  MR_Word TypeClassInfo_for_region_27,
  MR_Box Key_6,
  MR_Box KA_7,
  MR_Box KB_8,
  MR_Box KC_9)
{
  MR_bool succeeded;
  MR_Word Result_10;
  MR_Float AreaA_11;
  MR_Float AreaB_12;
  MR_Float AreaC_13;
  MR_Float EnlargedAreaA_14;
  MR_Float EnlargedAreaB_15;
  MR_Float EnlargedAreaC_16;
  MR_Float IncreaseForA_17;
  MR_Float IncreaseForB_18;
  MR_Float IncreaseForC_19;
  MR_Word Result0_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7))));
  MR_Box conv1_AreaA_11;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_AreaB_12;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
  MR_Box conv5_AreaC_13;
  MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
  MR_Box conv7_EnlargedAreaA_14;
  MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box);
  MR_Box conv9_EnlargedAreaB_15;
  MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box);
  MR_Box conv11_EnlargedAreaC_16;

  conv1_AreaA_11 = func_0(((MR_Box) (TypeClassInfo_for_region_27)), KA_7);
  AreaA_11 = MR_unbox_float(conv1_AreaA_11);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7))));
  conv3_AreaB_12 = func_2(((MR_Box) (TypeClassInfo_for_region_27)), KB_8);
  AreaB_12 = MR_unbox_float(conv3_AreaB_12);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7))));
  conv5_AreaC_13 = func_4(((MR_Box) (TypeClassInfo_for_region_27)), KC_9);
  AreaC_13 = MR_unbox_float(conv5_AreaC_13);
  func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9))));
  conv7_EnlargedAreaA_14 = func_6(((MR_Box) (TypeClassInfo_for_region_27)), Key_6, KA_7);
  EnlargedAreaA_14 = MR_unbox_float(conv7_EnlargedAreaA_14);
  func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9))));
  conv9_EnlargedAreaB_15 = func_8(((MR_Box) (TypeClassInfo_for_region_27)), Key_6, KB_8);
  EnlargedAreaB_15 = MR_unbox_float(conv9_EnlargedAreaB_15);
  func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9))));
  conv11_EnlargedAreaC_16 = func_10(((MR_Box) (TypeClassInfo_for_region_27)), Key_6, KC_9);
  EnlargedAreaC_16 = MR_unbox_float(conv11_EnlargedAreaC_16);
  IncreaseForA_17 = (EnlargedAreaA_14 - AreaA_11);
  IncreaseForB_18 = (EnlargedAreaB_15 - AreaB_12);
  IncreaseForC_19 = (EnlargedAreaC_16 - AreaC_13);
  succeeded = (IncreaseForA_17 < IncreaseForB_18);
  if (succeeded)
    Result0_20 = (MR_Integer) 0;
  else
  {
    succeeded = (IncreaseForA_17 > IncreaseForB_18);
    if (succeeded)
      Result0_20 = (MR_Integer) 1;
    else
    {
      succeeded = (AreaA_11 <= AreaB_12);
      if (succeeded)
        Result0_20 = (MR_Integer) 0;
      else
        Result0_20 = (MR_Integer) 1;
    }
  }
  succeeded = (Result0_20 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (IncreaseForA_17 < IncreaseForC_19);
    if (succeeded)
      Result_10 = (MR_Integer) 0;
    else
    {
      succeeded = (IncreaseForA_17 > IncreaseForC_19);
      if (succeeded)
        Result_10 = (MR_Integer) 2;
      else
      {
        succeeded = (AreaA_11 <= AreaC_13);
        if (succeeded)
          Result_10 = (MR_Integer) 0;
        else
          Result_10 = (MR_Integer) 2;
      }
    }
  }
  else
  {
    succeeded = (IncreaseForB_18 < IncreaseForC_19);
    if (succeeded)
      Result_10 = (MR_Integer) 1;
    else
    {
      succeeded = (IncreaseForB_18 > IncreaseForC_19);
      if (succeeded)
        Result_10 = (MR_Integer) 2;
      else
      {
        succeeded = (AreaA_11 <= AreaB_12);
        if (succeeded)
          Result_10 = (MR_Integer) 1;
        else
          Result_10 = (MR_Integer) 2;
      }
    }
  }
  return Result_10;
}

static MR_bool MR_CALL 
mercury__rtree__delete_2_7_p_0(
  MR_Word TypeInfo_for_V_67,
  MR_Word TypeClassInfo_for_region_66,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Integer Depth_4,
  MR_Box * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box V_8 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));

        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_67, V_3, V_8);
        if (succeeded)
        {
          *HeadVar__5_5 = K_2;
          *HeadVar__6_6 = HeadVar__1_1;
          *HeadVar__7_7 = (MR_Word) (&mercury__rtree_scalar_common_4[0]);
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_12 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
        MR_Word T0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Box K1_14 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
        MR_Word T1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
        MR_Box DK0_22;
        MR_Word DT0_23;
        MR_Word Info0_24;
        MR_Box DK0_78;
        MR_Word DT0_79;
        MR_Word Info0_80;
        MR_Integer Var_85;
        MR_Integer Var_86;

        succeeded = mercury__rtree__contains_2_p_0(TypeClassInfo_for_region_66, K_2, K0_12);
        if (succeeded)
        {
          Var_86 = (MR_Integer) 1;
          Var_85 = (MR_Integer) ((MR_Unsigned) Depth_4 + (MR_Unsigned) Var_86);
          succeeded = mercury__rtree__delete_2_7_p_0(TypeInfo_for_V_67, TypeClassInfo_for_region_66, T0_13, K_2, V_3, Var_85, &DK0_78, &DT0_79, &Info0_80);
          if (succeeded)
          {
            if (((MR_tag((MR_Word) Info0_80)) == (MR_Integer) 0))
            {
              MR_Word DLs_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_80, (MR_Integer) 0))));
              MR_Word Del_82;
              MR_Word Var_87;

              {
                Del_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Del_82, 0) = K1_14;
                MR_hl_field(MR_mktag(0), Del_82, 1) = ((MR_Box) (T1_15));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Del_82));
                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (DLs_81));
              }
              {
                Info0_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Info0_24, 0) = ((MR_Box) (Var_87));
              }
              DT0_23 = DT0_79;
              DK0_22 = K_2;
            }
            else
            {
              {
                DT0_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DT0_23, 0) = DK0_78;
                MR_hl_field(MR_mktag(1), DT0_23, 1) = ((MR_Box) (DT0_79));
                MR_hl_field(MR_mktag(1), DT0_23, 2) = K1_14;
                MR_hl_field(MR_mktag(1), DT0_23, 3) = ((MR_Box) (T1_15));
              }
              DK0_22 = mercury__rtree__bounding_region_2_f_0(TypeClassInfo_for_region_66, K1_14, DK0_78);
              Info0_24 = Info0_80;
            }
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          *HeadVar__5_5 = DK0_22;
          *HeadVar__6_6 = DT0_23;
          *HeadVar__7_7 = Info0_24;
          succeeded = MR_TRUE;
        }
        else
          succeeded = mercury__rtree__try_deletion2_10_p_0(TypeInfo_for_V_67, TypeClassInfo_for_region_66, K1_14, T1_15, K0_12, T0_13, K_2, V_3, Depth_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_25 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
        MR_Word T0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
        MR_Box K1_27 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
        MR_Word T1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
        MR_Box K2_29 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
        MR_Word T2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
        MR_Box DK0_37;
        MR_Word DT0_38;
        MR_Word Info0_39;

        succeeded = mercury__rtree__try_deletion3_12_p_0(TypeInfo_for_V_67, TypeClassInfo_for_region_66, K0_25, T0_26, K1_27, T1_28, K2_29, T2_30, K_2, V_3, Depth_4, &DK0_37, &DT0_38, &Info0_39);
        if (succeeded)
        {
          *HeadVar__5_5 = DK0_37;
          *HeadVar__6_6 = DT0_38;
          *HeadVar__7_7 = Info0_39;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Box DK0_40;
          MR_Word DT0_41;
          MR_Word Info0_42;

          succeeded = mercury__rtree__try_deletion3_12_p_0(TypeInfo_for_V_67, TypeClassInfo_for_region_66, K1_27, T1_28, K0_25, T0_26, K2_29, T2_30, K_2, V_3, Depth_4, &DK0_40, &DT0_41, &Info0_42);
          if (succeeded)
          {
            *HeadVar__5_5 = DK0_40;
            *HeadVar__6_6 = DT0_41;
            *HeadVar__7_7 = Info0_42;
            succeeded = MR_TRUE;
          }
          else
            succeeded = mercury__rtree__try_deletion3_12_p_0(TypeInfo_for_V_67, TypeClassInfo_for_region_66, K2_29, T2_30, K0_25, T0_26, K1_27, T1_28, K_2, V_3, Depth_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box K0_43 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
        MR_Word T0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
        MR_Box K1_45 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
        MR_Word T1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
        MR_Box K2_47 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4));
        MR_Word T2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
        MR_Box K3_49 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6));
        MR_Word T3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7))));
        MR_Box DK0_57;
        MR_Word DT0_58;
        MR_Word Info0_59;

        succeeded = mercury__rtree__try_deletion4_14_p_0(TypeInfo_for_V_67, TypeClassInfo_for_region_66, K0_43, T0_44, K1_45, T1_46, K2_47, T2_48, K3_49, T3_50, K_2, V_3, Depth_4, &DK0_57, &DT0_58, &Info0_59);
        if (succeeded)
        {
          *HeadVar__5_5 = DK0_57;
          *HeadVar__6_6 = DT0_58;
          *HeadVar__7_7 = Info0_59;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Box DK0_63;
          MR_Word DT0_64;
          MR_Word Info0_65;

          succeeded = mercury__rtree__try_deletion4_14_p_0(TypeInfo_for_V_67, TypeClassInfo_for_region_66, K1_45, T1_46, K0_43, T0_44, K2_47, T2_48, K3_49, T3_50, K_2, V_3, Depth_4, &DK0_63, &DT0_64, &Info0_65);
          if (succeeded)
          {
            *HeadVar__5_5 = DK0_63;
            *HeadVar__6_6 = DT0_64;
            *HeadVar__7_7 = Info0_65;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Box DK0_60;
            MR_Word DT0_61;
            MR_Word Info0_62;

            succeeded = mercury__rtree__try_deletion4_14_p_0(TypeInfo_for_V_67, TypeClassInfo_for_region_66, K2_47, T2_48, K0_43, T0_44, K1_45, T1_46, K3_49, T3_50, K_2, V_3, Depth_4, &DK0_60, &DT0_61, &Info0_62);
            if (succeeded)
            {
              *HeadVar__5_5 = DK0_60;
              *HeadVar__6_6 = DT0_61;
              *HeadVar__7_7 = Info0_62;
              succeeded = MR_TRUE;
            }
            else
              succeeded = mercury__rtree__try_deletion4_14_p_0(TypeInfo_for_V_67, TypeClassInfo_for_region_66, K3_49, T3_50, K0_43, T0_44, K1_45, T1_46, K2_47, T2_48, K_2, V_3, Depth_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7);
          }
        }
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__try_deletion4_14_p_0(
  MR_Word TypeInfo_for_V_43,
  MR_Word TypeClassInfo_for_region_42,
  MR_Box K0_15,
  MR_Word T0_16,
  MR_Box K1_17,
  MR_Word T1_18,
  MR_Box K2_19,
  MR_Word T2_20,
  MR_Box K3_21,
  MR_Word T3_22,
  MR_Box K_23,
  MR_Box V_24,
  MR_Integer D_25,
  MR_Box * DK_26,
  MR_Word * DT_27,
  MR_Word * DI_28)
{
  MR_bool succeeded;
  MR_Box DK0_29;
  MR_Word DT0_30;
  MR_Word DI0_31;
  MR_Integer Var_38;
  MR_Integer Var_39;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 6))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_42)), K_23, K0_15);
  if (succeeded)
  {
    Var_39 = (MR_Integer) 1;
    Var_38 = (MR_Integer) ((MR_Unsigned) D_25 + (MR_Unsigned) Var_39);
    succeeded = mercury__rtree__delete_2_7_p_0(TypeInfo_for_V_43, TypeClassInfo_for_region_42, T0_16, K_23, V_24, Var_38, &DK0_29, &DT0_30, &DI0_31);
    if (succeeded)
    {
      if (((MR_tag((MR_Word) DI0_31)) == (MR_Integer) 0))
      {
        MR_Word DLs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DI0_31, (MR_Integer) 0))));
        MR_Box K12_33;
        MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) D_25 + (MR_Unsigned) 1);
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *DI_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DLs_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *DT_27 = base;
          MR_hl_field(MR_mktag(2), base, 0) = K1_17;
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (T1_18));
          MR_hl_field(MR_mktag(2), base, 2) = K2_19;
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T2_20));
          MR_hl_field(MR_mktag(2), base, 4) = K3_21;
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (T3_22));
        }
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8))));
        K12_33 = func_1(((MR_Box) (TypeClassInfo_for_region_42)), K1_17, K2_19);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8))));
        *DK_26 = func_2(((MR_Box) (TypeClassInfo_for_region_42)), K3_21, K12_33);
      }
      else
      {
        MR_Box TK_36;
        MR_Box K23_37;
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
        MR_Box MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box);

        *DI_28 = DI0_31;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
          *DT_27 = base;
          MR_hl_field(MR_mktag(3), base, 0) = DK0_29;
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DT0_30));
          MR_hl_field(MR_mktag(3), base, 2) = K1_17;
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (T1_18));
          MR_hl_field(MR_mktag(3), base, 4) = K2_19;
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (T2_20));
          MR_hl_field(MR_mktag(3), base, 6) = K3_21;
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (T3_22));
        }
        func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8))));
        TK_36 = func_3(((MR_Box) (TypeClassInfo_for_region_42)), DK0_29, K1_17);
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8))));
        K23_37 = func_4(((MR_Box) (TypeClassInfo_for_region_42)), K2_19, K3_21);
        func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8))));
        *DK_26 = func_5(((MR_Box) (TypeClassInfo_for_region_42)), TK_36, K23_37);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__try_deletion3_12_p_0(
  MR_Word TypeInfo_for_V_37,
  MR_Word TypeClassInfo_for_region_36,
  MR_Box K0_13,
  MR_Word T0_14,
  MR_Box K1_15,
  MR_Word T1_16,
  MR_Box K2_17,
  MR_Word T2_18,
  MR_Box K_19,
  MR_Box V_20,
  MR_Integer Depth_21,
  MR_Box * DK_22,
  MR_Word * DT_23,
  MR_Word * DI_24)
{
  MR_bool succeeded;
  MR_Box DK0_25;
  MR_Word DT0_26;
  MR_Word DI0_27;
  MR_Integer Var_32;
  MR_Integer Var_33;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 6))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_36)), K_19, K0_13);
  if (succeeded)
  {
    Var_33 = (MR_Integer) 1;
    Var_32 = (MR_Integer) ((MR_Unsigned) Depth_21 + (MR_Unsigned) Var_33);
    succeeded = mercury__rtree__delete_2_7_p_0(TypeInfo_for_V_37, TypeClassInfo_for_region_36, T0_14, K_19, V_20, Var_32, &DK0_25, &DT0_26, &DI0_27);
    if (succeeded)
    {
      if (((MR_tag((MR_Word) DI0_27)) == (MR_Integer) 0))
      {
        MR_Word DLs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DI0_27, (MR_Integer) 0))));
        MR_Integer Var_34 = (MR_Integer) ((MR_Unsigned) Depth_21 + (MR_Unsigned) 1);
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *DI_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DLs_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *DT_23 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K1_15;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_16));
          MR_hl_field(MR_mktag(1), base, 2) = K2_17;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T2_18));
        }
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8))));
        *DK_22 = func_1(((MR_Box) (TypeClassInfo_for_region_36)), K1_15, K2_17);
      }
      else
      {
        MR_Box TK_31;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);

        *DI_24 = DI0_27;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *DT_23 = base;
          MR_hl_field(MR_mktag(2), base, 0) = DK0_25;
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (DT0_26));
          MR_hl_field(MR_mktag(2), base, 2) = K1_15;
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T1_16));
          MR_hl_field(MR_mktag(2), base, 4) = K2_17;
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (T2_18));
        }
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8))));
        TK_31 = func_2(((MR_Box) (TypeClassInfo_for_region_36)), DK0_25, K1_15);
        func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8))));
        *DK_22 = func_3(((MR_Box) (TypeClassInfo_for_region_36)), TK_31, K2_17);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__try_deletion2_10_p_0(
  MR_Word TypeInfo_for_V_32,
  MR_Word TypeClassInfo_for_region_31,
  MR_Box K0_11,
  MR_Word T0_12,
  MR_Box K1_13,
  MR_Word T1_14,
  MR_Box K_15,
  MR_Box V_16,
  MR_Integer Depth_17,
  MR_Box * DK_18,
  MR_Word * DT_19,
  MR_Word * Info_20)
{
  MR_bool succeeded;
  MR_Box DK0_21;
  MR_Word DT0_22;
  MR_Word Info0_23;
  MR_Integer Var_28;
  MR_Integer Var_29;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_31, (MR_Integer) 0)), (MR_Integer) 6))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_31)), K_15, K0_11);
  if (succeeded)
  {
    Var_29 = (MR_Integer) 1;
    Var_28 = (MR_Integer) ((MR_Unsigned) Depth_17 + (MR_Unsigned) Var_29);
    succeeded = mercury__rtree__delete_2_7_p_0(TypeInfo_for_V_32, TypeClassInfo_for_region_31, T0_12, K_15, V_16, Var_28, &DK0_21, &DT0_22, &Info0_23);
    if (succeeded)
    {
      if (((MR_tag((MR_Word) Info0_23)) == (MR_Integer) 0))
      {
        MR_Word DLs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info0_23, (MR_Integer) 0))));
        MR_Word Del_25;
        MR_Word Var_30;

        {
          Del_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Del_25, 0) = K1_13;
          MR_hl_field(MR_mktag(0), Del_25, 1) = ((MR_Box) (T1_14));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Del_25));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (DLs_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Info_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
        }
        *DT_19 = DT0_22;
        *DK_18 = K_15;
      }
      else
      {
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *DT_19 = base;
          MR_hl_field(MR_mktag(1), base, 0) = DK0_21;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DT0_22));
          MR_hl_field(MR_mktag(1), base, 2) = K1_13;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T1_14));
        }
        func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_31, (MR_Integer) 0)), (MR_Integer) 8))));
        *DK_18 = func_1(((MR_Box) (TypeClassInfo_for_region_31)), K1_13, DK0_21);
        *Info_20 = Info0_23;
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Box MR_CALL 
mercury__rtree__bounding_region_2_f_0(
  MR_Word TypeClassInfo_for_region_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Box HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_4, (MR_Integer) 0)), (MR_Integer) 8))));

  HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_region_4)), HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__rtree__contains_2_p_0(
  MR_Word TypeClassInfo_for_region_3,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 6))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_region_3)), HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

MR_Word MR_CALL 
mercury__rtree__insert_3_f_0(
  MR_Word TypeInfo_for_V_12,
  MR_Word TypeClassInfo_for_region_11,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word STATE_VARIABLE_Tree_0_8)
{
  MR_Word STATE_VARIABLE_Tree_9;

  mercury__rtree__insert_4_p_0(TypeInfo_for_V_12, TypeClassInfo_for_region_11, K_5, V_6, STATE_VARIABLE_Tree_0_8, &STATE_VARIABLE_Tree_9);
  return STATE_VARIABLE_Tree_9;
}

void MR_CALL 
mercury__rtree__insert_4_p_0(
  MR_Word TypeInfo_for_V_22,
  MR_Word TypeClassInfo_for_region_21,
  MR_Box K_1,
  MR_Box V_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  switch (MR_tag((MR_Word) HeadVar__3_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = K_1;
        MR_hl_field(MR_mktag(1), base, 1) = V_2;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Box V0_10 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_Word Var_12;
        MR_Word Var_13;
        MR_Word Var_14;

        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_13, 0) = V0_10;
        }
        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_14, 0) = V_2;
        }
        {
          Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_12, 0) = K0_9;
          MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
          MR_hl_field(MR_mktag(1), Var_12, 2) = K_1;
          MR_hl_field(MR_mktag(1), Var_12, 3) = ((MR_Box) (Var_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_T_0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_T_19;

        mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(TypeClassInfo_for_region_21, STATE_VARIABLE_T_0_18, K_1, V_2, &STATE_VARIABLE_T_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (STATE_VARIABLE_T_19));
        }
      }
      break;
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word TypeClassInfo_for_region_45,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * T_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "insert: leaf unexpected");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_12 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Result_17;

          Result_17 = mercury__rtree__choose_subtree_3_f_0(TypeClassInfo_for_region_45, K_2, K0_10, K1_12);
          switch (Result_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(TypeClassInfo_for_region_45, K0_10, T0_11, K1_12, T1_13, K_2, V_3, T_4);
              break;
            case (MR_Integer) 1:
              mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(TypeClassInfo_for_region_45, K1_12, T1_13, K0_10, T0_11, K_2, V_3, T_4);
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_18 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_20 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_22 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Word Result_27;
          MR_Float AreaA_52;
          MR_Float AreaB_53;
          MR_Float AreaC_54;
          MR_Float EnlargedAreaA_55;
          MR_Float EnlargedAreaB_56;
          MR_Float EnlargedAreaC_57;
          MR_Float IncreaseForA_58;
          MR_Float IncreaseForB_59;
          MR_Float IncreaseForC_60;
          MR_Word Result0_61;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7))));
          MR_Box conv1_AreaA_52;
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
          MR_Box conv3_AreaB_53;
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
          MR_Box conv5_AreaC_54;
          MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
          MR_Box conv7_EnlargedAreaA_55;
          MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box);
          MR_Box conv9_EnlargedAreaB_56;
          MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box);
          MR_Box conv11_EnlargedAreaC_57;

          conv1_AreaA_52 = func_0(((MR_Box) (TypeClassInfo_for_region_45)), K0_18);
          AreaA_52 = MR_unbox_float(conv1_AreaA_52);
          func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7))));
          conv3_AreaB_53 = func_2(((MR_Box) (TypeClassInfo_for_region_45)), K1_20);
          AreaB_53 = MR_unbox_float(conv3_AreaB_53);
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7))));
          conv5_AreaC_54 = func_4(((MR_Box) (TypeClassInfo_for_region_45)), K2_22);
          AreaC_54 = MR_unbox_float(conv5_AreaC_54);
          func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9))));
          conv7_EnlargedAreaA_55 = func_6(((MR_Box) (TypeClassInfo_for_region_45)), K_2, K0_18);
          EnlargedAreaA_55 = MR_unbox_float(conv7_EnlargedAreaA_55);
          func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9))));
          conv9_EnlargedAreaB_56 = func_8(((MR_Box) (TypeClassInfo_for_region_45)), K_2, K1_20);
          EnlargedAreaB_56 = MR_unbox_float(conv9_EnlargedAreaB_56);
          func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9))));
          conv11_EnlargedAreaC_57 = func_10(((MR_Box) (TypeClassInfo_for_region_45)), K_2, K2_22);
          EnlargedAreaC_57 = MR_unbox_float(conv11_EnlargedAreaC_57);
          IncreaseForA_58 = (EnlargedAreaA_55 - AreaA_52);
          IncreaseForB_59 = (EnlargedAreaB_56 - AreaB_53);
          IncreaseForC_60 = (EnlargedAreaC_57 - AreaC_54);
          succeeded = (IncreaseForA_58 < IncreaseForB_59);
          if (succeeded)
            Result0_61 = (MR_Integer) 0;
          else
          {
            succeeded = (IncreaseForA_58 > IncreaseForB_59);
            if (succeeded)
              Result0_61 = (MR_Integer) 1;
            else
            {
              succeeded = (AreaA_52 <= AreaB_53);
              if (succeeded)
                Result0_61 = (MR_Integer) 0;
              else
                Result0_61 = (MR_Integer) 1;
            }
          }
          succeeded = (Result0_61 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (IncreaseForA_58 < IncreaseForC_60);
            if (succeeded)
              Result_27 = (MR_Integer) 0;
            else
            {
              succeeded = (IncreaseForA_58 > IncreaseForC_60);
              if (succeeded)
                Result_27 = (MR_Integer) 2;
              else
              {
                succeeded = (AreaA_52 <= AreaC_54);
                if (succeeded)
                  Result_27 = (MR_Integer) 0;
                else
                  Result_27 = (MR_Integer) 2;
              }
            }
          }
          else
          {
            succeeded = (IncreaseForB_59 < IncreaseForC_60);
            if (succeeded)
              Result_27 = (MR_Integer) 1;
            else
            {
              succeeded = (IncreaseForB_59 > IncreaseForC_60);
              if (succeeded)
                Result_27 = (MR_Integer) 2;
              else
              {
                succeeded = (AreaA_52 <= AreaB_53);
                if (succeeded)
                  Result_27 = (MR_Integer) 1;
                else
                  Result_27 = (MR_Integer) 2;
              }
            }
          }
          switch (Result_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(TypeClassInfo_for_region_45, K0_18, T0_19, K1_20, T1_21, K2_22, T2_23, K_2, V_3, T_4);
              break;
            case (MR_Integer) 1:
              mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(TypeClassInfo_for_region_45, K1_20, T1_21, K0_18, T0_19, K2_22, T2_23, K_2, V_3, T_4);
              break;
            case (MR_Integer) 2:
              mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(TypeClassInfo_for_region_45, K2_22, T2_23, K0_18, T0_19, K1_20, T1_21, K_2, V_3, T_4);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_40;
          MR_Word T0_41;
          MR_Box K1_42;
          MR_Word T1_43;
          MR_Word Var_44;
          MR_Word next_value_of_HeadVar__1_1;

          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_45, HeadVar__1_1, &K0_40, &T0_41, &K1_42, &T1_43);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = K0_40;
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (T0_41));
            MR_hl_field(MR_mktag(1), Var_44, 2) = K1_42;
            MR_hl_field(MR_mktag(1), Var_44, 3) = ((MR_Box) (T1_43));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Var_44;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(
  MR_Word TypeClassInfo_for_region_45,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * AddrOfT_89)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "insert: leaf unexpected");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_12 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Result_17;

          Result_17 = mercury__rtree__choose_subtree_3_f_0(TypeClassInfo_for_region_45, K_2, K0_10, K1_12);
          switch (Result_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word T_92;

                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(TypeClassInfo_for_region_45, K0_10, T0_11, K1_12, T1_13, K_2, V_3, &T_92);
                *AddrOfT_89 = T_92;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word T_93;

                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(TypeClassInfo_for_region_45, K1_12, T1_13, K0_10, T0_11, K_2, V_3, &T_93);
                *AddrOfT_89 = T_93;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_18 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Word T0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Box K1_20 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2));
          MR_Word T1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box K2_22 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 4));
          MR_Word T2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 5))));
          MR_Word Result_27;
          MR_Float AreaA_52;
          MR_Float AreaB_53;
          MR_Float AreaC_54;
          MR_Float EnlargedAreaA_55;
          MR_Float EnlargedAreaB_56;
          MR_Float EnlargedAreaC_57;
          MR_Float IncreaseForA_58;
          MR_Float IncreaseForB_59;
          MR_Float IncreaseForC_60;
          MR_Word Result0_61;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7))));
          MR_Box conv1_AreaA_52;
          MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
          MR_Box conv3_AreaB_53;
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box);
          MR_Box conv5_AreaC_54;
          MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
          MR_Box conv7_EnlargedAreaA_55;
          MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box);
          MR_Box conv9_EnlargedAreaB_56;
          MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box);
          MR_Box conv11_EnlargedAreaC_57;

          conv1_AreaA_52 = func_0(((MR_Box) (TypeClassInfo_for_region_45)), K0_18);
          AreaA_52 = MR_unbox_float(conv1_AreaA_52);
          func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7))));
          conv3_AreaB_53 = func_2(((MR_Box) (TypeClassInfo_for_region_45)), K1_20);
          AreaB_53 = MR_unbox_float(conv3_AreaB_53);
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7))));
          conv5_AreaC_54 = func_4(((MR_Box) (TypeClassInfo_for_region_45)), K2_22);
          AreaC_54 = MR_unbox_float(conv5_AreaC_54);
          func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9))));
          conv7_EnlargedAreaA_55 = func_6(((MR_Box) (TypeClassInfo_for_region_45)), K_2, K0_18);
          EnlargedAreaA_55 = MR_unbox_float(conv7_EnlargedAreaA_55);
          func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9))));
          conv9_EnlargedAreaB_56 = func_8(((MR_Box) (TypeClassInfo_for_region_45)), K_2, K1_20);
          EnlargedAreaB_56 = MR_unbox_float(conv9_EnlargedAreaB_56);
          func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9))));
          conv11_EnlargedAreaC_57 = func_10(((MR_Box) (TypeClassInfo_for_region_45)), K_2, K2_22);
          EnlargedAreaC_57 = MR_unbox_float(conv11_EnlargedAreaC_57);
          IncreaseForA_58 = (EnlargedAreaA_55 - AreaA_52);
          IncreaseForB_59 = (EnlargedAreaB_56 - AreaB_53);
          IncreaseForC_60 = (EnlargedAreaC_57 - AreaC_54);
          succeeded = (IncreaseForA_58 < IncreaseForB_59);
          if (succeeded)
            Result0_61 = (MR_Integer) 0;
          else
          {
            succeeded = (IncreaseForA_58 > IncreaseForB_59);
            if (succeeded)
              Result0_61 = (MR_Integer) 1;
            else
            {
              succeeded = (AreaA_52 <= AreaB_53);
              if (succeeded)
                Result0_61 = (MR_Integer) 0;
              else
                Result0_61 = (MR_Integer) 1;
            }
          }
          succeeded = (Result0_61 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (IncreaseForA_58 < IncreaseForC_60);
            if (succeeded)
              Result_27 = (MR_Integer) 0;
            else
            {
              succeeded = (IncreaseForA_58 > IncreaseForC_60);
              if (succeeded)
                Result_27 = (MR_Integer) 2;
              else
              {
                succeeded = (AreaA_52 <= AreaC_54);
                if (succeeded)
                  Result_27 = (MR_Integer) 0;
                else
                  Result_27 = (MR_Integer) 2;
              }
            }
          }
          else
          {
            succeeded = (IncreaseForB_59 < IncreaseForC_60);
            if (succeeded)
              Result_27 = (MR_Integer) 1;
            else
            {
              succeeded = (IncreaseForB_59 > IncreaseForC_60);
              if (succeeded)
                Result_27 = (MR_Integer) 2;
              else
              {
                succeeded = (AreaA_52 <= AreaB_53);
                if (succeeded)
                  Result_27 = (MR_Integer) 1;
                else
                  Result_27 = (MR_Integer) 2;
              }
            }
          }
          switch (Result_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word T_4;

                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(TypeClassInfo_for_region_45, K0_18, T0_19, K1_20, T1_21, K2_22, T2_23, K_2, V_3, &T_4);
                *AddrOfT_89 = T_4;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word T_90;

                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(TypeClassInfo_for_region_45, K1_20, T1_21, K0_18, T0_19, K2_22, T2_23, K_2, V_3, &T_90);
                *AddrOfT_89 = T_90;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word T_91;

                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(TypeClassInfo_for_region_45, K2_22, T2_23, K0_18, T0_19, K1_20, T1_21, K_2, V_3, &T_91);
                *AddrOfT_89 = T_91;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box K0_40;
          MR_Word T0_41;
          MR_Box K1_42;
          MR_Word T1_43;
          MR_Word Var_44;
          MR_Word next_value_of_HeadVar__1_1;

          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_45, HeadVar__1_1, &K0_40, &T0_41, &K1_42, &T1_43);
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = K0_40;
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (T0_41));
            MR_hl_field(MR_mktag(1), Var_44, 2) = K1_42;
            MR_hl_field(MR_mktag(1), Var_44, 3) = ((MR_Box) (T1_43));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Var_44;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(
  MR_Word TypeClassInfo_for_region_52,
  MR_Box K0_10,
  MR_Word T0_11,
  MR_Box K1_12,
  MR_Word T1_13,
  MR_Box K2_14,
  MR_Word T2_15,
  MR_Box K_16,
  MR_Box V_17,
  MR_Word * T_18)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) T0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_47;

        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_47, 0) = V_17;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
          *T_18 = base;
          MR_hl_field(MR_mktag(3), base, 0) = K0_10;
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (T0_11));
          MR_hl_field(MR_mktag(3), base, 2) = K1_12;
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (T1_13));
          MR_hl_field(MR_mktag(3), base, 4) = K2_14;
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (T2_15));
          MR_hl_field(MR_mktag(3), base, 6) = K_16;
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (Var_47));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box NK0_24;
        MR_Box MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Word * AddrNT0_67;

        NK0_24 = func_11(((MR_Box) (TypeClassInfo_for_region_52)), K_16, K0_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *T_18 = base;
          MR_hl_field(MR_mktag(2), base, 0) = NK0_24;
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
          MR_hl_field(MR_mktag(2), base, 2) = K1_12;
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T1_13));
          MR_hl_field(MR_mktag(2), base, 4) = K2_14;
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (T2_15));
        }
        AddrNT0_67 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *T_18, (MR_Integer) 1)));
        mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(TypeClassInfo_for_region_52, T0_11, K_16, V_17, AddrNT0_67);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box NK0_48;
        MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Word * AddrNT0_66;

        NK0_48 = func_10(((MR_Box) (TypeClassInfo_for_region_52)), K_16, K0_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *T_18 = base;
          MR_hl_field(MR_mktag(2), base, 0) = NK0_48;
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
          MR_hl_field(MR_mktag(2), base, 2) = K1_12;
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T1_13));
          MR_hl_field(MR_mktag(2), base, 4) = K2_14;
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (T2_15));
        }
        AddrNT0_66 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *T_18, (MR_Integer) 1)));
        mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(TypeClassInfo_for_region_52, T0_11, K_16, V_17, AddrNT0_66);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box K3_40;
        MR_Word T3_41;
        MR_Box K4_42;
        MR_Word T4_43;
        MR_Word Result_44;
        MR_Float SizeA_58;
        MR_Float SizeB_59;
        MR_Float EnlargedSizeA_60;
        MR_Float EnlargedSizeB_61;
        MR_Float IncreaseForA_62;
        MR_Float IncreaseForB_63;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_SizeA_58;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
        MR_Box conv3_SizeB_59;
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
        MR_Box conv5_EnlargedSizeA_60;
        MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
        MR_Box conv7_EnlargedSizeB_61;

        mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_52, T0_11, &K3_40, &T3_41, &K4_42, &T4_43);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 7))));
        conv1_SizeA_58 = func_0(((MR_Box) (TypeClassInfo_for_region_52)), K2_14);
        SizeA_58 = MR_unbox_float(conv1_SizeA_58);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 7))));
        conv3_SizeB_59 = func_2(((MR_Box) (TypeClassInfo_for_region_52)), K3_40);
        SizeB_59 = MR_unbox_float(conv3_SizeB_59);
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 9))));
        conv5_EnlargedSizeA_60 = func_4(((MR_Box) (TypeClassInfo_for_region_52)), K_16, K2_14);
        EnlargedSizeA_60 = MR_unbox_float(conv5_EnlargedSizeA_60);
        func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 9))));
        conv7_EnlargedSizeB_61 = func_6(((MR_Box) (TypeClassInfo_for_region_52)), K_16, K3_40);
        EnlargedSizeB_61 = MR_unbox_float(conv7_EnlargedSizeB_61);
        IncreaseForA_62 = (EnlargedSizeA_60 - SizeA_58);
        IncreaseForB_63 = (EnlargedSizeB_61 - SizeB_59);
        succeeded = (IncreaseForA_62 < IncreaseForB_63);
        if (succeeded)
          Result_44 = (MR_Integer) 0;
        else
        {
          succeeded = (IncreaseForA_62 > IncreaseForB_63);
          if (succeeded)
            Result_44 = (MR_Integer) 1;
          else
          {
            succeeded = (SizeA_58 <= SizeB_59);
            if (succeeded)
              Result_44 = (MR_Integer) 0;
            else
              Result_44 = (MR_Integer) 1;
          }
        }
        switch (Result_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box K5_45;
              MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8))));
              MR_Word * AddrT5_64;

              K5_45 = func_8(((MR_Box) (TypeClassInfo_for_region_52)), K_16, K3_40);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
                *T_18 = base;
                MR_hl_field(MR_mktag(3), base, 0) = K1_12;
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (T1_13));
                MR_hl_field(MR_mktag(3), base, 2) = K2_14;
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (T2_15));
                MR_hl_field(MR_mktag(3), base, 4) = K4_42;
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (T4_43));
                MR_hl_field(MR_mktag(3), base, 6) = K5_45;
                MR_hl_field(MR_mktag(3), base, 7) = NULL;
              }
              AddrT5_64 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *T_18, (MR_Integer) 7)));
              mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(TypeClassInfo_for_region_52, T3_41, K_16, V_17, AddrT5_64);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box K5_50;
              MR_Box MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8))));
              MR_Word * AddrT5_65;

              K5_50 = func_9(((MR_Box) (TypeClassInfo_for_region_52)), K_16, K4_42);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
                *T_18 = base;
                MR_hl_field(MR_mktag(3), base, 0) = K1_12;
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (T1_13));
                MR_hl_field(MR_mktag(3), base, 2) = K2_14;
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (T2_15));
                MR_hl_field(MR_mktag(3), base, 4) = K3_40;
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (T3_41));
                MR_hl_field(MR_mktag(3), base, 6) = K5_50;
                MR_hl_field(MR_mktag(3), base, 7) = NULL;
              }
              AddrT5_65 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *T_18, (MR_Integer) 7)));
              mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(TypeClassInfo_for_region_52, T4_43, K_16, V_17, AddrT5_65);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(
  MR_Word TypeClassInfo_for_region_48,
  MR_Box K0_8,
  MR_Word T0_9,
  MR_Box K1_10,
  MR_Word T1_11,
  MR_Box K_12,
  MR_Box V_13,
  MR_Word * T_14)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) T0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_43;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = V_13;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *T_14 = base;
          MR_hl_field(MR_mktag(2), base, 0) = K0_8;
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (T0_9));
          MR_hl_field(MR_mktag(2), base, 2) = K1_10;
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T1_11));
          MR_hl_field(MR_mktag(2), base, 4) = K_12;
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Var_43));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box NK0_20;
        MR_Box MR_CALL (* func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Word * AddrNT0_63;

        NK0_20 = func_11(((MR_Box) (TypeClassInfo_for_region_48)), K_12, K0_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = NK0_20;
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
          MR_hl_field(MR_mktag(1), base, 2) = K1_10;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T1_11));
        }
        AddrNT0_63 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *T_14, (MR_Integer) 1)));
        mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(TypeClassInfo_for_region_48, T0_9, K_12, V_13, AddrNT0_63);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box NK0_44;
        MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Word * AddrNT0_62;

        NK0_44 = func_10(((MR_Box) (TypeClassInfo_for_region_48)), K_12, K0_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = NK0_44;
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
          MR_hl_field(MR_mktag(1), base, 2) = K1_10;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T1_11));
        }
        AddrNT0_62 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *T_14, (MR_Integer) 1)));
        mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(TypeClassInfo_for_region_48, T0_9, K_12, V_13, AddrNT0_62);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Box K2_36;
        MR_Word T2_37;
        MR_Box K3_38;
        MR_Word T3_39;
        MR_Word Result_40;
        MR_Float SizeA_54;
        MR_Float SizeB_55;
        MR_Float EnlargedSizeA_56;
        MR_Float EnlargedSizeB_57;
        MR_Float IncreaseForA_58;
        MR_Float IncreaseForB_59;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_SizeA_54;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
        MR_Box conv3_SizeB_55;
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
        MR_Box conv5_EnlargedSizeA_56;
        MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
        MR_Box conv7_EnlargedSizeB_57;

        mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(TypeClassInfo_for_region_48, T0_9, &K2_36, &T2_37, &K3_38, &T3_39);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 7))));
        conv1_SizeA_54 = func_0(((MR_Box) (TypeClassInfo_for_region_48)), K2_36);
        SizeA_54 = MR_unbox_float(conv1_SizeA_54);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 7))));
        conv3_SizeB_55 = func_2(((MR_Box) (TypeClassInfo_for_region_48)), K3_38);
        SizeB_55 = MR_unbox_float(conv3_SizeB_55);
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 9))));
        conv5_EnlargedSizeA_56 = func_4(((MR_Box) (TypeClassInfo_for_region_48)), K_12, K2_36);
        EnlargedSizeA_56 = MR_unbox_float(conv5_EnlargedSizeA_56);
        func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 9))));
        conv7_EnlargedSizeB_57 = func_6(((MR_Box) (TypeClassInfo_for_region_48)), K_12, K3_38);
        EnlargedSizeB_57 = MR_unbox_float(conv7_EnlargedSizeB_57);
        IncreaseForA_58 = (EnlargedSizeA_56 - SizeA_54);
        IncreaseForB_59 = (EnlargedSizeB_57 - SizeB_55);
        succeeded = (IncreaseForA_58 < IncreaseForB_59);
        if (succeeded)
          Result_40 = (MR_Integer) 0;
        else
        {
          succeeded = (IncreaseForA_58 > IncreaseForB_59);
          if (succeeded)
            Result_40 = (MR_Integer) 1;
          else
          {
            succeeded = (SizeA_54 <= SizeB_55);
            if (succeeded)
              Result_40 = (MR_Integer) 0;
            else
              Result_40 = (MR_Integer) 1;
          }
        }
        switch (Result_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box K4_41;
              MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8))));
              MR_Word * AddrT4_60;

              K4_41 = func_8(((MR_Box) (TypeClassInfo_for_region_48)), K_12, K2_36);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *T_14 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K1_10;
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (T1_11));
                MR_hl_field(MR_mktag(2), base, 2) = K3_38;
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T3_39));
                MR_hl_field(MR_mktag(2), base, 4) = K4_41;
                MR_hl_field(MR_mktag(2), base, 5) = NULL;
              }
              AddrT4_60 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *T_14, (MR_Integer) 5)));
              mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(TypeClassInfo_for_region_48, T2_37, K_12, V_13, AddrT4_60);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box K4_46;
              MR_Box MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8))));
              MR_Word * AddrT4_61;

              K4_46 = func_9(((MR_Box) (TypeClassInfo_for_region_48)), K_12, K3_38);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                *T_14 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K1_10;
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (T1_11));
                MR_hl_field(MR_mktag(2), base, 2) = K2_36;
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (T2_37));
                MR_hl_field(MR_mktag(2), base, 4) = K4_46;
                MR_hl_field(MR_mktag(2), base, 5) = NULL;
              }
              AddrT4_61 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *T_14, (MR_Integer) 5)));
              mercury__rtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_95_95_49_4_p_0(TypeClassInfo_for_region_48, T3_39, K_12, V_13, AddrT4_61);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word TypeClassInfo_for_region_29,
  MR_Word Four_6,
  MR_Box * K4_7,
  MR_Word * T4_8,
  MR_Box * K5_9,
  MR_Word * T5_10)
{
  MR_bool succeeded;
  MR_Box K0_11 = (MR_hl_field(MR_mktag(3), Four_6, (MR_Integer) 0));
  MR_Word T0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Four_6, (MR_Integer) 1))));
  MR_Box K1_13 = (MR_hl_field(MR_mktag(3), Four_6, (MR_Integer) 2));
  MR_Word T1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Four_6, (MR_Integer) 3))));
  MR_Box K2_15 = (MR_hl_field(MR_mktag(3), Four_6, (MR_Integer) 4));
  MR_Word T2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Four_6, (MR_Integer) 5))));
  MR_Box K3_17 = (MR_hl_field(MR_mktag(3), Four_6, (MR_Integer) 6));
  MR_Word T3_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Four_6, (MR_Integer) 7))));
  MR_Float A01_19;
  MR_Float A23_20;
  MR_Float A0123_21;
  MR_Float A02_22;
  MR_Float A13_23;
  MR_Float A0213_24;
  MR_Float A03_25;
  MR_Float A12_26;
  MR_Float A0312_27;
  MR_Word Min_28;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9))));
  MR_Box conv1_A01_19;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_A23_20;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
  MR_Box conv5_A02_22;
  MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
  MR_Box conv7_A13_23;
  MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box);
  MR_Box conv9_A03_25;
  MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box);
  MR_Box conv11_A12_26;

  conv1_A01_19 = func_0(((MR_Box) (TypeClassInfo_for_region_29)), K0_11, K1_13);
  A01_19 = MR_unbox_float(conv1_A01_19);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9))));
  conv3_A23_20 = func_2(((MR_Box) (TypeClassInfo_for_region_29)), K2_15, K3_17);
  A23_20 = MR_unbox_float(conv3_A23_20);
  A0123_21 = (A01_19 + A23_20);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9))));
  conv5_A02_22 = func_4(((MR_Box) (TypeClassInfo_for_region_29)), K0_11, K2_15);
  A02_22 = MR_unbox_float(conv5_A02_22);
  func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9))));
  conv7_A13_23 = func_6(((MR_Box) (TypeClassInfo_for_region_29)), K1_13, K3_17);
  A13_23 = MR_unbox_float(conv7_A13_23);
  A0213_24 = (A02_22 + A13_23);
  func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9))));
  conv9_A03_25 = func_8(((MR_Box) (TypeClassInfo_for_region_29)), K0_11, K3_17);
  A03_25 = MR_unbox_float(conv9_A03_25);
  func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9))));
  conv11_A12_26 = func_10(((MR_Box) (TypeClassInfo_for_region_29)), K1_13, K2_15);
  A12_26 = MR_unbox_float(conv11_A12_26);
  A0312_27 = (A03_25 + A12_26);
  succeeded = (A0123_21 <= A0213_24);
  if (succeeded)
  {
    succeeded = (A0123_21 <= A0312_27);
    if (succeeded)
      Min_28 = (MR_Integer) 0;
    else
      Min_28 = (MR_Integer) 2;
  }
  else
  {
    succeeded = (A0213_24 <= A0312_27);
    if (succeeded)
      Min_28 = (MR_Integer) 1;
    else
      Min_28 = (MR_Integer) 2;
  }
  switch (Min_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box MR_CALL (* func_12)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Box MR_CALL (* func_13)(MR_Box, MR_Box, MR_Box);

        *K4_7 = func_12(((MR_Box) (TypeClassInfo_for_region_29)), K0_11, K1_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T4_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K0_11;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T0_12));
          MR_hl_field(MR_mktag(1), base, 2) = K1_13;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T1_14));
        }
        func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8))));
        *K5_9 = func_13(((MR_Box) (TypeClassInfo_for_region_29)), K2_15, K3_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T5_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K2_15;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T2_16));
          MR_hl_field(MR_mktag(1), base, 2) = K3_17;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T3_18));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box MR_CALL (* func_14)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Box MR_CALL (* func_15)(MR_Box, MR_Box, MR_Box);

        *K4_7 = func_14(((MR_Box) (TypeClassInfo_for_region_29)), K0_11, K2_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T4_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K0_11;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T0_12));
          MR_hl_field(MR_mktag(1), base, 2) = K2_15;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T2_16));
        }
        func_15 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8))));
        *K5_9 = func_15(((MR_Box) (TypeClassInfo_for_region_29)), K1_13, K3_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T5_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K1_13;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_14));
          MR_hl_field(MR_mktag(1), base, 2) = K3_17;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T3_18));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box MR_CALL (* func_16)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8))));
        MR_Box MR_CALL (* func_17)(MR_Box, MR_Box, MR_Box);

        *K4_7 = func_16(((MR_Box) (TypeClassInfo_for_region_29)), K0_11, K3_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T4_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K0_11;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T0_12));
          MR_hl_field(MR_mktag(1), base, 2) = K3_17;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T3_18));
        }
        func_17 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8))));
        *K5_9 = func_17(((MR_Box) (TypeClassInfo_for_region_29)), K1_13, K2_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *T5_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K1_13;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_14));
          MR_hl_field(MR_mktag(1), base, 2) = K2_15;
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (T2_16));
        }
      }
      break;
  }
}

static MR_Word MR_CALL 
mercury__rtree__choose_subtree_3_f_0(
  MR_Word TypeClassInfo_for_region_15,
  MR_Box Key_5,
  MR_Box KA_6,
  MR_Box KB_7)
{
  MR_bool succeeded;
  MR_Word Result_8;
  MR_Float SizeA_9;
  MR_Float SizeB_10;
  MR_Float EnlargedSizeA_11;
  MR_Float EnlargedSizeB_12;
  MR_Float IncreaseForA_13;
  MR_Float IncreaseForB_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 7))));
  MR_Box conv1_SizeA_9;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box);
  MR_Box conv3_SizeB_10;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
  MR_Box conv5_EnlargedSizeA_11;
  MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
  MR_Box conv7_EnlargedSizeB_12;

  conv1_SizeA_9 = func_0(((MR_Box) (TypeClassInfo_for_region_15)), KA_6);
  SizeA_9 = MR_unbox_float(conv1_SizeA_9);
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 7))));
  conv3_SizeB_10 = func_2(((MR_Box) (TypeClassInfo_for_region_15)), KB_7);
  SizeB_10 = MR_unbox_float(conv3_SizeB_10);
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 9))));
  conv5_EnlargedSizeA_11 = func_4(((MR_Box) (TypeClassInfo_for_region_15)), Key_5, KA_6);
  EnlargedSizeA_11 = MR_unbox_float(conv5_EnlargedSizeA_11);
  func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 9))));
  conv7_EnlargedSizeB_12 = func_6(((MR_Box) (TypeClassInfo_for_region_15)), Key_5, KB_7);
  EnlargedSizeB_12 = MR_unbox_float(conv7_EnlargedSizeB_12);
  IncreaseForA_13 = (EnlargedSizeA_11 - SizeA_9);
  IncreaseForB_14 = (EnlargedSizeB_12 - SizeB_10);
  succeeded = (IncreaseForA_13 < IncreaseForB_14);
  if (succeeded)
    Result_8 = (MR_Integer) 0;
  else
  {
    succeeded = (IncreaseForA_13 > IncreaseForB_14);
    if (succeeded)
      Result_8 = (MR_Integer) 1;
    else
    {
      succeeded = (SizeA_9 <= SizeB_10);
      if (succeeded)
        Result_8 = (MR_Integer) 0;
      else
        Result_8 = (MR_Integer) 1;
    }
  }
  return Result_8;
}

MR_bool MR_CALL 
mercury__rtree__is_empty_1_p_0(
  MR_Word TypeInfo_for_K_2,
  MR_Word TypeInfo_for_V_3,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_Word MR_CALL 
mercury__rtree__init_0_f_0(
  MR_Word TypeInfo_for_V_3,
  MR_Word TypeClassInfo_for_region_2)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____box_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____box_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____box_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____box3d_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____box3d_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____box3d_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____delete_info_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____delete_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____delete_info_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____interval_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____interval_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____interval_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____min_of_four_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____min_of_four_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____min_of_three_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____min_of_three_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____min_of_two_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____min_of_two_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____orphan_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____orphan_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____orphan_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____orphans_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____orphans_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____orphans_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____rtree_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____rtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____rtree_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__rtree____Unify____rtree_2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtree____Compare____rtree_2_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Float conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = MR_box_float(conv0_HeadVar__2_2);
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Float conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = MR_box_float(conv0_HeadVar__3_3);
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Float conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = MR_box_float(conv0_HeadVar__2_2);
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Float conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = MR_box_float(conv0_HeadVar__3_3);
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Float conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = MR_box_float(conv0_HeadVar__2_2);
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Float conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = MR_box_float(conv0_HeadVar__3_3);
  return wrapper_arg_3;
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

// :- end_module rtree.
