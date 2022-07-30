/*
** Automatically generated from `program_representation_utils.m'
** by the Mercury compiler,
** version 22.01.4-beta-2022-07-30
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


// :- module program_representation_utils.
// :- implementation.

/*
INIT mercury__program_representation_utils__init
ENDINIT
*/

#include "program_representation_utils.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_mdbcomp__goal_path__type_ctor_info_goal_path_step_0;

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0[1];

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0;

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1;

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0[1];

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1[1];

static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_atomic_goal_is_call_0[2];

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_atomic_goal_is_call_0[2];

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_atomic_goal_is_call_0[2];

static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0;

static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_inst_map_0_0[2];

static const MR_ConstString program_representation_utils__program_representation_utils__field_names_inst_map_0_0[2];

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0;

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0[1];

static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0[1];

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_inst_map_0[1];

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_0[1];

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0[1];

static const MR_NotagFunctorDesc program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0;

static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__pseudo_1__pseudo_2;

static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0[2];

static const MR_ConstString program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0[2];

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0;

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0[1];

static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2[1];

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_print_goal_info_2[1];

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_print_goal_info_2[1];

static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0;

static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1;

static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_ordinal_ordered_seen_duplicate_instantiation_0[2];

static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0[2];

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0[2];

static const MR_ConstString program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1[1];

static const MR_TypeClassMethod program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1[1];

static const MR_TypeClassId program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1;

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__928__1_1_f_0(
  MR_Integer LambdaHeadVar__1_80);

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__923__1_1_f_0(
  MR_Integer LambdaHeadVar__1_87);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1263__2_3_p_0(
  MR_Word LambdaHeadVar__1_52,
  MR_Word LambdaHeadVar__2_53,
  MR_Word * LambdaHeadVar__3_54);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1263__1_3_p_0(
  MR_Word LambdaHeadVar__1_30,
  MR_Word LambdaHeadVar__2_31,
  MR_Word * LambdaHeadVar__3_32);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1187__1_5_p_0(
  MR_Word Before_4,
  MR_Integer LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word LambdaHeadVar__3_17,
  MR_Word * LambdaHeadVar__4_18);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__merge_inst_map__1143__1_3_p_0(
  MR_Word HeadVar__1_24,
  MR_Word HeadVar__2_25,
  MR_Word * HeadVar__3_26);

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__575__1_2_f_0(
  MR_Word HeadVar__1_194,
  MR_Word HeadVar__2_195);

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__573__1_2_f_0(
  MR_Word LinePrefix_46,
  MR_Word LambdaHeadVar__1_159);

static MR_Box MR_CALL 
program_representation_utils__IntroducedFrom__func__print_proc_to_strings__418__1_2_f_0(
  MR_Word TypeClassInfo_for_goal_annotation_6,
  MR_Box HeadVar__2_7);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__print_module_to_strings__232__1_4_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_45,
  MR_Word HeadVar__3_46,
  MR_Word * HeadVar__4_47);

static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_45,
  MR_Word HeadVar__3_46,
  MR_Word * HeadVar__4_47);

static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
program_representation_utils__inst_intersect_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
program_representation_utils__inst_map_ground_var_6_p_0(
  MR_Word DepVars0_7,
  MR_Integer Var_8,
  MR_Word InstMap0_9,
  MR_Word * InstMap_10,
  MR_Word STATE_VARIABLE_SeenDuplicateInstantiation_0_21,
  MR_Word * STATE_VARIABLE_SeenDuplicateInstantiation_22);

static void MR_CALL 
program_representation_utils__add_head_var_inst_to_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstMap_0_9,
  MR_Word * STATE_VARIABLE_InstMap_10);

static void MR_CALL 
program_representation_utils__label_case_9_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word ParentGoalId_10,
  MR_Word STATE_VARIABLE_Case_0_20,
  MR_Word * STATE_VARIABLE_Case_21,
  MR_Integer STATE_VARIABLE_CaseNum_0_22,
  MR_Integer * STATE_VARIABLE_CaseNum_23,
  MR_Word STATE_VARIABLE_Counter_0_24,
  MR_Word * STATE_VARIABLE_Counter_25,
  MR_Word STATE_VARIABLE_Map_0_26,
  MR_Word * STATE_VARIABLE_Map_27);

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_case__979__1_1_f_0(
  MR_Integer LambdaHeadVar__1_32);

static void MR_CALL 
program_representation_utils__label_goal_wrapper_10_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MakePathStep_11,
  MR_Word ParentGoalId_12,
  MR_Word STATE_VARIABLE_Goal_0_17,
  MR_Word * STATE_VARIABLE_Goal_18,
  MR_Integer STATE_VARIABLE_GoalNum_0_19,
  MR_Integer * STATE_VARIABLE_GoalNum_20,
  MR_Word STATE_VARIABLE_Counter_0_21,
  MR_Word * STATE_VARIABLE_Counter_22,
  MR_Word STATE_VARIABLE_Map_0_23,
  MR_Word * STATE_VARIABLE_Map_24);

static MR_Word MR_CALL 
program_representation_utils__add_nl_1_f_0(
  MR_String Str_3);

static void MR_CALL 
program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(
  MR_Word VarNameTable_6,
  MR_Integer VarNum_7,
  MR_Word TypeRep_8,
  MR_Word STATE_VARIABLE_Strings_0_15,
  MR_Word * STATE_VARIABLE_Strings_16);

static void MR_CALL 
program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(
  MR_Integer TypeNum_5,
  MR_Word TypeRep_6,
  MR_Word STATE_VARIABLE_Strings_0_11,
  MR_Word * STATE_VARIABLE_Strings_12);

static void MR_CALL 
program_representation_utils__arg_type_reps_to_strings_3_p_0(
  MR_Word HeadTypeRep_1,
  MR_Word HeadVar__2_2,
  MR_Word * Cord_3);

static void MR_CALL 
program_representation_utils__type_rep_to_strings_2_p_0(
  MR_Word TypeRep_3,
  MR_Word * Cord_4);

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(
  MR_Word OISUTypeProcs_4,
  MR_Word STATE_VARIABLE_Strings_0_7,
  MR_Word * STATE_VARIABLE_Strings_8);

static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0(
  MR_Word VarToDepVars_5,
  MR_Integer VarRep_6,
  MR_Word STATE_VARIABLE_Set_0_9,
  MR_Word * STATE_VARIABLE_Set_10);

static void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
program_representation_utils__initial_inst_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
program_representation_utils__label_goal_7_p_0(
  MR_Word TypeInfo_for_T_94,
  MR_Word ContainingGoal_8,
  MR_Word STATE_VARIABLE_Goal_0_43,
  MR_Word * STATE_VARIABLE_Goal_44,
  MR_Word STATE_VARIABLE_Counter_0_45,
  MR_Word * STATE_VARIABLE_Counter_46,
  MR_Word STATE_VARIABLE_Map_0_47,
  MR_Word * STATE_VARIABLE_Map_48);

static void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho6_5_p_0(
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word Prefix_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
program_representation_utils__print_head_var_3_p_0(
  MR_Word VarTable_4,
  MR_Word HeadVar__2_2,
  MR_String * String_7);

static void MR_CALL 
program_representation_utils__print_conj_to_strings_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_goal_annotation_16,
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word RevGoalPath_8,
  MR_Word GoalReps_9,
  MR_Word * Strings_10);

static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word TypeClassInfo_for_goal_annotation_49,
  MR_Word Info_1,
  MR_Integer HeadVar__2_2,
  MR_Word RevGoalPath_3,
  MR_Integer CaseNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
program_representation_utils__print_disj_to_strings_7_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeClassInfo_for_goal_annotation_35,
  MR_Word Info_1,
  MR_Integer HeadVar__2_2,
  MR_Word RevGoalPath_3,
  MR_Integer DisjNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
program_representation_utils__print_conj_to_strings_2_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_goal_annotation_31,
  MR_Word Info_1,
  MR_Integer HeadVar__2_2,
  MR_Word RevGoalPath_3,
  MR_Integer ConjNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
program_representation_utils__detism_to_string_2_p_0(
  MR_Word Detism_3,
  MR_Word * DetismStrCord_4);

static void MR_CALL 
program_representation_utils__print_atomic_goal_to_strings_3_p_0(
  MR_Word VarTable_4,
  MR_Word AtomicGoalRep_5,
  MR_Word * Strings_6);

static void MR_CALL 
program_representation_utils__print_args_to_strings__ho3_4_p_0(
  MR_Word VarTable_6,
  MR_Word Args_7,
  MR_Word * Strings_8);

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho7_5_p_0(
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word Prefix_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
program_representation_utils__print_args_to_strings__ho2_4_p_0(
  MR_Word VarTable_6,
  MR_Word Args_7,
  MR_Word * Strings_8);

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho8_5_p_0(
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word Prefix_4,
  MR_Word * HeadVar__5_5);

static MR_Word MR_CALL 
program_representation_utils__nl_0_f_0(void);

static void MR_CALL 
program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(
  MR_Integer Indent_4,
  MR_Word ConsIdArityRep_5,
  MR_Word * Strings_6);

static MR_Word MR_CALL 
program_representation_utils__indent_1_f_0(
  MR_Integer N_3);

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
program_representation_utils____Compare____inst_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box program_representation_utils_scalar_common_1[11][2];

static /* final */ const MR_Box program_representation_utils_scalar_common_2[20][3];

static /* final */ const MR_Box program_representation_utils_scalar_common_3[1][1];

static /* final */ const MR_Box program_representation_utils_scalar_common_4[8][6];

static /* final */ const MR_Box program_representation_utils_scalar_common_5[3][7];

static /* final */ const MR_Box program_representation_utils_scalar_common_7[2][8];

static /* final */ const MR_Integer program_representation_utils_scalar_common_8[2][2];

static /* final */ const MR_Box program_representation_utils_scalar_common_9[3][5];

static /* final */ const MR_Box program_representation_utils_scalar_common_10[1][14];

static /* final */ const MR_Box program_representation_utils_scalar_common_11[1][13];

static /* final */ const MR_Box program_representation_utils_scalar_common_12[1][9];


/* sealed */ struct program_representation_utils__vector_common_type_6_0_s {
  const MR_String program_representation_utils__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct program_representation_utils__vector_common_type_6_0_s program_representation_utils_vector_common_6[37];



static /* final */ const MR_Box program_representation_utils_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_program_representation_utils__goal_annotation__arity1__unit__unit__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) " -> ")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_2[20][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils_scalar_common_1[3]))
  },
  /* row 3 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[0])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_5[0])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_5[1])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[1])),
    ((MR_Box) (program_representation_utils__print_goal_to_strings_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[0])),
    ((MR_Box) (program_representation_utils__label_goal_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[0])),
    ((MR_Box) (program_representation_utils__label_goal_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[4])),
    ((MR_Box) (program_representation_utils__initial_inst_map_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[5])),
    ((MR_Box) (program_representation_utils__merge_inst_map_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[6])),
    ((MR_Box) (program_representation_utils__merge_inst_map_4_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[7])),
    ((MR_Box) (program_representation_utils__atomic_goal_get_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[7])),
    ((MR_Box) (program_representation_utils__atomic_goal_get_vars_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[2])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[2])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[2])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_4[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_oisu_type_procs_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_5[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Integer program_representation_utils_scalar_common_8[2][2] = {
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

static /* final */ const MR_Box program_representation_utils_scalar_common_9[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_10[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_8[1])),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&program_representation_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__pseudo_1)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_11[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_8[1])),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__pseudo_1)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_12[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0))
  },
};


