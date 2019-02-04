/*
** Automatically generated from `mmakefiles.m'
** by the Mercury compiler,
** version rotd-2017-06-13
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


/* :- module libs.mmakefiles. */
/* :- implementation. */

/*
INIT mercury__libs__mmakefiles__init
ENDINIT
*/

#include "libs.mmakefiles.mih"


#include "libs.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 libs__mmakefiles__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_0;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_1;

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_value_ordered_is_mmake_rule_phony_0[2];

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_is_mmake_rule_phony_0[2];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_is_mmake_rule_phony_0[2];

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_comment_out_0_0;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_comment_out_0_1;

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_value_ordered_maybe_comment_out_0[2];

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_comment_out_0[2];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_comment_out_0[2];

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_0;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_1;

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_value_ordered_maybe_write_mmake_comments_0[2];

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_write_mmake_comments_0[2];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_write_mmake_comments_0[2];

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_0[1];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_1[2];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_1;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_2[2];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_2;

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_0[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_1[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_2[1];

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_condition_0[3];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_condition_0[3];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_condition_0[3];

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_0[1];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_0[1];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_1[2];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_1[2];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_1;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_2[2];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_2[2];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_2;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_3[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_3[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_3;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_4[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_4[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_5[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_6[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_6[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6;

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_0[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_1[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_2[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_3[4];

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_entry_0[4];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_entry_0[7];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_entry_0[7];

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_file_name_group_0_0[2];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_file_name_group_0_0[2];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_file_name_group_0_0;

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_file_name_group_0_0[1];

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_file_name_group_0[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_file_name_group_0[1];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_file_name_group_0[1];

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_0[1];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_1[3];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_1[3];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_1;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_fragment_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_2[3];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_2[3];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_2;

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_0[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_1[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_2[1];

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_fragment_0[3];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_fragment_0[3];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_fragment_0[3];

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_0;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_1;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_2;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_3;

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_value_ordered_mmake_mode_0[4];

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_mmake_mode_0[4];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_mode_0[4];

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__cord__ti_cord_1libs__mmakefiles__type_ctor_info_mmake_fragment_0;

static MR_bool MR_CALL 
libs__mmakefiles____Unify____is_mmake_rule_phony_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____is_mmake_rule_phony_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_comment_out_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____maybe_comment_out_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_action_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_action_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_condition_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_condition_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_entry_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_entry_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_group_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_group_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_fragment_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_fragment_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_grade_component_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_grade_component_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_mode_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_mode_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmakefile_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmakefile_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3);

static MR_Word MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_110_101_95_111_114_95_109_111_114_101_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(
  MR_Word libs__mmakefiles__HeadVar__1_1);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box libs__mmakefiles__closure_arg,
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box * libs__mmakefiles__wrapper_arg_3);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0(
  MR_Word libs__mmakefiles__OutStream_7,
  MR_Word libs__mmakefiles__MaybeCommentOut_8,
  MR_Word libs__mmakefiles__MmakeEntry_10);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_105_101_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__4_4);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_51_93_95_48_6_p_0(
  MR_Word libs__mmakefiles__OutStream_7,
  MR_Word libs__mmakefiles__MaybeCommentOut_8,
  MR_Word libs__mmakefiles__MmakeFragment_10);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__4_4);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_mode_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_mode_0_0(
  MR_Word libs__mmakefiles__HeadVar__2_1,
  MR_Word libs__mmakefiles__HeadVar__2_2);

static void MR_CALL 
libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0(
  MR_Word libs__mmakefiles__HeadVar__2_1,
  MR_Word libs__mmakefiles__HeadVar__2_2);

static void MR_CALL 
libs__mmakefiles____Compare____maybe_comment_out_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_comment_out_0_0(
  MR_Word libs__mmakefiles__HeadVar__2_1,
  MR_Word libs__mmakefiles__HeadVar__2_2);

static MR_Box MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0_1(
  MR_Box libs__mmakefiles__closure_arg,
  MR_Box libs__mmakefiles__wrapper_arg_1);

static MR_Word MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0(
  MR_Word libs__mmakefiles__FileNameGroups_3);

static MR_Word MR_CALL 
libs__mmakefiles__file_name_group_files_1_f_0(
  MR_Word libs__mmakefiles__FileNameGroup_3);

static void MR_CALL 
libs__mmakefiles__write_mmake_actions_4_p_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__FileName_6);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__FileName_7,
  MR_Word libs__mmakefiles__FileNames_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__FileName_7,
  MR_Word libs__mmakefiles__FileNames_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_Word libs__mmakefiles__FileNameGroup_7,
  MR_Word libs__mmakefiles__FileNameGroups_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_horizontal_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_Word libs__mmakefiles__FileNameGroup_7,
  MR_Word libs__mmakefiles__FileNameGroups_8);

static void MR_CALL 
libs__mmakefiles__write_rule_name_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__RuleName_6);

static void MR_CALL 
libs__mmakefiles__maybe_write_phony_rule_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_Word libs__mmakefiles__IsPhony_7,
  MR_Word libs__mmakefiles__FileNames_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_var_values_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__HeadValue_7,
  MR_Word libs__mmakefiles__TailValues_8);

static MR_Integer MR_CALL 
libs__mmakefiles__max_horizontal_0_f_0(void);

static void MR_CALL 
libs__mmakefiles__write_group_name_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__GroupName0_6);

static MR_String MR_CALL 
libs__mmakefiles__project_group_name_1_f_0(
  MR_Word libs__mmakefiles__HeadVar__1_1);

static void MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0_2(
  MR_Box libs__mmakefiles__closure_arg,
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box * libs__mmakefiles__wrapper_arg_3);

static MR_Box MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0_1(
  MR_Box libs__mmakefiles__closure_arg,
  MR_Box libs__mmakefiles__wrapper_arg_1);

static void MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__TargetOrSource_7,
  MR_Word libs__mmakefiles__Groups_8);

static void MR_CALL 
libs__mmakefiles__write_block_comment_line_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__Comment_6);

static void MR_CALL 
libs__mmakefiles__write_mmake_condition_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_Word libs__mmakefiles__Cond_6);


static /* final */ const MR_Box libs__mmakefiles_scalar_common_1[6][2];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_2[2][5];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_3[2][3];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_4[1][7];




static /* final */ const MR_Box libs__mmakefiles_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0)),
    ((MR_Box) (&libs__mmakefiles__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_2[0])),
    ((MR_Box) (libs__mmakefiles__maybe_write_group_names_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_2[1])),
    ((MR_Box) (libs__mmakefiles__file_name_groups_files_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 libs__mmakefiles__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_0 = {
  (MR_String) "mmake_rule_is_not_phony",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_1 = {
  (MR_String) "mmake_rule_is_phony",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_value_ordered_is_mmake_rule_phony_0[2] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_0,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_1
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_is_mmake_rule_phony_0[2] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_0,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_1
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_is_mmake_rule_phony_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__mmakefiles____Unify____is_mmake_rule_phony_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____is_mmake_rule_phony_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "is_mmake_rule_phony",
  {     libs__mmakefiles__libs__mmakefiles__enum_name_ordered_is_mmake_rule_phony_0 },
  {     libs__mmakefiles__libs__mmakefiles__enum_value_ordered_is_mmake_rule_phony_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__mmakefiles__libs__mmakefiles__functor_number_map_is_mmake_rule_phony_0
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_comment_out_0_0 = {
  (MR_String) "comment_out",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_comment_out_0_1 = {
  (MR_String) "make_active",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_value_ordered_maybe_comment_out_0[2] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_comment_out_0_0,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_comment_out_0_1
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_comment_out_0[2] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_comment_out_0_0,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_comment_out_0_1
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_comment_out_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_maybe_comment_out_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__mmakefiles____Unify____maybe_comment_out_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____maybe_comment_out_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "maybe_comment_out",
  {     libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_comment_out_0 },
  {     libs__mmakefiles__libs__mmakefiles__enum_value_ordered_maybe_comment_out_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_comment_out_0
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_0 = {
  (MR_String) "do_not_write_mmake_comments",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_1 = {
  (MR_String) "write_mmake_comments",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_value_ordered_maybe_write_mmake_comments_0[2] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_0,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_1
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_write_mmake_comments_0[2] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_0,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_1
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_write_mmake_comments_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_maybe_write_mmake_comments_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "maybe_write_mmake_comments",
  {     libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_write_mmake_comments_0 },
  {     libs__mmakefiles__libs__mmakefiles__enum_value_ordered_maybe_write_mmake_comments_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_write_mmake_comments_0
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_action_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_action_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_action",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_0 = {
  (MR_String) "mmake_cond_grade_has_component",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_1 = {
  (MR_String) "mmake_cond_strings_equal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_2 = {
  (MR_String) "mmake_cond_strings_not_equal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_0[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_0
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_1[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_1
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_2[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_2
};

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_condition_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_2
  }
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_condition_0[3] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_0,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_1,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_2
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_condition_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_condition_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_condition_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_condition_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_condition",
  {     libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_condition_0 },
  {     libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_condition_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_condition_0
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_0[1] = {
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_0[1] = {
  (MR_String) "mbc_comments"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_0 = {
  (MR_String) "mmake_block_comment",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_0,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_1[2] = {
  (MR_String) "mvd_var_name",
  (MR_String) "mvd_var_value"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_1 = {
  (MR_String) "mmake_var_defn",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_1,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_2[2] = {
  (MR_String) "mvdl_var_name",
  (MR_String) "mvdl_var_value"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_2 = {
  (MR_String) "mmake_var_defn_list",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_2,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_2,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_3[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_3[5] = {
  (MR_String) "msr_rule_name",
  (MR_String) "msr_flags",
  (MR_String) "msr_targets",
  (MR_String) "msr_sources",
  (MR_String) "msr_actions"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_3 = {
  (MR_String) "mmake_simple_rule",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_3,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_3,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_4[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_4[5] = {
  (MR_String) "mfr_rule_name",
  (MR_String) "mfr_flags",
  (MR_String) "mfr_targets",
  (MR_String) "mfr_sources",
  (MR_String) "mfr_actions"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4 = {
  (MR_String) "mmake_flat_rule",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_4,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_4,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_5[5] = {
  (MR_String) "mdr_rule_name",
  (MR_String) "mdr_flags",
  (MR_String) "mdr_targets",
  (MR_String) "mdr_sources",
  (MR_String) "mdr_actions"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5 = {
  (MR_String) "mmake_deep_rule",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_5,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_6[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_6[5] = {
  (MR_String) "mgr_rule_name",
  (MR_String) "mgr_flags",
  (MR_String) "mgr_targets",
  (MR_String) "mgr_sources",
  (MR_String) "mgr_actions"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6 = {
  (MR_String) "mmake_general_rule",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_6,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_6,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_0[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_0
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_1[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_1
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_2[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_2
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_3[4] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_3,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6
};

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_entry_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_3
  }
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_entry_0[7] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_0,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_3,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_1,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_2
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_entry_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_entry_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_entry_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_entry",
  {     libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_entry_0 },
  {     libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_entry_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_entry_0
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_file_name_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_file_name_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_file_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_file_name_group_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_file_name_group_0_0[2] = {
  (MR_String) "fng_group_name",
  (MR_String) "fng_file_names"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_file_name_group_0_0 = {
  (MR_String) "mmake_file_name_group",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_file_name_group_0_0,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_file_name_group_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_file_name_group_0_0[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_file_name_group_0_0
};

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_file_name_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_file_name_group_0_0
  }
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_file_name_group_0[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_file_name_group_0_0
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_file_name_group_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_file_name_group_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_file_name_group_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_file_name_group",
  {     libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_file_name_group_0 },
  {     libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_file_name_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_file_name_group_0
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_0[1] = {
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_0 = {
  (MR_String) "mmf_entry",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_condition_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_1[3] = {
  (MR_String) "mmfce_test",
  (MR_String) "mmfce_if_true",
  (MR_String) "mmfce_if_false"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_1 = {
  (MR_String) "mmf_conditional_entry",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_1,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_fragment_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_2[3] = {
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_condition_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_fragment_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_fragment_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_2[3] = {
  (MR_String) "mmfcfs_test",
  (MR_String) "mmfcfs_if_true",
  (MR_String) "mmfcfs_if_false"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_2 = {
  (MR_String) "mmf_conditional_fragments",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_2,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_2,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_0[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_0
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_1[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_1
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_2[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_2
};

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_fragment_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_2
  }
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_fragment_0[3] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_1,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_2,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_0
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_fragment_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_fragment_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_fragment_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_fragment",
  {     libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_fragment_0 },
  {     libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_fragment_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_fragment_0
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_grade_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_grade_component_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_grade_component_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_grade_component",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_0 = {
  (MR_String) "mmake_mode_old_only",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_1 = {
  (MR_String) "mmake_mode_old",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_2 = {
  (MR_String) "mmake_mode_new_interleave",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_3 = {
  (MR_String) "mmake_mode_new_at_end",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_value_ordered_mmake_mode_0[4] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_0,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_1,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_2,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_3
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_mmake_mode_0[4] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_3,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_2,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_1,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_mmake_mode_0_0
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_mode_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_mode_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_mode_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_mode",
  {     libs__mmakefiles__libs__mmakefiles__enum_name_ordered_mmake_mode_0 },
  {     libs__mmakefiles__libs__mmakefiles__enum_value_ordered_mmake_mode_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_mode_0
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__cord__ti_cord_1libs__mmakefiles__type_ctor_info_mmake_fragment_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0
  }
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmakefile_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmakefile_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmakefile_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmakefile",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__mmakefiles__cord__ti_cord_1libs__mmakefiles__type_ctor_info_mmake_fragment_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
libs__mmakefiles____Unify____is_mmake_rule_phony_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____is_mmake_rule_phony_0_0(((MR_Word) libs__mmakefiles__wrapper_arg_1), ((MR_Word) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____is_mmake_rule_phony_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____is_mmake_rule_phony_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_Word) libs__mmakefiles__wrapper_arg_2), ((MR_Word) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_comment_out_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____maybe_comment_out_0_0(((MR_Word) libs__mmakefiles__wrapper_arg_1), ((MR_Word) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____maybe_comment_out_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____maybe_comment_out_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_Word) libs__mmakefiles__wrapper_arg_2), ((MR_Word) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0(((MR_Word) libs__mmakefiles__wrapper_arg_1), ((MR_Word) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_Word) libs__mmakefiles__wrapper_arg_2), ((MR_Word) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_action_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_action_0_0(((MR_String) libs__mmakefiles__wrapper_arg_1), ((MR_String) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_action_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____mmake_action_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_String) libs__mmakefiles__wrapper_arg_2), ((MR_String) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_condition_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_condition_0_0(((MR_Word) libs__mmakefiles__wrapper_arg_1), ((MR_Word) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_condition_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____mmake_condition_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_Word) libs__mmakefiles__wrapper_arg_2), ((MR_Word) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_entry_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(((MR_Word) libs__mmakefiles__wrapper_arg_1), ((MR_Word) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_entry_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____mmake_entry_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_Word) libs__mmakefiles__wrapper_arg_2), ((MR_Word) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_file_name_0_0(((MR_String) libs__mmakefiles__wrapper_arg_1), ((MR_String) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____mmake_file_name_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_String) libs__mmakefiles__wrapper_arg_2), ((MR_String) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_group_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_file_name_group_0_0(((MR_Word) libs__mmakefiles__wrapper_arg_1), ((MR_Word) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_group_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____mmake_file_name_group_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_Word) libs__mmakefiles__wrapper_arg_2), ((MR_Word) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_fragment_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_fragment_0_0(((MR_Word) libs__mmakefiles__wrapper_arg_1), ((MR_Word) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_fragment_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____mmake_fragment_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_Word) libs__mmakefiles__wrapper_arg_2), ((MR_Word) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_grade_component_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_grade_component_0_0(((MR_String) libs__mmakefiles__wrapper_arg_1), ((MR_String) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_grade_component_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____mmake_grade_component_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_String) libs__mmakefiles__wrapper_arg_2), ((MR_String) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_mode_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_mode_0_0(((MR_Word) libs__mmakefiles__wrapper_arg_1), ((MR_Word) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_mode_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____mmake_mode_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_Word) libs__mmakefiles__wrapper_arg_2), ((MR_Word) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmakefile_0_0_10001(
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmakefile_0_0(((MR_Word) libs__mmakefiles__wrapper_arg_1), ((MR_Word) libs__mmakefiles__wrapper_arg_2));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmakefile_0_0_10001(
  MR_Box * libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Word libs__mmakefiles__conv0_HeadVar__1_1;

    {
      libs__mmakefiles____Compare____mmakefile_0_0(&libs__mmakefiles__conv0_HeadVar__1_1, ((MR_Word) libs__mmakefiles__wrapper_arg_2), ((MR_Word) libs__mmakefiles__wrapper_arg_3));
    }
    *libs__mmakefiles__wrapper_arg_1 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_110_101_95_111_114_95_109_111_114_101_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(
  MR_Word libs__mmakefiles__HeadVar__1_1)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Word libs__mmakefiles__HeadVar__2_2;
    MR_Box libs__mmakefiles__Head_3 = (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0));
    MR_Word libs__mmakefiles__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));

    {
      libs__mmakefiles__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, 0) = libs__mmakefiles__Head_3;
      MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, 1) = ((MR_Box) (libs__mmakefiles__Tail_4));
    }
    return libs__mmakefiles__HeadVar__2_2;
  }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box libs__mmakefiles__closure_arg,
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box * libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Box libs__mmakefiles__closure = libs__mmakefiles__closure_arg;

    {
      libs__mmakefiles__write_block_comment_line_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__closure, (MR_Integer) 3))), ((MR_String) libs__mmakefiles__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0(
  MR_Word libs__mmakefiles__OutStream_7,
  MR_Word libs__mmakefiles__MaybeCommentOut_8,
  MR_Word libs__mmakefiles__MmakeEntry_10)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    switch (libs__mmakefiles__MaybeCommentOut_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "ifeq (x,y)\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    switch (MR_tag((MR_Word) libs__mmakefiles__MmakeEntry_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word libs__mmakefiles__CommentLines_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 0)));
          MR_Word libs__mmakefiles__Var_137;
          MR_Box libs__mmakefiles__conv0_STATE_VARIABLE_IO_138_138;

          {
            libs__mmakefiles__Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_137, 0) = ((MR_Box) (&libs__mmakefiles_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_137, 1) = ((MR_Box) (libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0_1));
            MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_137, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_137, 3) = ((MR_Box) (libs__mmakefiles__OutStream_7));
          }
          {
            mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, libs__mmakefiles__Var_137, libs__mmakefiles__CommentLines_12, ((MR_Box) ((MR_Integer) 0)), &libs__mmakefiles__conv0_STATE_VARIABLE_IO_138_138);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String libs__mmakefiles__VarName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 0)));
          MR_String libs__mmakefiles__Value_14 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));

          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__VarName_13);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " = ");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Value_14);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word libs__mmakefiles__Values_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
          MR_String libs__mmakefiles__VarName_142 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 0)));

          if ((libs__mmakefiles__Values_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__VarName_142);
              }
              {
                mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " =\n");
              }
            }
          else
            {
              MR_String libs__mmakefiles__HeadValue_16 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__Values_15, (MR_Integer) 0)));
              MR_Word libs__mmakefiles__TailValues_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__Values_15, (MR_Integer) 1)));

              if ((libs__mmakefiles__TailValues_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__VarName_142);
                  }
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " = ");
                  }
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadValue_16);
                  }
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\n");
                  }
                }
              else
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__VarName_142);
                  }
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " = \\\n");
                  }
                  {
                    libs__mmakefiles__write_mmake_var_values_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadValue_16, libs__mmakefiles__TailValues_17);
                  }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String libs__mmakefiles__TargetFile_28;
              MR_Word libs__mmakefiles__Var_94;
              MR_String libs__mmakefiles__RuleName_220 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              MR_Word libs__mmakefiles__IsPhony_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              MR_Word libs__mmakefiles__SourceFiles_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              MR_Word libs__mmakefiles__Actions_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              MR_String libs__mmakefiles__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              MR_String libs__mmakefiles__Var_26;
              MR_Word libs__mmakefiles__Var_27;
              MR_Word libs__mmakefiles__Var_29;
              MR_Word libs__mmakefiles__Var_30;

              {
                libs__mmakefiles__write_rule_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__RuleName_220);
              }
              libs__mmakefiles__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__TargetFile_28 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              {
                libs__mmakefiles__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_94, 0) = ((MR_Box) (libs__mmakefiles__TargetFile_28));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                libs__mmakefiles__maybe_write_phony_rule_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__IsPhony_221, libs__mmakefiles__Var_94);
              }
              {
                libs__mmakefiles__write_mmake_file_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__TargetFile_28);
              }
              if ((libs__mmakefiles__SourceFiles_222 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " :");
                  }
                }
              else
                {
                  MR_String libs__mmakefiles__HeadSourceFile_197 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceFiles_222, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__TailSourceFiles_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceFiles_222, (MR_Integer) 1)));
                  MR_Integer libs__mmakefiles__Var_183;
                  MR_Integer libs__mmakefiles__Var_184;
                  MR_Integer libs__mmakefiles__Var_186;

                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " : ");
                  }
                  {
                    libs__mmakefiles__Var_186 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__mmakefiles__TailSourceFiles_198);
                  }
                  libs__mmakefiles__Var_183 = ((MR_Integer) 1 + libs__mmakefiles__Var_186);
                  {
                    libs__mmakefiles__Var_184 = libs__mmakefiles__max_horizontal_0_f_0();
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_183 > libs__mmakefiles__Var_184);
                  if (libs__mmakefiles__succeeded)
                    {
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\\\n");
                      }
                      {
                        libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceFile_197, libs__mmakefiles__TailSourceFiles_198);
                      }
                    }
                  else
                    {
                      libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceFile_197, libs__mmakefiles__TailSourceFiles_198);
                    }
                }
              {
                mercury__io__nl_3_p_0(libs__mmakefiles__OutStream_7);
              }
              {
                libs__mmakefiles__write_mmake_actions_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Actions_223);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String libs__mmakefiles__RuleName_20 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              MR_Word libs__mmakefiles__IsPhony_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              MR_Word libs__mmakefiles__SourceFiles_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              MR_Word libs__mmakefiles__Actions_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              MR_String libs__mmakefiles__HeadTargetFile_33;
              MR_Word libs__mmakefiles__TailTargetFiles_34;
              MR_Word libs__mmakefiles__Var_90;
              MR_Word libs__mmakefiles__Var_91;
              MR_Word libs__mmakefiles__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              MR_String libs__mmakefiles__Var_31;
              MR_Word libs__mmakefiles__Var_32;
              MR_Word libs__mmakefiles__Var_35;
              MR_Word libs__mmakefiles__Var_36;

              {
                libs__mmakefiles__write_rule_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__RuleName_20);
              }
              libs__mmakefiles__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              libs__mmakefiles__HeadTargetFile_33 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_90, (MR_Integer) 0)));
              libs__mmakefiles__TailTargetFiles_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_90, (MR_Integer) 1)));
              {
                libs__mmakefiles__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_91, 0) = ((MR_Box) (libs__mmakefiles__HeadTargetFile_33));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_91, 1) = ((MR_Box) (libs__mmakefiles__TailTargetFiles_34));
              }
              {
                libs__mmakefiles__maybe_write_phony_rule_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__IsPhony_21, libs__mmakefiles__Var_91);
              }
              {
                libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadTargetFile_33, libs__mmakefiles__TailTargetFiles_34);
              }
              if ((libs__mmakefiles__SourceFiles_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " :");
                  }
                }
              else
                {
                  MR_String libs__mmakefiles__HeadSourceFile_37 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceFiles_23, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__TailSourceFiles_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceFiles_23, (MR_Integer) 1)));
                  MR_Integer libs__mmakefiles__Var_100;
                  MR_Integer libs__mmakefiles__Var_101;
                  MR_Integer libs__mmakefiles__Var_103;

                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " : ");
                  }
                  {
                    libs__mmakefiles__Var_103 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__mmakefiles__TailSourceFiles_38);
                  }
                  libs__mmakefiles__Var_100 = ((MR_Integer) 1 + libs__mmakefiles__Var_103);
                  {
                    libs__mmakefiles__Var_101 = libs__mmakefiles__max_horizontal_0_f_0();
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_100 > libs__mmakefiles__Var_101);
                  if (libs__mmakefiles__succeeded)
                    {
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\\\n");
                      }
                      {
                        libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceFile_37, libs__mmakefiles__TailSourceFiles_38);
                      }
                    }
                  else
                    {
                      libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceFile_37, libs__mmakefiles__TailSourceFiles_38);
                    }
                }
              {
                mercury__io__nl_3_p_0(libs__mmakefiles__OutStream_7);
              }
              {
                libs__mmakefiles__write_mmake_actions_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Actions_24);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word libs__mmakefiles__SourceGroups_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              MR_Word libs__mmakefiles__Var_78;
              MR_String libs__mmakefiles__TargetFile_143;
              MR_String libs__mmakefiles__RuleName_145 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              MR_Word libs__mmakefiles__IsPhony_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              MR_Word libs__mmakefiles__Actions_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              MR_String libs__mmakefiles__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              MR_String libs__mmakefiles__Var_52;
              MR_Word libs__mmakefiles__Var_53;
              MR_Word libs__mmakefiles__Var_54;
              MR_Word libs__mmakefiles__Var_55;

              {
                libs__mmakefiles__write_rule_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__RuleName_145);
              }
              {
                libs__mmakefiles__maybe_write_group_names_5_p_0(libs__mmakefiles__OutStream_7, (MR_String) "source", libs__mmakefiles__SourceGroups_40);
              }
              libs__mmakefiles__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__TargetFile_143 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              {
                libs__mmakefiles__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_78, 0) = ((MR_Box) (libs__mmakefiles__TargetFile_143));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                libs__mmakefiles__maybe_write_phony_rule_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__IsPhony_146, libs__mmakefiles__Var_78);
              }
              {
                libs__mmakefiles__write_mmake_file_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__TargetFile_143);
              }
              if ((libs__mmakefiles__SourceGroups_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " :");
                  }
                }
              else
                {
                  MR_Word libs__mmakefiles__HeadSourceGroup_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceGroups_40, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__TailSourceGroups_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceGroups_40, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " : \\\n");
                  }
                  {
                    libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceGroup_63, libs__mmakefiles__TailSourceGroups_64);
                  }
                }
              {
                mercury__io__nl_3_p_0(libs__mmakefiles__OutStream_7);
              }
              {
                libs__mmakefiles__write_mmake_actions_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Actions_147);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word libs__mmakefiles__TargetGroups0_49;
              MR_Word libs__mmakefiles__TargetGroups_58;
              MR_Word libs__mmakefiles__HeadTargetGroup_61;
              MR_Word libs__mmakefiles__TailTargetGroups_62;
              MR_Word libs__mmakefiles__Var_71;
              MR_Word libs__mmakefiles__Var_75;
              MR_Word libs__mmakefiles__SourceGroups_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              MR_String libs__mmakefiles__RuleName_179 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              MR_Word libs__mmakefiles__IsPhony_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              MR_Word libs__mmakefiles__Actions_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              MR_Word libs__mmakefiles__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              MR_String libs__mmakefiles__Var_47;
              MR_Word libs__mmakefiles__Var_48;
              MR_Word libs__mmakefiles__Var_50;
              MR_Word libs__mmakefiles__Var_51;
              MR_String libs__mmakefiles__Var_56;
              MR_Word libs__mmakefiles__Var_57;
              MR_Word libs__mmakefiles__Var_59;
              MR_Word libs__mmakefiles__Var_60;

              {
                libs__mmakefiles__write_rule_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__RuleName_179);
              }
              libs__mmakefiles__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__TargetGroups0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              {
                libs__mmakefiles__Var_71 = libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_110_101_95_111_114_95_109_111_114_101_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(libs__mmakefiles__TargetGroups0_49);
              }
              {
                libs__mmakefiles__maybe_write_group_names_5_p_0(libs__mmakefiles__OutStream_7, (MR_String) "target", libs__mmakefiles__Var_71);
              }
              {
                libs__mmakefiles__maybe_write_group_names_5_p_0(libs__mmakefiles__OutStream_7, (MR_String) "source", libs__mmakefiles__SourceGroups_166);
              }
              libs__mmakefiles__Var_56 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__TargetGroups_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              {
                libs__mmakefiles__Var_75 = libs__mmakefiles__file_name_groups_files_1_f_0(libs__mmakefiles__TargetGroups_58);
              }
              {
                libs__mmakefiles__maybe_write_phony_rule_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__IsPhony_180, libs__mmakefiles__Var_75);
              }
              libs__mmakefiles__HeadTargetGroup_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__TargetGroups_58, (MR_Integer) 0)));
              libs__mmakefiles__TailTargetGroups_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__TargetGroups_58, (MR_Integer) 1)));
              {
                libs__mmakefiles__write_mmake_file_name_groups_horizontal_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadTargetGroup_61, libs__mmakefiles__TailTargetGroups_62);
              }
              if ((libs__mmakefiles__SourceGroups_166 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " :");
                  }
                }
              else
                {
                  MR_Word libs__mmakefiles__HeadSourceGroup_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceGroups_166, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__TailSourceGroups_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceGroups_166, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " : \\\n");
                  }
                  {
                    libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceGroup_157, libs__mmakefiles__TailSourceGroups_158);
                  }
                }
              {
                mercury__io__nl_3_p_0(libs__mmakefiles__OutStream_7);
              }
              {
                libs__mmakefiles__write_mmake_actions_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Actions_181);
              }
            }
            break;
        }
        break;
    }
    switch (libs__mmakefiles__MaybeCommentOut_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "endif\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    {
      mercury__io__nl_3_p_0(libs__mmakefiles__OutStream_7);
    }
  }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_105_101_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__mmakefiles__succeeded;

        if ((libs__mmakefiles__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word libs__mmakefiles__MmakeEntry_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__MmakeEntries_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__4_4, (MR_Integer) 1)));

            {
              libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__HeadVar__2_2, libs__mmakefiles__MmakeEntry_16);
            }
            /* direct tailcall eliminated */
            {
              MR_Word libs__mmakefiles__next_value_of_HeadVar__4_4 = libs__mmakefiles__MmakeEntries_17;

              libs__mmakefiles__HeadVar__4_4 = libs__mmakefiles__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_51_93_95_48_6_p_0(
  MR_Word libs__mmakefiles__OutStream_7,
  MR_Word libs__mmakefiles__MaybeCommentOut_8,
  MR_Word libs__mmakefiles__MmakeFragment_10)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    switch (MR_tag((MR_Word) libs__mmakefiles__MmakeFragment_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word libs__mmakefiles__Entry_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__MmakeFragment_10, (MR_Integer) 0)));

          {
            libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__MaybeCommentOut_8, libs__mmakefiles__Entry_12);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__mmakefiles__Cond_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__MmakeFragment_10, (MR_Integer) 0)));
          MR_Word libs__mmakefiles__ThenEntry_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__MmakeFragment_10, (MR_Integer) 1)));
          MR_Word libs__mmakefiles__ElseEntry_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__MmakeFragment_10, (MR_Integer) 2)));

          {
            libs__mmakefiles__write_mmake_condition_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Cond_13);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\n");
          }
          {
            libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__MaybeCommentOut_8, libs__mmakefiles__ThenEntry_14);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "else\n");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\n");
          }
          {
            libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__MaybeCommentOut_8, libs__mmakefiles__ElseEntry_15);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "endif # conditional fragment\n\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word libs__mmakefiles__ThenFragments_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__MmakeFragment_10, (MR_Integer) 1)));
          MR_Word libs__mmakefiles__ElseFragments_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__MmakeFragment_10, (MR_Integer) 2)));
          MR_Word libs__mmakefiles__Cond_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__MmakeFragment_10, (MR_Integer) 0)));

          {
            libs__mmakefiles__write_mmake_condition_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Cond_45);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\n");
          }
          {
            libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__MaybeCommentOut_8, libs__mmakefiles__ThenFragments_16);
          }
          if ((libs__mmakefiles__ElseFragments_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word libs__mmakefiles__MmakeFragment_55;
              MR_Word libs__mmakefiles__MmakeFragments_56;

              {
                mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "else\n");
              }
              {
                mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\n");
              }
              libs__mmakefiles__MmakeFragment_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__ElseFragments_17, (MR_Integer) 0)));
              libs__mmakefiles__MmakeFragments_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__ElseFragments_17, (MR_Integer) 1)));
              {
                libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__MaybeCommentOut_8, libs__mmakefiles__MmakeFragment_55);
              }
              {
                libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__MaybeCommentOut_8, libs__mmakefiles__MmakeFragments_56);
              }
            }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "endif # conditional fragment\n\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__mmakefiles__succeeded;

        if ((libs__mmakefiles__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word libs__mmakefiles__MmakeFragment_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__MmakeFragments_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__4_4, (MR_Integer) 1)));

            {
              libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__HeadVar__2_2, libs__mmakefiles__MmakeFragment_16);
            }
            /* direct tailcall eliminated */
            {
              MR_Word libs__mmakefiles__next_value_of_HeadVar__4_4 = libs__mmakefiles__MmakeFragments_17;

              libs__mmakefiles__HeadVar__4_4 = libs__mmakefiles__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_100_95_109_109_97_107_101_102_105_108_101_95_95_91_49_44_32_50_93_95_48_4_p_0(void)
{
  {
    MR_bool libs__mmakefiles__succeeded;

  }
}

void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_109_109_97_107_101_102_105_108_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word * libs__mmakefiles__STATE_VARIABLE_MmakeFile_9)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      *libs__mmakefiles__STATE_VARIABLE_MmakeFile_9 = mercury__cord__init_0_f_0((MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0);
    }
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmakefile_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Word libs__mmakefiles__Cast_HeadVar1_4 = libs__mmakefiles__HeadVar__2_2;
    MR_Word libs__mmakefiles__Cast_HeadVar2_5 = libs__mmakefiles__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[5], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Cast_HeadVar1_4)), ((MR_Box) (libs__mmakefiles__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmakefile_0_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Word libs__mmakefiles__Cast_HeadVar1_3 = libs__mmakefiles__HeadVar__1_1;
    MR_Word libs__mmakefiles__Cast_HeadVar2_4 = libs__mmakefiles__HeadVar__2_2;

    {
      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[5], ((MR_Box) (libs__mmakefiles__Cast_HeadVar1_3)), ((MR_Box) (libs__mmakefiles__Cast_HeadVar2_4)));
    }
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_mode_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__Cast_HeadVar1_4 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;
    MR_Integer libs__mmakefiles__Cast_HeadVar2_5 = (MR_Integer) libs__mmakefiles__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Cast_HeadVar1_4, libs__mmakefiles__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_mode_0_0(
  MR_Word libs__mmakefiles__HeadVar__2_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded = (libs__mmakefiles__HeadVar__2_1 == libs__mmakefiles__HeadVar__2_2);

    return libs__mmakefiles__succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_grade_component_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_String libs__mmakefiles__HeadVar__2_2,
  MR_String libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_String libs__mmakefiles__Cast_HeadVar1_4 = libs__mmakefiles__HeadVar__2_2;
    MR_String libs__mmakefiles__Cast_HeadVar2_5 = libs__mmakefiles__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Cast_HeadVar1_4, libs__mmakefiles__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_grade_component_0_0(
  MR_String libs__mmakefiles__HeadVar__1_1,
  MR_String libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_String libs__mmakefiles__Cast_HeadVar1_3 = libs__mmakefiles__HeadVar__1_1;
    MR_String libs__mmakefiles__Cast_HeadVar2_4 = libs__mmakefiles__HeadVar__2_2;

    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Cast_HeadVar1_3, libs__mmakefiles__Cast_HeadVar2_4) == 0);
    return libs__mmakefiles__succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_fragment_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__CastX_50 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;
    MR_Integer libs__mmakefiles__CastY_51 = (MR_Integer) libs__mmakefiles__HeadVar__3_3;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_50 == libs__mmakefiles__CastY_51);
    if (libs__mmakefiles__succeeded)
      *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word libs__mmakefiles__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word libs__mmakefiles__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    libs__mmakefiles____Compare____mmake_entry_0_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_65, libs__mmakefiles__Var_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__mmakefiles__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word libs__mmakefiles__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word libs__mmakefiles__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word libs__mmakefiles__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word libs__mmakefiles__Var_24;

                  {
                    libs__mmakefiles____Compare____mmake_condition_0_0(&libs__mmakefiles__Var_24, libs__mmakefiles__Var_61, libs__mmakefiles__Var_21);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_24 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_24;
                  else
                    {
                      MR_Word libs__mmakefiles__Var_25;

                      {
                        libs__mmakefiles____Compare____mmake_entry_0_0(&libs__mmakefiles__Var_25, libs__mmakefiles__Var_60, libs__mmakefiles__Var_22);
                      }
                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_25 == (MR_Integer) 0);
                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                      if (libs__mmakefiles__succeeded)
                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_25;
                      else
                        {
                          libs__mmakefiles____Compare____mmake_entry_0_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_59, libs__mmakefiles__Var_23);
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word libs__mmakefiles__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word libs__mmakefiles__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word libs__mmakefiles__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word libs__mmakefiles__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word libs__mmakefiles__Var_48;

                  {
                    libs__mmakefiles____Compare____mmake_condition_0_0(&libs__mmakefiles__Var_48, libs__mmakefiles__Var_64, libs__mmakefiles__Var_45);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_48 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_48;
                  else
                    {
                      MR_Word libs__mmakefiles__Var_49;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[4], &libs__mmakefiles__Var_49, ((MR_Box) (libs__mmakefiles__Var_63)), ((MR_Box) (libs__mmakefiles__Var_46)));
                      }
                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_49 == (MR_Integer) 0);
                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                      if (libs__mmakefiles__succeeded)
                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_49;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[4], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_62)), ((MR_Box) (libs__mmakefiles__Var_47)));
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
libs__mmakefiles____Unify____mmake_fragment_0_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__CastX_17 = (MR_Integer) libs__mmakefiles__HeadVar__1_1;
    MR_Integer libs__mmakefiles__CastY_18 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_17 == libs__mmakefiles__CastY_18);
    if (libs__mmakefiles__succeeded)
      libs__mmakefiles__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word libs__mmakefiles__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__Var_4;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                {
                  libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(libs__mmakefiles__Var_3, libs__mmakefiles__Var_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__mmakefiles__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word libs__mmakefiles__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word libs__mmakefiles__Var_8;
            MR_Word libs__mmakefiles__Var_9;
            MR_Word libs__mmakefiles__Var_10;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                {
                  libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_condition_0_0(libs__mmakefiles__Var_5, libs__mmakefiles__Var_8);
                }
                if (libs__mmakefiles__succeeded)
                  {
                    {
                      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(libs__mmakefiles__Var_6, libs__mmakefiles__Var_9);
                    }
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(libs__mmakefiles__Var_7, libs__mmakefiles__Var_10);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word libs__mmakefiles__TypeInfo_19_19;
            MR_Word libs__mmakefiles__TypeInfo_20_20;
            MR_Word libs__mmakefiles__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word libs__mmakefiles__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word libs__mmakefiles__Var_14;
            MR_Word libs__mmakefiles__Var_15;
            MR_Word libs__mmakefiles__Var_16;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                {
                  libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_condition_0_0(libs__mmakefiles__Var_11, libs__mmakefiles__Var_14);
                }
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__TypeInfo_19_19 = (MR_Word) &libs__mmakefiles_scalar_common_1[4];
                    {
                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_19_19, ((MR_Box) (libs__mmakefiles__Var_12)), ((MR_Box) (libs__mmakefiles__Var_15)));
                    }
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__TypeInfo_20_20 = (MR_Word) &libs__mmakefiles_scalar_common_1[4];
                        {
                          libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_20_20, ((MR_Box) (libs__mmakefiles__Var_13)), ((MR_Box) (libs__mmakefiles__Var_16)));
                        }
                      }
                  }
              }
          }
          break;
      }
    return libs__mmakefiles__succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_group_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__CastX_9 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;
    MR_Integer libs__mmakefiles__CastY_10 = (MR_Integer) libs__mmakefiles__HeadVar__3_3;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_9 == libs__mmakefiles__CastY_10);
    if (libs__mmakefiles__succeeded)
      *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String libs__mmakefiles__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__mmakefiles__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
        MR_String libs__mmakefiles__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word libs__mmakefiles__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word libs__mmakefiles__Var_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_8, libs__mmakefiles__Var_4, libs__mmakefiles__Var_6);
        }
        libs__mmakefiles__succeeded = (libs__mmakefiles__Var_8 == (MR_Integer) 0);
        libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
        if (libs__mmakefiles__succeeded)
          *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[3], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_5)), ((MR_Box) (libs__mmakefiles__Var_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_group_0_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__CastX_7 = (MR_Integer) libs__mmakefiles__HeadVar__1_1;
    MR_Integer libs__mmakefiles__CastY_8 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_7 == libs__mmakefiles__CastY_8);
    if (libs__mmakefiles__succeeded)
      libs__mmakefiles__succeeded = MR_TRUE;
    else
      {
        MR_Word libs__mmakefiles__TypeInfo_9_9;
        MR_String libs__mmakefiles__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word libs__mmakefiles__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
        MR_String libs__mmakefiles__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__mmakefiles__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

        libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_3, libs__mmakefiles__Var_5) == 0);
        if (libs__mmakefiles__succeeded)
          {
            libs__mmakefiles__TypeInfo_9_9 = (MR_Word) &libs__mmakefiles_scalar_common_1[3];
            {
              libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_9_9, ((MR_Box) (libs__mmakefiles__Var_4)), ((MR_Box) (libs__mmakefiles__Var_6)));
            }
          }
      }
    return libs__mmakefiles__succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_String libs__mmakefiles__HeadVar__2_2,
  MR_String libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_String libs__mmakefiles__Cast_HeadVar1_4 = libs__mmakefiles__HeadVar__2_2;
    MR_String libs__mmakefiles__Cast_HeadVar2_5 = libs__mmakefiles__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Cast_HeadVar1_4, libs__mmakefiles__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_0_0(
  MR_String libs__mmakefiles__HeadVar__1_1,
  MR_String libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_String libs__mmakefiles__Cast_HeadVar1_3 = libs__mmakefiles__HeadVar__1_1;
    MR_String libs__mmakefiles__Cast_HeadVar2_4 = libs__mmakefiles__HeadVar__2_2;

    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Cast_HeadVar1_3, libs__mmakefiles__Cast_HeadVar2_4) == 0);
    return libs__mmakefiles__succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_entry_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__CastX_372 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;
    MR_Integer libs__mmakefiles__CastY_373 = (MR_Integer) libs__mmakefiles__HeadVar__3_3;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_372 == libs__mmakefiles__CastY_373);
    if (libs__mmakefiles__succeeded)
      *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word libs__mmakefiles__Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word libs__mmakefiles__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_399)), ((MR_Box) (libs__mmakefiles__Var_5)));
                  }
                }
                break;
              case (MR_Integer) 1:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String libs__mmakefiles__Var_420 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_421 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String libs__mmakefiles__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String libs__mmakefiles__Var_42 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__Var_43;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_43, libs__mmakefiles__Var_421, libs__mmakefiles__Var_41);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_43 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_43;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_420, libs__mmakefiles__Var_42);
                    }
                }
                break;
              case (MR_Integer) 2:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word libs__mmakefiles__Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_423 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String libs__mmakefiles__Var_85 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__Var_87;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_87, libs__mmakefiles__Var_423, libs__mmakefiles__Var_85);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_87 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_87;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_422)), ((MR_Box) (libs__mmakefiles__Var_86)));
                      }
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word libs__mmakefiles__Var_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__Var_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                MR_String libs__mmakefiles__Var_417 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_419 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String libs__mmakefiles__Var_141 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word libs__mmakefiles__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                          MR_String libs__mmakefiles__Var_143 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word libs__mmakefiles__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word libs__mmakefiles__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word libs__mmakefiles__Var_146;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_146, libs__mmakefiles__Var_419, libs__mmakefiles__Var_141);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_146 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_146;
                          else
                            {
                              MR_Word libs__mmakefiles__Var_147;
                              MR_Integer libs__mmakefiles__Var_430 = (MR_Integer) libs__mmakefiles__Var_418;
                              MR_Integer libs__mmakefiles__Var_431 = (MR_Integer) libs__mmakefiles__Var_142;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&libs__mmakefiles__Var_147, libs__mmakefiles__Var_430, libs__mmakefiles__Var_431);
                              }
                              libs__mmakefiles__succeeded = (libs__mmakefiles__Var_147 == (MR_Integer) 0);
                              libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                              if (libs__mmakefiles__succeeded)
                                *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_147;
                              else
                                {
                                  MR_Word libs__mmakefiles__Var_148;

                                  {
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_148, libs__mmakefiles__Var_417, libs__mmakefiles__Var_143);
                                  }
                                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_148 == (MR_Integer) 0);
                                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                  if (libs__mmakefiles__succeeded)
                                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_148;
                                  else
                                    {
                                      MR_Word libs__mmakefiles__Var_149;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], &libs__mmakefiles__Var_149, ((MR_Box) (libs__mmakefiles__Var_416)), ((MR_Box) (libs__mmakefiles__Var_144)));
                                      }
                                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_149 == (MR_Integer) 0);
                                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                      if (libs__mmakefiles__succeeded)
                                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_149;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_415)), ((MR_Box) (libs__mmakefiles__Var_145)));
                                          }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word libs__mmakefiles__Var_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__Var_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__Var_407 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_409 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String libs__mmakefiles__Var_215 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word libs__mmakefiles__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word libs__mmakefiles__Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word libs__mmakefiles__Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word libs__mmakefiles__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word libs__mmakefiles__Var_220;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_220, libs__mmakefiles__Var_409, libs__mmakefiles__Var_215);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_220 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_220;
                          else
                            {
                              MR_Word libs__mmakefiles__Var_221;
                              MR_Integer libs__mmakefiles__Var_426 = (MR_Integer) libs__mmakefiles__Var_408;
                              MR_Integer libs__mmakefiles__Var_427 = (MR_Integer) libs__mmakefiles__Var_216;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&libs__mmakefiles__Var_221, libs__mmakefiles__Var_426, libs__mmakefiles__Var_427);
                              }
                              libs__mmakefiles__succeeded = (libs__mmakefiles__Var_221 == (MR_Integer) 0);
                              libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                              if (libs__mmakefiles__succeeded)
                                *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_221;
                              else
                                {
                                  MR_Word libs__mmakefiles__Var_222;

                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[3], &libs__mmakefiles__Var_222, ((MR_Box) (libs__mmakefiles__Var_407)), ((MR_Box) (libs__mmakefiles__Var_217)));
                                  }
                                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_222 == (MR_Integer) 0);
                                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                  if (libs__mmakefiles__succeeded)
                                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_222;
                                  else
                                    {
                                      MR_Word libs__mmakefiles__Var_223;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], &libs__mmakefiles__Var_223, ((MR_Box) (libs__mmakefiles__Var_406)), ((MR_Box) (libs__mmakefiles__Var_218)));
                                      }
                                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_223 == (MR_Integer) 0);
                                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                      if (libs__mmakefiles__succeeded)
                                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_223;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_405)), ((MR_Box) (libs__mmakefiles__Var_219)));
                                          }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word libs__mmakefiles__Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                MR_String libs__mmakefiles__Var_402 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_404 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String libs__mmakefiles__Var_289 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word libs__mmakefiles__Var_290 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                          MR_String libs__mmakefiles__Var_291 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word libs__mmakefiles__Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word libs__mmakefiles__Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word libs__mmakefiles__Var_294;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_294, libs__mmakefiles__Var_404, libs__mmakefiles__Var_289);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_294 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_294;
                          else
                            {
                              MR_Word libs__mmakefiles__Var_295;
                              MR_Integer libs__mmakefiles__Var_424 = (MR_Integer) libs__mmakefiles__Var_403;
                              MR_Integer libs__mmakefiles__Var_425 = (MR_Integer) libs__mmakefiles__Var_290;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&libs__mmakefiles__Var_295, libs__mmakefiles__Var_424, libs__mmakefiles__Var_425);
                              }
                              libs__mmakefiles__succeeded = (libs__mmakefiles__Var_295 == (MR_Integer) 0);
                              libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                              if (libs__mmakefiles__succeeded)
                                *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_295;
                              else
                                {
                                  MR_Word libs__mmakefiles__Var_296;

                                  {
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_296, libs__mmakefiles__Var_402, libs__mmakefiles__Var_291);
                                  }
                                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_296 == (MR_Integer) 0);
                                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                  if (libs__mmakefiles__succeeded)
                                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_296;
                                  else
                                    {
                                      MR_Word libs__mmakefiles__Var_297;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[2], &libs__mmakefiles__Var_297, ((MR_Box) (libs__mmakefiles__Var_401)), ((MR_Box) (libs__mmakefiles__Var_292)));
                                      }
                                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_297 == (MR_Integer) 0);
                                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                      if (libs__mmakefiles__succeeded)
                                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_297;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_400)), ((MR_Box) (libs__mmakefiles__Var_293)));
                                          }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word libs__mmakefiles__Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_413 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_414 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String libs__mmakefiles__Var_363 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word libs__mmakefiles__Var_364 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word libs__mmakefiles__Var_365 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word libs__mmakefiles__Var_366 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word libs__mmakefiles__Var_367 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word libs__mmakefiles__Var_368;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_368, libs__mmakefiles__Var_414, libs__mmakefiles__Var_363);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_368 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_368;
                          else
                            {
                              MR_Word libs__mmakefiles__Var_369;
                              MR_Integer libs__mmakefiles__Var_428 = (MR_Integer) libs__mmakefiles__Var_413;
                              MR_Integer libs__mmakefiles__Var_429 = (MR_Integer) libs__mmakefiles__Var_364;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&libs__mmakefiles__Var_369, libs__mmakefiles__Var_428, libs__mmakefiles__Var_429);
                              }
                              libs__mmakefiles__succeeded = (libs__mmakefiles__Var_369 == (MR_Integer) 0);
                              libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                              if (libs__mmakefiles__succeeded)
                                *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_369;
                              else
                                {
                                  MR_Word libs__mmakefiles__Var_370;

                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[1], &libs__mmakefiles__Var_370, ((MR_Box) (libs__mmakefiles__Var_412)), ((MR_Box) (libs__mmakefiles__Var_365)));
                                  }
                                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_370 == (MR_Integer) 0);
                                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                  if (libs__mmakefiles__succeeded)
                                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_370;
                                  else
                                    {
                                      MR_Word libs__mmakefiles__Var_371;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[2], &libs__mmakefiles__Var_371, ((MR_Box) (libs__mmakefiles__Var_411)), ((MR_Box) (libs__mmakefiles__Var_366)));
                                      }
                                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_371 == (MR_Integer) 0);
                                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                      if (libs__mmakefiles__succeeded)
                                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_371;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_410)), ((MR_Box) (libs__mmakefiles__Var_367)));
                                          }
                                        }
                                    }
                                }
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
libs__mmakefiles____Unify____mmake_entry_0_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__CastX_53 = (MR_Integer) libs__mmakefiles__HeadVar__1_1;
    MR_Integer libs__mmakefiles__CastY_54 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_53 == libs__mmakefiles__CastY_54);
    if (libs__mmakefiles__succeeded)
      libs__mmakefiles__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word libs__mmakefiles__TypeInfo_55_55;
            MR_Word libs__mmakefiles__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__Var_4;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__TypeInfo_55_55 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                {
                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_55_55, ((MR_Box) (libs__mmakefiles__Var_3)), ((MR_Box) (libs__mmakefiles__Var_4)));
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String libs__mmakefiles__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__mmakefiles__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_7;
            MR_String libs__mmakefiles__Var_8;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_5, libs__mmakefiles__Var_7) == 0);
                if (libs__mmakefiles__succeeded)
                  libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_6, libs__mmakefiles__Var_8) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word libs__mmakefiles__TypeInfo_66_66;
            MR_String libs__mmakefiles__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_11;
            MR_Word libs__mmakefiles__Var_12;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_9, libs__mmakefiles__Var_11) == 0);
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__TypeInfo_66_66 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                    {
                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_66_66, ((MR_Box) (libs__mmakefiles__Var_10)), ((MR_Box) (libs__mmakefiles__Var_12)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word libs__mmakefiles__TypeInfo_64_64;
                MR_Word libs__mmakefiles__TypeInfo_65_65;
                MR_String libs__mmakefiles__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word libs__mmakefiles__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 5)));
                MR_String libs__mmakefiles__Var_18;
                MR_Word libs__mmakefiles__Var_19;
                MR_String libs__mmakefiles__Var_20;
                MR_Word libs__mmakefiles__Var_21;
                MR_Word libs__mmakefiles__Var_22;

                libs__mmakefiles__succeeded = ((((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                    libs__mmakefiles__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                    libs__mmakefiles__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                    libs__mmakefiles__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                    libs__mmakefiles__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_13, libs__mmakefiles__Var_18) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = (libs__mmakefiles__Var_14 == libs__mmakefiles__Var_19);
                        if (libs__mmakefiles__succeeded)
                          {
                            libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_15, libs__mmakefiles__Var_20) == 0);
                            if (libs__mmakefiles__succeeded)
                              {
                                libs__mmakefiles__TypeInfo_64_64 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                {
                                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_64_64, ((MR_Box) (libs__mmakefiles__Var_16)), ((MR_Box) (libs__mmakefiles__Var_21)));
                                }
                                if (libs__mmakefiles__succeeded)
                                  {
                                    libs__mmakefiles__TypeInfo_65_65 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                    {
                                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_65_65, ((MR_Box) (libs__mmakefiles__Var_17)), ((MR_Box) (libs__mmakefiles__Var_22)));
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word libs__mmakefiles__TypeInfo_58_58;
                MR_Word libs__mmakefiles__TypeInfo_59_59;
                MR_Word libs__mmakefiles__TypeInfo_60_60;
                MR_String libs__mmakefiles__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word libs__mmakefiles__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word libs__mmakefiles__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 5)));
                MR_String libs__mmakefiles__Var_28;
                MR_Word libs__mmakefiles__Var_29;
                MR_Word libs__mmakefiles__Var_30;
                MR_Word libs__mmakefiles__Var_31;
                MR_Word libs__mmakefiles__Var_32;

                libs__mmakefiles__succeeded = ((((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                    libs__mmakefiles__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                    libs__mmakefiles__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                    libs__mmakefiles__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                    libs__mmakefiles__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_23, libs__mmakefiles__Var_28) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = (libs__mmakefiles__Var_24 == libs__mmakefiles__Var_29);
                        if (libs__mmakefiles__succeeded)
                          {
                            libs__mmakefiles__TypeInfo_58_58 = (MR_Word) &libs__mmakefiles_scalar_common_1[3];
                            {
                              libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_58_58, ((MR_Box) (libs__mmakefiles__Var_25)), ((MR_Box) (libs__mmakefiles__Var_30)));
                            }
                            if (libs__mmakefiles__succeeded)
                              {
                                libs__mmakefiles__TypeInfo_59_59 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                {
                                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_59_59, ((MR_Box) (libs__mmakefiles__Var_26)), ((MR_Box) (libs__mmakefiles__Var_31)));
                                }
                                if (libs__mmakefiles__succeeded)
                                  {
                                    libs__mmakefiles__TypeInfo_60_60 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                    {
                                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_60_60, ((MR_Box) (libs__mmakefiles__Var_27)), ((MR_Box) (libs__mmakefiles__Var_32)));
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word libs__mmakefiles__TypeInfo_56_56;
                MR_Word libs__mmakefiles__TypeInfo_57_57;
                MR_String libs__mmakefiles__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word libs__mmakefiles__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 5)));
                MR_String libs__mmakefiles__Var_38;
                MR_Word libs__mmakefiles__Var_39;
                MR_String libs__mmakefiles__Var_40;
                MR_Word libs__mmakefiles__Var_41;
                MR_Word libs__mmakefiles__Var_42;

                libs__mmakefiles__succeeded = ((((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                    libs__mmakefiles__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                    libs__mmakefiles__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                    libs__mmakefiles__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                    libs__mmakefiles__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_33, libs__mmakefiles__Var_38) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = (libs__mmakefiles__Var_34 == libs__mmakefiles__Var_39);
                        if (libs__mmakefiles__succeeded)
                          {
                            libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_35, libs__mmakefiles__Var_40) == 0);
                            if (libs__mmakefiles__succeeded)
                              {
                                libs__mmakefiles__TypeInfo_56_56 = (MR_Word) &libs__mmakefiles_scalar_common_1[2];
                                {
                                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_56_56, ((MR_Box) (libs__mmakefiles__Var_36)), ((MR_Box) (libs__mmakefiles__Var_41)));
                                }
                                if (libs__mmakefiles__succeeded)
                                  {
                                    libs__mmakefiles__TypeInfo_57_57 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                    {
                                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_57_57, ((MR_Box) (libs__mmakefiles__Var_37)), ((MR_Box) (libs__mmakefiles__Var_42)));
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
                MR_Word libs__mmakefiles__TypeInfo_61_61;
                MR_Word libs__mmakefiles__TypeInfo_62_62;
                MR_Word libs__mmakefiles__TypeInfo_63_63;
                MR_String libs__mmakefiles__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word libs__mmakefiles__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word libs__mmakefiles__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 5)));
                MR_String libs__mmakefiles__Var_48;
                MR_Word libs__mmakefiles__Var_49;
                MR_Word libs__mmakefiles__Var_50;
                MR_Word libs__mmakefiles__Var_51;
                MR_Word libs__mmakefiles__Var_52;

                libs__mmakefiles__succeeded = ((((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__Var_48 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                    libs__mmakefiles__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                    libs__mmakefiles__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                    libs__mmakefiles__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                    libs__mmakefiles__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_43, libs__mmakefiles__Var_48) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = (libs__mmakefiles__Var_44 == libs__mmakefiles__Var_49);
                        if (libs__mmakefiles__succeeded)
                          {
                            libs__mmakefiles__TypeInfo_61_61 = (MR_Word) &libs__mmakefiles_scalar_common_1[1];
                            {
                              libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_61_61, ((MR_Box) (libs__mmakefiles__Var_45)), ((MR_Box) (libs__mmakefiles__Var_50)));
                            }
                            if (libs__mmakefiles__succeeded)
                              {
                                libs__mmakefiles__TypeInfo_62_62 = (MR_Word) &libs__mmakefiles_scalar_common_1[2];
                                {
                                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_62_62, ((MR_Box) (libs__mmakefiles__Var_46)), ((MR_Box) (libs__mmakefiles__Var_51)));
                                }
                                if (libs__mmakefiles__succeeded)
                                  {
                                    libs__mmakefiles__TypeInfo_63_63 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                    {
                                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_63_63, ((MR_Box) (libs__mmakefiles__Var_47)), ((MR_Box) (libs__mmakefiles__Var_52)));
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
              break;
          }
          break;
      }
    return libs__mmakefiles__succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_condition_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__CastX_36 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;
    MR_Integer libs__mmakefiles__CastY_37 = (MR_Integer) libs__mmakefiles__HeadVar__3_3;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_36 == libs__mmakefiles__CastY_37);
    if (libs__mmakefiles__succeeded)
      *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String libs__mmakefiles__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String libs__mmakefiles__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_43, libs__mmakefiles__Var_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String libs__mmakefiles__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String libs__mmakefiles__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String libs__mmakefiles__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__Var_19;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_19, libs__mmakefiles__Var_45, libs__mmakefiles__Var_17);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_19 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_19;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_44, libs__mmakefiles__Var_18);
                    }
                }
                break;
              case (MR_Integer) 2:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String libs__mmakefiles__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String libs__mmakefiles__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String libs__mmakefiles__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__Var_35;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_35, libs__mmakefiles__Var_47, libs__mmakefiles__Var_33);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_35 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_35;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_46, libs__mmakefiles__Var_34);
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
libs__mmakefiles____Unify____mmake_condition_0_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__CastX_13 = (MR_Integer) libs__mmakefiles__HeadVar__1_1;
    MR_Integer libs__mmakefiles__CastY_14 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_13 == libs__mmakefiles__CastY_14);
    if (libs__mmakefiles__succeeded)
      libs__mmakefiles__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String libs__mmakefiles__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__mmakefiles__Var_4;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_3, libs__mmakefiles__Var_4) == 0);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String libs__mmakefiles__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__mmakefiles__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_7;
            MR_String libs__mmakefiles__Var_8;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_5, libs__mmakefiles__Var_7) == 0);
                if (libs__mmakefiles__succeeded)
                  libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_6, libs__mmakefiles__Var_8) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String libs__mmakefiles__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__mmakefiles__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_11;
            MR_String libs__mmakefiles__Var_12;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_9, libs__mmakefiles__Var_11) == 0);
                if (libs__mmakefiles__succeeded)
                  libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_10, libs__mmakefiles__Var_12) == 0);
              }
          }
          break;
      }
    return libs__mmakefiles__succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_action_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_String libs__mmakefiles__HeadVar__2_2,
  MR_String libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_String libs__mmakefiles__Cast_HeadVar1_4 = libs__mmakefiles__HeadVar__2_2;
    MR_String libs__mmakefiles__Cast_HeadVar2_5 = libs__mmakefiles__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Cast_HeadVar1_4, libs__mmakefiles__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_action_0_0(
  MR_String libs__mmakefiles__HeadVar__1_1,
  MR_String libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_String libs__mmakefiles__Cast_HeadVar1_3 = libs__mmakefiles__HeadVar__1_1;
    MR_String libs__mmakefiles__Cast_HeadVar2_4 = libs__mmakefiles__HeadVar__2_2;

    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Cast_HeadVar1_3, libs__mmakefiles__Cast_HeadVar2_4) == 0);
    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__Cast_HeadVar1_4 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;
    MR_Integer libs__mmakefiles__Cast_HeadVar2_5 = (MR_Integer) libs__mmakefiles__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Cast_HeadVar1_4, libs__mmakefiles__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0(
  MR_Word libs__mmakefiles__HeadVar__2_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded = (libs__mmakefiles__HeadVar__2_1 == libs__mmakefiles__HeadVar__2_2);

    return libs__mmakefiles__succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____maybe_comment_out_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__Cast_HeadVar1_4 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;
    MR_Integer libs__mmakefiles__Cast_HeadVar2_5 = (MR_Integer) libs__mmakefiles__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Cast_HeadVar1_4, libs__mmakefiles__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_comment_out_0_0(
  MR_Word libs__mmakefiles__HeadVar__2_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded = (libs__mmakefiles__HeadVar__2_1 == libs__mmakefiles__HeadVar__2_2);

    return libs__mmakefiles__succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____is_mmake_rule_phony_0_0(
  MR_Word * libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2,
  MR_Word libs__mmakefiles__HeadVar__3_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Integer libs__mmakefiles__Cast_HeadVar1_4 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;
    MR_Integer libs__mmakefiles__Cast_HeadVar2_5 = (MR_Integer) libs__mmakefiles__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Cast_HeadVar1_4, libs__mmakefiles__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____is_mmake_rule_phony_0_0(
  MR_Word libs__mmakefiles__HeadVar__2_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  {
    MR_bool libs__mmakefiles__succeeded = (libs__mmakefiles__HeadVar__2_1 == libs__mmakefiles__HeadVar__2_2);

    return libs__mmakefiles__succeeded;
  }
}

static MR_Box MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0_1(
  MR_Box libs__mmakefiles__closure_arg,
  MR_Box libs__mmakefiles__wrapper_arg_1)
{
  {
    MR_Box libs__mmakefiles__wrapper_arg_2;
    MR_Box libs__mmakefiles__closure = libs__mmakefiles__closure_arg;
    MR_Word libs__mmakefiles__conv0_HeadVar__2_2;

    {
      libs__mmakefiles__conv0_HeadVar__2_2 = libs__mmakefiles__file_name_group_files_1_f_0(((MR_Word) libs__mmakefiles__wrapper_arg_1));
    }
    libs__mmakefiles__wrapper_arg_2 = ((MR_Box) (libs__mmakefiles__conv0_HeadVar__2_2));
    return libs__mmakefiles__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0(
  MR_Word libs__mmakefiles__FileNameGroups_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Word libs__mmakefiles__FileNames_4;
    MR_Word libs__mmakefiles__HeadFileNameGroup_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__FileNameGroups_3, (MR_Integer) 0)));
    MR_Word libs__mmakefiles__TailFileNameGroups_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__FileNameGroups_3, (MR_Integer) 1)));
    MR_Word libs__mmakefiles__FileNamesList_7;
    MR_Word libs__mmakefiles__Var_9;

    {
      libs__mmakefiles__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_9, 0) = ((MR_Box) (libs__mmakefiles__HeadFileNameGroup_5));
      MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_9, 1) = ((MR_Box) (libs__mmakefiles__TailFileNameGroups_6));
    }
    {
      libs__mmakefiles__FileNamesList_7 = mercury__list__map_2_f_0((MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0, (MR_Word) &libs__mmakefiles_scalar_common_1[0], (MR_Word) &libs__mmakefiles_scalar_common_3[1], libs__mmakefiles__Var_9);
    }
    {
      libs__mmakefiles__FileNames_4 = mercury__list__condense_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__mmakefiles__FileNamesList_7);
    }
    return libs__mmakefiles__FileNames_4;
  }
}

