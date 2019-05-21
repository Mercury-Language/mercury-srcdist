/*
** Automatically generated from `program_representation_utils.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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


/* :- module program_representation_utils. */
/* :- implementation. */

/*
INIT mercury__program_representation_utils__init
ENDINIT
*/

#include "program_representation_utils.mih"


#include "mdbcomp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
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
#include "cord.mih"
#include "counter.mih"
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
#include "require.mih"
#include "rtti_implementation.mih"
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

static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_value_ordered_seen_duplicate_instantiation_0[2];

static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0[2];

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0[2];

static const MR_ConstString program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1[1];

static const MR_TypeClassMethod program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1[1];

static const MR_TypeClassId program_representation_utils__program_representation_utils__type_class_id_goal_annotation_1;

static MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2);

static void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0_10001(
  MR_Box * program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3);

static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2);

static void MR_CALL 
program_representation_utils____Compare____inst_map_0_0_10001(
  MR_Box * program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3);

static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2);

static void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0_10001(
  MR_Box * program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3);

static MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box program_representation_utils__wrapper_arg_4);

static void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3,
  MR_Box program_representation_utils__wrapper_arg_4,
  MR_Box program_representation_utils__wrapper_arg_5);

static MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2);

static void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001(
  MR_Box * program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3);

static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3);

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__904__1_1_f_0(
  MR_Integer program_representation_utils__LambdaHeadVar__1_80);

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__899__1_1_f_0(
  MR_Integer program_representation_utils__LambdaHeadVar__1_87);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1239__2_3_p_0(
  MR_Word program_representation_utils__LambdaHeadVar__1_52,
  MR_Word program_representation_utils__LambdaHeadVar__2_53,
  MR_Word * program_representation_utils__LambdaHeadVar__3_54);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1239__1_3_p_0(
  MR_Word program_representation_utils__LambdaHeadVar__1_30,
  MR_Word program_representation_utils__LambdaHeadVar__2_31,
  MR_Word * program_representation_utils__LambdaHeadVar__3_32);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1163__1_5_p_0(
  MR_Word program_representation_utils__Before_4,
  MR_Integer program_representation_utils__LambdaHeadVar__1_15,
  MR_Word program_representation_utils__LambdaHeadVar__2_16,
  MR_Word program_representation_utils__LambdaHeadVar__3_17,
  MR_Word * program_representation_utils__LambdaHeadVar__4_18);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__merge_inst_map__1119__1_3_p_0(
  MR_Word program_representation_utils__HeadVar__1_24,
  MR_Word program_representation_utils__HeadVar__2_25,
  MR_Word * program_representation_utils__HeadVar__3_26);

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__551__1_2_f_0(
  MR_Word program_representation_utils__HeadVar__1_194,
  MR_Word program_representation_utils__HeadVar__2_195);

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__549__1_2_f_0(
  MR_Word program_representation_utils__LinePrefix_46,
  MR_Word program_representation_utils__LambdaHeadVar__1_159);

static MR_Box MR_CALL 
program_representation_utils__IntroducedFrom__func__print_proc_to_strings__394__1_2_f_0(
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_6,
  MR_Box program_representation_utils__HeadVar__2_7);

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__print_module_to_strings__232__1_4_p_0(
  MR_Word program_representation_utils__HeadVar__1_44,
  MR_Word program_representation_utils__HeadVar__2_45,
  MR_Word program_representation_utils__HeadVar__3_46,
  MR_Word * program_representation_utils__HeadVar__4_47);

static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word program_representation_utils__HeadVar__2_45,
  MR_Word program_representation_utils__HeadVar__3_46,
  MR_Word * program_representation_utils__HeadVar__4_47);

static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word * program_representation_utils__HeadVar__3_3);

static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_112_114_105_110_116_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_116_111_95_115_116_114_105_110_103_115_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word * program_representation_utils__HeadVar__3_3);

static void MR_CALL 
program_representation_utils__inst_intersect_3_p_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_Word * program_representation_utils__HeadVar__3_3);

static void MR_CALL 
program_representation_utils__inst_map_ground_var_6_p_0(
  MR_Word program_representation_utils__DepVars0_7,
  MR_Integer program_representation_utils__Var_8,
  MR_Word program_representation_utils__InstMap0_9,
  MR_Word * program_representation_utils__InstMap_10,
  MR_Word program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21,
  MR_Word * program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22);

static void MR_CALL 
program_representation_utils__add_head_var_inst_to_map_3_p_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__STATE_VARIABLE_InstMap_0_9,
  MR_Word * program_representation_utils__STATE_VARIABLE_InstMap_10);

static void MR_CALL 
program_representation_utils__label_case_9_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_37,
  MR_Word program_representation_utils__ParentGoalId_10,
  MR_Word program_representation_utils__STATE_VARIABLE_Case_0_20,
  MR_Word * program_representation_utils__STATE_VARIABLE_Case_21,
  MR_Integer program_representation_utils__STATE_VARIABLE_CaseNum_0_22,
  MR_Integer * program_representation_utils__STATE_VARIABLE_CaseNum_23,
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_24,
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_25,
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_26,
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_27);

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_case__955__1_1_f_0(
  MR_Integer program_representation_utils__LambdaHeadVar__1_32);

static void MR_CALL 
program_representation_utils__label_goal_wrapper_10_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_32,
  MR_Word program_representation_utils__MakePathStep_11,
  MR_Word program_representation_utils__ParentGoalId_12,
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24);

static MR_Word MR_CALL 
program_representation_utils__add_nl_1_f_0(
  MR_String program_representation_utils__Str_3);

static void MR_CALL 
program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(
  MR_Word program_representation_utils__VarNameTable_6,
  MR_Integer program_representation_utils__VarNum_7,
  MR_Word program_representation_utils__TypeRep_8,
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_15,
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_16);

static void MR_CALL 
program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(
  MR_Integer program_representation_utils__TypeNum_5,
  MR_Word program_representation_utils__TypeRep_6,
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_11,
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_12);

static void MR_CALL 
program_representation_utils__arg_type_reps_to_strings_3_p_0(
  MR_Word program_representation_utils__HeadTypeRep_1,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_Word * program_representation_utils__Cord_3);

static void MR_CALL 
program_representation_utils__type_rep_to_strings_2_p_0(
  MR_Word program_representation_utils__TypeRep_3,
  MR_Word * program_representation_utils__Cord_4);

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1);

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1);

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1);

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2);

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2);

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2);

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(
  MR_Word program_representation_utils__OISUTypeProcs_4,
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_7,
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_8);

static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3);

static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3);

static void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4);

static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3);

static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3);

static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3);

static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0(
  MR_Word program_representation_utils__VarToDepVars_5,
  MR_Integer program_representation_utils__VarRep_6,
  MR_Word program_representation_utils__STATE_VARIABLE_Set_0_9,
  MR_Word * program_representation_utils__STATE_VARIABLE_Set_10);

static void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3,
  MR_Box program_representation_utils__wrapper_arg_4,
  MR_Box * program_representation_utils__wrapper_arg_5);

static void MR_CALL 
program_representation_utils__initial_inst_map_1_f_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3);

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_5(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4,
  MR_Box program_representation_utils__wrapper_arg_5,
  MR_Box * program_representation_utils__wrapper_arg_6,
  MR_Box program_representation_utils__wrapper_arg_7,
  MR_Box * program_representation_utils__wrapper_arg_8);

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_4(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4,
  MR_Box program_representation_utils__wrapper_arg_5,
  MR_Box * program_representation_utils__wrapper_arg_6,
  MR_Box program_representation_utils__wrapper_arg_7,
  MR_Box * program_representation_utils__wrapper_arg_8);

static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_3(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1);

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4,
  MR_Box program_representation_utils__wrapper_arg_5,
  MR_Box * program_representation_utils__wrapper_arg_6,
  MR_Box program_representation_utils__wrapper_arg_7,
  MR_Box * program_representation_utils__wrapper_arg_8);

static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1);

static void MR_CALL 
program_representation_utils__label_goal_7_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_94,
  MR_Word program_representation_utils__ContainingGoal_8,
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_43,
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_44,
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_45,
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_46,
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_47,
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_48);

static void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4);

static MR_Box MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1);

static void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4);

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho6_5_p_0(
  MR_Word program_representation_utils__VarTable_2,
  MR_Word program_representation_utils__HeadVar__3_3,
  MR_Word program_representation_utils__Prefix_4,
  MR_Word * program_representation_utils__HeadVar__5_5);

static void MR_CALL 
program_representation_utils__print_head_var_3_p_0(
  MR_Word program_representation_utils__VarTable_4,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_String * program_representation_utils__String_7);

static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2);

static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_50,
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_49,
  MR_Word program_representation_utils__Info_1,
  MR_Integer program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__RevGoalPath_3,
  MR_Integer program_representation_utils__CaseNum_4,
  MR_Word program_representation_utils__HeadVar__5_5,
  MR_Word program_representation_utils__HeadVar__6_6,
  MR_Word * program_representation_utils__HeadVar__7_7);

static void MR_CALL 
program_representation_utils__print_disj_to_strings_7_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_36,
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_35,
  MR_Word program_representation_utils__Info_1,
  MR_Integer program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__RevGoalPath_3,
  MR_Integer program_representation_utils__DisjNum_4,
  MR_Word program_representation_utils__HeadVar__5_5,
  MR_Word program_representation_utils__HeadVar__6_6,
  MR_Word * program_representation_utils__HeadVar__7_7);

static void MR_CALL 
program_representation_utils__print_conj_to_strings_2_6_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_32,
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_31,
  MR_Word program_representation_utils__Info_1,
  MR_Integer program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__RevGoalPath_3,
  MR_Integer program_representation_utils__ConjNum_4,
  MR_Word program_representation_utils__HeadVar__5_5,
  MR_Word * program_representation_utils__HeadVar__6_6);

static void MR_CALL 
program_representation_utils__print_conj_to_strings_5_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_17,
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_16,
  MR_Word program_representation_utils__Info_6,
  MR_Integer program_representation_utils__Indent_7,
  MR_Word program_representation_utils__RevGoalPath_8,
  MR_Word program_representation_utils__GoalReps_9,
  MR_Word * program_representation_utils__Strings_10);

static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2);

static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1);

static void MR_CALL 
program_representation_utils__detism_to_string_2_p_0(
  MR_Word program_representation_utils__Detism_3,
  MR_Word * program_representation_utils__DetismStrCord_4);

static void MR_CALL 
program_representation_utils__print_atomic_goal_to_strings_3_p_0(
  MR_Word program_representation_utils__VarTable_4,
  MR_Word program_representation_utils__AtomicGoalRep_5,
  MR_Word * program_representation_utils__Strings_6);

static void MR_CALL 
program_representation_utils__print_args_to_strings__ho3_4_p_0(
  MR_Word program_representation_utils__VarTable_6,
  MR_Word program_representation_utils__Args_7,
  MR_Word * program_representation_utils__Strings_8);

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho7_5_p_0(
  MR_Word program_representation_utils__VarTable_2,
  MR_Word program_representation_utils__HeadVar__3_3,
  MR_Word program_representation_utils__Prefix_4,
  MR_Word * program_representation_utils__HeadVar__5_5);

static void MR_CALL 
program_representation_utils__print_args_to_strings__ho2_4_p_0(
  MR_Word program_representation_utils__VarTable_6,
  MR_Word program_representation_utils__Args_7,
  MR_Word * program_representation_utils__Strings_8);

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho8_5_p_0(
  MR_Word program_representation_utils__VarTable_2,
  MR_Word program_representation_utils__HeadVar__3_3,
  MR_Word program_representation_utils__Prefix_4,
  MR_Word * program_representation_utils__HeadVar__5_5);

static MR_Word MR_CALL 
program_representation_utils__nl_0_f_0(void);

static void MR_CALL 
program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(
  MR_Integer program_representation_utils__Indent_4,
  MR_Word program_representation_utils__ConsIdArityRep_5,
  MR_Word * program_representation_utils__Strings_6);

static MR_Word MR_CALL 
program_representation_utils__indent_1_f_0(
  MR_Integer program_representation_utils__N_3);

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_3(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4);

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4);

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3);


static /* final */ const MR_Box program_representation_utils_scalar_common_1[11][2];

static /* final */ const MR_Box program_representation_utils_scalar_common_2[21][3];

static /* final */ const MR_Box program_representation_utils_scalar_common_3[8][6];

static /* final */ const MR_Box program_representation_utils_scalar_common_4[3][7];

static /* final */ const MR_Box program_representation_utils_scalar_common_5[1][1];

static /* final */ const MR_Box program_representation_utils_scalar_common_7[2][8];

static /* final */ const MR_Integer program_representation_utils_scalar_common_8[2][2];

static /* final */ const MR_Box program_representation_utils_scalar_common_9[3][5];

static /* final */ const MR_Box program_representation_utils_scalar_common_10[1][14];

static /* final */ const MR_Box program_representation_utils_scalar_common_11[1][13];

static /* final */ const MR_Box program_representation_utils_scalar_common_12[1][9];


/* sealed */ struct program_representation_utils__vector_common_type_6_0_s {
  const MR_String program_representation_utils__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct program_representation_utils__vector_common_type_6_0_s program_representation_utils_vector_common_6[29];



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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_2[21][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[0])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[0])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_4[1])),
    ((MR_Box) (program_representation_utils__print_module_to_strings_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[1])),
    ((MR_Box) (program_representation_utils__print_goal_to_strings_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[0])),
    ((MR_Box) (program_representation_utils__label_goal_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[0])),
    ((MR_Box) (program_representation_utils__label_goal_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[4])),
    ((MR_Box) (program_representation_utils__initial_inst_map_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[5])),
    ((MR_Box) (program_representation_utils__merge_inst_map_4_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[6])),
    ((MR_Box) (program_representation_utils__merge_inst_map_4_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[7])),
    ((MR_Box) (program_representation_utils__atomic_goal_get_vars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_3[7])),
    ((MR_Box) (program_representation_utils__atomic_goal_get_vars_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[1])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[2])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[2])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&program_representation_utils_scalar_common_9[2])),
    ((MR_Box) (program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_3[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_oisu_type_procs_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_8[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_4[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box program_representation_utils_scalar_common_10[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&program_representation_utils_scalar_common_8[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0)),
    ((MR_Box) (&program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0))
  },
};


static /* final */ const struct program_representation_utils__vector_common_type_6_0_s program_representation_utils_vector_common_6[29] = {
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
  /* row 26 */   {     (MR_String) "float" },
  /* row 27 */   {     (MR_String) "string" },
  /* row 28 */   {     (MR_String) "char" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_proc_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__plain_builtin__type_ctor_info_int_0__plain_mdbcomp__goal_path__type_ctor_info_goal_path_step_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__pseudo_1 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__pseudo_1 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 program_representation_utils__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 program_representation_utils__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0[1] = {
  (MR_PseudoTypeInfo) &program_representation_utils__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0 = {
  (MR_String) "atomic_goal_is_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  program_representation_utils__program_representation_utils__field_types_atomic_goal_is_call_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1 = {
  (MR_String) "atomic_goal_is_trivial",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_1
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_atomic_goal_is_call_0_0
};

static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_atomic_goal_is_call_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_atomic_goal_is_call_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (program_representation_utils____Unify____atomic_goal_is_call_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____atomic_goal_is_call_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "atomic_goal_is_call",
  {     program_representation_utils__program_representation_utils__du_name_ordered_atomic_goal_is_call_0 },
  {     program_representation_utils__program_representation_utils__du_ptag_ordered_atomic_goal_is_call_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_atomic_goal_is_call_0
};

static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0
  }
};

static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_inst_map_0_0[2] = {
  (MR_PseudoTypeInfo) &program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0mdbcomp__program_representation__type_ctor_info_inst_rep_0,
  (MR_PseudoTypeInfo) &program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

static const MR_ConstString program_representation_utils__program_representation_utils__field_names_inst_map_0_0[2] = {
  (MR_String) "im_inst_map",
  (MR_String) "im_var_dep_map"
};

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0 = {
  (MR_String) "inst_map",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  program_representation_utils__program_representation_utils__field_types_inst_map_0_0,
  program_representation_utils__program_representation_utils__field_names_inst_map_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_inst_map_0_0
};

static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_inst_map_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (program_representation_utils____Unify____inst_map_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____inst_map_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "inst_map",
  {     program_representation_utils__program_representation_utils__du_name_ordered_inst_map_0 },
  {     program_representation_utils__program_representation_utils__du_ptag_ordered_inst_map_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_inst_map_0
};

static const MR_Integer program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0 = {
  (MR_String) "inst_map_delta",
  (MR_PseudoTypeInfo) &program_representation_utils__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct program_representation_utils__program_representation_utils__type_ctor_info_inst_map_delta_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (program_representation_utils____Unify____inst_map_delta_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____inst_map_delta_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "inst_map_delta",
  {     &program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0 },
  {     &program_representation_utils__program_representation_utils__notag_functor_desc_inst_map_delta_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_inst_map_delta_0
};

static const MR_VA_PseudoTypeInfo_Struct2 program_representation_utils____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_TypeInfo_Struct2 program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0[2] = {
  (MR_PseudoTypeInfo) &program_representation_utils____vpti_func_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &program_representation_utils__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
};

static const MR_ConstString program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0[2] = {
  (MR_String) "pgi_lookup_annotation",
  (MR_String) "pgi_var_name_table"
};

static const MR_DuFunctorDesc program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0 = {
  (MR_String) "print_goal_info",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  program_representation_utils__program_representation_utils__field_types_print_goal_info_2_0,
  program_representation_utils__program_representation_utils__field_names_print_goal_info_2_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0[1] = {
  &program_representation_utils__program_representation_utils__du_functor_desc_print_goal_info_2_0
};

static const MR_DuPtagLayout program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    program_representation_utils__program_representation_utils__du_stag_ordered_print_goal_info_2_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (program_representation_utils____Unify____print_goal_info_2_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____print_goal_info_2_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "print_goal_info",
  {     program_representation_utils__program_representation_utils__du_name_ordered_print_goal_info_2 },
  {     program_representation_utils__program_representation_utils__du_ptag_ordered_print_goal_info_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_print_goal_info_2
};

static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_0 = {
  (MR_String) "seen_duplicate_instantiation",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc program_representation_utils__program_representation_utils__enum_functor_desc_seen_duplicate_instantiation_0_1 = {
  (MR_String) "have_not_seen_duplicate_instantiation",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr program_representation_utils__program_representation_utils__enum_value_ordered_seen_duplicate_instantiation_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001)),
  ((MR_Box) (program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001)),
  (MR_String) "program_representation_utils",
  (MR_String) "seen_duplicate_instantiation",
  {     program_representation_utils__program_representation_utils__enum_name_ordered_seen_duplicate_instantiation_0 },
  {     program_representation_utils__program_representation_utils__enum_value_ordered_seen_duplicate_instantiation_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  program_representation_utils__program_representation_utils__functor_number_map_seen_duplicate_instantiation_0
};

const MR_BaseTypeclassInfo base_typeclass_info_program_representation_utils__goal_annotation__arity1__unit__unit__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001))
};

static const MR_ConstString program_representation_utils__program_representation_utils__type_class_id_var_names_goal_annotation_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod program_representation_utils__program_representation_utils__type_class_id_method_ids_goal_annotation_1[1] = {
  {
    (MR_String) "print_goal_annotation_to_strings",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
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

static MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      program_representation_utils__succeeded = program_representation_utils____Unify____atomic_goal_is_call_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
    return program_representation_utils__succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0_10001(
  MR_Box * program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3)
{
  {
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

    {
      program_representation_utils____Compare____atomic_goal_is_call_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      program_representation_utils__succeeded = program_representation_utils____Unify____inst_map_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
    return program_representation_utils__succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____inst_map_0_0_10001(
  MR_Box * program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3)
{
  {
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

    {
      program_representation_utils____Compare____inst_map_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      program_representation_utils__succeeded = program_representation_utils____Unify____inst_map_delta_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
    return program_representation_utils__succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0_10001(
  MR_Box * program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3)
{
  {
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

    {
      program_representation_utils____Compare____inst_map_delta_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box program_representation_utils__wrapper_arg_4)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      program_representation_utils__succeeded = program_representation_utils____Unify____print_goal_info_2_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), ((MR_Word) program_representation_utils__wrapper_arg_4));
    }
    return program_representation_utils__succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3,
  MR_Box program_representation_utils__wrapper_arg_4,
  MR_Box program_representation_utils__wrapper_arg_5)
{
  {
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

    {
      program_representation_utils____Compare____print_goal_info_2_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_4), ((MR_Word) program_representation_utils__wrapper_arg_5));
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0_10001(
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      program_representation_utils__succeeded = program_representation_utils____Unify____seen_duplicate_instantiation_0_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
    return program_representation_utils__succeeded;
  }
}

static void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0_10001(
  MR_Box * program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3)
{
  {
    MR_Word program_representation_utils__conv0_HeadVar__1_1;

    {
      program_representation_utils____Compare____seen_duplicate_instantiation_0_0(&program_representation_utils__conv0_HeadVar__1_1, ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3));
    }
    *program_representation_utils__wrapper_arg_1 = ((MR_Box) (program_representation_utils__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3)
{
  {
    MR_Box program_representation_utils__closure;
    MR_Word program_representation_utils__conv0_HeadVar__3_3;

    program_representation_utils__closure = program_representation_utils__closure_arg;
    {
      program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv0_HeadVar__3_3);
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__3_3));
  }
}

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__904__1_1_f_0(
  MR_Integer program_representation_utils__LambdaHeadVar__1_80)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__LambdaHeadVar__2_81;

    {
      program_representation_utils__LambdaHeadVar__2_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), program_representation_utils__LambdaHeadVar__2_81, 0) = ((MR_Box) (program_representation_utils__LambdaHeadVar__1_80));
    }
    return program_representation_utils__LambdaHeadVar__2_81;
  }
}

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_goal__899__1_1_f_0(
  MR_Integer program_representation_utils__LambdaHeadVar__1_87)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__LambdaHeadVar__2_88;

    {
      program_representation_utils__LambdaHeadVar__2_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), program_representation_utils__LambdaHeadVar__2_88, 0) = ((MR_Box) (program_representation_utils__LambdaHeadVar__1_87));
    }
    return program_representation_utils__LambdaHeadVar__2_88;
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1239__2_3_p_0(
  MR_Word program_representation_utils__LambdaHeadVar__1_52,
  MR_Word program_representation_utils__LambdaHeadVar__2_53,
  MR_Word * program_representation_utils__LambdaHeadVar__3_54)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__LambdaHeadVar__1_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *program_representation_utils__LambdaHeadVar__3_54 = program_representation_utils__LambdaHeadVar__2_53;
    else
      {
        MR_Integer program_representation_utils__VarI_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__LambdaHeadVar__1_52, (MR_Integer) 0)));

        {
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__VarI_55)), program_representation_utils__LambdaHeadVar__2_53, program_representation_utils__LambdaHeadVar__3_54);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1239__1_3_p_0(
  MR_Word program_representation_utils__LambdaHeadVar__1_30,
  MR_Word program_representation_utils__LambdaHeadVar__2_31,
  MR_Word * program_representation_utils__LambdaHeadVar__3_32)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__LambdaHeadVar__1_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *program_representation_utils__LambdaHeadVar__3_32 = program_representation_utils__LambdaHeadVar__2_31;
    else
      {
        MR_Integer program_representation_utils__VarI_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__LambdaHeadVar__1_30, (MR_Integer) 0)));

        {
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__VarI_17)), program_representation_utils__LambdaHeadVar__2_31, program_representation_utils__LambdaHeadVar__3_32);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1163__1_5_p_0(
  MR_Word program_representation_utils__Before_4,
  MR_Integer program_representation_utils__LambdaHeadVar__1_15,
  MR_Word program_representation_utils__LambdaHeadVar__2_16,
  MR_Word program_representation_utils__LambdaHeadVar__3_17,
  MR_Word * program_representation_utils__LambdaHeadVar__4_18)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__BeforeInst_11;
    MR_Word program_representation_utils__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Before_4, (MR_Integer) 0)));
    MR_Word program_representation_utils__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Before_4, (MR_Integer) 1)));
    MR_Box program_representation_utils__conv0_BeforeInst_11;

    {
      program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__Var_19, program_representation_utils__LambdaHeadVar__1_15, &program_representation_utils__conv0_BeforeInst_11);
    }
    if (program_representation_utils__succeeded)
      {
        program_representation_utils__BeforeInst_11 = ((MR_Word) program_representation_utils__conv0_BeforeInst_11);
        program_representation_utils__succeeded = MR_TRUE;
      }
    if (program_representation_utils__succeeded)
      switch (program_representation_utils__BeforeInst_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (program_representation_utils__LambdaHeadVar__2_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *program_representation_utils__LambdaHeadVar__4_18 = program_representation_utils__LambdaHeadVar__3_17;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__LambdaHeadVar__1_15)), program_representation_utils__LambdaHeadVar__3_17, program_representation_utils__LambdaHeadVar__4_18);
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            switch (program_representation_utils__LambdaHeadVar__2_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140program_representation_utils.calc_inst_map_delta\'/3", (MR_String) "variable should become less instantiated");
                    return;
                  }
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
            *program_representation_utils__LambdaHeadVar__4_18 = program_representation_utils__LambdaHeadVar__3_17;
          }
          break;
        case (MR_Integer) 2:
          {
            switch (program_representation_utils__LambdaHeadVar__2_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140program_representation_utils.calc_inst_map_delta\'/3", (MR_String) "variable should become less instantiated");
                    return;
                  }
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
            *program_representation_utils__LambdaHeadVar__4_18 = program_representation_utils__LambdaHeadVar__3_17;
          }
          break;
      }
    else
      switch (program_representation_utils__LambdaHeadVar__2_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *program_representation_utils__LambdaHeadVar__4_18 = program_representation_utils__LambdaHeadVar__3_17;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (program_representation_utils__LambdaHeadVar__1_15)), program_representation_utils__LambdaHeadVar__3_17, program_representation_utils__LambdaHeadVar__4_18);
            }
          }
          break;
      }
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__merge_inst_map__1119__1_3_p_0(
  MR_Word program_representation_utils__HeadVar__1_24,
  MR_Word program_representation_utils__HeadVar__2_25,
  MR_Word * program_representation_utils__HeadVar__3_26)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__HeadVar__1_24, program_representation_utils__HeadVar__2_25, program_representation_utils__HeadVar__3_26);
    }
  }
}

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__551__1_2_f_0(
  MR_Word program_representation_utils__HeadVar__1_194,
  MR_Word program_representation_utils__HeadVar__2_195)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__HeadVar__3_196;

    {
      program_representation_utils__HeadVar__3_196 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__HeadVar__1_194, program_representation_utils__HeadVar__2_195);
    }
    return program_representation_utils__HeadVar__3_196;
  }
}

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__print_goal_to_strings__549__1_2_f_0(
  MR_Word program_representation_utils__LinePrefix_46,
  MR_Word program_representation_utils__LambdaHeadVar__1_159)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__LambdaHeadVar__2_160;
    MR_Word program_representation_utils__TypeCtorInfo_193_193 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word program_representation_utils__Var_161;
    MR_Word program_representation_utils__Var_162;

    {
      program_representation_utils__Var_162 = program_representation_utils__nl_0_f_0();
    }
    {
      program_representation_utils__Var_161 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_193_193, program_representation_utils__LambdaHeadVar__1_159, program_representation_utils__Var_162);
    }
    {
      program_representation_utils__LambdaHeadVar__2_160 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_193_193, program_representation_utils__LinePrefix_46, program_representation_utils__Var_161);
    }
    return program_representation_utils__LambdaHeadVar__2_160;
  }
}

