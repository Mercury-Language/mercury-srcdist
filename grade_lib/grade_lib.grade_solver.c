/*
** Automatically generated from `grade_solver.m'
** by the Mercury compiler,
** version rotd-2020-06-16
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


// :- module grade_lib.grade_solver.
// :- implementation.

/*
INIT mercury__grade_lib__grade_solver__init
ENDINIT
*/

#include "grade_lib.grade_solver.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "grade_lib.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "var_value_names.mih"
#include "grade_lib.grade_setup.mih"
#include "grade_lib.grade_spec.mih"
#include "grade_lib.grade_state.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0;

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_solver__pair__ti_pair_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_pair__ti_pair_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_solver__type_ctor_info_installed_grade_0;

static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_solver__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0;

static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_solver__pair__pti_pair_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0;

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0;

static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_solver__pair__pti_pair_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__set_ordlist__pti_set_ordlist_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_solver__list__ti_list_1grade_lib__grade_state__type_ctor_info_requirement_0;

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_solver__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_state__type_ctor_info_solver_var_0;

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_solver__one_or_more__ti_one_or_more_1grade_lib__grade_spec__type_ctor_info_solver_var_id_0;

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_failure_info_0_0[3];

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_failure_info_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_failure_info_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_failure_info_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_failure_info_0[1];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_failure_info_0[1];

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_solver__list__ti_list_1grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0;

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_failure_tree_0_0[2];

static const MR_DuArgLocn grade_lib__grade_solver__grade_lib__grade_solver__field_locns_failure_tree_0_0[2];

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_failure_tree_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_failure_tree_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_failure_tree_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_failure_tree_0[1];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_failure_tree_0[1];

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_solver__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_installed_grade_0_0[2];

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_installed_grade_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_installed_grade_0[1];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_installed_grade_0[1];

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_installed_grade_solution_0_0[1];

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_0;

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_installed_grade_solution_0_1[1];

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_1;

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_2;

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_solution_0_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_solution_0_1[1];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_solution_0_2[1];

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_installed_grade_solution_0[3];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_installed_grade_solution_0[3];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_installed_grade_solution_0[3];

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_changed_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_changed_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_value_ordered_maybe_changed_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_name_ordered_maybe_changed_0[2];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_maybe_changed_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_found_failure_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_found_failure_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_value_ordered_maybe_found_failure_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_name_ordered_maybe_found_failure_0[2];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_maybe_found_failure_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_should_commit_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_should_commit_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_value_ordered_should_commit_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_name_ordered_should_commit_0[2];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_should_commit_0[2];

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_solution_0_0[1];

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solution_0_0;

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_solution_0_1[1];

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solution_0_1;

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_solution_0_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_solution_0_1[1];

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_solution_0[2];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_solution_0[2];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_solution_0[2];

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_solve_counts_0_0[3];

static const MR_ConstString grade_lib__grade_solver__grade_lib__grade_solver__field_names_solve_counts_0_0[3];

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solve_counts_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_solve_counts_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_solve_counts_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_solve_counts_0[1];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_solve_counts_0[1];

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_solver__list__ti_list_1grade_lib__grade_solver__type_ctor_info_failure_tree_0;

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_why_var_is_not_value_0_0[4];

static const MR_DuArgLocn grade_lib__grade_solver__grade_lib__grade_solver__field_locns_why_var_is_not_value_0_0[4];

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_why_var_is_not_value_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_why_var_is_not_value_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_why_var_is_not_value_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_why_var_is_not_value_0[1];

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_why_var_is_not_value_0[1];

static MR_bool MR_CALL 
grade_lib__grade_solver__IntroducedFrom__pred__solver_var_to_str__928__1_2_p_0(
  MR_Integer CntPoss_8,
  MR_Integer HeadVar__2_18);

static MR_bool MR_CALL 
grade_lib__grade_solver__IntroducedFrom__pred__restrict_possibilities_to__505__1_2_p_0(
  MR_Word STATE_VARIABLE_SetValueIds_0_1,
  MR_Word HeadVar__2_16);

static void MR_CALL 
grade_lib__grade_solver____Compare____maybe_found_failure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____maybe_found_failure_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____maybe_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____maybe_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
grade_lib__grade_solver__accumulate_why_var_is_not_values_5_p_0(
  MR_Word FailureInfo_6,
  MR_Word _VarId_7,
  MR_Word VarValue_8,
  MR_Word STATE_VARIABLE_RevWhyNots_0_34,
  MR_Word * STATE_VARIABLE_RevWhyNots_35);

static void MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word FailureInfo_6,
  MR_Word VarValue_8,
  MR_Word STATE_VARIABLE_RevWhyNots_0_34,
  MR_Word * STATE_VARIABLE_RevWhyNots_35);

static void MR_CALL 
grade_lib__grade_solver__find_requirement_by_id_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ReqId_2,
  MR_Word * IdRequirement_3);

static MR_bool MR_CALL 
grade_lib__grade_solver__solver_var_value_in_set_2_p_0(
  MR_Word ValueIds_3,
  MR_Word VarValue_4);

static MR_String MR_CALL 
grade_lib__grade_solver__success_value_to_str_2_f_0(
  MR_String Prefix_4,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
grade_lib__grade_solver__failure_tree_why_not_to_string_5_f_0(
  MR_String CurIndentStr_7,
  MR_String EachIndentStr_8,
  MR_Word _VarId_9,
  MR_String VarName_10,
  MR_Word WhyNot_11);

static MR_String MR_CALL 
grade_lib__grade_solver__solver_var_value_to_str_2_f_0(
  MR_Integer CntPoss_4,
  MR_Word SolverVarValue_5);

static MR_bool MR_CALL 
grade_lib__grade_solver__solver_var_pair_to_str_2_f_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
grade_lib__grade_solver__solver_var_pair_to_str_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
grade_lib__grade_solver__solver_var_pair_to_str_2_f_0(
  MR_String Prefix_4,
  MR_Word HeadVar__2_2);

static MR_Integer MR_CALL 
grade_lib__grade_solver__count_possible_values_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
grade_lib__grade_solver__is_value_possible_and_available_4_p_0(
  MR_Word InstalledGrades_5,
  MR_Word VarId_6,
  MR_Word Value_7,
  MR_Word * ValueId_8);

static MR_bool MR_CALL 
grade_lib__grade_solver__is_value_available_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarId_6,
  MR_Word ValueId_7);

static MR_bool MR_CALL 
grade_lib__grade_solver__is_installed_grade_viable_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
grade_lib__grade_solver__is_value_possible_2_p_0(
  MR_Word GradeValueId_3,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
grade_lib__grade_solver__match_success_map_2_p_0(
  MR_Word SuccPairs_3,
  MR_Word InstalledGrade_4);

static void MR_CALL 
grade_lib__grade_solver__accumulate_the_one_poss_value_4_p_0(
  MR_Word VarId_5,
  MR_Word SolverVar_6,
  MR_Word STATE_VARIABLE_OnePossValues_0_13,
  MR_Word * STATE_VARIABLE_OnePossValues_14);

static void MR_CALL 
grade_lib__grade_solver__get_poss_values_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
grade_lib__grade_solver__cnt_poss_classes_6_p_0(
  MR_Word SolverVarId_7,
  MR_Word SolverVar_8,
  MR_Word STATE_VARIABLE_ZeroCntVarIds_0_14,
  MR_Word * STATE_VARIABLE_ZeroCntVarIds_15,
  MR_Integer STATE_VARIABLE_NumMore_0_16,
  MR_Integer * STATE_VARIABLE_NumMore_17);

static MR_Box MR_CALL 
grade_lib__grade_solver__soln_to_str_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
grade_lib__grade_solver__soln_to_str_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
grade_lib__grade_solver__failure_tree_to_string_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
grade_lib__grade_solver__failure_tree_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
grade_lib__grade_solver__failure_tree_to_string_3_f_0(
  MR_String CurIndentStr_5,
  MR_String EachIndentStr_6,
  MR_Word FailureTree_7);

static MR_Box MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_97_105_108_117_114_101_95_116_114_101_101_95_119_104_121_95_110_111_116_95_116_111_95_115_116_114_105_110_103_95_95_91_51_93_95_48_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_97_105_108_117_114_101_95_116_114_101_101_95_119_104_121_95_110_111_116_95_116_111_95_115_116_114_105_110_103_95_95_91_51_93_95_48_5_f_0(
  MR_String CurIndentStr_7,
  MR_String EachIndentStr_8,
  MR_String VarName_10,
  MR_Word WhyNot_11);

static void MR_CALL 
grade_lib__grade_solver__failure_info_to_failure_trees_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver__zero_count_var_to_failure_tree_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
grade_lib__grade_solver__zero_count_var_to_failure_tree_3_p_0(
  MR_Word FailureInfo_4,
  MR_Word ZeroCntVarId_5,
  MR_Word * FailureTree_6);

static MR_Box MR_CALL 
grade_lib__grade_solver__solver_var_map_to_str_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
grade_lib__grade_solver__solve_best_installed_grade_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
grade_lib__grade_solver__solve_best_installed_grade_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
grade_lib__grade_solver__solve_best_installed_grade_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
grade_lib__grade_solver__solve_best_installed_grade_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
grade_lib__grade_solver__pick_best_viable_grade_6_p_0(
  MR_Word SolverVarMap0_7,
  MR_Word SolverVarPriorities_8,
  MR_Word Commit_9,
  MR_Word HeadViableInstalledGrade_10,
  MR_Word TailViableInstalledGrades_11,
  MR_Word * MaybeBestInstalledGrade_12);

static MR_bool MR_CALL 
grade_lib__grade_solver__pick_first_viable_value_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
grade_lib__grade_solver__pick_first_viable_value_9_p_0(
  MR_Word SolverVarMap0_10,
  MR_Word SolverVarPriorities_11,
  MR_Word Commit_12,
  MR_Word InstalledGrades_13,
  MR_Word SelectedVarId_14,
  MR_Word LaterVarIds_15,
  MR_Word FirstViableValueId_16,
  MR_Word LaterViableValueIds_17,
  MR_Word * MaybeBestInstalledGrade_18);

static MR_bool MR_CALL 
grade_lib__grade_solver__pick_first_var_with_viable_choice_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver__pick_first_var_with_viable_choice_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * SelectedVarId_4,
  MR_Word * SelectedVarViableValueIds_5,
  MR_Word * LaterVarIds_6);

static void MR_CALL 
grade_lib__grade_solver__solve_absolute_loop_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
grade_lib__grade_solver__solve_absolute_loop_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
grade_lib__grade_solver__solve_absolute_loop_8_p_0(
  MR_Word AllRequirements_9,
  MR_Word STATE_VARIABLE_CurRequirements_0_17,
  MR_Word * STATE_VARIABLE_CurRequirements_18,
  MR_Word STATE_VARIABLE_SolverVarPriorities_0_19,
  MR_Word STATE_VARIABLE_SolverVarMap_0_20,
  MR_Word STATE_VARIABLE_SolveCounts_0_21,
  MR_Word * STATE_VARIABLE_SolveCounts_22,
  MR_Word * Soln_14);

static void MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_102_105_114_115_116_95_112_111_115_115_105_98_108_101_95_118_97_108_117_101_95_97_110_100_95_99_111_109_109_105_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
grade_lib__grade_solver__set_values_not_possible_labeling_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
grade_lib__grade_solver__find_first_undetermined_var_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * LaterSolverVarIds_2,
  MR_Word SolverMap_3,
  MR_Word * FirstVarId_4,
  MR_Word * FirstVar_5);

static void MR_CALL 
grade_lib__grade_solver__propagate_to_fixpoint_6_p_0(
  MR_Word Requirements0_7,
  MR_Word * Requirements_8,
  MR_Word STATE_VARIABLE_SolverVarMap_0_23,
  MR_Word * STATE_VARIABLE_SolverVarMap_24,
  MR_Word STATE_VARIABLE_SolveCounts_0_25,
  MR_Word * STATE_VARIABLE_SolveCounts_26);

static void MR_CALL 
grade_lib__grade_solver__propagate_pass_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevRequirements_0_2,
  MR_Word * STATE_VARIABLE_RevRequirements_3,
  MR_Word STATE_VARIABLE_SolverVarMap_0_4,
  MR_Word * STATE_VARIABLE_SolverVarMap_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7,
  MR_Word STATE_VARIABLE_FoundFailure_0_8,
  MR_Word * STATE_VARIABLE_FoundFailure_9);

static MR_bool MR_CALL 
grade_lib__grade_solver__restrict_possibilities_to_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
grade_lib__grade_solver__restrict_possibilities_to_6_p_0(
  MR_Word STATE_VARIABLE_SetValueIds_0_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CntPoss_0_3,
  MR_Integer * STATE_VARIABLE_CntPoss_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
grade_lib__grade_solver__set_value_to_not_possible_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Values_4);

