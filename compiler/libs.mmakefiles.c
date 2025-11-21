/*
** Automatically generated from `mmakefiles.m'
** by the Mercury compiler,
** version rotd-2025-11-21
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


#include "array.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 libs__mmakefiles__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_0;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_1;

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_ordinal_ordered_is_mmake_rule_phony_0[2];

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_is_mmake_rule_phony_0[2];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_is_mmake_rule_phony_0[2];

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_add_mmake_comments_0_0;

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_add_mmake_comments_0_1;

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_ordinal_ordered_maybe_add_mmake_comments_0[2];

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_add_mmake_comments_0[2];

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_add_mmake_comments_0[2];

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

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__one_or_more__ti_one_or_more_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_5[5];

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_5[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_5;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__list__ti_list_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_6[5];

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_6[5];

static const MR_DuArgLocn libs__mmakefiles__libs__mmakefiles__field_locns_mmake_entry_0_6[5];

static const MR_DuFunctorDesc libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_6;

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__one_or_more__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;

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
libs__mmakefiles____Compare____maybe_add_mmake_comments_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_add_mmake_comments_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
libs__mmakefiles__file_name_group_files_1_f_0(
  MR_Word FileNameGroup_3);

static void MR_CALL 
libs__mmakefiles__append_group_name_3_p_0(
  MR_Word Group_4,
  MR_Word STATE_VARIABLE_SB_0_9,
  MR_Word * STATE_VARIABLE_SB_10);

static void MR_CALL 
libs__mmakefiles__append_block_comment_line_3_p_0(
  MR_String Comment_4,
  MR_Word STATE_VARIABLE_SB_0_6,
  MR_Word * STATE_VARIABLE_SB_7);

static void MR_CALL 
libs__mmakefiles__append_mmake_fragment_4_p_0(
  MR_Word WriteComments_5,
  MR_Word MmakeFragment_6,
  MR_Word STATE_VARIABLE_SB_0_16,
  MR_Word * STATE_VARIABLE_SB_17);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_SB_0_3,
  MR_Word * STATE_VARIABLE_SB_4);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word MmakeFragment_6,
  MR_Word STATE_VARIABLE_SB_0_16,
  MR_Word * STATE_VARIABLE_SB_17);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_49_93_95_48_4_p_0(
  MR_Word MmakeEntry_6,
  MR_Word STATE_VARIABLE_SB_0_66,
  MR_Word * STATE_VARIABLE_SB_67);

static MR_Box MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0(
  MR_Word FileNameGroups_3);

static void MR_CALL 
libs__mmakefiles__append_mmake_actions_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SB_0_2,
  MR_Word * STATE_VARIABLE_SB_3);

static void MR_CALL 
libs__mmakefiles__append_mmake_file_name_3_p_0(
  MR_String FileName_4,
  MR_Word STATE_VARIABLE_SB_0_6,
  MR_Word * STATE_VARIABLE_SB_7);

static void MR_CALL 
libs__mmakefiles__append_mmake_file_name_groups_vertical_4_p_0(
  MR_Word FileNameGroup_5,
  MR_Word FileNameGroups_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11);

static void MR_CALL 
libs__mmakefiles__append_mmake_file_names_vertical_4_p_0(
  MR_String FileName_5,
  MR_Word FileNames_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11);

static void MR_CALL 
libs__mmakefiles__append_mmake_file_name_groups_horizontal_4_p_0(
  MR_Word FileNameGroup_5,
  MR_Word FileNameGroups_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11);

static void MR_CALL 
libs__mmakefiles__append_mmake_file_names_horizontal_4_p_0(
  MR_String FileName_5,
  MR_Word FileNames_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11);

static void MR_CALL 
libs__mmakefiles__append_rule_name_3_p_0(
  MR_String RuleName_4,
  MR_Word STATE_VARIABLE_SB_0_6,
  MR_Word * STATE_VARIABLE_SB_7);

static void MR_CALL 
libs__mmakefiles__maybe_append_phony_rule_4_p_0(
  MR_Word IsPhony_5,
  MR_Word FileNames_6,
  MR_Word STATE_VARIABLE_SB_0_9,
  MR_Word * STATE_VARIABLE_SB_10);

static void MR_CALL 
libs__mmakefiles__append_mmake_var_values_4_p_0(
  MR_String HeadValue_5,
  MR_Word TailValues_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11);

static MR_Integer MR_CALL 
libs__mmakefiles__max_horizontal_0_f_0(void);

static void MR_CALL 
libs__mmakefiles__maybe_append_group_names_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__mmakefiles__maybe_append_group_names_4_p_0(
  MR_String TargetOrSource_5,
  MR_Word Groups_6,
  MR_Word STATE_VARIABLE_SB_0_8,
  MR_Word * STATE_VARIABLE_SB_9);

static MR_bool MR_CALL 
libs__mmakefiles__all_group_names_are_empty_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
libs__mmakefiles__append_mmake_condition_3_p_0(
  MR_Word Cond_4,
  MR_Word STATE_VARIABLE_SB_0_9,
  MR_Word * STATE_VARIABLE_SB_10);

static MR_Word MR_CALL 
libs__mmakefiles__make_multiline_action_lag_2_f_0(
  MR_String HeadLine0_4,
  MR_Word TailLines0_5);

static void MR_CALL 
libs__mmakefiles__mmakefile_to_string_1_f_0_1(
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
libs__mmakefiles____Unify____maybe_add_mmake_comments_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__mmakefiles____Compare____maybe_add_mmake_comments_0_0_10001(
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

static /* final */ const MR_Box libs__mmakefiles_scalar_common_2[2][5];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_3[4][3];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_4[1][7];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_5[1][4];

static /* final */ const MR_Box libs__mmakefiles_scalar_common_6[2][6];