static MR_Box MR_CALL 
program_representation_utils__IntroducedFrom__func__print_proc_to_strings__394__1_2_f_0(
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_6,
  MR_Box program_representation_utils__HeadVar__2_7)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Box program_representation_utils__HeadVar__3_8;
    MR_Word program_representation_utils__TypeInfo_10_10;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(program_representation_utils__TypeClassInfo_for_goal_annotation_6, (MR_Integer) 1, &program_representation_utils__TypeInfo_10_10);
    }
    {
      program_representation_utils__HeadVar__3_8 = mercury__std_util__id_1_f_0(program_representation_utils__TypeInfo_10_10, program_representation_utils__HeadVar__2_7);
    }
    return program_representation_utils__HeadVar__3_8;
  }
}

static void MR_CALL 
program_representation_utils__IntroducedFrom__pred__print_module_to_strings__232__1_4_p_0(
  MR_Word program_representation_utils__HeadVar__1_44,
  MR_Word program_representation_utils__HeadVar__2_45,
  MR_Word program_representation_utils__HeadVar__3_46,
  MR_Word * program_representation_utils__HeadVar__4_47)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_50_95_95_49_95_95_91_49_93_95_48_4_p_0(program_representation_utils__HeadVar__2_45, program_representation_utils__HeadVar__3_46, program_representation_utils__HeadVar__4_47);
    }
  }
}

static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_109_111_100_117_108_101_95_116_111_95_115_116_114_105_110_103_115_95_95_50_51_50_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word program_representation_utils__HeadVar__2_45,
  MR_Word program_representation_utils__HeadVar__3_46,
  MR_Word * program_representation_utils__HeadVar__4_47)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__ProcStrings_59;

    {
      program_representation_utils__print_proc_to_strings_2_p_0((MR_Word) &program_representation_utils_scalar_common_1[1], program_representation_utils__HeadVar__2_45, &program_representation_utils__ProcStrings_59);
    }
    {
      *program_representation_utils__HeadVar__4_47 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__HeadVar__3_46, program_representation_utils__ProcStrings_59);
    }
  }
}

static void MR_CALL 
program_representation_utils__ClassMethod_for_program_representation_utils__goal_annotation____unit__unit__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word * program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_112_114_105_110_116_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_116_111_95_115_116_114_105_110_103_115_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(program_representation_utils__HeadVar__3_3);
    }
  }
}

static void MR_CALL 
program_representation_utils__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_114_111_103_114_97_109_95_114_101_112_114_101_115_101_110_116_97_116_105_111_110_95_117_116_105_108_115_95_95_112_114_105_110_116_95_103_111_97_108_95_97_110_110_111_116_97_116_105_111_110_95_116_111_95_115_116_114_105_110_103_115_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(
  MR_Word * program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      *program_representation_utils__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &program_representation_utils_scalar_common_1[0]);
    }
  }
}

void MR_CALL 
program_representation_utils____Compare____seen_duplicate_instantiation_0_0(
  MR_Word * program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__Cast_HeadVar1_4 = (MR_Integer) program_representation_utils__HeadVar__2_2;
    MR_Integer program_representation_utils__Cast_HeadVar2_5 = (MR_Integer) program_representation_utils__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(program_representation_utils__HeadVar__1_1, program_representation_utils__Cast_HeadVar1_4, program_representation_utils__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
program_representation_utils____Unify____seen_duplicate_instantiation_0_0(
  MR_Word program_representation_utils__HeadVar__2_1,
  MR_Word program_representation_utils__HeadVar__2_2)
{
  {
    MR_bool program_representation_utils__succeeded = (program_representation_utils__HeadVar__2_1 == program_representation_utils__HeadVar__2_2);

    return program_representation_utils__succeeded;
  }
}

void MR_CALL 
program_representation_utils____Compare____print_goal_info_2_0(
  MR_Word program_representation_utils__TypeInfo_for_Key_11,
  MR_Word program_representation_utils__TypeInfo_for_GoalAnn_12,
  MR_Word * program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__CastX_9 = (MR_Integer) program_representation_utils__HeadVar__2_2;
    MR_Integer program_representation_utils__CastY_10 = (MR_Integer) program_representation_utils__HeadVar__3_3;

    program_representation_utils__succeeded = (program_representation_utils__CastX_9 == program_representation_utils__CastY_10);
    if (program_representation_utils__succeeded)
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word program_representation_utils__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word program_representation_utils__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word program_representation_utils__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word program_representation_utils__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word program_representation_utils__Var_8;

        {
          mercury__private_builtin__builtin_compare_pred_3_p_0(&program_representation_utils__Var_8, (MR_Word) program_representation_utils__ArgX1_4, (MR_Word) program_representation_utils__ArgY1_5);
        }
        program_representation_utils__succeeded = (program_representation_utils__Var_8 == (MR_Integer) 0);
        program_representation_utils__succeeded = !(program_representation_utils__succeeded);
        if (program_representation_utils__succeeded)
          *program_representation_utils__HeadVar__1_1 = program_representation_utils__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_2[3], program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__ArgX2_6)), ((MR_Box) (program_representation_utils__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
program_representation_utils____Unify____print_goal_info_2_0(
  MR_Word program_representation_utils__TypeInfo_for_Key_9,
  MR_Word program_representation_utils__TypeInfo_for_GoalAnn_10,
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__CastX_7 = (MR_Integer) program_representation_utils__HeadVar__1_1;
    MR_Integer program_representation_utils__CastY_8 = (MR_Integer) program_representation_utils__HeadVar__2_2;

    program_representation_utils__succeeded = (program_representation_utils__CastX_7 == program_representation_utils__CastY_8);
    if (program_representation_utils__succeeded)
      program_representation_utils__succeeded = MR_TRUE;
    else
      {
        MR_Word program_representation_utils__TypeInfo_11_11;
        MR_Word program_representation_utils__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word program_representation_utils__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word program_representation_utils__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word program_representation_utils__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));

        {
          program_representation_utils__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) program_representation_utils__ArgX1_3, (MR_Word) program_representation_utils__ArgY1_4);
        }
        if (program_representation_utils__succeeded)
          {
            program_representation_utils__TypeInfo_11_11 = (MR_Word) &program_representation_utils_scalar_common_2[3];
            {
              program_representation_utils__succeeded = mercury__builtin__unify_2_p_0(program_representation_utils__TypeInfo_11_11, ((MR_Box) (program_representation_utils__ArgX2_5)), ((MR_Box) (program_representation_utils__ArgY2_6)));
            }
          }
      }
    return program_representation_utils__succeeded;
  }
}

void MR_CALL 
program_representation_utils____Compare____inst_map_delta_0_0(
  MR_Word * program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__CastX_6 = (MR_Integer) program_representation_utils__HeadVar__2_2;
    MR_Integer program_representation_utils__CastY_7 = (MR_Integer) program_representation_utils__HeadVar__3_3;

    program_representation_utils__succeeded = (program_representation_utils__CastX_6 == program_representation_utils__CastY_7);
    if (program_representation_utils__succeeded)
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word program_representation_utils__ArgX1_4 = (MR_Word) program_representation_utils__HeadVar__2_2;
        MR_Word program_representation_utils__ArgY1_5 = (MR_Word) program_representation_utils__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__ArgX1_4)), ((MR_Box) (program_representation_utils__ArgY1_5)));
        }
      }
  }
}

MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_delta_0_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__CastX_5 = (MR_Integer) program_representation_utils__HeadVar__1_1;
    MR_Integer program_representation_utils__CastY_6 = (MR_Integer) program_representation_utils__HeadVar__2_2;

    program_representation_utils__succeeded = (program_representation_utils__CastX_5 == program_representation_utils__CastY_6);
    if (program_representation_utils__succeeded)
      program_representation_utils__succeeded = MR_TRUE;
    else
      {
        MR_Word program_representation_utils__ArgX1_3 = (MR_Word) program_representation_utils__HeadVar__1_1;
        MR_Word program_representation_utils__ArgY1_4 = (MR_Word) program_representation_utils__HeadVar__2_2;

        {
          program_representation_utils__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], ((MR_Box) (program_representation_utils__ArgX1_3)), ((MR_Box) (program_representation_utils__ArgY1_4)));
        }
      }
    return program_representation_utils__succeeded;
  }
}

void MR_CALL 
program_representation_utils____Compare____inst_map_0_0(
  MR_Word * program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__CastX_9 = (MR_Integer) program_representation_utils__HeadVar__2_2;
    MR_Integer program_representation_utils__CastY_10 = (MR_Integer) program_representation_utils__HeadVar__3_3;

    program_representation_utils__succeeded = (program_representation_utils__CastX_9 == program_representation_utils__CastY_10);
    if (program_representation_utils__succeeded)
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word program_representation_utils__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word program_representation_utils__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word program_representation_utils__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word program_representation_utils__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word program_representation_utils__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_2[1], &program_representation_utils__Var_8, ((MR_Box) (program_representation_utils__ArgX1_4)), ((MR_Box) (program_representation_utils__ArgY1_5)));
        }
        program_representation_utils__succeeded = (program_representation_utils__Var_8 == (MR_Integer) 0);
        program_representation_utils__succeeded = !(program_representation_utils__succeeded);
        if (program_representation_utils__succeeded)
          *program_representation_utils__HeadVar__1_1 = program_representation_utils__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_2[2], program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__ArgX2_6)), ((MR_Box) (program_representation_utils__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
program_representation_utils____Unify____inst_map_0_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__CastX_7 = (MR_Integer) program_representation_utils__HeadVar__1_1;
    MR_Integer program_representation_utils__CastY_8 = (MR_Integer) program_representation_utils__HeadVar__2_2;

    program_representation_utils__succeeded = (program_representation_utils__CastX_7 == program_representation_utils__CastY_8);
    if (program_representation_utils__succeeded)
      program_representation_utils__succeeded = MR_TRUE;
    else
      {
        MR_Word program_representation_utils__TypeInfo_10_10;
        MR_Word program_representation_utils__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word program_representation_utils__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word program_representation_utils__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word program_representation_utils__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));

        {
          program_representation_utils__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &program_representation_utils_scalar_common_2[1], ((MR_Box) (program_representation_utils__ArgX1_3)), ((MR_Box) (program_representation_utils__ArgY1_4)));
        }
        if (program_representation_utils__succeeded)
          {
            program_representation_utils__TypeInfo_10_10 = (MR_Word) &program_representation_utils_scalar_common_2[2];
            {
              program_representation_utils__succeeded = mercury__builtin__unify_2_p_0(program_representation_utils__TypeInfo_10_10, ((MR_Box) (program_representation_utils__ArgX2_5)), ((MR_Box) (program_representation_utils__ArgY2_6)));
            }
          }
      }
    return program_representation_utils__succeeded;
  }
}

void MR_CALL 
program_representation_utils____Compare____atomic_goal_is_call_0_0(
  MR_Word * program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__CastX_8 = (MR_Integer) program_representation_utils__HeadVar__2_2;
    MR_Integer program_representation_utils__CastY_9 = (MR_Integer) program_representation_utils__HeadVar__3_3;

    program_representation_utils__succeeded = (program_representation_utils__CastX_8 == program_representation_utils__CastY_9);
    if (program_representation_utils__succeeded)
      *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((program_representation_utils__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *program_representation_utils__HeadVar__1_1 = (MR_Integer) 0;
      else
        *program_representation_utils__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word program_representation_utils__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));

        if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *program_representation_utils__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word program_representation_utils__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[8], program_representation_utils__HeadVar__1_1, ((MR_Box) (program_representation_utils__Var_11)), ((MR_Box) (program_representation_utils__ArgY1_5)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
program_representation_utils____Unify____atomic_goal_is_call_0_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__CastX_7 = (MR_Integer) program_representation_utils__HeadVar__1_1;
    MR_Integer program_representation_utils__CastY_8 = (MR_Integer) program_representation_utils__HeadVar__2_2;

    program_representation_utils__succeeded = (program_representation_utils__CastX_7 == program_representation_utils__CastY_8);
    if (program_representation_utils__succeeded)
      program_representation_utils__succeeded = MR_TRUE;
    else
    if ((program_representation_utils__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer program_representation_utils__CastX_5 = (MR_Integer) program_representation_utils__HeadVar__1_1;
        MR_Integer program_representation_utils__CastY_6 = (MR_Integer) program_representation_utils__HeadVar__2_2;

        program_representation_utils__succeeded = (program_representation_utils__CastY_6 == program_representation_utils__CastX_5);
      }
    else
      {
        MR_Word program_representation_utils__TypeInfo_9_9;
        MR_Word program_representation_utils__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word program_representation_utils__ArgY1_4;

        program_representation_utils__succeeded = ((MR_tag((MR_Word) program_representation_utils__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (program_representation_utils__succeeded)
          {
            program_representation_utils__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
            program_representation_utils__TypeInfo_9_9 = (MR_Word) &program_representation_utils_scalar_common_1[8];
            {
              program_representation_utils__succeeded = mercury__builtin__unify_2_p_0(program_representation_utils__TypeInfo_9_9, ((MR_Box) (program_representation_utils__ArgX1_3)), ((MR_Box) (program_representation_utils__ArgY1_4)));
            }
          }
      }
    return program_representation_utils__succeeded;
  }
}

static void MR_CALL 
program_representation_utils__inst_intersect_3_p_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_Word * program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;

    switch (program_representation_utils__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (program_representation_utils__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (program_representation_utils__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (program_representation_utils__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *program_representation_utils__HeadVar__3_3 = (MR_Integer) 2;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
program_representation_utils__inst_map_ground_var_6_p_0(
  MR_Word program_representation_utils__DepVars0_7,
  MR_Integer program_representation_utils__Var_8,
  MR_Word program_representation_utils__InstMap0_9,
  MR_Word * program_representation_utils__InstMap_10,
  MR_Word program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21,
  MR_Word * program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__VarToInst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMap0_9, (MR_Integer) 0)));
    MR_Word program_representation_utils__VarToDepVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMap0_9, (MR_Integer) 1)));
    MR_Word program_representation_utils__NewInst_16;
    MR_Word program_representation_utils__DepVars_17;
    MR_Word program_representation_utils__VarToInst_19;
    MR_Word program_representation_utils__VarToDepVars_20;
    MR_Word program_representation_utils__InstPrime_14;
    MR_Box program_representation_utils__conv0_InstPrime_14;

    {
      program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__VarToInst0_12, program_representation_utils__Var_8, &program_representation_utils__conv0_InstPrime_14);
    }
    if (program_representation_utils__succeeded)
      {
        program_representation_utils__InstPrime_14 = ((MR_Word) program_representation_utils__conv0_InstPrime_14);
        program_representation_utils__succeeded = MR_TRUE;
      }
    if (program_representation_utils__succeeded)
      switch (program_representation_utils__InstPrime_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            program_representation_utils__NewInst_16 = (MR_Integer) 1;
            program_representation_utils__DepVars_17 = program_representation_utils__DepVars0_7;
            *program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22 = program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word program_representation_utils__DepVarsFromIM_18;
            MR_Box program_representation_utils__conv1_DepVarsFromIM_18;

            program_representation_utils__NewInst_16 = (MR_Integer) 2;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarToDepVars0_13, program_representation_utils__Var_8, &program_representation_utils__conv1_DepVarsFromIM_18);
            }
            program_representation_utils__DepVarsFromIM_18 = ((MR_Word) program_representation_utils__conv1_DepVarsFromIM_18);
            {
              program_representation_utils__DepVars_17 = mercury__set__union_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__DepVars0_7, program_representation_utils__DepVarsFromIM_18);
            }
            *program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22 = (MR_Integer) 0;
          }
          break;
      }
    else
      {
        program_representation_utils__NewInst_16 = (MR_Integer) 1;
        program_representation_utils__DepVars_17 = program_representation_utils__DepVars0_7;
        *program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_22 = program_representation_utils__STATE_VARIABLE_SeenDuplicateInstantiation_0_21;
      }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__Var_8, ((MR_Box) (program_representation_utils__NewInst_16)), program_representation_utils__VarToInst0_12, &program_representation_utils__VarToInst_19);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__Var_8, ((MR_Box) (program_representation_utils__DepVars_17)), program_representation_utils__VarToDepVars0_13, &program_representation_utils__VarToDepVars_20);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *program_representation_utils__InstMap_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__VarToInst_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__VarToDepVars_20));
    }
  }
}

static void MR_CALL 
program_representation_utils__add_head_var_inst_to_map_3_p_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word program_representation_utils__STATE_VARIABLE_InstMap_0_9,
  MR_Word * program_representation_utils__STATE_VARIABLE_InstMap_10)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__VarRep_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word program_representation_utils__ModeRep_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word program_representation_utils__InitialInstRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModeRep_5, (MR_Integer) 0)));
    MR_Word program_representation_utils__Var_11;
    MR_Word program_representation_utils__VarToInst0_19;
    MR_Word program_representation_utils__VarToDepVars0_20;
    MR_Word program_representation_utils__VarToInst_21;
    MR_Word program_representation_utils__VarToDepVars_22;
    MR_Word program_representation_utils__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModeRep_5, (MR_Integer) 1)));

    {
      program_representation_utils__Var_11 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
    program_representation_utils__VarToInst0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_InstMap_0_9, (MR_Integer) 0)));
    program_representation_utils__VarToDepVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_InstMap_0_9, (MR_Integer) 1)));
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__VarRep_4, ((MR_Box) (program_representation_utils__InitialInstRep_7)), program_representation_utils__VarToInst0_19, &program_representation_utils__VarToInst_21);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarRep_4, ((MR_Box) (program_representation_utils__Var_11)), program_representation_utils__VarToDepVars0_20, &program_representation_utils__VarToDepVars_22);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *program_representation_utils__STATE_VARIABLE_InstMap_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__VarToInst_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__VarToDepVars_22));
    }
  }
}

static void MR_CALL 
program_representation_utils__label_case_9_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_37,
  MR_Word program_representation_utils__ParentGoalId_10,
  MR_Word program_representation_utils__STATE_VARIABLE_Case_0_20,
  MR_Word * program_representation_utils__STATE_VARIABLE_Case_21,
  MR_Integer program_representation_utils__STATE_VARIABLE_CaseNum_0_22,
  MR_Integer * program_representation_utils__STATE_VARIABLE_CaseNum_23,
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_24,
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_25,
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_26,
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_27)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Case_0_20, (MR_Integer) 0)));
    MR_Word program_representation_utils__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Case_0_20, (MR_Integer) 1)));
    MR_Word program_representation_utils__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Case_0_20, (MR_Integer) 2)));
    MR_Word program_representation_utils__Goal_19;
    MR_Word program_representation_utils__Var_53;
    MR_Word program_representation_utils__Var_57;

    {
      program_representation_utils__Var_57 = program_representation_utils__IntroducedFrom__func__label_case__955__1_1_f_0(program_representation_utils__STATE_VARIABLE_CaseNum_0_22);
    }
    {
      program_representation_utils__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_53, 0) = ((MR_Box) (program_representation_utils__ParentGoalId_10));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_53, 1) = ((MR_Box) (program_representation_utils__Var_57));
    }
    {
      program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_37, program_representation_utils__Var_53, program_representation_utils__Goal0_17, &program_representation_utils__Goal_19, program_representation_utils__STATE_VARIABLE_Counter_0_24, program_representation_utils__STATE_VARIABLE_Counter_25, program_representation_utils__STATE_VARIABLE_Map_0_26, program_representation_utils__STATE_VARIABLE_Map_27);
    }
    *program_representation_utils__STATE_VARIABLE_CaseNum_23 = (program_representation_utils__STATE_VARIABLE_CaseNum_0_22 + (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *program_representation_utils__STATE_VARIABLE_Case_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__MainConsId_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__OtherConsIds_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (program_representation_utils__Goal_19));
    }
  }
}

static MR_Word MR_CALL 
program_representation_utils__IntroducedFrom__func__label_case__955__1_1_f_0(
  MR_Integer program_representation_utils__LambdaHeadVar__1_32)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__LambdaHeadVar__2_33;

    {
      program_representation_utils__LambdaHeadVar__2_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), program_representation_utils__LambdaHeadVar__2_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), program_representation_utils__LambdaHeadVar__2_33, 1) = ((MR_Box) (program_representation_utils__LambdaHeadVar__1_32));
      MR_hl_field(MR_mktag(3), program_representation_utils__LambdaHeadVar__2_33, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return program_representation_utils__LambdaHeadVar__2_33;
  }
}

static void MR_CALL 
program_representation_utils__label_goal_wrapper_10_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_32,
  MR_Word program_representation_utils__MakePathStep_11,
  MR_Word program_representation_utils__ParentGoalId_12,
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_17,
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_18,
  MR_Integer program_representation_utils__STATE_VARIABLE_GoalNum_0_19,
  MR_Integer * program_representation_utils__STATE_VARIABLE_GoalNum_20,
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_21,
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_22,
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_23,
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_24)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__Var_25;
    MR_Word program_representation_utils__Var_29;
    MR_Box MR_CALL (* program_representation_utils__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), program_representation_utils__MakePathStep_11, (MR_Integer) 1)));
    MR_Box program_representation_utils__conv1_Var_29;

    {
      program_representation_utils__conv1_Var_29 = program_representation_utils__func_0(((MR_Box) program_representation_utils__MakePathStep_11), ((MR_Box) (program_representation_utils__STATE_VARIABLE_GoalNum_0_19)));
    }
    program_representation_utils__Var_29 = ((MR_Word) program_representation_utils__conv1_Var_29);
    {
      program_representation_utils__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_25, 0) = ((MR_Box) (program_representation_utils__ParentGoalId_12));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_25, 1) = ((MR_Box) (program_representation_utils__Var_29));
    }
    {
      program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__Var_25, program_representation_utils__STATE_VARIABLE_Goal_0_17, program_representation_utils__STATE_VARIABLE_Goal_18, program_representation_utils__STATE_VARIABLE_Counter_0_21, program_representation_utils__STATE_VARIABLE_Counter_22, program_representation_utils__STATE_VARIABLE_Map_0_23, program_representation_utils__STATE_VARIABLE_Map_24);
    }
    *program_representation_utils__STATE_VARIABLE_GoalNum_20 = (program_representation_utils__STATE_VARIABLE_GoalNum_0_19 + (MR_Integer) 1);
  }
}

static MR_Word MR_CALL 
program_representation_utils__add_nl_1_f_0(
  MR_String program_representation_utils__Str_3)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__HeadVar__2_2;
    MR_Word program_representation_utils__Var_4;

    {
      program_representation_utils__Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_4, 0) = ((MR_Box) (program_representation_utils__Str_3));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[10])));
    }
    {
      program_representation_utils__HeadVar__2_2 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__Var_4);
    }
    return program_representation_utils__HeadVar__2_2;
  }
}

