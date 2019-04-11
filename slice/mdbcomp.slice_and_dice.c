/*
** Automatically generated from `mdbcomp.slice_and_dice.m'
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


/* :- module mdbcomp.slice_and_dice. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__slice_and_dice__init
ENDINIT
*/

#include "mdbcomp.slice_and_dice.mih"
#include "mdbcomp.slice_and_dice.mh"


#include "mdbcomp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0[3];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0[3];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0[1];

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0[6];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0[6];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0[1];

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0[3];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0[3];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0[1];

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0[2];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0[2];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0[1];

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0[4];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0[4];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0[1];

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0[3];

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0[3];

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0;

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0[1];

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0[1];

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0[1];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0[1];

static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0;

static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1;

static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0[2];

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0[2];

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static void MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_7,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_8);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(
  MR_Word mdbcomp__slice_and_dice__LabelCounts_8,
  MR_Integer mdbcomp__slice_and_dice__TotalPassTests_9,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_11,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_12,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_13);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__622__1_2_p_0(
  MR_Integer mdbcomp__slice_and_dice__HeadVar__1_55,
  MR_Integer mdbcomp__slice_and_dice__HeadVar__2_87);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_path_port_1_f_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_proc_label_1_f_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_3);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_float_2_f_0(
  MR_Integer mdbcomp__slice_and_dice__DecimalPlaces_4,
  MR_Float mdbcomp__slice_and_dice__Flt_5);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__bracket_int_1_f_0(
  MR_Integer mdbcomp__slice_and_dice__X_3);

static MR_Float MR_CALL 
mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0(
  MR_Word mdbcomp__slice_and_dice__Dice_4,
  MR_Box mdbcomp__slice_and_dice__LabelLayout_5);

static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(
  MR_Word mdbcomp__slice_and_dice__DiceLabelCount_9,
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_10,
  MR_Word * mdbcomp__slice_and_dice__PathPort_11,
  MR_String * mdbcomp__slice_and_dice__FormattedContext_12,
  MR_Integer * mdbcomp__slice_and_dice__PassCount_13,
  MR_Integer * mdbcomp__slice_and_dice__PassTests_14,
  MR_Integer * mdbcomp__slice_and_dice__FailCount_15,
  MR_Integer * mdbcomp__slice_and_dice__FailTests_16);

static void MR_CALL 
mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word * mdbcomp__slice_and_dice__DiceLabelCount_7);

static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
  MR_Word mdbcomp__slice_and_dice__ProcDice_6,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(
  MR_String mdbcomp__slice_and_dice__SortStr_5,
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(
  MR_String mdbcomp__slice_and_dice__SortStr_5,
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(
  MR_String mdbcomp__slice_and_dice__Module_3,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0(
  MR_String mdbcomp__slice_and_dice__PassFile_10,
  MR_String mdbcomp__slice_and_dice__FailFile_11,
  MR_String mdbcomp__slice_and_dice__SortStr_12,
  MR_Integer mdbcomp__slice_and_dice__MaxRow_13,
  MR_String mdbcomp__slice_and_dice__Module_14,
  MR_String * mdbcomp__slice_and_dice__DiceStr_15,
  MR_String * mdbcomp__slice_and_dice__Problem_16);

static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_7,
  MR_Word * mdbcomp__slice_and_dice__PathPort_8,
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_9,
  MR_String * mdbcomp__slice_and_dice__FormattedContext_10,
  MR_Integer * mdbcomp__slice_and_dice__Count_11,
  MR_Integer * mdbcomp__slice_and_dice__Tests_12);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static void MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6);

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(
  MR_Word mdbcomp__slice_and_dice__LabelCounts_7,
  MR_Integer mdbcomp__slice_and_dice__TotalTests_8,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_9,
  MR_Word mdbcomp__slice_and_dice__MaybePathColumns_10,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_11);

static void MR_CALL 
mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word * mdbcomp__slice_and_dice__SliceLabelCount_7);

static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
  MR_Word mdbcomp__slice_and_dice__ProcSlice_6,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(
  MR_String mdbcomp__slice_and_dice__SortStr_5,
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(
  MR_String mdbcomp__slice_and_dice__SortStr_5,
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_2);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(
  MR_String mdbcomp__slice_and_dice__Module_3,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_2,
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_3,
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_4);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(
  MR_String mdbcomp__slice_and_dice__FileName_7,
  MR_Word mdbcomp__slice_and_dice__Kind_8,
  MR_Word mdbcomp__slice_and_dice__PathPort_9,
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_10,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(
  MR_Word mdbcomp__slice_and_dice__Kind_6,
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_7,
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_8,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16);

static void MR_CALL 
mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word * mdbcomp__slice_and_dice__Dice_2);

static void MR_CALL 
mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_String * mdbcomp__slice_and_dice__HeadVar__2_2);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_4,
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_5,
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_6);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(
  MR_String mdbcomp__slice_and_dice__FileName_6,
  MR_Word mdbcomp__slice_and_dice__PathPort_7,
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_8,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_5,
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_6,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);


static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_1[24][3];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_2[15][2];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_3[6][7];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_4[6][5];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_5[5][4];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_6[2][8];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_7[5][6];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_8[2][9];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_9[1][1];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_10[1][11];




static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_1[24][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__string__string__type_ctor_info_justified_column_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_slice_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[1])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_5[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[1])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[2])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_10[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[2])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_2[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 84)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 116)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 67)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 99)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 68)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 100)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 83)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 115)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 70)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 102)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 80)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 112)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[13])))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_3[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_4[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_5[5][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_dice_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_dice_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[5])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_6[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_7[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_8[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_9[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.slice_and_dice.mh"

#line 322 "slice_and_dice.m"
void 
MR_MDBCOMP_read_dice(
  MR_String mdbcomp__slice_and_dice__PassFile_6,
  MR_String mdbcomp__slice_and_dice__FailFile_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 322 "slice_and_dice.m"
{
#line 322 "slice_and_dice.m"
	mdbcomp__slice_and_dice__read_dice_5_p_0((MR_String) mdbcomp__slice_and_dice__PassFile_6, (MR_String) mdbcomp__slice_and_dice__FailFile_7, (MR_Word *) mdbcomp__slice_and_dice__Result_8);
}

#line 352 "slice_and_dice.m"
void 
MR_MDBCOMP_maybe_dice_error_to_problem_string(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_String * mdbcomp__slice_and_dice__HeadVar__2_2)
#line 352 "slice_and_dice.m"
{
#line 352 "slice_and_dice.m"
	mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1, (MR_String *) mdbcomp__slice_and_dice__HeadVar__2_2);
}

#line 360 "slice_and_dice.m"
void 
MR_MDBCOMP_det_maybe_dice_error_to_dice(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word * mdbcomp__slice_and_dice__Dice_2)
#line 360 "slice_and_dice.m"
{
#line 360 "slice_and_dice.m"
	mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Word *) mdbcomp__slice_and_dice__Dice_2);
}

#line 653 "slice_and_dice.m"
void 
MR_MDBCOMP_read_dice_to_string(
  MR_String mdbcomp__slice_and_dice__PassFile_10,
  MR_String mdbcomp__slice_and_dice__FailFile_11,
  MR_String mdbcomp__slice_and_dice__SortStr_12,
  MR_Integer mdbcomp__slice_and_dice__MaxRow_13,
  MR_String mdbcomp__slice_and_dice__Module_14,
  MR_String * mdbcomp__slice_and_dice__DiceStr_15,
  MR_String * mdbcomp__slice_and_dice__Problem_16)
#line 653 "slice_and_dice.m"
{
#line 653 "slice_and_dice.m"
	mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0((MR_String) mdbcomp__slice_and_dice__PassFile_10, (MR_String) mdbcomp__slice_and_dice__FailFile_11, (MR_String) mdbcomp__slice_and_dice__SortStr_12, (MR_Integer) mdbcomp__slice_and_dice__MaxRow_13, (MR_String) mdbcomp__slice_and_dice__Module_14, (MR_String *) mdbcomp__slice_and_dice__DiceStr_15, (MR_String *) mdbcomp__slice_and_dice__Problem_16);
}

#line 917 "slice_and_dice.m"
MR_Float 
MR_MDBCOMP_get_suspicion_for_label_layout(
  MR_Word mdbcomp__slice_and_dice__Dice_4,
  const MR_LabelLayout * mdbcomp__slice_and_dice__LabelLayout_5)
#line 917 "slice_and_dice.m"
{
#line 917 "slice_and_dice.m"
	MR_Box mdbcomp__slice_and_dice__boxed_LabelLayout_5;
	MR_Float ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdbcomp__slice_and_dice__LabelLayout_5, mdbcomp__slice_and_dice__boxed_LabelLayout_5);
	ret_value = (MR_Float)mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0((MR_Word) mdbcomp__slice_and_dice__Dice_4, mdbcomp__slice_and_dice__boxed_LabelLayout_5);
	return ret_value;
}


static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0[3] = {
  (MR_String) "num_pass_tests",
  (MR_String) "num_fail_tests",
  (MR_String) "dice_proc_map"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0 = {
  (MR_String) "dice",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0
};

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0
};

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice",
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0 },
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0
};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0[6] = {
  (MR_String) "dice_filename",
  (MR_String) "dice_linenumber",
  (MR_String) "pass_count",
  (MR_String) "pass_tests",
  (MR_String) "fail_count",
  (MR_String) "fail_tests"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0 = {
  (MR_String) "dice_exec_count",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0
};

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0
};

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice_exec_count",
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0 },
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0
};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0[3] = {
  (MR_String) "dlc_proc_label",
  (MR_String) "dlc_path_port",
  (MR_String) "dlc_counts"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0 = {
  (MR_String) "dice_label_count",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0
};

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0
};

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice_label_count",
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0 },
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice_proc_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "proc_dice",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "proc_slice",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0[2] = {
  (MR_String) "num_tests",
  (MR_String) "slice_proc_map"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0 = {
  (MR_String) "slice",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0
};

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0
};

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice",
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0 },
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0
};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0[4] = {
  (MR_String) "slice_filename",
  (MR_String) "slice_linenumber",
  (MR_String) "slice_count",
  (MR_String) "slice_tests"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0 = {
  (MR_String) "slice_exec_count",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0
};

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0
};

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice_exec_count",
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0 },
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0
};

static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
};

static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0[3] = {
  (MR_String) "slc_proc_label",
  (MR_String) "slc_path_port",
  (MR_String) "slc_counts"
};

static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0 = {
  (MR_String) "slice_label_count",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0
};

static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0
  }
};

static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0
};

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice_label_count",
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0 },
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice_proc_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0 = {
  (MR_String) "pass_slice",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1 = {
  (MR_String) "fail_slice",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0[2] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0,
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1
};

static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0[2] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1,
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0
};