static MR_bool MR_CALL 
grade_lib__grade_solver__some_value_is_possible_2_p_0(
  MR_Word Values_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
grade_lib__grade_solver__is_value_possible_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SearchValueId_2,
  MR_Word * Possible_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____failure_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____failure_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____failure_tree_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____failure_tree_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____installed_grade_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____installed_grade_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____installed_grade_solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____installed_grade_solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____maybe_found_failure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____maybe_found_failure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____should_commit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____should_commit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____solve_counts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____solve_counts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____success_soln_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____success_soln_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____why_var_is_not_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_solver____Compare____why_var_is_not_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_1[9][3];

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_2[7][2];

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_3[4][5];

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_4[2][1];

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_5[2][9];

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_6[3][7];

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_7[5][6];

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_8[1][8];




static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_1[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&grade_lib__grade_solver_scalar_common_5[0])),
    ((MR_Box) (grade_lib__grade_solver__solve_absolute_loop_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&grade_lib__grade_solver_scalar_common_6[0])),
    ((MR_Box) (grade_lib__grade_solver__solve_absolute_loop_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&grade_lib__grade_solver_scalar_common_5[0])),
    ((MR_Box) (grade_lib__grade_solver__solve_best_installed_grade_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&grade_lib__grade_solver_scalar_common_6[0])),
    ((MR_Box) (grade_lib__grade_solver__solve_best_installed_grade_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_2[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_solver_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0))
  },
};

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_pair__ti_pair_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&grade_lib__grade_solver__set_ordlist__pti_set_ordlist_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0))
  },
};

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_5[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_6[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_pair__ti_pair_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_pair__ti_pair_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_solver__type_ctor_info_installed_grade_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_7[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&grade_lib__grade_solver__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&grade_lib__grade_solver__pair__pti_pair_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_info_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&grade_lib__grade_solver__pair__pti_pair_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box grade_lib__grade_solver_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_info_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0)),
    ((MR_Box) (&grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_solver__pair__ti_pair_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_pair__ti_pair_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_solver__pair__ti_pair_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_solver__type_ctor_info_installed_grade_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_solver__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_solver__pair__pti_pair_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__list__pti_list_1__plain_grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 grade_lib__grade_solver__pair__pti_pair_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 grade_lib__grade_solver__set_ordlist__pti_set_ordlist_1__plain_grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_solver__list__ti_list_1grade_lib__grade_state__type_ctor_info_requirement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_0)
  }
};

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_solver__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_state__type_ctor_info_solver_var_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_TypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0)
  }
};

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_solver__one_or_more__ti_one_or_more_1grade_lib__grade_spec__type_ctor_info_solver_var_id_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)
  }
};

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_failure_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__list__ti_list_1grade_lib__grade_state__type_ctor_info_requirement_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_state__type_ctor_info_solver_var_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__one_or_more__ti_one_or_more_1grade_lib__grade_spec__type_ctor_info_solver_var_id_0)
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_failure_info_0_0 = {
  (MR_String) "failure_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_solver__grade_lib__grade_solver__field_types_failure_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_failure_info_0_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_failure_info_0_0
};

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_failure_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_failure_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_failure_info_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_failure_info_0_0
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_failure_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_solver____Unify____failure_info_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____failure_info_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "failure_info",
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_failure_info_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_failure_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_failure_info_0
};

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_solver__list__ti_list_1grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0)
  }
};

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_failure_tree_0_0[2] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__list__ti_list_1grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0)
};

static const MR_DuArgLocn grade_lib__grade_solver__grade_lib__grade_solver__field_locns_failure_tree_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 5
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_failure_tree_0_0 = {
  (MR_String) "failure_tree",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_solver__grade_lib__grade_solver__field_types_failure_tree_0_0,
  NULL,
  grade_lib__grade_solver__grade_lib__grade_solver__field_locns_failure_tree_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_failure_tree_0_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_failure_tree_0_0
};

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_failure_tree_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_failure_tree_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_failure_tree_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_failure_tree_0_0
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_failure_tree_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_solver____Unify____failure_tree_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____failure_tree_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "failure_tree",
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_failure_tree_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_failure_tree_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_failure_tree_0
};

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_solver__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
  }
};

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_installed_grade_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_0_0 = {
  (MR_String) "installed_grade",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_solver__grade_lib__grade_solver__field_types_installed_grade_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_0_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_0_0
};

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_installed_grade_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_installed_grade_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_0_0
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_installed_grade_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_solver____Unify____installed_grade_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____installed_grade_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "installed_grade",
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_installed_grade_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_installed_grade_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_installed_grade_0
};

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_installed_grade_solution_0_0[1] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_info_0)
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_0 = {
  (MR_String) "installed_grade_spec_is_inconsistent",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_solver__grade_lib__grade_solver__field_types_installed_grade_solution_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_installed_grade_solution_0_1[1] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0)
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_1 = {
  (MR_String) "installed_grade_success",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  grade_lib__grade_solver__grade_lib__grade_solver__field_types_installed_grade_solution_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_2 = {
  (MR_String) "no_such_installed_grade",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_solution_0_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_2
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_solution_0_1[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_1
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_solution_0_2[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_0
};

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_installed_grade_solution_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_solution_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_solution_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_installed_grade_solution_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_installed_grade_solution_0[3] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_0,
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_1,
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_installed_grade_solution_0_2
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_installed_grade_solution_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_solution_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_solver____Unify____installed_grade_solution_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____installed_grade_solution_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "installed_grade_solution",
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_installed_grade_solution_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_installed_grade_solution_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_installed_grade_solution_0
};

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "not_changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "changed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_value_ordered_maybe_changed_0[2] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_changed_0_0,
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_changed_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_name_ordered_maybe_changed_0[2] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_changed_0_1,
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_changed_0_0
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_maybe_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_solver____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____maybe_changed_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "maybe_changed",
  {     grade_lib__grade_solver__grade_lib__grade_solver__enum_name_ordered_maybe_changed_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__enum_value_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_maybe_changed_0
};

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_found_failure_0_0 = {
  (MR_String) "havent_found_failure",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_found_failure_0_1 = {
  (MR_String) "found_failure",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_value_ordered_maybe_found_failure_0[2] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_found_failure_0_0,
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_found_failure_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_name_ordered_maybe_found_failure_0[2] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_found_failure_0_1,
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_maybe_found_failure_0_0
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_maybe_found_failure_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_maybe_found_failure_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_solver____Unify____maybe_found_failure_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____maybe_found_failure_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "maybe_found_failure",
  {     grade_lib__grade_solver__grade_lib__grade_solver__enum_name_ordered_maybe_found_failure_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__enum_value_ordered_maybe_found_failure_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_maybe_found_failure_0
};

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_should_commit_0_0 = {
  (MR_String) "should_commit",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_should_commit_0_1 = {
  (MR_String) "should_not_commit",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_value_ordered_should_commit_0[2] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_should_commit_0_0,
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_should_commit_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__enum_name_ordered_should_commit_0[2] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_should_commit_0_0,
  &grade_lib__grade_solver__grade_lib__grade_solver__enum_functor_desc_should_commit_0_1
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_should_commit_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_should_commit_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_solver____Unify____should_commit_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____should_commit_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "should_commit",
  {     grade_lib__grade_solver__grade_lib__grade_solver__enum_name_ordered_should_commit_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__enum_value_ordered_should_commit_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_should_commit_0
};

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_solution_0_0[1] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_info_0)
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solution_0_0 = {
  (MR_String) "soln_failure",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_solver__grade_lib__grade_solver__field_types_solution_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_solution_0_1[1] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solution_0_1 = {
  (MR_String) "soln_success",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  grade_lib__grade_solver__grade_lib__grade_solver__field_types_solution_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_solution_0_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solution_0_0
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_solution_0_1[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solution_0_1
};

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_solution_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_solution_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_solution_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_solution_0[2] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solution_0_0,
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solution_0_1
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_solution_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_solution_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_solver____Unify____solution_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____solution_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "solution",
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_solution_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_solution_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_solution_0
};

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_solve_counts_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString grade_lib__grade_solver__grade_lib__grade_solver__field_names_solve_counts_0_0[3] = {
  (MR_String) "sc_num_label_steps",
  (MR_String) "sc_num_passes",
  (MR_String) "sc_num_req_tests"
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solve_counts_0_0 = {
  (MR_String) "solve_counts",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_solver__grade_lib__grade_solver__field_types_solve_counts_0_0,
  grade_lib__grade_solver__grade_lib__grade_solver__field_names_solve_counts_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_solve_counts_0_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solve_counts_0_0
};

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_solve_counts_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_solve_counts_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_solve_counts_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_solve_counts_0_0
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_solve_counts_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_solve_counts_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_solver____Unify____solve_counts_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____solve_counts_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "solve_counts",
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_solve_counts_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_solve_counts_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_solve_counts_0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_success_soln_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (grade_lib__grade_solver____Unify____success_soln_map_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____success_soln_map_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "success_soln_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&grade_lib__grade_solver__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_solver__list__ti_list_1grade_lib__grade_solver__type_ctor_info_failure_tree_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0)
  }
};

static const MR_PseudoTypeInfo grade_lib__grade_solver__grade_lib__grade_solver__field_types_why_var_is_not_value_0_0[4] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_solver__list__ti_list_1grade_lib__grade_solver__type_ctor_info_failure_tree_0)
};

static const MR_DuArgLocn grade_lib__grade_solver__grade_lib__grade_solver__field_locns_why_var_is_not_value_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 7
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
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
  }
};

static const MR_DuFunctorDesc grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_why_var_is_not_value_0_0 = {
  (MR_String) "why_var_is_not_value",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_solver__grade_lib__grade_solver__field_types_why_var_is_not_value_0_0,
  NULL,
  grade_lib__grade_solver__grade_lib__grade_solver__field_locns_why_var_is_not_value_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_why_var_is_not_value_0_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_why_var_is_not_value_0_0
};

static const MR_DuPtagLayout grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_why_var_is_not_value_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_solver__grade_lib__grade_solver__du_stag_ordered_why_var_is_not_value_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_why_var_is_not_value_0[1] = {
  &grade_lib__grade_solver__grade_lib__grade_solver__du_functor_desc_why_var_is_not_value_0_0
};

static const MR_Integer grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_why_var_is_not_value_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_solver____Unify____why_var_is_not_value_0_0_10001)),
  ((MR_Box) (grade_lib__grade_solver____Compare____why_var_is_not_value_0_0_10001)),
  (MR_String) "grade_lib.grade_solver",
  (MR_String) "why_var_is_not_value",
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_name_ordered_why_var_is_not_value_0 },
  {     grade_lib__grade_solver__grade_lib__grade_solver__du_ptag_ordered_why_var_is_not_value_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  grade_lib__grade_solver__grade_lib__grade_solver__functor_number_map_why_var_is_not_value_0
};

static MR_bool MR_CALL 
grade_lib__grade_solver__IntroducedFrom__pred__solver_var_to_str__928__1_2_p_0(
  MR_Integer CntPoss_8,
  MR_Integer HeadVar__2_18)
{
  {
    MR_bool succeeded = (CntPoss_8 == HeadVar__2_18);

    return succeeded;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__IntroducedFrom__pred__restrict_possibilities_to__505__1_2_p_0(
  MR_Word STATE_VARIABLE_SetValueIds_0_1,
  MR_Word HeadVar__2_16)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_2[0]), ((MR_Box) (STATE_VARIABLE_SetValueIds_0_1)), ((MR_Box) (HeadVar__2_16)));
    return succeeded;
  }
}

