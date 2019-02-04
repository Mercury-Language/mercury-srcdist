/*
** Automatically generated from `mmakefiles.m'
** by the Mercury compiler,
** version rotd-2019-01-29
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


// :- module libs.mmakefiles.
// :- implementation.

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

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_4[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_5[5];

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_5[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_6[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_6[5];

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_6[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_7[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_7[5];

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_7[5];

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

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__cord__ti_cord_1libs__mmakefiles__type_ctor_info_mmake_fragment_0;

static void MR_CALL 
libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
libs__mmakefiles__file_name_group_files_1_f_0(
  MR_Word FileNameGroup_3);

static void MR_CALL 
libs__mmakefiles__write_group_name_4_p_0(
  MR_Word OutStream_5,
  MR_String GroupName0_6);

static MR_String MR_CALL 
libs__mmakefiles__project_group_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
libs__mmakefiles__write_block_comment_line_4_p_0(
  MR_Word OutStream_5,
  MR_String Comment_6);

static void MR_CALL 
libs__mmakefiles__write_mmake_fragment_5_p_0(
  MR_Word OutStream_6,
  MR_Word WriteComments_7,
  MR_Word MmakeFragment_8);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_50_93_95_48_5_p_0(
  MR_Word OutStream_6,
  MR_Word MmakeFragment_8);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_50_93_95_48_5_p_0(
  MR_Word OutStream_6,
  MR_Word MmakeEntry_8);

static MR_Word MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_110_101_95_111_114_95_109_111_114_101_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0(
  MR_Word FileNameGroups_3);

static void MR_CALL 
libs__mmakefiles__write_mmake_actions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_4_p_0(
  MR_Word OutStream_5,
  MR_String FileName_6);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(
  MR_Word OutStream_6,
  MR_Word FileNameGroup_7,
  MR_Word FileNameGroups_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(
  MR_Word OutStream_6,
  MR_String FileName_7,
  MR_Word FileNames_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_horizontal_5_p_0(
  MR_Word OutStream_6,
  MR_Word FileNameGroup_7,
  MR_Word FileNameGroups_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(
  MR_Word OutStream_6,
  MR_String FileName_7,
  MR_Word FileNames_8);

static void MR_CALL 
libs__mmakefiles__write_rule_name_4_p_0(
  MR_Word OutStream_5,
  MR_String RuleName_6);

static void MR_CALL 
libs__mmakefiles__maybe_write_phony_rule_5_p_0(
  MR_Word OutStream_6,
  MR_Word IsPhony_7,
  MR_Word FileNames_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_var_values_5_p_0(
  MR_Word OutStream_6,
  MR_String HeadValue_7,
  MR_Word TailValues_8);

static MR_Integer MR_CALL 
libs__mmakefiles__max_horizontal_0_f_0(void);

static void MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0(
  MR_Word OutStream_6,
  MR_String TargetOrSource_7,
  MR_Word Groups_8);

static void MR_CALL 
libs__mmakefiles__write_mmake_condition_4_p_0(
  MR_Word OutStream_5,
  MR_Word Cond_6);

static MR_Word MR_CALL 
libs__mmakefiles__mmake_entry_to_fragment_1_f_0(
  MR_Word Entry_3);

static void MR_CALL 
libs__mmakefiles__end_mmakefile_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
libs__mmakefiles__add_mmake_entries_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____is_mmake_rule_phony_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____is_mmake_rule_phony_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_condition_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_condition_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_fragment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_fragment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_grade_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmake_grade_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmakefile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____mmakefile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__mmakefiles_scalar_common_1[6][2];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_2[3][5];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_3[3][3];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_4[1][8];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_5[1][7];




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

static /* final */ const MR_Box libs__mmakefiles_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0)),
    ((MR_Box) (&libs__mmakefiles__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_2[0])),
    ((MR_Box) (libs__mmakefiles__add_mmake_entries_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_2[1])),
    ((MR_Box) (libs__mmakefiles__maybe_write_group_names_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_2[2])),
    ((MR_Box) (libs__mmakefiles__file_name_groups_files_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_maybe_write_mmake_comments_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_0 = {
  (MR_String) "mmake_rule_is_not_phony",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_1 = {
  (MR_String) "mmake_rule_is_phony",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__mmakefiles____Unify____is_mmake_rule_phony_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____is_mmake_rule_phony_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "is_mmake_rule_phony",
  {     libs__mmakefiles__libs__mmakefiles__enum_name_ordered_is_mmake_rule_phony_0 },
  {     libs__mmakefiles__libs__mmakefiles__enum_value_ordered_is_mmake_rule_phony_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_is_mmake_rule_phony_0
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_0 = {
  (MR_String) "do_not_write_mmake_comments",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_write_mmake_comments_0_1 = {
  (MR_String) "write_mmake_comments",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "maybe_write_mmake_comments",
  {     libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_write_mmake_comments_0 },
  {     libs__mmakefiles__libs__mmakefiles__enum_value_ordered_maybe_write_mmake_comments_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_write_mmake_comments_0
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_action_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_action_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_action_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_action",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_0 = {
  (MR_String) "mmake_cond_grade_has_component",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_1 = {
  (MR_String) "mmake_cond_strings_equal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_2 = {
  (MR_String) "mmake_cond_strings_not_equal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_condition_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_condition_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_condition",
  {     libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_condition_0 },
  {     libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_condition_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_condition_0
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_0,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_1[1] = {
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_1[1] = {
  (MR_String) "mbc_comments"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_1 = {
  (MR_String) "mmake_block_comment",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_1,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_2[2] = {
  (MR_String) "mvd_var_name",
  (MR_String) "mvd_var_value"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_2 = {
  (MR_String) "mmake_var_defn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_2,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_3[2] = {
  (MR_String) "mvdl_var_name",
  (MR_String) "mvdl_var_value"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_3 = {
  (MR_String) "mmake_var_defn_list",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_3,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_4[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_4[5] = {
  (MR_String) "msr_rule_name",
  (MR_String) "msr_flags",
  (MR_String) "msr_targets",
  (MR_String) "msr_sources",
  (MR_String) "msr_actions"
};

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_4[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_4 = {
  (MR_String) "mmake_simple_rule",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_4,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_4,
  libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_5[5] = {
  (MR_String) "mfr_rule_name",
  (MR_String) "mfr_flags",
  (MR_String) "mfr_targets",
  (MR_String) "mfr_sources",
  (MR_String) "mfr_actions"
};

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_5[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5 = {
  (MR_String) "mmake_flat_rule",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_5,
  libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0)
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_6[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_6[5] = {
  (MR_String) "mdr_rule_name",
  (MR_String) "mdr_flags",
  (MR_String) "mdr_targets",
  (MR_String) "mdr_sources",
  (MR_String) "mdr_actions"
};

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_6[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6 = {
  (MR_String) "mmake_deep_rule",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_6,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_6,
  libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0)
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_7[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_7[5] = {
  (MR_String) "mgr_rule_name",
  (MR_String) "mgr_flags",
  (MR_String) "mgr_targets",
  (MR_String) "mgr_sources",
  (MR_String) "mgr_actions"
};

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_7[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_7 = {
  (MR_String) "mmake_general_rule",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_7,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_7,
  libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(5),
    MR_SECTAG_REMOTE_FULL_WORD,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_entry_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_entry_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_entry",
  {     libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_entry_0 },
  {     libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_entry_0 },
  (MR_Integer) 8,
  UINT16_C(4),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_entry_0
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_file_name_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_file_name_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_file_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_file_name_group_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_one_or_more_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_file_name_group_0_0[2] = {
  (MR_String) "fng_group_name",
  (MR_String) "fng_file_names"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_file_name_group_0_0 = {
  (MR_String) "mmake_file_name_group",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_file_name_group_0_0,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_file_name_group_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_file_name_group_0_0[1] = {
  &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_file_name_group_0_0
};

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_file_name_group_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_file_name_group_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_file_name_group_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_file_name_group_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_file_name_group",
  {     libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_file_name_group_0 },
  {     libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_file_name_group_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_file_name_group_0
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_0[1] = {
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_0 = {
  (MR_String) "mmf_entry",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_1[3] = {
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_condition_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_1[3] = {
  (MR_String) "mmfce_test",
  (MR_String) "mmfce_if_true",
  (MR_String) "mmfce_if_false"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_1 = {
  (MR_String) "mmf_conditional_entry",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_1,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_fragment_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0)
  }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_2[3] = {
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_condition_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_fragment_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_fragment_0)
};

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_2[3] = {
  (MR_String) "mmfcfs_test",
  (MR_String) "mmfcfs_if_true",
  (MR_String) "mmfcfs_if_false"
};

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_2 = {
  (MR_String) "mmf_conditional_fragments",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_2,
  libs__mmakefiles__libs__mmakefiles__field_names_mmake_fragment_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_fragment_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_fragment_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_fragment",
  {     libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_fragment_0 },
  {     libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_fragment_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_fragment_0
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_grade_component_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_grade_component_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_grade_component_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_grade_component",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__cord__ti_cord_1libs__mmakefiles__type_ctor_info_mmake_fragment_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0)
  }
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmakefile_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmakefile_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmakefile_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmakefile",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__mmakefiles__cord__ti_cord_1libs__mmakefiles__type_ctor_info_mmake_fragment_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

void MR_CALL 
libs__mmakefiles____Compare____mmakefile_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmakefile_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_grade_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_grade_component_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_fragment_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_50 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_51 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_50 == CastY_51);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  libs__mmakefiles____Compare____mmake_entry_0_0(HeadVar__1_1, Var_65, ArgY1_5);
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
            MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_20;

                  libs__mmakefiles____Compare____mmake_condition_0_0(&SubResult1_20, Var_61, ArgY1_19);
                  succeeded = (SubResult1_20 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_20;
                  else
                  {
                    MR_Word SubResult2_23;

                    libs__mmakefiles____Compare____mmake_entry_0_0(&SubResult2_23, Var_60, ArgY2_22);
                    succeeded = (SubResult2_23 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_23;
                    else
                      libs__mmakefiles____Compare____mmake_entry_0_0(HeadVar__1_1, Var_59, ArgY3_25);
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
            MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_44;

                  libs__mmakefiles____Compare____mmake_condition_0_0(&SubResult1_44, Var_64, ArgY1_43);
                  succeeded = (SubResult1_44 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_44;
                  else
                  {
                    MR_Word SubResult2_47;

                    mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[4]), &SubResult2_47, ((MR_Box) (Var_63)), ((MR_Box) (ArgY2_46)));
                    succeeded = (SubResult2_47 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_47;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_62)), ((MR_Box) (ArgY3_49)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = libs__mmakefiles____Unify____mmake_condition_0_0(ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(ArgX2_7, ArgY2_8);
                if (succeeded)
                  succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(ArgX3_9, ArgY3_10);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_19_19;
            MR_Word TypeInfo_20_20;
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;
            MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = libs__mmakefiles____Unify____mmake_condition_0_0(ArgX1_11, ArgY1_12);
              if (succeeded)
              {
                TypeInfo_19_19 = (MR_Word) (&libs__mmakefiles_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
                if (succeeded)
                {
                  TypeInfo_20_20 = (MR_Word) (&libs__mmakefiles_scalar_common_1[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX3_15)), ((MR_Box) (ArgY3_16)));
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
libs__mmakefiles____Compare____mmake_file_name_group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&libs__mmakefiles_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_506 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_507 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_506 == CastY_507);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_559 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
            MR_String Var_560 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
            MR_String Var_561 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            MR_String Var_562 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_String Var_563 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                  MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
                  MR_String ArgY5_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
                  MR_Word SubResult1_6;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_563, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    MR_Word SubResult2_9;

                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, Var_562, ArgY2_8);
                    succeeded = (SubResult2_9 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_9;
                    else
                    {
                      MR_Word SubResult3_12;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, Var_561, ArgY3_11);
                      succeeded = (SubResult3_12 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_12;
                      else
                      {
                        MR_Word SubResult4_15;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_15, Var_560, ArgY4_14);
                        succeeded = (SubResult4_15 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult4_15;
                        else
                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_559, ArgY5_17);
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_538 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_538)), ((MR_Box) (ArgY1_85)));
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_564 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_String Var_565 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_127 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_130 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_128;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_128, Var_565, ArgY1_127);
                  succeeded = (SubResult1_128 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_128;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_564, ArgY2_130);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_566 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_String Var_567 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_178 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_179;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_179, Var_567, ArgY1_178);
                          succeeded = (SubResult1_179 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_179;
                          else
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_566)), ((MR_Box) (ArgY2_181)));
                          }
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
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_554 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_555 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_String Var_556 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_557 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_String Var_558 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String ArgY1_241 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_244 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                          MR_String ArgY3_247 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_250 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_253 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word SubResult1_242;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_242, Var_558, ArgY1_241);
                          succeeded = (SubResult1_242 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_242;
                          else
                          {
                            MR_Word SubResult2_245;
                            MR_Integer Var_574 = (MR_Integer) (Var_557);
                            MR_Integer Var_575 = (MR_Integer) (ArgY2_244);

                            succeeded = (Var_574 < Var_575);
                            if (succeeded)
                            {
                              SubResult2_245 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_574 > Var_575);
                              if (succeeded)
                              {
                                SubResult2_245 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_245 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_245;
                            else
                            {
                              MR_Word SubResult3_248;

                              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_248, Var_556, ArgY3_247);
                              succeeded = (SubResult3_248 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_248;
                              else
                              {
                                MR_Word SubResult4_251;

                                mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), &SubResult4_251, ((MR_Box) (Var_555)), ((MR_Box) (ArgY4_250)));
                                succeeded = (SubResult4_251 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_251;
                                else
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_554)), ((MR_Box) (ArgY5_253)));
                                }
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
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_544 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_545 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_546 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_547 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_String Var_548 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String ArgY1_325 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_328 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                          MR_Word ArgY3_331 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_334 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_337 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word SubResult1_326;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_326, Var_548, ArgY1_325);
                          succeeded = (SubResult1_326 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_326;
                          else
                          {
                            MR_Word SubResult2_329;
                            MR_Integer Var_570 = (MR_Integer) (Var_547);
                            MR_Integer Var_571 = (MR_Integer) (ArgY2_328);

                            succeeded = (Var_570 < Var_571);
                            if (succeeded)
                            {
                              SubResult2_329 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_570 > Var_571);
                              if (succeeded)
                              {
                                SubResult2_329 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_329 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_329;
                            else
                            {
                              MR_Word SubResult3_332;

                              mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[3]), &SubResult3_332, ((MR_Box) (Var_546)), ((MR_Box) (ArgY3_331)));
                              succeeded = (SubResult3_332 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_332;
                              else
                              {
                                MR_Word SubResult4_335;

                                mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), &SubResult4_335, ((MR_Box) (Var_545)), ((MR_Box) (ArgY4_334)));
                                succeeded = (SubResult4_335 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_335;
                                else
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_544)), ((MR_Box) (ArgY5_337)));
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_539 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_540 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_String Var_541 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_542 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_String Var_543 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_String ArgY1_409 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_412 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                          MR_String ArgY3_415 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_418 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_421 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word SubResult1_410;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_410, Var_543, ArgY1_409);
                          succeeded = (SubResult1_410 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_410;
                          else
                          {
                            MR_Word SubResult2_413;
                            MR_Integer Var_568 = (MR_Integer) (Var_542);
                            MR_Integer Var_569 = (MR_Integer) (ArgY2_412);

                            succeeded = (Var_568 < Var_569);
                            if (succeeded)
                            {
                              SubResult2_413 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_568 > Var_569);
                              if (succeeded)
                              {
                                SubResult2_413 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_413 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_413;
                            else
                            {
                              MR_Word SubResult3_416;

                              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_416, Var_541, ArgY3_415);
                              succeeded = (SubResult3_416 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_416;
                              else
                              {
                                MR_Word SubResult4_419;

                                mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[2]), &SubResult4_419, ((MR_Box) (Var_540)), ((MR_Box) (ArgY4_418)));
                                succeeded = (SubResult4_419 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_419;
                                else
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_539)), ((MR_Box) (ArgY5_421)));
                                }
                              }
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_549 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                MR_Word Var_550 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_551 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Word Var_552 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_String Var_553 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_String ArgY1_493 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_496 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                          MR_Word ArgY3_499 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_502 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word ArgY5_505 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
                          MR_Word SubResult1_494;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_494, Var_553, ArgY1_493);
                          succeeded = (SubResult1_494 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_494;
                          else
                          {
                            MR_Word SubResult2_497;
                            MR_Integer Var_572 = (MR_Integer) (Var_552);
                            MR_Integer Var_573 = (MR_Integer) (ArgY2_496);

                            succeeded = (Var_572 < Var_573);
                            if (succeeded)
                            {
                              SubResult2_497 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_572 > Var_573);
                              if (succeeded)
                              {
                                SubResult2_497 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_497 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_497;
                            else
                            {
                              MR_Word SubResult3_500;

                              mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[1]), &SubResult3_500, ((MR_Box) (Var_551)), ((MR_Box) (ArgY3_499)));
                              succeeded = (SubResult3_500 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_500;
                              else
                              {
                                MR_Word SubResult4_503;

                                mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[2]), &SubResult4_503, ((MR_Box) (Var_550)), ((MR_Box) (ArgY4_502)));
                                succeeded = (SubResult4_503 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult4_503;
                                else
                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_549)), ((MR_Box) (ArgY5_505)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_63 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_64 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_63 == CastY_64);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;
            MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_6;
            MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
            MR_String ArgY3_8;
            MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
            MR_String ArgY4_10;
            MR_String ArgX5_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
            MR_String ArgY5_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
              ArgY5_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
              if (succeeded)
              {
                succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
                    if (succeeded)
                      succeeded = (strcmp(ArgX5_11, ArgY5_12) == 0);
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_65_65;
            MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_65_65 = (MR_Word) (&libs__mmakefiles_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_65, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_16;
            MR_String ArgX2_17 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_16 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_18 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
              if (succeeded)
                succeeded = (strcmp(ArgX2_17, ArgY2_18) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_76_76;
                MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_20;
                MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
                  if (succeeded)
                  {
                    TypeInfo_76_76 = (MR_Word) (&libs__mmakefiles_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ArgX2_21)), ((MR_Box) (ArgY2_22)));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_74_74;
                MR_Word TypeInfo_75_75;
                MR_String ArgX1_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_24;
                MR_Word ArgX2_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word ArgY2_26;
                MR_String ArgX3_27 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_String ArgY3_28;
                MR_Word ArgX4_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_30;
                MR_Word ArgX5_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Word ArgY5_32;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_24 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                  ArgY3_28 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  succeeded = (strcmp(ArgX1_23, ArgY1_24) == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_25 == ArgY2_26);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX3_27, ArgY3_28) == 0);
                      if (succeeded)
                      {
                        TypeInfo_74_74 = (MR_Word) (&libs__mmakefiles_scalar_common_1[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_74_74, ((MR_Box) (ArgX4_29)), ((MR_Box) (ArgY4_30)));
                        if (succeeded)
                        {
                          TypeInfo_75_75 = (MR_Word) (&libs__mmakefiles_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ArgX5_31)), ((MR_Box) (ArgY5_32)));
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_68_68;
                MR_Word TypeInfo_69_69;
                MR_Word TypeInfo_70_70;
                MR_String ArgX1_33 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_34;
                MR_Word ArgX2_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word ArgY2_36;
                MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_38;
                MR_Word ArgX4_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_40;
                MR_Word ArgX5_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Word ArgY5_42;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                  ArgY3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  succeeded = (strcmp(ArgX1_33, ArgY1_34) == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_35 == ArgY2_36);
                    if (succeeded)
                    {
                      TypeInfo_68_68 = (MR_Word) (&libs__mmakefiles_scalar_common_1[3]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (ArgX3_37)), ((MR_Box) (ArgY3_38)));
                      if (succeeded)
                      {
                        TypeInfo_69_69 = (MR_Word) (&libs__mmakefiles_scalar_common_1[0]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (ArgX4_39)), ((MR_Box) (ArgY4_40)));
                        if (succeeded)
                        {
                          TypeInfo_70_70 = (MR_Word) (&libs__mmakefiles_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_70_70, ((MR_Box) (ArgX5_41)), ((MR_Box) (ArgY5_42)));
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_66_66;
                MR_Word TypeInfo_67_67;
                MR_String ArgX1_43 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_44;
                MR_Word ArgX2_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word ArgY2_46;
                MR_String ArgX3_47 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_String ArgY3_48;
                MR_Word ArgX4_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_50;
                MR_Word ArgX5_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Word ArgY5_52;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_44 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                  ArgY3_48 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  succeeded = (strcmp(ArgX1_43, ArgY1_44) == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_45 == ArgY2_46);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX3_47, ArgY3_48) == 0);
                      if (succeeded)
                      {
                        TypeInfo_66_66 = (MR_Word) (&libs__mmakefiles_scalar_common_1[2]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_66_66, ((MR_Box) (ArgX4_49)), ((MR_Box) (ArgY4_50)));
                        if (succeeded)
                        {
                          TypeInfo_67_67 = (MR_Word) (&libs__mmakefiles_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ArgX5_51)), ((MR_Box) (ArgY5_52)));
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word TypeInfo_71_71;
                MR_Word TypeInfo_72_72;
                MR_Word TypeInfo_73_73;
                MR_String ArgX1_53 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_54;
                MR_Word ArgX2_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word ArgY2_56;
                MR_Word ArgX3_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_58;
                MR_Word ArgX4_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_60;
                MR_Word ArgX5_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
                MR_Word ArgY5_62;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                  ArgY3_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  ArgY5_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  succeeded = (strcmp(ArgX1_53, ArgY1_54) == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_55 == ArgY2_56);
                    if (succeeded)
                    {
                      TypeInfo_71_71 = (MR_Word) (&libs__mmakefiles_scalar_common_1[1]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (ArgX3_57)), ((MR_Box) (ArgY3_58)));
                      if (succeeded)
                      {
                        TypeInfo_72_72 = (MR_Word) (&libs__mmakefiles_scalar_common_1[2]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_72_72, ((MR_Box) (ArgX4_59)), ((MR_Box) (ArgY4_60)));
                        if (succeeded)
                        {
                          TypeInfo_73_73 = (MR_Word) (&libs__mmakefiles_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX5_61)), ((MR_Box) (ArgY5_62)));
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
    return succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_condition_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_43 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_43, ArgY1_5);
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
            MR_String Var_44 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_String Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_17;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_17, Var_45, ArgY1_16);
                  succeeded = (SubResult1_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_17;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_44, ArgY2_19);
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
            MR_String Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_32 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_35 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_33;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_33, Var_47, ArgY1_32);
                  succeeded = (SubResult1_33 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_33;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_46, ArgY2_35);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;
            MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
              if (succeeded)
                succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_10;
            MR_String ArgX2_11 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
              if (succeeded)
                succeeded = (strcmp(ArgX2_11, ArgY2_12) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_action_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__mmakefiles____Compare____is_mmake_rule_phony_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____is_mmake_rule_phony_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Word MR_CALL 
libs__mmakefiles__file_name_group_files_1_f_0(
  MR_Word FileNameGroup_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String HeadFileName_4;
    MR_Word TailFileNames_5;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileNameGroup_3, (MR_Integer) 1))));

    HeadFileName_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
    TailFileNames_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1))));
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (HeadFileName_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (TailFileNames_5));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
libs__mmakefiles__write_group_name_4_p_0(
  MR_Word OutStream_5,
  MR_String GroupName0_6)
{
  {
    MR_bool succeeded = (strcmp(GroupName0_6, (MR_String) "") == 0);
    MR_String GroupName_8;

    if (succeeded)
      GroupName_8 = (MR_String) "(unnamed)";
    else
      GroupName_8 = GroupName0_6;
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "#   ");
    mercury__io__write_string_4_p_0(OutStream_5, GroupName_8);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "\n");
  }
}

static MR_String MR_CALL 
libs__mmakefiles__project_group_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String GroupName_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return GroupName_3;
  }
}

static void MR_CALL 
libs__mmakefiles__write_block_comment_line_4_p_0(
  MR_Word OutStream_5,
  MR_String Comment_6)
{
  {
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "# ");
    mercury__io__write_string_4_p_0(OutStream_5, Comment_6);
    mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "\n");
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_fragment_5_p_0(
  MR_Word OutStream_6,
  MR_Word WriteComments_7,
  MR_Word MmakeFragment_8)
{
  libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_50_93_95_48_5_p_0(OutStream_6, MmakeFragment_8);
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word MmakeFragment_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word MmakeFragments_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_50_93_95_48_5_p_0(HeadVar__1_1, MmakeFragment_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = MmakeFragments_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_50_93_95_48_5_p_0(
  MR_Word OutStream_6,
  MR_Word MmakeFragment_8)
{
  switch (MR_tag((MR_Word) MmakeFragment_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Entry_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MmakeFragment_8, (MR_Integer) 0))));

        libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_50_93_95_48_5_p_0(OutStream_6, Entry_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Cond_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MmakeFragment_8, (MR_Integer) 0))));
        MR_Word ThenEntry_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MmakeFragment_8, (MR_Integer) 1))));
        MR_Word ElseEntry_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MmakeFragment_8, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) Cond_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String GradeComponent_49 = ((MR_String) ((MR_hl_field(MR_mktag(0), Cond_11, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "ifeq (\044(findstring ");
              mercury__io__write_string_4_p_0(OutStream_6, GradeComponent_49);
              mercury__io__write_string_4_p_0(OutStream_6, (MR_String) ",\044(GRADE)),");
              mercury__io__write_string_4_p_0(OutStream_6, GradeComponent_49);
              mercury__io__write_string_4_p_0(OutStream_6, (MR_String) ")\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String StrA_50 = ((MR_String) ((MR_hl_field(MR_mktag(1), Cond_11, (MR_Integer) 0))));
              MR_String StrB_51 = ((MR_String) ((MR_hl_field(MR_mktag(1), Cond_11, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "ifeq (");
              mercury__io__write_string_4_p_0(OutStream_6, StrA_50);
              mercury__io__write_string_4_p_0(OutStream_6, (MR_String) ",");
              mercury__io__write_string_4_p_0(OutStream_6, StrB_51);
              mercury__io__write_string_4_p_0(OutStream_6, (MR_String) ")\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String StrA_73 = ((MR_String) ((MR_hl_field(MR_mktag(2), Cond_11, (MR_Integer) 0))));
              MR_String StrB_74 = ((MR_String) ((MR_hl_field(MR_mktag(2), Cond_11, (MR_Integer) 1))));

              mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "ifneq (");
              mercury__io__write_string_4_p_0(OutStream_6, StrA_73);
              mercury__io__write_string_4_p_0(OutStream_6, (MR_String) ",");
              mercury__io__write_string_4_p_0(OutStream_6, StrB_74);
              mercury__io__write_string_4_p_0(OutStream_6, (MR_String) ")\n");
            }
            break;
        }
        mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
        libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_50_93_95_48_5_p_0(OutStream_6, ThenEntry_12);
        mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "else\n");
        mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
        libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_50_93_95_48_5_p_0(OutStream_6, ElseEntry_13);
        mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "endif # conditional fragment\n\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ThenFragments_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MmakeFragment_8, (MR_Integer) 1))));
        MR_Word ElseFragments_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MmakeFragment_8, (MR_Integer) 2))));
        MR_Word Cond_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MmakeFragment_8, (MR_Integer) 0))));

        libs__mmakefiles__write_mmake_condition_4_p_0(OutStream_6, Cond_43);
        mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
        libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_50_93_95_48_5_p_0(OutStream_6, ThenFragments_14);
        if (!((ElseFragments_15 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word MmakeFragment_103;
          MR_Word MmakeFragments_104;

          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "else\n");
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
          MmakeFragment_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElseFragments_15, (MR_Integer) 0))));
          MmakeFragments_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElseFragments_15, (MR_Integer) 1))));
          libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_50_93_95_48_5_p_0(OutStream_6, MmakeFragment_103);
          libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_50_93_95_48_5_p_0(OutStream_6, MmakeFragments_104);
        }
        mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "endif # conditional fragment\n\n");
      }
      break;
  }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    libs__mmakefiles__write_block_comment_line_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_50_93_95_48_5_p_0(
  MR_Word OutStream_6,
  MR_Word MmakeEntry_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) MmakeEntry_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Contents_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), MmakeEntry_8, (MR_Integer) 0))));
          MR_String ModuleName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), MmakeEntry_8, (MR_Integer) 1))));
          MR_String SourceFile_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), MmakeEntry_8, (MR_Integer) 2))));
          MR_String Version_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), MmakeEntry_8, (MR_Integer) 3))));
          MR_String FullArch_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), MmakeEntry_8, (MR_Integer) 4))));

          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "# vim: ts=8 sw=8 noexpandtab ft=make\n\n");
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "# Automatically generated ");
          mercury__io__write_string_4_p_0(OutStream_6, Contents_10);
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " for\n");
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "# module \140");
          mercury__io__write_string_4_p_0(OutStream_6, ModuleName_11);
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\' in source file \140");
          mercury__io__write_string_4_p_0(OutStream_6, SourceFile_12);
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\'.\n");
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "# Generated by Mercury compiler version ");
          mercury__io__write_string_4_p_0(OutStream_6, Version_13);
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "# configured for ");
          mercury__io__write_string_4_p_0(OutStream_6, FullArch_14);
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) ".\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CommentLines_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MmakeEntry_8, (MR_Integer) 0))));
          MR_Word Var_138;
          MR_Box conv0_STATE_VARIABLE_IO_162_162;

          {
            Var_138 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&libs__mmakefiles_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_50_93_95_48_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (OutStream_6));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_138, CommentLines_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_162_162);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String VarName_16 = ((MR_String) ((MR_hl_field(MR_mktag(2), MmakeEntry_8, (MR_Integer) 0))));
          MR_String Value_17 = ((MR_String) ((MR_hl_field(MR_mktag(2), MmakeEntry_8, (MR_Integer) 1))));

          mercury__io__write_string_4_p_0(OutStream_6, VarName_16);
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " = ");
          mercury__io__write_string_4_p_0(OutStream_6, Value_17);
          mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Values_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 2))));
              MR_String VarName_166 = ((MR_String) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 1))));

              if ((Values_18 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(OutStream_6, VarName_166);
                mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " =\n");
              }
              else
              {
                MR_String HeadValue_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), Values_18, (MR_Integer) 0))));
                MR_Word TailValues_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Values_18, (MR_Integer) 1))));

                if ((TailValues_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_4_p_0(OutStream_6, VarName_166);
                  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " = ");
                  mercury__io__write_string_4_p_0(OutStream_6, HeadValue_19);
                  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
                }
                else
                {
                  mercury__io__write_string_4_p_0(OutStream_6, VarName_166);
                  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " = \\\n");
                  libs__mmakefiles__write_mmake_var_values_5_p_0(OutStream_6, HeadValue_19, TailValues_20);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String TargetFile_31;
              MR_Word Var_95;
              MR_String RuleName_244 = ((MR_String) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 1))));
              MR_Word IsPhony_245 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SourceFiles_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 4))));
              MR_Word Actions_247 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 5))));

              libs__mmakefiles__write_rule_name_4_p_0(OutStream_6, RuleName_244);
              TargetFile_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 3))));
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (TargetFile_31));
                MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              libs__mmakefiles__maybe_write_phony_rule_5_p_0(OutStream_6, IsPhony_245, Var_95);
              libs__mmakefiles__write_mmake_file_name_4_p_0(OutStream_6, TargetFile_31);
              if ((SourceFiles_246 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " :");
              }
              else
              {
                MR_String HeadSourceFile_221 = ((MR_String) ((MR_hl_field(MR_mktag(1), SourceFiles_246, (MR_Integer) 0))));
                MR_Word TailSourceFiles_222 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SourceFiles_246, (MR_Integer) 1))));
                MR_Integer Var_207;
                MR_Integer Var_208;
                MR_Integer Var_210;

                mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " : ");
                Var_210 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailSourceFiles_222);
                Var_207 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 1 + (MR_Unsigned) Var_210);
                Var_208 = libs__mmakefiles__max_horizontal_0_f_0();
                succeeded = (Var_207 > Var_208);
                if (succeeded)
                {
                  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\\\n");
                  libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(OutStream_6, HeadSourceFile_221, TailSourceFiles_222);
                }
                else
                  libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(OutStream_6, HeadSourceFile_221, TailSourceFiles_222);
              }
              mercury__io__nl_3_p_0(OutStream_6);
              libs__mmakefiles__write_mmake_actions_4_p_0(OutStream_6, Actions_247);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String RuleName_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 1))));
              MR_Word IsPhony_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SourceFiles_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 4))));
              MR_Word Actions_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 5))));
              MR_String HeadTargetFile_36;
              MR_Word TailTargetFiles_37;
              MR_Word Var_91;
              MR_Word Var_92;

              libs__mmakefiles__write_rule_name_4_p_0(OutStream_6, RuleName_23);
              Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 3))));
              HeadTargetFile_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 0))));
              TailTargetFiles_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 1))));
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (HeadTargetFile_36));
                MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (TailTargetFiles_37));
              }
              libs__mmakefiles__maybe_write_phony_rule_5_p_0(OutStream_6, IsPhony_24, Var_92);
              libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(OutStream_6, HeadTargetFile_36, TailTargetFiles_37);
              if ((SourceFiles_26 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " :");
              }
              else
              {
                MR_String HeadSourceFile_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), SourceFiles_26, (MR_Integer) 0))));
                MR_Word TailSourceFiles_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SourceFiles_26, (MR_Integer) 1))));
                MR_Integer Var_101;
                MR_Integer Var_102;
                MR_Integer Var_104;

                mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " : ");
                Var_104 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailSourceFiles_41);
                Var_101 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 1 + (MR_Unsigned) Var_104);
                Var_102 = libs__mmakefiles__max_horizontal_0_f_0();
                succeeded = (Var_101 > Var_102);
                if (succeeded)
                {
                  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\\\n");
                  libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(OutStream_6, HeadSourceFile_40, TailSourceFiles_41);
                }
                else
                  libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(OutStream_6, HeadSourceFile_40, TailSourceFiles_41);
              }
              mercury__io__nl_3_p_0(OutStream_6);
              libs__mmakefiles__write_mmake_actions_4_p_0(OutStream_6, Actions_27);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SourceGroups_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 4))));
              MR_Word Var_79;
              MR_String TargetFile_167;
              MR_String RuleName_169 = ((MR_String) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 1))));
              MR_Word IsPhony_170 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Actions_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 5))));

              libs__mmakefiles__write_rule_name_4_p_0(OutStream_6, RuleName_169);
              libs__mmakefiles__maybe_write_group_names_5_p_0(OutStream_6, (MR_String) "source", SourceGroups_43);
              TargetFile_167 = ((MR_String) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 3))));
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (TargetFile_167));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              libs__mmakefiles__maybe_write_phony_rule_5_p_0(OutStream_6, IsPhony_170, Var_79);
              libs__mmakefiles__write_mmake_file_name_4_p_0(OutStream_6, TargetFile_167);
              if ((SourceGroups_43 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " :");
              }
              else
              {
                MR_Word HeadSourceGroup_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SourceGroups_43, (MR_Integer) 0))));
                MR_Word TailSourceGroups_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SourceGroups_43, (MR_Integer) 1))));

                mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " : \\\n");
                libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(OutStream_6, HeadSourceGroup_66, TailSourceGroups_67);
              }
              mercury__io__nl_3_p_0(OutStream_6);
              libs__mmakefiles__write_mmake_actions_4_p_0(OutStream_6, Actions_171);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TargetGroups0_52;
              MR_Word TargetGroups_61;
              MR_Word HeadTargetGroup_64;
              MR_Word TailTargetGroups_65;
              MR_Word Var_72;
              MR_Word Var_76;
              MR_Word SourceGroups_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 4))));
              MR_String RuleName_203 = ((MR_String) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 1))));
              MR_Word IsPhony_204 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Actions_205 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 5))));

              libs__mmakefiles__write_rule_name_4_p_0(OutStream_6, RuleName_203);
              TargetGroups0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 3))));
              Var_72 = libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_110_101_95_111_114_95_109_111_114_101_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(TargetGroups0_52);
              libs__mmakefiles__maybe_write_group_names_5_p_0(OutStream_6, (MR_String) "target", Var_72);
              libs__mmakefiles__maybe_write_group_names_5_p_0(OutStream_6, (MR_String) "source", SourceGroups_190);
              TargetGroups_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MmakeEntry_8, (MR_Integer) 3))));
              Var_76 = libs__mmakefiles__file_name_groups_files_1_f_0(TargetGroups_61);
              libs__mmakefiles__maybe_write_phony_rule_5_p_0(OutStream_6, IsPhony_204, Var_76);
              HeadTargetGroup_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetGroups_61, (MR_Integer) 0))));
              TailTargetGroups_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetGroups_61, (MR_Integer) 1))));
              libs__mmakefiles__write_mmake_file_name_groups_horizontal_5_p_0(OutStream_6, HeadTargetGroup_64, TailTargetGroups_65);
              if ((SourceGroups_190 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " :");
              }
              else
              {
                MR_Word HeadSourceGroup_181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SourceGroups_190, (MR_Integer) 0))));
                MR_Word TailSourceGroups_182 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SourceGroups_190, (MR_Integer) 1))));

                mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " : \\\n");
                libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(OutStream_6, HeadSourceGroup_181, TailSourceGroups_182);
              }
              mercury__io__nl_3_p_0(OutStream_6);
              libs__mmakefiles__write_mmake_actions_4_p_0(OutStream_6, Actions_205);
            }
            break;
        }
        break;
    }
    mercury__io__nl_3_p_0(OutStream_6);
  }
}