static void MR_CALL 
program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(
  MR_Word program_representation_utils__VarNameTable_6,
  MR_Integer program_representation_utils__VarNum_7,
  MR_Word program_representation_utils__TypeRep_8,
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_15,
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_16)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__TypeCtorInfo_35_35;
    MR_String program_representation_utils__VarNumStr_10;
    MR_Word program_representation_utils__VarIdStrs_12;
    MR_Word program_representation_utils__TypeRepStrs_13;
    MR_Word program_representation_utils__EntryStrs_14;
    MR_Word program_representation_utils__Var_30;
    MR_Word program_representation_utils__Var_31;
    MR_String program_representation_utils__VarName_11;

    {
      mercury__string__int_to_string_2_p_0(program_representation_utils__VarNum_7, &program_representation_utils__VarNumStr_10);
    }
    {
      program_representation_utils__succeeded = mdbcomp__program_representation__search_var_name_3_p_0(program_representation_utils__VarNameTable_6, program_representation_utils__VarNum_7, &program_representation_utils__VarName_11);
    }
    if (program_representation_utils__succeeded)
      {
        program_representation_utils__succeeded = (strcmp(program_representation_utils__VarName_11, (MR_String) "") == 0);
        program_representation_utils__succeeded = !(program_representation_utils__succeeded);
      }
    if (program_representation_utils__succeeded)
      {
        MR_Word program_representation_utils__Var_17;
        MR_Word program_representation_utils__Var_18;
        MR_Word program_representation_utils__Var_20;

        {
          program_representation_utils__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_20, 0) = ((MR_Box) (program_representation_utils__VarNumStr_10));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[9])));
        }
        {
          program_representation_utils__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_18, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_18, 1) = ((MR_Box) (program_representation_utils__Var_20));
        }
        {
          program_representation_utils__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_17, 0) = ((MR_Box) (program_representation_utils__VarName_11));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_17, 1) = ((MR_Box) (program_representation_utils__Var_18));
        }
        {
          program_representation_utils__VarIdStrs_12 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__Var_17);
        }
      }
    else
      {
        MR_Word program_representation_utils__Var_24;
        MR_Word program_representation_utils__Var_26;

        {
          program_representation_utils__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_26, 0) = ((MR_Box) (program_representation_utils__VarNumStr_10));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &program_representation_utils_scalar_common_1[9])));
        }
        {
          program_representation_utils__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_24, 0) = ((MR_Box) ((MR_String) "unnamed_var "));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_24, 1) = ((MR_Box) (program_representation_utils__Var_26));
        }
        {
          program_representation_utils__VarIdStrs_12 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__Var_24);
        }
      }
    {
      program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__TypeRep_8, &program_representation_utils__TypeRepStrs_13);
    }
    program_representation_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      program_representation_utils__Var_31 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
    {
      program_representation_utils__Var_30 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeRepStrs_13, program_representation_utils__Var_31);
    }
    {
      program_representation_utils__EntryStrs_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__VarIdStrs_12, program_representation_utils__Var_30);
    }
    {
      *program_representation_utils__STATE_VARIABLE_Strings_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__STATE_VARIABLE_Strings_0_15, program_representation_utils__EntryStrs_14);
    }
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(
  MR_Integer program_representation_utils__TypeNum_5,
  MR_Word program_representation_utils__TypeRep_6,
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_11,
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_12)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__TypeCtorInfo_21_21;
    MR_String program_representation_utils__TypeNumStr_8;
    MR_Word program_representation_utils__TypeRepStrCord_9;
    MR_Word program_representation_utils__Str_10;
    MR_Word program_representation_utils__Var_13;
    MR_Word program_representation_utils__Var_14;
    MR_Word program_representation_utils__Var_15;
    MR_Word program_representation_utils__Var_17;
    MR_Word program_representation_utils__Var_18;

    {
      mercury__string__int_to_string_2_p_0(program_representation_utils__TypeNum_5, &program_representation_utils__TypeNumStr_8);
    }
    {
      program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__TypeRep_6, &program_representation_utils__TypeRepStrCord_9);
    }
    program_representation_utils__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      program_representation_utils__Var_13 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_21_21, ((MR_Box) (program_representation_utils__TypeNumStr_8)));
    }
    {
      program_representation_utils__Var_15 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_21_21, ((MR_Box) ((MR_String) " -> ")));
    }
    {
      program_representation_utils__Var_18 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_21_21, ((MR_Box) ((MR_String) "\n")));
    }
    {
      program_representation_utils__Var_17 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__TypeRepStrCord_9, program_representation_utils__Var_18);
    }
    {
      program_representation_utils__Var_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__Var_15, program_representation_utils__Var_17);
    }
    {
      program_representation_utils__Str_10 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__Var_13, program_representation_utils__Var_14);
    }
    {
      *program_representation_utils__STATE_VARIABLE_Strings_12 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_21_21, program_representation_utils__STATE_VARIABLE_Strings_0_11, program_representation_utils__Str_10);
    }
  }
}

static void MR_CALL 
program_representation_utils__arg_type_reps_to_strings_3_p_0(
  MR_Word program_representation_utils__HeadTypeRep_1,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_Word * program_representation_utils__Cord_3)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__HeadTypeRep_1, program_representation_utils__Cord_3);
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_15_15;
        MR_Word program_representation_utils__HeadTailTypeRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word program_representation_utils__TailTailTypeReps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word program_representation_utils__HeadCord_10;
        MR_Word program_representation_utils__TailCord_11;
        MR_Word program_representation_utils__Var_12;
        MR_Word program_representation_utils__Var_13;

        {
          program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__HeadTypeRep_1, &program_representation_utils__HeadCord_10);
        }
        {
          program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTailTypeRep_7, program_representation_utils__TailTailTypeReps_8, &program_representation_utils__TailCord_11);
        }
        program_representation_utils__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_13 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_15_15, ((MR_Box) ((MR_String) ", ")));
        }
        {
          program_representation_utils__Var_12 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_15_15, program_representation_utils__Var_13, program_representation_utils__TailCord_11);
        }
        {
          *program_representation_utils__Cord_3 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_15_15, program_representation_utils__HeadCord_10, program_representation_utils__Var_12);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__type_rep_to_strings_2_p_0(
  MR_Word program_representation_utils__TypeRep_3,
  MR_Word * program_representation_utils__Cord_4)
{
  {
    MR_bool program_representation_utils__succeeded;

    switch (MR_tag((MR_Word) program_representation_utils__TypeRep_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word program_representation_utils__TypeCtorInfo_82_82;
          MR_Word program_representation_utils__TypeCtorSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__TypeRep_3, (MR_Integer) 0)));
          MR_Word program_representation_utils__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__TypeRep_3, (MR_Integer) 1)));
          MR_String program_representation_utils__TypeCtorSymNameStr_7;
          MR_Word program_representation_utils__TypeCtorSymNameCord_8;

          {
            program_representation_utils__TypeCtorSymNameStr_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(program_representation_utils__TypeCtorSymName_5);
          }
          program_representation_utils__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            program_representation_utils__TypeCtorSymNameCord_8 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_82_82, ((MR_Box) (program_representation_utils__TypeCtorSymNameStr_7)));
          }
          if ((program_representation_utils__ArgTypes_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *program_representation_utils__Cord_4 = program_representation_utils__TypeCtorSymNameCord_8;
          else
            {
              MR_Word program_representation_utils__HeadTypeRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_6, (MR_Integer) 0)));
              MR_Word program_representation_utils__TailTypeReps_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_6, (MR_Integer) 1)));
              MR_Word program_representation_utils__ArgTypesCord_11;
              MR_Word program_representation_utils__Var_41;
              MR_Word program_representation_utils__Var_42;
              MR_Word program_representation_utils__Var_44;
              MR_Word program_representation_utils__Var_45;

              {
                program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_9, program_representation_utils__TailTypeReps_10, &program_representation_utils__ArgTypesCord_11);
              }
              {
                program_representation_utils__Var_42 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_82_82, ((MR_Box) ((MR_String) "(")));
              }
              {
                program_representation_utils__Var_45 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_82_82, ((MR_Box) ((MR_String) ")")));
              }
              {
                program_representation_utils__Var_44 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_82_82, program_representation_utils__ArgTypesCord_11, program_representation_utils__Var_45);
              }
              {
                program_representation_utils__Var_41 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_82_82, program_representation_utils__Var_42, program_representation_utils__Var_44);
              }
              {
                *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_82_82, program_representation_utils__TypeCtorSymNameCord_8, program_representation_utils__Var_41);
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word program_representation_utils__BuiltinTypeRep_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__TypeRep_3, (MR_Integer) 0)));
          MR_String program_representation_utils__TypeNameStr_13 = ((&program_representation_utils_vector_common_6[24 + program_representation_utils__BuiltinTypeRep_12]))->program_representation_utils__vector_common_type_6_0__vct_6_f_0;

          {
            *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__TypeNameStr_13)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word program_representation_utils__ArgTypes_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__TypeRep_3, (MR_Integer) 0)));

          if ((program_representation_utils__ArgTypes_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "{}")));
              }
            }
          else
            {
              MR_Word program_representation_utils__TypeCtorInfo_85_85;
              MR_Word program_representation_utils__Var_35;
              MR_Word program_representation_utils__Var_37;
              MR_Word program_representation_utils__Var_38;
              MR_Word program_representation_utils__HeadTypeRep_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_53, (MR_Integer) 0)));
              MR_Word program_representation_utils__TailTypeReps_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_53, (MR_Integer) 1)));
              MR_Word program_representation_utils__ArgTypesCord_49;

              {
                program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_47, program_representation_utils__TailTypeReps_48, &program_representation_utils__ArgTypesCord_49);
              }
              program_representation_utils__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                program_representation_utils__Var_35 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_85_85, ((MR_Box) ((MR_String) "{")));
              }
              {
                program_representation_utils__Var_38 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_85_85, ((MR_Box) ((MR_String) "}")));
              }
              {
                program_representation_utils__Var_37 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_85_85, program_representation_utils__ArgTypesCord_49, program_representation_utils__Var_38);
              }
              {
                *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_85_85, program_representation_utils__Var_35, program_representation_utils__Var_37);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word program_representation_utils__MaybeResultType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 2)));
              MR_Word program_representation_utils__ArgTypes_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 1)));

              if ((program_representation_utils__MaybeResultType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                if ((program_representation_utils__ArgTypes_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "pred ()")));
                    }
                  }
                else
                  {
                    MR_Word program_representation_utils__TypeCtorInfo_87_87;
                    MR_Word program_representation_utils__Var_29;
                    MR_Word program_representation_utils__Var_31;
                    MR_Word program_representation_utils__Var_32;
                    MR_Word program_representation_utils__HeadTypeRep_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 0)));
                    MR_Word program_representation_utils__TailTypeReps_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 1)));
                    MR_Word program_representation_utils__ArgTypesCord_59;

                    {
                      program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_57, program_representation_utils__TailTypeReps_58, &program_representation_utils__ArgTypesCord_59);
                    }
                    program_representation_utils__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                    {
                      program_representation_utils__Var_29 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_87_87, ((MR_Box) ((MR_String) "pred(")));
                    }
                    {
                      program_representation_utils__Var_32 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_87_87, ((MR_Box) ((MR_String) ")")));
                    }
                    {
                      program_representation_utils__Var_31 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_87_87, program_representation_utils__ArgTypesCord_59, program_representation_utils__Var_32);
                    }
                    {
                      *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_87_87, program_representation_utils__Var_29, program_representation_utils__Var_31);
                    }
                  }
              else
                {
                  MR_Word program_representation_utils__ResultType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__MaybeResultType_14, (MR_Integer) 0)));
                  MR_Word program_representation_utils__ResultTypeCord_16;

                  {
                    program_representation_utils__type_rep_to_strings_2_p_0(program_representation_utils__ResultType_15, &program_representation_utils__ResultTypeCord_16);
                  }
                  if ((program_representation_utils__ArgTypes_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word program_representation_utils__TypeCtorInfo_88_88 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                      MR_Word program_representation_utils__Var_27;

                      {
                        program_representation_utils__Var_27 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_88_88, ((MR_Box) ((MR_String) "func = ")));
                      }
                      {
                        *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_88_88, program_representation_utils__Var_27, program_representation_utils__ResultTypeCord_16);
                      }
                    }
                  else
                    {
                      MR_Word program_representation_utils__TypeCtorInfo_89_89;
                      MR_Word program_representation_utils__Var_21;
                      MR_Word program_representation_utils__Var_23;
                      MR_Word program_representation_utils__Var_24;
                      MR_Word program_representation_utils__Var_25;
                      MR_Word program_representation_utils__HeadTypeRep_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 0)));
                      MR_Word program_representation_utils__TailTypeReps_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgTypes_78, (MR_Integer) 1)));
                      MR_Word program_representation_utils__ArgTypesCord_68;

                      {
                        program_representation_utils__arg_type_reps_to_strings_3_p_0(program_representation_utils__HeadTypeRep_66, program_representation_utils__TailTypeReps_67, &program_representation_utils__ArgTypesCord_68);
                      }
                      program_representation_utils__TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                      {
                        program_representation_utils__Var_21 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_89_89, ((MR_Box) ((MR_String) "func(")));
                      }
                      {
                        program_representation_utils__Var_25 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_89_89, ((MR_Box) ((MR_String) ") = ")));
                      }
                      {
                        program_representation_utils__Var_24 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_89_89, program_representation_utils__Var_25, program_representation_utils__ResultTypeCord_16);
                      }
                      {
                        program_representation_utils__Var_23 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_89_89, program_representation_utils__ArgTypesCord_68, program_representation_utils__Var_24);
                      }
                      {
                        *program_representation_utils__Cord_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_89_89, program_representation_utils__Var_21, program_representation_utils__Var_23);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer program_representation_utils__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__TypeRep_3, (MR_Integer) 1)));
              MR_String program_representation_utils__NStr_18;
              MR_String program_representation_utils__Var_19;

              {
                mercury__string__int_to_string_2_p_0(program_representation_utils__N_17, &program_representation_utils__NStr_18);
              }
              {
                program_representation_utils__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "T", program_representation_utils__NStr_18);
              }
              {
                *program_representation_utils__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__Var_19)));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_6(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1)
{
  {
    MR_Box program_representation_utils__wrapper_arg_2;
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv5_HeadVar__2_2;

    {
      program_representation_utils__conv5_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) program_representation_utils__wrapper_arg_1));
    }
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv5_HeadVar__2_2));
    return program_representation_utils__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_5(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1)
{
  {
    MR_Box program_representation_utils__wrapper_arg_2;
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv4_HeadVar__2_2;

    {
      program_representation_utils__conv4_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) program_representation_utils__wrapper_arg_1));
    }
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv4_HeadVar__2_2));
    return program_representation_utils__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_4(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1)
{
  {
    MR_Box program_representation_utils__wrapper_arg_2;
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv3_HeadVar__2_2;

    {
      program_representation_utils__conv3_HeadVar__2_2 = program_representation_utils__add_nl_1_f_0(((MR_String) program_representation_utils__wrapper_arg_1));
    }
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv3_HeadVar__2_2));
    return program_representation_utils__wrapper_arg_2;
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_3(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_String program_representation_utils__conv2_String_4;

    {
      program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv2_String_4);
    }
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv2_String_4));
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_String program_representation_utils__conv1_String_4;

    {
      program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv1_String_4);
    }
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv1_String_4));
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_String program_representation_utils__conv0_String_4;

    {
      program_representation_utils__print_proc_label_to_string_2_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv0_String_4);
    }
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv0_String_4));
  }
}

static void MR_CALL 
program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(
  MR_Word program_representation_utils__OISUTypeProcs_4,
  MR_Word program_representation_utils__STATE_VARIABLE_Strings_0_7,
  MR_Word * program_representation_utils__STATE_VARIABLE_Strings_8)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__TypeCtorInfo_39_47 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
    MR_Word program_representation_utils__TypeCtorInfo_40_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word program_representation_utils__TypeInfo_45_53;
    MR_Word program_representation_utils__OISUStr_6;
    MR_String program_representation_utils__TypeCtor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 0)));
    MR_Word program_representation_utils__CreatorProcLabels_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 1)));
    MR_Word program_representation_utils__MutatorProcLabels_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 2)));
    MR_Word program_representation_utils__DestructorProcLabels_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__OISUTypeProcs_4, (MR_Integer) 3)));
    MR_Word program_representation_utils__CreatorStrs_17;
    MR_Word program_representation_utils__MutatorStrs_18;
    MR_Word program_representation_utils__DestructorStrs_19;
    MR_Word program_representation_utils__CreatorNlCords_20;
    MR_Word program_representation_utils__MutatorNlCords_21;
    MR_Word program_representation_utils__DestructorNlCords_22;
    MR_Word program_representation_utils__Var_29;
    MR_Word program_representation_utils__Var_30;
    MR_Word program_representation_utils__Var_32;
    MR_Word program_representation_utils__Var_34;
    MR_Word program_representation_utils__Var_35;
    MR_Word program_representation_utils__Var_37;
    MR_Word program_representation_utils__Var_38;
    MR_Word program_representation_utils__Var_39;
    MR_Word program_representation_utils__Var_41;
    MR_Word program_representation_utils__Var_42;
    MR_Word program_representation_utils__Var_44;

    {
      mercury__list__map_3_p_0(program_representation_utils__TypeCtorInfo_39_47, program_representation_utils__TypeCtorInfo_40_48, (MR_Word) &program_representation_utils_scalar_common_2[15], program_representation_utils__CreatorProcLabels_14, &program_representation_utils__CreatorStrs_17);
    }
    {
      mercury__list__map_3_p_0(program_representation_utils__TypeCtorInfo_39_47, program_representation_utils__TypeCtorInfo_40_48, (MR_Word) &program_representation_utils_scalar_common_2[16], program_representation_utils__MutatorProcLabels_15, &program_representation_utils__MutatorStrs_18);
    }
    {
      mercury__list__map_3_p_0(program_representation_utils__TypeCtorInfo_39_47, program_representation_utils__TypeCtorInfo_40_48, (MR_Word) &program_representation_utils_scalar_common_2[17], program_representation_utils__DestructorProcLabels_16, &program_representation_utils__DestructorStrs_19);
    }
    program_representation_utils__TypeInfo_45_53 = (MR_Word) &program_representation_utils_scalar_common_1[0];
    {
      program_representation_utils__CreatorNlCords_20 = mercury__list__map_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__TypeInfo_45_53, (MR_Word) &program_representation_utils_scalar_common_2[18], program_representation_utils__CreatorStrs_17);
    }
    {
      program_representation_utils__MutatorNlCords_21 = mercury__list__map_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__TypeInfo_45_53, (MR_Word) &program_representation_utils_scalar_common_2[19], program_representation_utils__MutatorStrs_18);
    }
    {
      program_representation_utils__DestructorNlCords_22 = mercury__list__map_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__TypeInfo_45_53, (MR_Word) &program_representation_utils_scalar_common_2[20], program_representation_utils__DestructorStrs_19);
    }
    {
      program_representation_utils__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_32, 0) = ((MR_Box) (program_representation_utils__TypeCtor_13));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      program_representation_utils__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_30, 0) = ((MR_Box) ((MR_String) "\nOISU type constructor "));
      MR_hl_field(MR_mktag(1), program_representation_utils__Var_30, 1) = ((MR_Box) (program_representation_utils__Var_32));
    }
    {
      program_representation_utils__Var_29 = mercury__cord__from_list_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__Var_30);
    }
    {
      program_representation_utils__Var_37 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__CreatorNlCords_20);
    }
    {
      program_representation_utils__Var_35 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_40_48, ((MR_Box) ((MR_String) "\nCreator procs:\n")), program_representation_utils__Var_37);
    }
    {
      program_representation_utils__Var_41 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__MutatorNlCords_21);
    }
    {
      program_representation_utils__Var_39 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_40_48, ((MR_Box) ((MR_String) "\nMutator procs:\n")), program_representation_utils__Var_41);
    }
    {
      program_representation_utils__Var_44 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__DestructorNlCords_22);
    }
    {
      program_representation_utils__Var_42 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_40_48, ((MR_Box) ((MR_String) "\nDestructor procs:\n")), program_representation_utils__Var_44);
    }
    {
      program_representation_utils__Var_38 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__Var_39, program_representation_utils__Var_42);
    }
    {
      program_representation_utils__Var_34 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__Var_35, program_representation_utils__Var_38);
    }
    {
      program_representation_utils__OISUStr_6 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_48, program_representation_utils__Var_29, program_representation_utils__Var_34);
    }
    {
      *program_representation_utils__STATE_VARIABLE_Strings_8 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__STATE_VARIABLE_Strings_0_7, program_representation_utils__OISUStr_6);
    }
  }
}

void MR_CALL 
program_representation_utils__atomic_goal_is_call_2_p_0(
  MR_Word program_representation_utils__AtomicGoal_3,
  MR_Word * program_representation_utils__IsCall_4)
{
  {
    MR_bool program_representation_utils__succeeded;

    switch (MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *program_representation_utils__IsCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            *program_representation_utils__IsCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 5:
            {
              MR_Word program_representation_utils__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
              MR_Integer program_representation_utils__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *program_representation_utils__IsCall_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (program_representation_utils__Args_30));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word program_representation_utils__Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
              MR_Integer program_representation_utils__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_Integer program_representation_utils__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *program_representation_utils__IsCall_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (program_representation_utils__Args_35));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word program_representation_utils__Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
              MR_String program_representation_utils__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_String program_representation_utils__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *program_representation_utils__IsCall_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (program_representation_utils__Args_36));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv2_LambdaHeadVar__3_54;

    {
      program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1239__2_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv2_LambdaHeadVar__3_54);
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv2_LambdaHeadVar__3_54));
  }
}

static void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv0_LambdaHeadVar__3_32;

    {
      program_representation_utils__IntroducedFrom__pred__atomic_goal_get_vars__1239__1_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_LambdaHeadVar__3_32);
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_LambdaHeadVar__3_32));
  }
}

void MR_CALL 
program_representation_utils__atomic_goal_get_vars_2_p_0(
  MR_Word program_representation_utils__AtomicGoal_3,
  MR_Word * program_representation_utils__Vars_4)
{
  {
    MR_bool program_representation_utils__succeeded;

    switch (MR_tag((MR_Word) program_representation_utils__AtomicGoal_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word program_representation_utils__TypeCtorInfo_39_100 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Integer program_representation_utils__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)));
          MR_Word program_representation_utils__VarsL_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
          MR_Word program_representation_utils__Vars0_99;
          MR_String program_representation_utils__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

          {
            program_representation_utils__Vars0_99 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_100, program_representation_utils__VarsL_98);
          }
          {
            mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_100, ((MR_Box) (program_representation_utils__Var_97)), program_representation_utils__Vars0_99, program_representation_utils__Vars_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word program_representation_utils__TypeCtorInfo_39_104 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Integer program_representation_utils__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)));
          MR_Word program_representation_utils__VarsL_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
          MR_Word program_representation_utils__Vars0_103;
          MR_String program_representation_utils__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

          {
            program_representation_utils__Vars0_103 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_104, program_representation_utils__VarsL_102);
          }
          {
            mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_104, ((MR_Box) (program_representation_utils__Var_101)), program_representation_utils__Vars0_103, program_representation_utils__Vars_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word program_representation_utils__TypeCtorInfo_41_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Word program_representation_utils__MaybeVars_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
          MR_Word program_representation_utils__Var_77;
          MR_Integer program_representation_utils__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)));
          MR_Word program_representation_utils__Vars0_82;
          MR_String program_representation_utils__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
          MR_Box program_representation_utils__conv3_Vars0_82;

          {
            program_representation_utils__Var_77 = mercury__set__init_0_f_0(program_representation_utils__TypeCtorInfo_41_84);
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[4], (MR_Word) &program_representation_utils_scalar_common_1[3], (MR_Word) &program_representation_utils_scalar_common_2[14], program_representation_utils__MaybeVars_74, ((MR_Box) (program_representation_utils__Var_77)), &program_representation_utils__conv3_Vars0_82);
          }
          program_representation_utils__Vars0_82 = ((MR_Word) program_representation_utils__conv3_Vars0_82);
          {
            mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_41_84, ((MR_Box) (program_representation_utils__Var_81)), program_representation_utils__Vars0_82, program_representation_utils__Vars_4);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word program_representation_utils__TypeCtorInfo_41_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Word program_representation_utils__MaybeVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
              MR_Word program_representation_utils__Var_29;
              MR_Integer program_representation_utils__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_Word program_representation_utils__Vars0_37;
              MR_String program_representation_utils__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
              MR_Box program_representation_utils__conv1_Vars0_37;

              {
                program_representation_utils__Var_29 = mercury__set__init_0_f_0(program_representation_utils__TypeCtorInfo_41_41);
              }
              {
                mercury__list__foldl_4_p_0((MR_Word) &program_representation_utils_scalar_common_1[4], (MR_Word) &program_representation_utils_scalar_common_1[3], (MR_Word) &program_representation_utils_scalar_common_2[13], program_representation_utils__MaybeVars_12, ((MR_Box) (program_representation_utils__Var_29)), &program_representation_utils__conv1_Vars0_37);
              }
              program_representation_utils__Vars0_37 = ((MR_Word) program_representation_utils__conv1_Vars0_37);
              {
                mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_41_41, ((MR_Box) (program_representation_utils__Var_36)), program_representation_utils__Vars0_37, program_representation_utils__Vars_4);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer program_representation_utils__VarA_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_Integer program_representation_utils__VarB_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
              MR_Word program_representation_utils__Var_93;
              MR_Word program_representation_utils__Var_94;

              {
                program_representation_utils__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_94, 0) = ((MR_Box) (program_representation_utils__VarB_92));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                program_representation_utils__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_93, 0) = ((MR_Box) (program_representation_utils__VarA_91));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_93, 1) = ((MR_Box) (program_representation_utils__Var_94));
              }
              {
                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__Var_93);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer program_representation_utils__VarA_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_Integer program_representation_utils__VarB_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
              MR_Word program_representation_utils__Var_25;
              MR_Word program_representation_utils__Var_26;

              {
                program_representation_utils__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_26, 0) = ((MR_Box) (program_representation_utils__VarB_19));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                program_representation_utils__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_25, 0) = ((MR_Box) (program_representation_utils__VarA_18));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_25, 1) = ((MR_Box) (program_representation_utils__Var_26));
              }
              {
                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__Var_25);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer program_representation_utils__VarA_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_Integer program_representation_utils__VarB_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
              MR_Word program_representation_utils__Var_107;
              MR_Word program_representation_utils__Var_108;

              {
                program_representation_utils__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_108, 0) = ((MR_Box) (program_representation_utils__VarB_106));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                program_representation_utils__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_107, 0) = ((MR_Box) (program_representation_utils__VarA_105));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_107, 1) = ((MR_Box) (program_representation_utils__Var_108));
              }
              {
                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__Var_107);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word program_representation_utils__VarsL_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

              {
                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_89);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word program_representation_utils__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Integer program_representation_utils__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_Word program_representation_utils__VarsL_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
              MR_Word program_representation_utils__Vars0_10;

              {
                program_representation_utils__Vars0_10 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_39, program_representation_utils__VarsL_7);
              }
              {
                mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_39, ((MR_Box) (program_representation_utils__Var_5)), program_representation_utils__Vars0_10, program_representation_utils__Vars_4);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word program_representation_utils__TypeCtorInfo_39_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Integer program_representation_utils__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_Word program_representation_utils__VarsL_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
              MR_Word program_representation_utils__Vars0_50;
              MR_Integer program_representation_utils__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

              {
                program_representation_utils__Vars0_50 = mercury__set__list_to_set_1_f_0(program_representation_utils__TypeCtorInfo_39_51, program_representation_utils__VarsL_49);
              }
              {
                mercury__set__insert_3_p_0(program_representation_utils__TypeCtorInfo_39_51, ((MR_Box) (program_representation_utils__Var_48)), program_representation_utils__Vars0_50, program_representation_utils__Vars_4);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word program_representation_utils__VarsL_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
              MR_String program_representation_utils__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_String program_representation_utils__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

              {
                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_87);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word program_representation_utils__VarsL_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 3)));
              MR_String program_representation_utils__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));
              MR_String program_representation_utils__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));

              {
                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_38);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word program_representation_utils__VarsL_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 2)));
              MR_String program_representation_utils__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoal_3, (MR_Integer) 1)));

              {
                *program_representation_utils__Vars_4 = mercury__set__list_to_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__VarsL_46);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv0_LambdaHeadVar__4_18;

    {
      program_representation_utils__IntroducedFrom__pred__calc_inst_map_delta__1163__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv0_LambdaHeadVar__4_18);
    }
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv0_LambdaHeadVar__4_18));
  }
}