void MR_CALL 
grade_lib__grade_solver____Compare____why_var_is_not_value_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 127);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 127);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;
      MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_23 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_24 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_23 > Var_24);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
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
            mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_solver____Unify____why_var_is_not_value_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 127);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 127);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer Var_15;
      MR_Integer Var_16;

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
        if (succeeded)
        {
          Var_15 = (MR_Integer) (ArgX2_5);
          Var_16 = (MR_Integer) (ArgY2_6);
          succeeded = (Var_15 == Var_16);
          if (succeeded)
          {
            TypeInfo_14_14 = (MR_Word) (&grade_lib__grade_solver_scalar_common_2[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
grade_lib__grade_solver____Compare____success_soln_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
grade_lib__grade_solver____Unify____success_soln_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
grade_lib__grade_solver____Compare____solve_counts_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
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
grade_lib__grade_solver____Unify____solve_counts_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
grade_lib__grade_solver____Compare____solution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        grade_lib__grade_solver____Compare____failure_info_0_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
      }
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_solver____Unify____solution_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = grade_lib__grade_solver____Unify____failure_info_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&grade_lib__grade_solver_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
grade_lib__grade_solver____Compare____should_commit_0_0(
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
grade_lib__grade_solver____Unify____should_commit_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____maybe_found_failure_0_0(
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
grade_lib__grade_solver____Unify____maybe_found_failure_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____maybe_changed_0_0(
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
grade_lib__grade_solver____Unify____maybe_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
grade_lib__grade_solver____Compare____installed_grade_solution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_21 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_12 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                  grade_lib__grade_solver____Compare____installed_grade_0_0(HeadVar__1_1, Var_21, ArgY1_12);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  grade_lib__grade_solver____Compare____failure_info_0_0(HeadVar__1_1, Var_20, ArgY1_5);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
grade_lib__grade_solver____Unify____installed_grade_solution_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_8 == CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              succeeded = grade_lib__grade_solver____Unify____installed_grade_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = grade_lib__grade_solver____Unify____failure_info_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
grade_lib__grade_solver____Compare____installed_grade_0_0(
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
        mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_solver____Unify____installed_grade_0_0(
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
        TypeInfo_9_9 = (MR_Word) (&grade_lib__grade_solver_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
grade_lib__grade_solver____Compare____failure_tree_0_0(
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
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 31);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 31);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;
      MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_solver____Unify____failure_tree_0_0(
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
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 31);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 31);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&grade_lib__grade_solver_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
grade_lib__grade_solver____Compare____failure_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_solver____Unify____failure_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_2[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&grade_lib__grade_solver_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&grade_lib__grade_solver_scalar_common_2[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver__accumulate_why_var_is_not_values_5_p_0(
  MR_Word FailureInfo_6,
  MR_Word _VarId_7,
  MR_Word VarValue_8,
  MR_Word STATE_VARIABLE_RevWhyNots_0_34,
  MR_Word * STATE_VARIABLE_RevWhyNots_35)
{
  grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0(FailureInfo_6, VarValue_8, STATE_VARIABLE_RevWhyNots_0_34, STATE_VARIABLE_RevWhyNots_35);
}

static void MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_RevWhyNots_35;

    grade_lib__grade_solver__accumulate_why_var_is_not_values_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_RevWhyNots_35);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_RevWhyNots_35));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = grade_lib__grade_solver__solver_var_value_in_set_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_RevWhyNots_35;

    grade_lib__grade_solver__accumulate_why_var_is_not_values_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RevWhyNots_35);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RevWhyNots_35));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = grade_lib__grade_solver__solver_var_value_in_set_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word FailureInfo_6,
  MR_Word VarValue_8,
  MR_Word STATE_VARIABLE_RevWhyNots_0_34,
  MR_Word * STATE_VARIABLE_RevWhyNots_35)
{
  {
    MR_bool succeeded;
    MR_Word ValueId_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), VarValue_8, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word Possible_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarValue_8, (MR_Integer) 1))));

    if ((Possible_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevWhyNots_35 = STATE_VARIABLE_RevWhyNots_0_34;
    else
    {
      MR_Word NotPossibleWhy_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Possible_11, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) NotPossibleWhy_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(NotPossibleWhy_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_RevWhyNots_35 = STATE_VARIABLE_RevWhyNots_0_34;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_RevWhyNots_35 = STATE_VARIABLE_RevWhyNots_0_34;
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.accumulate_why_var_is_not_values\'/5", (MR_String) "npw_labeling");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ReqAppl_13 = (MR_Word) (MR_body((MR_Word) (NotPossibleWhy_12), (MR_Integer) 1));
            MR_Word ReqId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReqAppl_13, (MR_Integer) 0))));
            MR_String ReqDesc_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), ReqAppl_13, (MR_Integer) 1))));
            MR_Word ReqDir_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ReqAppl_13, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Requirements_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailureInfo_6, (MR_Integer) 0))));
            MR_Word AppliedRequirement_20;
            MR_Word IfVarId_23;
            MR_Word IfValueId_24;
            MR_Word ThenVarId_25;
            MR_Word ThenValueIds_26;
            MR_Word SubTree_27;
            MR_Word SubWhyNots_29;
            MR_Word SubTrees_30;
            MR_Word WhyNot_33;

            grade_lib__grade_solver__find_requirement_by_id_3_p_0(Requirements_17, ReqId_14, &AppliedRequirement_20);
            IfVarId_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AppliedRequirement_20, (MR_Integer) 2))) >> 12)) & (MR_Integer) 31);
            IfValueId_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AppliedRequirement_20, (MR_Integer) 2))) >> 5)) & (MR_Integer) 127);
            ThenVarId_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AppliedRequirement_20, (MR_Integer) 2))) & (MR_Integer) 31);
            ThenValueIds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AppliedRequirement_20, (MR_Integer) 3))));
            switch (ReqDir_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_37;
                  MR_Word SolverVarMap_49;
                  MR_Word SolverVar_51;
                  MR_Word Values_54;
                  MR_Word ValuesInSet_55;
                  MR_Word RevWhyNots_56;
                  MR_Word WhyNots_57;
                  MR_Word Var_58;
                  MR_Word Var_59;
                  MR_Box conv0_SolverVar_51;
                  MR_Box conv2_RevWhyNots_56;

                  Var_37 = mercury__set__list_to_set_1_f_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ThenValueIds_26);
                  SolverVarMap_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailureInfo_6, (MR_Integer) 1))));
                  mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), SolverVarMap_49, ((MR_Box) (ThenVarId_25)), &conv0_SolverVar_51);
                  SolverVar_51 = ((MR_Word) (conv0_SolverVar_51));
                  Values_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar_51, (MR_Integer) 2))));
                  {
                    Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_3[3]));
                    MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Var_37));
                  }
                  mercury__list__filter_3_p_0((MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0), Var_58, Values_54, &ValuesInSet_55);
                  {
                    Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_8[0]));
                    MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (FailureInfo_6));
                    MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (ThenVarId_25));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0), (MR_Word) (&grade_lib__grade_solver_scalar_common_2[3]), Var_59, ValuesInSet_55, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevWhyNots_56);
                  RevWhyNots_56 = ((MR_Word) (conv2_RevWhyNots_56));
                  mercury__list__reverse_2_p_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0), RevWhyNots_56, &WhyNots_57);
                  {
                    SubTree_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SubTree_27, 0) = (MR_Box) ((MR_Unsigned) (ThenVarId_25));
                    MR_hl_field(MR_mktag(0), SubTree_27, 1) = ((MR_Box) (WhyNots_57));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_36;
                  MR_Word SolverVarMap_75;
                  MR_Word SolverVar_77;
                  MR_Word Values_80;
                  MR_Word ValuesInSet_81;
                  MR_Word RevWhyNots_82;
                  MR_Word WhyNots_83;
                  MR_Word Var_84;
                  MR_Word Var_85;
                  MR_Box conv3_SolverVar_77;
                  MR_Box conv5_RevWhyNots_82;

                  Var_36 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ((MR_Box) (IfValueId_24)));
                  SolverVarMap_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailureInfo_6, (MR_Integer) 1))));
                  mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), SolverVarMap_75, ((MR_Box) (IfVarId_23)), &conv3_SolverVar_77);
                  SolverVar_77 = ((MR_Word) (conv3_SolverVar_77));
                  Values_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar_77, (MR_Integer) 2))));
                  {
                    Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_3[3]));
                    MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (Var_36));
                  }
                  mercury__list__filter_3_p_0((MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0), Var_84, Values_80, &ValuesInSet_81);
                  {
                    Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_8[0]));
                    MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_119_104_121_95_118_97_114_95_105_115_95_110_111_116_95_118_97_108_117_101_115_95_95_91_50_93_95_48_5_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (FailureInfo_6));
                    MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (IfVarId_23));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0), (MR_Word) (&grade_lib__grade_solver_scalar_common_2[3]), Var_85, ValuesInSet_81, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_RevWhyNots_82);
                  RevWhyNots_82 = ((MR_Word) (conv5_RevWhyNots_82));
                  mercury__list__reverse_2_p_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0), RevWhyNots_82, &WhyNots_83);
                  {
                    SubTree_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SubTree_27, 0) = (MR_Box) ((MR_Unsigned) (IfVarId_23));
                    MR_hl_field(MR_mktag(0), SubTree_27, 1) = ((MR_Box) (WhyNots_83));
                  }
                }
                break;
            }
            SubWhyNots_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTree_27, (MR_Integer) 1))));
            if ((SubWhyNots_29 == (MR_Word) ((MR_Unsigned) 0U)))
              SubTrees_30 = (MR_Word) ((MR_Unsigned) 0U);
            else
              {
                SubTrees_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SubTrees_30, 0) = ((MR_Box) (SubTree_27));
                MR_hl_field(MR_mktag(1), SubTrees_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            {
              WhyNot_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), WhyNot_33, 0) = (MR_Box) ((MR_Unsigned) (ValueId_10));
              MR_hl_field(MR_mktag(0), WhyNot_33, 1) = ((MR_Box) (ReqId_14));
              MR_hl_field(MR_mktag(0), WhyNot_33, 2) = ((MR_Box) (ReqDesc_15));
              MR_hl_field(MR_mktag(0), WhyNot_33, 3) = ((MR_Box) (SubTrees_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevWhyNots_35 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WhyNot_33));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevWhyNots_0_34));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
grade_lib__grade_solver__find_requirement_by_id_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ReqId_2,
  MR_Word * IdRequirement_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.find_requirement_by_id\'/3", (MR_String) "id not in list");
        return;
      }
    else
    {
      MR_Word Requirement_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Requirements_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Requirement_8, (MR_Integer) 0))));
      MR_Integer Var_19 = (MR_Integer) (ReqId_2);
      MR_Integer Var_20 = (MR_Integer) (Var_17);

      succeeded = (Var_19 == Var_20);
      if (succeeded)
        *IdRequirement_3 = Requirement_8;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Requirements_9;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__solver_var_value_in_set_2_p_0(
  MR_Word ValueIds_3,
  MR_Word VarValue_4)
{
  {
    MR_bool succeeded;
    MR_Word ValueId_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), VarValue_4, (MR_Integer) 0))) & (MR_Integer) 127);

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), ValueIds_3, ((MR_Box) (ValueId_5)));
    return succeeded;
  }
}

static MR_String MR_CALL 
grade_lib__grade_solver__success_value_to_str_2_f_0(
  MR_String Prefix_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_String Str_7;
    MR_Word VarId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ValueId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String VarName_8;
    MR_String ValueName_9;
    MR_String Var_19;
    MR_String Var_21;
    MR_String Var_22;

    var_value_names__solver_var_name_2_p_1(&VarName_8, VarId_5);
    var_value_names__solver_var_value_name_2_p_1(&ValueName_9, ValueId_6);
    Var_19 = mercury__string__f_43_43_2_f_0(ValueName_9, (MR_String) "\n");
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_19);
    Var_22 = mercury__string__f_43_43_2_f_0(VarName_8, Var_21);
    Str_7 = mercury__string__f_43_43_2_f_0(Prefix_4, Var_22);
    return Str_7;
  }
}

static MR_String MR_CALL 
grade_lib__grade_solver__failure_tree_why_not_to_string_5_f_0(
  MR_String CurIndentStr_7,
  MR_String EachIndentStr_8,
  MR_Word _VarId_9,
  MR_String VarName_10,
  MR_Word WhyNot_11)
{
  {
    MR_String Str_12;

    Str_12 = grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_97_105_108_117_114_101_95_116_114_101_101_95_119_104_121_95_110_111_116_95_116_111_95_115_116_114_105_110_103_95_95_91_51_93_95_48_5_f_0(CurIndentStr_7, EachIndentStr_8, VarName_10, WhyNot_11);
    return Str_12;
  }
}

static MR_String MR_CALL 
grade_lib__grade_solver__solver_var_value_to_str_2_f_0(
  MR_Integer CntPoss_4,
  MR_Word SolverVarValue_5)
{
  {
    MR_bool succeeded;
    MR_String Str_6;
    MR_Word ValueId_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SolverVarValue_5, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word Possible_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVarValue_5, (MR_Integer) 1))));
    MR_String ValueName_9;

    var_value_names__solver_var_value_name_2_p_1(&ValueName_9, ValueId_7);
    if ((Possible_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (CntPoss_4 == (MR_Integer) 1);
      if (succeeded)
        Str_6 = mercury__string__f_43_43_2_f_0(ValueName_9, (MR_String) " yes");
      else
        Str_6 = mercury__string__f_43_43_2_f_0(ValueName_9, (MR_String) " maybe");
    }
    else
    {
      MR_Word WhyNot_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Possible_8, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) WhyNot_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(WhyNot_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Str_6 = mercury__string__f_43_43_2_f_0(ValueName_9, (MR_String) " no (config)");
              break;
            case (MR_Integer) 1:
              Str_6 = mercury__string__f_43_43_2_f_0(ValueName_9, (MR_String) " no (user)");
              break;
            case (MR_Integer) 2:
              Str_6 = mercury__string__f_43_43_2_f_0(ValueName_9, (MR_String) " no (labeling)");
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ReqAppl_11 = (MR_Word) (MR_body((MR_Word) (WhyNot_10), (MR_Integer) 1));
            MR_Word ReqId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReqAppl_11, (MR_Integer) 0))));
            MR_Word ReqDir_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ReqAppl_11, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Integer ReqIdNum_15 = (MR_Integer) (ReqId_12);
            MR_String ReqDirStr_16;
            MR_String Var_47;
            MR_String Var_49;
            MR_String Var_50;
            MR_String Var_57;
            MR_String Var_59;

            switch (ReqDir_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ReqDirStr_16 = (MR_String) "delete_if_value";
                break;
              case (MR_Integer) 0:
                ReqDirStr_16 = (MR_String) "narrow_then_values";
                break;
            }
            Var_47 = mercury__string__f_43_43_2_f_0(ReqDirStr_16, (MR_String) ")");
            Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_47);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_4[1]), ReqIdNum_15, &Var_50);
            Var_57 = mercury__string__f_43_43_2_f_0(Var_50, Var_49);
            Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " no (req ", Var_57);
            Str_6 = mercury__string__f_43_43_2_f_0(ValueName_9, Var_59);
          }
          break;
      }
    }
    return Str_6;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__solver_var_pair_to_str_2_f_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = grade_lib__grade_solver__IntroducedFrom__pred__solver_var_to_str__928__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
grade_lib__grade_solver__solver_var_pair_to_str_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_Str_6;

    conv0_Str_6 = grade_lib__grade_solver__solver_var_value_to_str_2_f_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Str_6));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