static MR_Word MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_110_101_95_111_114_95_109_111_114_101_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Box Head_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Word Tail_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = Head_3;
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Tail_4));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__mmakefiles__file_name_group_files_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0(
  MR_Word FileNameGroups_3)
{
  {
    MR_Word FileNames_4;
    MR_Word HeadFileNameGroup_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileNameGroups_3, (MR_Integer) 0))));
    MR_Word TailFileNameGroups_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileNameGroups_3, (MR_Integer) 1))));
    MR_Word FileNamesList_7;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (HeadFileNameGroup_5));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (TailFileNameGroups_6));
    }
    FileNamesList_7 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), (MR_Word) (&libs__mmakefiles_scalar_common_1[0]), (MR_Word) (&libs__mmakefiles_scalar_common_3[2]), Var_9);
    FileNames_4 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNamesList_7);
    return FileNames_4;
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_actions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Action_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Actions_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\t");
      mercury__io__write_string_4_p_0(HeadVar__1_1, Action_10);
      mercury__io__nl_3_p_0(HeadVar__1_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Actions_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_4_p_0(
  MR_Word OutStream_5,
  MR_String FileName_6)
{
  mercury__io__write_string_4_p_0(OutStream_5, FileName_6);
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_vertical_5_p_0(
  MR_Word OutStream_6,
  MR_Word FileNameGroup_7,
  MR_Word FileNameGroups_8)
{
  while (MR_TRUE)
  {
    MR_String FileName_26;
    MR_Word FileNames_27;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileNameGroup_7, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    FileName_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
    FileNames_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
    libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(OutStream_6, FileName_26, FileNames_27);
    if (!((FileNameGroups_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadFileNameGroup_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNameGroups_8, (MR_Integer) 0))));
      MR_Word TailFileNameGroups_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNameGroups_8, (MR_Integer) 1))));
      MR_Word next_value_of_FileNameGroup_7;
      MR_Word next_value_of_FileNameGroups_8;

      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " \\\n");
      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\t\\\n");
      // direct tailcall eliminated
      ;
      next_value_of_FileNameGroup_7 = HeadFileNameGroup_10;
      next_value_of_FileNameGroups_8 = TailFileNameGroups_11;
      FileNameGroup_7 = next_value_of_FileNameGroup_7;
      FileNameGroups_8 = next_value_of_FileNameGroups_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_vertical_5_p_0(
  MR_Word OutStream_6,
  MR_String FileName_7,
  MR_Word FileNames_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\t\t");
    mercury__io__write_string_4_p_0(OutStream_6, FileName_7);
    if (!((FileNames_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String HeadFileName_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), FileNames_8, (MR_Integer) 0))));
      MR_Word TailFileNames_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNames_8, (MR_Integer) 1))));
      MR_String next_value_of_FileName_7;
      MR_Word next_value_of_FileNames_8;

      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " \\\n");
      // direct tailcall eliminated
      ;
      next_value_of_FileName_7 = HeadFileName_10;
      next_value_of_FileNames_8 = TailFileNames_11;
      FileName_7 = next_value_of_FileName_7;
      FileNames_8 = next_value_of_FileNames_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_name_groups_horizontal_5_p_0(
  MR_Word OutStream_6,
  MR_Word FileNameGroup_7,
  MR_Word FileNameGroups_8)
{
  while (MR_TRUE)
  {
    MR_String FileName_24;
    MR_Word FileNames_25;
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileNameGroup_7, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    FileName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
    FileNames_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
    libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(OutStream_6, FileName_24, FileNames_25);
    if (!((FileNameGroups_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadFileNameGroup_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNameGroups_8, (MR_Integer) 0))));
      MR_Word TailFileNameGroups_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNameGroups_8, (MR_Integer) 1))));
      MR_Word next_value_of_FileNameGroup_7;
      MR_Word next_value_of_FileNameGroups_8;

      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " ");
      // direct tailcall eliminated
      ;
      next_value_of_FileNameGroup_7 = HeadFileNameGroup_10;
      next_value_of_FileNameGroups_8 = TailFileNameGroups_11;
      FileNameGroup_7 = next_value_of_FileNameGroup_7;
      FileNameGroups_8 = next_value_of_FileNameGroups_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_file_names_horizontal_5_p_0(
  MR_Word OutStream_6,
  MR_String FileName_7,
  MR_Word FileNames_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_4_p_0(OutStream_6, FileName_7);
    if (!((FileNames_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String HeadFileName_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), FileNames_8, (MR_Integer) 0))));
      MR_Word TailFileNames_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNames_8, (MR_Integer) 1))));
      MR_String next_value_of_FileName_7;
      MR_Word next_value_of_FileNames_8;

      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " ");
      // direct tailcall eliminated
      ;
      next_value_of_FileName_7 = HeadFileName_10;
      next_value_of_FileNames_8 = TailFileNames_11;
      FileName_7 = next_value_of_FileName_7;
      FileNames_8 = next_value_of_FileNames_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__write_rule_name_4_p_0(
  MR_Word OutStream_5,
  MR_String RuleName_6)
{
  {
    MR_bool succeeded = (strcmp(RuleName_6, (MR_String) "") == 0);

    if (!(succeeded))
    {
      mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "# RULE ");
      mercury__io__write_string_4_p_0(OutStream_5, RuleName_6);
      mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
libs__mmakefiles__maybe_write_phony_rule_5_p_0(
  MR_Word OutStream_6,
  MR_Word IsPhony_7,
  MR_Word FileNames_8)
{
  switch (IsPhony_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String FileNamesStr_10;

        FileNamesStr_10 = mercury__string__join_list_2_f_0((MR_String) " ", FileNames_8);
        mercury__io__write_string_4_p_0(OutStream_6, (MR_String) ".PHONY: ");
        mercury__io__write_string_4_p_0(OutStream_6, FileNamesStr_10);
        mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
      }
      break;
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_var_values_5_p_0(
  MR_Word OutStream_6,
  MR_String HeadValue_7,
  MR_Word TailValues_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailValues_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\t");
      mercury__io__write_string_4_p_0(OutStream_6, HeadValue_7);
      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
    }
    else
    {
      MR_String HeadTailValue_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), TailValues_8, (MR_Integer) 0))));
      MR_Word TailTailValues_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailValues_8, (MR_Integer) 1))));
      MR_String next_value_of_HeadValue_7;
      MR_Word next_value_of_TailValues_8;

      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\t");
      mercury__io__write_string_4_p_0(OutStream_6, HeadValue_7);
      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " \\\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadValue_7 = HeadTailValue_10;
      next_value_of_TailValues_8 = TailTailValues_11;
      HeadValue_7 = next_value_of_HeadValue_7;
      TailValues_8 = next_value_of_TailValues_8;
      continue;
    }
    break;
  }
}