static /* final */ const MR_Box libs__mmakefiles_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_2[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0)),
    ((MR_Box) (&libs__mmakefiles__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_3[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_2[0])),
    ((MR_Box) (libs__mmakefiles__add_mmake_entries_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_6[0])),
    ((MR_Box) (libs__mmakefiles__maybe_append_group_names_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_2[1])),
    ((MR_Box) (libs__mmakefiles__file_name_groups_files_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_6[1])),
    ((MR_Box) (libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_maybe_add_mmake_comments_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_5[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__mmakefiles_scalar_common_4[0])),
    ((MR_Box) (libs__mmakefiles__mmakefile_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box libs__mmakefiles_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct1 libs__mmakefiles__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_0 = {
  (MR_String) "mmake_rule_is_not_phony",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_is_mmake_rule_phony_0_1 = {
  (MR_String) "mmake_rule_is_phony",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_ordinal_ordered_is_mmake_rule_phony_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__mmakefiles____Unify____is_mmake_rule_phony_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____is_mmake_rule_phony_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "is_mmake_rule_phony",
  { libs__mmakefiles__libs__mmakefiles__enum_name_ordered_is_mmake_rule_phony_0 },
  { libs__mmakefiles__libs__mmakefiles__enum_ordinal_ordered_is_mmake_rule_phony_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_is_mmake_rule_phony_0,

};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_add_mmake_comments_0_0 = {
  (MR_String) "do_not_add_mmake_comments",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_add_mmake_comments_0_1 = {
  (MR_String) "add_mmake_comments",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_ordinal_ordered_maybe_add_mmake_comments_0[2] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_add_mmake_comments_0_0,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_add_mmake_comments_0_1
};

static const MR_EnumFunctorDescPtr libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_add_mmake_comments_0[2] = {
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_add_mmake_comments_0_1,
  &libs__mmakefiles__libs__mmakefiles__enum_functor_desc_maybe_add_mmake_comments_0_0
};

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_add_mmake_comments_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_maybe_add_mmake_comments_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__mmakefiles____Unify____maybe_add_mmake_comments_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____maybe_add_mmake_comments_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "maybe_add_mmake_comments",
  { libs__mmakefiles__libs__mmakefiles__enum_name_ordered_maybe_add_mmake_comments_0 },
  { libs__mmakefiles__libs__mmakefiles__enum_ordinal_ordered_maybe_add_mmake_comments_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_maybe_add_mmake_comments_0,

};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_action_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_action_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_action",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_condition_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_0[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_0 };

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_1[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_1 };

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_2[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_condition_0_2 };

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_condition_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_condition_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_condition_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_condition_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_condition",
  { libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_condition_0 },
  { libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_condition_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_condition_0,

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
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_1[1] = { (MR_PseudoTypeInfo) (&libs__mmakefiles__list__ti_list_1builtin__type_ctor_info_string_0) };

static const MR_ConstString libs__mmakefiles__libs__mmakefiles__field_names_mmake_entry_0_1[1] = { (MR_String) "mbc_comments" };

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

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__one_or_more__ti_one_or_more_1builtin__type_ctor_info_string_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_5[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__one_or_more__ti_one_or_more_1builtin__type_ctor_info_string_0),
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
  { (MR_TypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0) }
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

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__one_or_more__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0) }
};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_entry_0_7[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_is_mmake_rule_phony_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__one_or_more__ti_one_or_more_1libs__mmakefiles__type_ctor_info_mmake_file_name_group_0),
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

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_0[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_0 };

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_1[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_1 };

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_2[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_entry_0_2 };

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(5),
    MR_SECTAG_REMOTE_FULL_WORD,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_entry_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_entry_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_entry_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_entry",
  { libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_entry_0 },
  { libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_entry_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_entry_0,

};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_file_name_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_file_name_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_file_name",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_file_name_group_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__mmakefiles__one_or_more__ti_one_or_more_1builtin__type_ctor_info_string_0)
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

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_file_name_group_0_0[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_file_name_group_0_0 };

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_file_name_group_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_file_name_group_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_file_name_group_0[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_file_name_group_0_0 };

static const MR_Integer libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_file_name_group_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_file_name_group_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_file_name_group_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_file_name_group",
  { libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_file_name_group_0 },
  { libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_file_name_group_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_file_name_group_0,

};

static const MR_PseudoTypeInfo libs__mmakefiles__libs__mmakefiles__field_types_mmake_fragment_0_0[1] = { (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0) };

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
  { (MR_TypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0) }
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

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_0[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_0 };

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_1[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_1 };

static const MR_DuFunctorDescPtr libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_2[1] = { &libs__mmakefiles__libs__mmakefiles__du_functor_desc_mmake_fragment_0_2 };

static const MR_DuPtagLayout libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_fragment_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__mmakefiles__libs__mmakefiles__du_stag_ordered_mmake_fragment_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_fragment_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_fragment_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_fragment",
  { libs__mmakefiles__libs__mmakefiles__du_name_ordered_mmake_fragment_0 },
  { libs__mmakefiles__libs__mmakefiles__du_ptag_ordered_mmake_fragment_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__mmakefiles__libs__mmakefiles__functor_number_map_mmake_fragment_0,

};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_grade_component_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmake_grade_component_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmake_grade_component_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmake_grade_component",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 libs__mmakefiles__cord__ti_cord_1libs__mmakefiles__type_ctor_info_mmake_fragment_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0) }
};

const MR_TypeCtorInfo_Struct libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmakefile_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__mmakefiles____Unify____mmakefile_0_0_10001)),
  ((MR_Box) (libs__mmakefiles____Compare____mmakefile_0_0_10001)),
  (MR_String) "libs.mmakefiles",
  (MR_String) "mmakefile",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__mmakefiles__cord__ti_cord_1libs__mmakefiles__type_ctor_info_mmake_fragment_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
libs__mmakefiles____Compare____mmakefile_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmakefile_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_grade_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_grade_component_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Cast_HeadVar1_3 = HeadVar__1_1;
  MR_String Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
  return succeeded;
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_fragment_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

              libs__mmakefiles____Compare____mmake_entry_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word SubResult1_8;

              libs__mmakefiles____Compare____mmake_condition_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Word SubResult2_11;

                libs__mmakefiles____Compare____mmake_entry_0_0(&SubResult2_11, ArgX2_9, ArgY2_10);
                succeeded = (SubResult2_11 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_11;
                else
                  libs__mmakefiles____Compare____mmake_entry_0_0(HeadVar__1_1, ArgX3_12, ArgY3_13);
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word SubResult1_16;

              libs__mmakefiles____Compare____mmake_condition_0_0(&SubResult1_16, ArgX1_14, ArgY1_15);
              succeeded = (SubResult1_16 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
              {
                MR_Word SubResult2_19;

                mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[4]), &SubResult2_19, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
                succeeded = (SubResult2_19 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_19;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_20)), ((MR_Box) (ArgY3_21)));
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_fragment_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
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
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_14;
          MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
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

void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_group_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_group_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&libs__mmakefiles_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Cast_HeadVar1_3 = HeadVar__1_1;
  MR_String Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
  return succeeded;
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_86 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_87 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_86 == CastY_87);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
              MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
              MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 2))));
              MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 3))));
              MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 3))));
              MR_String ArgX5_16 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 4))));
              MR_String ArgY5_17 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 4))));
              MR_Word SubResult1_6;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                {
                  MR_Word SubResult3_12;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
                  succeeded = (SubResult3_12 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_12;
                  else
                  {
                    MR_Word SubResult4_15;

                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
                    succeeded = (SubResult4_15 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult4_15;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_18)), ((MR_Box) (ArgY1_19)));
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_20 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_String ArgX2_23 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_String ArgY2_24 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_22;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_22, ArgX1_20, ArgY1_21);
              succeeded = (SubResult1_22 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_22;
              else
                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_23, ArgY2_24);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_27;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_27, ArgX1_25, ArgY1_26);
                      succeeded = (SubResult1_27 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_27;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_28)), ((MR_Box) (ArgY2_29)));
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String ArgX1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_31 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                      MR_Word ArgY2_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                      MR_String ArgX3_36 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_String ArgY3_37 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word ArgX5_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                      MR_Word ArgY5_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                      MR_Word SubResult1_32;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_32, ArgX1_30, ArgY1_31);
                      succeeded = (SubResult1_32 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_32;
                      else
                      {
                        MR_Word SubResult2_35;
                        MR_Integer Var_124 = (MR_Integer) (ArgX2_33);
                        MR_Integer Var_125 = (MR_Integer) (ArgY2_34);

                        succeeded = (Var_124 < Var_125);
                        if (succeeded)
                        {
                          SubResult2_35 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_124 > Var_125);
                          if (succeeded)
                          {
                            SubResult2_35 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_35;
                        else
                        {
                          MR_Word SubResult3_38;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_38, ArgX3_36, ArgY3_37);
                          succeeded = (SubResult3_38 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_38;
                          else
                          {
                            MR_Word SubResult4_41;

                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), &SubResult4_41, ((MR_Box) (ArgX4_39)), ((MR_Box) (ArgY4_40)));
                            succeeded = (SubResult4_41 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_41;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX5_42)), ((MR_Box) (ArgY5_43)));
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String ArgX1_44 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_45 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_47 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                      MR_Word ArgY2_48 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                      MR_Word ArgX3_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word ArgX5_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                      MR_Word ArgY5_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                      MR_Word SubResult1_46;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_46, ArgX1_44, ArgY1_45);
                      succeeded = (SubResult1_46 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_46;
                      else
                      {
                        MR_Word SubResult2_49;
                        MR_Integer Var_122 = (MR_Integer) (ArgX2_47);
                        MR_Integer Var_123 = (MR_Integer) (ArgY2_48);

                        succeeded = (Var_122 < Var_123);
                        if (succeeded)
                        {
                          SubResult2_49 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_122 > Var_123);
                          if (succeeded)
                          {
                            SubResult2_49 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_49;
                        else
                        {
                          MR_Word SubResult3_52;

                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[3]), &SubResult3_52, ((MR_Box) (ArgX3_50)), ((MR_Box) (ArgY3_51)));
                          succeeded = (SubResult3_52 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_52;
                          else
                          {
                            MR_Word SubResult4_55;

                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), &SubResult4_55, ((MR_Box) (ArgX4_53)), ((MR_Box) (ArgY4_54)));
                            succeeded = (SubResult4_55 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_55;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX5_56)), ((MR_Box) (ArgY5_57)));
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_String ArgX1_58 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_59 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_61 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                      MR_Word ArgY2_62 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                      MR_String ArgX3_64 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_String ArgY3_65 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word ArgX5_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                      MR_Word ArgY5_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                      MR_Word SubResult1_60;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_60, ArgX1_58, ArgY1_59);
                      succeeded = (SubResult1_60 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_60;
                      else
                      {
                        MR_Word SubResult2_63;
                        MR_Integer Var_120 = (MR_Integer) (ArgX2_61);
                        MR_Integer Var_121 = (MR_Integer) (ArgY2_62);

                        succeeded = (Var_120 < Var_121);
                        if (succeeded)
                        {
                          SubResult2_63 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_120 > Var_121);
                          if (succeeded)
                          {
                            SubResult2_63 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_63;
                        else
                        {
                          MR_Word SubResult3_66;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_66, ArgX3_64, ArgY3_65);
                          succeeded = (SubResult3_66 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_66;
                          else
                          {
                            MR_Word SubResult4_69;

                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[2]), &SubResult4_69, ((MR_Box) (ArgX4_67)), ((MR_Box) (ArgY4_68)));
                            succeeded = (SubResult4_69 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_69;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX5_70)), ((MR_Box) (ArgY5_71)));
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
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_String ArgX1_72 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_73 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_75 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                      MR_Word ArgY2_76 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                      MR_Word ArgX3_78 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_79 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_81 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_82 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word ArgX5_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                      MR_Word ArgY5_85 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                      MR_Word SubResult1_74;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_74, ArgX1_72, ArgY1_73);
                      succeeded = (SubResult1_74 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_74;
                      else
                      {
                        MR_Word SubResult2_77;
                        MR_Integer Var_118 = (MR_Integer) (ArgX2_75);
                        MR_Integer Var_119 = (MR_Integer) (ArgY2_76);

                        succeeded = (Var_118 < Var_119);
                        if (succeeded)
                        {
                          SubResult2_77 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_118 > Var_119);
                          if (succeeded)
                          {
                            SubResult2_77 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_77;
                        else
                        {
                          MR_Word SubResult3_80;

                          mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[1]), &SubResult3_80, ((MR_Box) (ArgX3_78)), ((MR_Box) (ArgY3_79)));
                          succeeded = (SubResult3_80 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_80;
                          else
                          {
                            MR_Word SubResult4_83;

                            mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[2]), &SubResult4_83, ((MR_Box) (ArgX4_81)), ((MR_Box) (ArgY4_82)));
                            succeeded = (SubResult4_83 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_83;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&libs__mmakefiles_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX5_84)), ((MR_Box) (ArgY5_85)));
                          }
                        }
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_String ArgY1_4;
          MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_String ArgY2_6;
          MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 2))));
          MR_String ArgY3_8;
          MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 3))));
          MR_String ArgY4_10;
          MR_String ArgX5_11 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 4))));
          MR_String ArgY5_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
            ArgY4_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 3))));
            ArgY5_12 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 4))));
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
          MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_65_65 = (MR_Word) (&libs__mmakefiles_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_65, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_16;
          MR_String ArgX2_17 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_String ArgY2_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_18 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_17, ArgY2_18) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_76_76;
              MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
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
              MR_String ArgX1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_24;
              MR_Word ArgX2_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_26;
              MR_String ArgX3_27 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_28;
              MR_Word ArgX4_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_30;
              MR_Word ArgX5_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_26 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_28 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
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
              MR_String ArgX1_33 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_34;
              MR_Word ArgX2_35 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_36;
              MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_38;
              MR_Word ArgX4_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_40;
              MR_Word ArgX5_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_36 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
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
              MR_String ArgX1_43 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_44;
              MR_Word ArgX2_45 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_46;
              MR_String ArgX3_47 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_48;
              MR_Word ArgX4_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_50;
              MR_Word ArgX5_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_52;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_46 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_48 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
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
              MR_String ArgX1_53 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_54;
              MR_Word ArgX2_55 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_56;
              MR_Word ArgX3_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_58;
              MR_Word ArgX4_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_60;
              MR_Word ArgX5_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_62;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_54 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_56 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
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