static /* final */ const struct program_representation_utils__vector_common_type_6_0_s program_representation_utils_vector_common_6[37] = {
  /* row 0 */   {     (MR_String) "det" },
  /* row 1 */   {     (MR_String) "semidet" },
  /* row 2 */   {     (MR_String) "nondet" },
  /* row 3 */   {     (MR_String) "multi" },
  /* row 4 */   {     (MR_String) "cc_nondet" },
  /* row 5 */   {     (MR_String) "cc_multi" },
  /* row 6 */   {     (MR_String) "erroneous" },
  /* row 7 */   {     (MR_String) "failure" },
  /* row 8 */   {     (MR_String) "det" },
  /* row 9 */   {     (MR_String) "semidet" },
  /* row 10 */   {     (MR_String) "nondet" },
  /* row 11 */   {     (MR_String) "multi" },
  /* row 12 */   {     (MR_String) "cc_nondet" },
  /* row 13 */   {     (MR_String) "cc_multi" },
  /* row 14 */   {     (MR_String) "erroneous" },
  /* row 15 */   {     (MR_String) "failure" },
  /* row 16 */   {     (MR_String) "det" },
  /* row 17 */   {     (MR_String) "semidet" },
  /* row 18 */   {     (MR_String) "nondet" },
  /* row 19 */   {     (MR_String) "multi" },
  /* row 20 */   {     (MR_String) "cc_nondet" },
  /* row 21 */   {     (MR_String) "cc_multi" },
  /* row 22 */   {     (MR_String) "erroneous" },
  /* row 23 */   {     (MR_String) "failure" },
  /* row 24 */   {     (MR_String) "int" },
  /* row 25 */   {     (MR_String) "uint" },
  /* row 26 */   {     (MR_String) "int8" },
  /* row 27 */   {     (MR_String) "uint8" },
  /* row 28 */   {     (MR_String) "int16" },
  /* row 29 */   {     (MR_String) "uint16" },
  /* row 30 */   {     (MR_String) "int32" },
  /* row 31 */   {     (MR_String) "uint32" },
  /* row 32 */   {     (MR_String) "int64" },
  /* row 33 */   {     (MR_String) "uint64" },
  /* row 34 */   {     (MR_String) "float" },
  /* row 35 */   {     (MR_String) "string" },
  /* row 36 */   {     (MR_String) "char" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1,
  {
    (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_mdbcomp__goal_path__type_ctor_info_goal_path_step_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__pseudo_1 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__pseudo_1 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0[1] = {
  (MR_PseudoTypeInfo) (&program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0 = {
  (MR_String) "atomic_goal_is_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1 = {
  (MR_String) "atomic_goal_is_trivial",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0
};

static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_atomic_goal_is_call_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_atomic_goal_is_call_0[2] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0,
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1
};

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_atomic_goal_is_call_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_atomic_goal_is_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (program_representation_utils____Unify____atomic_goal_is_call_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____atomic_goal_is_call_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "atomic_goal_is_call",
  {     program_representation_utils__program_representation_utils__du_name_ordered_atomic_goal_is_call_0 },
  {     program_representation_utils__program_representation_utils__du_ptag_ordered_atomic_goal_is_call_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  program_representation_utils__program_representation_utils__functor_number_map_atomic_goal_is_call_0,

};

static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0)
  }
};

static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_inst_map_0_0[2] = {
  (MR_PseudoTypeInfo) (&program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0),
  (MR_PseudoTypeInfo) (&program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString program_representation_utils__program_representation_utils__field_names_inst_map_0_0[2] = {
  (MR_String) "im_inst_map",
  (MR_String) "im_var_dep_map"
};

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0 = {
  (MR_String) "inst_map",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  program_representation_utils__program_representation_utils__field_types_inst_map_0_0,
  program_representation_utils__program_representation_utils__field_names_inst_map_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0
};

static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_inst_map_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0
};

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (program_representation_utils____Unify____inst_map_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____inst_map_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "inst_map",
  {     program_representation_utils__program_representation_utils__du_name_ordered_inst_map_0 },
  {     program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  program_representation_utils__program_representation_utils__functor_number_map_inst_map_0,

};

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0 = {
  (MR_String) "inst_map_delta",
  (MR_PseudoTypeInfo) (&program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_inst_map_delta_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (program_representation_utils____Unify____inst_map_delta_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____inst_map_delta_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "inst_map_delta",
  {     &program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0 },
  {     &program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0,

};

static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0[2] = {
  (MR_PseudoTypeInfo) (&program_representation_utils____vpti_func_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) (&program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)
};

static const MR_ConstString program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0[2] = {
  (MR_String) "pgi_lookup_annotation",
  (MR_String) "pgi_var_name_table"
};

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0 = {
  (MR_String) "print_goal_info",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0,
  program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0
};

static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_name_ordered_print_goal_info_2[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0
};

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_print_goal_info_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_print_goal_info_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (program_representation_utils____Unify____print_goal_info_2_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____print_goal_info_2_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "print_goal_info",
  {     program_representation_utils__program_representation_utils__du_name_ordered_print_goal_info_2 },
  {     program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  program_representation_utils__program_representation_utils__functor_number_map_print_goal_info_2,

};

static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0 = {
  (MR_String) "seen_duplicate_instantiation",
  INT32_C(0)
};

static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1 = {
  (MR_String) "have_not_seen_duplicate_instantiation",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_ordinal_ordered_seen_duplicate_instantiation_0[2] = {
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0,
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1
};

static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0[2] = {
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1,
  &program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0
};

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "seen_duplicate_instantiation",
  {     program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0 },
  {     program_representation_utils__program_representation_utils__enum_ordinal_ordered_seen_duplicate_instantiation_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_program_representation_utils__goal_annotation__arity1__unit__unit__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001))
};

static const MR_ConstString program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1[1] = {
  {
    (MR_String) "print_goal_annotation_to_strings",
    (MR_Integer) 3,
    MR_PREDICATE
  }
};

static const MR_TypeClassId program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1 = {
  (MR_String) "program_representation_utils",
  (MR_String) "goal_annotation",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1,
  program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1
};

const MR_TypeClassDeclStruct program_representation_utils__program_representation_utils__type_class_decl_goal_annotation_1 = {
  &program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__928__1_1_f_0(
  MR_Integer LambdaHeadVar__1_80)
{
  {
    MR_Word LambdaHeadVar__2_81;

    {
      LambdaHeadVar__2_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__2_81, 0) = ((MR_Box) (LambdaHeadVar__1_80));
    }
    return LambdaHeadVar__2_81;
  }
}

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__923__1_1_f_0(
  MR_Integer LambdaHeadVar__1_87)
{
  {
    MR_Word LambdaHeadVar__2_88;

    {
      LambdaHeadVar__2_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_88, 0) = ((MR_Box) (LambdaHeadVar__1_87));
    }
    return LambdaHeadVar__2_88;
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1263__2_3_p_0(
  MR_Word LambdaHeadVar__1_52,
  MR_Word LambdaHeadVar__2_53,
  MR_Word * LambdaHeadVar__3_54)
{
  if ((LambdaHeadVar__1_52 == (MR_Word) ((MR_Unsigned) 0U)))
    *LambdaHeadVar__3_54 = LambdaHeadVar__2_53;
  else
  {
    MR_Integer VarI_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LambdaHeadVar__1_52, (MR_Integer) 0))));

    mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (VarI_55)), LambdaHeadVar__2_53, LambdaHeadVar__3_54);
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1263__1_3_p_0(
  MR_Word LambdaHeadVar__1_30,
  MR_Word LambdaHeadVar__2_31,
  MR_Word * LambdaHeadVar__3_32)
{
  if ((LambdaHeadVar__1_30 == (MR_Word) ((MR_Unsigned) 0U)))
    *LambdaHeadVar__3_32 = LambdaHeadVar__2_31;
  else
  {
    MR_Integer VarI_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), LambdaHeadVar__1_30, (MR_Integer) 0))));

    mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (VarI_17)), LambdaHeadVar__2_31, LambdaHeadVar__3_32);
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1187__1_5_p_0(
  MR_Word Before_4,
  MR_Integer LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word LambdaHeadVar__3_17,
  MR_Word * LambdaHeadVar__4_18)
{
  {
    MR_bool succeeded;
    MR_Word BeforeInst_11;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Before_4, (MR_Integer) 0))));
    MR_Box conv0_BeforeInst_11;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0), Var_19, LambdaHeadVar__1_15, &conv0_BeforeInst_11);
    if (succeeded)
    {
      BeforeInst_11 = ((MR_Word) (conv0_BeforeInst_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (BeforeInst_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (LambdaHeadVar__2_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *LambdaHeadVar__4_18 = LambdaHeadVar__3_17;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LambdaHeadVar__1_15)), LambdaHeadVar__3_17, LambdaHeadVar__4_18);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            switch (LambdaHeadVar__2_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140program_representation_utils.calc_inst_map_delta\'/3", (MR_String) "variable should become less instantiated");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 2:
                {
                }
                break;
            }
            *LambdaHeadVar__4_18 = LambdaHeadVar__3_17;
          }
          break;
        case (MR_Integer) 2:
          {
            switch (LambdaHeadVar__2_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140program_representation_utils.calc_inst_map_delta\'/3", (MR_String) "variable should become less instantiated");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 2:
                {
                }
                break;
            }
            *LambdaHeadVar__4_18 = LambdaHeadVar__3_17;
          }
          break;
      }
    else
      switch (LambdaHeadVar__2_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *LambdaHeadVar__4_18 = LambdaHeadVar__3_17;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (LambdaHeadVar__1_15)), LambdaHeadVar__3_17, LambdaHeadVar__4_18);
          break;
      }
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__merge_inst_map__1143__1_3_p_0(
  MR_Word HeadVar__1_24,
  MR_Word HeadVar__2_25,
  MR_Word * HeadVar__3_26)
{
  mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_24, HeadVar__2_25, HeadVar__3_26);
}

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__575__1_2_f_0(
  MR_Word HeadVar__1_194,
  MR_Word HeadVar__2_195)
{
  {
    MR_Word HeadVar__3_196;

    HeadVar__3_196 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_194, HeadVar__2_195);
    return HeadVar__3_196;
  }
}

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__573__1_2_f_0(
  MR_Word LinePrefix_46,
  MR_Word LambdaHeadVar__1_159)
{
  {
    MR_Word LambdaHeadVar__2_160;
    MR_Word Var_161;
    MR_Word Var_162;

    Var_162 = program_representation_utils__nl_0_f_0();
    Var_161 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LambdaHeadVar__1_159, Var_162);
    LambdaHeadVar__2_160 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinePrefix_46, Var_161);
    return LambdaHeadVar__2_160;
  }
}

static MR_Box MR_CALL 
program_representation_utils__IntroducedFrom__func__print_proc_to_strings__418__1_2_f_0(
  MR_Word TypeClassInfo_for_goal_annotation_6,
  MR_Box HeadVar__2_7)
{
  {
    MR_Box HeadVar__3_8;
    MR_Word TypeInfo_10_10;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_goal_annotation_6, (MR_Integer) 1, &TypeInfo_10_10);
    HeadVar__3_8 = mercury__std_util__id_1_f_0(TypeInfo_10_10, HeadVar__2_7);
    return HeadVar__3_8;
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__print_module_to_strings__232__1_4_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_45,
  MR_Word HeadVar__3_46,
  MR_Word * HeadVar__4_47)
{
  program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_50_95_95_49_95_95_91_49_93_95_48_4_p_0(HeadVar__2_45, HeadVar__3_46, HeadVar__4_47);
}

static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_45,
  MR_Word HeadVar__3_46,
  MR_Word * HeadVar__4_47)
{
  {
    MR_Word ProcStrings_59;

    program_representation_utils__print_proc_to_strings_2_p_0((MR_Word) (&program_representation_utils_scalar_common_1[1]), HeadVar__2_45, &ProcStrings_59);
    *HeadVar__4_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__3_46, ProcStrings_59);
  }
}

static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&program_representation_utils_scalar_common_1[0]));
}

void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0(
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
program_representation_utils____Unify____seen_duplicate_instantiation_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0(
  MR_Word TypeInfo_for_Key_11,
  MR_Word TypeInfo_for_GoalAnn_12,
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0(
  MR_Word TypeInfo_for_Key_9,
  MR_Word TypeInfo_for_GoalAnn_10,
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
      MR_Word TypeCtorInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
      if (succeeded)
      {
        TypeCtorInfo_11_11 = (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&program_representation_utils_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&program_representation_utils_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

void MR_CALL 
program_representation_utils____Compare____inst_map_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&program_representation_utils_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&program_representation_utils_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0(
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
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&program_representation_utils_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&program_representation_utils_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&program_representation_utils_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&program_representation_utils_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
program_representation_utils__inst_intersect_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
      }
      break;
    case (MR_Integer) 2:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
      }
      break;
  }
}

static void MR_CALL 
program_representation_utils__inst_map_ground_var_6_p_0(
  MR_Word DepVars0_7,
  MR_Integer Var_8,
  MR_Word InstMap0_9,
  MR_Word * InstMap_10,
  MR_Word STATE_VARIABLE_SeenDuplicateInstantiation_0_21,
  MR_Word * STATE_VARIABLE_SeenDuplicateInstantiation_22)
{
  {
    MR_bool succeeded;
    MR_Word VarToInst0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstMap0_9, (MR_Integer) 0))));
    MR_Word VarToDepVars0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstMap0_9, (MR_Integer) 1))));
    MR_Word NewInst_16;
    MR_Word DepVars_17;
    MR_Word VarToInst_19;
    MR_Word VarToDepVars_20;
    MR_Word InstPrime_14;
    MR_Box conv0_InstPrime_14;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0), VarToInst0_12, Var_8, &conv0_InstPrime_14);
    if (succeeded)
    {
      InstPrime_14 = ((MR_Word) (conv0_InstPrime_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (InstPrime_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            NewInst_16 = (MR_Integer) 1;
            DepVars_17 = DepVars0_7;
            *STATE_VARIABLE_SeenDuplicateInstantiation_22 = STATE_VARIABLE_SeenDuplicateInstantiation_0_21;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word DepVarsFromIM_18;
            MR_Box conv1_DepVarsFromIM_18;

            NewInst_16 = (MR_Integer) 2;
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&program_representation_utils_scalar_common_1[3]), VarToDepVars0_13, Var_8, &conv1_DepVarsFromIM_18);
            DepVarsFromIM_18 = ((MR_Word) (conv1_DepVarsFromIM_18));
            DepVars_17 = mercury__set__union_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), DepVars0_7, DepVarsFromIM_18);
            *STATE_VARIABLE_SeenDuplicateInstantiation_22 = (MR_Integer) 0;
          }
          break;
      }
    else
    {
      NewInst_16 = (MR_Integer) 1;
      DepVars_17 = DepVars0_7;
      *STATE_VARIABLE_SeenDuplicateInstantiation_22 = STATE_VARIABLE_SeenDuplicateInstantiation_0_21;
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0), Var_8, ((MR_Box) (NewInst_16)), VarToInst0_12, &VarToInst_19);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&program_representation_utils_scalar_common_1[3]), Var_8, ((MR_Box) (DepVars_17)), VarToDepVars0_13, &VarToDepVars_20);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *InstMap_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarToInst_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarToDepVars_20));
    }
  }
}

static void MR_CALL 
program_representation_utils__add_head_var_inst_to_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_InstMap_0_9,
  MR_Word * STATE_VARIABLE_InstMap_10)
{
  {
    MR_Integer VarRep_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ModeRep_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InitialInstRep_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModeRep_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word Var_11;
    MR_Word VarToInst0_19;
    MR_Word VarToDepVars0_20;
    MR_Word VarToInst_21;
    MR_Word VarToDepVars_22;

    Var_11 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    VarToInst0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstMap_0_9, (MR_Integer) 0))));
    VarToDepVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstMap_0_9, (MR_Integer) 1))));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0), VarRep_4, ((MR_Box) (InitialInstRep_7)), VarToInst0_19, &VarToInst_21);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&program_representation_utils_scalar_common_1[3]), VarRep_4, ((MR_Box) (Var_11)), VarToDepVars0_20, &VarToDepVars_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstMap_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarToInst_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarToDepVars_22));
    }
  }
}

static void MR_CALL 
program_representation_utils__label_case_9_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word ParentGoalId_10,
  MR_Word STATE_VARIABLE_Case_0_20,
  MR_Word * STATE_VARIABLE_Case_21,
  MR_Integer STATE_VARIABLE_CaseNum_0_22,
  MR_Integer * STATE_VARIABLE_CaseNum_23,
  MR_Word STATE_VARIABLE_Counter_0_24,
  MR_Word * STATE_VARIABLE_Counter_25,
  MR_Word STATE_VARIABLE_Map_0_26,
  MR_Word * STATE_VARIABLE_Map_27)
{
  {
    MR_Word MainConsId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_20, (MR_Integer) 0))));
    MR_Word OtherConsIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_20, (MR_Integer) 1))));
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_20, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word Var_53;
    MR_Word Var_57;

    Var_57 = program_representation_utils__IntroducedFrom__func__label_case__979__1_1_f_0(STATE_VARIABLE_CaseNum_0_22);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ParentGoalId_10));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_57));
    }
    program_representation_utils__label_goal_7_p_0(TypeInfo_for_T_37, Var_53, Goal0_17, &Goal_19, STATE_VARIABLE_Counter_0_24, STATE_VARIABLE_Counter_25, STATE_VARIABLE_Map_0_26, STATE_VARIABLE_Map_27);
    *STATE_VARIABLE_CaseNum_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CaseNum_0_22 + (MR_Unsigned) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_19));
    }
  }
}

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_case__979__1_1_f_0(
  MR_Integer LambdaHeadVar__1_32)
{
  {
    MR_Word LambdaHeadVar__2_33;

    {
      LambdaHeadVar__2_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_33, 1) = ((MR_Box) (LambdaHeadVar__1_32));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_33, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return LambdaHeadVar__2_33;
  }
}