grade_lib__grade_solver__solver_var_pair_to_str_2_f_0(
  MR_String Prefix_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Str_7;
    MR_Word SolverVarName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word SolverVar_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_11;
    MR_Integer CntPoss_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SolverVar_6, (MR_Integer) 1))));
    MR_Word Values_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar_6, (MR_Integer) 2))));
    MR_String VarName_18;
    MR_Word ValuesStrs_19;
    MR_String ValuesStr_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Integer Var_26;
    MR_String Var_41;
    MR_String Var_43;
    MR_String Var_44;
    MR_String Var_51;
    MR_String Var_53;
    MR_String Var_54;

    var_value_names__solver_var_name_2_p_1(&VarName_18, SolverVarName_5);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (grade_lib__grade_solver__solver_var_pair_to_str_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (CntPoss_16));
    }
    ValuesStrs_19 = mercury__list__map_2_f_0((MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Values_17);
    ValuesStr_20 = mercury__string__join_list_2_f_0((MR_String) ", ", ValuesStrs_19);
    Var_26 = grade_lib__grade_solver__count_possible_values_1_f_0(Values_17);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (grade_lib__grade_solver__solver_var_pair_to_str_2_f_0_2));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (CntPoss_16));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Var_26));
    }
    mercury__require__expect_3_p_0(Var_23, (MR_String) "function \140grade_lib.grade_solver.solver_var_to_str\'/2", (MR_String) "CntPoss mismatch");
    Var_41 = mercury__string__f_43_43_2_f_0(ValuesStr_20, (MR_String) "\n");
    Var_43 = mercury__string__f_43_43_2_f_0((MR_String) " possible\n\t", Var_41);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_4[1]), CntPoss_16, &Var_44);
    Var_51 = mercury__string__f_43_43_2_f_0(Var_44, Var_43);
    Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_51);
    Var_54 = mercury__string__f_43_43_2_f_0(VarName_18, Var_53);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "solver var ", Var_54);
    Str_7 = mercury__string__f_43_43_2_f_0(Prefix_4, Var_11);
    return Str_7;
  }
}

static MR_Integer MR_CALL 
grade_lib__grade_solver__count_possible_values_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word SolverVarValue_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SolverVarValues_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer NTail_6;
      MR_Word Possible_8;

      NTail_6 = grade_lib__grade_solver__count_possible_values_1_f_0(SolverVarValues_4);
      Possible_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVarValue_3, (MR_Integer) 1))));
      if ((Possible_8 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) NTail_6 + (MR_Unsigned) 1);
      else
        HeadVar__2_2 = NTail_6;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__is_value_possible_and_available_4_p_0(
  MR_Word InstalledGrades_5,
  MR_Word VarId_6,
  MR_Word Value_7,
  MR_Word * ValueId_8)
{
  {
    MR_bool succeeded;
    MR_Word Possible_9;

    *ValueId_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Value_7, (MR_Integer) 0))) & (MR_Integer) 127);
    Possible_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Value_7, (MR_Integer) 1))));
    succeeded = (Possible_9 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = grade_lib__grade_solver__is_value_available_3_p_0(InstalledGrades_5, VarId_6, *ValueId_8);
    return succeeded;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__is_value_available_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarId_6,
  MR_Word ValueId_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorInfo_11_11;
    MR_Word TypeCtorInfo_12_12;
    MR_Word InstalledGrade_4;
    MR_Word InstalledGrades_5;
    MR_Word GradeSuccMap_9;
    MR_Word GradeValueId_10;
    MR_Box conv0_GradeValueId_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      InstalledGrade_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      InstalledGrades_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      GradeSuccMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstalledGrade_4, (MR_Integer) 1))));
      TypeCtorInfo_11_11 = (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0);
      TypeCtorInfo_12_12 = (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0);
      mercury__map__lookup_3_p_0(TypeCtorInfo_11_11, TypeCtorInfo_12_12, GradeSuccMap_9, ((MR_Box) (VarId_6)), &conv0_GradeValueId_10);
      GradeValueId_10 = ((MR_Word) (conv0_GradeValueId_10));
      succeeded = (ValueId_7 == GradeValueId_10);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = InstalledGrades_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__is_installed_grade_viable_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word VarId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word VarIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GradeSuccMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SolverVar_12;
      MR_Word GradeValueId_13;
      MR_Word Values_16;
      MR_Box conv0_SolverVar_12;
      MR_Box conv1_GradeValueId_13;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), HeadVar__1_1, ((MR_Box) (VarId_7)), &conv0_SolverVar_12);
      SolverVar_12 = ((MR_Word) (conv0_SolverVar_12));
      mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), GradeSuccMap_11, ((MR_Box) (VarId_7)), &conv1_GradeValueId_13);
      GradeValueId_13 = ((MR_Word) (conv1_GradeValueId_13));
      Values_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar_12, (MR_Integer) 2))));
      succeeded = grade_lib__grade_solver__is_value_possible_2_p_0(GradeValueId_13, Values_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = VarIds_8;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__is_value_possible_2_p_0(
  MR_Word GradeValueId_3,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Value_4;
    MR_Word Values_5;
    MR_Word ValueId_6;
    MR_Word Possible_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Value_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Values_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      ValueId_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Value_4, (MR_Integer) 0))) & (MR_Integer) 127);
      Possible_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Value_4, (MR_Integer) 1))));
      succeeded = (GradeValueId_3 == ValueId_6);
      if (succeeded)
        succeeded = (Possible_7 == (MR_Word) ((MR_Unsigned) 0U));
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Values_5;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__match_success_map_2_p_0(
  MR_Word SuccPairs_3,
  MR_Word InstalledGrade_4)
{
  {
    MR_bool succeeded;
    MR_Word GradeSuccMap_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstalledGrade_4, (MR_Integer) 1))));
    MR_Word GradeSuccPairs_7;

    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), GradeSuccMap_6, &GradeSuccPairs_7);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&grade_lib__grade_solver_scalar_common_2[2]), ((MR_Box) (SuccPairs_3)), ((MR_Box) (GradeSuccPairs_7)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver__accumulate_the_one_poss_value_4_p_0(
  MR_Word VarId_5,
  MR_Word SolverVar_6,
  MR_Word STATE_VARIABLE_OnePossValues_0_13,
  MR_Word * STATE_VARIABLE_OnePossValues_14)
{
  {
    MR_bool succeeded;
    MR_Word Values_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar_6, (MR_Integer) 2))));
    MR_Word PossValueIds_11;
    MR_Word ValueId_12;
    MR_Word Var_15;

    grade_lib__grade_solver__get_poss_values_2_p_0(Values_10, &PossValueIds_11);
    succeeded = (PossValueIds_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ValueId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PossValueIds_11, (MR_Integer) 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PossValueIds_11, (MR_Integer) 1))));
      succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word Var_17;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (VarId_5));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ValueId_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_OnePossValues_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OnePossValues_0_13));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.accumulate_the_one_poss_value\'/4", (MR_String) "number of possible values is not one");
        return;
      }
  }
}

static void MR_CALL 
grade_lib__grade_solver__get_poss_values_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SolverVarValue_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word SolverVarValues_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word PossValueIdsTail_6;
    MR_Word ValueId_7;
    MR_Word Possible_8;

    grade_lib__grade_solver__get_poss_values_2_p_0(SolverVarValues_4, &PossValueIdsTail_6);
    ValueId_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SolverVarValue_3, (MR_Integer) 0))) & (MR_Integer) 127);
    Possible_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVarValue_3, (MR_Integer) 1))));
    if ((Possible_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ValueId_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PossValueIdsTail_6));
      }
    else
      *HeadVar__2_2 = PossValueIdsTail_6;
  }
}

static void MR_CALL 
grade_lib__grade_solver__cnt_poss_classes_6_p_0(
  MR_Word SolverVarId_7,
  MR_Word SolverVar_8,
  MR_Word STATE_VARIABLE_ZeroCntVarIds_0_14,
  MR_Word * STATE_VARIABLE_ZeroCntVarIds_15,
  MR_Integer STATE_VARIABLE_NumMore_0_16,
  MR_Integer * STATE_VARIABLE_NumMore_17)
{
  {
    MR_bool succeeded;
    MR_Integer CntPoss_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SolverVar_8, (MR_Integer) 1))));

    succeeded = (CntPoss_12 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ZeroCntVarIds_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SolverVarId_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ZeroCntVarIds_0_14));
      }
      *STATE_VARIABLE_NumMore_17 = STATE_VARIABLE_NumMore_0_16;
    }
    else
    {
      succeeded = (CntPoss_12 == (MR_Integer) 1);
      if (succeeded)
        *STATE_VARIABLE_NumMore_17 = STATE_VARIABLE_NumMore_0_16;
      else
        *STATE_VARIABLE_NumMore_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumMore_0_16 + (MR_Unsigned) 1);
      *STATE_VARIABLE_ZeroCntVarIds_15 = STATE_VARIABLE_ZeroCntVarIds_0_14;
    }
  }
}

static MR_Box MR_CALL 
grade_lib__grade_solver__soln_to_str_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_Str_7;

    conv1_Str_7 = grade_lib__grade_solver__success_value_to_str_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Str_7));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
grade_lib__grade_solver__soln_to_str_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_Str_8;

    conv0_Str_8 = grade_lib__grade_solver__failure_tree_to_string_3_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Str_8));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
grade_lib__grade_solver__soln_to_str_2_f_0(
  MR_String Prefix_4,
  MR_Word Soln_5)
{
  {
    MR_bool succeeded;
    MR_String Str_6;

    if (((MR_tag((MR_Word) Soln_5)) == (MR_Integer) 0))
    {
      MR_Word FailureInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Soln_5, (MR_Integer) 0))));
      MR_String FailureStr_8;
      MR_String IndentStr_9;
      MR_Word FailureTrees_10;
      MR_Word HeadFailureTree_11;
      MR_Word TailFailureTrees_12;
      MR_String HeadFailureStr_13;
      MR_Word TailFailureStrs_14;
      MR_Word Var_23;
      MR_String Var_24;
      MR_String Var_25;
      MR_String Var_26;

      FailureStr_8 = mercury__string__f_43_43_2_f_0(Prefix_4, (MR_String) "FAILURE\n");
      succeeded = (strcmp(Prefix_4, (MR_String) "") == 0);
      if (succeeded)
        IndentStr_9 = (MR_String) "    ";
      else
        IndentStr_9 = Prefix_4;
      FailureTrees_10 = grade_lib__grade_solver__failure_info_to_failure_trees_1_f_0(FailureInfo_7);
      HeadFailureTree_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailureTrees_10, (MR_Integer) 0))));
      TailFailureTrees_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailureTrees_10, (MR_Integer) 1))));
      HeadFailureStr_13 = grade_lib__grade_solver__failure_tree_to_string_3_f_0(Prefix_4, IndentStr_9, HeadFailureTree_11);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_6[2]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (grade_lib__grade_solver__soln_to_str_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Prefix_4));
        MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (IndentStr_9));
      }
      TailFailureStrs_14 = mercury__list__map_2_f_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, TailFailureTrees_12);
      Var_26 = mercury__string__append_list_1_f_0(TailFailureStrs_14);
      Var_25 = mercury__string__f_43_43_2_f_0(Var_26, (MR_String) "\n");
      Var_24 = mercury__string__f_43_43_2_f_0(HeadFailureStr_13, Var_25);
      Str_6 = mercury__string__f_43_43_2_f_0(FailureStr_8, Var_24);
    }
    else
    {
      MR_Word SuccMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Soln_5, (MR_Integer) 0))));
      MR_String SuccessStr_16;
      MR_Word SuccessValues_17;
      MR_Word SuccessValueStrs_18;
      MR_Word Var_20;
      MR_String Var_21;

      SuccessStr_16 = mercury__string__f_43_43_2_f_0(Prefix_4, (MR_String) "SUCCESS\n");
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), SuccMap_15, &SuccessValues_17);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_7[3]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (grade_lib__grade_solver__soln_to_str_2_f_0_2));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Prefix_4));
      }
      SuccessValueStrs_18 = mercury__list__map_2_f_0((MR_Word) (&grade_lib__grade_solver_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_20, SuccessValues_17);
      Var_21 = mercury__string__append_list_1_f_0(SuccessValueStrs_18);
      Str_6 = mercury__string__f_43_43_2_f_0(SuccessStr_16, Var_21);
    }
    return Str_6;
  }
}

static MR_Box MR_CALL 
grade_lib__grade_solver__failure_tree_to_string_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_Str_12;

    conv1_Str_12 = grade_lib__grade_solver__failure_tree_why_not_to_string_5_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Str_12));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
grade_lib__grade_solver__failure_tree_to_string_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_Str_8;

    conv0_Str_8 = grade_lib__grade_solver__failure_tree_to_string_3_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Str_8));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
grade_lib__grade_solver__failure_tree_to_string_3_f_0(
  MR_String CurIndentStr_5,
  MR_String EachIndentStr_6,
  MR_Word FailureTree_7)
{
  {
    MR_String Str_8;
    MR_Word VarId_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailureTree_7, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word WhyNots_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailureTree_7, (MR_Integer) 1))));
    MR_String VarName_11;

    var_value_names__solver_var_name_2_p_1(&VarName_11, VarId_9);
    if ((WhyNots_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_46;
      MR_String Var_48;

      Var_46 = mercury__string__f_43_43_2_f_0(VarName_11, (MR_String) "\n");
      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "configuration and user settings leave no valid value for ", Var_46);
      Str_8 = mercury__string__f_43_43_2_f_0(CurIndentStr_5, Var_48);
    }
    else
    {
      MR_Word HeadWhyNot_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WhyNots_10, (MR_Integer) 0))));
      MR_Word TailWhyNots_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WhyNots_10, (MR_Integer) 1))));

      if ((TailWhyNots_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String ReqDesc_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadWhyNot_12, (MR_Integer) 2))));
        MR_Word SubTrees_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadWhyNot_12, (MR_Integer) 3))));
        MR_Word SubTreeStrs_18;
        MR_Word Var_25;
        MR_String Var_26;
        MR_String Var_27;
        MR_String Var_28;
        MR_String Var_30;

        Var_26 = mercury__string__f_43_43_2_f_0(CurIndentStr_5, EachIndentStr_6);
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (grade_lib__grade_solver__failure_tree_to_string_3_f_0_1));
          MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (EachIndentStr_6));
        }
        SubTreeStrs_18 = mercury__list__map_2_f_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, SubTrees_17);
        Var_30 = mercury__string__append_list_1_f_0(SubTreeStrs_18);
        Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_30);
        Var_27 = mercury__string__f_43_43_2_f_0(ReqDesc_16, Var_28);
        Str_8 = mercury__string__f_43_43_2_f_0(CurIndentStr_5, Var_27);
      }
      else
      {
        MR_String HeadStr_21;
        MR_Word TailStrs_22;
        MR_Word Var_23;
        MR_Word Var_24;

        HeadStr_21 = grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_97_105_108_117_114_101_95_116_114_101_101_95_119_104_121_95_110_111_116_95_116_111_95_115_116_114_105_110_103_95_95_91_51_93_95_48_5_f_0(CurIndentStr_5, EachIndentStr_6, VarName_11, HeadWhyNot_12);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (grade_lib__grade_solver__failure_tree_to_string_3_f_0_2));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (CurIndentStr_5));
          MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (EachIndentStr_6));
          MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (VarId_9));
          MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (VarName_11));
        }
        TailStrs_22 = mercury__list__map_2_f_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, TailWhyNots_13);
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (HeadStr_21));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (TailStrs_22));
        }
        Str_8 = mercury__string__append_list_1_f_0(Var_24);
      }
    }
    return Str_8;
  }
}