void MR_CALL 
libs__mmakefiles____Compare____mmake_condition_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_16 == CastY_17);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_String ArgY2_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_8;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_8, ArgX1_6, ArgY1_7);
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_9, ArgY2_10);
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_String ArgY1_12 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_String ArgX2_14 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_String ArgY2_15 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_13;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_13, ArgX1_11, ArgY1_12);
              succeeded = (SubResult1_13 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_13;
              else
                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_14, ArgY2_15);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_condition_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_6;
          MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_String ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_String ArgY1_10;
          MR_String ArgX2_11 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_String ArgY2_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_12 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_11, ArgY2_12) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
libs__mmakefiles____Compare____mmake_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_action_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Cast_HeadVar1_3 = HeadVar__1_1;
  MR_String Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____maybe_add_mmake_comments_0_0(
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

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_add_mmake_comments_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__mmakefiles____Compare____is_mmake_rule_phony_0_0(
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
libs__mmakefiles____Unify____is_mmake_rule_phony_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
libs__mmakefiles__file_name_group_files_1_f_0(
  MR_Word FileNameGroup_3)
{
  MR_Word HeadVar__2_2;
  MR_String HeadFileName_4;
  MR_Word TailFileNames_5;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, FileNameGroup_3, 1))));

  HeadFileName_4 = ((MR_String) ((MR_hl_field(0, Var_7, 0))));
  TailFileNames_5 = ((MR_Word) ((MR_hl_field(0, Var_7, 1))));
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (HeadFileName_4));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailFileNames_5));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
libs__mmakefiles__append_group_name_3_p_0(
  MR_Word Group_4,
  MR_Word STATE_VARIABLE_SB_0_9,
  MR_Word * STATE_VARIABLE_SB_10)
{
  MR_bool succeeded;
  MR_String GroupName0_6 = ((MR_String) ((MR_hl_field(0, Group_4, 0))));
  MR_String GroupName_8;
  MR_Word Var_16;
  MR_Word Var_18;

  succeeded = (strcmp(GroupName0_6, (MR_String) "") == 0);
  if (succeeded)
    GroupName_8 = (MR_String) "(unnamed)";
  else
    GroupName_8 = GroupName0_6;
  mercury__string__builder__append_string_3_p_0((MR_String) "#   ", STATE_VARIABLE_SB_0_9, &Var_16);
  mercury__string__builder__append_string_3_p_0(GroupName_8, Var_16, &Var_18);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_18, STATE_VARIABLE_SB_10);
}

static void MR_CALL 
libs__mmakefiles__append_block_comment_line_3_p_0(
  MR_String Comment_4,
  MR_Word STATE_VARIABLE_SB_0_6,
  MR_Word * STATE_VARIABLE_SB_7)
{
  MR_Word Var_13;
  MR_Word Var_15;

  mercury__string__builder__append_string_3_p_0((MR_String) "# ", STATE_VARIABLE_SB_0_6, &Var_13);
  mercury__string__builder__append_string_3_p_0(Comment_4, Var_13, &Var_15);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_15, STATE_VARIABLE_SB_7);
}

static void MR_CALL 
libs__mmakefiles__append_mmake_fragment_4_p_0(
  MR_Word WriteComments_5,
  MR_Word MmakeFragment_6,
  MR_Word STATE_VARIABLE_SB_0_16,
  MR_Word * STATE_VARIABLE_SB_17)
{
  libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_49_93_95_48_4_p_0(MmakeFragment_6, STATE_VARIABLE_SB_0_16, STATE_VARIABLE_SB_17);
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_SB_0_3,
  MR_Word * STATE_VARIABLE_SB_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SB_4 = STATE_VARIABLE_SB_0_3;
    else
    {
      MR_Word MmakeFragment_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word MmakeFragments_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_SB_1_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_SB_0_3;

      libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_49_93_95_48_4_p_0(MmakeFragment_10, STATE_VARIABLE_SB_0_3, &STATE_VARIABLE_SB_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = MmakeFragments_11;
      next_value_of_STATE_VARIABLE_SB_0_3 = STATE_VARIABLE_SB_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_SB_0_3 = next_value_of_STATE_VARIABLE_SB_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Word MmakeFragment_6,
  MR_Word STATE_VARIABLE_SB_0_16,
  MR_Word * STATE_VARIABLE_SB_17)
{
  switch (MR_tag((MR_Word) MmakeFragment_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Entry_8 = ((MR_Word) ((MR_hl_field(0, MmakeFragment_6, 0))));

        libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_49_93_95_48_4_p_0(Entry_8, STATE_VARIABLE_SB_0_16, STATE_VARIABLE_SB_17);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Cond_9 = ((MR_Word) ((MR_hl_field(1, MmakeFragment_6, 0))));
        MR_Word ThenEntry_10 = ((MR_Word) ((MR_hl_field(1, MmakeFragment_6, 1))));
        MR_Word ElseEntry_11 = ((MR_Word) ((MR_hl_field(1, MmakeFragment_6, 2))));
        MR_Word STATE_VARIABLE_SB_2_19;
        MR_Word STATE_VARIABLE_SB_3_21;
        MR_Word STATE_VARIABLE_SB_4_22;
        MR_Word STATE_VARIABLE_SB_5_24;
        MR_Word STATE_VARIABLE_SB_6_25;

        switch (MR_tag((MR_Word) Cond_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String GradeComponent_38 = ((MR_String) ((MR_hl_field(0, Cond_9, 0))));
              MR_Word Var_75;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_80;

              mercury__string__builder__append_string_3_p_0((MR_String) "ifeq (\044(findstring ", STATE_VARIABLE_SB_0_16, &Var_75);
              mercury__string__builder__append_string_3_p_0(GradeComponent_38, Var_75, &Var_77);
              mercury__string__builder__append_string_3_p_0((MR_String) ",\044(GRADE)),", Var_77, &Var_78);
              mercury__string__builder__append_string_3_p_0(GradeComponent_38, Var_78, &Var_80);
              mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_80, &STATE_VARIABLE_SB_2_19);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String StrA_39 = ((MR_String) ((MR_hl_field(1, Cond_9, 0))));
              MR_String StrB_40 = ((MR_String) ((MR_hl_field(1, Cond_9, 1))));
              MR_Word Var_68;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_73;

              mercury__string__builder__append_string_3_p_0((MR_String) "ifeq (", STATE_VARIABLE_SB_0_16, &Var_68);
              mercury__string__builder__append_string_3_p_0(StrA_39, Var_68, &Var_70);
              mercury__string__builder__append_string_3_p_0((MR_String) ",", Var_70, &Var_71);
              mercury__string__builder__append_string_3_p_0(StrB_40, Var_71, &Var_73);
              mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_73, &STATE_VARIABLE_SB_2_19);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String StrA_59 = ((MR_String) ((MR_hl_field(2, Cond_9, 0))));
              MR_String StrB_60 = ((MR_String) ((MR_hl_field(2, Cond_9, 1))));
              MR_Word Var_61;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_66;

              mercury__string__builder__append_string_3_p_0((MR_String) "ifneq (", STATE_VARIABLE_SB_0_16, &Var_61);
              mercury__string__builder__append_string_3_p_0(StrA_59, Var_61, &Var_63);
              mercury__string__builder__append_string_3_p_0((MR_String) ",", Var_63, &Var_64);
              mercury__string__builder__append_string_3_p_0(StrB_60, Var_64, &Var_66);
              mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_66, &STATE_VARIABLE_SB_2_19);
            }
            break;
        }
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_SB_2_19, &STATE_VARIABLE_SB_3_21);
        libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_49_93_95_48_4_p_0(ThenEntry_10, STATE_VARIABLE_SB_3_21, &STATE_VARIABLE_SB_4_22);
        mercury__string__builder__append_string_3_p_0((MR_String) "else\n\n", STATE_VARIABLE_SB_4_22, &STATE_VARIABLE_SB_5_24);
        libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_49_93_95_48_4_p_0(ElseEntry_11, STATE_VARIABLE_SB_5_24, &STATE_VARIABLE_SB_6_25);
        mercury__string__builder__append_string_3_p_0((MR_String) "endif # conditional fragment\n\n", STATE_VARIABLE_SB_6_25, STATE_VARIABLE_SB_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ThenFragments_12 = ((MR_Word) ((MR_hl_field(2, MmakeFragment_6, 1))));
        MR_Word ElseFragments_13 = ((MR_Word) ((MR_hl_field(2, MmakeFragment_6, 2))));
        MR_Word STATE_VARIABLE_SB_8_28;
        MR_Word STATE_VARIABLE_SB_9_30;
        MR_Word STATE_VARIABLE_SB_10_31;
        MR_Word STATE_VARIABLE_SB_12_34;
        MR_Word Cond_37 = ((MR_Word) ((MR_hl_field(2, MmakeFragment_6, 0))));

        libs__mmakefiles__append_mmake_condition_3_p_0(Cond_37, STATE_VARIABLE_SB_0_16, &STATE_VARIABLE_SB_8_28);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_SB_8_28, &STATE_VARIABLE_SB_9_30);
        libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(ThenFragments_12, STATE_VARIABLE_SB_9_30, &STATE_VARIABLE_SB_10_31);
        if ((ElseFragments_13 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_SB_12_34 = STATE_VARIABLE_SB_10_31;
        else
        {
          MR_Word STATE_VARIABLE_SB_11_33;
          MR_Word MmakeFragment_86;
          MR_Word MmakeFragments_87;
          MR_Word STATE_VARIABLE_SB_1_90;

          mercury__string__builder__append_string_3_p_0((MR_String) "else\n\n", STATE_VARIABLE_SB_10_31, &STATE_VARIABLE_SB_11_33);
          MmakeFragment_86 = ((MR_Word) ((MR_hl_field(1, ElseFragments_13, 0))));
          MmakeFragments_87 = ((MR_Word) ((MR_hl_field(1, ElseFragments_13, 1))));
          libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_95_95_91_49_93_95_48_4_p_0(MmakeFragment_86, STATE_VARIABLE_SB_11_33, &STATE_VARIABLE_SB_1_90);
          libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_102_114_97_103_109_101_110_116_115_95_95_91_49_93_95_48_4_p_0(MmakeFragments_87, STATE_VARIABLE_SB_1_90, &STATE_VARIABLE_SB_12_34);
        }
        mercury__string__builder__append_string_3_p_0((MR_String) "endif # conditional fragment\n\n", STATE_VARIABLE_SB_12_34, STATE_VARIABLE_SB_17);
      }
      break;
  }
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_SB_7;

  libs__mmakefiles__append_block_comment_line_3_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SB_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SB_7));
}