static void MR_CALL 
program_representation_utils__label_goal_wrapper_10_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word MakePathStep_11,
  MR_Word ParentGoalId_12,
  MR_Word STATE_VARIABLE_Goal_0_17,
  MR_Word * STATE_VARIABLE_Goal_18,
  MR_Integer STATE_VARIABLE_GoalNum_0_19,
  MR_Integer * STATE_VARIABLE_GoalNum_20,
  MR_Word STATE_VARIABLE_Counter_0_21,
  MR_Word * STATE_VARIABLE_Counter_22,
  MR_Word STATE_VARIABLE_Map_0_23,
  MR_Word * STATE_VARIABLE_Map_24)
{
  {
    MR_Word Var_25;
    MR_Word Var_29;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), MakePathStep_11, (MR_Integer) 1))));
    MR_Box conv1_Var_29;

    conv1_Var_29 = func_0(((MR_Box) (MakePathStep_11)), ((MR_Box) (STATE_VARIABLE_GoalNum_0_19)));
    Var_29 = ((MR_Word) (conv1_Var_29));
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ParentGoalId_12));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_29));
    }
    program_representation_utils__label_goal_7_p_0(TypeInfo_for_T_32, Var_25, STATE_VARIABLE_Goal_0_17, STATE_VARIABLE_Goal_18, STATE_VARIABLE_Counter_0_21, STATE_VARIABLE_Counter_22, STATE_VARIABLE_Map_0_23, STATE_VARIABLE_Map_24);
    *STATE_VARIABLE_GoalNum_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_GoalNum_0_19 + (MR_Unsigned) 1);
  }
}

static MR_Word MR_CALL 
program_representation_utils__add_nl_1_f_0(
  MR_String Str_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) (Str_3));
      MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[10])));
    }
    HeadVar__2_2 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_4);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(
  MR_Word VarNameTable_6,
  MR_Integer VarNum_7,
  MR_Word TypeRep_8,
  MR_Word STATE_VARIABLE_Strings_0_15,
  MR_Word * STATE_VARIABLE_Strings_16)
{
  {
    MR_bool succeeded;
    MR_String VarNumStr_10;
    MR_Word VarIdStrs_12;
    MR_Word TypeRepStrs_13;
    MR_Word EntryStrs_14;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_String VarName_11;

    mercury__string__int_to_string_2_p_0(VarNum_7, &VarNumStr_10);
    succeeded = mdbcomp__program_representation__search_var_name_3_p_0(VarNameTable_6, VarNum_7, &VarName_11);
    if (succeeded)
    {
      succeeded = (strcmp(VarName_11, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (VarNumStr_10));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[9])));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (VarName_11));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
      }
      VarIdStrs_12 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17);
    }
    else
    {
      MR_Word Var_24;
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (VarNumStr_10));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[9])));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "unnamed_var "));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
      }
      VarIdStrs_12 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_24);
    }
    program_representation_utils__type_rep_to_strings_2_p_0(TypeRep_8, &TypeRepStrs_13);
    Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeRepStrs_13, Var_31);
    EntryStrs_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarIdStrs_12, Var_30);
    *STATE_VARIABLE_Strings_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Strings_0_15, EntryStrs_14);
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(
  MR_Integer TypeNum_5,
  MR_Word TypeRep_6,
  MR_Word STATE_VARIABLE_Strings_0_11,
  MR_Word * STATE_VARIABLE_Strings_12)
{
  {
    MR_String TypeNumStr_8;
    MR_Word TypeRepStrCord_9;
    MR_Word Str_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_18;

    mercury__string__int_to_string_2_p_0(TypeNum_5, &TypeNumStr_8);
    program_representation_utils__type_rep_to_strings_2_p_0(TypeRep_6, &TypeRepStrCord_9);
    Var_13 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TypeNumStr_8)));
    Var_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " -> ")));
    Var_18 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeRepStrCord_9, Var_18);
    Var_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_15, Var_17);
    Str_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Var_14);
    *STATE_VARIABLE_Strings_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Strings_0_11, Str_10);
  }
}

static void MR_CALL 
program_representation_utils__arg_type_reps_to_strings_3_p_0(
  MR_Word HeadTypeRep_1,
  MR_Word HeadVar__2_2,
  MR_Word * Cord_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    program_representation_utils__type_rep_to_strings_2_p_0(HeadTypeRep_1, Cord_3);
  else
  {
    MR_Word HeadTailTypeRep_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailTailTypeReps_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word HeadCord_10;
    MR_Word TailCord_11;
    MR_Word Var_12;
    MR_Word Var_13;

    program_representation_utils__type_rep_to_strings_2_p_0(HeadTypeRep_1, &HeadCord_10);
    program_representation_utils__arg_type_reps_to_strings_3_p_0(HeadTailTypeRep_7, TailTailTypeReps_8, &TailCord_11);
    Var_13 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    Var_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, TailCord_11);
    *Cord_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadCord_10, Var_12);
  }
}

static void MR_CALL 
program_representation_utils__type_rep_to_strings_2_p_0(
  MR_Word TypeRep_3,
  MR_Word * Cord_4)
{
  switch (MR_tag((MR_Word) TypeRep_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorSymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRep_3, (MR_Integer) 0))));
        MR_Word ArgTypes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRep_3, (MR_Integer) 1))));
        MR_String TypeCtorSymNameStr_7;
        MR_Word TypeCtorSymNameCord_8;

        TypeCtorSymNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_5);
        TypeCtorSymNameCord_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TypeCtorSymNameStr_7)));
        if ((ArgTypes_6 == (MR_Word) ((MR_Unsigned) 0U)))
          *Cord_4 = TypeCtorSymNameCord_8;
        else
        {
          MR_Word HeadTypeRep_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_6, (MR_Integer) 0))));
          MR_Word TailTypeReps_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_6, (MR_Integer) 1))));
          MR_Word ArgTypesCord_11;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_44;
          MR_Word Var_45;

          program_representation_utils__arg_type_reps_to_strings_3_p_0(HeadTypeRep_9, TailTypeReps_10, &ArgTypesCord_11);
          Var_42 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(")));
          Var_45 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
          Var_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgTypesCord_11, Var_45);
          Var_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, Var_44);
          *Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeCtorSymNameCord_8, Var_41);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BuiltinTypeRep_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), TypeRep_3, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String TypeNameStr_13 = ((&program_representation_utils_vector_common_6[24 + BuiltinTypeRep_12]))->program_representation_utils__vector_common_type_6_0__vct_6_f_0;

        *Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TypeNameStr_13)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgTypes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeRep_3, (MR_Integer) 0))));

        if ((ArgTypes_53 == (MR_Word) ((MR_Unsigned) 0U)))
          *Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "{}")));
        else
        {
          MR_Word Var_35;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word HeadTypeRep_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_53, (MR_Integer) 0))));
          MR_Word TailTypeReps_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_53, (MR_Integer) 1))));
          MR_Word ArgTypesCord_49;

          program_representation_utils__arg_type_reps_to_strings_3_p_0(HeadTypeRep_47, TailTypeReps_48, &ArgTypesCord_49);
          Var_35 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "{")));
          Var_38 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "}")));
          Var_37 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgTypesCord_49, Var_38);
          *Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_35, Var_37);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeRep_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeResultType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeRep_3, (MR_Integer) 2))));
            MR_Word ArgTypes_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeRep_3, (MR_Integer) 1))));

            if ((MaybeResultType_14 == (MR_Word) ((MR_Unsigned) 0U)))
              if ((ArgTypes_78 == (MR_Word) ((MR_Unsigned) 0U)))
                *Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "pred ()")));
              else
              {
                MR_Word Var_29;
                MR_Word Var_31;
                MR_Word Var_32;
                MR_Word HeadTypeRep_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_78, (MR_Integer) 0))));
                MR_Word TailTypeReps_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_78, (MR_Integer) 1))));
                MR_Word ArgTypesCord_59;

                program_representation_utils__arg_type_reps_to_strings_3_p_0(HeadTypeRep_57, TailTypeReps_58, &ArgTypesCord_59);
                Var_29 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "pred(")));
                Var_32 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
                Var_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgTypesCord_59, Var_32);
                *Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, Var_31);
              }
            else
            {
              MR_Word ResultType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResultType_14, (MR_Integer) 0))));
              MR_Word ResultTypeCord_16;

              program_representation_utils__type_rep_to_strings_2_p_0(ResultType_15, &ResultTypeCord_16);
              if ((ArgTypes_78 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_27;

                Var_27 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "func = ")));
                *Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, ResultTypeCord_16);
              }
              else
              {
                MR_Word Var_21;
                MR_Word Var_23;
                MR_Word Var_24;
                MR_Word Var_25;
                MR_Word HeadTypeRep_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_78, (MR_Integer) 0))));
                MR_Word TailTypeReps_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_78, (MR_Integer) 1))));
                MR_Word ArgTypesCord_68;

                program_representation_utils__arg_type_reps_to_strings_3_p_0(HeadTypeRep_66, TailTypeReps_67, &ArgTypesCord_68);
                Var_21 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "func(")));
                Var_25 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ") = ")));
                Var_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, ResultTypeCord_16);
                Var_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgTypesCord_68, Var_24);
                *Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_23);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeRep_3, (MR_Integer) 1))));
            MR_String NStr_18;
            MR_String Var_19;

            mercury__string__int_to_string_2_p_0(N_17, &NStr_18);
            Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "T", NStr_18);
            *Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_19)));
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv2_String_4;

    program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_String_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_String_4));
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_String_4;

    program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_String_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_String_4));
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_String_4;

    program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_String_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_String_4));
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(
  MR_Word OISUTypeProcs_4,
  MR_Word STATE_VARIABLE_Strings_0_7,
  MR_Word * STATE_VARIABLE_Strings_8)
{
  {
    MR_Word OISUStr_6;
    MR_String TypeCtor_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), OISUTypeProcs_4, (MR_Integer) 0))));
    MR_Word CreatorProcLabels_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUTypeProcs_4, (MR_Integer) 1))));
    MR_Word MutatorProcLabels_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUTypeProcs_4, (MR_Integer) 2))));
    MR_Word DestructorProcLabels_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUTypeProcs_4, (MR_Integer) 3))));
    MR_Word CreatorStrs_17;
    MR_Word MutatorStrs_18;
    MR_Word DestructorStrs_19;
    MR_Word CreatorNlCords_20;
    MR_Word MutatorNlCords_21;
    MR_Word DestructorNlCords_22;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;

    mercury__list__map_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&program_representation_utils_scalar_common_2[14]), CreatorProcLabels_14, &CreatorStrs_17);
    mercury__list__map_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&program_representation_utils_scalar_common_2[15]), MutatorProcLabels_15, &MutatorStrs_18);
    mercury__list__map_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&program_representation_utils_scalar_common_2[16]), DestructorProcLabels_16, &DestructorStrs_19);
    CreatorNlCords_20 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&program_representation_utils_scalar_common_1[0]), (MR_Word) (&program_representation_utils_scalar_common_2[17]), CreatorStrs_17);
    MutatorNlCords_21 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&program_representation_utils_scalar_common_1[0]), (MR_Word) (&program_representation_utils_scalar_common_2[18]), MutatorStrs_18);
    DestructorNlCords_22 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&program_representation_utils_scalar_common_1[0]), (MR_Word) (&program_representation_utils_scalar_common_2[19]), DestructorStrs_19);
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) "\nOISU type constructor "));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    Var_29 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30);
    Var_37 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CreatorNlCords_20);
    Var_35 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\nCreator procs:\n")), Var_37);
    Var_41 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MutatorNlCords_21);
    Var_39 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\nMutator procs:\n")), Var_41);
    Var_44 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DestructorNlCords_22);
    Var_42 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\nDestructor procs:\n")), Var_44);
    Var_38 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_39, Var_42);
    Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_35, Var_38);
    OISUStr_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, Var_34);
    *STATE_VARIABLE_Strings_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Strings_0_7, OISUStr_6);
  }
}

void MR_CALL 
program_representation_utils__atomic_goal_is_call_2_p_0(
  MR_Word AtomicGoal_3,
  MR_Word * IsCall_4)
{
  switch (MR_tag((MR_Word) AtomicGoal_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *IsCall_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          *IsCall_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 5:
          {
            MR_Word Args_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *IsCall_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Args_30));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Args_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *IsCall_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Args_35));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Args_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *IsCall_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Args_36));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_54;

    program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1263__2_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_54);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_54));
  }
}

static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_32;

    program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1263__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_32);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_32));
  }
}

void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0(
  MR_Word AtomicGoal_3,
  MR_Word * Vars_4)
{
  switch (MR_tag((MR_Word) AtomicGoal_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AtomicGoal_3, (MR_Integer) 0))));
        MR_Word VarsL_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoal_3, (MR_Integer) 2))));
        MR_Word Vars0_99;

        Vars0_99 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarsL_98);
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_97)), Vars0_99, Vars_4);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), AtomicGoal_3, (MR_Integer) 0))));
        MR_Word VarsL_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AtomicGoal_3, (MR_Integer) 2))));
        MR_Word Vars0_103;

        Vars0_103 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarsL_102);
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_101)), Vars0_103, Vars_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeVars_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicGoal_3, (MR_Integer) 2))));
        MR_Word Var_77;
        MR_Integer Var_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), AtomicGoal_3, (MR_Integer) 0))));
        MR_Word Vars0_82;
        MR_Box conv3_Vars0_82;

        Var_77 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
        mercury__list__foldl_4_p_0((MR_Word) (&program_representation_utils_scalar_common_1[4]), (MR_Word) (&program_representation_utils_scalar_common_1[3]), (MR_Word) (&program_representation_utils_scalar_common_2[13]), MaybeVars_74, ((MR_Box) (Var_77)), &conv3_Vars0_82);
        Vars0_82 = ((MR_Word) (conv3_Vars0_82));
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_81)), Vars0_82, Vars_4);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 3))));
            MR_Word Var_29;
            MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 1))));
            MR_Word Vars0_37;
            MR_Box conv1_Vars0_37;

            Var_29 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
            mercury__list__foldl_4_p_0((MR_Word) (&program_representation_utils_scalar_common_1[4]), (MR_Word) (&program_representation_utils_scalar_common_1[3]), (MR_Word) (&program_representation_utils_scalar_common_2[12]), MaybeVars_12, ((MR_Box) (Var_29)), &conv1_Vars0_37);
            Vars0_37 = ((MR_Word) (conv1_Vars0_37));
            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_36)), Vars0_37, Vars_4);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer VarA_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 1))));
            MR_Integer VarB_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 2))));
            MR_Word Var_93;
            MR_Word Var_94;

            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (VarB_92));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (VarA_91));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
            }
            *Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_93);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer VarA_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 1))));
            MR_Integer VarB_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 2))));
            MR_Word Var_25;
            MR_Word Var_26;

            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (VarB_19));
              MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (VarA_18));
              MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
            }
            *Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_25);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer VarA_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 1))));
            MR_Integer VarB_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 2))));
            MR_Word Var_107;
            MR_Word Var_108;

            {
              Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (VarB_106));
              MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (VarA_105));
              MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_108));
            }
            *Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_107);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word VarsL_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 1))));

            *Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarsL_89);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 1))));
            MR_Word VarsL_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 2))));
            MR_Word Vars0_10;

            Vars0_10 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarsL_7);
            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_5)), Vars0_10, Vars_4);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 1))));
            MR_Word VarsL_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 3))));
            MR_Word Vars0_50;

            Vars0_50 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarsL_49);
            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_48)), Vars0_50, Vars_4);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word VarsL_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 3))));

            *Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarsL_87);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word VarsL_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 3))));

            *Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarsL_38);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word VarsL_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoal_3, (MR_Integer) 2))));

            *Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarsL_46);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__4_18;

    program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1187__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_18);
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_18));
  }
}