static MR_Word MR_CALL 
libs__mmakefiles__file_name_group_files_1_f_0(
  MR_Word libs__mmakefiles__FileNameGroup_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Word libs__mmakefiles__HeadVar__2_2;
    MR_String libs__mmakefiles__HeadFileName_4;
    MR_Word libs__mmakefiles__TailFileNames_5;
    MR_Word libs__mmakefiles__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__FileNameGroup_3, (MR_Integer) 1)));
    MR_String libs__mmakefiles___GroupName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__FileNameGroup_3, (MR_Integer) 0)));

    libs__mmakefiles__HeadFileName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_7, (MR_Integer) 0)));
    libs__mmakefiles__TailFileNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_7, (MR_Integer) 1)));
    {
      libs__mmakefiles__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, 0) = ((MR_Box) (libs__mmakefiles__HeadFileName_4));
      MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, 1) = ((MR_Box) (libs__mmakefiles__TailFileNames_5));
    }
    return libs__mmakefiles__HeadVar__2_2;
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_actions_4_p_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__mmakefiles__succeeded;

        if ((libs__mmakefiles__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String libs__mmakefiles__Action_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__Actions_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__HeadVar__1_1, (MR_String) "\t");
            }
            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Action_10);
            }
            {
              mercury__io__nl_3_p_0(libs__mmakefiles__HeadVar__1_1);
            }
            /* direct tailcall eliminated */
            {
              MR_Word libs__mmakefiles__next_value_of_HeadVar__2_2 = libs__mmakefiles__Actions_11;

              libs__mmakefiles__HeadVar__2_2 = libs__mmakefiles__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__FileName_6)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__FileName_6);
    }
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__FileName_7,
  MR_Word libs__mmakefiles__FileNames_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__mmakefiles__succeeded;

        {
          mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) "\t\t");
        }
        {
          mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, libs__mmakefiles__FileName_7);
        }
        if ((libs__mmakefiles__FileNames_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String libs__mmakefiles__HeadFileName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNames_8, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__TailFileNames_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNames_8, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) " \\\n");
            }
            /* direct tailcall eliminated */
            {
              MR_String libs__mmakefiles__next_value_of_FileName_7 = libs__mmakefiles__HeadFileName_10;
              MR_Word libs__mmakefiles__next_value_of_FileNames_8 = libs__mmakefiles__TailFileNames_11;

              libs__mmakefiles__FileNames_8 = libs__mmakefiles__next_value_of_FileNames_8;
              libs__mmakefiles__FileName_7 = libs__mmakefiles__next_value_of_FileName_7;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__FileName_7,
  MR_Word libs__mmakefiles__FileNames_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__mmakefiles__succeeded;

        {
          mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, libs__mmakefiles__FileName_7);
        }
        if ((libs__mmakefiles__FileNames_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String libs__mmakefiles__HeadFileName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNames_8, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__TailFileNames_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNames_8, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) " ");
            }
            /* direct tailcall eliminated */
            {
              MR_String libs__mmakefiles__next_value_of_FileName_7 = libs__mmakefiles__HeadFileName_10;
              MR_Word libs__mmakefiles__next_value_of_FileNames_8 = libs__mmakefiles__TailFileNames_11;

              libs__mmakefiles__FileNames_8 = libs__mmakefiles__next_value_of_FileNames_8;
              libs__mmakefiles__FileName_7 = libs__mmakefiles__next_value_of_FileName_7;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_Word libs__mmakefiles__FileNameGroup_7,
  MR_Word libs__mmakefiles__FileNameGroups_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__mmakefiles__succeeded;
        MR_String libs__mmakefiles__FileName_26;
        MR_Word libs__mmakefiles__FileNames_27;
        MR_Word libs__mmakefiles__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__FileNameGroup_7, (MR_Integer) 1)));
        MR_String libs__mmakefiles___GroupName_25 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__FileNameGroup_7, (MR_Integer) 0)));

        libs__mmakefiles__FileName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_28, (MR_Integer) 0)));
        libs__mmakefiles__FileNames_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_28, (MR_Integer) 1)));
        {
          libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(libs__mmakefiles__OutStream_6, libs__mmakefiles__FileName_26, libs__mmakefiles__FileNames_27);
        }
        if ((libs__mmakefiles__FileNameGroups_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word libs__mmakefiles__HeadFileNameGroup_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNameGroups_8, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__TailFileNameGroups_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNameGroups_8, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) " \\\n");
            }
            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) "\t\\\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word libs__mmakefiles__next_value_of_FileNameGroup_7 = libs__mmakefiles__HeadFileNameGroup_10;
              MR_Word libs__mmakefiles__next_value_of_FileNameGroups_8 = libs__mmakefiles__TailFileNameGroups_11;

              libs__mmakefiles__FileNameGroups_8 = libs__mmakefiles__next_value_of_FileNameGroups_8;
              libs__mmakefiles__FileNameGroup_7 = libs__mmakefiles__next_value_of_FileNameGroup_7;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_horizontal_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_Word libs__mmakefiles__FileNameGroup_7,
  MR_Word libs__mmakefiles__FileNameGroups_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__mmakefiles__succeeded;
        MR_String libs__mmakefiles__FileName_24;
        MR_Word libs__mmakefiles__FileNames_25;
        MR_Word libs__mmakefiles__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__FileNameGroup_7, (MR_Integer) 1)));
        MR_String libs__mmakefiles___GroupName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__FileNameGroup_7, (MR_Integer) 0)));

        libs__mmakefiles__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_26, (MR_Integer) 0)));
        libs__mmakefiles__FileNames_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_26, (MR_Integer) 1)));
        {
          libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(libs__mmakefiles__OutStream_6, libs__mmakefiles__FileName_24, libs__mmakefiles__FileNames_25);
        }
        if ((libs__mmakefiles__FileNameGroups_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word libs__mmakefiles__HeadFileNameGroup_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNameGroups_8, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__TailFileNameGroups_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNameGroups_8, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) " ");
            }
            /* direct tailcall eliminated */
            {
              MR_Word libs__mmakefiles__next_value_of_FileNameGroup_7 = libs__mmakefiles__HeadFileNameGroup_10;
              MR_Word libs__mmakefiles__next_value_of_FileNameGroups_8 = libs__mmakefiles__TailFileNameGroups_11;

              libs__mmakefiles__FileNameGroups_8 = libs__mmakefiles__next_value_of_FileNameGroups_8;
              libs__mmakefiles__FileNameGroup_7 = libs__mmakefiles__next_value_of_FileNameGroup_7;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
libs__mmakefiles__write_rule_name_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__RuleName_6)
{
  {
    MR_bool libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__RuleName_6, (MR_String) "") == 0);

    if (libs__mmakefiles__succeeded)
      {
      }
    else
      {
        {
          mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "# RULE ");
        }
        {
          mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__RuleName_6);
        }
        {
          mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "\n");
        }
      }
  }
}