static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "trace_counts_kind",
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0 },
  {     mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0
};

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____dice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____proc_dice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____proc_dice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____proc_slice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____proc_slice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____slice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001(
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001(
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

    {
      mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv13_HeadVar__3_3;

    {
      mdbcomp__slice_and_dice__conv13_HeadVar__3_3 = mdbcomp__slice_and_dice__format_float_2_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), MR_unbox_float(mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv13_HeadVar__3_3));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_3;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Float mdbcomp__slice_and_dice__conv12_R1_6;

    {
      mdbcomp__slice_and_dice__conv12_R1_6 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
    mdbcomp__slice_and_dice__wrapper_arg_3 = MR_box_float(mdbcomp__slice_and_dice__conv12_R1_6);
    return mdbcomp__slice_and_dice__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv11_HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__conv11_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv11_HeadVar__2_2));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv10_HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__conv10_HeadVar__2_2 = mdbcomp__slice_and_dice__bracket_int_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv10_HeadVar__2_2));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv9_HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__conv9_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv9_HeadVar__2_2));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv8_HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__conv8_HeadVar__2_2 = mdbcomp__slice_and_dice__format_path_port_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv8_HeadVar__2_2));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv7_Str_4;

    {
      mdbcomp__slice_and_dice__conv7_Str_4 = mdbcomp__slice_and_dice__format_proc_label_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv7_Str_4));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_7,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_8)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv6_ProcLabel_10;
    MR_Word mdbcomp__slice_and_dice__conv5_PathPort_11;
    MR_String mdbcomp__slice_and_dice__conv4_FormattedContext_12;
    MR_Integer mdbcomp__slice_and_dice__conv3_PassCount_13;
    MR_Integer mdbcomp__slice_and_dice__conv2_PassTests_14;
    MR_Integer mdbcomp__slice_and_dice__conv1_FailCount_15;
    MR_Integer mdbcomp__slice_and_dice__conv0_FailTests_16;

    {
      mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv6_ProcLabel_10, &mdbcomp__slice_and_dice__conv5_PathPort_11, &mdbcomp__slice_and_dice__conv4_FormattedContext_12, &mdbcomp__slice_and_dice__conv3_PassCount_13, &mdbcomp__slice_and_dice__conv2_PassTests_14, &mdbcomp__slice_and_dice__conv1_FailCount_15, &mdbcomp__slice_and_dice__conv0_FailTests_16);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv6_ProcLabel_10));
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv5_PathPort_11));
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv4_FormattedContext_12));
    *mdbcomp__slice_and_dice__wrapper_arg_5 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_PassCount_13));
    *mdbcomp__slice_and_dice__wrapper_arg_6 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_PassTests_14));
    *mdbcomp__slice_and_dice__wrapper_arg_7 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_FailCount_15));
    *mdbcomp__slice_and_dice__wrapper_arg_8 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_FailTests_16));
  }
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(
  MR_Word mdbcomp__slice_and_dice__LabelCounts_8,
  MR_Integer mdbcomp__slice_and_dice__TotalPassTests_9,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_11,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_12,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_13)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_String mdbcomp__slice_and_dice__Str_14;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_94_94 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_95_95 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_96_96 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_108_108;
    MR_Word mdbcomp__slice_and_dice__ProcLabels_15;
    MR_Word mdbcomp__slice_and_dice__PathPorts_16;
    MR_Word mdbcomp__slice_and_dice__FormattedContexts_17;
    MR_Word mdbcomp__slice_and_dice__PassCounts_18;
    MR_Word mdbcomp__slice_and_dice__PassTests_19;
    MR_Word mdbcomp__slice_and_dice__FailCounts_20;
    MR_Word mdbcomp__slice_and_dice__FormattedProcLabels_22;
    MR_Word mdbcomp__slice_and_dice__FormattedPathPorts_23;
    MR_Word mdbcomp__slice_and_dice__PassCountStrs_24;
    MR_Word mdbcomp__slice_and_dice__PassTestsStrs_25;
    MR_Word mdbcomp__slice_and_dice__FailCountStrs_26;
    MR_Word mdbcomp__slice_and_dice__SuspicionIndices_27;
    MR_Word mdbcomp__slice_and_dice__FormattedSuspicionIndices_28;
    MR_String mdbcomp__slice_and_dice__TotalPassTestsStr_29;
    MR_Word mdbcomp__slice_and_dice__Columns_30;
    MR_String mdbcomp__slice_and_dice__Var_41;
    MR_String mdbcomp__slice_and_dice__Var_42;
    MR_Word mdbcomp__slice_and_dice__Var_44;
    MR_Word mdbcomp__slice_and_dice__Var_45;
    MR_Word mdbcomp__slice_and_dice__Var_46;
    MR_Word mdbcomp__slice_and_dice__Var_48;
    MR_Word mdbcomp__slice_and_dice__Var_49;
    MR_Word mdbcomp__slice_and_dice__Var_50;
    MR_Word mdbcomp__slice_and_dice__Var_51;
    MR_Word mdbcomp__slice_and_dice__Var_53;
    MR_Word mdbcomp__slice_and_dice__Var_54;
    MR_Word mdbcomp__slice_and_dice__Var_55;
    MR_Word mdbcomp__slice_and_dice__Var_56;
    MR_Word mdbcomp__slice_and_dice__Var_58;
    MR_Word mdbcomp__slice_and_dice__Var_59;
    MR_Word mdbcomp__slice_and_dice__Var_60;
    MR_Word mdbcomp__slice_and_dice__Var_61;
    MR_Word mdbcomp__slice_and_dice__Var_64;
    MR_Word mdbcomp__slice_and_dice__Var_65;
    MR_Word mdbcomp__slice_and_dice__Var_66;
    MR_Word mdbcomp__slice_and_dice__Var_67;
    MR_Word mdbcomp__slice_and_dice__Var_69;
    MR_Word mdbcomp__slice_and_dice__Var_70;
    MR_Word mdbcomp__slice_and_dice__Var_71;
    MR_Word mdbcomp__slice_and_dice__Var_72;
    MR_Word mdbcomp__slice_and_dice__Var_75;
    MR_Word mdbcomp__slice_and_dice__Var_76;
    MR_Word mdbcomp__slice_and_dice__Var_77;
    MR_Word mdbcomp__slice_and_dice__Var_78;
    MR_String mdbcomp__slice_and_dice__Var_82;
    MR_Word mdbcomp__slice_and_dice___FailTests_21;

    {
      mercury__list__map7_9_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0, mdbcomp__slice_and_dice__TypeCtorInfo_94_94, mdbcomp__slice_and_dice__TypeCtorInfo_95_95, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[17], mdbcomp__slice_and_dice__LabelCounts_8, &mdbcomp__slice_and_dice__ProcLabels_15, &mdbcomp__slice_and_dice__PathPorts_16, &mdbcomp__slice_and_dice__FormattedContexts_17, &mdbcomp__slice_and_dice__PassCounts_18, &mdbcomp__slice_and_dice__PassTests_19, &mdbcomp__slice_and_dice__FailCounts_20, &mdbcomp__slice_and_dice___FailTests_21);
    }
    {
      mdbcomp__slice_and_dice__FormattedProcLabels_22 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_94_94, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[18], mdbcomp__slice_and_dice__ProcLabels_15);
    }
    {
      mdbcomp__slice_and_dice__FormattedPathPorts_23 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_95_95, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[19], mdbcomp__slice_and_dice__PathPorts_16);
    }
    {
      mdbcomp__slice_and_dice__PassCountStrs_24 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[20], mdbcomp__slice_and_dice__PassCounts_18);
    }
    {
      mdbcomp__slice_and_dice__PassTestsStrs_25 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[21], mdbcomp__slice_and_dice__PassTests_19);
    }
    {
      mdbcomp__slice_and_dice__FailCountStrs_26 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[22], mdbcomp__slice_and_dice__FailCounts_20);
    }
    mdbcomp__slice_and_dice__TypeCtorInfo_108_108 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
    {
      mdbcomp__slice_and_dice__SuspicionIndices_27 = mercury__list__map_corresponding_3_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_108_108, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[23], mdbcomp__slice_and_dice__PassCounts_18, mdbcomp__slice_and_dice__FailCounts_20);
    }
    {
      mdbcomp__slice_and_dice__FormattedSuspicionIndices_28 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_108_108, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[4], mdbcomp__slice_and_dice__SuspicionIndices_27);
    }
    {
      mdbcomp__slice_and_dice__Var_42 = mercury__string__int_to_string_thousands_1_f_0(mdbcomp__slice_and_dice__TotalPassTests_9);
    }
    {
      mdbcomp__slice_and_dice__Var_41 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Var_42, (MR_String) ")");
    }
    {
      mdbcomp__slice_and_dice__TotalPassTestsStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "(", mdbcomp__slice_and_dice__Var_41);
    }
    {
      mdbcomp__slice_and_dice__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_46, 0) = ((MR_Box) ((MR_String) "Procedure"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_46, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedProcLabels_22));
    }
    {
      mdbcomp__slice_and_dice__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_45, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_46));
    }
    {
      mdbcomp__slice_and_dice__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_44, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_45));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_44, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxPredColumns_11));
    }
    {
      mdbcomp__slice_and_dice__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_51, 0) = ((MR_Box) ((MR_String) "Path/Port"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_51, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedPathPorts_23));
    }
    {
      mdbcomp__slice_and_dice__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_50, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_51));
    }
    {
      mdbcomp__slice_and_dice__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_49, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_50));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_49, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxPathColumns_12));
    }
    {
      mdbcomp__slice_and_dice__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_56, 0) = ((MR_Box) ((MR_String) "File:Line"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_56, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedContexts_17));
    }
    {
      mdbcomp__slice_and_dice__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_55, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_56));
    }
    {
      mdbcomp__slice_and_dice__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_54, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_55));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_54, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxFileColumns_13));
    }
    {
      mdbcomp__slice_and_dice__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_61, 0) = ((MR_Box) ((MR_String) "Pass"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_61, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PassCountStrs_24));
    }
    {
      mdbcomp__slice_and_dice__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_60, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_61));
    }
    {
      mdbcomp__slice_and_dice__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_59, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_60));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdbcomp__slice_and_dice__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_67, 0) = ((MR_Box) (mdbcomp__slice_and_dice__TotalPassTestsStr_29));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_67, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PassTestsStrs_25));
    }
    {
      mdbcomp__slice_and_dice__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_66, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_67));
    }
    {
      mdbcomp__slice_and_dice__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_65, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_66));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdbcomp__slice_and_dice__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_72, 0) = ((MR_Box) ((MR_String) "Fail"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_72, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FailCountStrs_26));
    }
    {
      mdbcomp__slice_and_dice__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_71, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_72));
    }
    {
      mdbcomp__slice_and_dice__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_70, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_71));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdbcomp__slice_and_dice__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_78, 0) = ((MR_Box) ((MR_String) "Suspicion"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_78, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedSuspicionIndices_28));
    }
    {
      mdbcomp__slice_and_dice__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_77, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_78));
    }
    {
      mdbcomp__slice_and_dice__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_76, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_77));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdbcomp__slice_and_dice__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_75, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_76));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdbcomp__slice_and_dice__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_69, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_70));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_69, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_75));
    }
    {
      mdbcomp__slice_and_dice__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_64, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_65));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_64, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_69));
    }
    {
      mdbcomp__slice_and_dice__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_58, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_59));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_58, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_64));
    }
    {
      mdbcomp__slice_and_dice__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_53, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_54));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_53, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_58));
    }
    {
      mdbcomp__slice_and_dice__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_48, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_49));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_48, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_53));
    }
    {
      mdbcomp__slice_and_dice__Columns_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Columns_30, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_44));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Columns_30, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_48));
    }
    {
      mdbcomp__slice_and_dice__Var_82 = mercury__string__format_table_max_2_f_0(mdbcomp__slice_and_dice__Columns_30, (MR_String) " ");
    }
    {
      mdbcomp__slice_and_dice__Str_14 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Var_82, (MR_String) "\n");
    }
    return mdbcomp__slice_and_dice__Str_14;
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__622__1_2_p_0(
  MR_Integer mdbcomp__slice_and_dice__HeadVar__1_55,
  MR_Integer mdbcomp__slice_and_dice__HeadVar__2_87)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__HeadVar__1_55 == mdbcomp__slice_and_dice__HeadVar__2_87);

    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Integer mdbcomp__slice_and_dice__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__Cast_HeadVar1_4, mdbcomp__slice_and_dice__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__HeadVar__2_1 == mdbcomp__slice_and_dice__HeadVar__2_2);

    return mdbcomp__slice_and_dice__succeeded;
  }
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_4 = mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_5 = mdbcomp__slice_and_dice__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_3 = mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_4 = mdbcomp__slice_and_dice__HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3], ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_4)));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Integer mdbcomp__slice_and_dice__CastY_13 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_12 == mdbcomp__slice_and_dice__CastY_13);
    if (mdbcomp__slice_and_dice__succeeded)
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdbcomp__slice_and_dice__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdbcomp__slice_and_dice__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdbcomp__slice_and_dice__Var_10;

        {
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__Var_10, mdbcomp__slice_and_dice__Var_4, mdbcomp__slice_and_dice__Var_7);
        }
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_10 == (MR_Integer) 0);
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
        if (mdbcomp__slice_and_dice__succeeded)
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_10;
        else
          {
            MR_Word mdbcomp__slice_and_dice__Var_11;

            {
              mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__Var_11, mdbcomp__slice_and_dice__Var_5, mdbcomp__slice_and_dice__Var_8);
            }
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_11 == (MR_Integer) 0);
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
            if (mdbcomp__slice_and_dice__succeeded)
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_11;
            else
              {
                mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__Var_6, mdbcomp__slice_and_dice__Var_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
    else
      {
        MR_Word mdbcomp__slice_and_dice__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdbcomp__slice_and_dice__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

        {
          mdbcomp__slice_and_dice__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdbcomp__slice_and_dice__Var_3, mdbcomp__slice_and_dice__Var_6);
        }
        if (mdbcomp__slice_and_dice__succeeded)
          {
            {
              mdbcomp__slice_and_dice__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mdbcomp__slice_and_dice__Var_4, mdbcomp__slice_and_dice__Var_7);
            }
            if (mdbcomp__slice_and_dice__succeeded)
              {
                mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(mdbcomp__slice_and_dice__Var_5, mdbcomp__slice_and_dice__Var_8);
              }
          }
      }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_15 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Integer mdbcomp__slice_and_dice__CastY_16 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_15 == mdbcomp__slice_and_dice__CastY_16);
    if (mdbcomp__slice_and_dice__succeeded)
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mdbcomp__slice_and_dice__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 3)));
        MR_String mdbcomp__slice_and_dice__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdbcomp__slice_and_dice__Var_12;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__slice_and_dice__Var_12, mdbcomp__slice_and_dice__Var_4, mdbcomp__slice_and_dice__Var_8);
        }
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_12 == (MR_Integer) 0);
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
        if (mdbcomp__slice_and_dice__succeeded)
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_12;
        else
          {
            MR_Word mdbcomp__slice_and_dice__Var_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Var_13, mdbcomp__slice_and_dice__Var_5, mdbcomp__slice_and_dice__Var_9);
            }
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_13 == (MR_Integer) 0);
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
            if (mdbcomp__slice_and_dice__succeeded)
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_13;
            else
              {
                MR_Word mdbcomp__slice_and_dice__Var_14;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Var_14, mdbcomp__slice_and_dice__Var_6, mdbcomp__slice_and_dice__Var_10);
                }
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_14 == (MR_Integer) 0);
                mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
                if (mdbcomp__slice_and_dice__succeeded)
                  *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_14;
                else
                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__Var_7, mdbcomp__slice_and_dice__Var_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_11 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Integer mdbcomp__slice_and_dice__CastY_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_11 == mdbcomp__slice_and_dice__CastY_12);
    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
    else
      {
        MR_String mdbcomp__slice_and_dice__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 3)));
        MR_String mdbcomp__slice_and_dice__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 3)));

        mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__Var_3, mdbcomp__slice_and_dice__Var_7) == 0);
        if (mdbcomp__slice_and_dice__succeeded)
          {
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_4 == mdbcomp__slice_and_dice__Var_8);
            if (mdbcomp__slice_and_dice__succeeded)
              {
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_5 == mdbcomp__slice_and_dice__Var_9);
                if (mdbcomp__slice_and_dice__succeeded)
                  mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_6 == mdbcomp__slice_and_dice__Var_10);
              }
          }
      }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
    if (mdbcomp__slice_and_dice__succeeded)
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdbcomp__slice_and_dice__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Var_8, mdbcomp__slice_and_dice__Var_4, mdbcomp__slice_and_dice__Var_6);
        }
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_8 == (MR_Integer) 0);
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
        if (mdbcomp__slice_and_dice__succeeded)
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Var_5)), ((MR_Box) (mdbcomp__slice_and_dice__Var_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_7 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Integer mdbcomp__slice_and_dice__CastY_8 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_7 == mdbcomp__slice_and_dice__CastY_8);
    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
    else
      {
        MR_Word mdbcomp__slice_and_dice__TypeInfo_9_9;
        MR_Integer mdbcomp__slice_and_dice__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));

        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_3 == mdbcomp__slice_and_dice__Var_5);
        if (mdbcomp__slice_and_dice__succeeded)
          {
            mdbcomp__slice_and_dice__TypeInfo_9_9 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3];
            {
              mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__slice_and_dice__TypeInfo_9_9, ((MR_Box) (mdbcomp__slice_and_dice__Var_4)), ((MR_Box) (mdbcomp__slice_and_dice__Var_6)));
            }
          }
      }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_4 = mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_5 = mdbcomp__slice_and_dice__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_3 = mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_4 = mdbcomp__slice_and_dice__HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_4)));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_4 = mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_5 = mdbcomp__slice_and_dice__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_3 = mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_4 = mdbcomp__slice_and_dice__HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_4)));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_4 = mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_5 = mdbcomp__slice_and_dice__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_3 = mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_4 = mdbcomp__slice_and_dice__HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_4)));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Integer mdbcomp__slice_and_dice__CastY_13 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_12 == mdbcomp__slice_and_dice__CastY_13);
    if (mdbcomp__slice_and_dice__succeeded)
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdbcomp__slice_and_dice__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdbcomp__slice_and_dice__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdbcomp__slice_and_dice__Var_10;

        {
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__Var_10, mdbcomp__slice_and_dice__Var_4, mdbcomp__slice_and_dice__Var_7);
        }
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_10 == (MR_Integer) 0);
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
        if (mdbcomp__slice_and_dice__succeeded)
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_10;
        else
          {
            MR_Word mdbcomp__slice_and_dice__Var_11;

            {
              mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__Var_11, mdbcomp__slice_and_dice__Var_5, mdbcomp__slice_and_dice__Var_8);
            }
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_11 == (MR_Integer) 0);
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
            if (mdbcomp__slice_and_dice__succeeded)
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_11;
            else
              {
                mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__Var_6, mdbcomp__slice_and_dice__Var_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
    else
      {
        MR_Word mdbcomp__slice_and_dice__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdbcomp__slice_and_dice__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

        {
          mdbcomp__slice_and_dice__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdbcomp__slice_and_dice__Var_3, mdbcomp__slice_and_dice__Var_6);
        }
        if (mdbcomp__slice_and_dice__succeeded)
          {
            {
              mdbcomp__slice_and_dice__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mdbcomp__slice_and_dice__Var_4, mdbcomp__slice_and_dice__Var_7);
            }
            if (mdbcomp__slice_and_dice__succeeded)
              {
                mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(mdbcomp__slice_and_dice__Var_5, mdbcomp__slice_and_dice__Var_8);
              }
          }
      }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_21 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Integer mdbcomp__slice_and_dice__CastY_22 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_21 == mdbcomp__slice_and_dice__CastY_22);
    if (mdbcomp__slice_and_dice__succeeded)
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mdbcomp__slice_and_dice__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mdbcomp__slice_and_dice__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer mdbcomp__slice_and_dice__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 5)));
        MR_String mdbcomp__slice_and_dice__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer mdbcomp__slice_and_dice__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer mdbcomp__slice_and_dice__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mdbcomp__slice_and_dice__Var_16;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__slice_and_dice__Var_16, mdbcomp__slice_and_dice__Var_4, mdbcomp__slice_and_dice__Var_10);
        }
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_16 == (MR_Integer) 0);
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
        if (mdbcomp__slice_and_dice__succeeded)
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_16;
        else
          {
            MR_Word mdbcomp__slice_and_dice__Var_17;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Var_17, mdbcomp__slice_and_dice__Var_5, mdbcomp__slice_and_dice__Var_11);
            }
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_17 == (MR_Integer) 0);
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
            if (mdbcomp__slice_and_dice__succeeded)
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_17;
            else
              {
                MR_Word mdbcomp__slice_and_dice__Var_18;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Var_18, mdbcomp__slice_and_dice__Var_6, mdbcomp__slice_and_dice__Var_12);
                }
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_18 == (MR_Integer) 0);
                mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
                if (mdbcomp__slice_and_dice__succeeded)
                  *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_18;
                else
                  {
                    MR_Word mdbcomp__slice_and_dice__Var_19;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Var_19, mdbcomp__slice_and_dice__Var_7, mdbcomp__slice_and_dice__Var_13);
                    }
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_19 == (MR_Integer) 0);
                    mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
                    if (mdbcomp__slice_and_dice__succeeded)
                      *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_19;
                    else
                      {
                        MR_Word mdbcomp__slice_and_dice__Var_20;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Var_20, mdbcomp__slice_and_dice__Var_8, mdbcomp__slice_and_dice__Var_14);
                        }
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_20 == (MR_Integer) 0);
                        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
                        if (mdbcomp__slice_and_dice__succeeded)
                          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_20;
                        else
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__Var_9, mdbcomp__slice_and_dice__Var_15);
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_15 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Integer mdbcomp__slice_and_dice__CastY_16 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_15 == mdbcomp__slice_and_dice__CastY_16);
    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
    else
      {
        MR_String mdbcomp__slice_and_dice__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer mdbcomp__slice_and_dice__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer mdbcomp__slice_and_dice__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 5)));
        MR_String mdbcomp__slice_and_dice__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mdbcomp__slice_and_dice__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer mdbcomp__slice_and_dice__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 5)));

        mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__Var_3, mdbcomp__slice_and_dice__Var_9) == 0);
        if (mdbcomp__slice_and_dice__succeeded)
          {
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_4 == mdbcomp__slice_and_dice__Var_10);
            if (mdbcomp__slice_and_dice__succeeded)
              {
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_5 == mdbcomp__slice_and_dice__Var_11);
                if (mdbcomp__slice_and_dice__succeeded)
                  {
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_6 == mdbcomp__slice_and_dice__Var_12);
                    if (mdbcomp__slice_and_dice__succeeded)
                      {
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_7 == mdbcomp__slice_and_dice__Var_13);
                        if (mdbcomp__slice_and_dice__succeeded)
                          mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_8 == mdbcomp__slice_and_dice__Var_14);
                      }
                  }
              }
          }
      }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0(
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_Integer mdbcomp__slice_and_dice__CastY_13 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_12 == mdbcomp__slice_and_dice__CastY_13);
    if (mdbcomp__slice_and_dice__succeeded)
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdbcomp__slice_and_dice__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdbcomp__slice_and_dice__Var_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Var_10, mdbcomp__slice_and_dice__Var_4, mdbcomp__slice_and_dice__Var_7);
        }
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_10 == (MR_Integer) 0);
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
        if (mdbcomp__slice_and_dice__succeeded)
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_10;
        else
          {
            MR_Word mdbcomp__slice_and_dice__Var_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Var_11, mdbcomp__slice_and_dice__Var_5, mdbcomp__slice_and_dice__Var_8);
            }
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_11 == (MR_Integer) 0);
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
            if (mdbcomp__slice_and_dice__succeeded)
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Var_6)), ((MR_Box) (mdbcomp__slice_and_dice__Var_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
    else
      {
        MR_Word mdbcomp__slice_and_dice__TypeInfo_11_11;
        MR_Integer mdbcomp__slice_and_dice__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mdbcomp__slice_and_dice__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_3 == mdbcomp__slice_and_dice__Var_6);
        if (mdbcomp__slice_and_dice__succeeded)
          {
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_4 == mdbcomp__slice_and_dice__Var_7);
            if (mdbcomp__slice_and_dice__succeeded)
              {
                mdbcomp__slice_and_dice__TypeInfo_11_11 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4];
                {
                  mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__slice_and_dice__TypeInfo_11_11, ((MR_Box) (mdbcomp__slice_and_dice__Var_5)), ((MR_Box) (mdbcomp__slice_and_dice__Var_8)));
                }
              }
          }
      }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_path_port_1_f_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_String mdbcomp__slice_and_dice__HeadVar__2_2;

    switch (MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdbcomp__slice_and_dice__Port_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));

          {
            mdbcomp__prim_data__string_to_trace_port_2_p_1(&mdbcomp__slice_and_dice__HeadVar__2_2, mdbcomp__slice_and_dice__Port_3);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdbcomp__slice_and_dice__Path_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mdbcomp__slice_and_dice__Var_7;
          MR_String mdbcomp__slice_and_dice__Var_8;

          {
            mdbcomp__slice_and_dice__Var_8 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdbcomp__slice_and_dice__Path_5);
          }
          {
            mdbcomp__slice_and_dice__Var_7 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Var_8, (MR_String) ">");
          }
          {
            mdbcomp__slice_and_dice__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "<", mdbcomp__slice_and_dice__Var_7);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdbcomp__slice_and_dice__Port_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mdbcomp__slice_and_dice__Path_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
          MR_String mdbcomp__slice_and_dice__Var_12;
          MR_Word mdbcomp__slice_and_dice__Var_13;
          MR_String mdbcomp__slice_and_dice__Var_14;
          MR_String mdbcomp__slice_and_dice__Var_16;
          MR_Word mdbcomp__slice_and_dice__Var_17;

          {
            mdbcomp__slice_and_dice__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_13, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Port_10));
          }
          {
            mdbcomp__slice_and_dice__Var_12 = mdbcomp__slice_and_dice__format_path_port_1_f_0(mdbcomp__slice_and_dice__Var_13);
          }
          {
            mdbcomp__slice_and_dice__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_17, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Path_11));
          }
          {
            mdbcomp__slice_and_dice__Var_16 = mdbcomp__slice_and_dice__format_path_port_1_f_0(mdbcomp__slice_and_dice__Var_17);
          }
          {
            mdbcomp__slice_and_dice__Var_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdbcomp__slice_and_dice__Var_16);
          }
          {
            mdbcomp__slice_and_dice__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Var_12, mdbcomp__slice_and_dice__Var_14);
          }
        }
        break;
    }
    return mdbcomp__slice_and_dice__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_proc_label_1_f_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_String mdbcomp__slice_and_dice__Str_4;

    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdbcomp__slice_and_dice__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__SymModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 2)));
        MR_String mdbcomp__slice_and_dice__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 3)));
        MR_Integer mdbcomp__slice_and_dice__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 4)));
        MR_Integer mdbcomp__slice_and_dice__ModeNo_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 5)));
        MR_String mdbcomp__slice_and_dice__Module_11;
        MR_String mdbcomp__slice_and_dice__ArityStr_12;
        MR_String mdbcomp__slice_and_dice__PredOrFuncStr_13;
        MR_String mdbcomp__slice_and_dice__Var_31;
        MR_String mdbcomp__slice_and_dice__Var_33;
        MR_String mdbcomp__slice_and_dice__Var_34;
        MR_String mdbcomp__slice_and_dice__Var_36;
        MR_String mdbcomp__slice_and_dice__Var_37;
        MR_String mdbcomp__slice_and_dice__Var_39;
        MR_String mdbcomp__slice_and_dice__Var_40;
        MR_String mdbcomp__slice_and_dice__Var_42;
        MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 0)));

        {
          mdbcomp__slice_and_dice__Module_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__slice_and_dice__SymModule_7);
        }
        switch (mdbcomp__slice_and_dice__PredOrFunc_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer mdbcomp__slice_and_dice__Var_29 = (mdbcomp__slice_and_dice__Arity_9 - (MR_Integer) 1);

              {
                mdbcomp__slice_and_dice__ArityStr_12 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__Var_29);
              }
              mdbcomp__slice_and_dice__PredOrFuncStr_13 = (MR_String) "func";
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mdbcomp__slice_and_dice__ArityStr_12 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__Arity_9);
              }
              mdbcomp__slice_and_dice__PredOrFuncStr_13 = (MR_String) "pred";
            }
            break;
        }
        {
          mdbcomp__slice_and_dice__Var_42 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__ModeNo_10);
        }
        {
          mdbcomp__slice_and_dice__Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdbcomp__slice_and_dice__Var_42);
        }
        {
          mdbcomp__slice_and_dice__Var_39 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__ArityStr_12, mdbcomp__slice_and_dice__Var_40);
        }
        {
          mdbcomp__slice_and_dice__Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdbcomp__slice_and_dice__Var_39);
        }
        {
          mdbcomp__slice_and_dice__Var_36 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Name_8, mdbcomp__slice_and_dice__Var_37);
        }
        {
          mdbcomp__slice_and_dice__Var_34 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdbcomp__slice_and_dice__Var_36);
        }
        {
          mdbcomp__slice_and_dice__Var_33 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Module_11, mdbcomp__slice_and_dice__Var_34);
        }
        {
          mdbcomp__slice_and_dice__Var_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdbcomp__slice_and_dice__Var_33);
        }
        {
          mdbcomp__slice_and_dice__Str_4 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__PredOrFuncStr_13, mdbcomp__slice_and_dice__Var_31);
        }
      }
    else
      {
        MR_Word mdbcomp__slice_and_dice__SpecialPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 1)));
        MR_String mdbcomp__slice_and_dice__TypeName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 3)));
        MR_String mdbcomp__slice_and_dice__Var_20;
        MR_String mdbcomp__slice_and_dice__Var_22;
        MR_String mdbcomp__slice_and_dice__Var_23;
        MR_String mdbcomp__slice_and_dice__Var_25;
        MR_String mdbcomp__slice_and_dice__Var_26;
        MR_String mdbcomp__slice_and_dice__Var_28;
        MR_Word mdbcomp__slice_and_dice__SymModule_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 2)));
        MR_String mdbcomp__slice_and_dice__Name_44;
        MR_Integer mdbcomp__slice_and_dice__Arity_45;
        MR_String mdbcomp__slice_and_dice__Module_46;
        MR_Word mdbcomp__slice_and_dice__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 4)));
        MR_Integer mdbcomp__slice_and_dice__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 5)));
        MR_String mdbcomp__slice_and_dice__Var_19;

        {
          mdbcomp__slice_and_dice__Module_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__slice_and_dice__SymModule_43);
        }
        {
          mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__slice_and_dice__SpecialPredId_15, &mdbcomp__slice_and_dice__Name_44, &mdbcomp__slice_and_dice__Var_19, &mdbcomp__slice_and_dice__Arity_45);
        }
        {
          mdbcomp__slice_and_dice__Var_28 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__Arity_45);
        }
        {
          mdbcomp__slice_and_dice__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdbcomp__slice_and_dice__Var_28);
        }
        {
          mdbcomp__slice_and_dice__Var_25 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__TypeName_16, mdbcomp__slice_and_dice__Var_26);
        }
        {
          mdbcomp__slice_and_dice__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdbcomp__slice_and_dice__Var_25);
        }
        {
          mdbcomp__slice_and_dice__Var_22 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Module_46, mdbcomp__slice_and_dice__Var_23);
        }
        {
          mdbcomp__slice_and_dice__Var_20 = mercury__string__f_43_43_2_f_0((MR_String) " for ", mdbcomp__slice_and_dice__Var_22);
        }
        {
          mdbcomp__slice_and_dice__Str_4 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Name_44, mdbcomp__slice_and_dice__Var_20);
        }
      }
    return mdbcomp__slice_and_dice__Str_4;
  }
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_float_2_f_0(
  MR_Integer mdbcomp__slice_and_dice__DecimalPlaces_4,
  MR_Float mdbcomp__slice_and_dice__Flt_5)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_String mdbcomp__slice_and_dice__HeadVar__3_3;

    {
      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_9[0], mdbcomp__slice_and_dice__DecimalPlaces_4, (MR_Integer) 2, mdbcomp__slice_and_dice__Flt_5, &mdbcomp__slice_and_dice__HeadVar__3_3);
    }
    return mdbcomp__slice_and_dice__HeadVar__3_3;
  }
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__bracket_int_1_f_0(
  MR_Integer mdbcomp__slice_and_dice__X_3)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_String mdbcomp__slice_and_dice__HeadVar__2_2;
    MR_String mdbcomp__slice_and_dice__Var_5;
    MR_String mdbcomp__slice_and_dice__Var_6;

    {
      mdbcomp__slice_and_dice__Var_6 = mercury__string__int_to_string_thousands_1_f_0(mdbcomp__slice_and_dice__X_3);
    }
    {
      mdbcomp__slice_and_dice__Var_5 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Var_6, (MR_String) ")");
    }
    {
      mdbcomp__slice_and_dice__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "(", mdbcomp__slice_and_dice__Var_5);
    }
    return mdbcomp__slice_and_dice__HeadVar__2_2;
  }
}