void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0(
  MR_Word Before_4,
  MR_Word After_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word DeltaVars_6;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Box conv1_DeltaVars_6;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (program_representation_utils__calc_inst_map_delta_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Before_4));
    }
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), After_5, (MR_Integer) 0))));
    Var_14 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0), (MR_Word) (&program_representation_utils_scalar_common_1[3]), Var_12, Var_13, ((MR_Box) (Var_14)), &conv1_DeltaVars_6);
    DeltaVars_6 = ((MR_Word) (conv1_DeltaVars_6));
    *HeadVar__3_3 = (MR_Word) (DeltaVars_6);
  }
}

MR_Word MR_CALL 
program_representation_utils__empty_inst_map_delta_0_f_0(void)
{
  {
    MR_Word InstMap_2;
    MR_Word Vars_3;

    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &Vars_3);
    InstMap_2 = (MR_Word) (Vars_3);
    return InstMap_2;
  }
}

void MR_CALL 
program_representation_utils__empty_inst_map_delta_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word Vars_2;

    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &Vars_2);
    *HeadVar__1_1 = (MR_Word) (Vars_2);
  }
}

void MR_CALL 
program_representation_utils__inst_map_delta_get_var_set_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Vars_3)
{
  *Vars_3 = (MR_Word) (HeadVar__1_1);
}

MR_Word MR_CALL 
program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(
  MR_Word A_4,
  MR_Word B_5)
{
  {
    MR_bool succeeded = (A_4 == (MR_Integer) 1);
    MR_Word R_6;

    if (succeeded)
      succeeded = (B_5 == (MR_Integer) 1);
    if (succeeded)
      R_6 = (MR_Integer) 1;
    else
      R_6 = (MR_Integer) 0;
    return R_6;
  }
}

static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_26;

    program_representation_utils__IntroducedFrom__pred__merge_inst_map__1143__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_26);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_26));
  }
}

static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    program_representation_utils__inst_intersect_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

MR_Word MR_CALL 
program_representation_utils__merge_inst_map_4_f_0(
  MR_Word InstMapA_6,
  MR_Word DetismA_7,
  MR_Word InstMapB_8,
  MR_Word DetismB_9)
{
  {
    MR_Word InstMap_10;

    switch (DetismA_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
      case (MR_Integer) 4:
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        switch (DetismB_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 5:
          case (MR_Integer) 4:
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word VarToInstA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstMapA_6, (MR_Integer) 0))));
              MR_Word VarToDepVarsA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstMapA_6, (MR_Integer) 1))));
              MR_Word VarToInstB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstMapB_8, (MR_Integer) 0))));
              MR_Word VarToDepVarsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstMapB_8, (MR_Integer) 1))));
              MR_Word VarToInst_15;
              MR_Word VarToDepVars_16;

              mercury__map__union_4_p_1((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&program_representation_utils_scalar_common_2[10]), VarToInstA_11, VarToInstB_13, &VarToInst_15);
              mercury__map__union_4_p_1((MR_Word) (&program_representation_utils_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&program_representation_utils_scalar_common_2[11]), VarToDepVarsA_12, VarToDepVarsB_14, &VarToDepVars_16);
              {
                InstMap_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), InstMap_10, 0) = ((MR_Box) (VarToInst_15));
                MR_hl_field(MR_mktag(0), InstMap_10, 1) = ((MR_Box) (VarToDepVars_16));
              }
            }
            break;
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            InstMap_10 = InstMapA_6;
            break;
        }
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 7:
        InstMap_10 = InstMapB_8;
        break;
    }
    return InstMap_10;
  }
}

void MR_CALL 
program_representation_utils__inst_map_get_var_deps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer VarRep_6,
  MR_Word * DepVars_7)
{
  {
    MR_Word VarToDepVars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_8;

    Var_8 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    program_representation_utils__inst_map_get_var_deps_2_4_p_0(VarToDepVars_5, VarRep_6, Var_8, DepVars_7);
  }
}

static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Set_10;

    program_representation_utils__inst_map_get_var_deps_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Set_10);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Set_10));
  }
}

static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0(
  MR_Word VarToDepVars_5,
  MR_Integer VarRep_6,
  MR_Word STATE_VARIABLE_Set_0_9,
  MR_Word * STATE_VARIABLE_Set_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Set_0_9, ((MR_Box) (VarRep_6)));
    if (succeeded)
      *STATE_VARIABLE_Set_10 = STATE_VARIABLE_Set_0_9;
    else
    {
      MR_Word DepVars_8;
      MR_Box conv0_DepVars_8;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&program_representation_utils_scalar_common_1[3]), VarToDepVars_5, VarRep_6, &conv0_DepVars_8);
      if (succeeded)
      {
        DepVars_8 = ((MR_Word) (conv0_DepVars_8));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Set_11_11;
        MR_Word Var_12;
        MR_Box conv2_STATE_VARIABLE_Set_10;

        STATE_VARIABLE_Set_11_11 = mercury__set__union_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Set_0_9, DepVars_8);
        {
          Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (program_representation_utils__inst_map_get_var_deps_2_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (VarToDepVars_5));
        }
        mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&program_representation_utils_scalar_common_1[3]), Var_12, DepVars_8, ((MR_Box) (STATE_VARIABLE_Set_11_11)), &conv2_STATE_VARIABLE_Set_10);
        *STATE_VARIABLE_Set_10 = ((MR_Word) (conv2_STATE_VARIABLE_Set_10));
      }
      else
        *STATE_VARIABLE_Set_10 = STATE_VARIABLE_Set_0_9;
    }
  }
}

void MR_CALL 
program_representation_utils__inst_map_get_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Var_7,
  MR_Word * Inst_8,
  MR_Word * DepVars_9)
{
  {
    MR_bool succeeded;
    MR_Word VarToInst_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VarToDepVars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InstPrime_10;
    MR_Box conv0_InstPrime_10;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0), VarToInst_5, Var_7, &conv0_InstPrime_10);
    if (succeeded)
    {
      InstPrime_10 = ((MR_Word) (conv0_InstPrime_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Box conv1_DepVars_9;

      *Inst_8 = InstPrime_10;
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&program_representation_utils_scalar_common_1[3]), VarToDepVars_6, Var_7, &conv1_DepVars_9);
      *DepVars_9 = ((MR_Word) (conv1_DepVars_9));
    }
    else
    {
      *Inst_8 = (MR_Integer) 0;
      *DepVars_9 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    }
  }
}

static void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_InstMap_10;
    MR_Word conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22;

    program_representation_utils__inst_map_ground_var_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_InstMap_10, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22);
    *wrapper_arg_3 = ((MR_Box) (conv1_InstMap_10));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22));
  }
}

void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0(
  MR_Word Vars_6,
  MR_Word DepVars_7,
  MR_Word STATE_VARIABLE_InstMap_0_10,
  MR_Word * STATE_VARIABLE_InstMap_11,
  MR_Word * SeenDuplicateInstantiation_9)
{
  {
    MR_Word Var_12;
    MR_Box conv3_STATE_VARIABLE_InstMap_11;
    MR_Box conv2_SeenDuplicateInstantiation_9;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (program_representation_utils__inst_map_ground_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (DepVars_7));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0), (MR_Word) (&program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0), Var_12, Vars_6, ((MR_Box) (STATE_VARIABLE_InstMap_0_10)), &conv3_STATE_VARIABLE_InstMap_11, ((MR_Box) ((MR_Integer) 1)), &conv2_SeenDuplicateInstantiation_9);
    *STATE_VARIABLE_InstMap_11 = ((MR_Word) (conv3_STATE_VARIABLE_InstMap_11));
    *SeenDuplicateInstantiation_9 = ((MR_Word) (conv2_SeenDuplicateInstantiation_9));
  }
}

static void MR_CALL 
program_representation_utils__initial_inst_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_InstMap_10;

    program_representation_utils__add_head_var_inst_to_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InstMap_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InstMap_10));
  }
}

MR_Word MR_CALL 
program_representation_utils__initial_inst_map_1_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word ProcDefn_3)
{
  {
    MR_Word InstMap_4;
    MR_Word HeadVars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefn_3, (MR_Integer) 0))));
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Box conv1_InstMap_4;

    Var_8 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0));
    Var_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&program_representation_utils_scalar_common_1[3]));
    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (Var_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0), (MR_Word) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0), (MR_Word) (&program_representation_utils_scalar_common_2[9]), HeadVars_5, ((MR_Box) (Var_7)), &conv1_InstMap_4);
    InstMap_4 = ((MR_Word) (conv1_InstMap_4));
    return InstMap_4;
  }
}

MR_bool MR_CALL 
program_representation_utils__progrep_search_proc_3_p_0(
  MR_Word ProgRep_4,
  MR_Word ProcLabel_5,
  MR_Word * ProcRep_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_12_33;
    MR_Word TypeInfo_13_34;
    MR_String DefModule_9;
    MR_Word ModuleRep_17;
    MR_Word ModuleReps_22;
    MR_Word Var_28;
    MR_Box conv0_ModuleRep_17;
    MR_Box conv1_ProcRep_6;

    if (((MR_tag((MR_Word) ProcLabel_5)) == (MR_Integer) 0))
      DefModule_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_5, (MR_Integer) 2))));
    else
      DefModule_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_5, (MR_Integer) 2))));
    ModuleReps_22 = (MR_Word) (ProgRep_4);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&program_representation_utils_scalar_common_1[7]), ModuleReps_22, ((MR_Box) (DefModule_9)), &conv0_ModuleRep_17);
    if (succeeded)
    {
      ModuleRep_17 = ((MR_Word) (conv0_ModuleRep_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleRep_17, (MR_Integer) 4))));
      TypeCtorInfo_12_33 = (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0);
      TypeInfo_13_34 = (MR_Word) (&program_representation_utils_scalar_common_1[2]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_12_33, TypeInfo_13_34, Var_28, ((MR_Box) (ProcLabel_5)), &conv1_ProcRep_6);
      if (succeeded)
      {
        *ProcRep_6 = ((MR_Word) (conv1_ProcRep_6));
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
program_representation_utils__label_goals_4_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word * Map_6,
  MR_Word STATE_VARIABLE_Goal_0_10,
  MR_Word * STATE_VARIABLE_Goal_11)
{
  {
    MR_Integer LastIdPlus1_5;
    MR_Word Counter_8;
    MR_Integer Var_12;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_9;

    Var_16 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_17 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0));
    program_representation_utils__label_goal_7_p_0(TypeInfo_for_T_19, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Goal_0_10, STATE_VARIABLE_Goal_11, Var_16, &Counter_8, Var_17, Map_6);
    mercury__counter__allocate_3_p_0(&LastIdPlus1_5, Counter_8, &Var_9);
    Var_12 = (MR_Integer) ((MR_Unsigned) LastIdPlus1_5 - (MR_Unsigned) 1);
    *HeadVar__1_1 = (MR_Word) (Var_12);
  }
}

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv19_STATE_VARIABLE_Case_21;
    MR_Integer conv18_STATE_VARIABLE_CaseNum_23;
    MR_Word conv17_STATE_VARIABLE_Counter_25;
    MR_Word conv16_STATE_VARIABLE_Map_27;

    program_representation_utils__label_case_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv19_STATE_VARIABLE_Case_21, ((MR_Integer) (wrapper_arg_3)), &conv18_STATE_VARIABLE_CaseNum_23, ((MR_Word) (wrapper_arg_5)), &conv17_STATE_VARIABLE_Counter_25, ((MR_Word) (wrapper_arg_7)), &conv16_STATE_VARIABLE_Map_27);
    *wrapper_arg_2 = ((MR_Box) (conv19_STATE_VARIABLE_Case_21));
    *wrapper_arg_4 = ((MR_Box) (conv18_STATE_VARIABLE_CaseNum_23));
    *wrapper_arg_6 = ((MR_Box) (conv17_STATE_VARIABLE_Counter_25));
    *wrapper_arg_8 = ((MR_Box) (conv16_STATE_VARIABLE_Map_27));
  }
}

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Goal_18;
    MR_Integer conv11_STATE_VARIABLE_GoalNum_20;
    MR_Word conv10_STATE_VARIABLE_Counter_22;
    MR_Word conv9_STATE_VARIABLE_Map_24;

    program_representation_utils__label_goal_wrapper_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv12_STATE_VARIABLE_Goal_18, ((MR_Integer) (wrapper_arg_3)), &conv11_STATE_VARIABLE_GoalNum_20, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_Counter_22, ((MR_Word) (wrapper_arg_7)), &conv9_STATE_VARIABLE_Map_24);
    *wrapper_arg_2 = ((MR_Box) (conv12_STATE_VARIABLE_Goal_18));
    *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_GoalNum_20));
    *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_Counter_22));
    *wrapper_arg_8 = ((MR_Box) (conv9_STATE_VARIABLE_Map_24));
  }
}

static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__2_81;

    conv8_LambdaHeadVar__2_81 = program_representation_utils__IntroducedFrom__func__label_goal__928__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_81));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Goal_18;
    MR_Integer conv3_STATE_VARIABLE_GoalNum_20;
    MR_Word conv2_STATE_VARIABLE_Counter_22;
    MR_Word conv1_STATE_VARIABLE_Map_24;

    program_representation_utils__label_goal_wrapper_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Goal_18, ((MR_Integer) (wrapper_arg_3)), &conv3_STATE_VARIABLE_GoalNum_20, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Counter_22, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_Map_24);
    *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Goal_18));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_GoalNum_20));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Counter_22));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_Map_24));
  }
}

static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_88;

    conv0_LambdaHeadVar__2_88 = program_representation_utils__IntroducedFrom__func__label_goal__923__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_88));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