static void MR_CALL 
libs__mmakefiles__maybe_write_phony_rule_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_Word libs__mmakefiles__IsPhony_7,
  MR_Word libs__mmakefiles__FileNames_8)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    switch (libs__mmakefiles__IsPhony_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String libs__mmakefiles__FileNamesStr_10;

          {
            libs__mmakefiles__FileNamesStr_10 = mercury__string__join_list_2_f_0((MR_String) " ", libs__mmakefiles__FileNames_8);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) ".PHONY: ");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, libs__mmakefiles__FileNamesStr_10);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) "\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_var_values_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__HeadValue_7,
  MR_Word libs__mmakefiles__TailValues_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__mmakefiles__succeeded;

        if ((libs__mmakefiles__TailValues_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) "\t");
            }
            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, libs__mmakefiles__HeadValue_7);
            }
            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) "\n");
            }
          }
        else
          {
            MR_String libs__mmakefiles__HeadTailValue_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__TailValues_8, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__TailTailValues_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__TailValues_8, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) "\t");
            }
            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, libs__mmakefiles__HeadValue_7);
            }
            {
              mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) " \\\n");
            }
            /* direct tailcall eliminated */
            {
              MR_String libs__mmakefiles__next_value_of_HeadValue_7 = libs__mmakefiles__HeadTailValue_10;
              MR_Word libs__mmakefiles__next_value_of_TailValues_8 = libs__mmakefiles__TailTailValues_11;

              libs__mmakefiles__TailValues_8 = libs__mmakefiles__next_value_of_TailValues_8;
              libs__mmakefiles__HeadValue_7 = libs__mmakefiles__next_value_of_HeadValue_7;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Integer MR_CALL 
libs__mmakefiles__max_horizontal_0_f_0(void)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    return (MR_Integer) 1;
  }
}