void MR_CALL 
program_representation_utils__calc_inst_map_delta_3_p_0(
  MR_Word program_representation_utils__Before_4,
  MR_Word program_representation_utils__After_5,
  MR_Word * program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__TypeCtorInfo_34_34;
    MR_Word program_representation_utils__DeltaVars_6;
    MR_Word program_representation_utils__Var_12;
    MR_Word program_representation_utils__Var_13;
    MR_Word program_representation_utils__Var_14;
    MR_Word program_representation_utils__Var_29;
    MR_Box program_representation_utils__conv1_DeltaVars_6;

    {
      program_representation_utils__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 1) = ((MR_Box) (program_representation_utils__calc_inst_map_delta_3_p_0_1));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 3) = ((MR_Box) (program_representation_utils__Before_4));
    }
    program_representation_utils__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__After_5, (MR_Integer) 0)));
    program_representation_utils__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__After_5, (MR_Integer) 1)));
    program_representation_utils__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      program_representation_utils__Var_14 = mercury__set__init_0_f_0(program_representation_utils__TypeCtorInfo_34_34);
    }
    {
      mercury__map__foldl_4_p_0(program_representation_utils__TypeCtorInfo_34_34, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__Var_12, program_representation_utils__Var_13, ((MR_Box) (program_representation_utils__Var_14)), &program_representation_utils__conv1_DeltaVars_6);
    }
    program_representation_utils__DeltaVars_6 = ((MR_Word) program_representation_utils__conv1_DeltaVars_6);
    *program_representation_utils__HeadVar__3_3 = (MR_Word) program_representation_utils__DeltaVars_6;
  }
}

MR_Word MR_CALL 
program_representation_utils__empty_inst_map_delta_0_f_0(void)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__InstMap_2;
    MR_Word program_representation_utils__Vars_3;

    {
      mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &program_representation_utils__Vars_3);
    }
    program_representation_utils__InstMap_2 = (MR_Word) program_representation_utils__Vars_3;
    return program_representation_utils__InstMap_2;
  }
}

void MR_CALL 
program_representation_utils__empty_inst_map_delta_1_p_0(
  MR_Word * program_representation_utils__HeadVar__1_1)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__Vars_2;

    {
      mercury__set__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &program_representation_utils__Vars_2);
    }
    *program_representation_utils__HeadVar__1_1 = (MR_Word) program_representation_utils__Vars_2;
  }
}

void MR_CALL 
program_representation_utils__inst_map_delta_get_var_set_2_p_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Word * program_representation_utils__Vars_3)
{
  {
    MR_bool program_representation_utils__succeeded;

    *program_representation_utils__Vars_3 = (MR_Word) program_representation_utils__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
program_representation_utils__merge_seen_duplicate_instantiation_2_f_0(
  MR_Word program_representation_utils__A_4,
  MR_Word program_representation_utils__B_5)
{
  {
    MR_bool program_representation_utils__succeeded = (program_representation_utils__A_4 == (MR_Integer) 1);
    MR_Word program_representation_utils__R_6;

    if (program_representation_utils__succeeded)
      program_representation_utils__succeeded = (program_representation_utils__B_5 == (MR_Integer) 1);
    if (program_representation_utils__succeeded)
      program_representation_utils__R_6 = (MR_Integer) 1;
    else
      program_representation_utils__R_6 = (MR_Integer) 0;
    return program_representation_utils__R_6;
  }
}

static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv1_HeadVar__3_26;

    {
      program_representation_utils__IntroducedFrom__pred__merge_inst_map__1119__1_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv1_HeadVar__3_26);
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv1_HeadVar__3_26));
  }
}

static void MR_CALL 
program_representation_utils__merge_inst_map_4_f_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv0_HeadVar__3_3;

    {
      program_representation_utils__inst_intersect_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_HeadVar__3_3);
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_HeadVar__3_3));
  }
}

MR_Word MR_CALL 
program_representation_utils__merge_inst_map_4_f_0(
  MR_Word program_representation_utils__InstMapA_6,
  MR_Word program_representation_utils__DetismA_7,
  MR_Word program_representation_utils__InstMapB_8,
  MR_Word program_representation_utils__DetismB_9)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__InstMap_10;

    switch (program_representation_utils__DetismA_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
      case (MR_Integer) 4:
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        switch (program_representation_utils__DetismB_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 5:
          case (MR_Integer) 4:
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_Word program_representation_utils__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Word program_representation_utils__VarToInstA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapA_6, (MR_Integer) 0)));
              MR_Word program_representation_utils__VarToDepVarsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapA_6, (MR_Integer) 1)));
              MR_Word program_representation_utils__VarToInstB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapB_8, (MR_Integer) 0)));
              MR_Word program_representation_utils__VarToDepVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__InstMapB_8, (MR_Integer) 1)));
              MR_Word program_representation_utils__VarToInst_15;
              MR_Word program_representation_utils__VarToDepVars_16;

              {
                mercury__map__union_4_p_1((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__TypeCtorInfo_23_23, (MR_Word) &program_representation_utils_scalar_common_2[11], program_representation_utils__VarToInstA_11, program_representation_utils__VarToInstB_13, &program_representation_utils__VarToInst_15);
              }
              {
                mercury__map__union_4_p_1((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__TypeCtorInfo_23_23, (MR_Word) &program_representation_utils_scalar_common_2[12], program_representation_utils__VarToDepVarsA_12, program_representation_utils__VarToDepVarsB_14, &program_representation_utils__VarToDepVars_16);
              }
              {
                program_representation_utils__InstMap_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), program_representation_utils__InstMap_10, 0) = ((MR_Box) (program_representation_utils__VarToInst_15));
                MR_hl_field(MR_mktag(0), program_representation_utils__InstMap_10, 1) = ((MR_Box) (program_representation_utils__VarToDepVars_16));
              }
            }
            break;
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            program_representation_utils__InstMap_10 = program_representation_utils__InstMapA_6;
            break;
        }
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 7:
        program_representation_utils__InstMap_10 = program_representation_utils__InstMapB_8;
        break;
    }
    return program_representation_utils__InstMap_10;
  }
}

void MR_CALL 
program_representation_utils__inst_map_get_var_deps_3_p_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Integer program_representation_utils__VarRep_6,
  MR_Word * program_representation_utils__DepVars_7)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__VarToDepVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word program_representation_utils__Var_8;
    MR_Word program_representation_utils__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));

    {
      program_representation_utils__Var_8 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
    {
      program_representation_utils__inst_map_get_var_deps_2_4_p_0(program_representation_utils__VarToDepVars_5, program_representation_utils__VarRep_6, program_representation_utils__Var_8, program_representation_utils__DepVars_7);
    }
  }
}

static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv1_STATE_VARIABLE_Set_10;

    {
      program_representation_utils__inst_map_get_var_deps_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv1_STATE_VARIABLE_Set_10);
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv1_STATE_VARIABLE_Set_10));
  }
}

static void MR_CALL 
program_representation_utils__inst_map_get_var_deps_2_4_p_0(
  MR_Word program_representation_utils__VarToDepVars_5,
  MR_Integer program_representation_utils__VarRep_6,
  MR_Word program_representation_utils__STATE_VARIABLE_Set_0_9,
  MR_Word * program_representation_utils__STATE_VARIABLE_Set_10)
{
  {
    MR_bool program_representation_utils__succeeded;

    {
      program_representation_utils__succeeded = mercury__set__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, program_representation_utils__STATE_VARIABLE_Set_0_9, ((MR_Box) (program_representation_utils__VarRep_6)));
    }
    if (program_representation_utils__succeeded)
      *program_representation_utils__STATE_VARIABLE_Set_10 = program_representation_utils__STATE_VARIABLE_Set_0_9;
    else
      {
        MR_Word program_representation_utils__DepVars_8;
        MR_Box program_representation_utils__conv0_DepVars_8;

        {
          program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarToDepVars_5, program_representation_utils__VarRep_6, &program_representation_utils__conv0_DepVars_8);
        }
        if (program_representation_utils__succeeded)
          {
            program_representation_utils__DepVars_8 = ((MR_Word) program_representation_utils__conv0_DepVars_8);
            program_representation_utils__succeeded = MR_TRUE;
          }
        if (program_representation_utils__succeeded)
          {
            MR_Word program_representation_utils__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Word program_representation_utils__STATE_VARIABLE_Set_11_11;
            MR_Word program_representation_utils__Var_12;
            MR_Box program_representation_utils__conv2_STATE_VARIABLE_Set_10;

            {
              program_representation_utils__STATE_VARIABLE_Set_11_11 = mercury__set__union_2_f_0(program_representation_utils__TypeCtorInfo_17_17, program_representation_utils__STATE_VARIABLE_Set_0_9, program_representation_utils__DepVars_8);
            }
            {
              program_representation_utils__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 1) = ((MR_Box) (program_representation_utils__inst_map_get_var_deps_2_4_p_0_1));
              MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 3) = ((MR_Box) (program_representation_utils__VarToDepVars_5));
            }
            {
              mercury__set__fold_4_p_0(program_representation_utils__TypeCtorInfo_17_17, (MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__Var_12, program_representation_utils__DepVars_8, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Set_11_11)), &program_representation_utils__conv2_STATE_VARIABLE_Set_10);
            }
            *program_representation_utils__STATE_VARIABLE_Set_10 = ((MR_Word) program_representation_utils__conv2_STATE_VARIABLE_Set_10);
          }
        else
          *program_representation_utils__STATE_VARIABLE_Set_10 = program_representation_utils__STATE_VARIABLE_Set_0_9;
      }
  }
}

void MR_CALL 
program_representation_utils__inst_map_get_4_p_0(
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Integer program_representation_utils__Var_7,
  MR_Word * program_representation_utils__Inst_8,
  MR_Word * program_representation_utils__DepVars_9)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__VarToInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word program_representation_utils__VarToDepVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word program_representation_utils__InstPrime_10;
    MR_Box program_representation_utils__conv0_InstPrime_10;

    {
      program_representation_utils__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0, program_representation_utils__VarToInst_5, program_representation_utils__Var_7, &program_representation_utils__conv0_InstPrime_10);
    }
    if (program_representation_utils__succeeded)
      {
        program_representation_utils__InstPrime_10 = ((MR_Word) program_representation_utils__conv0_InstPrime_10);
        program_representation_utils__succeeded = MR_TRUE;
      }
    if (program_representation_utils__succeeded)
      {
        MR_Box program_representation_utils__conv1_DepVars_9;

        *program_representation_utils__Inst_8 = program_representation_utils__InstPrime_10;
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &program_representation_utils_scalar_common_1[3], program_representation_utils__VarToDepVars_6, program_representation_utils__Var_7, &program_representation_utils__conv1_DepVars_9);
        }
        *program_representation_utils__DepVars_9 = ((MR_Word) program_representation_utils__conv1_DepVars_9);
      }
    else
      {
        *program_representation_utils__Inst_8 = (MR_Integer) 0;
        {
          *program_representation_utils__DepVars_9 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3,
  MR_Box program_representation_utils__wrapper_arg_4,
  MR_Box * program_representation_utils__wrapper_arg_5)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv1_InstMap_10;
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22;

    {
      program_representation_utils__inst_map_ground_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv1_InstMap_10, ((MR_Word) program_representation_utils__wrapper_arg_4), &program_representation_utils__conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22);
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv1_InstMap_10));
    *program_representation_utils__wrapper_arg_5 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_SeenDuplicateInstantiation_22));
  }
}

void MR_CALL 
program_representation_utils__inst_map_ground_vars_5_p_0(
  MR_Word program_representation_utils__Vars_6,
  MR_Word program_representation_utils__DepVars_7,
  MR_Word program_representation_utils__STATE_VARIABLE_InstMap_0_10,
  MR_Word * program_representation_utils__STATE_VARIABLE_InstMap_11,
  MR_Word * program_representation_utils__SeenDuplicateInstantiation_9)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__Var_12;
    MR_Box program_representation_utils__conv3_STATE_VARIABLE_InstMap_11;
    MR_Box program_representation_utils__conv2_SeenDuplicateInstantiation_9;

    {
      program_representation_utils__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 0) = ((MR_Box) (&program_representation_utils_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 1) = ((MR_Box) (program_representation_utils__inst_map_ground_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_12, 3) = ((MR_Box) (program_representation_utils__DepVars_7));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0, (MR_Word) &program_representation_utils__program_representation_utils__type_ctor_info_seen_duplicate_instantiation_0, program_representation_utils__Var_12, program_representation_utils__Vars_6, ((MR_Box) (program_representation_utils__STATE_VARIABLE_InstMap_0_10)), &program_representation_utils__conv3_STATE_VARIABLE_InstMap_11, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv2_SeenDuplicateInstantiation_9);
    }
    *program_representation_utils__STATE_VARIABLE_InstMap_11 = ((MR_Word) program_representation_utils__conv3_STATE_VARIABLE_InstMap_11);
    *program_representation_utils__SeenDuplicateInstantiation_9 = ((MR_Word) program_representation_utils__conv2_SeenDuplicateInstantiation_9);
  }
}

static void MR_CALL 
program_representation_utils__initial_inst_map_1_f_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_InstMap_10;

    {
      program_representation_utils__add_head_var_inst_to_map_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_STATE_VARIABLE_InstMap_10);
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_InstMap_10));
  }
}

MR_Word MR_CALL 
program_representation_utils__initial_inst_map_1_f_0(
  MR_Word program_representation_utils__TypeInfo_for_T_14,
  MR_Word program_representation_utils__ProcDefn_3)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__InstMap_4;
    MR_Word program_representation_utils__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word program_representation_utils__HeadVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 0)));
    MR_Word program_representation_utils__Var_7;
    MR_Word program_representation_utils__Var_8;
    MR_Word program_representation_utils__Var_9;
    MR_Word program_representation_utils__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 1)));
    MR_Word program_representation_utils__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 2)));
    MR_Word program_representation_utils__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 3)));
    MR_Word program_representation_utils__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefn_3, (MR_Integer) 4)));
    MR_Box program_representation_utils__conv1_InstMap_4;

    {
      program_representation_utils__Var_8 = mercury__map__init_0_f_0(program_representation_utils__TypeCtorInfo_18_18, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_inst_rep_0);
    }
    {
      program_representation_utils__Var_9 = mercury__map__init_0_f_0(program_representation_utils__TypeCtorInfo_18_18, (MR_Word) &program_representation_utils_scalar_common_1[3]);
    }
    {
      program_representation_utils__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_7, 0) = ((MR_Box) (program_representation_utils__Var_8));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_7, 1) = ((MR_Box) (program_representation_utils__Var_9));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0, (MR_Word) &program_representation_utils_scalar_common_2[10], program_representation_utils__HeadVars_5, ((MR_Box) (program_representation_utils__Var_7)), &program_representation_utils__conv1_InstMap_4);
    }
    program_representation_utils__InstMap_4 = ((MR_Word) program_representation_utils__conv1_InstMap_4);
    return program_representation_utils__InstMap_4;
  }
}

MR_bool MR_CALL 
program_representation_utils__progrep_search_proc_3_p_0(
  MR_Word program_representation_utils__ProgRep_4,
  MR_Word program_representation_utils__ProcLabel_5,
  MR_Word * program_representation_utils__ProcRep_6)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__TypeCtorInfo_12_33;
    MR_Word program_representation_utils__TypeInfo_13_34;
    MR_String program_representation_utils__DefModule_9;
    MR_Word program_representation_utils__ModuleRep_17;
    MR_Word program_representation_utils__ModuleReps_22;
    MR_Word program_representation_utils__Var_28;
    MR_Box program_representation_utils__conv0_ModuleRep_17;
    MR_String program_representation_utils__Var_29;
    MR_Word program_representation_utils__Var_30;
    MR_Word program_representation_utils__Var_31;
    MR_Word program_representation_utils__Var_32;
    MR_Box program_representation_utils__conv1_ProcRep_6;

    if (((MR_tag((MR_Word) program_representation_utils__ProcLabel_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word program_representation_utils__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 0)));
        MR_String program_representation_utils___DeclModule_8 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 1)));
        MR_String program_representation_utils__Var_10;
        MR_Integer program_representation_utils__Var_11;
        MR_Integer program_representation_utils__Var_12;

        program_representation_utils__DefModule_9 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 2)));
        program_representation_utils__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 3)));
        program_representation_utils__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 4)));
        program_representation_utils__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_5, (MR_Integer) 5)));
      }
    else
      {
        MR_String program_representation_utils__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 0)));
        MR_String program_representation_utils__Var_14;
        MR_Integer program_representation_utils__Var_15;
        MR_Integer program_representation_utils__Var_16;
        MR_String program_representation_utils___DeclModule_18 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 1)));

        program_representation_utils__DefModule_9 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 2)));
        program_representation_utils__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 3)));
        program_representation_utils__Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 4)));
        program_representation_utils__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_5, (MR_Integer) 5)));
      }
    program_representation_utils__ModuleReps_22 = (MR_Word) program_representation_utils__ProgRep_4;
    {
      program_representation_utils__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &program_representation_utils_scalar_common_1[7], program_representation_utils__ModuleReps_22, ((MR_Box) (program_representation_utils__DefModule_9)), &program_representation_utils__conv0_ModuleRep_17);
    }
    if (program_representation_utils__succeeded)
      {
        program_representation_utils__ModuleRep_17 = ((MR_Word) program_representation_utils__conv0_ModuleRep_17);
        program_representation_utils__succeeded = MR_TRUE;
      }
    if (program_representation_utils__succeeded)
      {
        program_representation_utils__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 0)));
        program_representation_utils__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 1)));
        program_representation_utils__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 2)));
        program_representation_utils__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 3)));
        program_representation_utils__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_17, (MR_Integer) 4)));
        program_representation_utils__TypeCtorInfo_12_33 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
        program_representation_utils__TypeInfo_13_34 = (MR_Word) &program_representation_utils_scalar_common_1[2];
        {
          program_representation_utils__succeeded = mercury__map__search_3_p_0(program_representation_utils__TypeCtorInfo_12_33, program_representation_utils__TypeInfo_13_34, program_representation_utils__Var_28, ((MR_Box) (program_representation_utils__ProcLabel_5)), &program_representation_utils__conv1_ProcRep_6);
        }
        if (program_representation_utils__succeeded)
          {
            *program_representation_utils__ProcRep_6 = ((MR_Word) program_representation_utils__conv1_ProcRep_6);
            program_representation_utils__succeeded = MR_TRUE;
          }
      }
    return program_representation_utils__succeeded;
  }
}

void MR_CALL 
program_representation_utils__label_goals_4_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_19,
  MR_Word * program_representation_utils__HeadVar__1_1,
  MR_Word * program_representation_utils__Map_6,
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_10,
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_11)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__LastIdPlus1_5;
    MR_Word program_representation_utils__Counter_8;
    MR_Integer program_representation_utils__Var_12;
    MR_Word program_representation_utils__Var_16;
    MR_Word program_representation_utils__Var_17;
    MR_Word program_representation_utils__Var_9;

    {
      program_representation_utils__Var_16 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      program_representation_utils__Var_17 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
    }
    {
      program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), program_representation_utils__STATE_VARIABLE_Goal_0_10, program_representation_utils__STATE_VARIABLE_Goal_11, program_representation_utils__Var_16, &program_representation_utils__Counter_8, program_representation_utils__Var_17, program_representation_utils__Map_6);
    }
    {
      mercury__counter__allocate_3_p_0(&program_representation_utils__LastIdPlus1_5, program_representation_utils__Counter_8, &program_representation_utils__Var_9);
    }
    program_representation_utils__Var_12 = (program_representation_utils__LastIdPlus1_5 - (MR_Integer) 1);
    *program_representation_utils__HeadVar__1_1 = (MR_Word) program_representation_utils__Var_12;
  }
}

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_5(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4,
  MR_Box program_representation_utils__wrapper_arg_5,
  MR_Box * program_representation_utils__wrapper_arg_6,
  MR_Box program_representation_utils__wrapper_arg_7,
  MR_Box * program_representation_utils__wrapper_arg_8)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv19_STATE_VARIABLE_Case_21;
    MR_Integer program_representation_utils__conv18_STATE_VARIABLE_CaseNum_23;
    MR_Word program_representation_utils__conv17_STATE_VARIABLE_Counter_25;
    MR_Word program_representation_utils__conv16_STATE_VARIABLE_Map_27;

    {
      program_representation_utils__label_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 4))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv19_STATE_VARIABLE_Case_21, ((MR_Integer) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv18_STATE_VARIABLE_CaseNum_23, ((MR_Word) program_representation_utils__wrapper_arg_5), &program_representation_utils__conv17_STATE_VARIABLE_Counter_25, ((MR_Word) program_representation_utils__wrapper_arg_7), &program_representation_utils__conv16_STATE_VARIABLE_Map_27);
    }
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv19_STATE_VARIABLE_Case_21));
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv18_STATE_VARIABLE_CaseNum_23));
    *program_representation_utils__wrapper_arg_6 = ((MR_Box) (program_representation_utils__conv17_STATE_VARIABLE_Counter_25));
    *program_representation_utils__wrapper_arg_8 = ((MR_Box) (program_representation_utils__conv16_STATE_VARIABLE_Map_27));
  }
}

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_4(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4,
  MR_Box program_representation_utils__wrapper_arg_5,
  MR_Box * program_representation_utils__wrapper_arg_6,
  MR_Box program_representation_utils__wrapper_arg_7,
  MR_Box * program_representation_utils__wrapper_arg_8)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv12_STATE_VARIABLE_Goal_18;
    MR_Integer program_representation_utils__conv11_STATE_VARIABLE_GoalNum_20;
    MR_Word program_representation_utils__conv10_STATE_VARIABLE_Counter_22;
    MR_Word program_representation_utils__conv9_STATE_VARIABLE_Map_24;

    {
      program_representation_utils__label_goal_wrapper_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 5))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv12_STATE_VARIABLE_Goal_18, ((MR_Integer) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv11_STATE_VARIABLE_GoalNum_20, ((MR_Word) program_representation_utils__wrapper_arg_5), &program_representation_utils__conv10_STATE_VARIABLE_Counter_22, ((MR_Word) program_representation_utils__wrapper_arg_7), &program_representation_utils__conv9_STATE_VARIABLE_Map_24);
    }
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv12_STATE_VARIABLE_Goal_18));
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv11_STATE_VARIABLE_GoalNum_20));
    *program_representation_utils__wrapper_arg_6 = ((MR_Box) (program_representation_utils__conv10_STATE_VARIABLE_Counter_22));
    *program_representation_utils__wrapper_arg_8 = ((MR_Box) (program_representation_utils__conv9_STATE_VARIABLE_Map_24));
  }
}

static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_3(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1)
{
  {
    MR_Box program_representation_utils__wrapper_arg_2;
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv8_LambdaHeadVar__2_81;

    {
      program_representation_utils__conv8_LambdaHeadVar__2_81 = program_representation_utils__IntroducedFrom__func__label_goal__904__1_1_f_0(((MR_Integer) program_representation_utils__wrapper_arg_1));
    }
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv8_LambdaHeadVar__2_81));
    return program_representation_utils__wrapper_arg_2;
  }
}

static void MR_CALL 
program_representation_utils__label_goal_7_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4,
  MR_Box program_representation_utils__wrapper_arg_5,
  MR_Box * program_representation_utils__wrapper_arg_6,
  MR_Box program_representation_utils__wrapper_arg_7,
  MR_Box * program_representation_utils__wrapper_arg_8)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv4_STATE_VARIABLE_Goal_18;
    MR_Integer program_representation_utils__conv3_STATE_VARIABLE_GoalNum_20;
    MR_Word program_representation_utils__conv2_STATE_VARIABLE_Counter_22;
    MR_Word program_representation_utils__conv1_STATE_VARIABLE_Map_24;

    {
      program_representation_utils__label_goal_wrapper_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 5))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv4_STATE_VARIABLE_Goal_18, ((MR_Integer) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv3_STATE_VARIABLE_GoalNum_20, ((MR_Word) program_representation_utils__wrapper_arg_5), &program_representation_utils__conv2_STATE_VARIABLE_Counter_22, ((MR_Word) program_representation_utils__wrapper_arg_7), &program_representation_utils__conv1_STATE_VARIABLE_Map_24);
    }
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv4_STATE_VARIABLE_Goal_18));
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv3_STATE_VARIABLE_GoalNum_20));
    *program_representation_utils__wrapper_arg_6 = ((MR_Box) (program_representation_utils__conv2_STATE_VARIABLE_Counter_22));
    *program_representation_utils__wrapper_arg_8 = ((MR_Box) (program_representation_utils__conv1_STATE_VARIABLE_Map_24));
  }
}

static MR_Box MR_CALL 
program_representation_utils__label_goal_7_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1)
{
  {
    MR_Box program_representation_utils__wrapper_arg_2;
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv0_LambdaHeadVar__2_88;

    {
      program_representation_utils__conv0_LambdaHeadVar__2_88 = program_representation_utils__IntroducedFrom__func__label_goal__899__1_1_f_0(((MR_Integer) program_representation_utils__wrapper_arg_1));
    }
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv0_LambdaHeadVar__2_88));
    return program_representation_utils__wrapper_arg_2;
  }
}