program_representation_utils__label_goal_7_p_0(
  MR_Word TypeInfo_for_T_94,
  MR_Word ContainingGoal_8,
  MR_Word STATE_VARIABLE_Goal_0_43,
  MR_Word * STATE_VARIABLE_Goal_44,
  MR_Word STATE_VARIABLE_Counter_0_45,
  MR_Word * STATE_VARIABLE_Counter_46,
  MR_Word STATE_VARIABLE_Map_0_47,
  MR_Word * STATE_VARIABLE_Map_48)
{
  {
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_43, (MR_Integer) 0))));
    MR_Word Detism_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_43, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Integer GoalIdNum_15;
    MR_Word GoalId_16;
    MR_Word GoalExpr_21;
    MR_Word STATE_VARIABLE_Counter_49_49;
    MR_Word STATE_VARIABLE_Map_50_50;

    mercury__counter__allocate_3_p_0(&GoalIdNum_15, STATE_VARIABLE_Counter_0_45, &STATE_VARIABLE_Counter_49_49);
    GoalId_16 = (MR_Word) (GoalIdNum_15);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ((MR_Box) (GoalId_16)), ((MR_Box) (ContainingGoal_8)), STATE_VARIABLE_Map_0_47, &STATE_VARIABLE_Map_50_50);
    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_106_106;
          MR_Word Conjs0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalExpr0_12, (MR_Integer) 0))));
          MR_Word Conjs_19;
          MR_Word Var_82;
          MR_Box conv7_Var_20;
          MR_Box conv6_STATE_VARIABLE_Counter_46;
          MR_Box conv5_STATE_VARIABLE_Map_48;

          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&program_representation_utils_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (TypeInfo_for_T_94));
            MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (&program_representation_utils_scalar_common_2[7]));
            MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (GoalId_16));
          }
          {
            TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_106_106, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1));
            MR_hl_field(MR_mktag(0), TypeInfo_106_106, 1) = ((MR_Box) (TypeInfo_for_T_94));
          }
          mercury__list__map_foldl3_9_p_1(TypeInfo_106_106, (MR_Word) (&program_representation_utils_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&program_representation_utils_scalar_common_2[0]), (MR_Word) (Var_82), (MR_Word) (Conjs0_17), &Conjs_19, ((MR_Box) ((MR_Integer) 1)), &conv7_Var_20, ((MR_Box) (STATE_VARIABLE_Counter_49_49)), &conv6_STATE_VARIABLE_Counter_46, ((MR_Box) (STATE_VARIABLE_Map_50_50)), &conv5_STATE_VARIABLE_Map_48);
          *STATE_VARIABLE_Counter_46 = ((MR_Word) (conv6_STATE_VARIABLE_Counter_46));
          *STATE_VARIABLE_Map_48 = ((MR_Word) (conv5_STATE_VARIABLE_Map_48));
          {
            GoalExpr_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GoalExpr_21, 0) = ((MR_Box) (Conjs_19));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_120_120;
          MR_Word Disjs0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 0))));
          MR_Word Disjs_23;
          MR_Word Var_75;
          MR_Box conv15_Var_24;
          MR_Box conv14_STATE_VARIABLE_Counter_46;
          MR_Box conv13_STATE_VARIABLE_Map_48;

          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&program_representation_utils_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_4));
            MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (TypeInfo_for_T_94));
            MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (&program_representation_utils_scalar_common_2[8]));
            MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) (GoalId_16));
          }
          {
            TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_120_120, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1));
            MR_hl_field(MR_mktag(0), TypeInfo_120_120, 1) = ((MR_Box) (TypeInfo_for_T_94));
          }
          mercury__list__map_foldl3_9_p_1(TypeInfo_120_120, (MR_Word) (&program_representation_utils_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&program_representation_utils_scalar_common_2[0]), (MR_Word) (Var_75), (MR_Word) (Disjs0_22), &Disjs_23, ((MR_Box) ((MR_Integer) 1)), &conv15_Var_24, ((MR_Box) (STATE_VARIABLE_Counter_49_49)), &conv14_STATE_VARIABLE_Counter_46, ((MR_Box) (STATE_VARIABLE_Map_50_50)), &conv13_STATE_VARIABLE_Map_48);
          *STATE_VARIABLE_Counter_46 = ((MR_Word) (conv14_STATE_VARIABLE_Counter_46));
          *STATE_VARIABLE_Map_48 = ((MR_Word) (conv13_STATE_VARIABLE_Map_48));
          {
            GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), GoalExpr_21, 0) = ((MR_Box) (Disjs_23));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_134_134;
          MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 0))));
          MR_Word CanFail_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 2))));
          MR_Word Cases_28;
          MR_Word Var_71;
          MR_Box conv22_Var_29;
          MR_Box conv21_STATE_VARIABLE_Counter_46;
          MR_Box conv20_STATE_VARIABLE_Map_48;

          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&program_representation_utils_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_5));
            MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (TypeInfo_for_T_94));
            MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (GoalId_16));
          }
          {
            TypeInfo_134_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_134_134, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1));
            MR_hl_field(MR_mktag(0), TypeInfo_134_134, 1) = ((MR_Box) (TypeInfo_for_T_94));
          }
          mercury__list__map_foldl3_9_p_1(TypeInfo_134_134, (MR_Word) (&program_representation_utils_scalar_common_1[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&program_representation_utils_scalar_common_2[0]), (MR_Word) (Var_71), (MR_Word) (Cases0_27), &Cases_28, ((MR_Box) ((MR_Integer) 1)), &conv22_Var_29, ((MR_Box) (STATE_VARIABLE_Counter_49_49)), &conv21_STATE_VARIABLE_Counter_46, ((MR_Box) (STATE_VARIABLE_Map_50_50)), &conv20_STATE_VARIABLE_Map_48);
          *STATE_VARIABLE_Counter_46 = ((MR_Word) (conv21_STATE_VARIABLE_Counter_46));
          *STATE_VARIABLE_Map_48 = ((MR_Word) (conv20_STATE_VARIABLE_Map_48));
          {
            GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), GoalExpr_21, 0) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(2), GoalExpr_21, 1) = (MR_Box) ((MR_Unsigned) (CanFail_26));
            MR_hl_field(MR_mktag(2), GoalExpr_21, 2) = ((MR_Box) (Cases_28));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cond0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Then0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Else0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Cond_33;
              MR_Word Then_34;
              MR_Word Else_35;
              MR_Word Var_59;
              MR_Word STATE_VARIABLE_Counter_60_60;
              MR_Word STATE_VARIABLE_Map_61_61;
              MR_Word Var_63;
              MR_Word STATE_VARIABLE_Counter_64_64;
              MR_Word STATE_VARIABLE_Map_65_65;
              MR_Word Var_67;

              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (GoalId_16));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              program_representation_utils__label_goal_7_p_0(TypeInfo_for_T_94, Var_59, Cond0_30, &Cond_33, STATE_VARIABLE_Counter_49_49, &STATE_VARIABLE_Counter_60_60, STATE_VARIABLE_Map_50_50, &STATE_VARIABLE_Map_61_61);
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (GoalId_16));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              }
              program_representation_utils__label_goal_7_p_0(TypeInfo_for_T_94, Var_63, Then0_31, &Then_34, STATE_VARIABLE_Counter_60_60, &STATE_VARIABLE_Counter_64_64, STATE_VARIABLE_Map_61_61, &STATE_VARIABLE_Map_65_65);
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (GoalId_16));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              }
              program_representation_utils__label_goal_7_p_0(TypeInfo_for_T_94, Var_67, Else0_32, &Else_35, STATE_VARIABLE_Counter_64_64, STATE_VARIABLE_Counter_46, STATE_VARIABLE_Map_65_65, STATE_VARIABLE_Map_48);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (Cond_33));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = ((MR_Box) (Then_34));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 3) = ((MR_Box) (Else_35));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubGoal0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word SubGoal_37;
              MR_Word Var_55;

              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (GoalId_16));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              program_representation_utils__label_goal_7_p_0(TypeInfo_for_T_94, Var_55, SubGoal0_36, &SubGoal_37, STATE_VARIABLE_Counter_49_49, STATE_VARIABLE_Counter_46, STATE_VARIABLE_Map_50_50, STATE_VARIABLE_Map_48);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (SubGoal_37));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ScopeIsCut_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Var_51;
              MR_Word Var_54;
              MR_Word SubGoal0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word SubGoal_93;

              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_54, 1) = (MR_Box) ((MR_Unsigned) (ScopeIsCut_38));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (GoalId_16));
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
              }
              program_representation_utils__label_goal_7_p_0(TypeInfo_for_T_94, Var_51, SubGoal0_92, &SubGoal_93, STATE_VARIABLE_Counter_49_49, STATE_VARIABLE_Counter_46, STATE_VARIABLE_Map_50_50, STATE_VARIABLE_Map_48);
              {
                GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 1) = ((MR_Box) (SubGoal_93));
                MR_hl_field(MR_mktag(3), GoalExpr_21, 2) = (MR_Box) ((MR_Unsigned) (ScopeIsCut_38));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              GoalExpr_21 = GoalExpr0_12;
              *STATE_VARIABLE_Counter_46 = STATE_VARIABLE_Counter_49_49;
              *STATE_VARIABLE_Map_48 = STATE_VARIABLE_Map_50_50;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_44 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Detism_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GoalId_16));
    }
  }
}

static void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Strings_16;

    program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Strings_16);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Strings_16));
  }
}

static MR_Box MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;

    wrapper_arg_2 = program_representation_utils__IntroducedFrom__func__print_proc_to_strings__418__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1);
    return wrapper_arg_2;
  }
}

void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0(
  MR_Word TypeClassInfo_for_goal_annotation_6,
  MR_Word ProcRep_3,
  MR_Word * Strings_4)
{
  {
    MR_Word TypeInfo_12_12;
    MR_Word Var_5;
    MR_Word ProcLabel_16;
    MR_Word ProcDefnRep_17;
    MR_Word ArgVarReps_18;
    MR_Word GoalRep_19;
    MR_Word VarNameTable_20;
    MR_Word MaybeVarTypeTable_21;
    MR_Word Detism_22;
    MR_String ProcLabelString0_23;
    MR_Word DetismString_24;
    MR_Word ProcLabelString_25;
    MR_Word ArgsString_26;
    MR_Word GoalString_27;
    MR_Word MainStrings_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_String DetismStr_61;

    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (&program_representation_utils_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_5, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_5, 3) = ((MR_Box) (TypeClassInfo_for_goal_annotation_6));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_goal_annotation_6, (MR_Integer) 1, &TypeInfo_12_12);
    ProcLabel_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcRep_3, (MR_Integer) 0))));
    ProcDefnRep_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcRep_3, (MR_Integer) 1))));
    ArgVarReps_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_17, (MR_Integer) 0))));
    GoalRep_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_17, (MR_Integer) 1))));
    VarNameTable_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_17, (MR_Integer) 2))));
    MaybeVarTypeTable_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_17, (MR_Integer) 3))));
    Detism_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcDefnRep_17, (MR_Integer) 4))) & (MR_Integer) 7);
    program_representation_utils__print_proc_label_to_string_2_p_0(ProcLabel_16, &ProcLabelString0_23);
    DetismStr_61 = ((&program_representation_utils_vector_common_6[16 + Detism_22]))->program_representation_utils__vector_common_type_6_0__vct_6_f_0;
    DetismString_24 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (DetismStr_61)));
    Var_32 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " ")));
    Var_34 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ProcLabelString0_23)));
    Var_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_32, Var_34);
    ProcLabelString_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetismString_24, Var_31);
    if ((ArgVarReps_18 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgsString_26 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    else
    {
      MR_Word ArgsStr_70;
      MR_Word Var_71;
      MR_Word Var_73;
      MR_Word Arg_86;
      MR_Word Args_87;
      MR_String ArgName_90;
      MR_Word ArgsString_91;
      MR_Word Var_92;
      MR_Word Var_94;

      Var_71 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      Arg_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarReps_18, (MR_Integer) 0))));
      Args_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarReps_18, (MR_Integer) 1))));
      program_representation_utils__print_head_var_3_p_0(VarNameTable_20, Arg_86, &ArgName_90);
      Var_92 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
      program_representation_utils__print_args_2_to_strings__ho6_5_p_0(VarNameTable_20, Args_87, Var_92, &ArgsString_91);
      Var_94 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_90)), ArgsString_91);
      ArgsStr_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_71, Var_94);
      Var_73 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsStr_70, ((MR_Box) ((MR_String) ")")));
      ArgsString_26 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(")), Var_73);
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (VarNameTable_20));
    }
    program_representation_utils__print_goal_to_strings_5_p_0(TypeInfo_12_12, TypeClassInfo_for_goal_annotation_6, Var_36, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), GoalRep_19, &GoalString_27);
    Var_41 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " :-\n")));
    Var_44 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), GoalString_27, Var_44);
    Var_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, Var_43);
    Var_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsString_26, Var_40);
    MainStrings_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProcLabelString_25, Var_39);
    if ((MaybeVarTypeTable_21 == (MR_Word) ((MR_Unsigned) 0U)))
      *Strings_4 = MainStrings_28;
    else
    {
      MR_Word VarTypeTable_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarTypeTable_21, (MR_Integer) 0))));
      MR_Word TypeTableStrings_30;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Box conv1_TypeTableStrings_30;

      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&program_representation_utils_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_2_p_0_2));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (VarNameTable_20));
      }
      Var_46 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0), (MR_Word) (&program_representation_utils_scalar_common_1[0]), Var_45, VarTypeTable_29, ((MR_Box) (Var_46)), &conv1_TypeTableStrings_30);
      TypeTableStrings_30 = ((MR_Word) (conv1_TypeTableStrings_30));
      *Strings_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeTableStrings_30, MainStrings_28);
    }
  }
}

static void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Strings_16;

    program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Strings_16);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Strings_16));
  }
}

void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0(
  MR_Word TypeClassInfo_for_goal_annotation_7,
  MR_Word Lookup_4,
  MR_Word ProcRep_5,
  MR_Word * Strings_6)
{
  {
    MR_Word ProcLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcRep_5, (MR_Integer) 0))));
    MR_Word ProcDefnRep_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcRep_5, (MR_Integer) 1))));
    MR_Word ArgVarReps_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_13, (MR_Integer) 0))));
    MR_Word GoalRep_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_13, (MR_Integer) 1))));
    MR_Word VarNameTable_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_13, (MR_Integer) 2))));
    MR_Word MaybeVarTypeTable_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_13, (MR_Integer) 3))));
    MR_Word Detism_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcDefnRep_13, (MR_Integer) 4))) & (MR_Integer) 7);
    MR_String ProcLabelString0_19;
    MR_Word DetismString_20;
    MR_Word ProcLabelString_21;
    MR_Word ArgsString_22;
    MR_Word GoalString_23;
    MR_Word MainStrings_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_String DetismStr_57;

    program_representation_utils__print_proc_label_to_string_2_p_0(ProcLabel_12, &ProcLabelString0_19);
    DetismStr_57 = ((&program_representation_utils_vector_common_6[8 + Detism_18]))->program_representation_utils__vector_common_type_6_0__vct_6_f_0;
    DetismString_20 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (DetismStr_57)));
    Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " ")));
    Var_30 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ProcLabelString0_19)));
    Var_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Var_30);
    ProcLabelString_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetismString_20, Var_27);
    if ((ArgVarReps_14 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgsString_22 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    else
    {
      MR_Word ArgsStr_66;
      MR_Word Var_67;
      MR_Word Var_69;
      MR_Word Arg_82;
      MR_Word Args_83;
      MR_String ArgName_86;
      MR_Word ArgsString_87;
      MR_Word Var_88;
      MR_Word Var_90;

      Var_67 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      Arg_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarReps_14, (MR_Integer) 0))));
      Args_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarReps_14, (MR_Integer) 1))));
      program_representation_utils__print_head_var_3_p_0(VarNameTable_16, Arg_82, &ArgName_86);
      Var_88 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
      program_representation_utils__print_args_2_to_strings__ho6_5_p_0(VarNameTable_16, Args_83, Var_88, &ArgsString_87);
      Var_90 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_86)), ArgsString_87);
      ArgsStr_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_67, Var_90);
      Var_69 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsStr_66, ((MR_Box) ((MR_String) ")")));
      ArgsString_22 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(")), Var_69);
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Lookup_4));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (VarNameTable_16));
    }
    program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), TypeClassInfo_for_goal_annotation_7, Var_32, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), GoalRep_15, &GoalString_23);
    Var_37 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " :-\n")));
    Var_40 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), GoalString_23, Var_40);
    Var_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_37, Var_39);
    Var_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsString_22, Var_36);
    MainStrings_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProcLabelString_21, Var_35);
    if ((MaybeVarTypeTable_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *Strings_6 = MainStrings_24;
    else
    {
      MR_Word VarTypeTable_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarTypeTable_17, (MR_Integer) 0))));
      MR_Word TypeTableStrings_26;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Box conv1_TypeTableStrings_26;

      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&program_representation_utils_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (VarNameTable_16));
      }
      Var_42 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0), (MR_Word) (&program_representation_utils_scalar_common_1[0]), Var_41, VarTypeTable_25, ((MR_Box) (Var_42)), &conv1_TypeTableStrings_26);
      TypeTableStrings_26 = ((MR_Word) (conv1_TypeTableStrings_26));
      *Strings_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeTableStrings_26, MainStrings_24);
    }
  }
}

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho6_5_p_0(
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word Prefix_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word Arg_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgName_15;
    MR_Word ArgsString_16;
    MR_Word Var_17;
    MR_Word Var_19;

    program_representation_utils__print_head_var_3_p_0(VarTable_2, Arg_11, &ArgName_15);
    Var_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    program_representation_utils__print_args_2_to_strings__ho6_5_p_0(VarTable_2, Args_12, Var_17, &ArgsString_16);
    Var_19 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_15)), ArgsString_16);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Prefix_4, Var_19);
  }
}