static MR_Box MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_97_105_108_117_114_101_95_116_114_101_101_95_119_104_121_95_110_111_116_95_116_111_95_115_116_114_105_110_103_95_95_91_51_93_95_48_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_Str_8;

    conv0_Str_8 = grade_lib__grade_solver__failure_tree_to_string_3_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Str_8));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_97_105_108_117_114_101_95_116_114_101_101_95_119_104_121_95_110_111_116_95_116_111_95_115_116_114_105_110_103_95_95_91_51_93_95_48_5_f_0(
  MR_String CurIndentStr_7,
  MR_String EachIndentStr_8,
  MR_String VarName_10,
  MR_Word WhyNot_11)
{
  {
    MR_String Str_12;
    MR_Word ValueId_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), WhyNot_11, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_String ReqDesc_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), WhyNot_11, (MR_Integer) 2))));
    MR_Word SubTrees_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WhyNot_11, (MR_Integer) 3))));
    MR_String ValueName_17;
    MR_String WhyNotStr_18;
    MR_Word SubTreeStrs_19;
    MR_Word Var_30;
    MR_String Var_31;
    MR_String Var_32;
    MR_String Var_38;
    MR_String Var_40;
    MR_String Var_41;
    MR_String Var_43;
    MR_String Var_44;
    MR_String Var_46;

    var_value_names__solver_var_value_name_2_p_1(&ValueName_17, ValueId_13);
    Var_38 = mercury__string__f_43_43_2_f_0(ReqDesc_15, (MR_String) "\n");
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) " because: ", Var_38);
    Var_41 = mercury__string__f_43_43_2_f_0(ValueName_17, Var_40);
    Var_43 = mercury__string__f_43_43_2_f_0((MR_String) " may not be ", Var_41);
    Var_44 = mercury__string__f_43_43_2_f_0(VarName_10, Var_43);
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "The variable ", Var_44);
    WhyNotStr_18 = mercury__string__f_43_43_2_f_0(CurIndentStr_7, Var_46);
    Var_31 = mercury__string__f_43_43_2_f_0(CurIndentStr_7, EachIndentStr_8);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_97_105_108_117_114_101_95_116_114_101_101_95_119_104_121_95_110_111_116_95_116_111_95_115_116_114_105_110_103_95_95_91_51_93_95_48_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (EachIndentStr_8));
    }
    SubTreeStrs_19 = mercury__list__map_2_f_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, SubTrees_16);
    Var_32 = mercury__string__append_list_1_f_0(SubTreeStrs_19);
    Str_12 = mercury__string__f_43_43_2_f_0(WhyNotStr_18, Var_32);
    return Str_12;
  }
}

static void MR_CALL 
grade_lib__grade_solver__failure_info_to_failure_trees_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_FailureTree_6;

    grade_lib__grade_solver__zero_count_var_to_failure_tree_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_FailureTree_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_FailureTree_6));
  }
}

MR_Word MR_CALL 
grade_lib__grade_solver__failure_info_to_failure_trees_1_f_0(
  MR_Word FailureInfo_3)
{
  {
    MR_Word FailureTrees_4;
    MR_Word ZeroCntVarIds_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailureInfo_3, (MR_Integer) 2))));
    MR_Word HeadZeroCntVarId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ZeroCntVarIds_7, (MR_Integer) 0))));
    MR_Word TailZeroCntVarIds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ZeroCntVarIds_7, (MR_Integer) 1))));
    MR_Word HeadFailureTree_10;
    MR_Word TailFailureTrees_11;
    MR_Word Var_12;

    grade_lib__grade_solver__zero_count_var_to_failure_tree_3_p_0(FailureInfo_3, HeadZeroCntVarId_8, &HeadFailureTree_10);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (grade_lib__grade_solver__failure_info_to_failure_trees_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (FailureInfo_3));
    }
    mercury__list__map_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0), Var_12, TailZeroCntVarIds_9, &TailFailureTrees_11);
    {
      FailureTrees_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailureTrees_4, 0) = ((MR_Box) (HeadFailureTree_10));
      MR_hl_field(MR_mktag(0), FailureTrees_4, 1) = ((MR_Box) (TailFailureTrees_11));
    }
    return FailureTrees_4;
  }
}

static void MR_CALL 
grade_lib__grade_solver__zero_count_var_to_failure_tree_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_RevWhyNots_35;

    grade_lib__grade_solver__accumulate_why_var_is_not_values_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RevWhyNots_35);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RevWhyNots_35));
  }
}

static void MR_CALL 
grade_lib__grade_solver__zero_count_var_to_failure_tree_3_p_0(
  MR_Word FailureInfo_4,
  MR_Word ZeroCntVarId_5,
  MR_Word * FailureTree_6)
{
  {
    MR_Word SolverVarMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailureInfo_4, (MR_Integer) 1))));
    MR_Word SolverVar_10;
    MR_Word Values_13;
    MR_Word RevWhyNots_14;
    MR_Word WhyNots_15;
    MR_Word Var_16;
    MR_Box conv0_SolverVar_10;
    MR_Box conv2_RevWhyNots_14;

    mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), SolverVarMap_8, ((MR_Box) (ZeroCntVarId_5)), &conv0_SolverVar_10);
    SolverVar_10 = ((MR_Word) (conv0_SolverVar_10));
    Values_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar_10, (MR_Integer) 2))));
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (grade_lib__grade_solver__zero_count_var_to_failure_tree_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (FailureInfo_4));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (ZeroCntVarId_5));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0), (MR_Word) (&grade_lib__grade_solver_scalar_common_2[3]), Var_16, Values_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevWhyNots_14);
    RevWhyNots_14 = ((MR_Word) (conv2_RevWhyNots_14));
    mercury__list__reverse_2_p_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0), RevWhyNots_14, &WhyNots_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *FailureTree_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (ZeroCntVarId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (WhyNots_15));
    }
  }
}

static MR_Box MR_CALL 
grade_lib__grade_solver__solver_var_map_to_str_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_Str_7;

    conv0_Str_7 = grade_lib__grade_solver__solver_var_pair_to_str_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Str_7));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
grade_lib__grade_solver__solver_var_map_to_str_2_f_0(
  MR_String Prefix_4,
  MR_Word SolverVarMap_5)
{
  {
    MR_String Str_6;
    MR_Word SolverAssocList_7;
    MR_Word SolverVarStrs_8;
    MR_Word Var_9;

    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), SolverVarMap_5, &SolverAssocList_7);
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (grade_lib__grade_solver__solver_var_map_to_str_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (Prefix_4));
    }
    SolverVarStrs_8 = mercury__list__map_2_f_0((MR_Word) (&grade_lib__grade_solver_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, SolverAssocList_7);
    Str_6 = mercury__string__append_list_1_f_0(SolverVarStrs_8);
    return Str_6;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__solve_best_installed_grade_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = grade_lib__grade_solver__is_installed_grade_viable_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__solve_best_installed_grade_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = grade_lib__grade_solver__match_success_map_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver__solve_best_installed_grade_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_OnePossValues_14;

    grade_lib__grade_solver__accumulate_the_one_poss_value_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_OnePossValues_14);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_OnePossValues_14));
  }
}

static void MR_CALL 
grade_lib__grade_solver__solve_best_installed_grade_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ZeroCntVarIds_15;
    MR_Integer conv0_STATE_VARIABLE_NumMore_17;

    grade_lib__grade_solver__cnt_poss_classes_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ZeroCntVarIds_15, ((MR_Integer) (wrapper_arg_5)), &conv0_STATE_VARIABLE_NumMore_17);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ZeroCntVarIds_15));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_NumMore_17));
  }
}

void MR_CALL 
grade_lib__grade_solver__solve_best_installed_grade_5_p_0(
  MR_Word SolverInfo_6,
  MR_Word Commit_7,
  MR_Word InstalledGrades0_8,
  MR_Word * SolveCounts_9,
  MR_Word * InstalledGradeSoln_10)
{
  {
    MR_bool succeeded;
    MR_Word Requirements_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverInfo_6, (MR_Integer) 0))));
    MR_Word SolverVarPriorities_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverInfo_6, (MR_Integer) 1))));
    MR_Word SolverVarMap0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverInfo_6, (MR_Integer) 2))));
    MR_Word SolverVarMap_16;
    MR_Word InstalledGrades_18;
    MR_Word ZeroCntVarIds_52;
    MR_Integer NumMore_53;
    MR_Word _Requirements_15;
    MR_Box conv3_ZeroCntVarIds_52;
    MR_Box conv2_NumMore_53;

    grade_lib__grade_solver__propagate_to_fixpoint_6_p_0(Requirements_11, &_Requirements_15, SolverVarMap0_13, &SolverVarMap_16, (MR_Word) (&grade_lib__grade_solver_scalar_common_1[6]), SolveCounts_9);
    mercury__map__foldl2_6_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), (MR_Word) (&grade_lib__grade_solver_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&grade_lib__grade_solver_scalar_common_1[7]), SolverVarMap_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_ZeroCntVarIds_52, ((MR_Box) ((MR_Integer) 0)), &conv2_NumMore_53);
    ZeroCntVarIds_52 = ((MR_Word) (conv3_ZeroCntVarIds_52));
    NumMore_53 = ((MR_Integer) (conv2_NumMore_53));
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0), InstalledGrades0_8, &InstalledGrades_18);
    if ((ZeroCntVarIds_52 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (NumMore_53 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word SuccPairs_22;
        MR_Word MatchingInstalledGrades_23;
        MR_Word Var_37;
        MR_Word OnePossValues_57;
        MR_Word SuccessSoln_58;
        MR_Box conv5_OnePossValues_57;

        mercury__map__foldl_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), (MR_Word) (&grade_lib__grade_solver_scalar_common_2[2]), (MR_Word) (&grade_lib__grade_solver_scalar_common_1[8]), SolverVarMap_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_OnePossValues_57);
        OnePossValues_57 = ((MR_Word) (conv5_OnePossValues_57));
        mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), OnePossValues_57, &SuccessSoln_58);
        mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), SuccessSoln_58, &SuccPairs_22);
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (grade_lib__grade_solver__solve_best_installed_grade_5_p_0_3));
          MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (SuccPairs_22));
        }
        mercury__list__filter_3_p_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0), Var_37, InstalledGrades_18, &MatchingInstalledGrades_23);
        if ((MatchingInstalledGrades_23 == (MR_Word) ((MR_Unsigned) 0U)))
          *InstalledGradeSoln_10 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchingInstalledGrades_23, (MR_Integer) 1))));
          MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchingInstalledGrades_23, (MR_Integer) 0))));

          if ((Var_47 == (MR_Word) ((MR_Unsigned) 0U)))
            *InstalledGradeSoln_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_48)));
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.solve_best_installed_grade\'/5", (MR_String) "MatchingInstalledGrades = [_, _ | _]");
              return;
            }
        }
      }
      else
      {
        MR_Word ViableInstalledGrades_28;
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (grade_lib__grade_solver__solve_best_installed_grade_5_p_0_4));
          MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (SolverVarMap_16));
          MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (SolverVarPriorities_12));
        }
        mercury__list__filter_3_p_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0), Var_36, InstalledGrades_18, &ViableInstalledGrades_28);
        if ((ViableInstalledGrades_28 == (MR_Word) ((MR_Unsigned) 0U)))
          *InstalledGradeSoln_10 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word HeadViableInstalledGrade_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ViableInstalledGrades_28, (MR_Integer) 0))));
          MR_Word TailViableInstalledGrades_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ViableInstalledGrades_28, (MR_Integer) 1))));
          MR_Word MaybeBestInstalledGrade_31;

          grade_lib__grade_solver__pick_best_viable_grade_6_p_0(SolverVarMap_16, SolverVarPriorities_12, Commit_7, HeadViableInstalledGrade_29, TailViableInstalledGrades_30, &MaybeBestInstalledGrade_31);
          if ((MaybeBestInstalledGrade_31 == (MR_Word) ((MR_Unsigned) 0U)))
            *InstalledGradeSoln_10 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word BestInstalledGrade_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBestInstalledGrade_31, (MR_Integer) 0))));

            *InstalledGradeSoln_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (BestInstalledGrade_32)));
          }
        }
      }
    }
    else
    {
      MR_Word HeadZeroCntVarId_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ZeroCntVarIds_52, (MR_Integer) 0))));
      MR_Word TailZeroCntVarIds_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ZeroCntVarIds_52, (MR_Integer) 1))));
      MR_Word FailureInfo_56;
      MR_Word Var_65;

      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (HeadZeroCntVarId_54));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (TailZeroCntVarIds_55));
      }
      {
        FailureInfo_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FailureInfo_56, 0) = ((MR_Box) (Requirements_11));
        MR_hl_field(MR_mktag(0), FailureInfo_56, 1) = ((MR_Box) (SolverVarMap_16));
        MR_hl_field(MR_mktag(0), FailureInfo_56, 2) = ((MR_Box) (Var_65));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *InstalledGradeSoln_10 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (FailureInfo_56));
      }
    }
  }
}