static MR_Integer MR_CALL 
libs__mmakefiles__max_horizontal_0_f_0(void)
{
  {
    return (MR_Integer) 1;
  }
}

static void MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    libs__mmakefiles__write_group_name_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_GroupName_3;

    conv0_GroupName_3 = libs__mmakefiles__project_group_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_GroupName_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__mmakefiles__maybe_write_group_names_5_p_0(
  MR_Word OutStream_6,
  MR_String TargetOrSource_7,
  MR_Word Groups_8)
{
  {
    MR_bool succeeded;
    MR_Word GroupNames_10;
    MR_String Var_14;

    GroupNames_10 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__mmakefiles_scalar_common_3[1]), Groups_8);
    Var_14 = mercury__string__append_list_1_f_0(GroupNames_10);
    succeeded = (strcmp(Var_14, (MR_String) "") == 0);
    if (!(succeeded))
    {
      MR_Word Var_20;
      MR_Box conv1_STATE_VARIABLE_IO_12;

      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "# ");
      mercury__io__write_string_4_p_0(OutStream_6, TargetOrSource_7);
      mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " group names:\n");
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&libs__mmakefiles_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (libs__mmakefiles__maybe_write_group_names_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (OutStream_6));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, GroupNames_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12);
    }
  }
}

static void MR_CALL 
libs__mmakefiles__write_mmake_condition_4_p_0(
  MR_Word OutStream_5,
  MR_Word Cond_6)
{
  switch (MR_tag((MR_Word) Cond_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String GradeComponent_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Cond_6, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "ifeq (\044(findstring ");
        mercury__io__write_string_4_p_0(OutStream_5, GradeComponent_8);
        mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ",\044(GRADE)),");
        mercury__io__write_string_4_p_0(OutStream_5, GradeComponent_8);
        mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ")\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String StrA_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), Cond_6, (MR_Integer) 0))));
        MR_String StrB_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), Cond_6, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "ifeq (");
        mercury__io__write_string_4_p_0(OutStream_5, StrA_9);
        mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ",");
        mercury__io__write_string_4_p_0(OutStream_5, StrB_10);
        mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ")\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String StrA_34 = ((MR_String) ((MR_hl_field(MR_mktag(2), Cond_6, (MR_Integer) 0))));
        MR_String StrB_35 = ((MR_String) ((MR_hl_field(MR_mktag(2), Cond_6, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(OutStream_5, (MR_String) "ifneq (");
        mercury__io__write_string_4_p_0(OutStream_5, StrA_34);
        mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ",");
        mercury__io__write_string_4_p_0(OutStream_5, StrB_35);
        mercury__io__write_string_4_p_0(OutStream_5, (MR_String) ")\n");
      }
      break;
  }
}