static void MR_CALL 
program_representation_utils__label_goal_7_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_94,
  MR_Word program_representation_utils__ContainingGoal_8,
  MR_Word program_representation_utils__STATE_VARIABLE_Goal_0_43,
  MR_Word * program_representation_utils__STATE_VARIABLE_Goal_44,
  MR_Word program_representation_utils__STATE_VARIABLE_Counter_0_45,
  MR_Word * program_representation_utils__STATE_VARIABLE_Counter_46,
  MR_Word program_representation_utils__STATE_VARIABLE_Map_0_47,
  MR_Word * program_representation_utils__STATE_VARIABLE_Map_48)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Goal_0_43, (MR_Integer) 0)));
    MR_Word program_representation_utils__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Goal_0_43, (MR_Integer) 1)));
    MR_Integer program_representation_utils__GoalIdNum_15;
    MR_Word program_representation_utils__GoalId_16;
    MR_Word program_representation_utils__GoalExpr_21;
    MR_Word program_representation_utils__STATE_VARIABLE_Counter_49_49;
    MR_Word program_representation_utils__STATE_VARIABLE_Map_50_50;
    MR_Box program_representation_utils__Var_14 = (MR_hl_field(MR_mktag(0), program_representation_utils__STATE_VARIABLE_Goal_0_43, (MR_Integer) 2));

    {
      mercury__counter__allocate_3_p_0(&program_representation_utils__GoalIdNum_15, program_representation_utils__STATE_VARIABLE_Counter_0_45, &program_representation_utils__STATE_VARIABLE_Counter_49_49);
    }
    program_representation_utils__GoalId_16 = (MR_Word) program_representation_utils__GoalIdNum_15;
    {
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, ((MR_Box) (program_representation_utils__GoalId_16)), ((MR_Box) (program_representation_utils__ContainingGoal_8)), program_representation_utils__STATE_VARIABLE_Map_0_47, &program_representation_utils__STATE_VARIABLE_Map_50_50);
    }
    switch (MR_tag((MR_Word) program_representation_utils__GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word program_representation_utils__TypeInfo_106_106;
          MR_Word program_representation_utils__Conjs0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)));
          MR_Word program_representation_utils__Conjs_19;
          MR_Word program_representation_utils__Var_82;
          MR_Integer program_representation_utils__Var_20;
          MR_Box program_representation_utils__conv7_Var_20;
          MR_Box program_representation_utils__conv6_STATE_VARIABLE_Counter_46;
          MR_Box program_representation_utils__conv5_STATE_VARIABLE_Map_48;

          {
            program_representation_utils__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_82, 0) = ((MR_Box) (&program_representation_utils_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_82, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_2));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_82, 3) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_82, 4) = ((MR_Box) (&program_representation_utils_scalar_common_2[8]));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_82, 5) = ((MR_Box) (program_representation_utils__GoalId_16));
          }
          {
            program_representation_utils__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_106_106, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1));
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_106_106, 1) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
          }
          {
            mercury__list__map_foldl3_9_p_1(program_representation_utils__TypeInfo_106_106, (MR_Word) &program_representation_utils_scalar_common_1[5], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &program_representation_utils_scalar_common_2[0], (MR_Word) program_representation_utils__Var_82, (MR_Word) program_representation_utils__Conjs0_17, &program_representation_utils__Conjs_19, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv7_Var_20, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Counter_49_49)), &program_representation_utils__conv6_STATE_VARIABLE_Counter_46, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Map_50_50)), &program_representation_utils__conv5_STATE_VARIABLE_Map_48);
          }
          program_representation_utils__Var_20 = ((MR_Integer) program_representation_utils__conv7_Var_20);
          *program_representation_utils__STATE_VARIABLE_Counter_46 = ((MR_Word) program_representation_utils__conv6_STATE_VARIABLE_Counter_46);
          *program_representation_utils__STATE_VARIABLE_Map_48 = ((MR_Word) program_representation_utils__conv5_STATE_VARIABLE_Map_48);
          {
            program_representation_utils__GoalExpr_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (program_representation_utils__Conjs_19));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word program_representation_utils__TypeInfo_120_120;
          MR_Word program_representation_utils__Disjs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)));
          MR_Word program_representation_utils__Disjs_23;
          MR_Word program_representation_utils__Var_75;
          MR_Integer program_representation_utils__Var_24;
          MR_Box program_representation_utils__conv15_Var_24;
          MR_Box program_representation_utils__conv14_STATE_VARIABLE_Counter_46;
          MR_Box program_representation_utils__conv13_STATE_VARIABLE_Map_48;

          {
            program_representation_utils__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_75, 0) = ((MR_Box) (&program_representation_utils_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_75, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_4));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_75, 3) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_75, 4) = ((MR_Box) (&program_representation_utils_scalar_common_2[9]));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_75, 5) = ((MR_Box) (program_representation_utils__GoalId_16));
          }
          {
            program_representation_utils__TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_120_120, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1));
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_120_120, 1) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
          }
          {
            mercury__list__map_foldl3_9_p_1(program_representation_utils__TypeInfo_120_120, (MR_Word) &program_representation_utils_scalar_common_1[5], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &program_representation_utils_scalar_common_2[0], (MR_Word) program_representation_utils__Var_75, (MR_Word) program_representation_utils__Disjs0_22, &program_representation_utils__Disjs_23, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv15_Var_24, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Counter_49_49)), &program_representation_utils__conv14_STATE_VARIABLE_Counter_46, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Map_50_50)), &program_representation_utils__conv13_STATE_VARIABLE_Map_48);
          }
          program_representation_utils__Var_24 = ((MR_Integer) program_representation_utils__conv15_Var_24);
          *program_representation_utils__STATE_VARIABLE_Counter_46 = ((MR_Word) program_representation_utils__conv14_STATE_VARIABLE_Counter_46);
          *program_representation_utils__STATE_VARIABLE_Map_48 = ((MR_Word) program_representation_utils__conv13_STATE_VARIABLE_Map_48);
          {
            program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (program_representation_utils__Disjs_23));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word program_representation_utils__TypeInfo_134_134;
          MR_Integer program_representation_utils__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)));
          MR_Word program_representation_utils__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
          MR_Word program_representation_utils__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr0_12, (MR_Integer) 2)));
          MR_Word program_representation_utils__Cases_28;
          MR_Word program_representation_utils__Var_71;
          MR_Integer program_representation_utils__Var_29;
          MR_Box program_representation_utils__conv22_Var_29;
          MR_Box program_representation_utils__conv21_STATE_VARIABLE_Counter_46;
          MR_Box program_representation_utils__conv20_STATE_VARIABLE_Map_48;

          {
            program_representation_utils__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_71, 0) = ((MR_Box) (&program_representation_utils_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_71, 1) = ((MR_Box) (program_representation_utils__label_goal_7_p_0_5));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_71, 3) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
            MR_hl_field(MR_mktag(0), program_representation_utils__Var_71, 4) = ((MR_Box) (program_representation_utils__GoalId_16));
          }
          {
            program_representation_utils__TypeInfo_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_134_134, 0) = ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1));
            MR_hl_field(MR_mktag(0), program_representation_utils__TypeInfo_134_134, 1) = ((MR_Box) (program_representation_utils__TypeInfo_for_T_94));
          }
          {
            mercury__list__map_foldl3_9_p_1(program_representation_utils__TypeInfo_134_134, (MR_Word) &program_representation_utils_scalar_common_1[6], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &program_representation_utils_scalar_common_2[0], (MR_Word) program_representation_utils__Var_71, (MR_Word) program_representation_utils__Cases0_27, &program_representation_utils__Cases_28, ((MR_Box) ((MR_Integer) 1)), &program_representation_utils__conv22_Var_29, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Counter_49_49)), &program_representation_utils__conv21_STATE_VARIABLE_Counter_46, ((MR_Box) (program_representation_utils__STATE_VARIABLE_Map_50_50)), &program_representation_utils__conv20_STATE_VARIABLE_Map_48);
          }
          program_representation_utils__Var_29 = ((MR_Integer) program_representation_utils__conv22_Var_29);
          *program_representation_utils__STATE_VARIABLE_Counter_46 = ((MR_Word) program_representation_utils__conv21_STATE_VARIABLE_Counter_46);
          *program_representation_utils__STATE_VARIABLE_Map_48 = ((MR_Word) program_representation_utils__conv20_STATE_VARIABLE_Map_48);
          {
            program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (program_representation_utils__Var_25));
            MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__CanFail_26));
            MR_hl_field(MR_mktag(2), program_representation_utils__GoalExpr_21, 2) = ((MR_Box) (program_representation_utils__Cases_28));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word program_representation_utils__Cond0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word program_representation_utils__Then0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word program_representation_utils__Else0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 3)));
              MR_Word program_representation_utils__Cond_33;
              MR_Word program_representation_utils__Then_34;
              MR_Word program_representation_utils__Else_35;
              MR_Word program_representation_utils__Var_59;
              MR_Word program_representation_utils__STATE_VARIABLE_Counter_60_60;
              MR_Word program_representation_utils__STATE_VARIABLE_Map_61_61;
              MR_Word program_representation_utils__Var_63;
              MR_Word program_representation_utils__STATE_VARIABLE_Counter_64_64;
              MR_Word program_representation_utils__STATE_VARIABLE_Map_65_65;
              MR_Word program_representation_utils__Var_67;

              {
                program_representation_utils__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_59, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__Var_59, program_representation_utils__Cond0_30, &program_representation_utils__Cond_33, program_representation_utils__STATE_VARIABLE_Counter_49_49, &program_representation_utils__STATE_VARIABLE_Counter_60_60, program_representation_utils__STATE_VARIABLE_Map_50_50, &program_representation_utils__STATE_VARIABLE_Map_61_61);
              }
              {
                program_representation_utils__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_63, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              {
                program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__Var_63, program_representation_utils__Then0_31, &program_representation_utils__Then_34, program_representation_utils__STATE_VARIABLE_Counter_60_60, &program_representation_utils__STATE_VARIABLE_Counter_64_64, program_representation_utils__STATE_VARIABLE_Map_61_61, &program_representation_utils__STATE_VARIABLE_Map_65_65);
              }
              {
                program_representation_utils__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_67, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              }
              {
                program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__Var_67, program_representation_utils__Else0_32, &program_representation_utils__Else_35, program_representation_utils__STATE_VARIABLE_Counter_64_64, program_representation_utils__STATE_VARIABLE_Counter_46, program_representation_utils__STATE_VARIABLE_Map_65_65, program_representation_utils__STATE_VARIABLE_Map_48);
              }
              {
                program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__Cond_33));
                MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 2) = ((MR_Box) (program_representation_utils__Then_34));
                MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 3) = ((MR_Box) (program_representation_utils__Else_35));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word program_representation_utils__SubGoal0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word program_representation_utils__SubGoal_37;
              MR_Word program_representation_utils__Var_55;

              {
                program_representation_utils__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_55, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              {
                program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__Var_55, program_representation_utils__SubGoal0_36, &program_representation_utils__SubGoal_37, program_representation_utils__STATE_VARIABLE_Counter_49_49, program_representation_utils__STATE_VARIABLE_Counter_46, program_representation_utils__STATE_VARIABLE_Map_50_50, program_representation_utils__STATE_VARIABLE_Map_48);
              }
              {
                program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__SubGoal_37));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word program_representation_utils__ScopeIsCut_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 2)));
              MR_Word program_representation_utils__Var_51;
              MR_Word program_representation_utils__Var_54;
              MR_Word program_representation_utils__SubGoal0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr0_12, (MR_Integer) 1)));
              MR_Word program_representation_utils__SubGoal_93;

              {
                program_representation_utils__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), program_representation_utils__Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), program_representation_utils__Var_54, 1) = ((MR_Box) (program_representation_utils__ScopeIsCut_38));
              }
              {
                program_representation_utils__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_51, 0) = ((MR_Box) (program_representation_utils__GoalId_16));
                MR_hl_field(MR_mktag(1), program_representation_utils__Var_51, 1) = ((MR_Box) (program_representation_utils__Var_54));
              }
              {
                program_representation_utils__label_goal_7_p_0(program_representation_utils__TypeInfo_for_T_94, program_representation_utils__Var_51, program_representation_utils__SubGoal0_92, &program_representation_utils__SubGoal_93, program_representation_utils__STATE_VARIABLE_Counter_49_49, program_representation_utils__STATE_VARIABLE_Counter_46, program_representation_utils__STATE_VARIABLE_Map_50_50, program_representation_utils__STATE_VARIABLE_Map_48);
              }
              {
                program_representation_utils__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 1) = ((MR_Box) (program_representation_utils__SubGoal_93));
                MR_hl_field(MR_mktag(3), program_representation_utils__GoalExpr_21, 2) = ((MR_Box) (program_representation_utils__ScopeIsCut_38));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              program_representation_utils__GoalExpr_21 = program_representation_utils__GoalExpr0_12;
              *program_representation_utils__STATE_VARIABLE_Counter_46 = program_representation_utils__STATE_VARIABLE_Counter_49_49;
              *program_representation_utils__STATE_VARIABLE_Map_48 = program_representation_utils__STATE_VARIABLE_Map_50_50;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *program_representation_utils__STATE_VARIABLE_Goal_44 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (program_representation_utils__GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (program_representation_utils__Detism_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (program_representation_utils__GoalId_16));
    }
  }
}

static void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_Strings_16;

    {
      program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv0_STATE_VARIABLE_Strings_16);
    }
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_Strings_16));
  }
}

static MR_Box MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1)
{
  {
    MR_Box program_representation_utils__wrapper_arg_2;
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;

    {
      program_representation_utils__wrapper_arg_2 = program_representation_utils__IntroducedFrom__func__print_proc_to_strings__394__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), program_representation_utils__wrapper_arg_1);
    }
    return program_representation_utils__wrapper_arg_2;
  }
}

void MR_CALL 
program_representation_utils__print_proc_to_strings_2_p_0(
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_6,
  MR_Word program_representation_utils__ProcRep_3,
  MR_Word * program_representation_utils__Strings_4)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__TypeInfo_12_12;
    MR_Word program_representation_utils__TypeCtorInfo_40_47;
    MR_Word program_representation_utils__Var_5;
    MR_Word program_representation_utils__ProcLabel_16;
    MR_Word program_representation_utils__ProcDefnRep_17;
    MR_Word program_representation_utils__ArgVarReps_18;
    MR_Word program_representation_utils__GoalRep_19;
    MR_Word program_representation_utils__VarNameTable_20;
    MR_Word program_representation_utils__MaybeVarTypeTable_21;
    MR_Word program_representation_utils__Detism_22;
    MR_String program_representation_utils__ProcLabelString0_23;
    MR_Word program_representation_utils__DetismString_24;
    MR_Word program_representation_utils__ProcLabelString_25;
    MR_Word program_representation_utils__ArgsString_26;
    MR_Word program_representation_utils__GoalString_27;
    MR_Word program_representation_utils__MainStrings_28;
    MR_Word program_representation_utils__Var_31;
    MR_Word program_representation_utils__Var_32;
    MR_Word program_representation_utils__Var_34;
    MR_Word program_representation_utils__Var_36;
    MR_Word program_representation_utils__Var_39;
    MR_Word program_representation_utils__Var_40;
    MR_Word program_representation_utils__Var_41;
    MR_Word program_representation_utils__Var_43;
    MR_Word program_representation_utils__Var_44;
    MR_String program_representation_utils__DetismStr_61;

    {
      program_representation_utils__Var_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_5, 0) = ((MR_Box) (&program_representation_utils_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_5, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_2_p_0_1));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_5, 3) = ((MR_Box) (program_representation_utils__TypeClassInfo_for_goal_annotation_6));
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(program_representation_utils__TypeClassInfo_for_goal_annotation_6, (MR_Integer) 1, &program_representation_utils__TypeInfo_12_12);
    }
    program_representation_utils__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_3, (MR_Integer) 0)));
    program_representation_utils__ProcDefnRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_3, (MR_Integer) 1)));
    program_representation_utils__ArgVarReps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 0)));
    program_representation_utils__GoalRep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 1)));
    program_representation_utils__VarNameTable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 2)));
    program_representation_utils__MaybeVarTypeTable_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 3)));
    program_representation_utils__Detism_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_17, (MR_Integer) 4)));
    {
      program_representation_utils__print_proc_label_to_string_2_p_0(program_representation_utils__ProcLabel_16, &program_representation_utils__ProcLabelString0_23);
    }
    program_representation_utils__DetismStr_61 = ((&program_representation_utils_vector_common_6[16 + program_representation_utils__Detism_22]))->program_representation_utils__vector_common_type_6_0__vct_6_f_0;
    {
      program_representation_utils__DetismString_24 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__DetismStr_61)));
    }
    program_representation_utils__TypeCtorInfo_40_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      program_representation_utils__Var_32 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_47, ((MR_Box) ((MR_String) " ")));
    }
    {
      program_representation_utils__Var_34 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_47, ((MR_Box) (program_representation_utils__ProcLabelString0_23)));
    }
    {
      program_representation_utils__Var_31 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__Var_32, program_representation_utils__Var_34);
    }
    {
      program_representation_utils__ProcLabelString_25 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__DetismString_24, program_representation_utils__Var_31);
    }
    if ((program_representation_utils__ArgVarReps_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          program_representation_utils__ArgsString_26 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_18_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word program_representation_utils__TypeCtorInfo_22_97;
        MR_Word program_representation_utils__ArgsStr_70;
        MR_Word program_representation_utils__Var_71;
        MR_Word program_representation_utils__Var_73;
        MR_Word program_representation_utils__Arg_86;
        MR_Word program_representation_utils__Args_87;
        MR_String program_representation_utils__ArgName_90;
        MR_Word program_representation_utils__ArgsString_91;
        MR_Word program_representation_utils__Var_92;
        MR_Word program_representation_utils__Var_94;

        {
          program_representation_utils__Var_71 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_77);
        }
        program_representation_utils__Arg_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_18, (MR_Integer) 0)));
        program_representation_utils__Args_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_18, (MR_Integer) 1)));
        {
          program_representation_utils__print_head_var_3_p_0(program_representation_utils__VarNameTable_20, program_representation_utils__Arg_86, &program_representation_utils__ArgName_90);
        }
        program_representation_utils__TypeCtorInfo_22_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_92 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_97, ((MR_Box) ((MR_String) ", ")));
        }
        {
          program_representation_utils__print_args_2_to_strings__ho6_5_p_0(program_representation_utils__VarNameTable_20, program_representation_utils__Args_87, program_representation_utils__Var_92, &program_representation_utils__ArgsString_91);
        }
        {
          program_representation_utils__Var_94 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_97, ((MR_Box) (program_representation_utils__ArgName_90)), program_representation_utils__ArgsString_91);
        }
        {
          program_representation_utils__ArgsStr_70 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_97, program_representation_utils__Var_71, program_representation_utils__Var_94);
        }
        {
          program_representation_utils__Var_73 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_77, program_representation_utils__ArgsStr_70, ((MR_Box) ((MR_String) ")")));
        }
        {
          program_representation_utils__ArgsString_26 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_77, ((MR_Box) ((MR_String) "(")), program_representation_utils__Var_73);
        }
      }
    {
      program_representation_utils__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_36, 0) = ((MR_Box) (program_representation_utils__Var_5));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_36, 1) = ((MR_Box) (program_representation_utils__VarNameTable_20));
    }
    {
      program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_12_12, program_representation_utils__TypeClassInfo_for_goal_annotation_6, program_representation_utils__Var_36, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), program_representation_utils__GoalRep_19, &program_representation_utils__GoalString_27);
    }
    {
      program_representation_utils__Var_41 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_47, ((MR_Box) ((MR_String) " :-\n")));
    }
    {
      program_representation_utils__Var_44 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
    {
      program_representation_utils__Var_43 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__GoalString_27, program_representation_utils__Var_44);
    }
    {
      program_representation_utils__Var_40 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__Var_41, program_representation_utils__Var_43);
    }
    {
      program_representation_utils__Var_39 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__ArgsString_26, program_representation_utils__Var_40);
    }
    {
      program_representation_utils__MainStrings_28 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__ProcLabelString_25, program_representation_utils__Var_39);
    }
    if ((program_representation_utils__MaybeVarTypeTable_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *program_representation_utils__Strings_4 = program_representation_utils__MainStrings_28;
    else
      {
        MR_Word program_representation_utils__VarTypeTable_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__MaybeVarTypeTable_21, (MR_Integer) 0)));
        MR_Word program_representation_utils__TypeTableStrings_30;
        MR_Word program_representation_utils__Var_45;
        MR_Word program_representation_utils__Var_46;
        MR_Box program_representation_utils__conv1_TypeTableStrings_30;

        {
          program_representation_utils__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_45, 0) = ((MR_Box) (&program_representation_utils_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_45, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_2_p_0_2));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_45, 3) = ((MR_Box) (program_representation_utils__VarNameTable_20));
        }
        {
          program_representation_utils__Var_46 = mercury__cord__init_0_f_0(program_representation_utils__TypeCtorInfo_40_47);
        }
        {
          mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__Var_45, program_representation_utils__VarTypeTable_29, ((MR_Box) (program_representation_utils__Var_46)), &program_representation_utils__conv1_TypeTableStrings_30);
        }
        program_representation_utils__TypeTableStrings_30 = ((MR_Word) program_representation_utils__conv1_TypeTableStrings_30);
        {
          *program_representation_utils__Strings_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_47, program_representation_utils__TypeTableStrings_30, program_representation_utils__MainStrings_28);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_Strings_16;

    {
      program_representation_utils__accumulate_var_type_table_entry_strings_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv0_STATE_VARIABLE_Strings_16);
    }
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_Strings_16));
  }
}

void MR_CALL 
program_representation_utils__print_proc_to_strings_3_p_0(
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_7,
  MR_Word program_representation_utils__Lookup_4,
  MR_Word program_representation_utils__ProcRep_5,
  MR_Word * program_representation_utils__Strings_6)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__TypeCtorInfo_40_43;
    MR_Word program_representation_utils__ProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_5, (MR_Integer) 0)));
    MR_Word program_representation_utils__ProcDefnRep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcRep_5, (MR_Integer) 1)));
    MR_Word program_representation_utils__ArgVarReps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 0)));
    MR_Word program_representation_utils__GoalRep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 1)));
    MR_Word program_representation_utils__VarNameTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 2)));
    MR_Word program_representation_utils__MaybeVarTypeTable_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 3)));
    MR_Word program_representation_utils__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcDefnRep_13, (MR_Integer) 4)));
    MR_String program_representation_utils__ProcLabelString0_19;
    MR_Word program_representation_utils__DetismString_20;
    MR_Word program_representation_utils__ProcLabelString_21;
    MR_Word program_representation_utils__ArgsString_22;
    MR_Word program_representation_utils__GoalString_23;
    MR_Word program_representation_utils__MainStrings_24;
    MR_Word program_representation_utils__Var_27;
    MR_Word program_representation_utils__Var_28;
    MR_Word program_representation_utils__Var_30;
    MR_Word program_representation_utils__Var_32;
    MR_Word program_representation_utils__Var_35;
    MR_Word program_representation_utils__Var_36;
    MR_Word program_representation_utils__Var_37;
    MR_Word program_representation_utils__Var_39;
    MR_Word program_representation_utils__Var_40;
    MR_String program_representation_utils__DetismStr_57;

    {
      program_representation_utils__print_proc_label_to_string_2_p_0(program_representation_utils__ProcLabel_12, &program_representation_utils__ProcLabelString0_19);
    }
    program_representation_utils__DetismStr_57 = ((&program_representation_utils_vector_common_6[8 + program_representation_utils__Detism_18]))->program_representation_utils__vector_common_type_6_0__vct_6_f_0;
    {
      program_representation_utils__DetismString_20 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__DetismStr_57)));
    }
    program_representation_utils__TypeCtorInfo_40_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      program_representation_utils__Var_28 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_43, ((MR_Box) ((MR_String) " ")));
    }
    {
      program_representation_utils__Var_30 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_43, ((MR_Box) (program_representation_utils__ProcLabelString0_19)));
    }
    {
      program_representation_utils__Var_27 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__Var_28, program_representation_utils__Var_30);
    }
    {
      program_representation_utils__ProcLabelString_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__DetismString_20, program_representation_utils__Var_27);
    }
    if ((program_representation_utils__ArgVarReps_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          program_representation_utils__ArgsString_22 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_18_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word program_representation_utils__TypeCtorInfo_22_93;
        MR_Word program_representation_utils__ArgsStr_66;
        MR_Word program_representation_utils__Var_67;
        MR_Word program_representation_utils__Var_69;
        MR_Word program_representation_utils__Arg_82;
        MR_Word program_representation_utils__Args_83;
        MR_String program_representation_utils__ArgName_86;
        MR_Word program_representation_utils__ArgsString_87;
        MR_Word program_representation_utils__Var_88;
        MR_Word program_representation_utils__Var_90;

        {
          program_representation_utils__Var_67 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_73);
        }
        program_representation_utils__Arg_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_14, (MR_Integer) 0)));
        program_representation_utils__Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__ArgVarReps_14, (MR_Integer) 1)));
        {
          program_representation_utils__print_head_var_3_p_0(program_representation_utils__VarNameTable_16, program_representation_utils__Arg_82, &program_representation_utils__ArgName_86);
        }
        program_representation_utils__TypeCtorInfo_22_93 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_88 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_93, ((MR_Box) ((MR_String) ", ")));
        }
        {
          program_representation_utils__print_args_2_to_strings__ho6_5_p_0(program_representation_utils__VarNameTable_16, program_representation_utils__Args_83, program_representation_utils__Var_88, &program_representation_utils__ArgsString_87);
        }
        {
          program_representation_utils__Var_90 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_93, ((MR_Box) (program_representation_utils__ArgName_86)), program_representation_utils__ArgsString_87);
        }
        {
          program_representation_utils__ArgsStr_66 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_93, program_representation_utils__Var_67, program_representation_utils__Var_90);
        }
        {
          program_representation_utils__Var_69 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_73, program_representation_utils__ArgsStr_66, ((MR_Box) ((MR_String) ")")));
        }
        {
          program_representation_utils__ArgsString_22 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_73, ((MR_Box) ((MR_String) "(")), program_representation_utils__Var_69);
        }
      }
    {
      program_representation_utils__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_32, 0) = ((MR_Box) (program_representation_utils__Lookup_4));
      MR_hl_field(MR_mktag(0), program_representation_utils__Var_32, 1) = ((MR_Box) (program_representation_utils__VarNameTable_16));
    }
    {
      program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, program_representation_utils__TypeClassInfo_for_goal_annotation_7, program_representation_utils__Var_32, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), program_representation_utils__GoalRep_15, &program_representation_utils__GoalString_23);
    }
    {
      program_representation_utils__Var_37 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_40_43, ((MR_Box) ((MR_String) " :-\n")));
    }
    {
      program_representation_utils__Var_40 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
    {
      program_representation_utils__Var_39 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__GoalString_23, program_representation_utils__Var_40);
    }
    {
      program_representation_utils__Var_36 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__Var_37, program_representation_utils__Var_39);
    }
    {
      program_representation_utils__Var_35 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__ArgsString_22, program_representation_utils__Var_36);
    }
    {
      program_representation_utils__MainStrings_24 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__ProcLabelString_21, program_representation_utils__Var_35);
    }
    if ((program_representation_utils__MaybeVarTypeTable_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *program_representation_utils__Strings_6 = program_representation_utils__MainStrings_24;
    else
      {
        MR_Word program_representation_utils__VarTypeTable_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__MaybeVarTypeTable_17, (MR_Integer) 0)));
        MR_Word program_representation_utils__TypeTableStrings_26;
        MR_Word program_representation_utils__Var_41;
        MR_Word program_representation_utils__Var_42;
        MR_Box program_representation_utils__conv1_TypeTableStrings_26;

        {
          program_representation_utils__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_41, 0) = ((MR_Box) (&program_representation_utils_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_41, 1) = ((MR_Box) (program_representation_utils__print_proc_to_strings_3_p_0_1));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_41, 3) = ((MR_Box) (program_representation_utils__VarNameTable_16));
        }
        {
          program_representation_utils__Var_42 = mercury__cord__init_0_f_0(program_representation_utils__TypeCtorInfo_40_43);
        }
        {
          mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__Var_41, program_representation_utils__VarTypeTable_25, ((MR_Box) (program_representation_utils__Var_42)), &program_representation_utils__conv1_TypeTableStrings_26);
        }
        program_representation_utils__TypeTableStrings_26 = ((MR_Word) program_representation_utils__conv1_TypeTableStrings_26);
        {
          *program_representation_utils__Strings_6 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_43, program_representation_utils__TypeTableStrings_26, program_representation_utils__MainStrings_24);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho6_5_p_0(
  MR_Word program_representation_utils__VarTable_2,
  MR_Word program_representation_utils__HeadVar__3_3,
  MR_Word program_representation_utils__Prefix_4,
  MR_Word * program_representation_utils__HeadVar__5_5)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *program_representation_utils__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_22_22;
        MR_Word program_representation_utils__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word program_representation_utils__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
        MR_String program_representation_utils__ArgName_15;
        MR_Word program_representation_utils__ArgsString_16;
        MR_Word program_representation_utils__Var_17;
        MR_Word program_representation_utils__Var_19;

        {
          program_representation_utils__print_head_var_3_p_0(program_representation_utils__VarTable_2, program_representation_utils__Arg_11, &program_representation_utils__ArgName_15);
        }
        program_representation_utils__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_17 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) ", ")));
        }
        {
          program_representation_utils__print_args_2_to_strings__ho6_5_p_0(program_representation_utils__VarTable_2, program_representation_utils__Args_12, program_representation_utils__Var_17, &program_representation_utils__ArgsString_16);
        }
        {
          program_representation_utils__Var_19 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) (program_representation_utils__ArgName_15)), program_representation_utils__ArgsString_16);
        }
        {
          *program_representation_utils__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_22, program_representation_utils__Prefix_4, program_representation_utils__Var_19);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_head_var_3_p_0(
  MR_Word program_representation_utils__VarTable_4,
  MR_Word program_representation_utils__HeadVar__2_2,
  MR_String * program_representation_utils__String_7)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Integer program_representation_utils__VarRep_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word program_representation_utils__VarMode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__HeadVar__2_2, (MR_Integer) 1)));
    MR_String program_representation_utils__VarName_8;
    MR_Word program_representation_utils__InitialInst_9;
    MR_Word program_representation_utils__FinalInst_10;
    MR_String program_representation_utils__InitialInstStr_11;
    MR_String program_representation_utils__FinalInstStr_12;
    MR_String program_representation_utils__Var_22;
    MR_String program_representation_utils__Var_24;
    MR_String program_representation_utils__Var_25;
    MR_String program_representation_utils__Var_27;

    {
      mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_5, &program_representation_utils__VarName_8);
    }
    program_representation_utils__InitialInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__VarMode_6, (MR_Integer) 0)));
    program_representation_utils__FinalInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__VarMode_6, (MR_Integer) 1)));
    switch (program_representation_utils__InitialInst_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        program_representation_utils__InitialInstStr_11 = (MR_String) "free";
        break;
      case (MR_Integer) 1:
        program_representation_utils__InitialInstStr_11 = (MR_String) "ground";
        break;
      case (MR_Integer) 2:
        program_representation_utils__InitialInstStr_11 = (MR_String) "other";
        break;
    }
    switch (program_representation_utils__FinalInst_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        program_representation_utils__FinalInstStr_12 = (MR_String) "free";
        break;
      case (MR_Integer) 1:
        program_representation_utils__FinalInstStr_12 = (MR_String) "ground";
        break;
      case (MR_Integer) 2:
        program_representation_utils__FinalInstStr_12 = (MR_String) "other";
        break;
    }
    {
      program_representation_utils__Var_22 = mercury__string__f_43_43_2_f_0(program_representation_utils__FinalInstStr_12, (MR_String) ")");
    }
    {
      program_representation_utils__Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", program_representation_utils__Var_22);
    }
    {
      program_representation_utils__Var_25 = mercury__string__f_43_43_2_f_0(program_representation_utils__InitialInstStr_11, program_representation_utils__Var_24);
    }
    {
      program_representation_utils__Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "::(", program_representation_utils__Var_25);
    }
    {
      *program_representation_utils__String_7 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_8, program_representation_utils__Var_27);
    }
  }
}