static void MR_CALL 
libs__mmakefiles__write_group_name_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__GroupName0_6)
{
  {
    MR_bool libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__GroupName0_6, (MR_String) "") == 0);
    MR_String libs__mmakefiles__GroupName_8;

    if (libs__mmakefiles__succeeded)
      libs__mmakefiles__GroupName_8 = (MR_String) "(unnamed)";
    else
      libs__mmakefiles__GroupName_8 = libs__mmakefiles__GroupName0_6;
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "#   ");
    }
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__GroupName_8);
    }
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "\n");
    }
  }
}

static MR_String MR_CALL 
libs__mmakefiles__project_group_name_1_f_0(
  MR_Word libs__mmakefiles__HeadVar__1_1)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_String libs__mmakefiles__GroupName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word libs__mmakefiles__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));

    return libs__mmakefiles__GroupName_3;
  }
}

static void MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0_2(
  MR_Box libs__mmakefiles__closure_arg,
  MR_Box libs__mmakefiles__wrapper_arg_1,
  MR_Box libs__mmakefiles__wrapper_arg_2,
  MR_Box * libs__mmakefiles__wrapper_arg_3)
{
  {
    MR_Box libs__mmakefiles__closure = libs__mmakefiles__closure_arg;

    {
      libs__mmakefiles__write_group_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__closure, (MR_Integer) 3))), ((MR_String) libs__mmakefiles__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0_1(
  MR_Box libs__mmakefiles__closure_arg,
  MR_Box libs__mmakefiles__wrapper_arg_1)
{
  {
    MR_Box libs__mmakefiles__wrapper_arg_2;
    MR_Box libs__mmakefiles__closure = libs__mmakefiles__closure_arg;
    MR_String libs__mmakefiles__conv0_GroupName_3;

    {
      libs__mmakefiles__conv0_GroupName_3 = libs__mmakefiles__project_group_name_1_f_0(((MR_Word) libs__mmakefiles__wrapper_arg_1));
    }
    libs__mmakefiles__wrapper_arg_2 = ((MR_Box) (libs__mmakefiles__conv0_GroupName_3));
    return libs__mmakefiles__wrapper_arg_2;
  }
}

static void MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__TargetOrSource_7,
  MR_Word libs__mmakefiles__Groups_8)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Word libs__mmakefiles__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word libs__mmakefiles__GroupNames_10;
    MR_String libs__mmakefiles__Var_14;

    {
      libs__mmakefiles__GroupNames_10 = mercury__list__map_2_f_0((MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0, libs__mmakefiles__TypeCtorInfo_23_23, (MR_Word) &libs__mmakefiles_scalar_common_3[0], libs__mmakefiles__Groups_8);
    }
    {
      libs__mmakefiles__Var_14 = mercury__string__append_list_1_f_0(libs__mmakefiles__GroupNames_10);
    }
    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__Var_14, (MR_String) "") == 0);
    if (libs__mmakefiles__succeeded)
      {
      }
    else
      {
        MR_Word libs__mmakefiles__Var_20;
        MR_Box libs__mmakefiles__conv1_STATE_VARIABLE_IO_12;

        {
          mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) "# ");
        }
        {
          mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, libs__mmakefiles__TargetOrSource_7);
        }
        {
          mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_6, (MR_String) " group names:\n");
        }
        {
          libs__mmakefiles__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_20, 0) = ((MR_Box) (&libs__mmakefiles_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_20, 1) = ((MR_Box) (libs__mmakefiles__maybe_write_group_names_5_p_0_2));
          MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_20, 3) = ((MR_Box) (libs__mmakefiles__OutStream_6));
        }
        {
          mercury__list__foldl_4_p_2(libs__mmakefiles__TypeCtorInfo_23_23, (MR_Word) &mercury__io__io__type_ctor_info_state_0, libs__mmakefiles__Var_20, libs__mmakefiles__GroupNames_10, ((MR_Box) ((MR_Integer) 0)), &libs__mmakefiles__conv1_STATE_VARIABLE_IO_12);
        }
      }
  }
}