static void MR_CALL 
program_representation_utils__print_head_var_3_p_0(
  MR_Word VarTable_4,
  MR_Word HeadVar__2_2,
  MR_String * String_7)
{
  {
    MR_Integer VarRep_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word VarMode_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String VarName_8;
    MR_Word InitialInst_9;
    MR_Word FinalInst_10;
    MR_String InitialInstStr_11;
    MR_String FinalInstStr_12;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_25;
    MR_String Var_27;

    mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, VarRep_5, &VarName_8);
    InitialInst_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), VarMode_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    FinalInst_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), VarMode_6, (MR_Integer) 0))) & (MR_Integer) 3);
    switch (InitialInst_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InitialInstStr_11 = (MR_String) "free";
        break;
      case (MR_Integer) 1:
        InitialInstStr_11 = (MR_String) "ground";
        break;
      case (MR_Integer) 2:
        InitialInstStr_11 = (MR_String) "other";
        break;
    }
    switch (FinalInst_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FinalInstStr_12 = (MR_String) "free";
        break;
      case (MR_Integer) 1:
        FinalInstStr_12 = (MR_String) "ground";
        break;
      case (MR_Integer) 2:
        FinalInstStr_12 = (MR_String) "other";
        break;
    }
    Var_22 = mercury__string__f_43_43_2_f_0(FinalInstStr_12, (MR_String) ")");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", Var_22);
    Var_25 = mercury__string__f_43_43_2_f_0(InitialInstStr_11, Var_24);
    Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "::(", Var_25);
    *String_7 = mercury__string__f_43_43_2_f_0(VarName_8, Var_27);
  }
}

static void MR_CALL 
program_representation_utils__print_conj_to_strings_5_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeClassInfo_for_goal_annotation_16,
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word RevGoalPath_8,
  MR_Word GoalReps_9,
  MR_Word * Strings_10)
{
  if ((GoalReps_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_14;

    Var_14 = program_representation_utils__indent_1_f_0(Indent_7);
    *Strings_10 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, ((MR_Box) ((MR_String) "true\n")));
  }
  else
    program_representation_utils__print_conj_to_strings_2_6_p_0(TypeInfo_for_T_17, TypeClassInfo_for_goal_annotation_16, Info_6, Indent_7, RevGoalPath_8, (MR_Integer) 1, GoalReps_9, Strings_10);
}

static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Strings_6;

    program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Strings_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Strings_6));
  }
}

static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word TypeClassInfo_for_goal_annotation_49,
  MR_Word Info_1,
  MR_Integer HeadVar__2_2,
  MR_Word RevGoalPath_3,
  MR_Integer CaseNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word CaseRep_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word CaseReps_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word DelimString_21;
    MR_Word MainConsIdArityRep_22;
    MR_Word OtherConsIdArityRep_23;
    MR_Word GoalRep_24;
    MR_Word ConsIdArityString_25;
    MR_Word OtherConsIdArityStrings_26;
    MR_Word RevSubGoalPath_27;
    MR_Word HeadGoalString_28;
    MR_Word TailCasesStrings_29;
    MR_Integer Var_33;
    MR_Word Var_35;
    MR_Integer Var_36;
    MR_Word Var_38;
    MR_Integer Var_40;
    MR_Integer Var_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;

    switch (HeadVar__6_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DelimString_21 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_30;
          MR_Word Var_31;

          Var_30 = program_representation_utils__indent_1_f_0(HeadVar__2_2);
          Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ";\n")));
          DelimString_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_31);
        }
        break;
    }
    MainConsIdArityRep_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseRep_17, (MR_Integer) 0))));
    OtherConsIdArityRep_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseRep_17, (MR_Integer) 1))));
    GoalRep_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CaseRep_17, (MR_Integer) 2))));
    Var_33 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
    program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(Var_33, MainConsIdArityRep_22, &ConsIdArityString_25);
    Var_36 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&program_representation_utils_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (program_representation_utils__print_switch_to_strings_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Var_36));
    }
    mercury__list__map_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0), (MR_Word) (&program_representation_utils_scalar_common_1[0]), Var_35, OtherConsIdArityRep_23, &OtherConsIdArityStrings_26);
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (CaseNum_4));
      MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      RevSubGoalPath_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevSubGoalPath_27, 0) = ((MR_Box) (RevGoalPath_3));
      MR_hl_field(MR_mktag(1), RevSubGoalPath_27, 1) = ((MR_Box) (Var_38));
    }
    Var_40 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
    program_representation_utils__print_goal_to_strings_5_p_0(TypeInfo_for_T_50, TypeClassInfo_for_goal_annotation_49, Info_1, Var_40, RevSubGoalPath_27, GoalRep_24, &HeadGoalString_28);
    Var_42 = (MR_Integer) ((MR_Unsigned) CaseNum_4 + (MR_Unsigned) 1);
    program_representation_utils__print_switch_to_strings_7_p_0(TypeInfo_for_T_50, TypeClassInfo_for_goal_annotation_49, Info_1, HeadVar__2_2, RevGoalPath_3, Var_42, CaseReps_18, (MR_Integer) 1, &TailCasesStrings_29);
    Var_47 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OtherConsIdArityStrings_26);
    Var_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadGoalString_28, TailCasesStrings_29);
    Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_47, Var_48);
    Var_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ConsIdArityString_25, Var_46);
    *HeadVar__7_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DelimString_21, Var_45);
  }
}

static void MR_CALL 
program_representation_utils__print_disj_to_strings_7_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeClassInfo_for_goal_annotation_35,
  MR_Word Info_1,
  MR_Integer HeadVar__2_2,
  MR_Word RevGoalPath_3,
  MR_Integer DisjNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word GoalRep_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word GoalReps_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word DelimString_21;
    MR_Word RevSubGoalPath_22;
    MR_Word HeadGoalString_23;
    MR_Word TailGoalsString_24;
    MR_Word Var_28;
    MR_Integer Var_29;
    MR_Integer Var_31;
    MR_Word Var_34;

    switch (HeadVar__6_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DelimString_21 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_25;
          MR_Word Var_26;

          Var_25 = program_representation_utils__indent_1_f_0(HeadVar__2_2);
          Var_26 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ";\n")));
          DelimString_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, Var_26);
        }
        break;
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (DisjNum_4));
    }
    {
      RevSubGoalPath_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevSubGoalPath_22, 0) = ((MR_Box) (RevGoalPath_3));
      MR_hl_field(MR_mktag(1), RevSubGoalPath_22, 1) = ((MR_Box) (Var_28));
    }
    Var_29 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
    program_representation_utils__print_goal_to_strings_5_p_0(TypeInfo_for_T_36, TypeClassInfo_for_goal_annotation_35, Info_1, Var_29, RevSubGoalPath_22, GoalRep_17, &HeadGoalString_23);
    Var_31 = (MR_Integer) ((MR_Unsigned) DisjNum_4 + (MR_Unsigned) 1);
    program_representation_utils__print_disj_to_strings_7_p_0(TypeInfo_for_T_36, TypeClassInfo_for_goal_annotation_35, Info_1, HeadVar__2_2, RevGoalPath_3, Var_31, GoalReps_18, (MR_Integer) 1, &TailGoalsString_24);
    Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadGoalString_23, TailGoalsString_24);
    *HeadVar__7_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DelimString_21, Var_34);
  }
}

static void MR_CALL 
program_representation_utils__print_conj_to_strings_2_6_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word TypeClassInfo_for_goal_annotation_31,
  MR_Word Info_1,
  MR_Integer HeadVar__2_2,
  MR_Word RevGoalPath_3,
  MR_Integer ConjNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word GoalRep_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word GoalReps_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word RevSubGoalPath_18;
    MR_Word HeadGoalString_19;
    MR_Word TailGoalsString_20;
    MR_Word Separator_21;
    MR_Word Var_24;
    MR_Integer Var_25;
    MR_Word Var_30;

    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ConjNum_4));
    }
    {
      RevSubGoalPath_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevSubGoalPath_18, 0) = ((MR_Box) (RevGoalPath_3));
      MR_hl_field(MR_mktag(1), RevSubGoalPath_18, 1) = ((MR_Box) (Var_24));
    }
    program_representation_utils__print_goal_to_strings_5_p_0(TypeInfo_for_T_32, TypeClassInfo_for_goal_annotation_31, Info_1, HeadVar__2_2, RevSubGoalPath_18, GoalRep_15, &HeadGoalString_19);
    Var_25 = (MR_Integer) ((MR_Unsigned) ConjNum_4 + (MR_Unsigned) 1);
    program_representation_utils__print_conj_to_strings_2_6_p_0(TypeInfo_for_T_32, TypeClassInfo_for_goal_annotation_31, Info_1, HeadVar__2_2, RevGoalPath_3, Var_25, GoalReps_16, &TailGoalsString_20);
    if ((GoalReps_16 == (MR_Word) ((MR_Unsigned) 0U)))
      Separator_21 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    else
    {
      MR_Word Var_27;
      MR_Word Var_28;

      Var_27 = program_representation_utils__indent_1_f_0(HeadVar__2_2);
      Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ",\n")));
      Separator_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, Var_28);
    }
    Var_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Separator_21, TailGoalsString_20);
    *HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadGoalString_19, Var_30);
  }
}

static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_196;

    conv2_HeadVar__3_196 = program_representation_utils__IntroducedFrom__func__print_goal_to_strings__575__1_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_196));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_160;

    conv1_LambdaHeadVar__2_160 = program_representation_utils__IntroducedFrom__func__print_goal_to_strings__573__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_160));
    return wrapper_arg_2;
  }
}

void MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0(
  MR_Word TypeInfo_for_T_178,
  MR_Word TypeClassInfo_for_goal_annotation_177,
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word RevGoalPath_8,
  MR_Word GoalRep_9,
  MR_Word * Strings_10)
{
  {
    MR_bool succeeded;
    MR_Word GoalExprRep_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalRep_9, (MR_Integer) 0))));
    MR_Word DetismRep_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GoalRep_9, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Box AnnotationKey_13 = (MR_hl_field(MR_mktag(0), GoalRep_9, (MR_Integer) 2));
    MR_Word VarTable_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Word ExprString_16;
    MR_Word LinePrefix_46;
    MR_Word ExtraLineForConjunctions_47;
    MR_Word DetismString_48;
    MR_Word DetismLine_49;
    MR_Word LookupAnnotation_50;
    MR_Box GoalAnnotation_51;
    MR_Word GoalAnnotationLines0_52;
    MR_Word GoalAnnotationLines_53;
    MR_String GoalPathString0_56;
    MR_String GoalPathString_57;
    MR_Word GoalPathLine_58;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);

    switch (MR_tag((MR_Word) GoalExprRep_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ConjGoalReps_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalExprRep_11, (MR_Integer) 0))));

          program_representation_utils__print_conj_to_strings_5_p_0(TypeInfo_for_T_178, TypeClassInfo_for_goal_annotation_177, Info_6, Indent_7, RevGoalPath_8, ConjGoalReps_15, &ExprString_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DisjGoalReps_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExprRep_11, (MR_Integer) 0))));
          MR_Word DisjString_18;
          MR_Word Var_141;
          MR_Word Var_142;
          MR_Word Var_143;
          MR_Word Var_145;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_148;

          program_representation_utils__print_disj_to_strings_7_p_0(TypeInfo_for_T_178, TypeClassInfo_for_goal_annotation_177, Info_6, Indent_7, RevGoalPath_8, (MR_Integer) 1, DisjGoalReps_17, (MR_Integer) 0, &DisjString_18);
          Var_141 = program_representation_utils__indent_1_f_0(Indent_7);
          Var_143 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(\n")));
          Var_147 = program_representation_utils__indent_1_f_0(Indent_7);
          Var_148 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")\n")));
          Var_146 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_147, Var_148);
          Var_145 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DisjString_18, Var_146);
          Var_142 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_143, Var_145);
          ExprString_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_141, Var_142);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer SwitchVarRep_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExprRep_11, (MR_Integer) 0))));
          MR_Word CanFail_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExprRep_11, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word CasesRep_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExprRep_11, (MR_Integer) 2))));
          MR_String SwitchVarName_22;
          MR_String SwitchOnString_23;
          MR_Word SwitchString_24;
          MR_String Var_118;
          MR_Integer Var_122;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_131;
          MR_Word Var_132;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_137;
          MR_String Var_199;
          MR_String Var_201;

          mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_14, SwitchVarRep_19, &SwitchVarName_22);
          Var_118 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0), ((MR_Box) (CanFail_20)));
          Var_199 = mercury__string__f_43_43_2_f_0(SwitchVarName_22, (MR_String) "\n");
          Var_201 = mercury__string__f_43_43_2_f_0((MR_String) " switch on ", Var_199);
          SwitchOnString_23 = mercury__string__f_43_43_2_f_0(Var_118, Var_201);
          Var_122 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
          program_representation_utils__print_switch_to_strings_7_p_0(TypeInfo_for_T_178, TypeClassInfo_for_goal_annotation_177, Info_6, Var_122, RevGoalPath_8, (MR_Integer) 1, CasesRep_21, (MR_Integer) 0, &SwitchString_24);
          Var_126 = program_representation_utils__indent_1_f_0(Indent_7);
          Var_128 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SwitchOnString_23)));
          Var_130 = program_representation_utils__indent_1_f_0(Indent_7);
          Var_132 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(\n")));
          Var_136 = program_representation_utils__indent_1_f_0(Indent_7);
          Var_137 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")\n")));
          Var_135 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_136, Var_137);
          Var_134 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SwitchString_24, Var_135);
          Var_131 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_132, Var_134);
          Var_129 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_130, Var_131);
          Var_127 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_128, Var_129);
          ExprString_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_126, Var_127);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExprRep_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CondRep_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprRep_11, (MR_Integer) 1))));
              MR_Word ThenRep_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprRep_11, (MR_Integer) 2))));
              MR_Word ElseRep_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprRep_11, (MR_Integer) 3))));
              MR_Word RevGoalPathCond_28;
              MR_Word RevGoalPathThen_29;
              MR_Word RevGoalPathElse_30;
              MR_Word CondString_31;
              MR_Word ThenString_32;
              MR_Word ElseString_33;
              MR_Word IndentString_34;
              MR_Integer Var_92;
              MR_Integer Var_94;
              MR_Integer Var_96;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word Var_113;

              {
                RevGoalPathCond_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevGoalPathCond_28, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), RevGoalPathCond_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                RevGoalPathThen_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevGoalPathThen_29, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), RevGoalPathThen_29, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              }
              {
                RevGoalPathElse_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevGoalPathElse_30, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), RevGoalPathElse_30, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              }
              Var_92 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
              program_representation_utils__print_goal_to_strings_5_p_0(TypeInfo_for_T_178, TypeClassInfo_for_goal_annotation_177, Info_6, Var_92, RevGoalPathCond_28, CondRep_25, &CondString_31);
              Var_94 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
              program_representation_utils__print_goal_to_strings_5_p_0(TypeInfo_for_T_178, TypeClassInfo_for_goal_annotation_177, Info_6, Var_94, RevGoalPathThen_29, ThenRep_26, &ThenString_32);
              Var_96 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
              program_representation_utils__print_goal_to_strings_5_p_0(TypeInfo_for_T_178, TypeClassInfo_for_goal_annotation_177, Info_6, Var_96, RevGoalPathElse_30, ElseRep_27, &ElseString_33);
              IndentString_34 = program_representation_utils__indent_1_f_0(Indent_7);
              Var_99 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(\n")));
              Var_104 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "->\n")));
              Var_109 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ";\n")));
              Var_113 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")\n")));
              Var_112 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IndentString_34, Var_113);
              Var_111 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ElseString_33, Var_112);
              Var_108 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_109, Var_111);
              Var_107 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IndentString_34, Var_108);
              Var_106 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ThenString_32, Var_107);
              Var_103 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_104, Var_106);
              Var_102 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IndentString_34, Var_103);
              Var_101 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CondString_31, Var_102);
              Var_98 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_99, Var_101);
              ExprString_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IndentString_34, Var_98);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubGoalRep_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprRep_11, (MR_Integer) 1))));
              MR_Word RevSubGoalPath_36;
              MR_Word SubGoalString_37;
              MR_Integer Var_78;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_87;

              {
                RevSubGoalPath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevSubGoalPath_36, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), RevSubGoalPath_36, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              Var_78 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
              program_representation_utils__print_goal_to_strings_5_p_0(TypeInfo_for_T_178, TypeClassInfo_for_goal_annotation_177, Info_6, Var_78, RevSubGoalPath_36, SubGoalRep_35, &SubGoalString_37);
              Var_80 = program_representation_utils__indent_1_f_0(Indent_7);
              Var_82 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "not (\n")));
              Var_86 = program_representation_utils__indent_1_f_0(Indent_7);
              Var_87 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")\n")));
              Var_85 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_86, Var_87);
              Var_84 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubGoalString_37, Var_85);
              Var_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_82, Var_84);
              ExprString_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_80, Var_81);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MaybeCut_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExprRep_11, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word CutString_39;
              MR_Word Var_61;
              MR_Integer Var_62;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word SubGoalRep_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprRep_11, (MR_Integer) 1))));
              MR_Word RevSubGoalPath_172;
              MR_Word SubGoalString_173;

              switch (MaybeCut_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  CutString_39 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " cut")));
                  break;
                case (MR_Integer) 1:
                  CutString_39 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                  break;
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_61, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_38));
              }
              {
                RevSubGoalPath_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevSubGoalPath_172, 0) = ((MR_Box) (RevGoalPath_8));
                MR_hl_field(MR_mktag(1), RevSubGoalPath_172, 1) = ((MR_Box) (Var_61));
              }
              Var_62 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
              program_representation_utils__print_goal_to_strings_5_p_0(TypeInfo_for_T_178, TypeClassInfo_for_goal_annotation_177, Info_6, Var_62, RevSubGoalPath_172, SubGoalRep_171, &SubGoalString_173);
              Var_64 = program_representation_utils__indent_1_f_0(Indent_7);
              Var_66 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "scope")));
              Var_70 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " (\n")));
              Var_74 = program_representation_utils__indent_1_f_0(Indent_7);
              Var_75 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")\n")));
              Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_74, Var_75);
              Var_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubGoalString_173, Var_73);
              Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_70, Var_72);
              Var_68 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CutString_39, Var_69);
              Var_65 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_66, Var_68);
              ExprString_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_64, Var_65);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word AtomicGoalRep_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprRep_11, (MR_Integer) 4))));
              MR_Word ExprString0_44;
              MR_Word Var_59;

              program_representation_utils__print_atomic_goal_to_strings_3_p_0(VarTable_14, AtomicGoalRep_43, &ExprString0_44);
              Var_59 = program_representation_utils__indent_1_f_0(Indent_7);
              ExprString_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_59, ExprString0_44);
            }
            break;
        }
        break;
    }
    succeeded = ((MR_tag((MR_Word) GoalExprRep_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_150;
      MR_Word Var_151;

      Var_150 = program_representation_utils__indent_1_f_0(Indent_7);
      Var_151 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "% conjunction: ")));
      LinePrefix_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_150, Var_151);
      ExtraLineForConjunctions_47 = program_representation_utils__nl_0_f_0();
    }
    else
    {
      MR_Word Var_153;
      MR_Word Var_154;

      Var_153 = program_representation_utils__indent_1_f_0(Indent_7);
      Var_154 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "% ")));
      LinePrefix_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_153, Var_154);
      ExtraLineForConjunctions_47 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    }
    program_representation_utils__detism_to_string_2_p_0(DetismRep_12, &DetismString_48);
    Var_157 = program_representation_utils__nl_0_f_0();
    Var_156 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetismString_48, Var_157);
    DetismLine_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinePrefix_46, Var_156);
    LookupAnnotation_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0))));
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), LookupAnnotation_50, (MR_Integer) 1))));
    GoalAnnotation_51 = func_0(((MR_Box) (LookupAnnotation_50)), AnnotationKey_13);
    program_representation_utils__print_goal_annotation_to_strings_3_p_0(TypeClassInfo_for_goal_annotation_177, VarTable_14, GoalAnnotation_51, &GoalAnnotationLines0_52);
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&program_representation_utils_scalar_common_1[0]), GoalAnnotationLines0_52);
    if (succeeded)
      GoalAnnotationLines_53 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    else
    {
      MR_Word GoalAnnotationLines1_54;
      MR_Word Var_158;
      MR_Word Var_164;
      MR_Box conv3_GoalAnnotationLines_53;

      {
        Var_158 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (&program_representation_utils_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (program_representation_utils__print_goal_to_strings_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_158, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_158, 3) = ((MR_Box) (LinePrefix_46));
      }
      GoalAnnotationLines1_54 = mercury__cord__map_2_f_0((MR_Word) (&program_representation_utils_scalar_common_1[0]), (MR_Word) (&program_representation_utils_scalar_common_1[0]), Var_158, GoalAnnotationLines0_52);
      Var_164 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      conv3_GoalAnnotationLines_53 = mercury__cord__foldr_3_f_0((MR_Word) (&program_representation_utils_scalar_common_1[0]), (MR_Word) (&program_representation_utils_scalar_common_1[0]), (MR_Word) (&program_representation_utils_scalar_common_2[6]), GoalAnnotationLines1_54, ((MR_Box) (Var_164)));
      GoalAnnotationLines_53 = ((MR_Word) (conv3_GoalAnnotationLines_53));
    }
    GoalPathString0_56 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_8);
    succeeded = (strcmp(GoalPathString0_56, (MR_String) "") == 0);
    if (succeeded)
      GoalPathString_57 = (MR_String) "root goal";
    else
      GoalPathString_57 = GoalPathString0_56;
    Var_166 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (GoalPathString_57)));
    Var_167 = program_representation_utils__nl_0_f_0();
    Var_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_166, Var_167);
    GoalPathLine_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinePrefix_46, Var_165);
    Var_170 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraLineForConjunctions_47, ExprString_16);
    Var_169 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), GoalAnnotationLines_53, Var_170);
    Var_168 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetismLine_49, Var_169);
    *Strings_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), GoalPathLine_58, Var_168);
  }
}

void MR_CALL 
program_representation_utils__print_goal_annotation_to_strings_3_p_0(
  MR_Word TypeClassInfo_for_goal_annotation_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_goal_annotation_4, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__3_3;

    func_0(((MR_Box) (TypeClassInfo_for_goal_annotation_4)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, &conv1_HeadVar__3_3);
    *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
program_representation_utils__detism_to_string_2_p_0(
  MR_Word Detism_3,
  MR_Word * DetismStrCord_4)
{
  {
    MR_String DetismStr_5 = ((&program_representation_utils_vector_common_6[0 + Detism_3]))->program_representation_utils__vector_common_type_6_0__vct_6_f_0;

    *DetismStrCord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (DetismStr_5)));
  }
}

static void MR_CALL 
program_representation_utils__print_atomic_goal_to_strings_3_p_0(
  MR_Word VarTable_4,
  MR_Word AtomicGoalRep_5,
  MR_Word * Strings_6)
{
  {
    MR_Word Strings0_14;
    MR_Word Var_112;

    switch (MR_tag((MR_Word) AtomicGoalRep_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer VarRep_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AtomicGoalRep_5, (MR_Integer) 0))));
          MR_String ConsIdRep_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), AtomicGoalRep_5, (MR_Integer) 1))));
          MR_Word ArgReps_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalRep_5, (MR_Integer) 2))));
          MR_String VarName_11;
          MR_String UnifyString_12;
          MR_Word ArgsString_13;
          MR_String Var_240;
          MR_String Var_241;
          MR_String Var_243;

          mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, VarRep_7, &VarName_11);
          Var_240 = mercury__string__f_43_43_2_f_0((MR_String) " ", ConsIdRep_8);
          Var_241 = mercury__string__f_43_43_2_f_0((MR_String) "<=", Var_240);
          Var_243 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_241);
          UnifyString_12 = mercury__string__f_43_43_2_f_0(VarName_11, Var_243);
          program_representation_utils__print_args_to_strings__ho2_4_p_0(VarTable_4, ArgReps_9, &ArgsString_13);
          Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (UnifyString_12)), ArgsString_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer VarRep_214 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), AtomicGoalRep_5, (MR_Integer) 0))));
          MR_String ConsIdRep_215 = ((MR_String) ((MR_hl_field(MR_mktag(1), AtomicGoalRep_5, (MR_Integer) 1))));
          MR_Word ArgReps_216 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AtomicGoalRep_5, (MR_Integer) 2))));
          MR_String VarName_218;
          MR_String UnifyString_219;
          MR_Word ArgsString_220;
          MR_String Var_235;
          MR_String Var_236;
          MR_String Var_238;

          mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, VarRep_214, &VarName_218);
          Var_235 = mercury__string__f_43_43_2_f_0((MR_String) " ", ConsIdRep_215);
          Var_236 = mercury__string__f_43_43_2_f_0((MR_String) "=>", Var_235);
          Var_238 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_236);
          UnifyString_219 = mercury__string__f_43_43_2_f_0(VarName_218, Var_238);
          program_representation_utils__print_args_to_strings__ho2_4_p_0(VarTable_4, ArgReps_216, &ArgsString_220);
          Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (UnifyString_219)), ArgsString_220);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeArgReps_193 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicGoalRep_5, (MR_Integer) 2))));
          MR_Integer VarRep_203 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), AtomicGoalRep_5, (MR_Integer) 0))));
          MR_String ConsIdRep_204 = ((MR_String) ((MR_hl_field(MR_mktag(2), AtomicGoalRep_5, (MR_Integer) 1))));
          MR_String VarName_206;
          MR_String UnifyString_207;
          MR_Word ArgsString_208;
          MR_String Var_249;
          MR_String Var_250;
          MR_String Var_252;

          mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, VarRep_203, &VarName_206);
          Var_249 = mercury__string__f_43_43_2_f_0((MR_String) " ", ConsIdRep_204);
          Var_250 = mercury__string__f_43_43_2_f_0((MR_String) "=>", Var_249);
          Var_252 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_250);
          UnifyString_207 = mercury__string__f_43_43_2_f_0(VarName_206, Var_252);
          program_representation_utils__print_args_to_strings__ho3_4_p_0(VarTable_4, MaybeArgReps_193, &ArgsString_208);
          Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (UnifyString_207)), ArgsString_208);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MaybeArgReps_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 3))));
              MR_Integer VarRep_113 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_String ConsIdRep_114 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 2))));
              MR_String VarName_116;
              MR_String UnifyString_117;
              MR_Word ArgsString_118;
              MR_String Var_254;
              MR_String Var_255;
              MR_String Var_257;

              mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, VarRep_113, &VarName_116);
              Var_254 = mercury__string__f_43_43_2_f_0((MR_String) " ", ConsIdRep_114);
              Var_255 = mercury__string__f_43_43_2_f_0((MR_String) "<=", Var_254);
              Var_257 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_255);
              UnifyString_117 = mercury__string__f_43_43_2_f_0(VarName_116, Var_257);
              program_representation_utils__print_args_to_strings__ho3_4_p_0(VarTable_4, MaybeArgReps_15, &ArgsString_118);
              Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (UnifyString_117)), ArgsString_118);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer TargetRep_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_Integer SourceRep_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 2))));
              MR_String TargetName_18;
              MR_String SourceName_19;
              MR_String String_20;
              MR_String Var_245;

              mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, TargetRep_16, &TargetName_18);
              mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, SourceRep_17, &SourceName_19);
              Var_245 = mercury__string__f_43_43_2_f_0((MR_String) " := ", SourceName_19);
              String_20 = mercury__string__f_43_43_2_f_0(TargetName_18, Var_245);
              Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (String_20)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer TargetRep_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_Integer SourceRep_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 2))));
              MR_String TargetName_121;
              MR_String SourceName_122;
              MR_String String_123;
              MR_String Var_274;
              MR_String Var_275;

              mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, TargetRep_119, &TargetName_121);
              mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, SourceRep_120, &SourceName_122);
              Var_274 = mercury__string__f_43_43_2_f_0((MR_String) " to ", TargetName_121);
              Var_275 = mercury__string__f_43_43_2_f_0(SourceName_122, Var_274);
              String_123 = mercury__string__f_43_43_2_f_0((MR_String) "cast ", Var_275);
              Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (String_123)));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer TargetRep_124 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_Integer SourceRep_125 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 2))));
              MR_String TargetName_126;
              MR_String SourceName_127;
              MR_String String_128;
              MR_String Var_233;

              mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, TargetRep_124, &TargetName_126);
              mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, SourceRep_125, &SourceName_127);
              Var_233 = mercury__string__f_43_43_2_f_0((MR_String) " == ", TargetName_126);
              String_128 = mercury__string__f_43_43_2_f_0(SourceName_127, Var_233);
              Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (String_128)));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_Word Var_71;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word ArgsString_129;

              program_representation_utils__print_args_to_strings__ho2_4_p_0(VarTable_4, Args_21, &ArgsString_129);
              Var_71 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "foreign_proc(")));
              Var_74 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
              Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsString_129, Var_74);
              Strings0_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_71, Var_73);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer HOVarRep_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_String HOVarName_23;
              MR_String HeadString_24;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word ArgsString_130;
              MR_Word Args_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 2))));

              mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, HOVarRep_22, &HOVarName_23);
              HeadString_24 = mercury__string__f_43_43_2_f_0(HOVarName_23, (MR_String) "(");
              program_representation_utils__print_args_to_strings__ho2_4_p_0(VarTable_4, Args_131, &ArgsString_130);
              Var_66 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadString_24)));
              Var_68 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
              Var_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsString_130, Var_68);
              Strings0_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_66, Var_67);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer TCIVarRep_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_Integer MethodNumber_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 2))));
              MR_String TCIVarName_27;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word ArgsString_132;
              MR_Word Args_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 3))));
              MR_String HeadString_134;
              MR_String Var_259;
              MR_String Var_261;
              MR_String Var_262;
              MR_String Var_269;

              mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_4, TCIVarRep_25, &TCIVarName_27);
              Var_259 = mercury__string__f_43_43_2_f_0(TCIVarName_27, (MR_String) "(");
              Var_261 = mercury__string__f_43_43_2_f_0((MR_String) " of ", Var_259);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&program_representation_utils_scalar_common_3[0]), MethodNumber_26, &Var_262);
              Var_269 = mercury__string__f_43_43_2_f_0(Var_262, Var_261);
              HeadString_134 = mercury__string__f_43_43_2_f_0((MR_String) "method ", Var_269);
              program_representation_utils__print_args_to_strings__ho2_4_p_0(VarTable_4, Args_133, &ArgsString_132);
              Var_57 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadString_134)));
              Var_59 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
              Var_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsString_132, Var_59);
              Strings0_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_57, Var_58);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String Module_28 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_String Pred_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 2))));
              MR_Word ArgsString_135;
              MR_Word Args_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 3))));
              MR_String HeadString_137;
              MR_String Var_247;

              Var_247 = mercury__string__f_43_43_2_f_0((MR_String) ".", Pred_29);
              HeadString_137 = mercury__string__f_43_43_2_f_0(Module_28, Var_247);
              program_representation_utils__print_args_to_strings__ho2_4_p_0(VarTable_4, Args_136, &ArgsString_135);
              Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadString_137)), ArgsString_135);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ArgsString_138;
              MR_Word Args_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 3))));
              MR_String HeadString_140;
              MR_String Module_141 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_String Pred_142 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 2))));
              MR_String Var_278;
              MR_String Var_279;

              Var_278 = mercury__string__f_43_43_2_f_0((MR_String) ".", Pred_142);
              Var_279 = mercury__string__f_43_43_2_f_0(Module_141, Var_278);
              HeadString_140 = mercury__string__f_43_43_2_f_0((MR_String) "builtin ", Var_279);
              program_representation_utils__print_args_to_strings__ho2_4_p_0(VarTable_4, Args_139, &ArgsString_138);
              Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadString_140)), ArgsString_138);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String Event_30 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 1))));
              MR_Word ArgsString_143;
              MR_Word Args_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_5, (MR_Integer) 2))));
              MR_String HeadString_145;

              HeadString_145 = mercury__string__f_43_43_2_f_0((MR_String) "event ", Event_30);
              program_representation_utils__print_args_to_strings__ho2_4_p_0(VarTable_4, Args_144, &ArgsString_143);
              Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadString_145)), ArgsString_143);
            }
            break;
        }
        break;
    }
    Var_112 = program_representation_utils__nl_0_f_0();
    *Strings_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Strings0_14, Var_112);
  }
}