static MR_Float MR_CALL 
mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0(
  MR_Word mdbcomp__slice_and_dice__Dice_4,
  MR_Box mdbcomp__slice_and_dice__LabelLayout_5)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Float mdbcomp__slice_and_dice__Suspicion_6;
    MR_Box mdbcomp__slice_and_dice__ProcLayout_7;
    MR_Word mdbcomp__slice_and_dice__ProcLabel_8;
    MR_Word mdbcomp__slice_and_dice__PathPort_9;
    MR_Word mdbcomp__slice_and_dice__PathPortMap_10;
    MR_Word mdbcomp__slice_and_dice__Var_12;
    MR_Integer mdbcomp__slice_and_dice__Var_15;
    MR_Integer mdbcomp__slice_and_dice__Var_16;
    MR_Box mdbcomp__slice_and_dice__conv0_PathPortMap_10;

    {
      mdbcomp__slice_and_dice__ProcLayout_7 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdbcomp__slice_and_dice__LabelLayout_5);
    }
    {
      mdbcomp__slice_and_dice__ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdbcomp__slice_and_dice__ProcLayout_7);
    }
    {
      mdbcomp__slice_and_dice__PathPort_9 = mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0(mdbcomp__slice_and_dice__LabelLayout_5);
    }
    mdbcomp__slice_and_dice__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_4, (MR_Integer) 0)));
    mdbcomp__slice_and_dice__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_4, (MR_Integer) 1)));
    mdbcomp__slice_and_dice__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_4, (MR_Integer) 2)));
    {
      mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], mdbcomp__slice_and_dice__Var_12, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_8)), &mdbcomp__slice_and_dice__conv0_PathPortMap_10);
    }
    if (mdbcomp__slice_and_dice__succeeded)
      {
        mdbcomp__slice_and_dice__PathPortMap_10 = ((MR_Word) mdbcomp__slice_and_dice__conv0_PathPortMap_10);
        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
      }
    if (mdbcomp__slice_and_dice__succeeded)
      {
        MR_Word mdbcomp__slice_and_dice__ExecCount_11;
        MR_Box mdbcomp__slice_and_dice__conv1_ExecCount_11;

        {
          mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, mdbcomp__slice_and_dice__PathPortMap_10, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_9)), &mdbcomp__slice_and_dice__conv1_ExecCount_11);
        }
        if (mdbcomp__slice_and_dice__succeeded)
          {
            mdbcomp__slice_and_dice__ExecCount_11 = ((MR_Word) mdbcomp__slice_and_dice__conv1_ExecCount_11);
            mdbcomp__slice_and_dice__succeeded = MR_TRUE;
          }
        if (mdbcomp__slice_and_dice__succeeded)
          {
            MR_Integer mdbcomp__slice_and_dice__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 2)));
            MR_Integer mdbcomp__slice_and_dice__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 4)));
            MR_String mdbcomp__slice_and_dice__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 0)));
            MR_Integer mdbcomp__slice_and_dice__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 1)));
            MR_Integer mdbcomp__slice_and_dice__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 3)));
            MR_Integer mdbcomp__slice_and_dice__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 5)));

            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_20 > (MR_Integer) 0);
            if (mdbcomp__slice_and_dice__succeeded)
              mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_13 == (MR_Integer) 0);
            if (mdbcomp__slice_and_dice__succeeded)
              mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 1.0000000000000000;
            else
              mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 0.0000000000000000;
          }
        else
          mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 0.0000000000000000;
      }
    else
      mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 0.0000000000000000;
    return mdbcomp__slice_and_dice__Suspicion_6;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(
  MR_Word mdbcomp__slice_and_dice__DiceLabelCount_9,
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_10,
  MR_Word * mdbcomp__slice_and_dice__PathPort_11,
  MR_String * mdbcomp__slice_and_dice__FormattedContext_12,
  MR_Integer * mdbcomp__slice_and_dice__PassCount_13,
  MR_Integer * mdbcomp__slice_and_dice__PassTests_14,
  MR_Integer * mdbcomp__slice_and_dice__FailCount_15,
  MR_Integer * mdbcomp__slice_and_dice__FailTests_16)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__ExecCounts_17;
    MR_String mdbcomp__slice_and_dice__FileName_18;
    MR_Integer mdbcomp__slice_and_dice__LineNumber_19;
    MR_String mdbcomp__slice_and_dice__Var_23;
    MR_String mdbcomp__slice_and_dice__Var_25;

    *mdbcomp__slice_and_dice__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__DiceLabelCount_9, (MR_Integer) 0)));
    *mdbcomp__slice_and_dice__PathPort_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__DiceLabelCount_9, (MR_Integer) 1)));
    mdbcomp__slice_and_dice__ExecCounts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__DiceLabelCount_9, (MR_Integer) 2)));
    mdbcomp__slice_and_dice__FileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 0)));
    mdbcomp__slice_and_dice__LineNumber_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 1)));
    *mdbcomp__slice_and_dice__PassCount_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 2)));
    *mdbcomp__slice_and_dice__PassTests_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 3)));
    *mdbcomp__slice_and_dice__FailCount_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 4)));
    *mdbcomp__slice_and_dice__FailTests_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 5)));
    {
      mdbcomp__slice_and_dice__Var_25 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__LineNumber_19);
    }
    {
      mdbcomp__slice_and_dice__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdbcomp__slice_and_dice__Var_25);
    }
    {
      *mdbcomp__slice_and_dice__FormattedContext_12 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__FileName_18, mdbcomp__slice_and_dice__Var_23);
    }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word * mdbcomp__slice_and_dice__DiceLabelCount_7)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__PathPort_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mdbcomp__slice_and_dice__ExecCount_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mdbcomp__slice_and_dice__DiceLabelCount_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PathPort_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_6));
    }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv0_DiceLabelCount_7;

    {
      mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_DiceLabelCount_7);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_DiceLabelCount_7));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
  MR_Word mdbcomp__slice_and_dice__ProcDice_6,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_19_19;
    MR_Word mdbcomp__slice_and_dice__ProcExecCounts_8;
    MR_Word mdbcomp__slice_and_dice__NewLabelCounts_9;
    MR_Word mdbcomp__slice_and_dice__Var_12;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, mdbcomp__slice_and_dice__ProcDice_6, &mdbcomp__slice_and_dice__ProcExecCounts_8);
    }
    {
      mdbcomp__slice_and_dice__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_12, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_12, 1) = ((MR_Box) (mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_12, 3) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_5));
    }
    mdbcomp__slice_and_dice__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;
    {
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[7], mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__Var_12, mdbcomp__slice_and_dice__ProcExecCounts_8, &mdbcomp__slice_and_dice__NewLabelCounts_9);
    }
    {
      mercury__list__append_3_p_1(mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10, mdbcomp__slice_and_dice__NewLabelCounts_9, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);
    }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(
  MR_String mdbcomp__slice_and_dice__SortStr_5,
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__slice_and_dice__succeeded;
        MR_Char mdbcomp__slice_and_dice__C_9;
        MR_String mdbcomp__slice_and_dice__Rest_10;

        {
          mdbcomp__slice_and_dice__succeeded = mercury__string__first_char_3_p_3(mdbcomp__slice_and_dice__SortStr_5, &mdbcomp__slice_and_dice__C_9, &mdbcomp__slice_and_dice__Rest_10);
        }
        if (mdbcomp__slice_and_dice__succeeded)
          {
            MR_Word mdbcomp__slice_and_dice__Result0_11;
            MR_Integer mdbcomp__slice_and_dice__Var_44;
            MR_Integer mdbcomp__slice_and_dice__Var_45;

            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 112);
            if (mdbcomp__slice_and_dice__succeeded)
              {
                MR_Integer mdbcomp__slice_and_dice__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                MR_Integer mdbcomp__slice_and_dice__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                MR_String mdbcomp__slice_and_dice__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                MR_Integer mdbcomp__slice_and_dice__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                MR_Integer mdbcomp__slice_and_dice__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                MR_Integer mdbcomp__slice_and_dice__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
                MR_Integer mdbcomp__slice_and_dice__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
                MR_String mdbcomp__slice_and_dice__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                MR_Integer mdbcomp__slice_and_dice__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                MR_Integer mdbcomp__slice_and_dice__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                MR_Integer mdbcomp__slice_and_dice__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
                MR_Integer mdbcomp__slice_and_dice__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_14, mdbcomp__slice_and_dice__Var_15);
                }
              }
            else
              {
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 80);
                if (mdbcomp__slice_and_dice__succeeded)
                  {
                    MR_Integer mdbcomp__slice_and_dice__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                    MR_Integer mdbcomp__slice_and_dice__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                    MR_String mdbcomp__slice_and_dice__Var_62 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                    MR_Integer mdbcomp__slice_and_dice__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                    MR_Integer mdbcomp__slice_and_dice__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                    MR_Integer mdbcomp__slice_and_dice__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
                    MR_Integer mdbcomp__slice_and_dice__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
                    MR_String mdbcomp__slice_and_dice__Var_67 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                    MR_Integer mdbcomp__slice_and_dice__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                    MR_Integer mdbcomp__slice_and_dice__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                    MR_Integer mdbcomp__slice_and_dice__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
                    MR_Integer mdbcomp__slice_and_dice__Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_16, mdbcomp__slice_and_dice__Var_17);
                    }
                  }
                else
                  {
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 102);
                    if (mdbcomp__slice_and_dice__succeeded)
                      {
                        MR_Integer mdbcomp__slice_and_dice__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
                        MR_Integer mdbcomp__slice_and_dice__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
                        MR_String mdbcomp__slice_and_dice__Var_72 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                        MR_Integer mdbcomp__slice_and_dice__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                        MR_Integer mdbcomp__slice_and_dice__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                        MR_Integer mdbcomp__slice_and_dice__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                        MR_Integer mdbcomp__slice_and_dice__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
                        MR_String mdbcomp__slice_and_dice__Var_77 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                        MR_Integer mdbcomp__slice_and_dice__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                        MR_Integer mdbcomp__slice_and_dice__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                        MR_Integer mdbcomp__slice_and_dice__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                        MR_Integer mdbcomp__slice_and_dice__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_18, mdbcomp__slice_and_dice__Var_19);
                        }
                      }
                    else
                      {
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 70);
                        if (mdbcomp__slice_and_dice__succeeded)
                          {
                            MR_Integer mdbcomp__slice_and_dice__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
                            MR_Integer mdbcomp__slice_and_dice__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
                            MR_String mdbcomp__slice_and_dice__Var_82 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                            MR_Integer mdbcomp__slice_and_dice__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                            MR_Integer mdbcomp__slice_and_dice__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                            MR_Integer mdbcomp__slice_and_dice__Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                            MR_Integer mdbcomp__slice_and_dice__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
                            MR_String mdbcomp__slice_and_dice__Var_87 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                            MR_Integer mdbcomp__slice_and_dice__Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                            MR_Integer mdbcomp__slice_and_dice__Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                            MR_Integer mdbcomp__slice_and_dice__Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                            MR_Integer mdbcomp__slice_and_dice__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_20, mdbcomp__slice_and_dice__Var_21);
                            }
                          }
                        else
                          {
                            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 115);
                            if (mdbcomp__slice_and_dice__succeeded)
                              {
                                MR_Float mdbcomp__slice_and_dice__Var_22;
                                MR_Float mdbcomp__slice_and_dice__Var_23;
                                MR_Integer mdbcomp__slice_and_dice__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                                MR_Integer mdbcomp__slice_and_dice__Var_26;
                                MR_Integer mdbcomp__slice_and_dice__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
                                MR_Integer mdbcomp__slice_and_dice__Var_105;
                                MR_String mdbcomp__slice_and_dice__Var_92 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                                MR_Integer mdbcomp__slice_and_dice__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                                MR_Integer mdbcomp__slice_and_dice__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                                MR_Integer mdbcomp__slice_and_dice__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
                                MR_String mdbcomp__slice_and_dice__Var_102;
                                MR_Integer mdbcomp__slice_and_dice__Var_103;
                                MR_Integer mdbcomp__slice_and_dice__Var_104;
                                MR_Integer mdbcomp__slice_and_dice__Var_106;

                                {
                                  mdbcomp__slice_and_dice__Var_22 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__Var_24, mdbcomp__slice_and_dice__Var_95);
                                }
                                mdbcomp__slice_and_dice__Var_102 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                                mdbcomp__slice_and_dice__Var_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                                mdbcomp__slice_and_dice__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                                mdbcomp__slice_and_dice__Var_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                                mdbcomp__slice_and_dice__Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
                                mdbcomp__slice_and_dice__Var_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
                                {
                                  mdbcomp__slice_and_dice__Var_23 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__Var_26, mdbcomp__slice_and_dice__Var_105);
                                }
                                {
                                  mercury__private_builtin__builtin_compare_float_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_22, mdbcomp__slice_and_dice__Var_23);
                                }
                              }
                            else
                              {
                                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 83);
                                if (mdbcomp__slice_and_dice__succeeded)
                                  {
                                    MR_Float mdbcomp__slice_and_dice__Var_28;
                                    MR_Float mdbcomp__slice_and_dice__Var_29;
                                    MR_Integer mdbcomp__slice_and_dice__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                                    MR_Integer mdbcomp__slice_and_dice__Var_32;
                                    MR_Integer mdbcomp__slice_and_dice__Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
                                    MR_Integer mdbcomp__slice_and_dice__Var_125;
                                    MR_String mdbcomp__slice_and_dice__Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                                    MR_Integer mdbcomp__slice_and_dice__Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                                    MR_Integer mdbcomp__slice_and_dice__Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                                    MR_Integer mdbcomp__slice_and_dice__Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
                                    MR_String mdbcomp__slice_and_dice__Var_122;
                                    MR_Integer mdbcomp__slice_and_dice__Var_123;
                                    MR_Integer mdbcomp__slice_and_dice__Var_124;
                                    MR_Integer mdbcomp__slice_and_dice__Var_126;

                                    {
                                      mdbcomp__slice_and_dice__Var_28 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__Var_30, mdbcomp__slice_and_dice__Var_115);
                                    }
                                    mdbcomp__slice_and_dice__Var_122 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                                    mdbcomp__slice_and_dice__Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                                    mdbcomp__slice_and_dice__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                                    mdbcomp__slice_and_dice__Var_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                                    mdbcomp__slice_and_dice__Var_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
                                    mdbcomp__slice_and_dice__Var_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
                                    {
                                      mdbcomp__slice_and_dice__Var_29 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__Var_32, mdbcomp__slice_and_dice__Var_125);
                                    }
                                    {
                                      mercury__private_builtin__builtin_compare_float_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_28, mdbcomp__slice_and_dice__Var_29);
                                    }
                                  }
                                else
                                  {
                                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 100);
                                    if (mdbcomp__slice_and_dice__succeeded)
                                      {
                                        MR_Integer mdbcomp__slice_and_dice__Diff1_12;
                                        MR_Integer mdbcomp__slice_and_dice__Diff2_13;
                                        MR_Integer mdbcomp__slice_and_dice__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                                        MR_Integer mdbcomp__slice_and_dice__Var_36;
                                        MR_Integer mdbcomp__slice_and_dice__Var_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
                                        MR_Integer mdbcomp__slice_and_dice__Var_145;
                                        MR_String mdbcomp__slice_and_dice__Var_132 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                                        MR_Integer mdbcomp__slice_and_dice__Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                                        MR_Integer mdbcomp__slice_and_dice__Var_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                                        MR_Integer mdbcomp__slice_and_dice__Var_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
                                        MR_String mdbcomp__slice_and_dice__Var_142;
                                        MR_Integer mdbcomp__slice_and_dice__Var_143;
                                        MR_Integer mdbcomp__slice_and_dice__Var_144;
                                        MR_Integer mdbcomp__slice_and_dice__Var_146;

                                        mdbcomp__slice_and_dice__Diff1_12 = (mdbcomp__slice_and_dice__Var_34 - mdbcomp__slice_and_dice__Var_135);
                                        mdbcomp__slice_and_dice__Var_142 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                                        mdbcomp__slice_and_dice__Var_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                                        mdbcomp__slice_and_dice__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                                        mdbcomp__slice_and_dice__Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                                        mdbcomp__slice_and_dice__Var_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
                                        mdbcomp__slice_and_dice__Var_146 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
                                        mdbcomp__slice_and_dice__Diff2_13 = (mdbcomp__slice_and_dice__Var_36 - mdbcomp__slice_and_dice__Var_145);
                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Diff1_12, mdbcomp__slice_and_dice__Diff2_13);
                                        }
                                      }
                                    else
                                      {
                                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 68);
                                        if (mdbcomp__slice_and_dice__succeeded)
                                          {
                                            MR_Integer mdbcomp__slice_and_dice__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                                            MR_Integer mdbcomp__slice_and_dice__Var_40;
                                            MR_Integer mdbcomp__slice_and_dice__Diff1_48;
                                            MR_Integer mdbcomp__slice_and_dice__Diff2_49;
                                            MR_Integer mdbcomp__slice_and_dice__Var_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
                                            MR_Integer mdbcomp__slice_and_dice__Var_165;
                                            MR_String mdbcomp__slice_and_dice__Var_152 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                                            MR_Integer mdbcomp__slice_and_dice__Var_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                                            MR_Integer mdbcomp__slice_and_dice__Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                                            MR_Integer mdbcomp__slice_and_dice__Var_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
                                            MR_String mdbcomp__slice_and_dice__Var_162;
                                            MR_Integer mdbcomp__slice_and_dice__Var_163;
                                            MR_Integer mdbcomp__slice_and_dice__Var_164;
                                            MR_Integer mdbcomp__slice_and_dice__Var_166;

                                            mdbcomp__slice_and_dice__Diff1_48 = (mdbcomp__slice_and_dice__Var_38 - mdbcomp__slice_and_dice__Var_155);
                                            mdbcomp__slice_and_dice__Var_162 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                                            mdbcomp__slice_and_dice__Var_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                                            mdbcomp__slice_and_dice__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                                            mdbcomp__slice_and_dice__Var_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                                            mdbcomp__slice_and_dice__Var_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
                                            mdbcomp__slice_and_dice__Var_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
                                            mdbcomp__slice_and_dice__Diff2_49 = (mdbcomp__slice_and_dice__Var_40 - mdbcomp__slice_and_dice__Var_165);
                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Diff2_49, mdbcomp__slice_and_dice__Diff1_48);
                                            }
                                          }
                                        else
                                          {
                                            {
                                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.slice_and_dice.dice_exec_count_compare\'/4", (MR_String) "invalid sort string");
                                              return;
                                            }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Result0_11 == (MR_Integer) 0);
            if (mdbcomp__slice_and_dice__succeeded)
              {
                {
                  mdbcomp__slice_and_dice__Var_44 = mercury__string__length_1_f_0(mdbcomp__slice_and_dice__Rest_10);
                }
                mdbcomp__slice_and_dice__Var_45 = (MR_Integer) 0;
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_44 > mdbcomp__slice_and_dice__Var_45);
              }
            if (mdbcomp__slice_and_dice__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_String mdbcomp__slice_and_dice__next_value_of_SortStr_5 = mdbcomp__slice_and_dice__Rest_10;

                  mdbcomp__slice_and_dice__SortStr_5 = mdbcomp__slice_and_dice__next_value_of_SortStr_5;
                }
                continue;
              }
            else
              *mdbcomp__slice_and_dice__Result_8 = mdbcomp__slice_and_dice__Result0_11;
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.slice_and_dice.dice_exec_count_compare\'/4", (MR_String) "empty sort string");
              return;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(
  MR_String mdbcomp__slice_and_dice__SortStr_5,
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__SortStr_5, (MR_String) "") == 0);
    MR_Word mdbcomp__slice_and_dice__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 2)));
    MR_Word mdbcomp__slice_and_dice__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 1)));
    MR_Word mdbcomp__slice_and_dice__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 0)));
    MR_Word mdbcomp__slice_and_dice__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 2)));
    MR_Word mdbcomp__slice_and_dice__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 1)));
    MR_Word mdbcomp__slice_and_dice__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 0)));

    if (mdbcomp__slice_and_dice__succeeded)
      {
        MR_Word mdbcomp__slice_and_dice__ProcLabelResult_15;

        {
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__ProcLabelResult_15, mdbcomp__slice_and_dice__Var_27, mdbcomp__slice_and_dice__Var_30);
        }
        switch (mdbcomp__slice_and_dice__ProcLabelResult_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            {
              MR_Word mdbcomp__slice_and_dice__PathPortResult_16;
              MR_Word mdbcomp__slice_and_dice__ResultPrime_36;

              switch (MR_tag((MR_Word) mdbcomp__slice_and_dice__Var_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word mdbcomp__slice_and_dice__PortA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_26, (MR_Integer) 0)));
                    MR_Word mdbcomp__slice_and_dice__PortB_35;
                    MR_Integer mdbcomp__slice_and_dice__Var_63;
                    MR_Integer mdbcomp__slice_and_dice__Var_64;

                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__Var_29)) == (MR_mktag((MR_Integer) 0)));
                    if (mdbcomp__slice_and_dice__succeeded)
                      {
                        mdbcomp__slice_and_dice__PortB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_29, (MR_Integer) 0)));
                        mdbcomp__slice_and_dice__Var_63 = (MR_Integer) mdbcomp__slice_and_dice__PortA_34;
                        mdbcomp__slice_and_dice__Var_64 = (MR_Integer) mdbcomp__slice_and_dice__PortB_35;
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__Var_63, mdbcomp__slice_and_dice__Var_64);
                        }
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mdbcomp__slice_and_dice__RevPathA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_26, (MR_Integer) 0)));
                    MR_Word mdbcomp__slice_and_dice__RevPathB_38;
                    MR_Word mdbcomp__slice_and_dice__PathA_39;
                    MR_Word mdbcomp__slice_and_dice__PathB_40;

                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__Var_29)) == (MR_mktag((MR_Integer) 1)));
                    if (mdbcomp__slice_and_dice__succeeded)
                      {
                        mdbcomp__slice_and_dice__RevPathB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_29, (MR_Integer) 0)));
                        {
                          mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_37, &mdbcomp__slice_and_dice__PathA_39);
                        }
                        {
                          mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_38, &mdbcomp__slice_and_dice__PathB_40);
                        }
                        {
                          mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_39, mdbcomp__slice_and_dice__PathB_40);
                        }
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mdbcomp__slice_and_dice__PortResult_41;
                    MR_Word mdbcomp__slice_and_dice__PortA_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__Var_26, (MR_Integer) 0)));
                    MR_Word mdbcomp__slice_and_dice__PortB_51;
                    MR_Word mdbcomp__slice_and_dice__RevPathA_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__Var_26, (MR_Integer) 1)));
                    MR_Word mdbcomp__slice_and_dice__RevPathB_53;
                    MR_Integer mdbcomp__slice_and_dice__Var_61;
                    MR_Integer mdbcomp__slice_and_dice__Var_62;

                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__Var_29)) == (MR_mktag((MR_Integer) 2)));
                    if (mdbcomp__slice_and_dice__succeeded)
                      {
                        mdbcomp__slice_and_dice__PortB_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__Var_29, (MR_Integer) 0)));
                        mdbcomp__slice_and_dice__RevPathB_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__Var_29, (MR_Integer) 1)));
                        mdbcomp__slice_and_dice__Var_61 = (MR_Integer) mdbcomp__slice_and_dice__PortA_50;
                        mdbcomp__slice_and_dice__Var_62 = (MR_Integer) mdbcomp__slice_and_dice__PortB_51;
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__PortResult_41, mdbcomp__slice_and_dice__Var_61, mdbcomp__slice_and_dice__Var_62);
                        }
                        switch (mdbcomp__slice_and_dice__PortResult_41) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word mdbcomp__slice_and_dice__PathA_42;
                              MR_Word mdbcomp__slice_and_dice__PathB_43;

                              {
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_52, &mdbcomp__slice_and_dice__PathA_42);
                              }
                              {
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_53, &mdbcomp__slice_and_dice__PathB_43);
                              }
                              {
                                mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_42, mdbcomp__slice_and_dice__PathB_43);
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 2;
                            break;
                        }
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
                      }
                  }
                  break;
              }
              if (mdbcomp__slice_and_dice__succeeded)
                mdbcomp__slice_and_dice__PathPortResult_16 = mdbcomp__slice_and_dice__ResultPrime_36;
              else
                {
                  mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__PathPortResult_16, mdbcomp__slice_and_dice__Var_26, mdbcomp__slice_and_dice__Var_29);
                }
              switch (mdbcomp__slice_and_dice__PathPortResult_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  {
                    mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(mdbcomp__slice_and_dice__Result_8, mdbcomp__slice_and_dice__Var_25, mdbcomp__slice_and_dice__Var_28);
                  }
                  break;
                case (MR_Integer) 2:
                  *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
            break;
        }
      }
    else
      {
        mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(mdbcomp__slice_and_dice__SortStr_5, mdbcomp__slice_and_dice__Var_25, mdbcomp__slice_and_dice__Var_28, mdbcomp__slice_and_dice__Result_8);
      }
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(
  MR_String mdbcomp__slice_and_dice__Module_3,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Label_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mdbcomp__slice_and_dice__ProcSymModule_11;
    MR_Word mdbcomp__slice_and_dice__SymModule_20;
    MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mdbcomp__slice_and_dice__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__Label_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdbcomp__slice_and_dice__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
        MR_String mdbcomp__slice_and_dice__Var_12;
        MR_Integer mdbcomp__slice_and_dice__Var_13;
        MR_Integer mdbcomp__slice_and_dice__Var_14;

        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
        mdbcomp__slice_and_dice__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
        mdbcomp__slice_and_dice__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
        mdbcomp__slice_and_dice__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
      }
    else
      {
        MR_Word mdbcomp__slice_and_dice__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
        MR_String mdbcomp__slice_and_dice__Var_17;
        MR_Integer mdbcomp__slice_and_dice__Var_18;
        MR_Integer mdbcomp__slice_and_dice__Var_19;

        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
        mdbcomp__slice_and_dice__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
        mdbcomp__slice_and_dice__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
        mdbcomp__slice_and_dice__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
      }
    {
      mdbcomp__slice_and_dice__SymModule_20 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__slice_and_dice__Module_3);
    }
    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__sym_name__is_submodule_2_p_0(mdbcomp__slice_and_dice__ProcSymModule_11, mdbcomp__slice_and_dice__SymModule_20);
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0(
  MR_String mdbcomp__slice_and_dice__PassFile_10,
  MR_String mdbcomp__slice_and_dice__FailFile_11,
  MR_String mdbcomp__slice_and_dice__SortStr_12,
  MR_Integer mdbcomp__slice_and_dice__MaxRow_13,
  MR_String mdbcomp__slice_and_dice__Module_14,
  MR_String * mdbcomp__slice_and_dice__DiceStr_15,
  MR_String * mdbcomp__slice_and_dice__Problem_16)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    {
      mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(mdbcomp__slice_and_dice__PassFile_10, mdbcomp__slice_and_dice__FailFile_11, mdbcomp__slice_and_dice__SortStr_12, mdbcomp__slice_and_dice__MaxRow_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdbcomp__slice_and_dice__Module_14, mdbcomp__slice_and_dice__DiceStr_15, mdbcomp__slice_and_dice__Problem_16);
    }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_7,
  MR_Word * mdbcomp__slice_and_dice__PathPort_8,
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_9,
  MR_String * mdbcomp__slice_and_dice__FormattedContext_10,
  MR_Integer * mdbcomp__slice_and_dice__Count_11,
  MR_Integer * mdbcomp__slice_and_dice__Tests_12)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__ExecCounts_13;
    MR_String mdbcomp__slice_and_dice__FileName_14;
    MR_Integer mdbcomp__slice_and_dice__LineNumber_15;
    MR_String mdbcomp__slice_and_dice__Var_19;
    MR_String mdbcomp__slice_and_dice__Var_21;

    *mdbcomp__slice_and_dice__PathPort_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_7, (MR_Integer) 0)));
    *mdbcomp__slice_and_dice__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_7, (MR_Integer) 1)));
    mdbcomp__slice_and_dice__ExecCounts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_7, (MR_Integer) 2)));
    mdbcomp__slice_and_dice__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 0)));
    mdbcomp__slice_and_dice__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 1)));
    *mdbcomp__slice_and_dice__Count_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 2)));
    *mdbcomp__slice_and_dice__Tests_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 3)));
    {
      mdbcomp__slice_and_dice__Var_21 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__LineNumber_15);
    }
    {
      mdbcomp__slice_and_dice__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdbcomp__slice_and_dice__Var_21);
    }
    {
      *mdbcomp__slice_and_dice__FormattedContext_10 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__FileName_14, mdbcomp__slice_and_dice__Var_19);
    }
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv8_HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__conv8_HeadVar__2_2 = mdbcomp__slice_and_dice__bracket_int_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv8_HeadVar__2_2));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__622__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv7_HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__conv7_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv7_HeadVar__2_2));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv6_HeadVar__2_2;

    {
      mdbcomp__slice_and_dice__conv6_HeadVar__2_2 = mdbcomp__slice_and_dice__format_path_port_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv6_HeadVar__2_2));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_String mdbcomp__slice_and_dice__conv5_Str_4;

    {
      mdbcomp__slice_and_dice__conv5_Str_4 = mdbcomp__slice_and_dice__format_proc_label_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv5_Str_4));
    return mdbcomp__slice_and_dice__wrapper_arg_2;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv4_PathPort_8;
    MR_Word mdbcomp__slice_and_dice__conv3_ProcLabel_9;
    MR_String mdbcomp__slice_and_dice__conv2_FormattedContext_10;
    MR_Integer mdbcomp__slice_and_dice__conv1_Count_11;
    MR_Integer mdbcomp__slice_and_dice__conv0_Tests_12;

    {
      mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv4_PathPort_8, &mdbcomp__slice_and_dice__conv3_ProcLabel_9, &mdbcomp__slice_and_dice__conv2_FormattedContext_10, &mdbcomp__slice_and_dice__conv1_Count_11, &mdbcomp__slice_and_dice__conv0_Tests_12);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv4_PathPort_8));
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_ProcLabel_9));
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_FormattedContext_10));
    *mdbcomp__slice_and_dice__wrapper_arg_5 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_Count_11));
    *mdbcomp__slice_and_dice__wrapper_arg_6 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_Tests_12));
  }
}