static void MR_CALL 
libs__mmakefiles__write_block_comment_line_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__Comment_6)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "# ");
    }
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__Comment_6);
    }
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_condition_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_Word libs__mmakefiles__Cond_6)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    switch (MR_tag((MR_Word) libs__mmakefiles__Cond_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String libs__mmakefiles__GradeComponent_8 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Cond_6, (MR_Integer) 0)));

          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "ifeq (\044(findstring ");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__GradeComponent_8);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) ",\044(GRADE)),");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__GradeComponent_8);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) ")\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String libs__mmakefiles__StrA_9 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__Cond_6, (MR_Integer) 0)));
          MR_String libs__mmakefiles__StrB_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__Cond_6, (MR_Integer) 1)));

          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "ifeq (");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__StrA_9);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) ",");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__StrB_10);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) ")\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String libs__mmakefiles__StrA_34 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__Cond_6, (MR_Integer) 0)));
          MR_String libs__mmakefiles__StrB_35 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__Cond_6, (MR_Integer) 1)));

          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "ifneq (");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__StrA_34);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) ",");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, libs__mmakefiles__StrB_35);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) ")\n");
          }
        }
        break;
    }
  }
}

MR_String MR_CALL 
libs__mmakefiles__silent_noop_action_0_f_0(void)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    return (MR_String) "\100:";
  }
}

