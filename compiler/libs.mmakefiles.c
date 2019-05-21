/*
** Automatically generated from `mmakefiles.m'
** by the Mercury compiler,
** version rotd-2017-07-18
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

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_0[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_0[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_0;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_1[1];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_1[1];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_1;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_2[2];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_2[2];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_2;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_3[2];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_3[2];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_3;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_4[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_4[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_5[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_6[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_6[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_7[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_7[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_7;

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_0[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_1[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_2[1];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_3[5];

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_entry_0[4];

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_entry_0[8];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_entry_0[8];

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

static MR_Word MR_CALL 
libs__mmakefiles__file_name_group_files_1_f_0(
  MR_Word libs__mmakefiles__FileNameGroup_3);

static void MR_CALL 
libs__mmakefiles__write_group_name_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__GroupName0_6);

static MR_String MR_CALL 
libs__mmakefiles__project_group_name_1_f_0(
  MR_Word libs__mmakefiles__HeadVar__1_1);

static void MR_CALL 
libs__mmakefiles__write_block_comment_line_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__Comment_6);

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

static MR_Word MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_110_101_95_111_114_95_109_111_114_101_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(
  MR_Word libs__mmakefiles__HeadVar__1_1);

static MR_Box MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0_1(
  MR_Box libs__mmakefiles__closure_arg,
  MR_Box libs__mmakefiles__wrapper_arg_1);

static MR_Word MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0(
  MR_Word libs__mmakefiles__FileNameGroups_3);

static void MR_CALL 
libs__mmakefiles__write_mmake_actions_4_p_0(
  MR_Word libs__mmakefiles__HeadVar__1_1,
  MR_Word libs__mmakefiles__HeadVar__2_2);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_String libs__mmakefiles__FileName_6);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_Word libs__mmakefiles__FileNameGroup_7,
  MR_Word libs__mmakefiles__FileNameGroups_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__FileName_7,
  MR_Word libs__mmakefiles__FileNames_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_horizontal_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_Word libs__mmakefiles__FileNameGroup_7,
  MR_Word libs__mmakefiles__FileNameGroups_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(
  MR_Word libs__mmakefiles__OutStream_6,
  MR_String libs__mmakefiles__FileName_7,
  MR_Word libs__mmakefiles__FileNames_8);

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

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_0[5] = {
  (MR_String) "msc_contents",
  (MR_String) "msc_module_name",
  (MR_String) "msc_source_file",
  (MR_String) "msc_version",
  (MR_String) "msc_full_arch"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_0 = {
  (MR_String) "mmake_start_comment",
  (MR_Integer) 5,
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

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_1[1] = {
  (MR_String) "mbc_comments"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_1 = {
  (MR_String) "mmake_block_comment",
  (MR_Integer) 1,
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
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_2[2] = {
  (MR_String) "mvd_var_name",
  (MR_String) "mvd_var_value"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_2 = {
  (MR_String) "mmake_var_defn",
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

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_3[2] = {
  (MR_String) "mvdl_var_name",
  (MR_String) "mvdl_var_value"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_3 = {
  (MR_String) "mmake_var_defn_list",
  (MR_Integer) 2,
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

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_4[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_4[5] = {
  (MR_String) "msr_rule_name",
  (MR_String) "msr_flags",
  (MR_String) "msr_targets",
  (MR_String) "msr_sources",
  (MR_String) "msr_actions"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4 = {
  (MR_String) "mmake_simple_rule",
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

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_5[5] = {
  (MR_String) "mfr_rule_name",
  (MR_String) "mfr_flags",
  (MR_String) "mfr_targets",
  (MR_String) "mfr_sources",
  (MR_String) "mfr_actions"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5 = {
  (MR_String) "mmake_flat_rule",
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

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_6[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_6[5] = {
  (MR_String) "mdr_rule_name",
  (MR_String) "mdr_flags",
  (MR_String) "mdr_targets",
  (MR_String) "mdr_sources",
  (MR_String) "mdr_actions"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6 = {
  (MR_String) "mmake_deep_rule",
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

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_7[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0,
  (MR_PseudoTypeInfo) &libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_7[5] = {
  (MR_String) "mgr_rule_name",
  (MR_String) "mgr_flags",
  (MR_String) "mgr_targets",
  (MR_String) "mgr_sources",
  (MR_String) "mgr_actions"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_7 = {
  (MR_String) "mmake_general_rule",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_7,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_7,
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

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_3[5] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_3,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_7
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
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_3
  }
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_entry_0[8] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_1,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_7,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_0,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_2,
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_3
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_entry_0[8] = {
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 7,
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
  (MR_Integer) 8,
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
                  MR_Word libs__mmakefiles__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    libs__mmakefiles____Compare____mmake_entry_0_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_65, libs__mmakefiles__ArgY1_5);
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
                  MR_Word libs__mmakefiles__ArgY1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__ArgY2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__ArgY3_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word libs__mmakefiles__Var_24;

                  {
                    libs__mmakefiles____Compare____mmake_condition_0_0(&libs__mmakefiles__Var_24, libs__mmakefiles__Var_61, libs__mmakefiles__ArgY1_19);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_24 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_24;
                  else
                    {
                      MR_Word libs__mmakefiles__Var_25;

                      {
                        libs__mmakefiles____Compare____mmake_entry_0_0(&libs__mmakefiles__Var_25, libs__mmakefiles__Var_60, libs__mmakefiles__ArgY2_21);
                      }
                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_25 == (MR_Integer) 0);
                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                      if (libs__mmakefiles__succeeded)
                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_25;
                      else
                        {
                          libs__mmakefiles____Compare____mmake_entry_0_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_59, libs__mmakefiles__ArgY3_23);
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
                  MR_Word libs__mmakefiles__ArgY1_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__ArgY2_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__ArgY3_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word libs__mmakefiles__Var_48;

                  {
                    libs__mmakefiles____Compare____mmake_condition_0_0(&libs__mmakefiles__Var_48, libs__mmakefiles__Var_64, libs__mmakefiles__ArgY1_43);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_48 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_48;
                  else
                    {
                      MR_Word libs__mmakefiles__Var_49;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[4], &libs__mmakefiles__Var_49, ((MR_Box) (libs__mmakefiles__Var_63)), ((MR_Box) (libs__mmakefiles__ArgY2_45)));
                      }
                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_49 == (MR_Integer) 0);
                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                      if (libs__mmakefiles__succeeded)
                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_49;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[4], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_62)), ((MR_Box) (libs__mmakefiles__ArgY3_47)));
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
            MR_Word libs__mmakefiles__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__ArgY1_4;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                {
                  libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(libs__mmakefiles__ArgX1_3, libs__mmakefiles__ArgY1_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__mmakefiles__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__ArgY1_6;
            MR_Word libs__mmakefiles__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word libs__mmakefiles__ArgY2_8;
            MR_Word libs__mmakefiles__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word libs__mmakefiles__ArgY3_10;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                {
                  libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_condition_0_0(libs__mmakefiles__ArgX1_5, libs__mmakefiles__ArgY1_6);
                }
                if (libs__mmakefiles__succeeded)
                  {
                    {
                      libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(libs__mmakefiles__ArgX2_7, libs__mmakefiles__ArgY2_8);
                    }
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(libs__mmakefiles__ArgX3_9, libs__mmakefiles__ArgY3_10);
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word libs__mmakefiles__TypeInfo_19_19;
            MR_Word libs__mmakefiles__TypeInfo_20_20;
            MR_Word libs__mmakefiles__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__ArgY1_12;
            MR_Word libs__mmakefiles__ArgX2_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word libs__mmakefiles__ArgY2_14;
            MR_Word libs__mmakefiles__ArgX3_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word libs__mmakefiles__ArgY3_16;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__ArgY2_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__ArgY3_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                {
                  libs__mmakefiles__succeeded = libs__mmakefiles____Unify____mmake_condition_0_0(libs__mmakefiles__ArgX1_11, libs__mmakefiles__ArgY1_12);
                }
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__TypeInfo_19_19 = (MR_Word) &libs__mmakefiles_scalar_common_1[4];
                    {
                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_19_19, ((MR_Box) (libs__mmakefiles__ArgX2_13)), ((MR_Box) (libs__mmakefiles__ArgY2_14)));
                    }
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__TypeInfo_20_20 = (MR_Word) &libs__mmakefiles_scalar_common_1[4];
                        {
                          libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_20_20, ((MR_Box) (libs__mmakefiles__ArgX3_15)), ((MR_Box) (libs__mmakefiles__ArgY3_16)));
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
        MR_String libs__mmakefiles__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
        MR_String libs__mmakefiles__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word libs__mmakefiles__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word libs__mmakefiles__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word libs__mmakefiles__Var_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_8, libs__mmakefiles__ArgX1_4, libs__mmakefiles__ArgY1_5);
        }
        libs__mmakefiles__succeeded = (libs__mmakefiles__Var_8 == (MR_Integer) 0);
        libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
        if (libs__mmakefiles__succeeded)
          *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[3], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__ArgX2_6)), ((MR_Box) (libs__mmakefiles__ArgY2_7)));
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
        MR_String libs__mmakefiles__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
        MR_String libs__mmakefiles__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word libs__mmakefiles__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word libs__mmakefiles__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

        libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_3, libs__mmakefiles__ArgY1_4) == 0);
        if (libs__mmakefiles__succeeded)
          {
            libs__mmakefiles__TypeInfo_9_9 = (MR_Word) &libs__mmakefiles_scalar_common_1[3];
            {
              libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_9_9, ((MR_Box) (libs__mmakefiles__ArgX2_5)), ((MR_Box) (libs__mmakefiles__ArgY2_6)));
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
    MR_Integer libs__mmakefiles__CastX_506 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;
    MR_Integer libs__mmakefiles__CastY_507 = (MR_Integer) libs__mmakefiles__HeadVar__3_3;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_506 == libs__mmakefiles__CastY_507);
    if (libs__mmakefiles__succeeded)
      *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String libs__mmakefiles__Var_559 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
            MR_String libs__mmakefiles__Var_560 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
            MR_String libs__mmakefiles__Var_561 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
            MR_String libs__mmakefiles__Var_562 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_563 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String libs__mmakefiles__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String libs__mmakefiles__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_String libs__mmakefiles__ArgY3_9 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                  MR_String libs__mmakefiles__ArgY4_11 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 3)));
                  MR_String libs__mmakefiles__ArgY5_13 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word libs__mmakefiles__Var_14;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_14, libs__mmakefiles__Var_563, libs__mmakefiles__ArgY1_5);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_14 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_14;
                  else
                    {
                      MR_Word libs__mmakefiles__Var_15;

                      {
                        mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_15, libs__mmakefiles__Var_562, libs__mmakefiles__ArgY2_7);
                      }
                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_15 == (MR_Integer) 0);
                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                      if (libs__mmakefiles__succeeded)
                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_15;
                      else
                        {
                          MR_Word libs__mmakefiles__Var_16;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_16, libs__mmakefiles__Var_561, libs__mmakefiles__ArgY3_9);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_16 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_16;
                          else
                            {
                              MR_Word libs__mmakefiles__Var_17;

                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_17, libs__mmakefiles__Var_560, libs__mmakefiles__ArgY4_11);
                              }
                              libs__mmakefiles__succeeded = (libs__mmakefiles__Var_17 == (MR_Integer) 0);
                              libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                              if (libs__mmakefiles__succeeded)
                                *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_17;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_559, libs__mmakefiles__ArgY5_13);
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
                  case (MR_Integer) 4:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__mmakefiles__Var_538 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word libs__mmakefiles__ArgY1_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_538)), ((MR_Box) (libs__mmakefiles__ArgY1_85)));
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
                  case (MR_Integer) 4:
                    *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String libs__mmakefiles__Var_564 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
            MR_String libs__mmakefiles__Var_565 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String libs__mmakefiles__ArgY1_127 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String libs__mmakefiles__ArgY2_129 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__Var_130;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_130, libs__mmakefiles__Var_565, libs__mmakefiles__ArgY1_127);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_130 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_130;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_564, libs__mmakefiles__ArgY2_129);
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
                  case (MR_Integer) 4:
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
                MR_Word libs__mmakefiles__Var_566 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_567 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_String libs__mmakefiles__ArgY1_178 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word libs__mmakefiles__ArgY2_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word libs__mmakefiles__Var_181;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_181, libs__mmakefiles__Var_567, libs__mmakefiles__ArgY1_178);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_181 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_181;
                          else
                            {
                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_566)), ((MR_Box) (libs__mmakefiles__ArgY2_180)));
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
                      case (MR_Integer) 4:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word libs__mmakefiles__Var_554 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__Var_555 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                MR_String libs__mmakefiles__Var_556 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_557 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_558 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_String libs__mmakefiles__ArgY1_241 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word libs__mmakefiles__ArgY2_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                          MR_String libs__mmakefiles__ArgY3_245 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word libs__mmakefiles__ArgY4_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word libs__mmakefiles__ArgY5_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word libs__mmakefiles__Var_250;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_250, libs__mmakefiles__Var_558, libs__mmakefiles__ArgY1_241);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_250 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_250;
                          else
                            {
                              MR_Word libs__mmakefiles__Var_251;
                              MR_Integer libs__mmakefiles__Var_574 = (MR_Integer) libs__mmakefiles__Var_557;
                              MR_Integer libs__mmakefiles__Var_575 = (MR_Integer) libs__mmakefiles__ArgY2_243;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&libs__mmakefiles__Var_251, libs__mmakefiles__Var_574, libs__mmakefiles__Var_575);
                              }
                              libs__mmakefiles__succeeded = (libs__mmakefiles__Var_251 == (MR_Integer) 0);
                              libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                              if (libs__mmakefiles__succeeded)
                                *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_251;
                              else
                                {
                                  MR_Word libs__mmakefiles__Var_252;

                                  {
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_252, libs__mmakefiles__Var_556, libs__mmakefiles__ArgY3_245);
                                  }
                                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_252 == (MR_Integer) 0);
                                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                  if (libs__mmakefiles__succeeded)
                                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_252;
                                  else
                                    {
                                      MR_Word libs__mmakefiles__Var_253;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], &libs__mmakefiles__Var_253, ((MR_Box) (libs__mmakefiles__Var_555)), ((MR_Box) (libs__mmakefiles__ArgY4_247)));
                                      }
                                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_253 == (MR_Integer) 0);
                                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                      if (libs__mmakefiles__succeeded)
                                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_253;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_554)), ((MR_Box) (libs__mmakefiles__ArgY5_249)));
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
                      case (MR_Integer) 4:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word libs__mmakefiles__Var_544 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__Var_545 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__Var_546 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_547 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_548 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_String libs__mmakefiles__ArgY1_325 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word libs__mmakefiles__ArgY2_327 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word libs__mmakefiles__ArgY3_329 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word libs__mmakefiles__ArgY4_331 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word libs__mmakefiles__ArgY5_333 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word libs__mmakefiles__Var_334;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_334, libs__mmakefiles__Var_548, libs__mmakefiles__ArgY1_325);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_334 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_334;
                          else
                            {
                              MR_Word libs__mmakefiles__Var_335;
                              MR_Integer libs__mmakefiles__Var_570 = (MR_Integer) libs__mmakefiles__Var_547;
                              MR_Integer libs__mmakefiles__Var_571 = (MR_Integer) libs__mmakefiles__ArgY2_327;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&libs__mmakefiles__Var_335, libs__mmakefiles__Var_570, libs__mmakefiles__Var_571);
                              }
                              libs__mmakefiles__succeeded = (libs__mmakefiles__Var_335 == (MR_Integer) 0);
                              libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                              if (libs__mmakefiles__succeeded)
                                *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_335;
                              else
                                {
                                  MR_Word libs__mmakefiles__Var_336;

                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[3], &libs__mmakefiles__Var_336, ((MR_Box) (libs__mmakefiles__Var_546)), ((MR_Box) (libs__mmakefiles__ArgY3_329)));
                                  }
                                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_336 == (MR_Integer) 0);
                                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                  if (libs__mmakefiles__succeeded)
                                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_336;
                                  else
                                    {
                                      MR_Word libs__mmakefiles__Var_337;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], &libs__mmakefiles__Var_337, ((MR_Box) (libs__mmakefiles__Var_545)), ((MR_Box) (libs__mmakefiles__ArgY4_331)));
                                      }
                                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_337 == (MR_Integer) 0);
                                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                      if (libs__mmakefiles__succeeded)
                                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_337;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_544)), ((MR_Box) (libs__mmakefiles__ArgY5_333)));
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
                      case (MR_Integer) 4:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word libs__mmakefiles__Var_539 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__Var_540 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                MR_String libs__mmakefiles__Var_541 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_542 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_543 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_String libs__mmakefiles__ArgY1_409 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word libs__mmakefiles__ArgY2_411 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                          MR_String libs__mmakefiles__ArgY3_413 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word libs__mmakefiles__ArgY4_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word libs__mmakefiles__ArgY5_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word libs__mmakefiles__Var_418;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_418, libs__mmakefiles__Var_543, libs__mmakefiles__ArgY1_409);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_418 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_418;
                          else
                            {
                              MR_Word libs__mmakefiles__Var_419;
                              MR_Integer libs__mmakefiles__Var_568 = (MR_Integer) libs__mmakefiles__Var_542;
                              MR_Integer libs__mmakefiles__Var_569 = (MR_Integer) libs__mmakefiles__ArgY2_411;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&libs__mmakefiles__Var_419, libs__mmakefiles__Var_568, libs__mmakefiles__Var_569);
                              }
                              libs__mmakefiles__succeeded = (libs__mmakefiles__Var_419 == (MR_Integer) 0);
                              libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                              if (libs__mmakefiles__succeeded)
                                *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_419;
                              else
                                {
                                  MR_Word libs__mmakefiles__Var_420;

                                  {
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_420, libs__mmakefiles__Var_541, libs__mmakefiles__ArgY3_413);
                                  }
                                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_420 == (MR_Integer) 0);
                                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                  if (libs__mmakefiles__succeeded)
                                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_420;
                                  else
                                    {
                                      MR_Word libs__mmakefiles__Var_421;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[2], &libs__mmakefiles__Var_421, ((MR_Box) (libs__mmakefiles__Var_540)), ((MR_Box) (libs__mmakefiles__ArgY4_415)));
                                      }
                                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_421 == (MR_Integer) 0);
                                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                      if (libs__mmakefiles__succeeded)
                                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_421;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_539)), ((MR_Box) (libs__mmakefiles__ArgY5_417)));
                                          }
                                        }
                                    }
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word libs__mmakefiles__Var_549 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__Var_550 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__Var_551 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__Var_552 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                MR_String libs__mmakefiles__Var_553 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));

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
                        *libs__mmakefiles__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_String libs__mmakefiles__ArgY1_493 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word libs__mmakefiles__ArgY2_495 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word libs__mmakefiles__ArgY3_497 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word libs__mmakefiles__ArgY4_499 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word libs__mmakefiles__ArgY5_501 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 5)));
                          MR_Word libs__mmakefiles__Var_502;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_502, libs__mmakefiles__Var_553, libs__mmakefiles__ArgY1_493);
                          }
                          libs__mmakefiles__succeeded = (libs__mmakefiles__Var_502 == (MR_Integer) 0);
                          libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                          if (libs__mmakefiles__succeeded)
                            *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_502;
                          else
                            {
                              MR_Word libs__mmakefiles__Var_503;
                              MR_Integer libs__mmakefiles__Var_572 = (MR_Integer) libs__mmakefiles__Var_552;
                              MR_Integer libs__mmakefiles__Var_573 = (MR_Integer) libs__mmakefiles__ArgY2_495;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&libs__mmakefiles__Var_503, libs__mmakefiles__Var_572, libs__mmakefiles__Var_573);
                              }
                              libs__mmakefiles__succeeded = (libs__mmakefiles__Var_503 == (MR_Integer) 0);
                              libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                              if (libs__mmakefiles__succeeded)
                                *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_503;
                              else
                                {
                                  MR_Word libs__mmakefiles__Var_504;

                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[1], &libs__mmakefiles__Var_504, ((MR_Box) (libs__mmakefiles__Var_551)), ((MR_Box) (libs__mmakefiles__ArgY3_497)));
                                  }
                                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_504 == (MR_Integer) 0);
                                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                  if (libs__mmakefiles__succeeded)
                                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_504;
                                  else
                                    {
                                      MR_Word libs__mmakefiles__Var_505;

                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[2], &libs__mmakefiles__Var_505, ((MR_Box) (libs__mmakefiles__Var_550)), ((MR_Box) (libs__mmakefiles__ArgY4_499)));
                                      }
                                      libs__mmakefiles__succeeded = (libs__mmakefiles__Var_505 == (MR_Integer) 0);
                                      libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                                      if (libs__mmakefiles__succeeded)
                                        *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_505;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &libs__mmakefiles_scalar_common_1[0], libs__mmakefiles__HeadVar__1_1, ((MR_Box) (libs__mmakefiles__Var_549)), ((MR_Box) (libs__mmakefiles__ArgY5_501)));
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
    MR_Integer libs__mmakefiles__CastX_63 = (MR_Integer) libs__mmakefiles__HeadVar__1_1;
    MR_Integer libs__mmakefiles__CastY_64 = (MR_Integer) libs__mmakefiles__HeadVar__2_2;

    libs__mmakefiles__succeeded = (libs__mmakefiles__CastX_63 == libs__mmakefiles__CastY_64);
    if (libs__mmakefiles__succeeded)
      libs__mmakefiles__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) libs__mmakefiles__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String libs__mmakefiles__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__mmakefiles__ArgY1_4;
            MR_String libs__mmakefiles__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_String libs__mmakefiles__ArgY2_6;
            MR_String libs__mmakefiles__ArgX3_7 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
            MR_String libs__mmakefiles__ArgY3_8;
            MR_String libs__mmakefiles__ArgX4_9 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 3)));
            MR_String libs__mmakefiles__ArgY4_10;
            MR_String libs__mmakefiles__ArgX5_11 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 4)));
            MR_String libs__mmakefiles__ArgY5_12;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__ArgY3_8 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                libs__mmakefiles__ArgY4_10 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                libs__mmakefiles__ArgY5_12 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_3, libs__mmakefiles__ArgY1_4) == 0);
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX2_5, libs__mmakefiles__ArgY2_6) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX3_7, libs__mmakefiles__ArgY3_8) == 0);
                        if (libs__mmakefiles__succeeded)
                          {
                            libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX4_9, libs__mmakefiles__ArgY4_10) == 0);
                            if (libs__mmakefiles__succeeded)
                              libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX5_11, libs__mmakefiles__ArgY5_12) == 0);
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__mmakefiles__TypeInfo_65_65;
            MR_Word libs__mmakefiles__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__mmakefiles__ArgY1_14;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__TypeInfo_65_65 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                {
                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_65_65, ((MR_Box) (libs__mmakefiles__ArgX1_13)), ((MR_Box) (libs__mmakefiles__ArgY1_14)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String libs__mmakefiles__ArgX1_15 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__mmakefiles__ArgY1_16;
            MR_String libs__mmakefiles__ArgX2_17 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_String libs__mmakefiles__ArgY2_18;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__ArgY1_16 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__ArgY2_18 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_15, libs__mmakefiles__ArgY1_16) == 0);
                if (libs__mmakefiles__succeeded)
                  libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX2_17, libs__mmakefiles__ArgY2_18) == 0);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word libs__mmakefiles__TypeInfo_76_76;
                MR_String libs__mmakefiles__ArgX1_19 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
                MR_String libs__mmakefiles__ArgY1_20;
                MR_Word libs__mmakefiles__ArgX2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word libs__mmakefiles__ArgY2_22;

                libs__mmakefiles__succeeded = ((((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__ArgY1_20 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                    libs__mmakefiles__ArgY2_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_19, libs__mmakefiles__ArgY1_20) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__TypeInfo_76_76 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                        {
                          libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_76_76, ((MR_Box) (libs__mmakefiles__ArgX2_21)), ((MR_Box) (libs__mmakefiles__ArgY2_22)));
                        }
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word libs__mmakefiles__TypeInfo_74_74;
                MR_Word libs__mmakefiles__TypeInfo_75_75;
                MR_String libs__mmakefiles__ArgX1_23 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
                MR_String libs__mmakefiles__ArgY1_24;
                MR_Word libs__mmakefiles__ArgX2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word libs__mmakefiles__ArgY2_26;
                MR_String libs__mmakefiles__ArgX3_27 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 3)));
                MR_String libs__mmakefiles__ArgY3_28;
                MR_Word libs__mmakefiles__ArgX4_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__ArgY4_30;
                MR_Word libs__mmakefiles__ArgX5_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__ArgY5_32;

                libs__mmakefiles__succeeded = ((((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__ArgY1_24 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                    libs__mmakefiles__ArgY2_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                    libs__mmakefiles__ArgY3_28 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                    libs__mmakefiles__ArgY4_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                    libs__mmakefiles__ArgY5_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_23, libs__mmakefiles__ArgY1_24) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = (libs__mmakefiles__ArgX2_25 == libs__mmakefiles__ArgY2_26);
                        if (libs__mmakefiles__succeeded)
                          {
                            libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX3_27, libs__mmakefiles__ArgY3_28) == 0);
                            if (libs__mmakefiles__succeeded)
                              {
                                libs__mmakefiles__TypeInfo_74_74 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                {
                                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_74_74, ((MR_Box) (libs__mmakefiles__ArgX4_29)), ((MR_Box) (libs__mmakefiles__ArgY4_30)));
                                }
                                if (libs__mmakefiles__succeeded)
                                  {
                                    libs__mmakefiles__TypeInfo_75_75 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                    {
                                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_75_75, ((MR_Box) (libs__mmakefiles__ArgX5_31)), ((MR_Box) (libs__mmakefiles__ArgY5_32)));
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
                MR_Word libs__mmakefiles__TypeInfo_68_68;
                MR_Word libs__mmakefiles__TypeInfo_69_69;
                MR_Word libs__mmakefiles__TypeInfo_70_70;
                MR_String libs__mmakefiles__ArgX1_33 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
                MR_String libs__mmakefiles__ArgY1_34;
                MR_Word libs__mmakefiles__ArgX2_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word libs__mmakefiles__ArgY2_36;
                MR_Word libs__mmakefiles__ArgX3_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__ArgY3_38;
                MR_Word libs__mmakefiles__ArgX4_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__ArgY4_40;
                MR_Word libs__mmakefiles__ArgX5_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__ArgY5_42;

                libs__mmakefiles__succeeded = ((((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__ArgY1_34 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                    libs__mmakefiles__ArgY2_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                    libs__mmakefiles__ArgY3_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                    libs__mmakefiles__ArgY4_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                    libs__mmakefiles__ArgY5_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_33, libs__mmakefiles__ArgY1_34) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = (libs__mmakefiles__ArgX2_35 == libs__mmakefiles__ArgY2_36);
                        if (libs__mmakefiles__succeeded)
                          {
                            libs__mmakefiles__TypeInfo_68_68 = (MR_Word) &libs__mmakefiles_scalar_common_1[3];
                            {
                              libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_68_68, ((MR_Box) (libs__mmakefiles__ArgX3_37)), ((MR_Box) (libs__mmakefiles__ArgY3_38)));
                            }
                            if (libs__mmakefiles__succeeded)
                              {
                                libs__mmakefiles__TypeInfo_69_69 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                {
                                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_69_69, ((MR_Box) (libs__mmakefiles__ArgX4_39)), ((MR_Box) (libs__mmakefiles__ArgY4_40)));
                                }
                                if (libs__mmakefiles__succeeded)
                                  {
                                    libs__mmakefiles__TypeInfo_70_70 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                    {
                                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_70_70, ((MR_Box) (libs__mmakefiles__ArgX5_41)), ((MR_Box) (libs__mmakefiles__ArgY5_42)));
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
                MR_Word libs__mmakefiles__TypeInfo_66_66;
                MR_Word libs__mmakefiles__TypeInfo_67_67;
                MR_String libs__mmakefiles__ArgX1_43 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
                MR_String libs__mmakefiles__ArgY1_44;
                MR_Word libs__mmakefiles__ArgX2_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word libs__mmakefiles__ArgY2_46;
                MR_String libs__mmakefiles__ArgX3_47 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 3)));
                MR_String libs__mmakefiles__ArgY3_48;
                MR_Word libs__mmakefiles__ArgX4_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__ArgY4_50;
                MR_Word libs__mmakefiles__ArgX5_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__ArgY5_52;

                libs__mmakefiles__succeeded = ((((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__ArgY1_44 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                    libs__mmakefiles__ArgY2_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                    libs__mmakefiles__ArgY3_48 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                    libs__mmakefiles__ArgY4_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                    libs__mmakefiles__ArgY5_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_43, libs__mmakefiles__ArgY1_44) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = (libs__mmakefiles__ArgX2_45 == libs__mmakefiles__ArgY2_46);
                        if (libs__mmakefiles__succeeded)
                          {
                            libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX3_47, libs__mmakefiles__ArgY3_48) == 0);
                            if (libs__mmakefiles__succeeded)
                              {
                                libs__mmakefiles__TypeInfo_66_66 = (MR_Word) &libs__mmakefiles_scalar_common_1[2];
                                {
                                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_66_66, ((MR_Box) (libs__mmakefiles__ArgX4_49)), ((MR_Box) (libs__mmakefiles__ArgY4_50)));
                                }
                                if (libs__mmakefiles__succeeded)
                                  {
                                    libs__mmakefiles__TypeInfo_67_67 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                    {
                                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_67_67, ((MR_Box) (libs__mmakefiles__ArgX5_51)), ((MR_Box) (libs__mmakefiles__ArgY5_52)));
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word libs__mmakefiles__TypeInfo_71_71;
                MR_Word libs__mmakefiles__TypeInfo_72_72;
                MR_Word libs__mmakefiles__TypeInfo_73_73;
                MR_String libs__mmakefiles__ArgX1_53 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
                MR_String libs__mmakefiles__ArgY1_54;
                MR_Word libs__mmakefiles__ArgX2_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word libs__mmakefiles__ArgY2_56;
                MR_Word libs__mmakefiles__ArgX3_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word libs__mmakefiles__ArgY3_58;
                MR_Word libs__mmakefiles__ArgX4_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 4)));
                MR_Word libs__mmakefiles__ArgY4_60;
                MR_Word libs__mmakefiles__ArgX5_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 5)));
                MR_Word libs__mmakefiles__ArgY5_62;

                libs__mmakefiles__succeeded = ((((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (libs__mmakefiles__succeeded)
                  {
                    libs__mmakefiles__ArgY1_54 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                    libs__mmakefiles__ArgY2_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 2)));
                    libs__mmakefiles__ArgY3_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 3)));
                    libs__mmakefiles__ArgY4_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 4)));
                    libs__mmakefiles__ArgY5_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 5)));
                    libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_53, libs__mmakefiles__ArgY1_54) == 0);
                    if (libs__mmakefiles__succeeded)
                      {
                        libs__mmakefiles__succeeded = (libs__mmakefiles__ArgX2_55 == libs__mmakefiles__ArgY2_56);
                        if (libs__mmakefiles__succeeded)
                          {
                            libs__mmakefiles__TypeInfo_71_71 = (MR_Word) &libs__mmakefiles_scalar_common_1[1];
                            {
                              libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_71_71, ((MR_Box) (libs__mmakefiles__ArgX3_57)), ((MR_Box) (libs__mmakefiles__ArgY3_58)));
                            }
                            if (libs__mmakefiles__succeeded)
                              {
                                libs__mmakefiles__TypeInfo_72_72 = (MR_Word) &libs__mmakefiles_scalar_common_1[2];
                                {
                                  libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_72_72, ((MR_Box) (libs__mmakefiles__ArgX4_59)), ((MR_Box) (libs__mmakefiles__ArgY4_60)));
                                }
                                if (libs__mmakefiles__succeeded)
                                  {
                                    libs__mmakefiles__TypeInfo_73_73 = (MR_Word) &libs__mmakefiles_scalar_common_1[0];
                                    {
                                      libs__mmakefiles__succeeded = mercury__builtin__unify_2_p_0(libs__mmakefiles__TypeInfo_73_73, ((MR_Box) (libs__mmakefiles__ArgX5_61)), ((MR_Box) (libs__mmakefiles__ArgY5_62)));
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
                  MR_String libs__mmakefiles__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_43, libs__mmakefiles__ArgY1_5);
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
                  MR_String libs__mmakefiles__ArgY1_16 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String libs__mmakefiles__ArgY2_18 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__Var_19;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_19, libs__mmakefiles__Var_45, libs__mmakefiles__ArgY1_16);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_19 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_19;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_44, libs__mmakefiles__ArgY2_18);
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
                  MR_String libs__mmakefiles__ArgY1_32 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String libs__mmakefiles__ArgY2_34 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word libs__mmakefiles__Var_35;

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(&libs__mmakefiles__Var_35, libs__mmakefiles__Var_47, libs__mmakefiles__ArgY1_32);
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_35 == (MR_Integer) 0);
                  libs__mmakefiles__succeeded = !(libs__mmakefiles__succeeded);
                  if (libs__mmakefiles__succeeded)
                    *libs__mmakefiles__HeadVar__1_1 = libs__mmakefiles__Var_35;
                  else
                    {
                      mercury__private_builtin__builtin_compare_string_3_p_0(libs__mmakefiles__HeadVar__1_1, libs__mmakefiles__Var_46, libs__mmakefiles__ArgY2_34);
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
            MR_String libs__mmakefiles__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__mmakefiles__ArgY1_4;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_3, libs__mmakefiles__ArgY1_4) == 0);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String libs__mmakefiles__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__mmakefiles__ArgY1_6;
            MR_String libs__mmakefiles__ArgX2_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_String libs__mmakefiles__ArgY2_8;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__ArgY2_8 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_5, libs__mmakefiles__ArgY1_6) == 0);
                if (libs__mmakefiles__succeeded)
                  libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX2_7, libs__mmakefiles__ArgY2_8) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String libs__mmakefiles__ArgX1_9 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__mmakefiles__ArgY1_10;
            MR_String libs__mmakefiles__ArgX2_11 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__1_1, (MR_Integer) 1)));
            MR_String libs__mmakefiles__ArgY2_12;

            libs__mmakefiles__succeeded = ((MR_tag((MR_Word) libs__mmakefiles__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (libs__mmakefiles__succeeded)
              {
                libs__mmakefiles__ArgY1_10 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 0)));
                libs__mmakefiles__ArgY2_12 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__HeadVar__2_2, (MR_Integer) 1)));
                libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX1_9, libs__mmakefiles__ArgY1_10) == 0);
                if (libs__mmakefiles__succeeded)
                  libs__mmakefiles__succeeded = (strcmp(libs__mmakefiles__ArgX2_11, libs__mmakefiles__ArgY2_12) == 0);
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
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\nendif # ifeq(x,y)\n\n");
    }
    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_105_101_115_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, (MR_Integer) 1, libs__mmakefiles__Entries_8);
    }
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "ifeq (x,y)\n\n");
    }
    *libs__mmakefiles__STATE_VARIABLE_MmakeFile_13 = libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12;
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
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\nendif # ifeq(x,y)\n\n");
    }
    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, (MR_Integer) 1, libs__mmakefiles__Entry_8);
    }
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "ifeq (x,y)\n\n");
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
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\nendif # ifeq(x,y)\n\n");
    }
    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, (MR_Integer) 1, libs__mmakefiles__Fragments_8);
    }
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "ifeq (x,y)\n\n");
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
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\nendif # ifeq(x,y)\n\n");
    }
    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_51_93_95_48_6_p_0(libs__mmakefiles__OutStream_7, (MR_Integer) 1, libs__mmakefiles__Fragment_8);
    }
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "ifeq (x,y)\n\n");
    }
    *libs__mmakefiles__STATE_VARIABLE_MmakeFile_13 = libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_12;
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
          MR_String libs__mmakefiles__Contents_12 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 0)));
          MR_String libs__mmakefiles__ModuleName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
          MR_String libs__mmakefiles__SourceFile_14 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
          MR_String libs__mmakefiles__Version_15 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
          MR_String libs__mmakefiles__FullArch_16 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));

          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "# vim: ts=8 sw=8 noexpandtab ft=make\n\n");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "# Automatically generated ");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Contents_12);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " for\n");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "# module \140");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__ModuleName_13);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\' in source file \140");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__SourceFile_14);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\'.\n");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "# Generated by Mercury compiler version ");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Version_15);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\n");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "# configured for ");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__FullArch_16);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) ".\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__mmakefiles__CommentLines_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 0)));
          MR_Word libs__mmakefiles__Var_142;
          MR_Box libs__mmakefiles__conv0_STATE_VARIABLE_IO_166_166;

          {
            libs__mmakefiles__Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_142, 0) = ((MR_Box) (&libs__mmakefiles_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_142, 1) = ((MR_Box) (libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_51_93_95_48_6_p_0_1));
            MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_142, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_142, 3) = ((MR_Box) (libs__mmakefiles__OutStream_7));
          }
          {
            mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, libs__mmakefiles__Var_142, libs__mmakefiles__CommentLines_17, ((MR_Box) ((MR_Integer) 0)), &libs__mmakefiles__conv0_STATE_VARIABLE_IO_166_166);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String libs__mmakefiles__VarName_18 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 0)));
          MR_String libs__mmakefiles__Value_19 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));

          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__VarName_18);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " = ");
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Value_19);
          }
          {
            mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word libs__mmakefiles__Values_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              MR_String libs__mmakefiles__VarName_172 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));

              if ((libs__mmakefiles__Values_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__VarName_172);
                  }
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " =\n");
                  }
                }
              else
                {
                  MR_String libs__mmakefiles__HeadValue_21 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__Values_20, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__TailValues_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__Values_20, (MR_Integer) 1)));

                  if ((libs__mmakefiles__TailValues_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__VarName_172);
                      }
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " = ");
                      }
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadValue_21);
                      }
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\n");
                      }
                    }
                  else
                    {
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__VarName_172);
                      }
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " = \\\n");
                      }
                      {
                        libs__mmakefiles__write_mmake_var_values_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadValue_21, libs__mmakefiles__TailValues_22);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String libs__mmakefiles__TargetFile_33;
              MR_Word libs__mmakefiles__Var_99;
              MR_String libs__mmakefiles__RuleName_250 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              MR_Word libs__mmakefiles__IsPhony_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              MR_Word libs__mmakefiles__SourceFiles_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              MR_Word libs__mmakefiles__Actions_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              MR_String libs__mmakefiles__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              MR_String libs__mmakefiles__Var_31;
              MR_Word libs__mmakefiles__Var_32;
              MR_Word libs__mmakefiles__Var_34;
              MR_Word libs__mmakefiles__Var_35;

              {
                libs__mmakefiles__write_rule_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__RuleName_250);
              }
              libs__mmakefiles__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__TargetFile_33 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              {
                libs__mmakefiles__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_99, 0) = ((MR_Box) (libs__mmakefiles__TargetFile_33));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                libs__mmakefiles__maybe_write_phony_rule_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__IsPhony_251, libs__mmakefiles__Var_99);
              }
              {
                libs__mmakefiles__write_mmake_file_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__TargetFile_33);
              }
              if ((libs__mmakefiles__SourceFiles_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " :");
                  }
                }
              else
                {
                  MR_String libs__mmakefiles__HeadSourceFile_227 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceFiles_252, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__TailSourceFiles_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceFiles_252, (MR_Integer) 1)));
                  MR_Integer libs__mmakefiles__Var_213;
                  MR_Integer libs__mmakefiles__Var_214;
                  MR_Integer libs__mmakefiles__Var_216;

                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " : ");
                  }
                  {
                    libs__mmakefiles__Var_216 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__mmakefiles__TailSourceFiles_228);
                  }
                  libs__mmakefiles__Var_213 = ((MR_Integer) 1 + libs__mmakefiles__Var_216);
                  {
                    libs__mmakefiles__Var_214 = libs__mmakefiles__max_horizontal_0_f_0();
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_213 > libs__mmakefiles__Var_214);
                  if (libs__mmakefiles__succeeded)
                    {
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\\\n");
                      }
                      {
                        libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceFile_227, libs__mmakefiles__TailSourceFiles_228);
                      }
                    }
                  else
                    {
                      libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceFile_227, libs__mmakefiles__TailSourceFiles_228);
                    }
                }
              {
                mercury__io__nl_3_p_0(libs__mmakefiles__OutStream_7);
              }
              {
                libs__mmakefiles__write_mmake_actions_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Actions_253);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String libs__mmakefiles__RuleName_25 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              MR_Word libs__mmakefiles__IsPhony_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              MR_Word libs__mmakefiles__SourceFiles_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              MR_Word libs__mmakefiles__Actions_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              MR_String libs__mmakefiles__HeadTargetFile_38;
              MR_Word libs__mmakefiles__TailTargetFiles_39;
              MR_Word libs__mmakefiles__Var_95;
              MR_Word libs__mmakefiles__Var_96;
              MR_Word libs__mmakefiles__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              MR_String libs__mmakefiles__Var_36;
              MR_Word libs__mmakefiles__Var_37;
              MR_Word libs__mmakefiles__Var_40;
              MR_Word libs__mmakefiles__Var_41;

              {
                libs__mmakefiles__write_rule_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__RuleName_25);
              }
              libs__mmakefiles__Var_36 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              libs__mmakefiles__HeadTargetFile_38 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_95, (MR_Integer) 0)));
              libs__mmakefiles__TailTargetFiles_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__Var_95, (MR_Integer) 1)));
              {
                libs__mmakefiles__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_96, 0) = ((MR_Box) (libs__mmakefiles__HeadTargetFile_38));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_96, 1) = ((MR_Box) (libs__mmakefiles__TailTargetFiles_39));
              }
              {
                libs__mmakefiles__maybe_write_phony_rule_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__IsPhony_26, libs__mmakefiles__Var_96);
              }
              {
                libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadTargetFile_38, libs__mmakefiles__TailTargetFiles_39);
              }
              if ((libs__mmakefiles__SourceFiles_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " :");
                  }
                }
              else
                {
                  MR_String libs__mmakefiles__HeadSourceFile_42 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceFiles_28, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__TailSourceFiles_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceFiles_28, (MR_Integer) 1)));
                  MR_Integer libs__mmakefiles__Var_105;
                  MR_Integer libs__mmakefiles__Var_106;
                  MR_Integer libs__mmakefiles__Var_108;

                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " : ");
                  }
                  {
                    libs__mmakefiles__Var_108 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__mmakefiles__TailSourceFiles_43);
                  }
                  libs__mmakefiles__Var_105 = ((MR_Integer) 1 + libs__mmakefiles__Var_108);
                  {
                    libs__mmakefiles__Var_106 = libs__mmakefiles__max_horizontal_0_f_0();
                  }
                  libs__mmakefiles__succeeded = (libs__mmakefiles__Var_105 > libs__mmakefiles__Var_106);
                  if (libs__mmakefiles__succeeded)
                    {
                      {
                        mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) "\\\n");
                      }
                      {
                        libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceFile_42, libs__mmakefiles__TailSourceFiles_43);
                      }
                    }
                  else
                    {
                      libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceFile_42, libs__mmakefiles__TailSourceFiles_43);
                    }
                }
              {
                mercury__io__nl_3_p_0(libs__mmakefiles__OutStream_7);
              }
              {
                libs__mmakefiles__write_mmake_actions_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Actions_29);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word libs__mmakefiles__SourceGroups_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              MR_Word libs__mmakefiles__Var_83;
              MR_String libs__mmakefiles__TargetFile_173;
              MR_String libs__mmakefiles__RuleName_175 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              MR_Word libs__mmakefiles__IsPhony_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              MR_Word libs__mmakefiles__Actions_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              MR_String libs__mmakefiles__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              MR_String libs__mmakefiles__Var_57;
              MR_Word libs__mmakefiles__Var_58;
              MR_Word libs__mmakefiles__Var_59;
              MR_Word libs__mmakefiles__Var_60;

              {
                libs__mmakefiles__write_rule_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__RuleName_175);
              }
              {
                libs__mmakefiles__maybe_write_group_names_5_p_0(libs__mmakefiles__OutStream_7, (MR_String) "source", libs__mmakefiles__SourceGroups_45);
              }
              libs__mmakefiles__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__TargetFile_173 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              {
                libs__mmakefiles__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_83, 0) = ((MR_Box) (libs__mmakefiles__TargetFile_173));
                MR_hl_field(MR_mktag(1), libs__mmakefiles__Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                libs__mmakefiles__maybe_write_phony_rule_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__IsPhony_176, libs__mmakefiles__Var_83);
              }
              {
                libs__mmakefiles__write_mmake_file_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__TargetFile_173);
              }
              if ((libs__mmakefiles__SourceGroups_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " :");
                  }
                }
              else
                {
                  MR_Word libs__mmakefiles__HeadSourceGroup_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceGroups_45, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__TailSourceGroups_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceGroups_45, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " : \\\n");
                  }
                  {
                    libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceGroup_68, libs__mmakefiles__TailSourceGroups_69);
                  }
                }
              {
                mercury__io__nl_3_p_0(libs__mmakefiles__OutStream_7);
              }
              {
                libs__mmakefiles__write_mmake_actions_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Actions_177);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word libs__mmakefiles__TargetGroups0_54;
              MR_Word libs__mmakefiles__TargetGroups_63;
              MR_Word libs__mmakefiles__HeadTargetGroup_66;
              MR_Word libs__mmakefiles__TailTargetGroups_67;
              MR_Word libs__mmakefiles__Var_76;
              MR_Word libs__mmakefiles__Var_80;
              MR_Word libs__mmakefiles__SourceGroups_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              MR_String libs__mmakefiles__RuleName_209 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              MR_Word libs__mmakefiles__IsPhony_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              MR_Word libs__mmakefiles__Actions_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              MR_Word libs__mmakefiles__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              MR_String libs__mmakefiles__Var_52;
              MR_Word libs__mmakefiles__Var_53;
              MR_Word libs__mmakefiles__Var_55;
              MR_Word libs__mmakefiles__Var_56;
              MR_String libs__mmakefiles__Var_61;
              MR_Word libs__mmakefiles__Var_62;
              MR_Word libs__mmakefiles__Var_64;
              MR_Word libs__mmakefiles__Var_65;

              {
                libs__mmakefiles__write_rule_name_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__RuleName_209);
              }
              libs__mmakefiles__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__TargetGroups0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              {
                libs__mmakefiles__Var_76 = libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_110_101_95_111_114_95_109_111_114_101_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(libs__mmakefiles__TargetGroups0_54);
              }
              {
                libs__mmakefiles__maybe_write_group_names_5_p_0(libs__mmakefiles__OutStream_7, (MR_String) "target", libs__mmakefiles__Var_76);
              }
              {
                libs__mmakefiles__maybe_write_group_names_5_p_0(libs__mmakefiles__OutStream_7, (MR_String) "source", libs__mmakefiles__SourceGroups_196);
              }
              libs__mmakefiles__Var_61 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 1)));
              libs__mmakefiles__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 2)));
              libs__mmakefiles__TargetGroups_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 3)));
              libs__mmakefiles__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 4)));
              libs__mmakefiles__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__mmakefiles__MmakeEntry_10, (MR_Integer) 5)));
              {
                libs__mmakefiles__Var_80 = libs__mmakefiles__file_name_groups_files_1_f_0(libs__mmakefiles__TargetGroups_63);
              }
              {
                libs__mmakefiles__maybe_write_phony_rule_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__IsPhony_210, libs__mmakefiles__Var_80);
              }
              libs__mmakefiles__HeadTargetGroup_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__TargetGroups_63, (MR_Integer) 0)));
              libs__mmakefiles__TailTargetGroups_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__mmakefiles__TargetGroups_63, (MR_Integer) 1)));
              {
                libs__mmakefiles__write_mmake_file_name_groups_horizontal_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadTargetGroup_66, libs__mmakefiles__TailTargetGroups_67);
              }
              if ((libs__mmakefiles__SourceGroups_196 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " :");
                  }
                }
              else
                {
                  MR_Word libs__mmakefiles__HeadSourceGroup_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceGroups_196, (MR_Integer) 0)));
                  MR_Word libs__mmakefiles__TailSourceGroups_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__mmakefiles__SourceGroups_196, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_7, (MR_String) " : \\\n");
                  }
                  {
                    libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__HeadSourceGroup_187, libs__mmakefiles__TailSourceGroups_188);
                  }
                }
              {
                mercury__io__nl_3_p_0(libs__mmakefiles__OutStream_7);
              }
              {
                libs__mmakefiles__write_mmake_actions_4_p_0(libs__mmakefiles__OutStream_7, libs__mmakefiles__Actions_211);
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

void MR_CALL 
libs__mmakefiles__end_mmakefile_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5,
  MR_Word libs__mmakefiles__STATE_VARIABLE_MmakeFile_0_9)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_100_95_109_109_97_107_101_102_105_108_101_95_95_91_50_93_95_48_4_p_0(libs__mmakefiles__OutStream_5);
    }
  }
}

void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_100_95_109_109_97_107_101_102_105_108_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word libs__mmakefiles__OutStream_5)
{
  {
    MR_bool libs__mmakefiles__succeeded;

    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "\nendif # ifeq(x,y)\n\n");
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
      *libs__mmakefiles__STATE_VARIABLE_MmakeFile_9 = mercury__cord__init_0_f_0((MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0);
    }
    {
      mercury__io__write_string_4_p_0(libs__mmakefiles__OutStream_5, (MR_String) "ifeq (x,y)\n\n");
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