static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(
  MR_Word mdbcomp__slice_and_dice__LabelCounts_7,
  MR_Integer mdbcomp__slice_and_dice__TotalTests_8,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_9,
  MR_Word mdbcomp__slice_and_dice__MaybePathColumns_10,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_11)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_String mdbcomp__slice_and_dice__Str_12;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_78_78 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word mdbcomp__slice_and_dice__ProcLabels_13;
    MR_Word mdbcomp__slice_and_dice__PathPorts_14;
    MR_Word mdbcomp__slice_and_dice__FormattedContexts_15;
    MR_Word mdbcomp__slice_and_dice__Counts_16;
    MR_Word mdbcomp__slice_and_dice__Tests_17;
    MR_Word mdbcomp__slice_and_dice__FormattedProcLabels_18;
    MR_Word mdbcomp__slice_and_dice__FormattedPathPorts_19;
    MR_Word mdbcomp__slice_and_dice__CountStrs_20;
    MR_Word mdbcomp__slice_and_dice__AlwaysColumns_21;
    MR_Word mdbcomp__slice_and_dice__OtherTests_23;
    MR_Word mdbcomp__slice_and_dice__Columns_24;
    MR_Word mdbcomp__slice_and_dice__Var_33;
    MR_Word mdbcomp__slice_and_dice__Var_34;
    MR_Word mdbcomp__slice_and_dice__Var_35;
    MR_Word mdbcomp__slice_and_dice__Var_37;
    MR_Word mdbcomp__slice_and_dice__Var_38;
    MR_Word mdbcomp__slice_and_dice__Var_39;
    MR_Word mdbcomp__slice_and_dice__Var_40;
    MR_Word mdbcomp__slice_and_dice__Var_42;
    MR_Word mdbcomp__slice_and_dice__Var_43;
    MR_Word mdbcomp__slice_and_dice__Var_44;
    MR_Word mdbcomp__slice_and_dice__Var_45;
    MR_Word mdbcomp__slice_and_dice__Var_47;
    MR_Word mdbcomp__slice_and_dice__Var_48;
    MR_Word mdbcomp__slice_and_dice__Var_49;
    MR_Word mdbcomp__slice_and_dice__Var_50;
    MR_String mdbcomp__slice_and_dice__Var_67;
    MR_Word mdbcomp__slice_and_dice___OneTests_22;

    {
      mercury__list__map5_7_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0, mdbcomp__slice_and_dice__TypeCtorInfo_77_77, mdbcomp__slice_and_dice__TypeCtorInfo_78_78, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, mdbcomp__slice_and_dice__TypeCtorInfo_80_80, mdbcomp__slice_and_dice__TypeCtorInfo_80_80, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[12], mdbcomp__slice_and_dice__LabelCounts_7, &mdbcomp__slice_and_dice__ProcLabels_13, &mdbcomp__slice_and_dice__PathPorts_14, &mdbcomp__slice_and_dice__FormattedContexts_15, &mdbcomp__slice_and_dice__Counts_16, &mdbcomp__slice_and_dice__Tests_17);
    }
    {
      mdbcomp__slice_and_dice__FormattedProcLabels_18 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_77_77, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[13], mdbcomp__slice_and_dice__ProcLabels_13);
    }
    {
      mdbcomp__slice_and_dice__FormattedPathPorts_19 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_78_78, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[14], mdbcomp__slice_and_dice__PathPorts_14);
    }
    {
      mdbcomp__slice_and_dice__CountStrs_20 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_80_80, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[15], mdbcomp__slice_and_dice__Counts_16);
    }
    {
      mdbcomp__slice_and_dice__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_35, 0) = ((MR_Box) ((MR_String) "Procedure"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_35, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedProcLabels_18));
    }
    {
      mdbcomp__slice_and_dice__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_34, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_35));
    }
    {
      mdbcomp__slice_and_dice__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_33, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_34));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_33, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxPredColumns_9));
    }
    {
      mdbcomp__slice_and_dice__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_40, 0) = ((MR_Box) ((MR_String) "Path/Port"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_40, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedPathPorts_19));
    }
    {
      mdbcomp__slice_and_dice__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_39, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_40));
    }
    {
      mdbcomp__slice_and_dice__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_38, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_39));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_38, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybePathColumns_10));
    }
    {
      mdbcomp__slice_and_dice__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_45, 0) = ((MR_Box) ((MR_String) "File:Line"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_45, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedContexts_15));
    }
    {
      mdbcomp__slice_and_dice__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_44, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_45));
    }
    {
      mdbcomp__slice_and_dice__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_43, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_44));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_43, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxFileColumns_11));
    }
    {
      mdbcomp__slice_and_dice__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_50, 0) = ((MR_Box) ((MR_String) "Count"));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_50, 1) = ((MR_Box) (mdbcomp__slice_and_dice__CountStrs_20));
    }
    {
      mdbcomp__slice_and_dice__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_49, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_50));
    }
    {
      mdbcomp__slice_and_dice__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_48, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_49));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdbcomp__slice_and_dice__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_47, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_48));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdbcomp__slice_and_dice__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_42, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_43));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_42, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_47));
    }
    {
      mdbcomp__slice_and_dice__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_37, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_38));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_42));
    }
    {
      mdbcomp__slice_and_dice__AlwaysColumns_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__AlwaysColumns_21, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_33));
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__AlwaysColumns_21, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_37));
    }
    {
      mercury__list__filter_4_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_80_80, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[3], mdbcomp__slice_and_dice__Tests_17, &mdbcomp__slice_and_dice___OneTests_22, &mdbcomp__slice_and_dice__OtherTests_23);
    }
    if ((mdbcomp__slice_and_dice__OtherTests_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdbcomp__slice_and_dice__Columns_24 = mdbcomp__slice_and_dice__AlwaysColumns_21;
    else
      {
        MR_Word mdbcomp__slice_and_dice__TestsStrs_27;
        MR_String mdbcomp__slice_and_dice__TotalTestsStr_28;
        MR_String mdbcomp__slice_and_dice__Var_58;
        MR_String mdbcomp__slice_and_dice__Var_59;
        MR_Word mdbcomp__slice_and_dice__Var_61;
        MR_Word mdbcomp__slice_and_dice__Var_62;
        MR_Word mdbcomp__slice_and_dice__Var_63;
        MR_Word mdbcomp__slice_and_dice__Var_64;

        {
          mdbcomp__slice_and_dice__TestsStrs_27 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_80_80, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[16], mdbcomp__slice_and_dice__Tests_17);
        }
        {
          mdbcomp__slice_and_dice__Var_59 = mercury__string__int_to_string_thousands_1_f_0(mdbcomp__slice_and_dice__TotalTests_8);
        }
        {
          mdbcomp__slice_and_dice__Var_58 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Var_59, (MR_String) ")");
        }
        {
          mdbcomp__slice_and_dice__TotalTestsStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", mdbcomp__slice_and_dice__Var_58);
        }
        {
          mdbcomp__slice_and_dice__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_64, 0) = ((MR_Box) (mdbcomp__slice_and_dice__TotalTestsStr_28));
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_64, 1) = ((MR_Box) (mdbcomp__slice_and_dice__TestsStrs_27));
        }
        {
          mdbcomp__slice_and_dice__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_63, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_64));
        }
        {
          mdbcomp__slice_and_dice__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_62, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_63));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mdbcomp__slice_and_dice__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_61, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_62));
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mdbcomp__slice_and_dice__Columns_24 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[6], mdbcomp__slice_and_dice__AlwaysColumns_21, mdbcomp__slice_and_dice__Var_61);
        }
      }
    {
      mdbcomp__slice_and_dice__Var_67 = mercury__string__format_table_max_2_f_0(mdbcomp__slice_and_dice__Columns_24, (MR_String) " ");
    }
    {
      mdbcomp__slice_and_dice__Str_12 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Var_67, (MR_String) "\n");
    }
    return mdbcomp__slice_and_dice__Str_12;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
  MR_Word * mdbcomp__slice_and_dice__SliceLabelCount_7)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__PathPort_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mdbcomp__slice_and_dice__ExecCount_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mdbcomp__slice_and_dice__SliceLabelCount_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PathPort_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_6));
    }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv0_SliceLabelCount_7;

    {
      mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_SliceLabelCount_7);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_SliceLabelCount_7));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
  MR_Word mdbcomp__slice_and_dice__ProcSlice_6,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_19_19;
    MR_Word mdbcomp__slice_and_dice__ProcExecCounts_8;
    MR_Word mdbcomp__slice_and_dice__NewLabelCounts_9;
    MR_Word mdbcomp__slice_and_dice__Var_12;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0, mdbcomp__slice_and_dice__ProcSlice_6, &mdbcomp__slice_and_dice__ProcExecCounts_8);
    }
    {
      mdbcomp__slice_and_dice__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_12, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_12, 1) = ((MR_Box) (mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_12, 3) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_5));
    }
    mdbcomp__slice_and_dice__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;
    {
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[5], mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__Var_12, mdbcomp__slice_and_dice__ProcExecCounts_8, &mdbcomp__slice_and_dice__NewLabelCounts_9);
    }
    {
      mercury__list__append_3_p_1(mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10, mdbcomp__slice_and_dice__NewLabelCounts_9, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);
    }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(
  MR_String mdbcomp__slice_and_dice__SortStr_5,
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__slice_and_dice__succeeded;
        MR_Char mdbcomp__slice_and_dice__C_9;
        MR_String mdbcomp__slice_and_dice__Rest_10;

        {
          mdbcomp__slice_and_dice__succeeded = mercury__string__first_char_3_p_3(mdbcomp__slice_and_dice__SortStr_5, &mdbcomp__slice_and_dice__C_9, &mdbcomp__slice_and_dice__Rest_10);
        }
        if (mdbcomp__slice_and_dice__succeeded)
          {
            MR_Word mdbcomp__slice_and_dice__Result0_11;
            MR_Integer mdbcomp__slice_and_dice__Var_22;
            MR_Integer mdbcomp__slice_and_dice__Var_23;

            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 99);
            if (mdbcomp__slice_and_dice__succeeded)
              {
                MR_Integer mdbcomp__slice_and_dice__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                MR_Integer mdbcomp__slice_and_dice__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                MR_String mdbcomp__slice_and_dice__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                MR_Integer mdbcomp__slice_and_dice__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                MR_Integer mdbcomp__slice_and_dice__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                MR_String mdbcomp__slice_and_dice__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                MR_Integer mdbcomp__slice_and_dice__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                MR_Integer mdbcomp__slice_and_dice__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_12, mdbcomp__slice_and_dice__Var_13);
                }
              }
            else
              {
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 67);
                if (mdbcomp__slice_and_dice__succeeded)
                  {
                    MR_Integer mdbcomp__slice_and_dice__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                    MR_Integer mdbcomp__slice_and_dice__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                    MR_String mdbcomp__slice_and_dice__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                    MR_Integer mdbcomp__slice_and_dice__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                    MR_Integer mdbcomp__slice_and_dice__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                    MR_String mdbcomp__slice_and_dice__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                    MR_Integer mdbcomp__slice_and_dice__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                    MR_Integer mdbcomp__slice_and_dice__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_14, mdbcomp__slice_and_dice__Var_15);
                    }
                  }
                else
                  {
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 116);
                    if (mdbcomp__slice_and_dice__succeeded)
                      {
                        MR_Integer mdbcomp__slice_and_dice__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                        MR_Integer mdbcomp__slice_and_dice__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                        MR_String mdbcomp__slice_and_dice__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                        MR_Integer mdbcomp__slice_and_dice__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                        MR_Integer mdbcomp__slice_and_dice__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
                        MR_String mdbcomp__slice_and_dice__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                        MR_Integer mdbcomp__slice_and_dice__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                        MR_Integer mdbcomp__slice_and_dice__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_16, mdbcomp__slice_and_dice__Var_17);
                        }
                      }
                    else
                      {
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 84);
                        if (mdbcomp__slice_and_dice__succeeded)
                          {
                            MR_Integer mdbcomp__slice_and_dice__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
                            MR_Integer mdbcomp__slice_and_dice__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
                            MR_String mdbcomp__slice_and_dice__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
                            MR_Integer mdbcomp__slice_and_dice__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
                            MR_Integer mdbcomp__slice_and_dice__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
                            MR_String mdbcomp__slice_and_dice__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
                            MR_Integer mdbcomp__slice_and_dice__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
                            MR_Integer mdbcomp__slice_and_dice__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Var_18, mdbcomp__slice_and_dice__Var_19);
                            }
                          }
                        else
                          {
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.slice_and_dice.slice_exec_count_compare\'/4", (MR_String) "invalid sort string");
                              return;
                            }
                          }
                      }
                  }
              }
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Result0_11 == (MR_Integer) 0);
            if (mdbcomp__slice_and_dice__succeeded)
              {
                {
                  mdbcomp__slice_and_dice__Var_22 = mercury__string__length_1_f_0(mdbcomp__slice_and_dice__Rest_10);
                }
                mdbcomp__slice_and_dice__Var_23 = (MR_Integer) 0;
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_22 > mdbcomp__slice_and_dice__Var_23);
              }
            if (mdbcomp__slice_and_dice__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_String mdbcomp__slice_and_dice__next_value_of_SortStr_5 = mdbcomp__slice_and_dice__Rest_10;

                  mdbcomp__slice_and_dice__SortStr_5 = mdbcomp__slice_and_dice__next_value_of_SortStr_5;
                }
                continue;
              }
            else
              *mdbcomp__slice_and_dice__Result_8 = mdbcomp__slice_and_dice__Result0_11;
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdbcomp.slice_and_dice.slice_exec_count_compare\'/4", (MR_String) "empty sort string");
              return;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(
  MR_String mdbcomp__slice_and_dice__SortStr_5,
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__SortStr_5, (MR_String) "") == 0);
    MR_Word mdbcomp__slice_and_dice__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 2)));
    MR_Word mdbcomp__slice_and_dice__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 1)));
    MR_Word mdbcomp__slice_and_dice__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 0)));
    MR_Word mdbcomp__slice_and_dice__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 2)));
    MR_Word mdbcomp__slice_and_dice__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 1)));
    MR_Word mdbcomp__slice_and_dice__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 0)));

    if (mdbcomp__slice_and_dice__succeeded)
      {
        MR_Word mdbcomp__slice_and_dice__ProcLabelResult_15;

        {
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__ProcLabelResult_15, mdbcomp__slice_and_dice__Var_27, mdbcomp__slice_and_dice__Var_30);
        }
        switch (mdbcomp__slice_and_dice__ProcLabelResult_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            {
              MR_Word mdbcomp__slice_and_dice__PathPortResult_16;
              MR_Word mdbcomp__slice_and_dice__ResultPrime_36;

              switch (MR_tag((MR_Word) mdbcomp__slice_and_dice__Var_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word mdbcomp__slice_and_dice__PortA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_26, (MR_Integer) 0)));
                    MR_Word mdbcomp__slice_and_dice__PortB_35;
                    MR_Integer mdbcomp__slice_and_dice__Var_63;
                    MR_Integer mdbcomp__slice_and_dice__Var_64;

                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__Var_29)) == (MR_mktag((MR_Integer) 0)));
                    if (mdbcomp__slice_and_dice__succeeded)
                      {
                        mdbcomp__slice_and_dice__PortB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_29, (MR_Integer) 0)));
                        mdbcomp__slice_and_dice__Var_63 = (MR_Integer) mdbcomp__slice_and_dice__PortA_34;
                        mdbcomp__slice_and_dice__Var_64 = (MR_Integer) mdbcomp__slice_and_dice__PortB_35;
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__Var_63, mdbcomp__slice_and_dice__Var_64);
                        }
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mdbcomp__slice_and_dice__RevPathA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_26, (MR_Integer) 0)));
                    MR_Word mdbcomp__slice_and_dice__RevPathB_38;
                    MR_Word mdbcomp__slice_and_dice__PathA_39;
                    MR_Word mdbcomp__slice_and_dice__PathB_40;

                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__Var_29)) == (MR_mktag((MR_Integer) 1)));
                    if (mdbcomp__slice_and_dice__succeeded)
                      {
                        mdbcomp__slice_and_dice__RevPathB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Var_29, (MR_Integer) 0)));
                        {
                          mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_37, &mdbcomp__slice_and_dice__PathA_39);
                        }
                        {
                          mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_38, &mdbcomp__slice_and_dice__PathB_40);
                        }
                        {
                          mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_39, mdbcomp__slice_and_dice__PathB_40);
                        }
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mdbcomp__slice_and_dice__PortResult_41;
                    MR_Word mdbcomp__slice_and_dice__PortA_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__Var_26, (MR_Integer) 0)));
                    MR_Word mdbcomp__slice_and_dice__PortB_51;
                    MR_Word mdbcomp__slice_and_dice__RevPathA_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__Var_26, (MR_Integer) 1)));
                    MR_Word mdbcomp__slice_and_dice__RevPathB_53;
                    MR_Integer mdbcomp__slice_and_dice__Var_61;
                    MR_Integer mdbcomp__slice_and_dice__Var_62;

                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__Var_29)) == (MR_mktag((MR_Integer) 2)));
                    if (mdbcomp__slice_and_dice__succeeded)
                      {
                        mdbcomp__slice_and_dice__PortB_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__Var_29, (MR_Integer) 0)));
                        mdbcomp__slice_and_dice__RevPathB_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__Var_29, (MR_Integer) 1)));
                        mdbcomp__slice_and_dice__Var_61 = (MR_Integer) mdbcomp__slice_and_dice__PortA_50;
                        mdbcomp__slice_and_dice__Var_62 = (MR_Integer) mdbcomp__slice_and_dice__PortB_51;
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__PortResult_41, mdbcomp__slice_and_dice__Var_61, mdbcomp__slice_and_dice__Var_62);
                        }
                        switch (mdbcomp__slice_and_dice__PortResult_41) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word mdbcomp__slice_and_dice__PathA_42;
                              MR_Word mdbcomp__slice_and_dice__PathB_43;

                              {
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_52, &mdbcomp__slice_and_dice__PathA_42);
                              }
                              {
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_53, &mdbcomp__slice_and_dice__PathB_43);
                              }
                              {
                                mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_42, mdbcomp__slice_and_dice__PathB_43);
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 2;
                            break;
                        }
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
                      }
                  }
                  break;
              }
              if (mdbcomp__slice_and_dice__succeeded)
                mdbcomp__slice_and_dice__PathPortResult_16 = mdbcomp__slice_and_dice__ResultPrime_36;
              else
                {
                  mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__PathPortResult_16, mdbcomp__slice_and_dice__Var_26, mdbcomp__slice_and_dice__Var_29);
                }
              switch (mdbcomp__slice_and_dice__PathPortResult_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  {
                    mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(mdbcomp__slice_and_dice__Result_8, mdbcomp__slice_and_dice__Var_25, mdbcomp__slice_and_dice__Var_28);
                  }
                  break;
                case (MR_Integer) 2:
                  *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
            break;
        }
      }
    else
      {
        mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(mdbcomp__slice_and_dice__SortStr_5, mdbcomp__slice_and_dice__Var_25, mdbcomp__slice_and_dice__Var_28, mdbcomp__slice_and_dice__Result_8);
      }
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__Var_3;
    MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_2, (MR_Integer) 2)));
    MR_Word mdbcomp__slice_and_dice__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_2, (MR_Integer) 0)));
    MR_Word mdbcomp__slice_and_dice__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_2, (MR_Integer) 1)));
    MR_String mdbcomp__slice_and_dice__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_5, (MR_Integer) 0)));
    MR_Integer mdbcomp__slice_and_dice__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_5, (MR_Integer) 1)));
    MR_Integer mdbcomp__slice_and_dice__Var_10;

    mdbcomp__slice_and_dice__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_5, (MR_Integer) 2)));
    mdbcomp__slice_and_dice__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_5, (MR_Integer) 3)));
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_3 > (MR_Integer) 0);
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(
  MR_String mdbcomp__slice_and_dice__Module_3,
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__Label_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mdbcomp__slice_and_dice__ProcSymModule_11;
    MR_Word mdbcomp__slice_and_dice__SymModule_20;
    MR_Word mdbcomp__slice_and_dice__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mdbcomp__slice_and_dice__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__Label_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdbcomp__slice_and_dice__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
        MR_String mdbcomp__slice_and_dice__Var_12;
        MR_Integer mdbcomp__slice_and_dice__Var_13;
        MR_Integer mdbcomp__slice_and_dice__Var_14;

        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
        mdbcomp__slice_and_dice__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
        mdbcomp__slice_and_dice__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
        mdbcomp__slice_and_dice__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
      }
    else
      {
        MR_Word mdbcomp__slice_and_dice__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
        MR_String mdbcomp__slice_and_dice__Var_17;
        MR_Integer mdbcomp__slice_and_dice__Var_18;
        MR_Integer mdbcomp__slice_and_dice__Var_19;

        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
        mdbcomp__slice_and_dice__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
        mdbcomp__slice_and_dice__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
        mdbcomp__slice_and_dice__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
      }
    {
      mdbcomp__slice_and_dice__SymModule_20 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__slice_and_dice__Module_3);
    }
    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__sym_name__is_submodule_2_p_0(mdbcomp__slice_and_dice__ProcSymModule_11, mdbcomp__slice_and_dice__SymModule_20);
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_2,
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_3,
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_4)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_2, (MR_Integer) 2)));
    MR_Integer mdbcomp__slice_and_dice__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_2, (MR_Integer) 1)));
    MR_Integer mdbcomp__slice_and_dice__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 5)));
    MR_Integer mdbcomp__slice_and_dice__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 4)));
    MR_Integer mdbcomp__slice_and_dice__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 3)));
    MR_Integer mdbcomp__slice_and_dice__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 2)));
    MR_Integer mdbcomp__slice_and_dice__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 1)));
    MR_String mdbcomp__slice_and_dice__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 0)));
    MR_Integer mdbcomp__slice_and_dice__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_2, (MR_Integer) 0)));

    switch (mdbcomp__slice_and_dice__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer mdbcomp__slice_and_dice__Var_31 = (mdbcomp__slice_and_dice__Var_37 + mdbcomp__slice_and_dice__Var_34);
          MR_Integer mdbcomp__slice_and_dice__Var_32 = (mdbcomp__slice_and_dice__Var_36 + mdbcomp__slice_and_dice__Var_33);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *mdbcomp__slice_and_dice__ExecCounts_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_41));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_40));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__Var_39));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Var_38));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdbcomp__slice_and_dice__Var_31));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdbcomp__slice_and_dice__Var_32));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer mdbcomp__slice_and_dice__Var_17 = (mdbcomp__slice_and_dice__Var_39 + mdbcomp__slice_and_dice__Var_34);
          MR_Integer mdbcomp__slice_and_dice__Var_18 = (mdbcomp__slice_and_dice__Var_38 + mdbcomp__slice_and_dice__Var_33);

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *mdbcomp__slice_and_dice__ExecCounts_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Var_41));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__Var_40));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__Var_17));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Var_18));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdbcomp__slice_and_dice__Var_37));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdbcomp__slice_and_dice__Var_36));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv0_ExecCounts_4;

    {
      mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 4))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_ExecCounts_4);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_ExecCounts_4));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(
  MR_String mdbcomp__slice_and_dice__FileName_7,
  MR_Word mdbcomp__slice_and_dice__Kind_8,
  MR_Word mdbcomp__slice_and_dice__PathPort_9,
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_10,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__UpdatedProcDice_12;
    MR_Word mdbcomp__slice_and_dice__Var_19;

    {
      mdbcomp__slice_and_dice__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Kind_8));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 4) = ((MR_Box) (mdbcomp__slice_and_dice__LineNoAndCount_10));
    }
    {
      mdbcomp__slice_and_dice__succeeded = mercury__map__transform_value_4_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, mdbcomp__slice_and_dice__Var_19, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_9)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17, &mdbcomp__slice_and_dice__UpdatedProcDice_12);
    }
    if (mdbcomp__slice_and_dice__succeeded)
      *mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18 = mdbcomp__slice_and_dice__UpdatedProcDice_12;
    else
      {
        MR_Integer mdbcomp__slice_and_dice__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_10, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__ExecCount_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_10, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__NumTests_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_10, (MR_Integer) 2)));
        MR_Word mdbcomp__slice_and_dice__InitCount_16;

        switch (mdbcomp__slice_and_dice__Kind_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mdbcomp__slice_and_dice__InitCount_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_7));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_13));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 3) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 4) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_14));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 5) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_15));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mdbcomp__slice_and_dice__InitCount_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_7));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_13));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_14));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 3) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_15));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 4) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 5) = ((MR_Box) ((MR_Integer) 0));
              }
            }
            break;
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_9)), ((MR_Box) (mdbcomp__slice_and_dice__InitCount_16)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17, mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18);
        }
      }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcDice_18;

    {
      mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 4))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcDice_18);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcDice_18));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcDice_18;

    {
      mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 4))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcDice_18);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcDice_18));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(
  MR_Word mdbcomp__slice_and_dice__Kind_6,
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_7,
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_8,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_String mdbcomp__slice_and_dice__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_7, (MR_Integer) 1)));
    MR_Word mdbcomp__slice_and_dice__ProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_7, (MR_Integer) 2)));
    MR_Word mdbcomp__slice_and_dice___ModuleNameSym_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_7, (MR_Integer) 0)));
    MR_Word mdbcomp__slice_and_dice__FoundProcDice_13;
    MR_Box mdbcomp__slice_and_dice__conv0_FoundProcDice_13;

    {
      mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_12)), &mdbcomp__slice_and_dice__conv0_FoundProcDice_13);
    }
    if (mdbcomp__slice_and_dice__succeeded)
      {
        mdbcomp__slice_and_dice__FoundProcDice_13 = ((MR_Word) mdbcomp__slice_and_dice__conv0_FoundProcDice_13);
        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
      }
    if (mdbcomp__slice_and_dice__succeeded)
      {
        MR_Word mdbcomp__slice_and_dice__TypeInfo_31_31;
        MR_Word mdbcomp__slice_and_dice__MergedProcDice_14;
        MR_Word mdbcomp__slice_and_dice__Var_17;
        MR_Box mdbcomp__slice_and_dice__conv2_MergedProcDice_14;

        {
          mdbcomp__slice_and_dice__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_11));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 4) = ((MR_Box) (mdbcomp__slice_and_dice__Kind_6));
        }
        mdbcomp__slice_and_dice__TypeInfo_31_31 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1];
        {
          mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_31_31, mdbcomp__slice_and_dice__Var_17, mdbcomp__slice_and_dice__ProcTraceCounts_8, ((MR_Box) (mdbcomp__slice_and_dice__FoundProcDice_13)), &mdbcomp__slice_and_dice__conv2_MergedProcDice_14);
        }
        mdbcomp__slice_and_dice__MergedProcDice_14 = ((MR_Word) mdbcomp__slice_and_dice__conv2_MergedProcDice_14);
        {
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_31_31, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_12)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcDice_14)), mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15, mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16);
        }
      }
    else
      {
        MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_37_37;
        MR_Word mdbcomp__slice_and_dice__TypeInfo_40_40;
        MR_Word mdbcomp__slice_and_dice__Var_19;
        MR_Word mdbcomp__slice_and_dice__Var_20;
        MR_Word mdbcomp__slice_and_dice__MergedProcDice_22;
        MR_Box mdbcomp__slice_and_dice__conv4_MergedProcDice_22;

        {
          mdbcomp__slice_and_dice__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_11));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_19, 4) = ((MR_Box) (mdbcomp__slice_and_dice__Kind_6));
        }
        mdbcomp__slice_and_dice__TypeCtorInfo_37_37 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
        {
          mdbcomp__slice_and_dice__Var_20 = mercury__map__init_0_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_37_37, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0);
        }
        mdbcomp__slice_and_dice__TypeInfo_40_40 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1];
        {
          mercury__map__foldl_4_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_37_37, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_40_40, mdbcomp__slice_and_dice__Var_19, mdbcomp__slice_and_dice__ProcTraceCounts_8, ((MR_Box) (mdbcomp__slice_and_dice__Var_20)), &mdbcomp__slice_and_dice__conv4_MergedProcDice_22);
        }
        mdbcomp__slice_and_dice__MergedProcDice_22 = ((MR_Word) mdbcomp__slice_and_dice__conv4_MergedProcDice_22);
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_40_40, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_12)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcDice_22)), mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15, mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16);
        }
      }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_Word * mdbcomp__slice_and_dice__Dice_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "det_maybe_dice_error_to_dice: result is error");
          return;
        }
      }
    else
      *mdbcomp__slice_and_dice__Dice_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0(
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
  MR_String * mdbcomp__slice_and_dice__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;

    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      *mdbcomp__slice_and_dice__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
    else
      *mdbcomp__slice_and_dice__HeadVar__2_2 = (MR_String) "";
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_4,
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_5,
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_6)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Integer mdbcomp__slice_and_dice__ExecCount_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_4, (MR_Integer) 1)));
    MR_Integer mdbcomp__slice_and_dice__NumTests_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_4, (MR_Integer) 2)));
    MR_String mdbcomp__slice_and_dice__FileName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 0)));
    MR_Integer mdbcomp__slice_and_dice__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 1)));
    MR_Integer mdbcomp__slice_and_dice__Exec_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 2)));
    MR_Integer mdbcomp__slice_and_dice__Tests_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 3)));
    MR_Integer mdbcomp__slice_and_dice__Var_14 = (mdbcomp__slice_and_dice__Exec_12 + mdbcomp__slice_and_dice__ExecCount_8);
    MR_Integer mdbcomp__slice_and_dice__Var_15 = (mdbcomp__slice_and_dice__Tests_13 + mdbcomp__slice_and_dice__NumTests_9);
    MR_Integer mdbcomp__slice_and_dice___LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_4, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *mdbcomp__slice_and_dice__ExecCounts_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__Var_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Var_15));
    }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv0_ExecCounts_6;

    {
      mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_ExecCounts_6);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_ExecCounts_6));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(
  MR_String mdbcomp__slice_and_dice__FileName_6,
  MR_Word mdbcomp__slice_and_dice__PathPort_7,
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_8,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__UpdatedProcSlice_10;
    MR_Word mdbcomp__slice_and_dice__Var_17;

    {
      mdbcomp__slice_and_dice__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 3) = ((MR_Box) (mdbcomp__slice_and_dice__LineNoAndCount_8));
    }
    {
      mdbcomp__slice_and_dice__succeeded = mercury__map__transform_value_4_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, mdbcomp__slice_and_dice__Var_17, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_7)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15, &mdbcomp__slice_and_dice__UpdatedProcSlice_10);
    }
    if (mdbcomp__slice_and_dice__succeeded)
      *mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16 = mdbcomp__slice_and_dice__UpdatedProcSlice_10;
    else
      {
        MR_Integer mdbcomp__slice_and_dice__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_8, (MR_Integer) 0)));
        MR_Integer mdbcomp__slice_and_dice__ExecCount_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_8, (MR_Integer) 1)));
        MR_Integer mdbcomp__slice_and_dice__NumTests_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_8, (MR_Integer) 2)));
        MR_Word mdbcomp__slice_and_dice__SliceExecCount_14;

        {
          mdbcomp__slice_and_dice__SliceExecCount_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_6));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_11));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_12));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 3) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_13));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_7)), ((MR_Box) (mdbcomp__slice_and_dice__SliceExecCount_14)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15, mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16);
        }
      }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcSlice_16;

    {
      mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcSlice_16);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcSlice_16));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcSlice_16;

    {
      mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcSlice_16);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcSlice_16));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_5,
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_6,
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13,
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_String mdbcomp__slice_and_dice__FileName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_5, (MR_Integer) 1)));
    MR_Word mdbcomp__slice_and_dice__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_5, (MR_Integer) 2)));
    MR_Word mdbcomp__slice_and_dice___ModuleNameSym_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_5, (MR_Integer) 0)));
    MR_Word mdbcomp__slice_and_dice__FoundProcSlice_11;
    MR_Box mdbcomp__slice_and_dice__conv0_FoundProcSlice_11;

    {
      mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_10)), &mdbcomp__slice_and_dice__conv0_FoundProcSlice_11);
    }
    if (mdbcomp__slice_and_dice__succeeded)
      {
        mdbcomp__slice_and_dice__FoundProcSlice_11 = ((MR_Word) mdbcomp__slice_and_dice__conv0_FoundProcSlice_11);
        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
      }
    if (mdbcomp__slice_and_dice__succeeded)
      {
        MR_Word mdbcomp__slice_and_dice__TypeInfo_29_29;
        MR_Word mdbcomp__slice_and_dice__MergedProcSlice_12;
        MR_Word mdbcomp__slice_and_dice__Var_15;
        MR_Box mdbcomp__slice_and_dice__conv2_MergedProcSlice_12;

        {
          mdbcomp__slice_and_dice__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_15, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_15, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_15, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_9));
        }
        mdbcomp__slice_and_dice__TypeInfo_29_29 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0];
        {
          mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_29_29, mdbcomp__slice_and_dice__Var_15, mdbcomp__slice_and_dice__ProcTraceCounts_6, ((MR_Box) (mdbcomp__slice_and_dice__FoundProcSlice_11)), &mdbcomp__slice_and_dice__conv2_MergedProcSlice_12);
        }
        mdbcomp__slice_and_dice__MergedProcSlice_12 = ((MR_Word) mdbcomp__slice_and_dice__conv2_MergedProcSlice_12);
        {
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_29_29, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_10)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcSlice_12)), mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13, mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14);
        }
      }
    else
      {
        MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_35_35;
        MR_Word mdbcomp__slice_and_dice__TypeInfo_38_38;
        MR_Word mdbcomp__slice_and_dice__Var_17;
        MR_Word mdbcomp__slice_and_dice__Var_18;
        MR_Word mdbcomp__slice_and_dice__MergedProcSlice_20;
        MR_Box mdbcomp__slice_and_dice__conv4_MergedProcSlice_20;

        {
          mdbcomp__slice_and_dice__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_17, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_9));
        }
        mdbcomp__slice_and_dice__TypeCtorInfo_35_35 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
        {
          mdbcomp__slice_and_dice__Var_18 = mercury__map__init_0_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_35_35, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0);
        }
        mdbcomp__slice_and_dice__TypeInfo_38_38 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0];
        {
          mercury__map__foldl_4_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_35_35, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_38_38, mdbcomp__slice_and_dice__Var_17, mdbcomp__slice_and_dice__ProcTraceCounts_6, ((MR_Box) (mdbcomp__slice_and_dice__Var_18)), &mdbcomp__slice_and_dice__conv4_MergedProcSlice_20);
        }
        mdbcomp__slice_and_dice__MergedProcSlice_20 = ((MR_Word) mdbcomp__slice_and_dice__conv4_MergedProcSlice_20);
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_38_38, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_10)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcSlice_20)), mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13, mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14);
        }
      }
  }
}