static void MR_CALL 
libs__mmakefiles__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_101_110_100_95_109_109_97_107_101_95_101_110_116_114_121_95_95_91_49_93_95_48_4_p_0(
  MR_Word MmakeEntry_6,
  MR_Word STATE_VARIABLE_SB_0_66,
  MR_Word * STATE_VARIABLE_SB_67)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_SB_5_90;

  switch (MR_tag((MR_Word) MmakeEntry_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Contents_8 = ((MR_String) ((MR_hl_field(0, MmakeEntry_6, 0))));
        MR_String ModuleName_9 = ((MR_String) ((MR_hl_field(0, MmakeEntry_6, 1))));
        MR_String SourceFile_10 = ((MR_String) ((MR_hl_field(0, MmakeEntry_6, 2))));
        MR_String Version_11 = ((MR_String) ((MR_hl_field(0, MmakeEntry_6, 3))));
        MR_String FullArch_12 = ((MR_String) ((MR_hl_field(0, MmakeEntry_6, 4))));
        MR_Word STATE_VARIABLE_SB_1_70;
        MR_Word STATE_VARIABLE_SB_2_73;
        MR_Word STATE_VARIABLE_SB_3_78;
        MR_Word STATE_VARIABLE_SB_4_85;
        MR_Word Var_195;
        MR_Word Var_197;
        MR_Word Var_199;
        MR_Word Var_201;
        MR_Word Var_202;
        MR_Word Var_204;
        MR_Word Var_206;
        MR_Word Var_208;
        MR_Word Var_210;
        MR_Word Var_212;

        mercury__string__builder__append_string_3_p_0((MR_String) "# vim: ts=8 sw=8 noexpandtab ft=make\n\n", STATE_VARIABLE_SB_0_66, &STATE_VARIABLE_SB_1_70);
        mercury__string__builder__append_string_3_p_0((MR_String) "# Automatically generated ", STATE_VARIABLE_SB_1_70, &Var_195);
        mercury__string__builder__append_string_3_p_0(Contents_8, Var_195, &Var_197);
        mercury__string__builder__append_string_3_p_0((MR_String) " for\n", Var_197, &STATE_VARIABLE_SB_2_73);
        mercury__string__builder__append_string_3_p_0((MR_String) "# module \140", STATE_VARIABLE_SB_2_73, &Var_199);
        mercury__string__builder__append_string_3_p_0(ModuleName_9, Var_199, &Var_201);
        mercury__string__builder__append_string_3_p_0((MR_String) "\' in source file \140", Var_201, &Var_202);
        mercury__string__builder__append_string_3_p_0(SourceFile_10, Var_202, &Var_204);
        mercury__string__builder__append_string_3_p_0((MR_String) "\'.\n", Var_204, &STATE_VARIABLE_SB_3_78);
        mercury__string__builder__append_string_3_p_0((MR_String) "# Generated by Mercury compiler version ", STATE_VARIABLE_SB_3_78, &Var_206);
        mercury__string__builder__append_string_3_p_0(Version_11, Var_206, &Var_208);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_208, &STATE_VARIABLE_SB_4_85);
        mercury__string__builder__append_string_3_p_0((MR_String) "# configured for ", STATE_VARIABLE_SB_4_85, &Var_210);
        mercury__string__builder__append_string_3_p_0(FullArch_12, Var_210, &Var_212);
        mercury__string__builder__append_string_3_p_0((MR_String) ".\n", Var_212, &STATE_VARIABLE_SB_5_90);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CommentLines_13 = ((MR_Word) ((MR_hl_field(1, MmakeEntry_6, 0))));
        MR_Box conv1_STATE_VARIABLE_SB_5_90;

        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&libs__mmakefiles_scalar_common_3[3]), CommentLines_13, ((MR_Box) (STATE_VARIABLE_SB_0_66)), &conv1_STATE_VARIABLE_SB_5_90);
        STATE_VARIABLE_SB_5_90 = ((MR_Word) (conv1_STATE_VARIABLE_SB_5_90));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String VarName_14 = ((MR_String) ((MR_hl_field(2, MmakeEntry_6, 0))));
        MR_String Value_15 = ((MR_String) ((MR_hl_field(2, MmakeEntry_6, 1))));
        MR_Word Var_189;
        MR_Word Var_190;
        MR_Word Var_192;

        mercury__string__builder__append_string_3_p_0(VarName_14, STATE_VARIABLE_SB_0_66, &Var_189);
        mercury__string__builder__append_string_3_p_0((MR_String) " = ", Var_189, &Var_190);
        mercury__string__builder__append_string_3_p_0(Value_15, Var_190, &Var_192);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_192, &STATE_VARIABLE_SB_5_90);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MmakeEntry_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Values_16 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 2))));
            MR_String VarName_167 = ((MR_String) ((MR_hl_field(3, MmakeEntry_6, 1))));

            if ((Values_16 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_187;

              mercury__string__builder__append_string_3_p_0(VarName_167, STATE_VARIABLE_SB_0_66, &Var_187);
              mercury__string__builder__append_string_3_p_0((MR_String) " =\n", Var_187, &STATE_VARIABLE_SB_5_90);
            }
            else
            {
              MR_String HeadValue_17 = ((MR_String) ((MR_hl_field(1, Values_16, 0))));
              MR_Word TailValues_18 = ((MR_Word) ((MR_hl_field(1, Values_16, 1))));

              if ((TailValues_18 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_182;
                MR_Word Var_183;
                MR_Word Var_185;

                mercury__string__builder__append_string_3_p_0(VarName_167, STATE_VARIABLE_SB_0_66, &Var_182);
                mercury__string__builder__append_string_3_p_0((MR_String) " = ", Var_182, &Var_183);
                mercury__string__builder__append_string_3_p_0(HeadValue_17, Var_183, &Var_185);
                mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_185, &STATE_VARIABLE_SB_5_90);
              }
              else
              {
                MR_Word STATE_VARIABLE_SB_10_116;
                MR_Word Var_180;
                MR_String HeadTailValue_304;
                MR_Word TailTailValues_305;
                MR_Word STATE_VARIABLE_SB_2_312;
                MR_Word Var_315;
                MR_Word Var_317;

                mercury__string__builder__append_string_3_p_0(VarName_167, STATE_VARIABLE_SB_0_66, &Var_180);
                mercury__string__builder__append_string_3_p_0((MR_String) " = \\\n", Var_180, &STATE_VARIABLE_SB_10_116);
                HeadTailValue_304 = ((MR_String) ((MR_hl_field(1, TailValues_18, 0))));
                TailTailValues_305 = ((MR_Word) ((MR_hl_field(1, TailValues_18, 1))));
                mercury__string__builder__append_string_3_p_0((MR_String) "\t", STATE_VARIABLE_SB_10_116, &Var_315);
                mercury__string__builder__append_string_3_p_0(HeadValue_17, Var_315, &Var_317);
                mercury__string__builder__append_string_3_p_0((MR_String) " \\\n", Var_317, &STATE_VARIABLE_SB_2_312);
                libs__mmakefiles__append_mmake_var_values_4_p_0(HeadTailValue_304, TailTailValues_305, STATE_VARIABLE_SB_2_312, &STATE_VARIABLE_SB_5_90);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String TargetFile_29;
            MR_Word Var_121;
            MR_Word STATE_VARIABLE_SB_13_122;
            MR_String RuleName_284 = ((MR_String) ((MR_hl_field(3, MmakeEntry_6, 1))));
            MR_Word IsPhony_285 = ((MR_Unsigned) ((MR_hl_field(3, MmakeEntry_6, 2))) & (MR_Integer) 1);
            MR_Word SourceFiles_286 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 4))));
            MR_Word Actions_287 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 5))));
            MR_Word STATE_VARIABLE_SB_12_290;
            MR_Word STATE_VARIABLE_SB_14_291;
            MR_Word STATE_VARIABLE_SB_17_293;
            MR_Word STATE_VARIABLE_SB_22_303;

            libs__mmakefiles__append_rule_name_3_p_0(RuleName_284, STATE_VARIABLE_SB_0_66, &STATE_VARIABLE_SB_12_290);
            TargetFile_29 = ((MR_String) ((MR_hl_field(3, MmakeEntry_6, 3))));
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (TargetFile_29));
              MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            libs__mmakefiles__maybe_append_phony_rule_4_p_0(IsPhony_285, Var_121, STATE_VARIABLE_SB_12_290, &STATE_VARIABLE_SB_13_122);
            libs__mmakefiles__append_mmake_file_name_3_p_0(TargetFile_29, STATE_VARIABLE_SB_13_122, &STATE_VARIABLE_SB_14_291);
            if ((SourceFiles_286 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__string__builder__append_string_3_p_0((MR_String) " :", STATE_VARIABLE_SB_14_291, &STATE_VARIABLE_SB_17_293);
            else
            {
              MR_String HeadSourceFile_261 = ((MR_String) ((MR_hl_field(1, SourceFiles_286, 0))));
              MR_Word TailSourceFiles_262 = ((MR_Word) ((MR_hl_field(1, SourceFiles_286, 1))));
              MR_Word STATE_VARIABLE_SB_18_264;

              mercury__string__builder__append_string_3_p_0((MR_String) " : ", STATE_VARIABLE_SB_14_291, &STATE_VARIABLE_SB_18_264);
              succeeded = (strcmp(RuleName_284, (MR_String) "trans_opt_deps") == 0);
              if (!(succeeded))
              {
                MR_Integer Var_242;
                MR_Integer Var_243;
                MR_Integer Var_245;

                Var_245 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailSourceFiles_262);
                Var_242 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_245);
                Var_243 = libs__mmakefiles__max_horizontal_0_f_0();
                succeeded = (Var_242 > Var_243);
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_SB_19_253;

                mercury__string__builder__append_string_3_p_0((MR_String) "\\\n", STATE_VARIABLE_SB_18_264, &STATE_VARIABLE_SB_19_253);
                libs__mmakefiles__append_mmake_file_names_vertical_4_p_0(HeadSourceFile_261, TailSourceFiles_262, STATE_VARIABLE_SB_19_253, &STATE_VARIABLE_SB_17_293);
              }
              else
                libs__mmakefiles__append_mmake_file_names_horizontal_4_p_0(HeadSourceFile_261, TailSourceFiles_262, STATE_VARIABLE_SB_18_264, &STATE_VARIABLE_SB_17_293);
            }
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_SB_17_293, &STATE_VARIABLE_SB_22_303);
            libs__mmakefiles__append_mmake_actions_3_p_0(Actions_287, STATE_VARIABLE_SB_22_303, &STATE_VARIABLE_SB_5_90);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String RuleName_21 = ((MR_String) ((MR_hl_field(3, MmakeEntry_6, 1))));
            MR_Word IsPhony_22 = ((MR_Unsigned) ((MR_hl_field(3, MmakeEntry_6, 2))) & (MR_Integer) 1);
            MR_Word SourceFiles_24 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 4))));
            MR_Word Actions_25 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 5))));
            MR_String HeadTargetFile_34;
            MR_Word TailTargetFiles_35;
            MR_Word STATE_VARIABLE_SB_12_120;
            MR_Word STATE_VARIABLE_SB_14_124;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word STATE_VARIABLE_SB_15_127;
            MR_Word STATE_VARIABLE_SB_17_130;
            MR_Word STATE_VARIABLE_SB_22_142;

            libs__mmakefiles__append_rule_name_3_p_0(RuleName_21, STATE_VARIABLE_SB_0_66, &STATE_VARIABLE_SB_12_120);
            Var_125 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 3))));
            HeadTargetFile_34 = ((MR_String) ((MR_hl_field(0, Var_125, 0))));
            TailTargetFiles_35 = ((MR_Word) ((MR_hl_field(0, Var_125, 1))));
            {
              Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_126, 0) = ((MR_Box) (HeadTargetFile_34));
              MR_hl_field(1, Var_126, 1) = ((MR_Box) (TailTargetFiles_35));
            }
            libs__mmakefiles__maybe_append_phony_rule_4_p_0(IsPhony_22, Var_126, STATE_VARIABLE_SB_12_120, &STATE_VARIABLE_SB_15_127);
            libs__mmakefiles__append_mmake_file_names_horizontal_4_p_0(HeadTargetFile_34, TailTargetFiles_35, STATE_VARIABLE_SB_15_127, &STATE_VARIABLE_SB_14_124);
            if ((SourceFiles_24 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__string__builder__append_string_3_p_0((MR_String) " :", STATE_VARIABLE_SB_14_124, &STATE_VARIABLE_SB_17_130);
            else
            {
              MR_String HeadSourceFile_38 = ((MR_String) ((MR_hl_field(1, SourceFiles_24, 0))));
              MR_Word TailSourceFiles_39 = ((MR_Word) ((MR_hl_field(1, SourceFiles_24, 1))));
              MR_Word STATE_VARIABLE_SB_18_132;

              mercury__string__builder__append_string_3_p_0((MR_String) " : ", STATE_VARIABLE_SB_14_124, &STATE_VARIABLE_SB_18_132);
              succeeded = (strcmp(RuleName_21, (MR_String) "trans_opt_deps") == 0);
              if (!(succeeded))
              {
                MR_Integer Var_133;
                MR_Integer Var_134;
                MR_Integer Var_136;

                Var_136 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailSourceFiles_39);
                Var_133 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_136);
                Var_134 = libs__mmakefiles__max_horizontal_0_f_0();
                succeeded = (Var_133 > Var_134);
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_SB_19_138;

                mercury__string__builder__append_string_3_p_0((MR_String) "\\\n", STATE_VARIABLE_SB_18_132, &STATE_VARIABLE_SB_19_138);
                libs__mmakefiles__append_mmake_file_names_vertical_4_p_0(HeadSourceFile_38, TailSourceFiles_39, STATE_VARIABLE_SB_19_138, &STATE_VARIABLE_SB_17_130);
              }
              else
                libs__mmakefiles__append_mmake_file_names_horizontal_4_p_0(HeadSourceFile_38, TailSourceFiles_39, STATE_VARIABLE_SB_18_132, &STATE_VARIABLE_SB_17_130);
            }
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_SB_17_130, &STATE_VARIABLE_SB_22_142);
            libs__mmakefiles__append_mmake_actions_3_p_0(Actions_25, STATE_VARIABLE_SB_22_142, &STATE_VARIABLE_SB_5_90);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SourceGroups_41 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 4))));
            MR_Word STATE_VARIABLE_SB_25_147;
            MR_Word STATE_VARIABLE_SB_26_149;
            MR_Word Var_150;
            MR_Word STATE_VARIABLE_SB_27_151;
            MR_Word STATE_VARIABLE_SB_28_153;
            MR_Word STATE_VARIABLE_SB_31_158;
            MR_Word STATE_VARIABLE_SB_34_163;
            MR_String TargetFile_168;
            MR_String RuleName_170 = ((MR_String) ((MR_hl_field(3, MmakeEntry_6, 1))));
            MR_Word IsPhony_171 = ((MR_Unsigned) ((MR_hl_field(3, MmakeEntry_6, 2))) & (MR_Integer) 1);
            MR_Word Actions_172 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 5))));

            libs__mmakefiles__append_rule_name_3_p_0(RuleName_170, STATE_VARIABLE_SB_0_66, &STATE_VARIABLE_SB_25_147);
            libs__mmakefiles__maybe_append_group_names_4_p_0((MR_String) "source", SourceGroups_41, STATE_VARIABLE_SB_25_147, &STATE_VARIABLE_SB_26_149);
            TargetFile_168 = ((MR_String) ((MR_hl_field(3, MmakeEntry_6, 3))));
            {
              Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_150, 0) = ((MR_Box) (TargetFile_168));
              MR_hl_field(1, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            libs__mmakefiles__maybe_append_phony_rule_4_p_0(IsPhony_171, Var_150, STATE_VARIABLE_SB_26_149, &STATE_VARIABLE_SB_27_151);
            libs__mmakefiles__append_mmake_file_name_3_p_0(TargetFile_168, STATE_VARIABLE_SB_27_151, &STATE_VARIABLE_SB_28_153);
            if ((SourceGroups_41 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__string__builder__append_string_3_p_0((MR_String) " :", STATE_VARIABLE_SB_28_153, &STATE_VARIABLE_SB_31_158);
            else
            {
              MR_Word HeadSourceGroup_64 = ((MR_Word) ((MR_hl_field(1, SourceGroups_41, 0))));
              MR_Word TailSourceGroups_65 = ((MR_Word) ((MR_hl_field(1, SourceGroups_41, 1))));
              MR_Word STATE_VARIABLE_SB_32_160;

              mercury__string__builder__append_string_3_p_0((MR_String) " : \\\n", STATE_VARIABLE_SB_28_153, &STATE_VARIABLE_SB_32_160);
              libs__mmakefiles__append_mmake_file_name_groups_vertical_4_p_0(HeadSourceGroup_64, TailSourceGroups_65, STATE_VARIABLE_SB_32_160, &STATE_VARIABLE_SB_31_158);
            }
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_SB_31_158, &STATE_VARIABLE_SB_34_163);
            libs__mmakefiles__append_mmake_actions_3_p_0(Actions_172, STATE_VARIABLE_SB_34_163, &STATE_VARIABLE_SB_5_90);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word TargetGroups0_50;
            MR_Word TargetGroups_59;
            MR_Word HeadTargetGroup_62;
            MR_Word TailTargetGroups_63;
            MR_Word Var_146;
            MR_Word Var_154;
            MR_Word STATE_VARIABLE_SB_29_155;
            MR_Word SourceGroups_224 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 4))));
            MR_Word STATE_VARIABLE_SB_24_227;
            MR_Word STATE_VARIABLE_SB_25_228;
            MR_Word STATE_VARIABLE_SB_26_230;
            MR_Word STATE_VARIABLE_SB_28_231;
            MR_Word STATE_VARIABLE_SB_31_233;
            MR_Word STATE_VARIABLE_SB_34_237;
            MR_String RuleName_238 = ((MR_String) ((MR_hl_field(3, MmakeEntry_6, 1))));
            MR_Word IsPhony_239 = ((MR_Unsigned) ((MR_hl_field(3, MmakeEntry_6, 2))) & (MR_Integer) 1);
            MR_Word Actions_240 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 5))));

            libs__mmakefiles__append_rule_name_3_p_0(RuleName_238, STATE_VARIABLE_SB_0_66, &STATE_VARIABLE_SB_24_227);
            TargetGroups0_50 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 3))));
            Var_146 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TargetGroups0_50);
            libs__mmakefiles__maybe_append_group_names_4_p_0((MR_String) "target", Var_146, STATE_VARIABLE_SB_24_227, &STATE_VARIABLE_SB_25_228);
            libs__mmakefiles__maybe_append_group_names_4_p_0((MR_String) "source", SourceGroups_224, STATE_VARIABLE_SB_25_228, &STATE_VARIABLE_SB_26_230);
            TargetGroups_59 = ((MR_Word) ((MR_hl_field(3, MmakeEntry_6, 3))));
            Var_154 = libs__mmakefiles__file_name_groups_files_1_f_0(TargetGroups_59);
            libs__mmakefiles__maybe_append_phony_rule_4_p_0(IsPhony_239, Var_154, STATE_VARIABLE_SB_26_230, &STATE_VARIABLE_SB_29_155);
            HeadTargetGroup_62 = ((MR_Word) ((MR_hl_field(0, TargetGroups_59, 0))));
            TailTargetGroups_63 = ((MR_Word) ((MR_hl_field(0, TargetGroups_59, 1))));
            libs__mmakefiles__append_mmake_file_name_groups_horizontal_4_p_0(HeadTargetGroup_62, TailTargetGroups_63, STATE_VARIABLE_SB_29_155, &STATE_VARIABLE_SB_28_231);
            if ((SourceGroups_224 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__string__builder__append_string_3_p_0((MR_String) " :", STATE_VARIABLE_SB_28_231, &STATE_VARIABLE_SB_31_233);
            else
            {
              MR_Word HeadSourceGroup_215 = ((MR_Word) ((MR_hl_field(1, SourceGroups_224, 0))));
              MR_Word TailSourceGroups_216 = ((MR_Word) ((MR_hl_field(1, SourceGroups_224, 1))));
              MR_Word STATE_VARIABLE_SB_32_218;

              mercury__string__builder__append_string_3_p_0((MR_String) " : \\\n", STATE_VARIABLE_SB_28_231, &STATE_VARIABLE_SB_32_218);
              libs__mmakefiles__append_mmake_file_name_groups_vertical_4_p_0(HeadSourceGroup_215, TailSourceGroups_216, STATE_VARIABLE_SB_32_218, &STATE_VARIABLE_SB_31_233);
            }
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_SB_31_233, &STATE_VARIABLE_SB_34_237);
            libs__mmakefiles__append_mmake_actions_3_p_0(Actions_240, STATE_VARIABLE_SB_34_237, &STATE_VARIABLE_SB_5_90);
          }
          break;
      }
      break;
  }
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_SB_5_90, STATE_VARIABLE_SB_67);
}