static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box * program_representation_utils__wrapper_arg_2)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv0_Strings_6;

    {
      program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) program_representation_utils__wrapper_arg_1), &program_representation_utils__conv0_Strings_6);
    }
    *program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv0_Strings_6));
  }
}

static void MR_CALL 
program_representation_utils__print_switch_to_strings_7_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_50,
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_49,
  MR_Word program_representation_utils__Info_1,
  MR_Integer program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__RevGoalPath_3,
  MR_Integer program_representation_utils__CaseNum_4,
  MR_Word program_representation_utils__HeadVar__5_5,
  MR_Word program_representation_utils__HeadVar__6_6,
  MR_Word * program_representation_utils__HeadVar__7_7)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *program_representation_utils__HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_58_58;
        MR_Word program_representation_utils__CaseRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word program_representation_utils__CaseReps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word program_representation_utils__DelimString_21;
        MR_Word program_representation_utils__MainConsIdArityRep_22;
        MR_Word program_representation_utils__OtherConsIdArityRep_23;
        MR_Word program_representation_utils__GoalRep_24;
        MR_Word program_representation_utils__ConsIdArityString_25;
        MR_Word program_representation_utils__OtherConsIdArityStrings_26;
        MR_Word program_representation_utils__RevSubGoalPath_27;
        MR_Word program_representation_utils__HeadGoalString_28;
        MR_Word program_representation_utils__TailCasesStrings_29;
        MR_Integer program_representation_utils__Var_33;
        MR_Word program_representation_utils__Var_35;
        MR_Integer program_representation_utils__Var_36;
        MR_Word program_representation_utils__Var_38;
        MR_Integer program_representation_utils__Var_40;
        MR_Integer program_representation_utils__Var_42;
        MR_Word program_representation_utils__Var_45;
        MR_Word program_representation_utils__Var_46;
        MR_Word program_representation_utils__Var_47;
        MR_Word program_representation_utils__Var_48;

        switch (program_representation_utils__HeadVar__6_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                program_representation_utils__DelimString_21 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word program_representation_utils__TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word program_representation_utils__Var_30;
              MR_Word program_representation_utils__Var_31;

              {
                program_representation_utils__Var_30 = program_representation_utils__indent_1_f_0(program_representation_utils__HeadVar__2_2);
              }
              {
                program_representation_utils__Var_31 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_53_53, ((MR_Box) ((MR_String) ";\n")));
              }
              {
                program_representation_utils__DelimString_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_53_53, program_representation_utils__Var_30, program_representation_utils__Var_31);
              }
            }
            break;
        }
        program_representation_utils__MainConsIdArityRep_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__CaseRep_17, (MR_Integer) 0)));
        program_representation_utils__OtherConsIdArityRep_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__CaseRep_17, (MR_Integer) 1)));
        program_representation_utils__GoalRep_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__CaseRep_17, (MR_Integer) 2)));
        program_representation_utils__Var_33 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
        {
          program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(program_representation_utils__Var_33, program_representation_utils__MainConsIdArityRep_22, &program_representation_utils__ConsIdArityString_25);
        }
        program_representation_utils__Var_36 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
        {
          program_representation_utils__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_35, 0) = ((MR_Box) (&program_representation_utils_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_35, 1) = ((MR_Box) (program_representation_utils__print_switch_to_strings_7_p_0_1));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_35, 3) = ((MR_Box) (program_representation_utils__Var_36));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0, (MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__Var_35, program_representation_utils__OtherConsIdArityRep_23, &program_representation_utils__OtherConsIdArityStrings_26);
        }
        {
          program_representation_utils__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), program_representation_utils__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), program_representation_utils__Var_38, 1) = ((MR_Box) (program_representation_utils__CaseNum_4));
          MR_hl_field(MR_mktag(3), program_representation_utils__Var_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          program_representation_utils__RevSubGoalPath_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_27, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_3));
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_27, 1) = ((MR_Box) (program_representation_utils__Var_38));
        }
        program_representation_utils__Var_40 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
        {
          program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_50, program_representation_utils__TypeClassInfo_for_goal_annotation_49, program_representation_utils__Info_1, program_representation_utils__Var_40, program_representation_utils__RevSubGoalPath_27, program_representation_utils__GoalRep_24, &program_representation_utils__HeadGoalString_28);
        }
        program_representation_utils__Var_42 = (program_representation_utils__CaseNum_4 + (MR_Integer) 1);
        {
          program_representation_utils__print_switch_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_50, program_representation_utils__TypeClassInfo_for_goal_annotation_49, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevGoalPath_3, program_representation_utils__Var_42, program_representation_utils__CaseReps_18, (MR_Integer) 1, &program_representation_utils__TailCasesStrings_29);
        }
        program_representation_utils__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_47 = mercury__cord__cord_list_to_cord_1_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__OtherConsIdArityStrings_26);
        }
        {
          program_representation_utils__Var_48 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__HeadGoalString_28, program_representation_utils__TailCasesStrings_29);
        }
        {
          program_representation_utils__Var_46 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__Var_47, program_representation_utils__Var_48);
        }
        {
          program_representation_utils__Var_45 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__ConsIdArityString_25, program_representation_utils__Var_46);
        }
        {
          *program_representation_utils__HeadVar__7_7 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_58_58, program_representation_utils__DelimString_21, program_representation_utils__Var_45);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_disj_to_strings_7_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_36,
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_35,
  MR_Word program_representation_utils__Info_1,
  MR_Integer program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__RevGoalPath_3,
  MR_Integer program_representation_utils__DisjNum_4,
  MR_Word program_representation_utils__HeadVar__5_5,
  MR_Word program_representation_utils__HeadVar__6_6,
  MR_Word * program_representation_utils__HeadVar__7_7)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *program_representation_utils__HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_40_40;
        MR_Word program_representation_utils__GoalRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word program_representation_utils__GoalReps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word program_representation_utils__DelimString_21;
        MR_Word program_representation_utils__RevSubGoalPath_22;
        MR_Word program_representation_utils__HeadGoalString_23;
        MR_Word program_representation_utils__TailGoalsString_24;
        MR_Word program_representation_utils__Var_28;
        MR_Integer program_representation_utils__Var_29;
        MR_Integer program_representation_utils__Var_31;
        MR_Word program_representation_utils__Var_34;

        switch (program_representation_utils__HeadVar__6_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                program_representation_utils__DelimString_21 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word program_representation_utils__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word program_representation_utils__Var_25;
              MR_Word program_representation_utils__Var_26;

              {
                program_representation_utils__Var_25 = program_representation_utils__indent_1_f_0(program_representation_utils__HeadVar__2_2);
              }
              {
                program_representation_utils__Var_26 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_39_39, ((MR_Box) ((MR_String) ";\n")));
              }
              {
                program_representation_utils__DelimString_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_39_39, program_representation_utils__Var_25, program_representation_utils__Var_26);
              }
            }
            break;
        }
        {
          program_representation_utils__Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), program_representation_utils__Var_28, 0) = ((MR_Box) (program_representation_utils__DisjNum_4));
        }
        {
          program_representation_utils__RevSubGoalPath_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_22, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_3));
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_22, 1) = ((MR_Box) (program_representation_utils__Var_28));
        }
        program_representation_utils__Var_29 = (program_representation_utils__HeadVar__2_2 + (MR_Integer) 1);
        {
          program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_36, program_representation_utils__TypeClassInfo_for_goal_annotation_35, program_representation_utils__Info_1, program_representation_utils__Var_29, program_representation_utils__RevSubGoalPath_22, program_representation_utils__GoalRep_17, &program_representation_utils__HeadGoalString_23);
        }
        program_representation_utils__Var_31 = (program_representation_utils__DisjNum_4 + (MR_Integer) 1);
        {
          program_representation_utils__print_disj_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_36, program_representation_utils__TypeClassInfo_for_goal_annotation_35, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevGoalPath_3, program_representation_utils__Var_31, program_representation_utils__GoalReps_18, (MR_Integer) 1, &program_representation_utils__TailGoalsString_24);
        }
        program_representation_utils__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_34 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_40, program_representation_utils__HeadGoalString_23, program_representation_utils__TailGoalsString_24);
        }
        {
          *program_representation_utils__HeadVar__7_7 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_40_40, program_representation_utils__DelimString_21, program_representation_utils__Var_34);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_conj_to_strings_2_6_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_32,
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_31,
  MR_Word program_representation_utils__Info_1,
  MR_Integer program_representation_utils__HeadVar__2_2,
  MR_Word program_representation_utils__RevGoalPath_3,
  MR_Integer program_representation_utils__ConjNum_4,
  MR_Word program_representation_utils__HeadVar__5_5,
  MR_Word * program_representation_utils__HeadVar__6_6)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *program_representation_utils__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_36_36;
        MR_Word program_representation_utils__GoalRep_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word program_representation_utils__GoalReps_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word program_representation_utils__RevSubGoalPath_18;
        MR_Word program_representation_utils__HeadGoalString_19;
        MR_Word program_representation_utils__TailGoalsString_20;
        MR_Word program_representation_utils__Separator_21;
        MR_Word program_representation_utils__Var_24;
        MR_Integer program_representation_utils__Var_25;
        MR_Word program_representation_utils__Var_30;

        {
          program_representation_utils__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), program_representation_utils__Var_24, 0) = ((MR_Box) (program_representation_utils__ConjNum_4));
        }
        {
          program_representation_utils__RevSubGoalPath_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_18, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_3));
          MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_18, 1) = ((MR_Box) (program_representation_utils__Var_24));
        }
        {
          program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__TypeClassInfo_for_goal_annotation_31, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevSubGoalPath_18, program_representation_utils__GoalRep_15, &program_representation_utils__HeadGoalString_19);
        }
        program_representation_utils__Var_25 = (program_representation_utils__ConjNum_4 + (MR_Integer) 1);
        {
          program_representation_utils__print_conj_to_strings_2_6_p_0(program_representation_utils__TypeInfo_for_T_32, program_representation_utils__TypeClassInfo_for_goal_annotation_31, program_representation_utils__Info_1, program_representation_utils__HeadVar__2_2, program_representation_utils__RevGoalPath_3, program_representation_utils__Var_25, program_representation_utils__GoalReps_16, &program_representation_utils__TailGoalsString_20);
        }
        if ((program_representation_utils__GoalReps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              program_representation_utils__Separator_21 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
          }
        else
          {
            MR_Word program_representation_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word program_representation_utils__Var_27;
            MR_Word program_representation_utils__Var_28;

            {
              program_representation_utils__Var_27 = program_representation_utils__indent_1_f_0(program_representation_utils__HeadVar__2_2);
            }
            {
              program_representation_utils__Var_28 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_35_35, ((MR_Box) ((MR_String) ",\n")));
            }
            {
              program_representation_utils__Separator_21 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__Var_27, program_representation_utils__Var_28);
            }
          }
        program_representation_utils__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_30 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_36_36, program_representation_utils__Separator_21, program_representation_utils__TailGoalsString_20);
        }
        {
          *program_representation_utils__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_36_36, program_representation_utils__HeadGoalString_19, program_representation_utils__Var_30);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_conj_to_strings_5_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_17,
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_16,
  MR_Word program_representation_utils__Info_6,
  MR_Integer program_representation_utils__Indent_7,
  MR_Word program_representation_utils__RevGoalPath_8,
  MR_Word program_representation_utils__GoalReps_9,
  MR_Word * program_representation_utils__Strings_10)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__GoalReps_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word program_representation_utils__Var_14;

        {
          program_representation_utils__Var_14 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
        }
        {
          *program_representation_utils__Strings_10 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__Var_14, ((MR_Box) ((MR_String) "true\n")));
        }
      }
    else
      {
        {
          program_representation_utils__print_conj_to_strings_2_6_p_0(program_representation_utils__TypeInfo_for_T_17, program_representation_utils__TypeClassInfo_for_goal_annotation_16, program_representation_utils__Info_6, program_representation_utils__Indent_7, program_representation_utils__RevGoalPath_8, (MR_Integer) 1, program_representation_utils__GoalReps_9, program_representation_utils__Strings_10);
        }
      }
  }
}

static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2)
{
  {
    MR_Box program_representation_utils__wrapper_arg_3;
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv2_HeadVar__3_196;

    {
      program_representation_utils__conv2_HeadVar__3_196 = program_representation_utils__IntroducedFrom__func__print_goal_to_strings__551__1_2_f_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2));
    }
    program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv2_HeadVar__3_196));
    return program_representation_utils__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1)
{
  {
    MR_Box program_representation_utils__wrapper_arg_2;
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv1_LambdaHeadVar__2_160;

    {
      program_representation_utils__conv1_LambdaHeadVar__2_160 = program_representation_utils__IntroducedFrom__func__print_goal_to_strings__549__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__closure, (MR_Integer) 3))), ((MR_Word) program_representation_utils__wrapper_arg_1));
    }
    program_representation_utils__wrapper_arg_2 = ((MR_Box) (program_representation_utils__conv1_LambdaHeadVar__2_160));
    return program_representation_utils__wrapper_arg_2;
  }
}