static void MR_CALL 
grade_lib__grade_solver__pick_best_viable_grade_6_p_0(
  MR_Word SolverVarMap0_7,
  MR_Word SolverVarPriorities_8,
  MR_Word Commit_9,
  MR_Word HeadViableInstalledGrade_10,
  MR_Word TailViableInstalledGrades_11,
  MR_Word * MaybeBestInstalledGrade_12)
{
  if ((TailViableInstalledGrades_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeBestInstalledGrade_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadViableInstalledGrade_10));
    }
  else
  {
    MR_Word InstalledGrades_15;
    MR_Word SelectedVarId_16;
    MR_Word SelectedVarViableValueIds_17;
    MR_Word LaterVarIds_18;
    MR_Word FirstViableValueId_19;
    MR_Word LaterViableValueIds_20;

    {
      InstalledGrades_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InstalledGrades_15, 0) = ((MR_Box) (HeadViableInstalledGrade_10));
      MR_hl_field(MR_mktag(1), InstalledGrades_15, 1) = ((MR_Box) (TailViableInstalledGrades_11));
    }
    grade_lib__grade_solver__pick_first_var_with_viable_choice_6_p_0(InstalledGrades_15, SolverVarMap0_7, SolverVarPriorities_8, &SelectedVarId_16, &SelectedVarViableValueIds_17, &LaterVarIds_18);
    FirstViableValueId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectedVarViableValueIds_17, (MR_Integer) 0))));
    LaterViableValueIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectedVarViableValueIds_17, (MR_Integer) 1))));
    grade_lib__grade_solver__pick_first_viable_value_9_p_0(SolverVarMap0_7, SolverVarPriorities_8, Commit_9, InstalledGrades_15, SelectedVarId_16, LaterVarIds_18, FirstViableValueId_19, LaterViableValueIds_20, MaybeBestInstalledGrade_12);
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__pick_first_viable_value_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = grade_lib__grade_solver__is_installed_grade_viable_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver__pick_first_viable_value_9_p_0(
  MR_Word SolverVarMap0_10,
  MR_Word SolverVarPriorities_11,
  MR_Word Commit_12,
  MR_Word InstalledGrades_13,
  MR_Word SelectedVarId_14,
  MR_Word LaterVarIds_15,
  MR_Word FirstViableValueId_16,
  MR_Word LaterViableValueIds_17,
  MR_Word * MaybeBestInstalledGrade_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word SolverVarMap1_19;
    MR_Word FirstValueInstalledGrades_20;
    MR_Word HeadFirstInstalledGrade_21;
    MR_Word TailFirstInstalledGrades_22;
    MR_Word FirstMaybeBestInstalledGrade_23;
    MR_Word Var_28;

    // setup for model_det tailcalls optimized into a loop
    ;
    grade_lib__grade_setup__assign_var_in_map_5_p_0((MR_Word) ((MR_Unsigned) 8U), SelectedVarId_14, FirstViableValueId_16, SolverVarMap0_10, &SolverVarMap1_19);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (grade_lib__grade_solver__pick_first_viable_value_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (SolverVarMap1_19));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (SolverVarPriorities_11));
    }
    mercury__list__filter_3_p_0((MR_Word) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0), Var_28, InstalledGrades_13, &FirstValueInstalledGrades_20);
    if ((FirstValueInstalledGrades_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.pick_first_viable_value\'/9", (MR_String) "FirstValueInstalledGrades = []");
        return;
      }
    else
    {
      HeadFirstInstalledGrade_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstValueInstalledGrades_20, (MR_Integer) 0))));
      TailFirstInstalledGrades_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstValueInstalledGrades_20, (MR_Integer) 1))));
    }
    if ((TailFirstInstalledGrades_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        FirstMaybeBestInstalledGrade_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FirstMaybeBestInstalledGrade_23, 0) = ((MR_Box) (HeadFirstInstalledGrade_21));
      }
    else
    {
      MR_Word InstalledGrades_41;
      MR_Word SelectedVarId_42;
      MR_Word SelectedVarViableValueIds_43;
      MR_Word LaterVarIds_44;
      MR_Word FirstViableValueId_45;
      MR_Word LaterViableValueIds_46;

      {
        InstalledGrades_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InstalledGrades_41, 0) = ((MR_Box) (HeadFirstInstalledGrade_21));
        MR_hl_field(MR_mktag(1), InstalledGrades_41, 1) = ((MR_Box) (TailFirstInstalledGrades_22));
      }
      grade_lib__grade_solver__pick_first_var_with_viable_choice_6_p_0(InstalledGrades_41, SolverVarMap1_19, LaterVarIds_15, &SelectedVarId_42, &SelectedVarViableValueIds_43, &LaterVarIds_44);
      FirstViableValueId_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectedVarViableValueIds_43, (MR_Integer) 0))));
      LaterViableValueIds_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SelectedVarViableValueIds_43, (MR_Integer) 1))));
      grade_lib__grade_solver__pick_first_viable_value_9_p_0(SolverVarMap1_19, LaterVarIds_15, Commit_12, InstalledGrades_41, SelectedVarId_42, LaterVarIds_44, FirstViableValueId_45, LaterViableValueIds_46, &FirstMaybeBestInstalledGrade_23);
    }
    if ((FirstMaybeBestInstalledGrade_23 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (Commit_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *MaybeBestInstalledGrade_18 = FirstMaybeBestInstalledGrade_23;
          break;
        case (MR_Integer) 1:
          if ((LaterViableValueIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
            *MaybeBestInstalledGrade_18 = FirstMaybeBestInstalledGrade_23;
          else
          {
            MR_Word FirstLaterViableValueId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterViableValueIds_17, (MR_Integer) 0))));
            MR_Word LaterLaterViableValueIds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterViableValueIds_17, (MR_Integer) 1))));
            MR_Word next_value_of_FirstViableValueId_16 = FirstLaterViableValueId_25;
            MR_Word next_value_of_LaterViableValueIds_17 = LaterLaterViableValueIds_26;

            // direct tailcall eliminated
            ;
            FirstViableValueId_16 = next_value_of_FirstViableValueId_16;
            LaterViableValueIds_17 = next_value_of_LaterViableValueIds_17;
            continue;
          }
          break;
      }
    else
      *MaybeBestInstalledGrade_18 = FirstMaybeBestInstalledGrade_23;
    break;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__pick_first_var_with_viable_choice_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_ValueId_8;

    succeeded = grade_lib__grade_solver__is_value_possible_and_available_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_ValueId_8);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_ValueId_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver__pick_first_var_with_viable_choice_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * SelectedVarId_4,
  MR_Word * SelectedVarViableValueIds_5,
  MR_Word * LaterVarIds_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.pick_first_var_with_viable_choice\'/6", (MR_String) "none of the viable installed grades are really viable");
        return;
      }
    else
    {
      MR_Word VarId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word VarIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SolverVar_21;
      MR_Integer CntPoss_23;
      MR_Word Values_24;
      MR_Box conv0_SolverVar_21;
      MR_Word HeadViableValueId_26;
      MR_Word TailViableValueIds_27;
      MR_Word TypeCtorInfo_34_34;
      MR_Word TypeCtorInfo_35_35;
      MR_Word ViableValueIds_25;
      MR_Word Var_29;

      mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), HeadVar__2_2, ((MR_Box) (VarId_16)), &conv0_SolverVar_21);
      SolverVar_21 = ((MR_Word) (conv0_SolverVar_21));
      CntPoss_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SolverVar_21, (MR_Integer) 1))));
      Values_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar_21, (MR_Integer) 2))));
      succeeded = (CntPoss_23 > (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_34_34 = (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0);
        TypeCtorInfo_35_35 = (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0);
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (grade_lib__grade_solver__pick_first_var_with_viable_choice_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (HeadVar__1_1));
          MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (VarId_16));
        }
        mercury__list__filter_map_3_p_0(TypeCtorInfo_34_34, TypeCtorInfo_35_35, Var_29, Values_24, &ViableValueIds_25);
        succeeded = (ViableValueIds_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadViableValueId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ViableValueIds_25, (MR_Integer) 0))));
          TailViableValueIds_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ViableValueIds_25, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        *SelectedVarId_4 = VarId_16;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *SelectedVarViableValueIds_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadViableValueId_26));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TailViableValueIds_27));
        }
        *LaterVarIds_6 = VarIds_17;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = VarIds_17;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
grade_lib__grade_solver__solve_absolute_3_p_0(
  MR_Word SolverInfo_4,
  MR_Word * SolveCounts_5,
  MR_Word * Soln_6)
{
  {
    MR_Word Requirements_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverInfo_4, (MR_Integer) 0))));
    MR_Word SolverVarPriorities_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverInfo_4, (MR_Integer) 1))));
    MR_Word SolverVarMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverInfo_4, (MR_Integer) 2))));
    MR_Word _FinalRequirements_11;

    grade_lib__grade_solver__solve_absolute_loop_8_p_0(Requirements_7, Requirements_7, &_FinalRequirements_11, SolverVarPriorities_8, SolverVarMap0_9, (MR_Word) (&grade_lib__grade_solver_scalar_common_1[6]), SolveCounts_5, Soln_6);
  }
}

static void MR_CALL 
grade_lib__grade_solver__solve_absolute_loop_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_OnePossValues_14;

    grade_lib__grade_solver__accumulate_the_one_poss_value_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_OnePossValues_14);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_OnePossValues_14));
  }
}

static void MR_CALL 
grade_lib__grade_solver__solve_absolute_loop_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ZeroCntVarIds_15;
    MR_Integer conv0_STATE_VARIABLE_NumMore_17;

    grade_lib__grade_solver__cnt_poss_classes_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ZeroCntVarIds_15, ((MR_Integer) (wrapper_arg_5)), &conv0_STATE_VARIABLE_NumMore_17);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ZeroCntVarIds_15));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_NumMore_17));
  }
}