MR_Float MR_CALL 
mdbcomp__slice_and_dice__suspicion_ratio_binary_2_f_0(
  MR_Integer mdbcomp__slice_and_dice__PassCount_4,
  MR_Integer mdbcomp__slice_and_dice__FailCount_5)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__FailCount_5 > (MR_Integer) 0);
    MR_Float mdbcomp__slice_and_dice__R_6;

    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__PassCount_4 == (MR_Integer) 0);
    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__R_6 = (MR_Float) 1.0000000000000000;
    else
      mdbcomp__slice_and_dice__R_6 = (MR_Float) 0.0000000000000000;
    return mdbcomp__slice_and_dice__R_6;
  }
}

MR_Float MR_CALL 
mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_f_0(
  MR_Integer mdbcomp__slice_and_dice__PassCount_6,
  MR_Integer mdbcomp__slice_and_dice__PassTests_7,
  MR_Integer mdbcomp__slice_and_dice__FailCount_8,
  MR_Integer mdbcomp__slice_and_dice__FailTests_9)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__FailCount_8 == (MR_Integer) 0);
    MR_Float mdbcomp__slice_and_dice__R_10;

    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__R_10 = (MR_Float) 0.0000000000000000;
    else
      {
        MR_Float mdbcomp__slice_and_dice__PassNorm_11;
        MR_Float mdbcomp__slice_and_dice__FailNorm_12;
        MR_Float mdbcomp__slice_and_dice__Var_15;
        MR_Float mdbcomp__slice_and_dice__Var_16;
        MR_Float mdbcomp__slice_and_dice__Var_17;
        MR_Float mdbcomp__slice_and_dice__Var_18;

        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__PassTests_7 == (MR_Integer) 0);
        if (mdbcomp__slice_and_dice__succeeded)
          mdbcomp__slice_and_dice__PassNorm_11 = (MR_Float) 0.0000000000000000;
        else
          {
            MR_Float mdbcomp__slice_and_dice__Var_13;
            MR_Float mdbcomp__slice_and_dice__Var_14;

            {
              mdbcomp__slice_and_dice__Var_13 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__PassCount_6);
            }
            {
              mdbcomp__slice_and_dice__Var_14 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__PassTests_7);
            }
            {
              mdbcomp__slice_and_dice__PassNorm_11 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__Var_13, mdbcomp__slice_and_dice__Var_14);
            }
          }
        {
          mdbcomp__slice_and_dice__Var_15 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__FailCount_8);
        }
        {
          mdbcomp__slice_and_dice__Var_16 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__FailTests_9);
        }
        {
          mdbcomp__slice_and_dice__FailNorm_12 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__Var_15, mdbcomp__slice_and_dice__Var_16);
        }
        mdbcomp__slice_and_dice__Var_18 = (mdbcomp__slice_and_dice__FailNorm_12 - mdbcomp__slice_and_dice__PassNorm_11);
        {
          mdbcomp__slice_and_dice__Var_17 = mercury__float__max_2_f_0(mdbcomp__slice_and_dice__Var_18, (MR_Float) 0.0000000000000000);
        }
        {
          mdbcomp__slice_and_dice__R_10 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__Var_17, mdbcomp__slice_and_dice__FailNorm_12);
        }
      }
    return mdbcomp__slice_and_dice__R_10;
  }
}