static MR_Box MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__mmakefiles__file_name_group_files_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
libs__mmakefiles__file_name_groups_files_1_f_0(
  MR_Word FileNameGroups_3)
{
  MR_Word FileNames_4;
  MR_Word HeadFileNameGroup_5 = ((MR_Word) ((MR_hl_field(0, FileNameGroups_3, 0))));
  MR_Word TailFileNameGroups_6 = ((MR_Word) ((MR_hl_field(0, FileNameGroups_3, 1))));
  MR_Word FileNamesList_7;
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (HeadFileNameGroup_5));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (TailFileNameGroups_6));
  }
  FileNamesList_7 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), (MR_Word) (&libs__mmakefiles_scalar_common_1[0]), (MR_Word) (&libs__mmakefiles_scalar_common_3[2]), Var_9);
  FileNames_4 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FileNamesList_7);
  return FileNames_4;
}

static void MR_CALL 
libs__mmakefiles__append_mmake_actions_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SB_0_2,
  MR_Word * STATE_VARIABLE_SB_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SB_3 = STATE_VARIABLE_SB_0_2;
    else
    {
      MR_String Action_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Actions_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_SB_1_14;
      MR_Word Var_17;
      MR_Word Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SB_0_2;

      mercury__string__builder__append_string_3_p_0((MR_String) "\t", STATE_VARIABLE_SB_0_2, &Var_17);
      mercury__string__builder__append_string_3_p_0(Action_7, Var_17, &Var_19);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_19, &STATE_VARIABLE_SB_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Actions_8;
      next_value_of_STATE_VARIABLE_SB_0_2 = STATE_VARIABLE_SB_1_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SB_0_2 = next_value_of_STATE_VARIABLE_SB_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__append_mmake_file_name_3_p_0(
  MR_String FileName_4,
  MR_Word STATE_VARIABLE_SB_0_6,
  MR_Word * STATE_VARIABLE_SB_7)
{
  mercury__string__builder__append_string_3_p_0(FileName_4, STATE_VARIABLE_SB_0_6, STATE_VARIABLE_SB_7);
}

static void MR_CALL 
libs__mmakefiles__append_mmake_file_name_groups_vertical_4_p_0(
  MR_Word FileNameGroup_5,
  MR_Word FileNameGroups_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_SB_1_12;
    MR_String FileName_18;
    MR_Word FileNames_19;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, FileNameGroup_5, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    FileName_18 = ((MR_String) ((MR_hl_field(0, Var_20, 0))));
    FileNames_19 = ((MR_Word) ((MR_hl_field(0, Var_20, 1))));
    libs__mmakefiles__append_mmake_file_names_vertical_4_p_0(FileName_18, FileNames_19, STATE_VARIABLE_SB_0_10, &STATE_VARIABLE_SB_1_12);
    if ((FileNameGroups_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SB_11 = STATE_VARIABLE_SB_1_12;
    else
    {
      MR_Word HeadFileNameGroup_8 = ((MR_Word) ((MR_hl_field(1, FileNameGroups_6, 0))));
      MR_Word TailFileNameGroups_9 = ((MR_Word) ((MR_hl_field(1, FileNameGroups_6, 1))));
      MR_Word STATE_VARIABLE_SB_2_14;
      MR_Word STATE_VARIABLE_SB_3_16;
      MR_Word next_value_of_FileNameGroup_5;
      MR_Word next_value_of_FileNameGroups_6;
      MR_Word next_value_of_STATE_VARIABLE_SB_0_10;

      mercury__string__builder__append_string_3_p_0((MR_String) " \\\n", STATE_VARIABLE_SB_1_12, &STATE_VARIABLE_SB_2_14);
      mercury__string__builder__append_string_3_p_0((MR_String) "\t\\\n", STATE_VARIABLE_SB_2_14, &STATE_VARIABLE_SB_3_16);
      // direct tailcall eliminated
      ;
      next_value_of_FileNameGroup_5 = HeadFileNameGroup_8;
      next_value_of_FileNameGroups_6 = TailFileNameGroups_9;
      next_value_of_STATE_VARIABLE_SB_0_10 = STATE_VARIABLE_SB_3_16;
      FileNameGroup_5 = next_value_of_FileNameGroup_5;
      FileNameGroups_6 = next_value_of_FileNameGroups_6;
      STATE_VARIABLE_SB_0_10 = next_value_of_STATE_VARIABLE_SB_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__append_mmake_file_names_vertical_4_p_0(
  MR_String FileName_5,
  MR_Word FileNames_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_SB_1_13;
    MR_Word STATE_VARIABLE_SB_2_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__builder__append_string_3_p_0((MR_String) "\t\t", STATE_VARIABLE_SB_0_10, &STATE_VARIABLE_SB_1_13);
    mercury__string__builder__append_string_3_p_0(FileName_5, STATE_VARIABLE_SB_1_13, &STATE_VARIABLE_SB_2_14);
    if ((FileNames_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SB_11 = STATE_VARIABLE_SB_2_14;
    else
    {
      MR_String HeadFileName_8 = ((MR_String) ((MR_hl_field(1, FileNames_6, 0))));
      MR_Word TailFileNames_9 = ((MR_Word) ((MR_hl_field(1, FileNames_6, 1))));
      MR_Word STATE_VARIABLE_SB_3_16;
      MR_String next_value_of_FileName_5;
      MR_Word next_value_of_FileNames_6;
      MR_Word next_value_of_STATE_VARIABLE_SB_0_10;

      mercury__string__builder__append_string_3_p_0((MR_String) " \\\n", STATE_VARIABLE_SB_2_14, &STATE_VARIABLE_SB_3_16);
      // direct tailcall eliminated
      ;
      next_value_of_FileName_5 = HeadFileName_8;
      next_value_of_FileNames_6 = TailFileNames_9;
      next_value_of_STATE_VARIABLE_SB_0_10 = STATE_VARIABLE_SB_3_16;
      FileName_5 = next_value_of_FileName_5;
      FileNames_6 = next_value_of_FileNames_6;
      STATE_VARIABLE_SB_0_10 = next_value_of_STATE_VARIABLE_SB_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__append_mmake_file_name_groups_horizontal_4_p_0(
  MR_Word FileNameGroup_5,
  MR_Word FileNameGroups_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_SB_1_12;
    MR_String FileName_16;
    MR_Word FileNames_17;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, FileNameGroup_5, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    FileName_16 = ((MR_String) ((MR_hl_field(0, Var_18, 0))));
    FileNames_17 = ((MR_Word) ((MR_hl_field(0, Var_18, 1))));
    libs__mmakefiles__append_mmake_file_names_horizontal_4_p_0(FileName_16, FileNames_17, STATE_VARIABLE_SB_0_10, &STATE_VARIABLE_SB_1_12);
    if ((FileNameGroups_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SB_11 = STATE_VARIABLE_SB_1_12;
    else
    {
      MR_Word HeadFileNameGroup_8 = ((MR_Word) ((MR_hl_field(1, FileNameGroups_6, 0))));
      MR_Word TailFileNameGroups_9 = ((MR_Word) ((MR_hl_field(1, FileNameGroups_6, 1))));
      MR_Word STATE_VARIABLE_SB_2_14;
      MR_Word next_value_of_FileNameGroup_5;
      MR_Word next_value_of_FileNameGroups_6;
      MR_Word next_value_of_STATE_VARIABLE_SB_0_10;

      mercury__string__builder__append_string_3_p_0((MR_String) " ", STATE_VARIABLE_SB_1_12, &STATE_VARIABLE_SB_2_14);
      // direct tailcall eliminated
      ;
      next_value_of_FileNameGroup_5 = HeadFileNameGroup_8;
      next_value_of_FileNameGroups_6 = TailFileNameGroups_9;
      next_value_of_STATE_VARIABLE_SB_0_10 = STATE_VARIABLE_SB_2_14;
      FileNameGroup_5 = next_value_of_FileNameGroup_5;
      FileNameGroups_6 = next_value_of_FileNameGroups_6;
      STATE_VARIABLE_SB_0_10 = next_value_of_STATE_VARIABLE_SB_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__append_mmake_file_names_horizontal_4_p_0(
  MR_String FileName_5,
  MR_Word FileNames_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_SB_1_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__builder__append_string_3_p_0(FileName_5, STATE_VARIABLE_SB_0_10, &STATE_VARIABLE_SB_1_12);
    if ((FileNames_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SB_11 = STATE_VARIABLE_SB_1_12;
    else
    {
      MR_String HeadFileName_8 = ((MR_String) ((MR_hl_field(1, FileNames_6, 0))));
      MR_Word TailFileNames_9 = ((MR_Word) ((MR_hl_field(1, FileNames_6, 1))));
      MR_Word STATE_VARIABLE_SB_2_14;
      MR_String next_value_of_FileName_5;
      MR_Word next_value_of_FileNames_6;
      MR_Word next_value_of_STATE_VARIABLE_SB_0_10;

      mercury__string__builder__append_string_3_p_0((MR_String) " ", STATE_VARIABLE_SB_1_12, &STATE_VARIABLE_SB_2_14);
      // direct tailcall eliminated
      ;
      next_value_of_FileName_5 = HeadFileName_8;
      next_value_of_FileNames_6 = TailFileNames_9;
      next_value_of_STATE_VARIABLE_SB_0_10 = STATE_VARIABLE_SB_2_14;
      FileName_5 = next_value_of_FileName_5;
      FileNames_6 = next_value_of_FileNames_6;
      STATE_VARIABLE_SB_0_10 = next_value_of_STATE_VARIABLE_SB_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__append_rule_name_3_p_0(
  MR_String RuleName_4,
  MR_Word STATE_VARIABLE_SB_0_6,
  MR_Word * STATE_VARIABLE_SB_7)
{
  MR_bool succeeded = (strcmp(RuleName_4, (MR_String) "") == 0);

  if (succeeded)
    *STATE_VARIABLE_SB_7 = STATE_VARIABLE_SB_0_6;
  else
  {
    MR_Word Var_13;
    MR_Word Var_15;

    mercury__string__builder__append_string_3_p_0((MR_String) "# RULE ", STATE_VARIABLE_SB_0_6, &Var_13);
    mercury__string__builder__append_string_3_p_0(RuleName_4, Var_13, &Var_15);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_15, STATE_VARIABLE_SB_7);
  }
}

static void MR_CALL 
libs__mmakefiles__maybe_append_phony_rule_4_p_0(
  MR_Word IsPhony_5,
  MR_Word FileNames_6,
  MR_Word STATE_VARIABLE_SB_0_9,
  MR_Word * STATE_VARIABLE_SB_10)
{
  switch (IsPhony_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_SB_10 = STATE_VARIABLE_SB_0_9;
      break;
    case (MR_Integer) 1:
      {
        MR_String FileNamesStr_8;
        MR_Word Var_17;
        MR_Word Var_19;

        FileNamesStr_8 = mercury__string__join_list_2_f_0((MR_String) " ", FileNames_6);
        mercury__string__builder__append_string_3_p_0((MR_String) ".PHONY: ", STATE_VARIABLE_SB_0_9, &Var_17);
        mercury__string__builder__append_string_3_p_0(FileNamesStr_8, Var_17, &Var_19);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_19, STATE_VARIABLE_SB_10);
      }
      break;
  }
}

static void MR_CALL 
libs__mmakefiles__append_mmake_var_values_4_p_0(
  MR_String HeadValue_5,
  MR_Word TailValues_6,
  MR_Word STATE_VARIABLE_SB_0_10,
  MR_Word * STATE_VARIABLE_SB_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailValues_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_26;
      MR_Word Var_28;

      mercury__string__builder__append_string_3_p_0((MR_String) "\t", STATE_VARIABLE_SB_0_10, &Var_26);
      mercury__string__builder__append_string_3_p_0(HeadValue_5, Var_26, &Var_28);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_28, STATE_VARIABLE_SB_11);
    }
    else
    {
      MR_String HeadTailValue_8 = ((MR_String) ((MR_hl_field(1, TailValues_6, 0))));
      MR_Word TailTailValues_9 = ((MR_Word) ((MR_hl_field(1, TailValues_6, 1))));
      MR_Word STATE_VARIABLE_SB_2_19;
      MR_Word Var_22;
      MR_Word Var_24;
      MR_String next_value_of_HeadValue_5;
      MR_Word next_value_of_TailValues_6;
      MR_Word next_value_of_STATE_VARIABLE_SB_0_10;

      mercury__string__builder__append_string_3_p_0((MR_String) "\t", STATE_VARIABLE_SB_0_10, &Var_22);
      mercury__string__builder__append_string_3_p_0(HeadValue_5, Var_22, &Var_24);
      mercury__string__builder__append_string_3_p_0((MR_String) " \\\n", Var_24, &STATE_VARIABLE_SB_2_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadValue_5 = HeadTailValue_8;
      next_value_of_TailValues_6 = TailTailValues_9;
      next_value_of_STATE_VARIABLE_SB_0_10 = STATE_VARIABLE_SB_2_19;
      HeadValue_5 = next_value_of_HeadValue_5;
      TailValues_6 = next_value_of_TailValues_6;
      STATE_VARIABLE_SB_0_10 = next_value_of_STATE_VARIABLE_SB_0_10;
      continue;
    }
    break;
  }
}

static MR_Integer MR_CALL 
libs__mmakefiles__max_horizontal_0_f_0(void)
{
  return (MR_Integer) 1;
}

static void MR_CALL 
libs__mmakefiles__maybe_append_group_names_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_SB_10;

  libs__mmakefiles__append_group_name_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SB_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SB_10));
}

static void MR_CALL 
libs__mmakefiles__maybe_append_group_names_4_p_0(
  MR_String TargetOrSource_5,
  MR_Word Groups_6,
  MR_Word STATE_VARIABLE_SB_0_8,
  MR_Word * STATE_VARIABLE_SB_9)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles__all_group_names_are_empty_1_p_0(Groups_6);
  if (succeeded)
    *STATE_VARIABLE_SB_9 = STATE_VARIABLE_SB_0_8;
  else
  {
    MR_Word STATE_VARIABLE_SB_1_12;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Box conv1_STATE_VARIABLE_SB_9;

    mercury__string__builder__append_string_3_p_0((MR_String) "# ", STATE_VARIABLE_SB_0_8, &Var_21);
    mercury__string__builder__append_string_3_p_0(TargetOrSource_5, Var_21, &Var_23);
    mercury__string__builder__append_string_3_p_0((MR_String) " group names:\n", Var_23, &STATE_VARIABLE_SB_1_12);
    mercury__list__foldl_4_p_2((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&libs__mmakefiles_scalar_common_3[1]), Groups_6, ((MR_Box) (STATE_VARIABLE_SB_1_12)), &conv1_STATE_VARIABLE_SB_9);
    *STATE_VARIABLE_SB_9 = ((MR_Word) (conv1_STATE_VARIABLE_SB_9));
  }
}

static MR_bool MR_CALL 
libs__mmakefiles__all_group_names_are_empty_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Group_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Groups_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_String GroupName_4 = ((MR_String) ((MR_hl_field(0, Group_2, 0))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (strcmp(GroupName_4, (MR_String) "") == 0);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Groups_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
libs__mmakefiles__append_mmake_condition_3_p_0(
  MR_Word Cond_4,
  MR_Word STATE_VARIABLE_SB_0_9,
  MR_Word * STATE_VARIABLE_SB_10)
{
  switch (MR_tag((MR_Word) Cond_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String GradeComponent_6 = ((MR_String) ((MR_hl_field(0, Cond_4, 0))));
        MR_Word Var_48;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_53;

        mercury__string__builder__append_string_3_p_0((MR_String) "ifeq (\044(findstring ", STATE_VARIABLE_SB_0_9, &Var_48);
        mercury__string__builder__append_string_3_p_0(GradeComponent_6, Var_48, &Var_50);
        mercury__string__builder__append_string_3_p_0((MR_String) ",\044(GRADE)),", Var_50, &Var_51);
        mercury__string__builder__append_string_3_p_0(GradeComponent_6, Var_51, &Var_53);
        mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_53, STATE_VARIABLE_SB_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String StrA_7 = ((MR_String) ((MR_hl_field(1, Cond_4, 0))));
        MR_String StrB_8 = ((MR_String) ((MR_hl_field(1, Cond_4, 1))));
        MR_Word Var_41;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_46;

        mercury__string__builder__append_string_3_p_0((MR_String) "ifeq (", STATE_VARIABLE_SB_0_9, &Var_41);
        mercury__string__builder__append_string_3_p_0(StrA_7, Var_41, &Var_43);
        mercury__string__builder__append_string_3_p_0((MR_String) ",", Var_43, &Var_44);
        mercury__string__builder__append_string_3_p_0(StrB_8, Var_44, &Var_46);
        mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_46, STATE_VARIABLE_SB_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String StrA_32 = ((MR_String) ((MR_hl_field(2, Cond_4, 0))));
        MR_String StrB_33 = ((MR_String) ((MR_hl_field(2, Cond_4, 1))));
        MR_Word Var_34;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_39;

        mercury__string__builder__append_string_3_p_0((MR_String) "ifneq (", STATE_VARIABLE_SB_0_9, &Var_34);
        mercury__string__builder__append_string_3_p_0(StrA_32, Var_34, &Var_36);
        mercury__string__builder__append_string_3_p_0((MR_String) ",", Var_36, &Var_37);
        mercury__string__builder__append_string_3_p_0(StrB_33, Var_37, &Var_39);
        mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_39, STATE_VARIABLE_SB_10);
      }
      break;
  }
}

MR_String MR_CALL 
libs__mmakefiles__silent_noop_action_0_f_0(void)
{
  return (MR_String) "\100:";
}

MR_Word MR_CALL 
libs__mmakefiles__construct_singleton_file_name_group_2_f_0(
  MR_String GroupName_4,
  MR_String FileName_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (FileName_5));
    MR_hl_field(0, Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (GroupName_4));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
libs__mmakefiles__construct_file_name_maybe_group_2_f_0(
  MR_String GroupName_4,
  MR_Word FileNames_5)
{
  MR_Word Groups_6;

  if ((FileNames_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Groups_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String HeadFileName_7 = ((MR_String) ((MR_hl_field(1, FileNames_5, 0))));
    MR_Word TailFileNames_8 = ((MR_Word) ((MR_hl_field(1, FileNames_5, 1))));
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) (HeadFileName_7));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) (TailFileNames_8));
    }
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_9, 0) = ((MR_Box) (GroupName_4));
      MR_hl_field(0, Var_9, 1) = ((MR_Box) (Var_10));
    }
    {
      Groups_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Groups_6, 0) = ((MR_Box) (Var_9));
      MR_hl_field(1, Groups_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  return Groups_6;
}

MR_Word MR_CALL 
libs__mmakefiles__make_multiline_action_1_f_0(
  MR_Word Lines0_3)
{
  MR_Word Lines_4;

  if ((Lines0_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Lines_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String HeadLine0_5 = ((MR_String) ((MR_hl_field(1, Lines0_3, 0))));
    MR_Word TailLines0_6 = ((MR_Word) ((MR_hl_field(1, Lines0_3, 1))));

    Lines_4 = libs__mmakefiles__make_multiline_action_lag_2_f_0(HeadLine0_5, TailLines0_6);
  }
  return Lines_4;
}

static MR_Word MR_CALL 
libs__mmakefiles__make_multiline_action_lag_2_f_0(
  MR_String HeadLine0_4,
  MR_Word TailLines0_5)
{
  MR_Word Lines_6;

  if ((TailLines0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Lines_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Lines_6, 0) = ((MR_Box) (HeadLine0_4));
      MR_hl_field(1, Lines_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_String HeadTailLine0_7 = ((MR_String) ((MR_hl_field(1, TailLines0_5, 0))));
    MR_Word TailTailLines0_8 = ((MR_Word) ((MR_hl_field(1, TailLines0_5, 1))));
    MR_String HeadLine_9;
    MR_String HeadTailLine1_10;
    MR_Word TailLines_11;

    HeadLine_9 = mercury__string__f_43_43_2_f_0(HeadLine0_4, (MR_String) " \\");
    HeadTailLine1_10 = mercury__string__f_43_43_2_f_0((MR_String) "\t", HeadTailLine0_7);
    TailLines_11 = libs__mmakefiles__make_multiline_action_lag_2_f_0(HeadTailLine1_10, TailTailLines0_8);
    {
      Lines_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Lines_6, 0) = ((MR_Box) (HeadLine_9));
      MR_hl_field(1, Lines_6, 1) = ((MR_Box) (TailLines_11));
    }
  }
  return Lines_6;
}

static void MR_CALL 
libs__mmakefiles__mmakefile_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_SB_17;

  libs__mmakefiles__append_mmake_fragment_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SB_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SB_17));
}

MR_String MR_CALL 
libs__mmakefiles__mmakefile_to_string_1_f_0(
  MR_Word MmakeFile_3)
{
  MR_String MmakeFileStr_4;
  MR_Word SB0_5;
  MR_Word SB_6;
  MR_Box conv1_SB_6;

  SB0_5 = mercury__string__builder__init_0_f_0();
  mercury__cord__foldl_pred_4_p_2((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&libs__mmakefiles_scalar_common_5[0]), MmakeFile_3, ((MR_Box) (SB0_5)), &conv1_SB_6);
  SB_6 = ((MR_Word) (conv1_SB_6));
  MmakeFileStr_4 = mercury__string__builder__to_string_1_f_0(SB_6);
  return MmakeFileStr_4;
}

MR_Word MR_CALL 
libs__mmakefiles__mmake_entry_to_fragment_1_f_0(
  MR_Word Entry_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Entry_3));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
libs__mmakefiles__add_mmake_entries_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
libs__mmakefiles__add_mmake_entries_3_p_0(
  MR_Word Entries_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_6,
  MR_Word * STATE_VARIABLE_MmakeFile_7)
{
  MR_Word Var_8;

  Var_8 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&libs__mmakefiles_scalar_common_3[0]), Entries_4);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_8, STATE_VARIABLE_MmakeFile_0_6, STATE_VARIABLE_MmakeFile_7);
}