void MR_CALL 
program_representation_utils__print_goal_to_strings_5_p_0(
  MR_Word program_representation_utils__TypeInfo_for_T_178,
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_177,
  MR_Word program_representation_utils__Info_6,
  MR_Integer program_representation_utils__Indent_7,
  MR_Word program_representation_utils__RevGoalPath_8,
  MR_Word program_representation_utils__GoalRep_9,
  MR_Word * program_representation_utils__Strings_10)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__TypeCtorInfo_190_190;
    MR_Word program_representation_utils__GoalExprRep_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalRep_9, (MR_Integer) 0)));
    MR_Word program_representation_utils__DetismRep_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalRep_9, (MR_Integer) 1)));
    MR_Box program_representation_utils__AnnotationKey_13 = (MR_hl_field(MR_mktag(0), program_representation_utils__GoalRep_9, (MR_Integer) 2));
    MR_Word program_representation_utils__VarTable_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 1)));
    MR_Word program_representation_utils__ExprString_16;
    MR_Word program_representation_utils__LinePrefix_46;
    MR_Word program_representation_utils__ExtraLineForConjunctions_47;
    MR_Word program_representation_utils__DetismString_48;
    MR_Word program_representation_utils__DetismLine_49;
    MR_Word program_representation_utils__LookupAnnotation_50;
    MR_Box program_representation_utils__GoalAnnotation_51;
    MR_Word program_representation_utils__GoalAnnotationLines0_52;
    MR_Word program_representation_utils__GoalAnnotationLines_53;
    MR_String program_representation_utils__GoalPathString0_56;
    MR_String program_representation_utils__GoalPathString_57;
    MR_Word program_representation_utils__GoalPathLine_58;
    MR_Word program_representation_utils__Var_156;
    MR_Word program_representation_utils__Var_157;
    MR_Word program_representation_utils__Var_165;
    MR_Word program_representation_utils__Var_166;
    MR_Word program_representation_utils__Var_167;
    MR_Word program_representation_utils__Var_168;
    MR_Word program_representation_utils__Var_169;
    MR_Word program_representation_utils__Var_170;
    MR_Word program_representation_utils__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 0)));
    MR_Word program_representation_utils__Var_45;
    MR_Word program_representation_utils__Var_176;
    MR_Box MR_CALL (* program_representation_utils__func_0)(MR_Box, MR_Box);

    switch (MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word program_representation_utils__ConjGoalReps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));

          {
            program_representation_utils__print_conj_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Indent_7, program_representation_utils__RevGoalPath_8, program_representation_utils__ConjGoalReps_15, &program_representation_utils__ExprString_16);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word program_representation_utils__TypeCtorInfo_179_179;
          MR_Word program_representation_utils__DisjGoalReps_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));
          MR_Word program_representation_utils__DisjString_18;
          MR_Word program_representation_utils__Var_141;
          MR_Word program_representation_utils__Var_142;
          MR_Word program_representation_utils__Var_143;
          MR_Word program_representation_utils__Var_145;
          MR_Word program_representation_utils__Var_146;
          MR_Word program_representation_utils__Var_147;
          MR_Word program_representation_utils__Var_148;

          {
            program_representation_utils__print_disj_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Indent_7, program_representation_utils__RevGoalPath_8, (MR_Integer) 1, program_representation_utils__DisjGoalReps_17, (MR_Integer) 0, &program_representation_utils__DisjString_18);
          }
          program_representation_utils__TypeCtorInfo_179_179 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            program_representation_utils__Var_141 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
          {
            program_representation_utils__Var_143 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_179_179, ((MR_Box) ((MR_String) "(\n")));
          }
          {
            program_representation_utils__Var_147 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
          {
            program_representation_utils__Var_148 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_179_179, ((MR_Box) ((MR_String) ")\n")));
          }
          {
            program_representation_utils__Var_146 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__Var_147, program_representation_utils__Var_148);
          }
          {
            program_representation_utils__Var_145 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__DisjString_18, program_representation_utils__Var_146);
          }
          {
            program_representation_utils__Var_142 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__Var_143, program_representation_utils__Var_145);
          }
          {
            program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_179_179, program_representation_utils__Var_141, program_representation_utils__Var_142);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word program_representation_utils__TypeCtorInfo_181_181;
          MR_Integer program_representation_utils__SwitchVarRep_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));
          MR_Word program_representation_utils__CanFail_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
          MR_Word program_representation_utils__CasesRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
          MR_String program_representation_utils__SwitchVarName_22;
          MR_String program_representation_utils__SwitchOnString_23;
          MR_Word program_representation_utils__SwitchString_24;
          MR_String program_representation_utils__Var_118;
          MR_Integer program_representation_utils__Var_122;
          MR_Word program_representation_utils__Var_126;
          MR_Word program_representation_utils__Var_127;
          MR_Word program_representation_utils__Var_128;
          MR_Word program_representation_utils__Var_129;
          MR_Word program_representation_utils__Var_130;
          MR_Word program_representation_utils__Var_131;
          MR_Word program_representation_utils__Var_132;
          MR_Word program_representation_utils__Var_134;
          MR_Word program_representation_utils__Var_135;
          MR_Word program_representation_utils__Var_136;
          MR_Word program_representation_utils__Var_137;
          MR_String program_representation_utils__Var_199;
          MR_String program_representation_utils__Var_201;

          {
            mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_14, program_representation_utils__SwitchVarRep_19, &program_representation_utils__SwitchVarName_22);
          }
          {
            program_representation_utils__Var_118 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0, ((MR_Box) (program_representation_utils__CanFail_20)));
          }
          {
            program_representation_utils__Var_199 = mercury__string__f_43_43_2_f_0(program_representation_utils__SwitchVarName_22, (MR_String) "\n");
          }
          {
            program_representation_utils__Var_201 = mercury__string__f_43_43_2_f_0((MR_String) " switch on ", program_representation_utils__Var_199);
          }
          {
            program_representation_utils__SwitchOnString_23 = mercury__string__f_43_43_2_f_0(program_representation_utils__Var_118, program_representation_utils__Var_201);
          }
          program_representation_utils__Var_122 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
          {
            program_representation_utils__print_switch_to_strings_7_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Var_122, program_representation_utils__RevGoalPath_8, (MR_Integer) 1, program_representation_utils__CasesRep_21, (MR_Integer) 0, &program_representation_utils__SwitchString_24);
          }
          program_representation_utils__TypeCtorInfo_181_181 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            program_representation_utils__Var_126 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
          {
            program_representation_utils__Var_128 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_181_181, ((MR_Box) (program_representation_utils__SwitchOnString_23)));
          }
          {
            program_representation_utils__Var_130 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
          {
            program_representation_utils__Var_132 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_181_181, ((MR_Box) ((MR_String) "(\n")));
          }
          {
            program_representation_utils__Var_136 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
          {
            program_representation_utils__Var_137 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_181_181, ((MR_Box) ((MR_String) ")\n")));
          }
          {
            program_representation_utils__Var_135 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__Var_136, program_representation_utils__Var_137);
          }
          {
            program_representation_utils__Var_134 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__SwitchString_24, program_representation_utils__Var_135);
          }
          {
            program_representation_utils__Var_131 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__Var_132, program_representation_utils__Var_134);
          }
          {
            program_representation_utils__Var_129 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__Var_130, program_representation_utils__Var_131);
          }
          {
            program_representation_utils__Var_127 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__Var_128, program_representation_utils__Var_129);
          }
          {
            program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_181_181, program_representation_utils__Var_126, program_representation_utils__Var_127);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word program_representation_utils__TypeCtorInfo_182_182;
              MR_Word program_representation_utils__CondRep_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
              MR_Word program_representation_utils__ThenRep_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
              MR_Word program_representation_utils__ElseRep_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 3)));
              MR_Word program_representation_utils__RevGoalPathCond_28;
              MR_Word program_representation_utils__RevGoalPathThen_29;
              MR_Word program_representation_utils__RevGoalPathElse_30;
              MR_Word program_representation_utils__CondString_31;
              MR_Word program_representation_utils__ThenString_32;
              MR_Word program_representation_utils__ElseString_33;
              MR_Word program_representation_utils__IndentString_34;
              MR_Integer program_representation_utils__Var_92;
              MR_Integer program_representation_utils__Var_94;
              MR_Integer program_representation_utils__Var_96;
              MR_Word program_representation_utils__Var_98;
              MR_Word program_representation_utils__Var_99;
              MR_Word program_representation_utils__Var_101;
              MR_Word program_representation_utils__Var_102;
              MR_Word program_representation_utils__Var_103;
              MR_Word program_representation_utils__Var_104;
              MR_Word program_representation_utils__Var_106;
              MR_Word program_representation_utils__Var_107;
              MR_Word program_representation_utils__Var_108;
              MR_Word program_representation_utils__Var_109;
              MR_Word program_representation_utils__Var_111;
              MR_Word program_representation_utils__Var_112;
              MR_Word program_representation_utils__Var_113;

              {
                program_representation_utils__RevGoalPathCond_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathCond_28, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathCond_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                program_representation_utils__RevGoalPathThen_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathThen_29, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathThen_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              {
                program_representation_utils__RevGoalPathElse_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathElse_30, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevGoalPathElse_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              }
              program_representation_utils__Var_92 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
              {
                program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Var_92, program_representation_utils__RevGoalPathCond_28, program_representation_utils__CondRep_25, &program_representation_utils__CondString_31);
              }
              program_representation_utils__Var_94 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
              {
                program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Var_94, program_representation_utils__RevGoalPathThen_29, program_representation_utils__ThenRep_26, &program_representation_utils__ThenString_32);
              }
              program_representation_utils__Var_96 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
              {
                program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Var_96, program_representation_utils__RevGoalPathElse_30, program_representation_utils__ElseRep_27, &program_representation_utils__ElseString_33);
              }
              {
                program_representation_utils__IndentString_34 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
              }
              program_representation_utils__TypeCtorInfo_182_182 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                program_representation_utils__Var_99 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) "(\n")));
              }
              {
                program_representation_utils__Var_104 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) "->\n")));
              }
              {
                program_representation_utils__Var_109 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) ";\n")));
              }
              {
                program_representation_utils__Var_113 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_182_182, ((MR_Box) ((MR_String) ")\n")));
              }
              {
                program_representation_utils__Var_112 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__Var_113);
              }
              {
                program_representation_utils__Var_111 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__ElseString_33, program_representation_utils__Var_112);
              }
              {
                program_representation_utils__Var_108 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__Var_109, program_representation_utils__Var_111);
              }
              {
                program_representation_utils__Var_107 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__Var_108);
              }
              {
                program_representation_utils__Var_106 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__ThenString_32, program_representation_utils__Var_107);
              }
              {
                program_representation_utils__Var_103 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__Var_104, program_representation_utils__Var_106);
              }
              {
                program_representation_utils__Var_102 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__Var_103);
              }
              {
                program_representation_utils__Var_101 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__CondString_31, program_representation_utils__Var_102);
              }
              {
                program_representation_utils__Var_98 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__Var_99, program_representation_utils__Var_101);
              }
              {
                program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_182_182, program_representation_utils__IndentString_34, program_representation_utils__Var_98);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word program_representation_utils__TypeCtorInfo_183_183;
              MR_Word program_representation_utils__SubGoalRep_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
              MR_Word program_representation_utils__RevSubGoalPath_36;
              MR_Word program_representation_utils__SubGoalString_37;
              MR_Integer program_representation_utils__Var_78;
              MR_Word program_representation_utils__Var_80;
              MR_Word program_representation_utils__Var_81;
              MR_Word program_representation_utils__Var_82;
              MR_Word program_representation_utils__Var_84;
              MR_Word program_representation_utils__Var_85;
              MR_Word program_representation_utils__Var_86;
              MR_Word program_representation_utils__Var_87;

              {
                program_representation_utils__RevSubGoalPath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_36, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              program_representation_utils__Var_78 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
              {
                program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Var_78, program_representation_utils__RevSubGoalPath_36, program_representation_utils__SubGoalRep_35, &program_representation_utils__SubGoalString_37);
              }
              program_representation_utils__TypeCtorInfo_183_183 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                program_representation_utils__Var_80 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
              }
              {
                program_representation_utils__Var_82 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_183_183, ((MR_Box) ((MR_String) "not (\n")));
              }
              {
                program_representation_utils__Var_86 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
              }
              {
                program_representation_utils__Var_87 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_183_183, ((MR_Box) ((MR_String) ")\n")));
              }
              {
                program_representation_utils__Var_85 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__Var_86, program_representation_utils__Var_87);
              }
              {
                program_representation_utils__Var_84 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__SubGoalString_37, program_representation_utils__Var_85);
              }
              {
                program_representation_utils__Var_81 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__Var_82, program_representation_utils__Var_84);
              }
              {
                program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_183_183, program_representation_utils__Var_80, program_representation_utils__Var_81);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word program_representation_utils__TypeCtorInfo_186_186;
              MR_Word program_representation_utils__MaybeCut_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
              MR_Word program_representation_utils__CutString_39;
              MR_Word program_representation_utils__Var_61;
              MR_Integer program_representation_utils__Var_62;
              MR_Word program_representation_utils__Var_64;
              MR_Word program_representation_utils__Var_65;
              MR_Word program_representation_utils__Var_66;
              MR_Word program_representation_utils__Var_68;
              MR_Word program_representation_utils__Var_69;
              MR_Word program_representation_utils__Var_70;
              MR_Word program_representation_utils__Var_72;
              MR_Word program_representation_utils__Var_73;
              MR_Word program_representation_utils__Var_74;
              MR_Word program_representation_utils__Var_75;
              MR_Word program_representation_utils__SubGoalRep_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
              MR_Word program_representation_utils__RevSubGoalPath_172;
              MR_Word program_representation_utils__SubGoalString_173;

              switch (program_representation_utils__MaybeCut_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      program_representation_utils__CutString_39 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) " cut")));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      program_representation_utils__CutString_39 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                    }
                  }
                  break;
              }
              {
                program_representation_utils__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), program_representation_utils__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), program_representation_utils__Var_61, 1) = ((MR_Box) (program_representation_utils__MaybeCut_38));
              }
              {
                program_representation_utils__RevSubGoalPath_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_172, 0) = ((MR_Box) (program_representation_utils__RevGoalPath_8));
                MR_hl_field(MR_mktag(1), program_representation_utils__RevSubGoalPath_172, 1) = ((MR_Box) (program_representation_utils__Var_61));
              }
              program_representation_utils__Var_62 = (program_representation_utils__Indent_7 + (MR_Integer) 1);
              {
                program_representation_utils__print_goal_to_strings_5_p_0(program_representation_utils__TypeInfo_for_T_178, program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__Info_6, program_representation_utils__Var_62, program_representation_utils__RevSubGoalPath_172, program_representation_utils__SubGoalRep_171, &program_representation_utils__SubGoalString_173);
              }
              program_representation_utils__TypeCtorInfo_186_186 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                program_representation_utils__Var_64 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
              }
              {
                program_representation_utils__Var_66 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_186_186, ((MR_Box) ((MR_String) "scope")));
              }
              {
                program_representation_utils__Var_70 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_186_186, ((MR_Box) ((MR_String) " (\n")));
              }
              {
                program_representation_utils__Var_74 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
              }
              {
                program_representation_utils__Var_75 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_186_186, ((MR_Box) ((MR_String) ")\n")));
              }
              {
                program_representation_utils__Var_73 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__Var_74, program_representation_utils__Var_75);
              }
              {
                program_representation_utils__Var_72 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__SubGoalString_173, program_representation_utils__Var_73);
              }
              {
                program_representation_utils__Var_69 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__Var_70, program_representation_utils__Var_72);
              }
              {
                program_representation_utils__Var_68 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__CutString_39, program_representation_utils__Var_69);
              }
              {
                program_representation_utils__Var_65 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__Var_66, program_representation_utils__Var_68);
              }
              {
                program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_186_186, program_representation_utils__Var_64, program_representation_utils__Var_65);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word program_representation_utils__AtomicGoalRep_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 4)));
              MR_Word program_representation_utils__ExprString0_44;
              MR_Word program_representation_utils__Var_59;
              MR_String program_representation_utils___FileName_40 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 1)));
              MR_Integer program_representation_utils___LineNumber_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 2)));
              MR_Word program_representation_utils___BoundVars_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__GoalExprRep_11, (MR_Integer) 3)));

              {
                program_representation_utils__print_atomic_goal_to_strings_3_p_0(program_representation_utils__VarTable_14, program_representation_utils__AtomicGoalRep_43, &program_representation_utils__ExprString0_44);
              }
              {
                program_representation_utils__Var_59 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
              }
              {
                program_representation_utils__ExprString_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__Var_59, program_representation_utils__ExprString0_44);
              }
            }
            break;
        }
        break;
    }
    program_representation_utils__succeeded = ((MR_tag((MR_Word) program_representation_utils__GoalExprRep_11)) == (MR_mktag((MR_Integer) 0)));
    if (program_representation_utils__succeeded)
      {
        program_representation_utils__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__GoalExprRep_11, (MR_Integer) 0)));
        {
          MR_Word program_representation_utils__TypeCtorInfo_188_188 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          MR_Word program_representation_utils__Var_150;
          MR_Word program_representation_utils__Var_151;

          {
            program_representation_utils__Var_150 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
          }
          {
            program_representation_utils__Var_151 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_188_188, ((MR_Box) ((MR_String) "% conjunction: ")));
          }
          {
            program_representation_utils__LinePrefix_46 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_188_188, program_representation_utils__Var_150, program_representation_utils__Var_151);
          }
          {
            program_representation_utils__ExtraLineForConjunctions_47 = program_representation_utils__nl_0_f_0();
          }
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_189_189 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word program_representation_utils__Var_153;
        MR_Word program_representation_utils__Var_154;

        {
          program_representation_utils__Var_153 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_7);
        }
        {
          program_representation_utils__Var_154 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_189_189, ((MR_Box) ((MR_String) "% ")));
        }
        {
          program_representation_utils__LinePrefix_46 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_189_189, program_representation_utils__Var_153, program_representation_utils__Var_154);
        }
        {
          program_representation_utils__ExtraLineForConjunctions_47 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_189_189);
        }
      }
    {
      program_representation_utils__detism_to_string_2_p_0(program_representation_utils__DetismRep_12, &program_representation_utils__DetismString_48);
    }
    program_representation_utils__TypeCtorInfo_190_190 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      program_representation_utils__Var_157 = program_representation_utils__nl_0_f_0();
    }
    {
      program_representation_utils__Var_156 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__DetismString_48, program_representation_utils__Var_157);
    }
    {
      program_representation_utils__DetismLine_49 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__LinePrefix_46, program_representation_utils__Var_156);
    }
    program_representation_utils__LookupAnnotation_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 0)));
    program_representation_utils__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__Info_6, (MR_Integer) 1)));
    program_representation_utils__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), program_representation_utils__LookupAnnotation_50, (MR_Integer) 1)));
    {
      program_representation_utils__GoalAnnotation_51 = program_representation_utils__func_0(((MR_Box) program_representation_utils__LookupAnnotation_50), program_representation_utils__AnnotationKey_13);
    }
    {
      program_representation_utils__print_goal_annotation_to_strings_3_p_0(program_representation_utils__TypeClassInfo_for_goal_annotation_177, program_representation_utils__VarTable_14, program_representation_utils__GoalAnnotation_51, &program_representation_utils__GoalAnnotationLines0_52);
    }
    {
      program_representation_utils__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &program_representation_utils_scalar_common_1[0], program_representation_utils__GoalAnnotationLines0_52);
    }
    if (program_representation_utils__succeeded)
      {
        program_representation_utils__GoalAnnotationLines_53 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_190_190);
      }
    else
      {
        MR_Word program_representation_utils__TypeInfo_192_192 = (MR_Word) &program_representation_utils_scalar_common_1[0];
        MR_Word program_representation_utils__GoalAnnotationLines1_54;
        MR_Word program_representation_utils__Var_158;
        MR_Word program_representation_utils__Var_164;
        MR_Box program_representation_utils__conv3_GoalAnnotationLines_53;

        {
          program_representation_utils__Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_158, 0) = ((MR_Box) (&program_representation_utils_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_158, 1) = ((MR_Box) (program_representation_utils__print_goal_to_strings_5_p_0_1));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_158, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), program_representation_utils__Var_158, 3) = ((MR_Box) (program_representation_utils__LinePrefix_46));
        }
        {
          program_representation_utils__GoalAnnotationLines1_54 = mercury__cord__map_2_f_0(program_representation_utils__TypeInfo_192_192, program_representation_utils__TypeInfo_192_192, program_representation_utils__Var_158, program_representation_utils__GoalAnnotationLines0_52);
        }
        {
          program_representation_utils__Var_164 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_190_190);
        }
        {
          program_representation_utils__conv3_GoalAnnotationLines_53 = mercury__cord__foldr_3_f_0(program_representation_utils__TypeInfo_192_192, program_representation_utils__TypeInfo_192_192, (MR_Word) &program_representation_utils_scalar_common_2[7], program_representation_utils__GoalAnnotationLines1_54, ((MR_Box) (program_representation_utils__Var_164)));
        }
        program_representation_utils__GoalAnnotationLines_53 = ((MR_Word) program_representation_utils__conv3_GoalAnnotationLines_53);
      }
    {
      program_representation_utils__GoalPathString0_56 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(program_representation_utils__RevGoalPath_8);
    }
    program_representation_utils__succeeded = (strcmp(program_representation_utils__GoalPathString0_56, (MR_String) "") == 0);
    if (program_representation_utils__succeeded)
      program_representation_utils__GoalPathString_57 = (MR_String) "root goal";
    else
      program_representation_utils__GoalPathString_57 = program_representation_utils__GoalPathString0_56;
    {
      program_representation_utils__Var_166 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_190_190, ((MR_Box) (program_representation_utils__GoalPathString_57)));
    }
    {
      program_representation_utils__Var_167 = program_representation_utils__nl_0_f_0();
    }
    {
      program_representation_utils__Var_165 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__Var_166, program_representation_utils__Var_167);
    }
    {
      program_representation_utils__GoalPathLine_58 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__LinePrefix_46, program_representation_utils__Var_165);
    }
    {
      program_representation_utils__Var_170 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__ExtraLineForConjunctions_47, program_representation_utils__ExprString_16);
    }
    {
      program_representation_utils__Var_169 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__GoalAnnotationLines_53, program_representation_utils__Var_170);
    }
    {
      program_representation_utils__Var_168 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__DetismLine_49, program_representation_utils__Var_169);
    }
    {
      *program_representation_utils__Strings_10 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_190_190, program_representation_utils__GoalPathLine_58, program_representation_utils__Var_168);
    }
  }
}

void MR_CALL 
program_representation_utils__print_goal_annotation_to_strings_3_p_0(
  MR_Word program_representation_utils__TypeClassInfo_for_goal_annotation_4,
  MR_Word program_representation_utils__HeadVar__1_1,
  MR_Box program_representation_utils__HeadVar__2_2,
  MR_Word * program_representation_utils__HeadVar__3_3)
{
  {
    MR_bool program_representation_utils__succeeded;
    void MR_CALL (* program_representation_utils__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), program_representation_utils__TypeClassInfo_for_goal_annotation_4, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box program_representation_utils__conv1_HeadVar__3_3;

    {
      program_representation_utils__func_0(((MR_Box) program_representation_utils__TypeClassInfo_for_goal_annotation_4), ((MR_Box) (program_representation_utils__HeadVar__1_1)), program_representation_utils__HeadVar__2_2, &program_representation_utils__conv1_HeadVar__3_3);
    }
    *program_representation_utils__HeadVar__3_3 = ((MR_Word) program_representation_utils__conv1_HeadVar__3_3);
  }
}

static void MR_CALL 
program_representation_utils__detism_to_string_2_p_0(
  MR_Word program_representation_utils__Detism_3,
  MR_Word * program_representation_utils__DetismStrCord_4)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_String program_representation_utils__DetismStr_5 = ((&program_representation_utils_vector_common_6[0 + program_representation_utils__Detism_3]))->program_representation_utils__vector_common_type_6_0__vct_6_f_0;

    {
      *program_representation_utils__DetismStrCord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__DetismStr_5)));
    }
  }
}

static void MR_CALL 
program_representation_utils__print_atomic_goal_to_strings_3_p_0(
  MR_Word program_representation_utils__VarTable_4,
  MR_Word program_representation_utils__AtomicGoalRep_5,
  MR_Word * program_representation_utils__Strings_6)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__Strings0_14;
    MR_Word program_representation_utils__Var_112;

    switch (MR_tag((MR_Word) program_representation_utils__AtomicGoalRep_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer program_representation_utils__VarRep_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)));
          MR_String program_representation_utils__ConsIdRep_8 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
          MR_Word program_representation_utils__ArgReps_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
          MR_String program_representation_utils__VarName_11;
          MR_String program_representation_utils__UnifyString_12;
          MR_Word program_representation_utils__ArgsString_13;
          MR_String program_representation_utils__Var_240;
          MR_String program_representation_utils__Var_241;
          MR_String program_representation_utils__Var_243;

          {
            mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_7, &program_representation_utils__VarName_11);
          }
          {
            program_representation_utils__Var_240 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__ConsIdRep_8);
          }
          {
            program_representation_utils__Var_241 = mercury__string__f_43_43_2_f_0((MR_String) "<=", program_representation_utils__Var_240);
          }
          {
            program_representation_utils__Var_243 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__Var_241);
          }
          {
            program_representation_utils__UnifyString_12 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_11, program_representation_utils__Var_243);
          }
          {
            program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__ArgReps_9, &program_representation_utils__ArgsString_13);
          }
          {
            program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_12)), program_representation_utils__ArgsString_13);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer program_representation_utils__VarRep_214 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)));
          MR_String program_representation_utils__ConsIdRep_215 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
          MR_Word program_representation_utils__ArgReps_216 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
          MR_String program_representation_utils__VarName_218;
          MR_String program_representation_utils__UnifyString_219;
          MR_Word program_representation_utils__ArgsString_220;
          MR_String program_representation_utils__Var_235;
          MR_String program_representation_utils__Var_236;
          MR_String program_representation_utils__Var_238;

          {
            mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_214, &program_representation_utils__VarName_218);
          }
          {
            program_representation_utils__Var_235 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__ConsIdRep_215);
          }
          {
            program_representation_utils__Var_236 = mercury__string__f_43_43_2_f_0((MR_String) "=>", program_representation_utils__Var_235);
          }
          {
            program_representation_utils__Var_238 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__Var_236);
          }
          {
            program_representation_utils__UnifyString_219 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_218, program_representation_utils__Var_238);
          }
          {
            program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__ArgReps_216, &program_representation_utils__ArgsString_220);
          }
          {
            program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_219)), program_representation_utils__ArgsString_220);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word program_representation_utils__MaybeArgReps_193 = ((MR_Word) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
          MR_Integer program_representation_utils__VarRep_203 = ((MR_Integer) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)));
          MR_String program_representation_utils__ConsIdRep_204 = ((MR_String) (MR_hl_field(MR_mktag(2), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
          MR_String program_representation_utils__VarName_206;
          MR_String program_representation_utils__UnifyString_207;
          MR_Word program_representation_utils__ArgsString_208;
          MR_String program_representation_utils__Var_249;
          MR_String program_representation_utils__Var_250;
          MR_String program_representation_utils__Var_252;

          {
            mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_203, &program_representation_utils__VarName_206);
          }
          {
            program_representation_utils__Var_249 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__ConsIdRep_204);
          }
          {
            program_representation_utils__Var_250 = mercury__string__f_43_43_2_f_0((MR_String) "=>", program_representation_utils__Var_249);
          }
          {
            program_representation_utils__Var_252 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__Var_250);
          }
          {
            program_representation_utils__UnifyString_207 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_206, program_representation_utils__Var_252);
          }
          {
            program_representation_utils__print_args_to_strings__ho3_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__MaybeArgReps_193, &program_representation_utils__ArgsString_208);
          }
          {
            program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_207)), program_representation_utils__ArgsString_208);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word program_representation_utils__MaybeArgReps_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
              MR_Integer program_representation_utils__VarRep_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_String program_representation_utils__ConsIdRep_114 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
              MR_String program_representation_utils__VarName_116;
              MR_String program_representation_utils__UnifyString_117;
              MR_Word program_representation_utils__ArgsString_118;
              MR_String program_representation_utils__Var_254;
              MR_String program_representation_utils__Var_255;
              MR_String program_representation_utils__Var_257;

              {
                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__VarRep_113, &program_representation_utils__VarName_116);
              }
              {
                program_representation_utils__Var_254 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__ConsIdRep_114);
              }
              {
                program_representation_utils__Var_255 = mercury__string__f_43_43_2_f_0((MR_String) "<=", program_representation_utils__Var_254);
              }
              {
                program_representation_utils__Var_257 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__Var_255);
              }
              {
                program_representation_utils__UnifyString_117 = mercury__string__f_43_43_2_f_0(program_representation_utils__VarName_116, program_representation_utils__Var_257);
              }
              {
                program_representation_utils__print_args_to_strings__ho3_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__MaybeArgReps_15, &program_representation_utils__ArgsString_118);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__UnifyString_117)), program_representation_utils__ArgsString_118);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer program_representation_utils__TargetRep_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_Integer program_representation_utils__SourceRep_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
              MR_String program_representation_utils__TargetName_18;
              MR_String program_representation_utils__SourceName_19;
              MR_String program_representation_utils__String_20;
              MR_String program_representation_utils__Var_245;

              {
                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TargetRep_16, &program_representation_utils__TargetName_18);
              }
              {
                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__SourceRep_17, &program_representation_utils__SourceName_19);
              }
              {
                program_representation_utils__Var_245 = mercury__string__f_43_43_2_f_0((MR_String) " := ", program_representation_utils__SourceName_19);
              }
              {
                program_representation_utils__String_20 = mercury__string__f_43_43_2_f_0(program_representation_utils__TargetName_18, program_representation_utils__Var_245);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__String_20)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer program_representation_utils__TargetRep_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_Integer program_representation_utils__SourceRep_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
              MR_String program_representation_utils__TargetName_121;
              MR_String program_representation_utils__SourceName_122;
              MR_String program_representation_utils__String_123;
              MR_String program_representation_utils__Var_274;
              MR_String program_representation_utils__Var_275;

              {
                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TargetRep_119, &program_representation_utils__TargetName_121);
              }
              {
                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__SourceRep_120, &program_representation_utils__SourceName_122);
              }
              {
                program_representation_utils__Var_274 = mercury__string__f_43_43_2_f_0((MR_String) " to ", program_representation_utils__TargetName_121);
              }
              {
                program_representation_utils__Var_275 = mercury__string__f_43_43_2_f_0(program_representation_utils__SourceName_122, program_representation_utils__Var_274);
              }
              {
                program_representation_utils__String_123 = mercury__string__f_43_43_2_f_0((MR_String) "cast ", program_representation_utils__Var_275);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__String_123)));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer program_representation_utils__TargetRep_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_Integer program_representation_utils__SourceRep_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
              MR_String program_representation_utils__TargetName_126;
              MR_String program_representation_utils__SourceName_127;
              MR_String program_representation_utils__String_128;
              MR_String program_representation_utils__Var_233;

              {
                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TargetRep_124, &program_representation_utils__TargetName_126);
              }
              {
                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__SourceRep_125, &program_representation_utils__SourceName_127);
              }
              {
                program_representation_utils__Var_233 = mercury__string__f_43_43_2_f_0((MR_String) " == ", program_representation_utils__TargetName_126);
              }
              {
                program_representation_utils__String_128 = mercury__string__f_43_43_2_f_0(program_representation_utils__SourceName_127, program_representation_utils__Var_233);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__String_128)));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word program_representation_utils__TypeCtorInfo_163_163;
              MR_Word program_representation_utils__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_Word program_representation_utils__Var_71;
              MR_Word program_representation_utils__Var_73;
              MR_Word program_representation_utils__Var_74;
              MR_Word program_representation_utils__ArgsString_129;

              {
                program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_21, &program_representation_utils__ArgsString_129);
              }
              program_representation_utils__TypeCtorInfo_163_163 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                program_representation_utils__Var_71 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_163_163, ((MR_Box) ((MR_String) "foreign_proc(")));
              }
              {
                program_representation_utils__Var_74 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_163_163, ((MR_Box) ((MR_String) ")")));
              }
              {
                program_representation_utils__Var_73 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_163_163, program_representation_utils__ArgsString_129, program_representation_utils__Var_74);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_163_163, program_representation_utils__Var_71, program_representation_utils__Var_73);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word program_representation_utils__TypeCtorInfo_168_168;
              MR_Integer program_representation_utils__HOVarRep_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_String program_representation_utils__HOVarName_23;
              MR_String program_representation_utils__HeadString_24;
              MR_Word program_representation_utils__Var_66;
              MR_Word program_representation_utils__Var_67;
              MR_Word program_representation_utils__Var_68;
              MR_Word program_representation_utils__ArgsString_130;
              MR_Word program_representation_utils__Args_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));

              {
                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__HOVarRep_22, &program_representation_utils__HOVarName_23);
              }
              {
                program_representation_utils__HeadString_24 = mercury__string__f_43_43_2_f_0(program_representation_utils__HOVarName_23, (MR_String) "(");
              }
              {
                program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_131, &program_representation_utils__ArgsString_130);
              }
              program_representation_utils__TypeCtorInfo_168_168 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                program_representation_utils__Var_66 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_168_168, ((MR_Box) (program_representation_utils__HeadString_24)));
              }
              {
                program_representation_utils__Var_68 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_168_168, ((MR_Box) ((MR_String) ")")));
              }
              {
                program_representation_utils__Var_67 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_168_168, program_representation_utils__ArgsString_130, program_representation_utils__Var_68);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_168_168, program_representation_utils__Var_66, program_representation_utils__Var_67);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word program_representation_utils__TypeCtorInfo_173_173;
              MR_Integer program_representation_utils__TCIVarRep_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_Integer program_representation_utils__MethodNumber_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
              MR_String program_representation_utils__TCIVarName_27;
              MR_Word program_representation_utils__Var_57;
              MR_Word program_representation_utils__Var_58;
              MR_Word program_representation_utils__Var_59;
              MR_Word program_representation_utils__ArgsString_132;
              MR_Word program_representation_utils__Args_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
              MR_String program_representation_utils__HeadString_134;
              MR_String program_representation_utils__Var_259;
              MR_String program_representation_utils__Var_261;
              MR_String program_representation_utils__Var_262;
              MR_String program_representation_utils__Var_269;

              {
                mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_4, program_representation_utils__TCIVarRep_25, &program_representation_utils__TCIVarName_27);
              }
              {
                program_representation_utils__Var_259 = mercury__string__f_43_43_2_f_0(program_representation_utils__TCIVarName_27, (MR_String) "(");
              }
              {
                program_representation_utils__Var_261 = mercury__string__f_43_43_2_f_0((MR_String) " of ", program_representation_utils__Var_259);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &program_representation_utils_scalar_common_5[0], program_representation_utils__MethodNumber_26, &program_representation_utils__Var_262);
              }
              {
                program_representation_utils__Var_269 = mercury__string__f_43_43_2_f_0(program_representation_utils__Var_262, program_representation_utils__Var_261);
              }
              {
                program_representation_utils__HeadString_134 = mercury__string__f_43_43_2_f_0((MR_String) "method ", program_representation_utils__Var_269);
              }
              {
                program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_133, &program_representation_utils__ArgsString_132);
              }
              program_representation_utils__TypeCtorInfo_173_173 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                program_representation_utils__Var_57 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_173_173, ((MR_Box) (program_representation_utils__HeadString_134)));
              }
              {
                program_representation_utils__Var_59 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_173_173, ((MR_Box) ((MR_String) ")")));
              }
              {
                program_representation_utils__Var_58 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_173_173, program_representation_utils__ArgsString_132, program_representation_utils__Var_59);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_173_173, program_representation_utils__Var_57, program_representation_utils__Var_58);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String program_representation_utils__Module_28 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_String program_representation_utils__Pred_29 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
              MR_Word program_representation_utils__ArgsString_135;
              MR_Word program_representation_utils__Args_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
              MR_String program_representation_utils__HeadString_137;
              MR_String program_representation_utils__Var_247;

              {
                program_representation_utils__Var_247 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__Pred_29);
              }
              {
                program_representation_utils__HeadString_137 = mercury__string__f_43_43_2_f_0(program_representation_utils__Module_28, program_representation_utils__Var_247);
              }
              {
                program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_136, &program_representation_utils__ArgsString_135);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__HeadString_137)), program_representation_utils__ArgsString_135);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word program_representation_utils__ArgsString_138;
              MR_Word program_representation_utils__Args_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 3)));
              MR_String program_representation_utils__HeadString_140;
              MR_String program_representation_utils__Module_141 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_String program_representation_utils__Pred_142 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
              MR_String program_representation_utils__Var_278;
              MR_String program_representation_utils__Var_279;

              {
                program_representation_utils__Var_278 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__Pred_142);
              }
              {
                program_representation_utils__Var_279 = mercury__string__f_43_43_2_f_0(program_representation_utils__Module_141, program_representation_utils__Var_278);
              }
              {
                program_representation_utils__HeadString_140 = mercury__string__f_43_43_2_f_0((MR_String) "builtin ", program_representation_utils__Var_279);
              }
              {
                program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_139, &program_representation_utils__ArgsString_138);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__HeadString_140)), program_representation_utils__ArgsString_138);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String program_representation_utils__Event_30 = ((MR_String) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 1)));
              MR_Word program_representation_utils__ArgsString_143;
              MR_Word program_representation_utils__Args_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), program_representation_utils__AtomicGoalRep_5, (MR_Integer) 2)));
              MR_String program_representation_utils__HeadString_145;

              {
                program_representation_utils__HeadString_145 = mercury__string__f_43_43_2_f_0((MR_String) "event ", program_representation_utils__Event_30);
              }
              {
                program_representation_utils__print_args_to_strings__ho2_4_p_0(program_representation_utils__VarTable_4, program_representation_utils__Args_144, &program_representation_utils__ArgsString_143);
              }
              {
                program_representation_utils__Strings0_14 = mercury__cord__cons_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (program_representation_utils__HeadString_145)), program_representation_utils__ArgsString_143);
              }
            }
            break;
        }
        break;
    }
    {
      program_representation_utils__Var_112 = program_representation_utils__nl_0_f_0();
    }
    {
      *program_representation_utils__Strings_6 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__Strings0_14, program_representation_utils__Var_112);
    }
  }
}