MR_Float MR_CALL 
mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(
  MR_Integer mdbcomp__slice_and_dice__PassCount_4,
  MR_Integer mdbcomp__slice_and_dice__FailCount_5)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Float mdbcomp__slice_and_dice__R1_6;
    MR_Integer mdbcomp__slice_and_dice__Denominator_7 = (mdbcomp__slice_and_dice__PassCount_4 + mdbcomp__slice_and_dice__FailCount_5);

    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Denominator_7 == (MR_Integer) 0);
    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__R1_6 = (MR_Float) 0.0000000000000000;
    else
      {
        MR_Float mdbcomp__slice_and_dice__R_8;
        MR_Float mdbcomp__slice_and_dice__Var_9;
        MR_Float mdbcomp__slice_and_dice__Var_10;

        {
          mdbcomp__slice_and_dice__Var_9 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__FailCount_5);
        }
        {
          mdbcomp__slice_and_dice__Var_10 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__Denominator_7);
        }
        {
          mdbcomp__slice_and_dice__R_8 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__Var_9, mdbcomp__slice_and_dice__Var_10);
        }
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__R_8 >= ((MR_Float) 0.20000000000000001));
        if (mdbcomp__slice_and_dice__succeeded)
          mdbcomp__slice_and_dice__R1_6 = mdbcomp__slice_and_dice__R_8;
        else
          mdbcomp__slice_and_dice__R1_6 = (MR_Float) 0.0000000000000000;
      }
    return mdbcomp__slice_and_dice__R1_6;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv2_Result_8;

    {
      mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), &mdbcomp__slice_and_dice__conv2_Result_8);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_Result_8));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11;

    {
      mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11));
  }
}