void MR_CALL 
libs__mmakefiles__add_mmake_entry_3_p_0(
  MR_Word Entry_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_6,
  MR_Word * STATE_VARIABLE_MmakeFile_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (Entry_4));
  }
  mercury__cord__snoc_3_p_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), ((MR_Box) (Var_8)), STATE_VARIABLE_MmakeFile_0_6, STATE_VARIABLE_MmakeFile_7);
}

void MR_CALL 
libs__mmakefiles__add_mmake_fragments_3_p_0(
  MR_Word Fragments_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_6,
  MR_Word * STATE_VARIABLE_MmakeFile_7)
{
  mercury__cord__snoc_list_3_p_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Fragments_4, STATE_VARIABLE_MmakeFile_0_6, STATE_VARIABLE_MmakeFile_7);
}

void MR_CALL 
libs__mmakefiles__add_mmake_fragment_3_p_0(
  MR_Word Fragment_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_6,
  MR_Word * STATE_VARIABLE_MmakeFile_7)
{
  mercury__cord__snoc_3_p_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), ((MR_Box) (Fragment_4)), STATE_VARIABLE_MmakeFile_0_6, STATE_VARIABLE_MmakeFile_7);
}

void MR_CALL 
libs__mmakefiles__start_mmakefile_1_p_0(
  MR_Word * STATE_VARIABLE_MmakeFile_3)
{
  *STATE_VARIABLE_MmakeFile_3 = mercury__cord__init_0_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____is_mmake_rule_phony_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____is_mmake_rule_phony_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____is_mmake_rule_phony_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____is_mmake_rule_phony_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____maybe_add_mmake_comments_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____maybe_add_mmake_comments_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____maybe_add_mmake_comments_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____maybe_add_mmake_comments_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____mmake_action_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____mmake_action_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_condition_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____mmake_condition_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_condition_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____mmake_condition_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____mmake_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____mmake_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____mmake_file_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____mmake_file_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_file_name_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____mmake_file_name_group_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_file_name_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____mmake_file_name_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_fragment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____mmake_fragment_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_fragment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____mmake_fragment_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmake_grade_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____mmake_grade_component_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____mmake_grade_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____mmake_grade_component_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__mmakefiles____Unify____mmakefile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__mmakefiles____Unify____mmakefile_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__mmakefiles____Compare____mmakefile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__mmakefiles____Compare____mmakefile_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
  MR_register_type_ctor_info(&libs__mmakefiles__libs__mmakefiles__type_ctor_info_maybe_add_mmake_comments_0);
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