MR_Word MR_CALL 
libs__mmakefiles__make_singleton_file_name_group_1_f_0(
  MR_String libs__mmakefiles__FileName_3)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Word libs__mmakefiles__HeadVar__2_2;
    MR_Word libs__mmakefiles__Var_5;

    {
      libs__mmakefiles__Var_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_5, 0) = ((MR_Box) (libs__mmakefiles__FileName_3));
      MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__mmakefiles__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, 1) = ((MR_Box) (libs__mmakefiles__Var_5));
    }
    return libs__mmakefiles__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__mmakefiles__make_file_name_group_2_f_0(
  MR_String libs__mmakefiles__GroupName_4,
  MR_Word libs__mmakefiles__FileNames_5)
{
  {
    MR_bool libs__mmakefiles__succeeded;
    MR_Word libs__mmakefiles__Groups_6;

    if ((libs__mmakefiles__FileNames_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__mmakefiles__Groups_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String libs__mmakefiles__HeadFileName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNames_5, (MR_Integer) 0)));
        MR_Word libs__mmakefiles__TailFileNames_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__FileNames_5, (MR_Integer) 1)));
        MR_Word libs__mmakefiles__Var_9;
        MR_Word libs__mmakefiles__Var_10;

        {
          libs__mmakefiles__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_10, 0) = ((MR_Box) (libs__mmakefiles__HeadFileName_7));
          MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_10, 1) = ((MR_Box) (libs__mmakefiles__TailFileNames_8));
        }
        {
          libs__mmakefiles__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_9, 0) = ((MR_Box) (libs__mmakefiles__GroupName_4));
          MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_9, 1) = ((MR_Box) (libs__mmakefiles__Var_10));
        }
        {
          libs__mmakefiles__Groups_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__mmakefiles__Groups_6, 0) = ((MR_Box) (libs__mmakefiles__Var_9));
          MR_hl_field(MR_mktag(1), libs__mmakefiles__Groups_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    return libs__mmakefiles__Groups_6;
  }
}