static void MR_CALL 
grade_lib__grade_solver__solve_absolute_loop_8_p_0(
  MR_Word AllRequirements_9,
  MR_Word STATE_VARIABLE_CurRequirements_0_17,
  MR_Word * STATE_VARIABLE_CurRequirements_18,
  MR_Word STATE_VARIABLE_SolverVarPriorities_0_19,
  MR_Word STATE_VARIABLE_SolverVarMap_0_20,
  MR_Word STATE_VARIABLE_SolveCounts_0_21,
  MR_Word * STATE_VARIABLE_SolveCounts_22,
  MR_Word * Soln_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_CurRequirements_23_23;
    MR_Word STATE_VARIABLE_SolverVarMap_24_24;
    MR_Word STATE_VARIABLE_SolveCounts_25_25;
    MR_Word ZeroCntVarIds_41;
    MR_Integer NumMore_42;
    MR_Box conv3_ZeroCntVarIds_41;
    MR_Box conv2_NumMore_42;

    // setup for model_det tailcalls optimized into a loop
    ;
    grade_lib__grade_solver__propagate_to_fixpoint_6_p_0(STATE_VARIABLE_CurRequirements_0_17, &STATE_VARIABLE_CurRequirements_23_23, STATE_VARIABLE_SolverVarMap_0_20, &STATE_VARIABLE_SolverVarMap_24_24, STATE_VARIABLE_SolveCounts_0_21, &STATE_VARIABLE_SolveCounts_25_25);
    mercury__map__foldl2_6_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), (MR_Word) (&grade_lib__grade_solver_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&grade_lib__grade_solver_scalar_common_1[4]), STATE_VARIABLE_SolverVarMap_24_24, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_ZeroCntVarIds_41, ((MR_Box) ((MR_Integer) 0)), &conv2_NumMore_42);
    ZeroCntVarIds_41 = ((MR_Word) (conv3_ZeroCntVarIds_41));
    NumMore_42 = ((MR_Integer) (conv2_NumMore_42));
    if ((ZeroCntVarIds_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (NumMore_42 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word OnePossValues_46;
        MR_Word SuccessSoln_47;
        MR_Box conv5_OnePossValues_46;

        mercury__map__foldl_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), (MR_Word) (&grade_lib__grade_solver_scalar_common_2[2]), (MR_Word) (&grade_lib__grade_solver_scalar_common_1[5]), STATE_VARIABLE_SolverVarMap_24_24, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_OnePossValues_46);
        OnePossValues_46 = ((MR_Word) (conv5_OnePossValues_46));
        mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), OnePossValues_46, &SuccessSoln_47);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Soln_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SuccessSoln_47));
        }
        *STATE_VARIABLE_CurRequirements_18 = STATE_VARIABLE_CurRequirements_23_23;
        *STATE_VARIABLE_SolveCounts_22 = STATE_VARIABLE_SolveCounts_25_25;
      }
      else
      {
        MR_Integer NumLabelSteps0_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_25_25, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_SolveCounts_26_26;
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) NumLabelSteps0_16 + (MR_Unsigned) 1);
        MR_Word STATE_VARIABLE_SolverVarPriorities_29_29;
        MR_Word STATE_VARIABLE_SolverVarMap_30_30;
        MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_25_25, (MR_Integer) 1))));
        MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_25_25, (MR_Integer) 2))));
        MR_Word FirstVarId_78;
        MR_Word FirstVar0_79;
        MR_Integer CntAll_80;
        MR_Word FirstValues0_82;
        MR_Word FirstValues_83;
        MR_Word FirstVar_85;
        MR_Word next_value_of_STATE_VARIABLE_CurRequirements_0_17;
        MR_Word next_value_of_STATE_VARIABLE_SolverVarPriorities_0_19;
        MR_Word next_value_of_STATE_VARIABLE_SolverVarMap_0_20;
        MR_Word next_value_of_STATE_VARIABLE_SolveCounts_0_21;

        {
          STATE_VARIABLE_SolveCounts_26_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_26_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_26_26, 1) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_26_26, 2) = ((MR_Box) (Var_34));
        }
        grade_lib__grade_solver__find_first_undetermined_var_5_p_0(STATE_VARIABLE_SolverVarPriorities_0_19, &STATE_VARIABLE_SolverVarPriorities_29_29, STATE_VARIABLE_SolverVarMap_24_24, &FirstVarId_78, &FirstVar0_79);
        CntAll_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FirstVar0_79, (MR_Integer) 0))));
        FirstValues0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstVar0_79, (MR_Integer) 2))));
        grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_102_105_114_115_116_95_112_111_115_115_105_98_108_101_95_118_97_108_117_101_95_97_110_100_95_99_111_109_109_105_116_95_95_91_49_93_95_48_3_p_0(FirstValues0_82, &FirstValues_83);
        {
          FirstVar_85 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FirstVar_85, 0) = ((MR_Box) (CntAll_80));
          MR_hl_field(MR_mktag(0), FirstVar_85, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), FirstVar_85, 2) = ((MR_Box) (FirstValues_83));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), ((MR_Box) (FirstVarId_78)), ((MR_Box) (FirstVar_85)), STATE_VARIABLE_SolverVarMap_24_24, &STATE_VARIABLE_SolverVarMap_30_30);
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_CurRequirements_0_17 = STATE_VARIABLE_CurRequirements_23_23;
        next_value_of_STATE_VARIABLE_SolverVarPriorities_0_19 = STATE_VARIABLE_SolverVarPriorities_29_29;
        next_value_of_STATE_VARIABLE_SolverVarMap_0_20 = STATE_VARIABLE_SolverVarMap_30_30;
        next_value_of_STATE_VARIABLE_SolveCounts_0_21 = STATE_VARIABLE_SolveCounts_26_26;
        STATE_VARIABLE_CurRequirements_0_17 = next_value_of_STATE_VARIABLE_CurRequirements_0_17;
        STATE_VARIABLE_SolverVarPriorities_0_19 = next_value_of_STATE_VARIABLE_SolverVarPriorities_0_19;
        STATE_VARIABLE_SolverVarMap_0_20 = next_value_of_STATE_VARIABLE_SolverVarMap_0_20;
        STATE_VARIABLE_SolveCounts_0_21 = next_value_of_STATE_VARIABLE_SolveCounts_0_21;
        continue;
      }
    }
    else
    {
      MR_Word HeadZeroCntVarId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ZeroCntVarIds_41, (MR_Integer) 0))));
      MR_Word TailZeroCntVarIds_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ZeroCntVarIds_41, (MR_Integer) 1))));
      MR_Word FailureInfo_45;
      MR_Word Var_54;

      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (HeadZeroCntVarId_43));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (TailZeroCntVarIds_44));
      }
      {
        FailureInfo_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FailureInfo_45, 0) = ((MR_Box) (AllRequirements_9));
        MR_hl_field(MR_mktag(0), FailureInfo_45, 1) = ((MR_Box) (STATE_VARIABLE_SolverVarMap_24_24));
        MR_hl_field(MR_mktag(0), FailureInfo_45, 2) = ((MR_Box) (Var_54));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Soln_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FailureInfo_45));
      }
      *STATE_VARIABLE_CurRequirements_18 = STATE_VARIABLE_CurRequirements_23_23;
      *STATE_VARIABLE_SolveCounts_22 = STATE_VARIABLE_SolveCounts_25_25;
    }
    break;
  }
}

static void MR_CALL 
grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_102_105_114_115_116_95_112_111_115_115_105_98_108_101_95_118_97_108_117_101_95_97_110_100_95_99_111_109_109_105_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.find_first_possible_value_and_commit\'/3", (MR_String) "no possible value");
      return;
    }
  }
  else
  {
    MR_Word Value0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Values0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Value_10;
    MR_Word Values_11;
    MR_Word Possible0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Value0_8, (MR_Integer) 1))));

    if ((Possible0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Value_10 = Value0_8;
      grade_lib__grade_solver__set_values_not_possible_labeling_2_p_0(Values0_9, &Values_11);
    }
    else
    {
      Value_10 = Value0_8;
      grade_lib__grade_solver__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_102_105_114_115_116_95_112_111_115_115_105_98_108_101_95_118_97_108_117_101_95_97_110_100_95_99_111_109_109_105_116_95_95_91_49_93_95_48_3_p_0(Values0_9, &Values_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Value_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Values_11));
    }
  }
}

static void MR_CALL 
grade_lib__grade_solver__set_values_not_possible_labeling_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Value0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Values0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Value_5;
    MR_Word Values_6;
    MR_Word ValudId_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Value0_3, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word Possible0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Value0_3, (MR_Integer) 1))));

    if ((Possible0_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Value_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Value_5, 0) = (MR_Box) ((MR_Unsigned) (ValudId_7));
        MR_hl_field(MR_mktag(0), Value_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &grade_lib__grade_solver_scalar_common_4[0])));
      }
    else
      Value_5 = Value0_3;
    grade_lib__grade_solver__set_values_not_possible_labeling_2_p_0(Values0_4, &Values_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Value_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Values_6));
    }
  }
}