void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(
  MR_String mdbcomp__slice_and_dice__PassFile_13,
  MR_String mdbcomp__slice_and_dice__FailFile_14,
  MR_String mdbcomp__slice_and_dice__SortStr_15,
  MR_Integer mdbcomp__slice_and_dice__MaxRow_16,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_17,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_18,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_19,
  MR_String mdbcomp__slice_and_dice__Module_20,
  MR_String * mdbcomp__slice_and_dice__DiceStr_21,
  MR_String * mdbcomp__slice_and_dice__Problem_22)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_23_66;
    MR_Word mdbcomp__slice_and_dice__Chrs_46;
    MR_Word mdbcomp__slice_and_dice__ChrSet_47;
    MR_Word mdbcomp__slice_and_dice__Var_48;

    {
      mdbcomp__slice_and_dice__Chrs_46 = mercury__string__to_char_list_1_f_0(mdbcomp__slice_and_dice__SortStr_15);
    }
    mdbcomp__slice_and_dice__TypeCtorInfo_23_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    {
      mdbcomp__slice_and_dice__ChrSet_47 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_23_66, mdbcomp__slice_and_dice__Chrs_46);
    }
    {
      mdbcomp__slice_and_dice__Var_48 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_23_66, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[14]));
    }
    {
      mdbcomp__slice_and_dice__succeeded = mercury__set__subset_2_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_23_66, mdbcomp__slice_and_dice__ChrSet_47, mdbcomp__slice_and_dice__Var_48);
    }
    if (mdbcomp__slice_and_dice__succeeded)
      {
        MR_Word mdbcomp__slice_and_dice__ReadDiceResult_24;

        {
          mdbcomp__slice_and_dice__read_dice_5_p_0(mdbcomp__slice_and_dice__PassFile_13, mdbcomp__slice_and_dice__FailFile_14, &mdbcomp__slice_and_dice__ReadDiceResult_24);
        }
        if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadDiceResult_24)) == (MR_mktag((MR_Integer) 1))))
          {
            *mdbcomp__slice_and_dice__Problem_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadDiceResult_24, (MR_Integer) 0)));
            *mdbcomp__slice_and_dice__DiceStr_21 = (MR_String) "";
          }
        else
          {
            MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_44_44;
            MR_Word mdbcomp__slice_and_dice__Dice_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadDiceResult_24, (MR_Integer) 0)));
            MR_Integer mdbcomp__slice_and_dice__TotalPassTests_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_25, (MR_Integer) 0)));
            MR_Word mdbcomp__slice_and_dice__DiceProcMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_25, (MR_Integer) 2)));
            MR_Word mdbcomp__slice_and_dice__LabelCounts_29;
            MR_Word mdbcomp__slice_and_dice__FilteredLabelCounts_30;
            MR_Word mdbcomp__slice_and_dice__SortedLabelCounts_31;
            MR_Word mdbcomp__slice_and_dice__TopNLabelCounts_33;
            MR_Word mdbcomp__slice_and_dice__Var_38;
            MR_Integer mdbcomp__slice_and_dice__TotalFailTests_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_25, (MR_Integer) 1)));
            MR_Box mdbcomp__slice_and_dice__conv1_LabelCounts_29;
            MR_Word mdbcomp__slice_and_dice__Taken_32;

            {
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_2[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[11], mdbcomp__slice_and_dice__DiceProcMap_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdbcomp__slice_and_dice__conv1_LabelCounts_29);
            }
            mdbcomp__slice_and_dice__LabelCounts_29 = ((MR_Word) mdbcomp__slice_and_dice__conv1_LabelCounts_29);
            mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__Module_20, (MR_String) "") == 0);
            if (mdbcomp__slice_and_dice__succeeded)
              mdbcomp__slice_and_dice__FilteredLabelCounts_30 = mdbcomp__slice_and_dice__LabelCounts_29;
            else
              {
                MR_Word mdbcomp__slice_and_dice__Var_37;

                {
                  mdbcomp__slice_and_dice__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_37, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2));
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_37, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Module_20));
                }
                {
                  mercury__list__filter_3_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0, mdbcomp__slice_and_dice__Var_37, mdbcomp__slice_and_dice__LabelCounts_29, &mdbcomp__slice_and_dice__FilteredLabelCounts_30);
                }
              }
            {
              mdbcomp__slice_and_dice__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_38, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[4]));
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_38, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3));
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_38, 3) = ((MR_Box) (mdbcomp__slice_and_dice__SortStr_15));
            }
            mdbcomp__slice_and_dice__TypeCtorInfo_44_44 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;
            {
              mercury__list__sort_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_44_44, mdbcomp__slice_and_dice__Var_38, mdbcomp__slice_and_dice__FilteredLabelCounts_30, &mdbcomp__slice_and_dice__SortedLabelCounts_31);
            }
            {
              mdbcomp__slice_and_dice__succeeded = mercury__list__take_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_44_44, mdbcomp__slice_and_dice__MaxRow_16, mdbcomp__slice_and_dice__SortedLabelCounts_31, &mdbcomp__slice_and_dice__Taken_32);
            }
            if (mdbcomp__slice_and_dice__succeeded)
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__Taken_32;
            else
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__SortedLabelCounts_31;
            *mdbcomp__slice_and_dice__Problem_22 = (MR_String) "";
            {
              *mdbcomp__slice_and_dice__DiceStr_21 = mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(mdbcomp__slice_and_dice__TopNLabelCounts_33, mdbcomp__slice_and_dice__TotalPassTests_26, mdbcomp__slice_and_dice__MaybeMaxPredColumns_17, mdbcomp__slice_and_dice__MaybeMaxPathColumns_18, mdbcomp__slice_and_dice__MaybeMaxFileColumns_19);
            }
          }
      }
    else
      {
        *mdbcomp__slice_and_dice__Problem_22 = (MR_String) "Invalid sort string";
        *mdbcomp__slice_and_dice__DiceStr_21 = (MR_String) "";
      }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv2_STATE_VARIABLE_DiceProcMap_16;

    {
      mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv2_STATE_VARIABLE_DiceProcMap_16);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_STATE_VARIABLE_DiceProcMap_16));
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_DiceProcMap_16;

    {
      mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_DiceProcMap_16);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_DiceProcMap_16));
  }
}