static void MR_CALL 
program_representation_utils__print_args_to_strings__ho3_4_p_0(
  MR_Word program_representation_utils__VarTable_6,
  MR_Word program_representation_utils__Args_7,
  MR_Word * program_representation_utils__Strings_8)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *program_representation_utils__Strings_8 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word program_representation_utils__TypeCtorInfo_22_36;
        MR_Word program_representation_utils__ArgsStr_11;
        MR_Word program_representation_utils__Var_12;
        MR_Word program_representation_utils__Var_14;
        MR_Word program_representation_utils__Arg_25;
        MR_Word program_representation_utils__Args_26;
        MR_String program_representation_utils__ArgName_29;
        MR_Word program_representation_utils__ArgsString_30;
        MR_Word program_representation_utils__Var_31;
        MR_Word program_representation_utils__Var_33;

        {
          program_representation_utils__Var_12 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_18);
        }
        program_representation_utils__Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 0)));
        program_representation_utils__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 1)));
        if ((program_representation_utils__Arg_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          program_representation_utils__ArgName_29 = (MR_String) "_";
        else
          {
            MR_Integer program_representation_utils__VarRep_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__Arg_25, (MR_Integer) 0)));

            {
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_6, program_representation_utils__VarRep_39, &program_representation_utils__ArgName_29);
            }
          }
        program_representation_utils__TypeCtorInfo_22_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_31 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) ((MR_String) ", ")));
        }
        {
          program_representation_utils__print_args_2_to_strings__ho7_5_p_0(program_representation_utils__VarTable_6, program_representation_utils__Args_26, program_representation_utils__Var_31, &program_representation_utils__ArgsString_30);
        }
        {
          program_representation_utils__Var_33 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) (program_representation_utils__ArgName_29)), program_representation_utils__ArgsString_30);
        }
        {
          program_representation_utils__ArgsStr_11 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_36, program_representation_utils__Var_12, program_representation_utils__Var_33);
        }
        {
          program_representation_utils__Var_14 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_18, program_representation_utils__ArgsStr_11, ((MR_Box) ((MR_String) ")")));
        }
        {
          *program_representation_utils__Strings_8 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_18, ((MR_Box) ((MR_String) "(")), program_representation_utils__Var_14);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho7_5_p_0(
  MR_Word program_representation_utils__VarTable_2,
  MR_Word program_representation_utils__HeadVar__3_3,
  MR_Word program_representation_utils__Prefix_4,
  MR_Word * program_representation_utils__HeadVar__5_5)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *program_representation_utils__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_22_22;
        MR_Word program_representation_utils__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word program_representation_utils__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
        MR_String program_representation_utils__ArgName_15;
        MR_Word program_representation_utils__ArgsString_16;
        MR_Word program_representation_utils__Var_17;
        MR_Word program_representation_utils__Var_19;

        if ((program_representation_utils__Arg_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          program_representation_utils__ArgName_15 = (MR_String) "_";
        else
          {
            MR_Integer program_representation_utils__VarRep_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__Arg_11, (MR_Integer) 0)));

            {
              mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_2, program_representation_utils__VarRep_25, &program_representation_utils__ArgName_15);
            }
          }
        program_representation_utils__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_17 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) ", ")));
        }
        {
          program_representation_utils__print_args_2_to_strings__ho7_5_p_0(program_representation_utils__VarTable_2, program_representation_utils__Args_12, program_representation_utils__Var_17, &program_representation_utils__ArgsString_16);
        }
        {
          program_representation_utils__Var_19 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) (program_representation_utils__ArgName_15)), program_representation_utils__ArgsString_16);
        }
        {
          *program_representation_utils__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_22, program_representation_utils__Prefix_4, program_representation_utils__Var_19);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_args_to_strings__ho2_4_p_0(
  MR_Word program_representation_utils__VarTable_6,
  MR_Word program_representation_utils__Args_7,
  MR_Word * program_representation_utils__Strings_8)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *program_representation_utils__Strings_8 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word program_representation_utils__TypeCtorInfo_22_36;
        MR_Word program_representation_utils__ArgsStr_11;
        MR_Word program_representation_utils__Var_12;
        MR_Word program_representation_utils__Var_14;
        MR_Integer program_representation_utils__Arg_25;
        MR_Word program_representation_utils__Args_26;
        MR_String program_representation_utils__ArgName_29;
        MR_Word program_representation_utils__ArgsString_30;
        MR_Word program_representation_utils__Var_31;
        MR_Word program_representation_utils__Var_33;

        {
          program_representation_utils__Var_12 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_18_18);
        }
        program_representation_utils__Arg_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 0)));
        program_representation_utils__Args_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__Args_7, (MR_Integer) 1)));
        {
          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_6, program_representation_utils__Arg_25, &program_representation_utils__ArgName_29);
        }
        program_representation_utils__TypeCtorInfo_22_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_31 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) ((MR_String) ", ")));
        }
        {
          program_representation_utils__print_args_2_to_strings__ho8_5_p_0(program_representation_utils__VarTable_6, program_representation_utils__Args_26, program_representation_utils__Var_31, &program_representation_utils__ArgsString_30);
        }
        {
          program_representation_utils__Var_33 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_36, ((MR_Box) (program_representation_utils__ArgName_29)), program_representation_utils__ArgsString_30);
        }
        {
          program_representation_utils__ArgsStr_11 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_36, program_representation_utils__Var_12, program_representation_utils__Var_33);
        }
        {
          program_representation_utils__Var_14 = mercury__cord__snoc_2_f_0(program_representation_utils__TypeCtorInfo_18_18, program_representation_utils__ArgsStr_11, ((MR_Box) ((MR_String) ")")));
        }
        {
          *program_representation_utils__Strings_8 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_18_18, ((MR_Box) ((MR_String) "(")), program_representation_utils__Var_14);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_args_2_to_strings__ho8_5_p_0(
  MR_Word program_representation_utils__VarTable_2,
  MR_Word program_representation_utils__HeadVar__3_3,
  MR_Word program_representation_utils__Prefix_4,
  MR_Word * program_representation_utils__HeadVar__5_5)
{
  {
    MR_bool program_representation_utils__succeeded;

    if ((program_representation_utils__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *program_representation_utils__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_22_22;
        MR_Integer program_representation_utils__Arg_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word program_representation_utils__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), program_representation_utils__HeadVar__3_3, (MR_Integer) 1)));
        MR_String program_representation_utils__ArgName_15;
        MR_Word program_representation_utils__ArgsString_16;
        MR_Word program_representation_utils__Var_17;
        MR_Word program_representation_utils__Var_19;

        {
          mdbcomp__program_representation__lookup_var_name_3_p_0(program_representation_utils__VarTable_2, program_representation_utils__Arg_11, &program_representation_utils__ArgName_15);
        }
        program_representation_utils__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          program_representation_utils__Var_17 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) ", ")));
        }
        {
          program_representation_utils__print_args_2_to_strings__ho8_5_p_0(program_representation_utils__VarTable_2, program_representation_utils__Args_12, program_representation_utils__Var_17, &program_representation_utils__ArgsString_16);
        }
        {
          program_representation_utils__Var_19 = mercury__cord__cons_2_f_0(program_representation_utils__TypeCtorInfo_22_22, ((MR_Box) (program_representation_utils__ArgName_15)), program_representation_utils__ArgsString_16);
        }
        {
          *program_representation_utils__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_22_22, program_representation_utils__Prefix_4, program_representation_utils__Var_19);
        }
      }
  }
}

static MR_Word MR_CALL 
program_representation_utils__nl_0_f_0(void)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__HeadVar__1_1;

    {
      program_representation_utils__HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
    return program_representation_utils__HeadVar__1_1;
  }
}

static void MR_CALL 
program_representation_utils__print_cons_id_and_arity_to_strings_3_p_0(
  MR_Integer program_representation_utils__Indent_4,
  MR_Word program_representation_utils__ConsIdArityRep_5,
  MR_Word * program_representation_utils__Strings_6)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_String program_representation_utils__ConsIdRep_7 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ConsIdArityRep_5, (MR_Integer) 0)));
    MR_Integer program_representation_utils__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ConsIdArityRep_5, (MR_Integer) 1)));
    MR_String program_representation_utils__String_9;
    MR_Word program_representation_utils__Var_16;
    MR_String program_representation_utils__Var_19;
    MR_String program_representation_utils__Var_26;
    MR_String program_representation_utils__Var_28;
    MR_String program_representation_utils__Var_29;

    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &program_representation_utils_scalar_common_5[0], program_representation_utils__Arity_8, &program_representation_utils__Var_19);
    }
    {
      program_representation_utils__Var_26 = mercury__string__f_43_43_2_f_0(program_representation_utils__Var_19, (MR_String) "\n");
    }
    {
      program_representation_utils__Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "/", program_representation_utils__Var_26);
    }
    {
      program_representation_utils__Var_29 = mercury__string__f_43_43_2_f_0(program_representation_utils__ConsIdRep_7, program_representation_utils__Var_28);
    }
    {
      program_representation_utils__String_9 = mercury__string__f_43_43_2_f_0((MR_String) "% case ", program_representation_utils__Var_29);
    }
    {
      program_representation_utils__Var_16 = program_representation_utils__indent_1_f_0(program_representation_utils__Indent_4);
    }
    {
      *program_representation_utils__Strings_6 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, program_representation_utils__Var_16, ((MR_Box) (program_representation_utils__String_9)));
    }
  }
}

static MR_Word MR_CALL 
program_representation_utils__indent_1_f_0(
  MR_Integer program_representation_utils__N_3)
{
  {
    MR_bool program_representation_utils__succeeded = (program_representation_utils__N_3 <= (MR_Integer) 0);
    MR_Word program_representation_utils__HeadVar__2_2;

    if (program_representation_utils__succeeded)
      {
        {
          program_representation_utils__HeadVar__2_2 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
      }
    else
      {
        MR_Word program_representation_utils__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word program_representation_utils__Var_5;
        MR_Word program_representation_utils__Var_7;
        MR_Integer program_representation_utils__Var_8;

        {
          program_representation_utils__Var_5 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_11_11, ((MR_Box) ((MR_String) "  ")));
        }
        program_representation_utils__Var_8 = (program_representation_utils__N_3 - (MR_Integer) 1);
        {
          program_representation_utils__Var_7 = program_representation_utils__indent_1_f_0(program_representation_utils__Var_8);
        }
        {
          program_representation_utils__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_11_11, program_representation_utils__Var_5, program_representation_utils__Var_7);
        }
      }
    return program_representation_utils__HeadVar__2_2;
  }
}

void MR_CALL 
program_representation_utils__print_proc_label_to_string_2_p_0(
  MR_Word program_representation_utils__ProcLabel_3,
  MR_String * program_representation_utils__String_4)
{
  {
    MR_bool program_representation_utils__succeeded;

    if (((MR_tag((MR_Word) program_representation_utils__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word program_representation_utils__PredFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 0)));
        MR_String program_representation_utils__DeclModule_6 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 1)));
        MR_String program_representation_utils__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 3)));
        MR_Integer program_representation_utils__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 4)));
        MR_Integer program_representation_utils__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 5)));
        MR_String program_representation_utils__PF_11;
        MR_String program_representation_utils__Var_68;
        MR_Word program_representation_utils__Var_74;
        MR_String program_representation_utils__Var_76;
        MR_String program_representation_utils__Var_77;
        MR_String program_representation_utils__Var_84;
        MR_String program_representation_utils__Var_86;
        MR_String program_representation_utils__Var_87;
        MR_String program_representation_utils__Var_89;
        MR_String program_representation_utils__Var_90;
        MR_String program_representation_utils__Var_92;
        MR_String program_representation_utils___DefModule_7 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ProcLabel_3, (MR_Integer) 2)));

        switch (program_representation_utils__PredFunc_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            program_representation_utils__PF_11 = (MR_String) "func";
            break;
          case (MR_Integer) 0:
            program_representation_utils__PF_11 = (MR_String) "pred";
            break;
        }
        program_representation_utils__Var_74 = (MR_Word) &program_representation_utils_scalar_common_5[0];
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__Var_74, program_representation_utils__Mode_10, &program_representation_utils__Var_68);
        }
        {
          program_representation_utils__Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "-", program_representation_utils__Var_68);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__Var_74, program_representation_utils__Arity_9, &program_representation_utils__Var_77);
        }
        {
          program_representation_utils__Var_84 = mercury__string__f_43_43_2_f_0(program_representation_utils__Var_77, program_representation_utils__Var_76);
        }
        {
          program_representation_utils__Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "/", program_representation_utils__Var_84);
        }
        {
          program_representation_utils__Var_87 = mercury__string__f_43_43_2_f_0(program_representation_utils__Name_8, program_representation_utils__Var_86);
        }
        {
          program_representation_utils__Var_89 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__Var_87);
        }
        {
          program_representation_utils__Var_90 = mercury__string__f_43_43_2_f_0(program_representation_utils__DeclModule_6, program_representation_utils__Var_89);
        }
        {
          program_representation_utils__Var_92 = mercury__string__f_43_43_2_f_0((MR_String) " ", program_representation_utils__Var_90);
        }
        {
          *program_representation_utils__String_4 = mercury__string__f_43_43_2_f_0(program_representation_utils__PF_11, program_representation_utils__Var_92);
        }
      }
    else
      {
        MR_String program_representation_utils__TypeName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 0)));
        MR_String program_representation_utils__TypeModule_13 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 1)));
        MR_String program_representation_utils__Name_40 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 3)));
        MR_Integer program_representation_utils__Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 4)));
        MR_Integer program_representation_utils__Mode_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 5)));
        MR_String program_representation_utils__Var_43;
        MR_Word program_representation_utils__Var_49 = (MR_Word) &program_representation_utils_scalar_common_5[0];
        MR_String program_representation_utils__Var_51;
        MR_String program_representation_utils__Var_52;
        MR_String program_representation_utils__Var_59;
        MR_String program_representation_utils__Var_61;
        MR_String program_representation_utils__Var_62;
        MR_String program_representation_utils__Var_64;
        MR_String program_representation_utils__Var_65;
        MR_String program_representation_utils__Var_67;
        MR_String program_representation_utils___DefModule_38 = ((MR_String) (MR_hl_field(MR_mktag(1), program_representation_utils__ProcLabel_3, (MR_Integer) 2)));

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__Var_49, program_representation_utils__Mode_42, &program_representation_utils__Var_43);
        }
        {
          program_representation_utils__Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "-", program_representation_utils__Var_43);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(program_representation_utils__Var_49, program_representation_utils__Arity_41, &program_representation_utils__Var_52);
        }
        {
          program_representation_utils__Var_59 = mercury__string__f_43_43_2_f_0(program_representation_utils__Var_52, program_representation_utils__Var_51);
        }
        {
          program_representation_utils__Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "/", program_representation_utils__Var_59);
        }
        {
          program_representation_utils__Var_62 = mercury__string__f_43_43_2_f_0(program_representation_utils__TypeName_12, program_representation_utils__Var_61);
        }
        {
          program_representation_utils__Var_64 = mercury__string__f_43_43_2_f_0((MR_String) ".", program_representation_utils__Var_62);
        }
        {
          program_representation_utils__Var_65 = mercury__string__f_43_43_2_f_0(program_representation_utils__TypeModule_13, program_representation_utils__Var_64);
        }
        {
          program_representation_utils__Var_67 = mercury__string__f_43_43_2_f_0((MR_String) " for ", program_representation_utils__Var_65);
        }
        {
          *program_representation_utils__String_4 = mercury__string__f_43_43_2_f_0(program_representation_utils__Name_40, program_representation_utils__Var_67);
        }
      }
  }
}

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_3(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv4_HeadVar__4_47;

    {
      program_representation_utils__IntroducedFrom__pred__print_module_to_strings__232__1_4_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv4_HeadVar__4_47);
    }
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv4_HeadVar__4_47));
  }
}

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_2(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box program_representation_utils__wrapper_arg_3,
  MR_Box * program_representation_utils__wrapper_arg_4)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv2_STATE_VARIABLE_Strings_12;

    {
      program_representation_utils__accumulate_print_type_table_entries_to_strings_4_p_0(((MR_Integer) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), ((MR_Word) program_representation_utils__wrapper_arg_3), &program_representation_utils__conv2_STATE_VARIABLE_Strings_12);
    }
    *program_representation_utils__wrapper_arg_4 = ((MR_Box) (program_representation_utils__conv2_STATE_VARIABLE_Strings_12));
  }
}

static void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0_1(
  MR_Box program_representation_utils__closure_arg,
  MR_Box program_representation_utils__wrapper_arg_1,
  MR_Box program_representation_utils__wrapper_arg_2,
  MR_Box * program_representation_utils__wrapper_arg_3)
{
  {
    MR_Box program_representation_utils__closure = program_representation_utils__closure_arg;
    MR_Word program_representation_utils__conv0_STATE_VARIABLE_Strings_8;

    {
      program_representation_utils__accumulate_print_oisu_type_procs_to_strings_3_p_0(((MR_Word) program_representation_utils__wrapper_arg_1), ((MR_Word) program_representation_utils__wrapper_arg_2), &program_representation_utils__conv0_STATE_VARIABLE_Strings_8);
    }
    *program_representation_utils__wrapper_arg_3 = ((MR_Box) (program_representation_utils__conv0_STATE_VARIABLE_Strings_8));
  }
}

void MR_CALL 
program_representation_utils__print_module_to_strings_2_p_0(
  MR_Word program_representation_utils__ModuleRep_3,
  MR_Word * program_representation_utils__Strings_4)
{
  {
    MR_bool program_representation_utils__succeeded;
    MR_Word program_representation_utils__TypeCtorInfo_35_35;
    MR_Word program_representation_utils__TypeInfo_37_37;
    MR_String program_representation_utils__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 0)));
    MR_Word program_representation_utils__OISUTypesProcs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 2)));
    MR_Word program_representation_utils__TypeTableMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 3)));
    MR_Word program_representation_utils__ProcReps_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 4)));
    MR_String program_representation_utils__HeaderString_10;
    MR_Word program_representation_utils__OISUStrs_11;
    MR_Word program_representation_utils__TypeTableStrs0_12;
    MR_Word program_representation_utils__TypeTableStrs_13;
    MR_Word program_representation_utils__ProcRepStrs_14;
    MR_Word program_representation_utils__Var_20;
    MR_Word program_representation_utils__Var_22;
    MR_Word program_representation_utils__Var_28;
    MR_Word program_representation_utils__Var_29;
    MR_Word program_representation_utils__Var_30;
    MR_Word program_representation_utils__Var_31;
    MR_String program_representation_utils__Var_52;
    MR_Word program_representation_utils___StringTable_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), program_representation_utils__ModuleRep_3, (MR_Integer) 1)));
    MR_Box program_representation_utils__conv1_OISUStrs_11;
    MR_Box program_representation_utils__conv3_TypeTableStrs0_12;
    MR_Box program_representation_utils__conv5_ProcRepStrs_14;

    {
      program_representation_utils__Var_52 = mercury__string__f_43_43_2_f_0(program_representation_utils__ModuleName_5, (MR_String) "\n");
    }
    {
      program_representation_utils__HeaderString_10 = mercury__string__f_43_43_2_f_0((MR_String) "Module ", program_representation_utils__Var_52);
    }
    program_representation_utils__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      program_representation_utils__Var_20 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_35_35);
    }
    program_representation_utils__TypeInfo_37_37 = (MR_Word) &program_representation_utils_scalar_common_1[0];
    {
      mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_oisu_type_procs_0, program_representation_utils__TypeInfo_37_37, (MR_Word) &program_representation_utils_scalar_common_2[4], program_representation_utils__OISUTypesProcs_7, ((MR_Box) (program_representation_utils__Var_20)), &program_representation_utils__conv1_OISUStrs_11);
    }
    program_representation_utils__OISUStrs_11 = ((MR_Word) program_representation_utils__conv1_OISUStrs_11);
    {
      program_representation_utils__Var_22 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_35_35);
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_type_rep_0, program_representation_utils__TypeInfo_37_37, (MR_Word) &program_representation_utils_scalar_common_2[5], program_representation_utils__TypeTableMap_8, ((MR_Box) (program_representation_utils__Var_22)), &program_representation_utils__conv3_TypeTableStrs0_12);
    }
    program_representation_utils__TypeTableStrs0_12 = ((MR_Word) program_representation_utils__conv3_TypeTableStrs0_12);
    {
      program_representation_utils__succeeded = mercury__cord__is_empty_1_p_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeTableStrs0_12);
    }
    if (program_representation_utils__succeeded)
      program_representation_utils__TypeTableStrs_13 = program_representation_utils__TypeTableStrs0_12;
    else
      {
        MR_Word program_representation_utils__Var_23;
        MR_Word program_representation_utils__Var_25;
        MR_Word program_representation_utils__Var_26;

        {
          program_representation_utils__Var_23 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_35_35, ((MR_Box) ((MR_String) "\nType table:\n")));
        }
        {
          program_representation_utils__Var_26 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
        }
        {
          program_representation_utils__Var_25 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeTableStrs0_12, program_representation_utils__Var_26);
        }
        {
          program_representation_utils__TypeTableStrs_13 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__Var_23, program_representation_utils__Var_25);
        }
      }
    {
      program_representation_utils__Var_28 = mercury__cord__empty_0_f_0(program_representation_utils__TypeCtorInfo_35_35);
    }
    {
      mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, (MR_Word) &program_representation_utils_scalar_common_1[2], program_representation_utils__TypeInfo_37_37, (MR_Word) &program_representation_utils_scalar_common_2[6], program_representation_utils__ProcReps_9, ((MR_Box) (program_representation_utils__Var_28)), &program_representation_utils__conv5_ProcRepStrs_14);
    }
    program_representation_utils__ProcRepStrs_14 = ((MR_Word) program_representation_utils__conv5_ProcRepStrs_14);
    {
      program_representation_utils__Var_29 = mercury__cord__singleton_1_f_0(program_representation_utils__TypeCtorInfo_35_35, ((MR_Box) (program_representation_utils__HeaderString_10)));
    }
    {
      program_representation_utils__Var_31 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__TypeTableStrs_13, program_representation_utils__ProcRepStrs_14);
    }
    {
      program_representation_utils__Var_30 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__OISUStrs_11, program_representation_utils__Var_31);
    }
    {
      *program_representation_utils__Strings_4 = mercury__cord__f_43_43_2_f_0(program_representation_utils__TypeCtorInfo_35_35, program_representation_utils__Var_29, program_representation_utils__Var_30);
    }
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

/* :- end_module program_representation_utils. */