void MR_CALL 
libs__mmakefiles__gather_mmake_entries_6_p_0(
  MR_Word libs__mmakefiles__OutStream_7,
  MR_Word libs__mmakefiles__Entries_8,
  MR_Word libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12,
  MR_Word * libs__mmakefiles__STATE_VARIABLE_MmakeFile_13)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_105_101_115_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, (MR_Integer) 0, libs__mmakefiles__Entries_8);
    }
    *libs__mmakefiles__STATE_VARIABLE_MmakeFile_13 = libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12;
  }
}

void MR_CALL 
libs__mmakefiles__gather_mmake_entry_6_p_0(
  MR_Word libs__mmakefiles__OutStream_7,
  MR_Word libs__mmakefiles__Entry_8,
  MR_Word libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12,
  MR_Word * libs__mmakefiles__STATE_VARIABLE_MmakeFile_13)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, (MR_Integer) 0, libs__mmakefiles__Entry_8);
    }
    *libs__mmakefiles__STATE_VARIABLE_MmakeFile_13 = libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12;
  }
}

void MR_CALL 
libs__mmakefiles__gather_mmake_fragments_6_p_0(
  MR_Word libs__mmakefiles__OutStream_7,
  MR_Word libs__mmakefiles__Fragments_8,
  MR_Word libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12,
  MR_Word * libs__mmakefiles__STATE_VARIABLE_MmakeFile_13)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, (MR_Integer) 0, libs__mmakefiles__Fragments_8);
    }
    *libs__mmakefiles__STATE_VARIABLE_MmakeFile_13 = libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12;
  }
}