static void MR_CALL 
program_representation_utils__print_args_to_strings__ho3_4_p_0(
  MR_Word VarTable_6,
  MR_Word Args_7,
  MR_Word * Strings_8)
{
  if ((Args_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *Strings_8 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word ArgsStr_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Arg_25;
    MR_Word Args_26;
    MR_String ArgName_29;
    MR_Word ArgsString_30;
    MR_Word Var_31;
    MR_Word Var_33;

    Var_12 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    Arg_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 0))));
    Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 1))));
    if ((Arg_25 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgName_29 = (MR_String) "_";
    else
    {
      MR_Integer VarRep_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Arg_25, (MR_Integer) 0))));

      mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_6, VarRep_39, &ArgName_29);
    }
    Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    program_representation_utils__print_args_2_to_strings__ho7_5_p_0(VarTable_6, Args_26, Var_31, &ArgsString_30);
    Var_33 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_29)), ArgsString_30);
    ArgsStr_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_12, Var_33);
    Var_14 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsStr_11, ((MR_Box) ((MR_String) ")")));
    *Strings_8 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(")), Var_14);
  }
}

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho7_5_p_0(
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word Prefix_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word Arg_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgName_15;
    MR_Word ArgsString_16;
    MR_Word Var_17;
    MR_Word Var_19;

    if ((Arg_11 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgName_15 = (MR_String) "_";
    else
    {
      MR_Integer VarRep_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Arg_11, (MR_Integer) 0))));

      mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_2, VarRep_25, &ArgName_15);
    }
    Var_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    program_representation_utils__print_args_2_to_strings__ho7_5_p_0(VarTable_2, Args_12, Var_17, &ArgsString_16);
    Var_19 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_15)), ArgsString_16);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Prefix_4, Var_19);
  }
}

static void MR_CALL 
program_representation_utils__print_args_to_strings__ho2_4_p_0(
  MR_Word VarTable_6,
  MR_Word Args_7,
  MR_Word * Strings_8)
{
  if ((Args_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *Strings_8 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word ArgsStr_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Integer Arg_25;
    MR_Word Args_26;
    MR_String ArgName_29;
    MR_Word ArgsString_30;
    MR_Word Var_31;
    MR_Word Var_33;

    Var_12 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    Arg_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 0))));
    Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 1))));
    mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_6, Arg_25, &ArgName_29);
    Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    program_representation_utils__print_args_2_to_strings__ho8_5_p_0(VarTable_6, Args_26, Var_31, &ArgsString_30);
    Var_33 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_29)), ArgsString_30);
    ArgsStr_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_12, Var_33);
    Var_14 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsStr_11, ((MR_Box) ((MR_String) ")")));
    *Strings_8 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(")), Var_14);
  }
}

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho8_5_p_0(
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word Prefix_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Integer Arg_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgName_15;
    MR_Word ArgsString_16;
    MR_Word Var_17;
    MR_Word Var_19;

    mdbcomp__program_representation__lookup_var_name_3_p_0(VarTable_2, Arg_11, &ArgName_15);
    Var_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    program_representation_utils__print_args_2_to_strings__ho8_5_p_0(VarTable_2, Args_12, Var_17, &ArgsString_16);
    Var_19 = mercury__cord__cons_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_15)), ArgsString_16);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Prefix_4, Var_19);
  }
}

static MR_Word MR_CALL 
program_representation_utils__nl_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    return HeadVar__1_1;
  }
}

static void MR_CALL 
program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(
  MR_Integer Indent_4,
  MR_Word ConsIdArityRep_5,
  MR_Word * Strings_6)
{
  {
    MR_String ConsIdRep_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), ConsIdArityRep_5, (MR_Integer) 0))));
    MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConsIdArityRep_5, (MR_Integer) 1))));
    MR_String String_9;
    MR_Word Var_16;
    MR_String Var_19;
    MR_String Var_26;
    MR_String Var_28;
    MR_String Var_29;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&program_representation_utils_scalar_common_3[0]), Arity_8, &Var_19);
    Var_26 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) "\n");
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_26);
    Var_29 = mercury__string__f_43_43_2_f_0(ConsIdRep_7, Var_28);
    String_9 = mercury__string__f_43_43_2_f_0((MR_String) "% case ", Var_29);
    Var_16 = program_representation_utils__indent_1_f_0(Indent_4);
    *Strings_6 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16, ((MR_Box) (String_9)));
  }
}

static MR_Word MR_CALL 
program_representation_utils__indent_1_f_0(
  MR_Integer N_3)
{
  {
    MR_bool succeeded = (N_3 <= (MR_Integer) 0);
    MR_Word HeadVar__2_2;

    if (succeeded)
      HeadVar__2_2 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    else
    {
      MR_Word Var_5;
      MR_Word Var_7;
      MR_Integer Var_8;

      Var_5 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "  ")));
      Var_8 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 1);
      Var_7 = program_representation_utils__indent_1_f_0(Var_8);
      HeadVar__2_2 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_5, Var_7);
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
program_representation_utils__print_proc_label_to_string_2_p_0(
  MR_Word ProcLabel_3,
  MR_String * String_4)
{
  if (((MR_tag((MR_Word) ProcLabel_3)) == (MR_Integer) 0))
  {
    MR_Word PredFunc_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String DeclModule_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 1))));
    MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 3))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 4))));
    MR_Integer Mode_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 5))));
    MR_String PF_11;
    MR_String Var_68;
    MR_String Var_76;
    MR_String Var_77;
    MR_String Var_84;
    MR_String Var_86;
    MR_String Var_87;
    MR_String Var_89;
    MR_String Var_90;
    MR_String Var_92;

    switch (PredFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PF_11 = (MR_String) "func";
        break;
      case (MR_Integer) 0:
        PF_11 = (MR_String) "pred";
        break;
    }
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&program_representation_utils_scalar_common_3[0]), Mode_10, &Var_68);
    Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_68);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&program_representation_utils_scalar_common_3[0]), Arity_9, &Var_77);
    Var_84 = mercury__string__f_43_43_2_f_0(Var_77, Var_76);
    Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_84);
    Var_87 = mercury__string__f_43_43_2_f_0(Name_8, Var_86);
    Var_89 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_87);
    Var_90 = mercury__string__f_43_43_2_f_0(DeclModule_6, Var_89);
    Var_92 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_90);
    *String_4 = mercury__string__f_43_43_2_f_0(PF_11, Var_92);
  }
  else
  {
    MR_String TypeName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 0))));
    MR_String TypeModule_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 1))));
    MR_String Name_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 3))));
    MR_Integer Arity_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 4))));
    MR_Integer Mode_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 5))));
    MR_String Var_43;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_59;
    MR_String Var_61;
    MR_String Var_62;
    MR_String Var_64;
    MR_String Var_65;
    MR_String Var_67;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&program_representation_utils_scalar_common_3[0]), Mode_42, &Var_43);
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_43);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&program_representation_utils_scalar_common_3[0]), Arity_41, &Var_52);
    Var_59 = mercury__string__f_43_43_2_f_0(Var_52, Var_51);
    Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_59);
    Var_62 = mercury__string__f_43_43_2_f_0(TypeName_12, Var_61);
    Var_64 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_62);
    Var_65 = mercury__string__f_43_43_2_f_0(TypeModule_13, Var_64);
    Var_67 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_65);
    *String_4 = mercury__string__f_43_43_2_f_0(Name_40, Var_67);
  }
}

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_47;

    program_representation_utils__IntroducedFrom__pred__print_module_to_strings__232__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_47);
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_47));
  }
}

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Strings_12;

    program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Strings_12);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Strings_12));
  }
}

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Strings_8;

    program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Strings_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Strings_8));
  }
}

void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0(
  MR_Word ModuleRep_3,
  MR_Word * Strings_4)
{
  {
    MR_bool succeeded;
    MR_String ModuleName_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleRep_3, (MR_Integer) 0))));
    MR_Word OISUTypesProcs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleRep_3, (MR_Integer) 2))));
    MR_Word TypeTableMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleRep_3, (MR_Integer) 3))));
    MR_Word ProcReps_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleRep_3, (MR_Integer) 4))));
    MR_String HeaderString_10;
    MR_Word OISUStrs_11;
    MR_Word TypeTableStrs0_12;
    MR_Word TypeTableStrs_13;
    MR_Word ProcRepStrs_14;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_String Var_52;
    MR_Box conv1_OISUStrs_11;
    MR_Box conv3_TypeTableStrs0_12;
    MR_Box conv5_ProcRepStrs_14;

    Var_52 = mercury__string__f_43_43_2_f_0(ModuleName_5, (MR_String) "\n");
    HeaderString_10 = mercury__string__f_43_43_2_f_0((MR_String) "Module ", Var_52);
    Var_20 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_oisu_type_procs_0), (MR_Word) (&program_representation_utils_scalar_common_1[0]), (MR_Word) (&program_representation_utils_scalar_common_2[3]), OISUTypesProcs_7, ((MR_Box) (Var_20)), &conv1_OISUStrs_11);
    OISUStrs_11 = ((MR_Word) (conv1_OISUStrs_11));
    Var_22 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0), (MR_Word) (&program_representation_utils_scalar_common_1[0]), (MR_Word) (&program_representation_utils_scalar_common_2[4]), TypeTableMap_8, ((MR_Box) (Var_22)), &conv3_TypeTableStrs0_12);
    TypeTableStrs0_12 = ((MR_Word) (conv3_TypeTableStrs0_12));
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeTableStrs0_12);
    if (succeeded)
      TypeTableStrs_13 = TypeTableStrs0_12;
    else
    {
      MR_Word Var_23;
      MR_Word Var_25;
      MR_Word Var_26;

      Var_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\nType table:\n")));
      Var_26 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
      Var_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeTableStrs0_12, Var_26);
      TypeTableStrs_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_25);
    }
    Var_28 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&program_representation_utils_scalar_common_1[2]), (MR_Word) (&program_representation_utils_scalar_common_1[0]), (MR_Word) (&program_representation_utils_scalar_common_2[5]), ProcReps_9, ((MR_Box) (Var_28)), &conv5_ProcRepStrs_14);
    ProcRepStrs_14 = ((MR_Word) (conv5_ProcRepStrs_14));
    Var_29 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeaderString_10)));
    Var_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeTableStrs_13, ProcRepStrs_14);
    Var_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OISUStrs_11, Var_31);
    *Strings_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, Var_30);
  }
}

static MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = program_representation_utils____Unify____atomic_goal_is_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    program_representation_utils____Compare____atomic_goal_is_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = program_representation_utils____Unify____inst_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____inst_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    program_representation_utils____Compare____inst_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = program_representation_utils____Unify____inst_map_delta_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    program_representation_utils____Compare____inst_map_delta_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = program_representation_utils____Unify____print_goal_info_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    program_representation_utils____Compare____print_goal_info_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = program_representation_utils____Unify____seen_duplicate_instantiation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    program_representation_utils____Compare____seen_duplicate_instantiation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void mercury__program_representation_utils__init(void)
{
}

void mercury__program_representation_utils__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_atomic_goal_is_call_0);
	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0);
	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_delta_0);
	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_print_goal_info_2);
	MR_register_type_ctor_info(&program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0);
}

void mercury__program_representation_utils__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__program_representation_utils__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module program_representation_utils.