static void MR_CALL 
grade_lib__grade_solver__find_first_undetermined_var_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * LaterSolverVarIds_2,
  MR_Word SolverMap_3,
  MR_Word * FirstVarId_4,
  MR_Word * FirstVar_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.find_first_undetermined_var\'/5", (MR_String) "no undetermined var");
        return;
      }
    else
    {
      MR_Word SolverVarId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SolverVarIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SolverVar_18;
      MR_Integer CntPoss_20;
      MR_Box conv0_SolverVar_18;

      mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), SolverMap_3, ((MR_Box) (SolverVarId_12)), &conv0_SolverVar_18);
      SolverVar_18 = ((MR_Word) (conv0_SolverVar_18));
      CntPoss_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SolverVar_18, (MR_Integer) 1))));
      succeeded = (CntPoss_20 > (MR_Integer) 1);
      if (succeeded)
      {
        *FirstVarId_4 = SolverVarId_12;
        *FirstVar_5 = SolverVar_18;
        *LaterSolverVarIds_2 = SolverVarIds_13;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = SolverVarIds_13;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
grade_lib__grade_solver__propagate_to_fixpoint_6_p_0(
  MR_Word Requirements0_7,
  MR_Word * Requirements_8,
  MR_Word STATE_VARIABLE_SolverVarMap_0_23,
  MR_Word * STATE_VARIABLE_SolverVarMap_24,
  MR_Word STATE_VARIABLE_SolveCounts_0_25,
  MR_Word * STATE_VARIABLE_SolveCounts_26)
{
  while (MR_TRUE)
  {
    MR_Integer NumPasses0_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_0_25, (MR_Integer) 1))));
    MR_Integer NumReqTests0_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_0_25, (MR_Integer) 2))));
    MR_Integer NumPasses_13 = (MR_Integer) ((MR_Unsigned) NumPasses0_11 + (MR_Unsigned) 1);
    MR_Integer NumReqTests_14;
    MR_Word RevRequirements1_15;
    MR_Word Changed_16;
    MR_Word FoundFailure_17;
    MR_Word Requirements1_18;
    MR_Integer Var_28;
    MR_Word STATE_VARIABLE_SolveCounts_30_30;
    MR_Word STATE_VARIABLE_SolverVarMap_32_32;
    MR_Integer Var_57;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_28 = mercury__list__length_1_f_0((MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_0), Requirements0_7);
    NumReqTests_14 = (MR_Integer) ((MR_Unsigned) NumReqTests0_12 + (MR_Unsigned) Var_28);
    Var_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_0_25, (MR_Integer) 0))));
    {
      STATE_VARIABLE_SolveCounts_30_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_30_30, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_30_30, 1) = ((MR_Box) (NumPasses_13));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolveCounts_30_30, 2) = ((MR_Box) (NumReqTests_14));
    }
    grade_lib__grade_solver__propagate_pass_9_p_0(Requirements0_7, (MR_Word) ((MR_Unsigned) 0U), &RevRequirements1_15, STATE_VARIABLE_SolverVarMap_0_23, &STATE_VARIABLE_SolverVarMap_32_32, (MR_Integer) 0, &Changed_16, (MR_Integer) 0, &FoundFailure_17);
    mercury__list__reverse_2_p_0((MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_0), RevRequirements1_15, &Requirements1_18);
    switch (FoundFailure_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *Requirements_8 = Requirements1_18;
          *STATE_VARIABLE_SolverVarMap_24 = STATE_VARIABLE_SolverVarMap_32_32;
          *STATE_VARIABLE_SolveCounts_26 = STATE_VARIABLE_SolveCounts_30_30;
        }
        break;
      case (MR_Integer) 0:
        switch (Changed_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_Requirements0_7 = Requirements1_18;
              MR_Word next_value_of_STATE_VARIABLE_SolverVarMap_0_23 = STATE_VARIABLE_SolverVarMap_32_32;
              MR_Word next_value_of_STATE_VARIABLE_SolveCounts_0_25 = STATE_VARIABLE_SolveCounts_30_30;

              // direct tailcall eliminated
              ;
              Requirements0_7 = next_value_of_Requirements0_7;
              STATE_VARIABLE_SolverVarMap_0_23 = next_value_of_STATE_VARIABLE_SolverVarMap_0_23;
              STATE_VARIABLE_SolveCounts_0_25 = next_value_of_STATE_VARIABLE_SolveCounts_0_25;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              *Requirements_8 = Requirements1_18;
              *STATE_VARIABLE_SolverVarMap_24 = STATE_VARIABLE_SolverVarMap_32_32;
              *STATE_VARIABLE_SolveCounts_26 = STATE_VARIABLE_SolveCounts_30_30;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
grade_lib__grade_solver__propagate_pass_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevRequirements_0_2,
  MR_Word * STATE_VARIABLE_RevRequirements_3,
  MR_Word STATE_VARIABLE_SolverVarMap_0_4,
  MR_Word * STATE_VARIABLE_SolverVarMap_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7,
  MR_Word STATE_VARIABLE_FoundFailure_0_8,
  MR_Word * STATE_VARIABLE_FoundFailure_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FoundFailure_9 = STATE_VARIABLE_FoundFailure_0_8;
      *STATE_VARIABLE_Changed_7 = STATE_VARIABLE_Changed_0_6;
      *STATE_VARIABLE_SolverVarMap_5 = STATE_VARIABLE_SolverVarMap_0_4;
      *STATE_VARIABLE_RevRequirements_3 = STATE_VARIABLE_RevRequirements_0_2;
    }
    else
    {
      MR_Word Requirement_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Requirements_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ReqId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Requirement_22, (MR_Integer) 0))));
      MR_String ReqDesc_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), Requirement_22, (MR_Integer) 1))));
      MR_Word IfVarId_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Requirement_22, (MR_Integer) 2))) >> 12)) & (MR_Integer) 31);
      MR_Word IfValueId_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Requirement_22, (MR_Integer) 2))) >> 5)) & (MR_Integer) 127);
      MR_Word ThenVarId_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Requirement_22, (MR_Integer) 2))) & (MR_Integer) 31);
      MR_Word ReqThenValueIds_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Requirement_22, (MR_Integer) 3))));
      MR_Word IfVar0_36;
      MR_Integer IfCntAll_37;
      MR_Integer IfCntPoss0_38;
      MR_Word IfValues0_39;
      MR_Word STATE_VARIABLE_SolverVarMap_96_96;
      MR_Word STATE_VARIABLE_Changed_97_97;
      MR_Word STATE_VARIABLE_FoundFailure_98_98;
      MR_Word STATE_VARIABLE_RevRequirements_150_150;
      MR_Box conv0_IfVar0_36;
      MR_Word Var_171;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevRequirements_0_2;
      MR_Word next_value_of_STATE_VARIABLE_SolverVarMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_6;
      MR_Word next_value_of_STATE_VARIABLE_FoundFailure_0_8;

      mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), STATE_VARIABLE_SolverVarMap_0_4, ((MR_Box) (IfVarId_30)), &conv0_IfVar0_36);
      IfVar0_36 = ((MR_Word) (conv0_IfVar0_36));
      IfCntAll_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IfVar0_36, (MR_Integer) 0))));
      IfCntPoss0_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IfVar0_36, (MR_Integer) 1))));
      IfValues0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IfVar0_36, (MR_Integer) 2))));
      grade_lib__grade_solver__is_value_possible_3_p_0(IfValues0_39, IfValueId_31, &Var_171);
      succeeded = grade_lib__grade_state____Unify____solver_var_value_possible_0_0((MR_Word) ((MR_Unsigned) 0U), Var_171);
      if (succeeded)
      {
        MR_Word ThenVar0_40;
        MR_Integer ThenCntAll_41;
        MR_Integer ThenCntPoss0_42;
        MR_Word ThenValues0_43;
        MR_Word KeepReq_44;
        MR_Box conv1_ThenVar0_40;

        mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), STATE_VARIABLE_SolverVarMap_0_4, ((MR_Box) (ThenVarId_32)), &conv1_ThenVar0_40);
        ThenVar0_40 = ((MR_Word) (conv1_ThenVar0_40));
        ThenCntAll_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ThenVar0_40, (MR_Integer) 0))));
        ThenCntPoss0_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ThenVar0_40, (MR_Integer) 1))));
        ThenValues0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThenVar0_40, (MR_Integer) 2))));
        succeeded = grade_lib__grade_solver__some_value_is_possible_2_p_0(ThenValues0_43, ReqThenValueIds_33);
        if (succeeded)
        {
          succeeded = (IfCntPoss0_38 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word ReqAppl_45;
            MR_Integer ThenCntPoss_46;
            MR_Word ThenValues_47;

            KeepReq_44 = (MR_Integer) 0;
            {
              ReqAppl_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ReqAppl_45, 0) = ((MR_Box) (ReqId_28));
              MR_hl_field(MR_mktag(0), ReqAppl_45, 1) = ((MR_Box) (ReqDesc_29));
              MR_hl_field(MR_mktag(0), ReqAppl_45, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            grade_lib__grade_solver__restrict_possibilities_to_6_p_0(ReqThenValueIds_33, ReqAppl_45, (MR_Integer) 0, &ThenCntPoss_46, ThenValues0_43, &ThenValues_47);
            succeeded = (ThenCntPoss_46 < ThenCntPoss0_42);
            if (succeeded)
            {
              MR_Word ThenVar_52;

              {
                ThenVar_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ThenVar_52, 0) = ((MR_Box) (ThenCntAll_41));
                MR_hl_field(MR_mktag(0), ThenVar_52, 1) = ((MR_Box) (ThenCntPoss_46));
                MR_hl_field(MR_mktag(0), ThenVar_52, 2) = ((MR_Box) (ThenValues_47));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), ((MR_Box) (ThenVarId_32)), ((MR_Box) (ThenVar_52)), STATE_VARIABLE_SolverVarMap_0_4, &STATE_VARIABLE_SolverVarMap_96_96);
              STATE_VARIABLE_Changed_97_97 = (MR_Integer) 1;
              succeeded = (ThenCntPoss_46 == (MR_Integer) 0);
              if (succeeded)
                STATE_VARIABLE_FoundFailure_98_98 = (MR_Integer) 1;
              else
                STATE_VARIABLE_FoundFailure_98_98 = STATE_VARIABLE_FoundFailure_0_8;
            }
            else
            {
              STATE_VARIABLE_FoundFailure_98_98 = STATE_VARIABLE_FoundFailure_0_8;
              STATE_VARIABLE_Changed_97_97 = STATE_VARIABLE_Changed_0_6;
              STATE_VARIABLE_SolverVarMap_96_96 = STATE_VARIABLE_SolverVarMap_0_4;
            }
          }
          else
          {
            KeepReq_44 = (MR_Integer) 1;
            STATE_VARIABLE_FoundFailure_98_98 = STATE_VARIABLE_FoundFailure_0_8;
            STATE_VARIABLE_Changed_97_97 = STATE_VARIABLE_Changed_0_6;
            STATE_VARIABLE_SolverVarMap_96_96 = STATE_VARIABLE_SolverVarMap_0_4;
          }
        }
        else
        {
          MR_Integer IfCntPoss_53;
          MR_Word IfValues_54;
          MR_Word IfVar_58;
          MR_Word ReqAppl_165;

          KeepReq_44 = (MR_Integer) 0;
          IfCntPoss_53 = (MR_Integer) ((MR_Unsigned) IfCntPoss0_38 - (MR_Unsigned) 1);
          {
            ReqAppl_165 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ReqAppl_165, 0) = ((MR_Box) (ReqId_28));
            MR_hl_field(MR_mktag(0), ReqAppl_165, 1) = ((MR_Box) (ReqDesc_29));
            MR_hl_field(MR_mktag(0), ReqAppl_165, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          }
          grade_lib__grade_solver__set_value_to_not_possible_4_p_0(IfValueId_31, ReqAppl_165, IfValues0_39, &IfValues_54);
          {
            IfVar_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IfVar_58, 0) = ((MR_Box) (IfCntAll_37));
            MR_hl_field(MR_mktag(0), IfVar_58, 1) = ((MR_Box) (IfCntPoss_53));
            MR_hl_field(MR_mktag(0), IfVar_58, 2) = ((MR_Box) (IfValues_54));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), ((MR_Box) (IfVarId_30)), ((MR_Box) (IfVar_58)), STATE_VARIABLE_SolverVarMap_0_4, &STATE_VARIABLE_SolverVarMap_96_96);
          STATE_VARIABLE_Changed_97_97 = (MR_Integer) 1;
          succeeded = (IfCntPoss_53 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_FoundFailure_98_98 = (MR_Integer) 1;
          else
            STATE_VARIABLE_FoundFailure_98_98 = STATE_VARIABLE_FoundFailure_0_8;
        }
        switch (KeepReq_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_RevRequirements_150_150 = STATE_VARIABLE_RevRequirements_0_2;
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_RevRequirements_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRequirements_150_150, 0) = ((MR_Box) (Requirement_22));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRequirements_150_150, 1) = ((MR_Box) (STATE_VARIABLE_RevRequirements_0_2));
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_FoundFailure_98_98 = STATE_VARIABLE_FoundFailure_0_8;
        STATE_VARIABLE_Changed_97_97 = STATE_VARIABLE_Changed_0_6;
        STATE_VARIABLE_SolverVarMap_96_96 = STATE_VARIABLE_SolverVarMap_0_4;
        STATE_VARIABLE_RevRequirements_150_150 = STATE_VARIABLE_RevRequirements_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Requirements_23;
      next_value_of_STATE_VARIABLE_RevRequirements_0_2 = STATE_VARIABLE_RevRequirements_150_150;
      next_value_of_STATE_VARIABLE_SolverVarMap_0_4 = STATE_VARIABLE_SolverVarMap_96_96;
      next_value_of_STATE_VARIABLE_Changed_0_6 = STATE_VARIABLE_Changed_97_97;
      next_value_of_STATE_VARIABLE_FoundFailure_0_8 = STATE_VARIABLE_FoundFailure_98_98;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevRequirements_0_2 = next_value_of_STATE_VARIABLE_RevRequirements_0_2;
      STATE_VARIABLE_SolverVarMap_0_4 = next_value_of_STATE_VARIABLE_SolverVarMap_0_4;
      STATE_VARIABLE_Changed_0_6 = next_value_of_STATE_VARIABLE_Changed_0_6;
      STATE_VARIABLE_FoundFailure_0_8 = next_value_of_STATE_VARIABLE_FoundFailure_0_8;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__restrict_possibilities_to_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = grade_lib__grade_solver__IntroducedFrom__pred__restrict_possibilities_to__505__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver__restrict_possibilities_to_6_p_0(
  MR_Word STATE_VARIABLE_SetValueIds_0_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CntPoss_0_3,
  MR_Integer * STATE_VARIABLE_CntPoss_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_13;

      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&grade_lib__grade_solver_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (grade_lib__grade_solver__restrict_possibilities_to_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (STATE_VARIABLE_SetValueIds_0_1));
        MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_13, (MR_String) "predicate \140grade_lib.grade_solver.restrict_possibilities_to\'/6", (MR_String) "value not found");
      *STATE_VARIABLE_CntPoss_4 = STATE_VARIABLE_CntPoss_0_3;
    }
    else
    {
      MR_Word HeadValue0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word TailValues0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word HeadValue_22;
      MR_Word TailValues_23;
      MR_Word ValueId_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadValue0_20, (MR_Integer) 0))) & (MR_Integer) 127);
      MR_Word Possible0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadValue0_20, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_CntPoss_32_32;
      MR_Word STATE_VARIABLE_SetValueIds_35_35;
      MR_Word STATE_VARIABLE_SetValueIds_31_31;

      succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), STATE_VARIABLE_SetValueIds_0_1, ((MR_Box) (ValueId_24)), &STATE_VARIABLE_SetValueIds_31_31);
      if (succeeded)
      {
        STATE_VARIABLE_SetValueIds_35_35 = STATE_VARIABLE_SetValueIds_31_31;
        if ((Possible0_25 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_CntPoss_32_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CntPoss_0_3 + (MR_Unsigned) 1);
        else
          STATE_VARIABLE_CntPoss_32_32 = STATE_VARIABLE_CntPoss_0_3;
        HeadValue_22 = HeadValue0_20;
      }
      else
      {
        MR_Word Possible_27;
        MR_Word Var_34 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (HeadVar__2_2)));

        {
          Possible_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Possible_27, 0) = ((MR_Box) (Var_34));
        }
        {
          HeadValue_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadValue_22, 0) = (MR_Box) ((MR_Unsigned) (ValueId_24));
          MR_hl_field(MR_mktag(0), HeadValue_22, 1) = ((MR_Box) (Possible_27));
        }
        STATE_VARIABLE_CntPoss_32_32 = STATE_VARIABLE_CntPoss_0_3;
        STATE_VARIABLE_SetValueIds_35_35 = STATE_VARIABLE_SetValueIds_0_1;
      }
      grade_lib__grade_solver__restrict_possibilities_to_6_p_0(STATE_VARIABLE_SetValueIds_35_35, HeadVar__2_2, STATE_VARIABLE_CntPoss_32_32, STATE_VARIABLE_CntPoss_4, TailValues0_21, &TailValues_23);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadValue_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailValues_23));
      }
    }
  }
}

static void MR_CALL 
grade_lib__grade_solver__set_value_to_not_possible_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Values_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.set_value_to_not_possible\'/4", (MR_String) "value not found");
        return;
      }
    else
    {
      MR_Word HeadValue0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailValues0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ValueId_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadValue0_12, (MR_Integer) 0))) & (MR_Integer) 127);

      succeeded = (HeadVar__1_1 == ValueId_15);
      if (succeeded)
      {
        MR_Word Possible_17;
        MR_Word HeadValue_18;
        MR_Word Var_20 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (HeadVar__2_2)));

        {
          Possible_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Possible_17, 0) = ((MR_Box) (Var_20));
        }
        {
          HeadValue_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadValue_18, 0) = (MR_Box) ((MR_Unsigned) (ValueId_15));
          MR_hl_field(MR_mktag(0), HeadValue_18, 1) = ((MR_Box) (Possible_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Values_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadValue_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailValues0_13));
        }
      }
      else
      {
        MR_Word TailValues_19;

        grade_lib__grade_solver__set_value_to_not_possible_4_p_0(HeadVar__1_1, HeadVar__2_2, TailValues0_13, &TailValues_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Values_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadValue0_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailValues_19));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver__some_value_is_possible_2_p_0(
  MR_Word Values_3,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SearchValueId_4;
    MR_Word SearchValueIds_5;
    MR_Word Var_6;
    MR_Word Var_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      SearchValueId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      SearchValueIds_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      Var_6 = (MR_Word) ((MR_Unsigned) 0U);
      grade_lib__grade_solver__is_value_possible_3_p_0(Values_3, SearchValueId_4, &Var_7);
      succeeded = grade_lib__grade_state____Unify____solver_var_value_possible_0_0(Var_6, Var_7);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = SearchValueIds_5;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
grade_lib__grade_solver__is_value_possible_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SearchValueId_2,
  MR_Word * Possible_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_solver.is_value_possible\'/3", (MR_String) "did not find value");
        return;
      }
    else
    {
      MR_Word Value_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Values_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ValueId_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Value_8, (MR_Integer) 0))) & (MR_Integer) 127);
      MR_Word ValuePossible_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Value_8, (MR_Integer) 1))));

      succeeded = (ValueId_12 == SearchValueId_2);
      if (succeeded)
        *Possible_3 = ValuePossible_13;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Values_9;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____failure_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____failure_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____failure_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____failure_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____failure_tree_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____failure_tree_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____failure_tree_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____failure_tree_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____installed_grade_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____installed_grade_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____installed_grade_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____installed_grade_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____installed_grade_solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____installed_grade_solution_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____installed_grade_solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____installed_grade_solution_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____maybe_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____maybe_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____maybe_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____maybe_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____maybe_found_failure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____maybe_found_failure_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____maybe_found_failure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____maybe_found_failure_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____should_commit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____should_commit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____should_commit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____should_commit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____solution_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____solution_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____solve_counts_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____solve_counts_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____solve_counts_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____solve_counts_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____success_soln_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____success_soln_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____success_soln_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____success_soln_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
grade_lib__grade_solver____Unify____why_var_is_not_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = grade_lib__grade_solver____Unify____why_var_is_not_value_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
grade_lib__grade_solver____Compare____why_var_is_not_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    grade_lib__grade_solver____Compare____why_var_is_not_value_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__grade_lib__grade_solver__init(void)
{
}

void mercury__grade_lib__grade_solver__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_info_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_failure_tree_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_solution_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_maybe_changed_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_maybe_found_failure_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_should_commit_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_solution_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_solve_counts_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_success_soln_map_0);
	MR_register_type_ctor_info(&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_why_var_is_not_value_0);
}

void mercury__grade_lib__grade_solver__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__grade_lib__grade_solver__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module grade_lib.grade_solver.