void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0(
  MR_String mdbcomp__slice_and_dice__PassFile_6,
  MR_String mdbcomp__slice_and_dice__FailFile_7,
  MR_Word * mdbcomp__slice_and_dice__Result_8)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__ReadPassResult_10;

    {
      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__slice_and_dice__PassFile_6, &mdbcomp__slice_and_dice__ReadPassResult_10);
    }
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadPassResult_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdbcomp__slice_and_dice__Problem_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadPassResult_10, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdbcomp__slice_and_dice__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Problem_29));
        }
      }
    else
      {
        MR_Word mdbcomp__slice_and_dice__PassFileType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadPassResult_10, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__PassTraceCounts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadPassResult_10, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__ReadFailResult_13;

        {
          mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__slice_and_dice__FailFile_7, &mdbcomp__slice_and_dice__ReadFailResult_13);
        }
        if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadFailResult_13)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String mdbcomp__slice_and_dice__Problem_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadFailResult_13, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mdbcomp__slice_and_dice__Result_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Problem_21));
            }
          }
        else
          {
            MR_Word mdbcomp__slice_and_dice__FailFileType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadFailResult_13, (MR_Integer) 0)));
            MR_Word mdbcomp__slice_and_dice__FailTraceCounts_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadFailResult_13, (MR_Integer) 1)));
            MR_Word mdbcomp__slice_and_dice__PassDiceProcMap_16;
            MR_Word mdbcomp__slice_and_dice__DiceProcMap_17;
            MR_Integer mdbcomp__slice_and_dice__TotalPassTests_18;
            MR_Integer mdbcomp__slice_and_dice__TotalFailTests_19;
            MR_Word mdbcomp__slice_and_dice__Dice_20;
            MR_Word mdbcomp__slice_and_dice__Var_27;
            MR_Box mdbcomp__slice_and_dice__conv1_PassDiceProcMap_16;
            MR_Box mdbcomp__slice_and_dice__conv3_DiceProcMap_17;

            {
              mdbcomp__slice_and_dice__Var_27 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1]);
            }
            {
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[1], mdbcomp__slice_and_dice__PassTraceCounts_12, ((MR_Box) (mdbcomp__slice_and_dice__Var_27)), &mdbcomp__slice_and_dice__conv1_PassDiceProcMap_16);
            }
            mdbcomp__slice_and_dice__PassDiceProcMap_16 = ((MR_Word) mdbcomp__slice_and_dice__conv1_PassDiceProcMap_16);
            {
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[2], mdbcomp__slice_and_dice__FailTraceCounts_15, ((MR_Box) (mdbcomp__slice_and_dice__PassDiceProcMap_16)), &mdbcomp__slice_and_dice__conv3_DiceProcMap_17);
            }
            mdbcomp__slice_and_dice__DiceProcMap_17 = ((MR_Word) mdbcomp__slice_and_dice__conv3_DiceProcMap_17);
            {
              mdbcomp__slice_and_dice__TotalPassTests_18 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(mdbcomp__slice_and_dice__PassFileType_11);
            }
            {
              mdbcomp__slice_and_dice__TotalFailTests_19 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(mdbcomp__slice_and_dice__FailFileType_14);
            }
            {
              mdbcomp__slice_and_dice__Dice_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_20, 0) = ((MR_Box) (mdbcomp__slice_and_dice__TotalPassTests_18));
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_20, 1) = ((MR_Box) (mdbcomp__slice_and_dice__TotalFailTests_19));
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_20, 2) = ((MR_Box) (mdbcomp__slice_and_dice__DiceProcMap_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mdbcomp__slice_and_dice__Result_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Dice_20));
            }
          }
      }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv2_Result_8;

    {
      mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), &mdbcomp__slice_and_dice__conv2_Result_8);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_Result_8));
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

    {
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
    return mdbcomp__slice_and_dice__succeeded;
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11;

    {
      mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11));
  }
}

void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0(
  MR_String mdbcomp__slice_and_dice__File_12,
  MR_String mdbcomp__slice_and_dice__SortStr0_13,
  MR_Integer mdbcomp__slice_and_dice__MaxRows_14,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_15,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_16,
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_17,
  MR_String mdbcomp__slice_and_dice__Module_18,
  MR_String * mdbcomp__slice_and_dice__SliceStr_19,
  MR_String * mdbcomp__slice_and_dice__Problem_20)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_18_65;
    MR_Word mdbcomp__slice_and_dice__Chrs0_50;
    MR_Word mdbcomp__slice_and_dice__Chrs_52;
    MR_Word mdbcomp__slice_and_dice__ChrSet_53;
    MR_Word mdbcomp__slice_and_dice__Var_55;
    MR_Word mdbcomp__slice_and_dice__ChrsPrime_51;
    MR_Char mdbcomp__slice_and_dice__Var_54;

    {
      mdbcomp__slice_and_dice__Chrs0_50 = mercury__string__to_char_list_1_f_0(mdbcomp__slice_and_dice__SortStr0_13);
    }
    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__Chrs0_50)) == (MR_mktag((MR_Integer) 1)));
    if (mdbcomp__slice_and_dice__succeeded)
      {
        mdbcomp__slice_and_dice__Var_54 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Chrs0_50, (MR_Integer) 0)));
        mdbcomp__slice_and_dice__ChrsPrime_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Chrs0_50, (MR_Integer) 1)));
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Var_54 == (MR_Char) 122);
      }
    if (mdbcomp__slice_and_dice__succeeded)
      mdbcomp__slice_and_dice__Chrs_52 = mdbcomp__slice_and_dice__ChrsPrime_51;
    else
      mdbcomp__slice_and_dice__Chrs_52 = mdbcomp__slice_and_dice__Chrs0_50;
    mdbcomp__slice_and_dice__TypeCtorInfo_18_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    {
      mdbcomp__slice_and_dice__ChrSet_53 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_18_65, mdbcomp__slice_and_dice__Chrs_52);
    }
    {
      mdbcomp__slice_and_dice__Var_55 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_18_65, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[6]));
    }
    {
      mdbcomp__slice_and_dice__succeeded = mercury__set__subset_2_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_18_65, mdbcomp__slice_and_dice__ChrSet_53, mdbcomp__slice_and_dice__Var_55);
    }
    if (mdbcomp__slice_and_dice__succeeded)
      {
        MR_Word mdbcomp__slice_and_dice__ReadSliceResult_22;

        {
          mdbcomp__slice_and_dice__read_slice_4_p_0(mdbcomp__slice_and_dice__File_12, &mdbcomp__slice_and_dice__ReadSliceResult_22);
        }
        if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadSliceResult_22)) == (MR_mktag((MR_Integer) 1))))
          {
            *mdbcomp__slice_and_dice__Problem_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadSliceResult_22, (MR_Integer) 0)));
            *mdbcomp__slice_and_dice__SliceStr_19 = (MR_String) "";
          }
        else
          {
            MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_48_48;
            MR_Word mdbcomp__slice_and_dice__Slice_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadSliceResult_22, (MR_Integer) 0)));
            MR_Integer mdbcomp__slice_and_dice__TotalTests_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_23, (MR_Integer) 0)));
            MR_Word mdbcomp__slice_and_dice__SliceProcMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_23, (MR_Integer) 1)));
            MR_Word mdbcomp__slice_and_dice__LabelCounts_26;
            MR_Word mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27;
            MR_String mdbcomp__slice_and_dice__SortStr_29;
            MR_Word mdbcomp__slice_and_dice__FilteredLabelCounts_30;
            MR_Word mdbcomp__slice_and_dice__SortedLabelCounts_31;
            MR_Word mdbcomp__slice_and_dice__TopNLabelCounts_33;
            MR_Word mdbcomp__slice_and_dice__Var_40;
            MR_Box mdbcomp__slice_and_dice__conv1_LabelCounts_26;
            MR_String mdbcomp__slice_and_dice__SortStrPrime_28;
            MR_Word mdbcomp__slice_and_dice__Taken_32;

            {
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_2[0], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[9], mdbcomp__slice_and_dice__SliceProcMap_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdbcomp__slice_and_dice__conv1_LabelCounts_26);
            }
            mdbcomp__slice_and_dice__LabelCounts_26 = ((MR_Word) mdbcomp__slice_and_dice__conv1_LabelCounts_26);
            mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__Module_18, (MR_String) "") == 0);
            if (mdbcomp__slice_and_dice__succeeded)
              mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27 = mdbcomp__slice_and_dice__LabelCounts_26;
            else
              {
                MR_Word mdbcomp__slice_and_dice__Var_37;

                {
                  mdbcomp__slice_and_dice__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_37, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2));
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_37, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Module_18));
                }
                {
                  mercury__list__filter_3_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0, mdbcomp__slice_and_dice__Var_37, mdbcomp__slice_and_dice__LabelCounts_26, &mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27);
                }
              }
            {
              mdbcomp__slice_and_dice__succeeded = mercury__string__append_3_p_1((MR_String) "z", &mdbcomp__slice_and_dice__SortStrPrime_28, mdbcomp__slice_and_dice__SortStr0_13);
            }
            if (mdbcomp__slice_and_dice__succeeded)
              {
                mdbcomp__slice_and_dice__SortStr_29 = mdbcomp__slice_and_dice__SortStrPrime_28;
                {
                  mercury__list__filter_3_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[10], mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27, &mdbcomp__slice_and_dice__FilteredLabelCounts_30);
                }
              }
            else
              {
                mdbcomp__slice_and_dice__SortStr_29 = mdbcomp__slice_and_dice__SortStr0_13;
                mdbcomp__slice_and_dice__FilteredLabelCounts_30 = mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27;
              }
            {
              mdbcomp__slice_and_dice__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_40, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[2]));
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_40, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4));
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Var_40, 3) = ((MR_Box) (mdbcomp__slice_and_dice__SortStr_29));
            }
            mdbcomp__slice_and_dice__TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;
            {
              mercury__list__sort_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_48_48, mdbcomp__slice_and_dice__Var_40, mdbcomp__slice_and_dice__FilteredLabelCounts_30, &mdbcomp__slice_and_dice__SortedLabelCounts_31);
            }
            {
              mdbcomp__slice_and_dice__succeeded = mercury__list__take_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_48_48, mdbcomp__slice_and_dice__MaxRows_14, mdbcomp__slice_and_dice__SortedLabelCounts_31, &mdbcomp__slice_and_dice__Taken_32);
            }
            if (mdbcomp__slice_and_dice__succeeded)
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__Taken_32;
            else
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__SortedLabelCounts_31;
            *mdbcomp__slice_and_dice__Problem_20 = (MR_String) "";
            {
              *mdbcomp__slice_and_dice__SliceStr_19 = mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(mdbcomp__slice_and_dice__TopNLabelCounts_33, mdbcomp__slice_and_dice__TotalTests_24, mdbcomp__slice_and_dice__MaybeMaxPredColumns_15, mdbcomp__slice_and_dice__MaybeMaxPathColumns_16, mdbcomp__slice_and_dice__MaybeMaxFileColumns_17);
            }
          }
      }
    else
      {
        *mdbcomp__slice_and_dice__Problem_20 = (MR_String) "Invalid sort string";
        *mdbcomp__slice_and_dice__SliceStr_19 = (MR_String) "";
      }
  }
}

static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0_1(
  MR_Box mdbcomp__slice_and_dice__closure_arg,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
{
  {
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_SliceProcMap_14;

    {
      mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_SliceProcMap_14);
    }
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_SliceProcMap_14));
  }
}

void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0(
  MR_String mdbcomp__slice_and_dice__File_5,
  MR_Word * mdbcomp__slice_and_dice__Result_6)
{
  {
    MR_bool mdbcomp__slice_and_dice__succeeded;
    MR_Word mdbcomp__slice_and_dice__ReadResult_8;

    {
      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__slice_and_dice__File_5, &mdbcomp__slice_and_dice__ReadResult_8);
    }
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadResult_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdbcomp__slice_and_dice__Problem_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadResult_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdbcomp__slice_and_dice__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Problem_14));
        }
      }
    else
      {
        MR_Word mdbcomp__slice_and_dice__FileType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadResult_8, (MR_Integer) 0)));
        MR_Word mdbcomp__slice_and_dice__TraceCounts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadResult_8, (MR_Integer) 1)));
        MR_Word mdbcomp__slice_and_dice__SliceProcMap_11;
        MR_Integer mdbcomp__slice_and_dice__NumTests_12;
        MR_Word mdbcomp__slice_and_dice__Slice_13;
        MR_Word mdbcomp__slice_and_dice__Var_18;
        MR_Box mdbcomp__slice_and_dice__conv1_SliceProcMap_11;

        {
          mdbcomp__slice_and_dice__Var_18 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0]);
        }
        {
          mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[8], mdbcomp__slice_and_dice__TraceCounts_10, ((MR_Box) (mdbcomp__slice_and_dice__Var_18)), &mdbcomp__slice_and_dice__conv1_SliceProcMap_11);
        }
        mdbcomp__slice_and_dice__SliceProcMap_11 = ((MR_Word) mdbcomp__slice_and_dice__conv1_SliceProcMap_11);
        {
          mdbcomp__slice_and_dice__NumTests_12 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(mdbcomp__slice_and_dice__FileType_9);
        }
        {
          mdbcomp__slice_and_dice__Slice_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_13, 0) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_12));
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_13, 1) = ((MR_Box) (mdbcomp__slice_and_dice__SliceProcMap_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mdbcomp__slice_and_dice__Result_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Slice_13));
        }
      }
  }
}

void mercury__mdbcomp__slice_and_dice__init(void)
{
}

void mercury__mdbcomp__slice_and_dice__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0);
}

void mercury__mdbcomp__slice_and_dice__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__slice_and_dice__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdbcomp.slice_and_dice. */