static MR_Word MR_CALL 
libs__mmakefiles__mmake_entry_to_fragment_1_f_0(
  MR_Word Entry_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Entry_3));
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
libs__mmakefiles__silent_noop_action_0_f_0(void)
{
  {
    return (MR_String) "\100:";
  }
}

MR_Word MR_CALL 
libs__mmakefiles__make_singleton_file_name_group_1_f_0(
  MR_String FileName_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (FileName_3));
      MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__mmakefiles__make_file_name_group_2_f_0(
  MR_String GroupName_4,
  MR_Word FileNames_5)
{
  {
    MR_Word Groups_6;

    if ((FileNames_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Groups_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadFileName_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), FileNames_5, (MR_Integer) 0))));
      MR_Word TailFileNames_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNames_5, (MR_Integer) 1))));
      MR_Word Var_9;
      MR_Word Var_10;

      {
        Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (HeadFileName_7));
        MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (TailFileNames_8));
      }
      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (GroupName_4));
        MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Var_10));
      }
      {
        Groups_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Groups_6, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), Groups_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    return Groups_6;
  }
}

static void MR_CALL 
libs__mmakefiles__end_mmakefile_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    libs__mmakefiles__write_mmake_fragment_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
libs__mmakefiles__end_mmakefile_4_p_0(
  MR_Word OutStream_5,
  MR_Word STATE_VARIABLE_MmakeFile_0_8)
{
  {
    MR_Word Var_11;
    MR_Box conv0_STATE_VARIABLE_IO_10;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&libs__mmakefiles_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (libs__mmakefiles__end_mmakefile_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (OutStream_5));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__cord__foldl_pred_4_p_2((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_11, STATE_VARIABLE_MmakeFile_0_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_10);
  }
}

static MR_Box MR_CALL 
libs__mmakefiles__add_mmake_entries_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
libs__mmakefiles__add_mmake_entries_3_p_0(
  MR_Word Entries_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_6,
  MR_Word * STATE_VARIABLE_MmakeFile_7)
{
  {
    MR_Word Var_9;
    MR_Word Var_10;

    Var_10 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&libs__mmakefiles_scalar_common_3[0]), Entries_4);
    Var_9 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_10);
    *STATE_VARIABLE_MmakeFile_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), STATE_VARIABLE_MmakeFile_0_6, Var_9);
  }
}