void MR_CALL 
libs__mmakefiles__gather_mmake_fragment_6_p_0(
  MR_Word libs__mmakefiles__OutStream_7,
  MR_Word libs__mmakefiles__Fragment_8,
  MR_Word libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12,
  MR_Word * libs__mmakefiles__STATE_VARIABLE_MmakeFile_13)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, (MR_Integer) 0, libs__mmakefiles__Fragment_8);
    }
    *libs__mmakefiles__STATE_VARIABLE_MmakeFile_13 = libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12;
  }
}

void MR_CALL 
libs__mmakefiles__end_mmakefile_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_Word libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_9)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_100_95_109_109_97_107_101_102_105_108_101_95_95_91_49_44_32_50_93_95_48_4_p_0();
    }
  }
}

void MR_CALL 
libs__mmakefiles__start_mmakefile_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_Word * libs__mmakefiles__STATE_VARIABLE_MmakeFile_9)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_95_109_109_97_107_101_102_105_108_101_95_95_91_49_93_95_48_4_p_0(libs__mmakefiles__STATE_VARIABLE_MmakeFile_9);
    }
  }
}

void mercury__libs__mmakefiles__init(void)
{
}

void mercury__libs__mmakefiles__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_maybe_comment_out_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_maybe_write_mmake_comments_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_action_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_condition_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_grade_component_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_mode_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmakefile_0);
}

void mercury__libs__mmakefiles__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__mmakefiles__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module libs.mmakefiles. */