void MR_CALL 
libs__mmakefiles__add_mmake_entry_3_p_0(
  MR_Word Entry_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_6,
  MR_Word * STATE_VARIABLE_MmakeFile_7)
{
  {
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Entry_4));
    }
    *STATE_VARIABLE_MmakeFile_7 = mercury__cord__snoc_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), STATE_VARIABLE_MmakeFile_0_6, ((MR_Box) (Var_9)));
  }
}

void MR_CALL 
libs__mmakefiles__add_mmake_fragments_3_p_0(
  MR_Word Fragments_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_6,
  MR_Word * STATE_VARIABLE_MmakeFile_7)
{
  {
    MR_Word Var_9;

    Var_9 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Fragments_4);
    *STATE_VARIABLE_MmakeFile_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), STATE_VARIABLE_MmakeFile_0_6, Var_9);
  }
}

void MR_CALL 
libs__mmakefiles__add_mmake_fragment_3_p_0(
  MR_Word Fragment_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_6,
  MR_Word * STATE_VARIABLE_MmakeFile_7)
{
  {
    *STATE_VARIABLE_MmakeFile_7 = mercury__cord__snoc_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), STATE_VARIABLE_MmakeFile_0_6, ((MR_Box) (Fragment_4)));
  }
}

void MR_CALL 
libs__mmakefiles__start_mmakefile_1_p_0(
  MR_Word * STATE_VARIABLE_MmakeFile_3)
{
  {
    *STATE_VARIABLE_MmakeFile_3 = mercury__cord__init_0_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____is_mmake_rule_phony_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____is_mmake_rule_phony_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____is_mmake_rule_phony_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____is_mmake_rule_phony_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____maybe_write_mmake_comments_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____maybe_write_mmake_comments_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____mmake_action_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____mmake_action_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_condition_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____mmake_condition_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_condition_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____mmake_condition_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____mmake_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____mmake_file_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____mmake_file_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____mmake_file_name_group_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____mmake_file_name_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_fragment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____mmake_fragment_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_fragment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____mmake_fragment_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_grade_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____mmake_grade_component_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_grade_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____mmake_grade_component_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmakefile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__mmakefiles____Unify____mmakefile_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__mmakefiles____Compare____mmakefile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__mmakefiles____Compare____mmakefile_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_maybe_write_mmake_comments_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_action_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_condition_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0);
	MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_grade_component_0);
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

// :- end_module libs.mmakefiles.
