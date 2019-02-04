/*
** Automatically generated from `size_prof.m'
** by the Mercury compiler,
** version rotd-2018-10-07
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


// :- module transform_hlds.size_prof.
// :- implementation.

/*
INIT mercury__transform_hlds__size_prof__init
ENDINIT
*/

#include "transform_hlds.size_prof.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0;

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2];

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_size_prof_info_0_0[11];

static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_size_prof_info_0_0[11];

static const MR_DuArgLocn transform_hlds__size_prof__transform_hlds__size_prof__field_locns_size_prof_info_0_0[11];

static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_size_prof_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_size_prof_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_size_prof_info_0[1];

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_size_prof_info_0[1];

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1106__1_3_p_0(
  MR_Word RevTypeInfoMap0_12,
  MR_Word HeadVar__2_45,
  MR_Word * HeadVar__3_46);

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__773__1_2_p_0(
  MR_Word ArgGoals_21,
  MR_Word HeadVar__2_55);

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__730__1_2_p_0(
  MR_Word ArgGoals_36,
  MR_Word HeadVar__2_68);

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__603__1_3_p_0(
  MR_Word HeadVar__1_138,
  MR_Word HeadVar__2_139,
  MR_Word * HeadVar__3_140);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_51_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_138,
  MR_Word * HeadVar__3_140);

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__562__1_3_p_0(
  MR_Word HeadVar__1_134,
  MR_Word HeadVar__2_135,
  MR_Word * HeadVar__3_136);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_50_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_134,
  MR_Word * HeadVar__3_136);

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__444__1_3_p_0(
  MR_Word HeadVar__1_1034,
  MR_Word HeadVar__2_1035,
  MR_Word * HeadVar__3_1036);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_1034,
  MR_Word * HeadVar__3_1036);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
  MR_Box X_4,
  MR_Box * X_3);

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____size_prof_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
  MR_Word Info_3,
  MR_Word UnifyMode_4);

static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
  MR_Word TypeInfoMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TargetTypeInfoMap_0_9,
  MR_Word * STATE_VARIABLE_TargetTypeInfoMap_10);

static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
  MR_Word RttiVarMaps_5,
  MR_Word TVar_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
  MR_Word Transform_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * STATE_VARIABLE_ProcInfo_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
  MR_Word First0_15,
  MR_Word * First_16,
  MR_Word Later0_17,
  MR_Word * Later_18,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42,
  MR_Word TargetTypeInfoMap_20,
  MR_Word TypeInfoMap0_21,
  MR_Word RevTypeInfoMap0_22,
  MR_Word TypeCtorMap0_23,
  MR_Word RevTypeCtorMap0_24,
  MR_Word * TypeInfoMap_25,
  MR_Word KnownSizeMap0_26,
  MR_Word * KnownSizeMap_27);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
  MR_Word First0_15,
  MR_Word * First_16,
  MR_Word Later0_17,
  MR_Word * Later_18,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word TargetTypeInfoMap_20,
  MR_Word TypeInfoMap0_21,
  MR_Word RevTypeInfoMap0_22,
  MR_Word TypeCtorMap0_23,
  MR_Word RevTypeCtorMap0_24,
  MR_Word * TypeInfoMap_25,
  MR_Word KnownSizeMap0_26,
  MR_Word * KnownSizeMap_27);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word TargetTypeInfoMap0_5,
  MR_Word TypeInfoMap0_6,
  MR_Word TypeCtorMap0_7,
  MR_Word KnownSizeMap0_8);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_95,
  MR_Word * STATE_VARIABLE_Info_96);

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarCounts_0_2,
  MR_Word * STATE_VARIABLE_VarCounts_3);

static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__1_1,
  MR_Word VarCounts_2,
  MR_Word STATE_VARIABLE_RevMap_0_3,
  MR_Word * STATE_VARIABLE_RevMap_4);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word ArgModes_12,
  MR_Word Goal0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
  MR_Word Var_8,
  MR_Word Args_9,
  MR_Word ArgModes_10,
  MR_Word UnifyGoal_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
  MR_Word LHS_15,
  MR_Word RHS_16,
  MR_Word UniMode_17,
  MR_Word UnifyContext_18,
  MR_Word Var_19,
  MR_Word ConsId_20,
  MR_Word Args_21,
  MR_Word ArgModes_22,
  MR_Word How_23,
  MR_Word Unique_24,
  MR_Word GoalInfo_25,
  MR_Word * GoalExpr_26,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
  MR_Word LHS_16,
  MR_Word RHS_17,
  MR_Word UniMode_18,
  MR_Word UnifyContext_19,
  MR_Word Var_20,
  MR_Word ConsId_22,
  MR_Word Args_23,
  MR_Word ArgModes_24,
  MR_Word How_25,
  MR_Word Unique_26,
  MR_Word GoalInfo0_27,
  MR_Word * GoalExpr_28,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word * DefinedArgs_8,
  MR_Word * NonDefinedArgs_9,
  MR_Word Info_10);

static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
  MR_Word SizeVar0_8,
  MR_Integer KnownSize_9,
  MR_Word Context_10,
  MR_Word * SizeVar_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_KnownSize_0_2,
  MR_Integer * STATE_VARIABLE_KnownSize_3,
  MR_Word STATE_VARIABLE_MaybeSizeVar_0_4,
  MR_Word * STATE_VARIABLE_MaybeSizeVar_5,
  MR_Word Context_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
  MR_Word TypeInfoVar_9,
  MR_Word Arg_10,
  MR_Word Context_11,
  MR_Word * SizeGoal_12,
  MR_Word MaybeSizeVar0_13,
  MR_Word * MaybeSizeVar_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
  MR_Word Type_6,
  MR_String Prefix_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
  MR_Word Context_7,
  MR_Word Type_8,
  MR_Word * TypeInfoVar_9,
  MR_Word * TypeInfoGoals_10,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
  MR_Word Context_10,
  MR_Word Type_11,
  MR_Word TypeCtor_12,
  MR_Word ArgTypes_13,
  MR_Word CtorIsVarArity_14,
  MR_Word * TypeInfoVar_15,
  MR_Word * TypeInfoGoals_16,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word TypeArgs_8,
  MR_Word * TypeCtorVar_9,
  MR_Word * TypeCtorGoals_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
  MR_Word Var_5,
  MR_Integer KnownSize_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
  MR_Word Var_6,
  MR_Word TypeCtorInfoVar_7,
  MR_Word ArgTypeInfoVars_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
  MR_Word Type_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
  MR_Word Var_7,
  MR_Word TypeCtorModule_8,
  MR_String TypeCtorName_9,
  MR_Integer TypeCtorArity_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____size_prof_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_2[9][3];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_3[2][6];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[1][9];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[4][1];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_6[2][5];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_8[2][7];


/* sealed */ struct transform_hlds__size_prof__vector_common_type_7_0_s {
  const MR_String transform_hlds__size_prof__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct transform_hlds__size_prof__vector_common_type_7_0_s transform_hlds__size_prof_vector_common_7[8];



static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_disj_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_switch_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "TupleArity"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "TypeClassInfoSlot"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "KnownSize"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_8[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0))
  },
};


static /* final */ const struct transform_hlds__size_prof__vector_common_type_7_0_s transform_hlds__size_prof_vector_common_7[8] = {
  /* row 0 */   {     (MR_String) "base_typeclass_info" },
  /* row 1 */   {     (MR_String) "type_ctor_info" },
  /* row 2 */   {     (MR_String) "type_info" },
  /* row 3 */   {     (MR_String) "typeclass_info" },
  /* row 4 */   {     (MR_String) "base_typeclass_info" },
  /* row 5 */   {     (MR_String) "type_ctor_info" },
  /* row 6 */   {     (MR_String) "type_info" },
  /* row 7 */   {     (MR_String) "typeclass_info" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0 = {
  (MR_String) "term_words",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1 = {
  (MR_String) "term_cells",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0
};

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__size_prof____Unify____construct_transform_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____construct_transform_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "construct_transform",
  {     transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0 },
  {     transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_known_size_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____known_size_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____known_size_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "known_size_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_ctor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_size_prof_info_0_0[11] = {
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)
};

static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_size_prof_info_0_0[11] = {
  (MR_String) "spi_type_ctor_map",
  (MR_String) "spi_type_info_map",
  (MR_String) "spi_rev_type_ctor_map",
  (MR_String) "spi_rev_type_info_map",
  (MR_String) "spi_target_type_info_map",
  (MR_String) "spi_known_size_map",
  (MR_String) "spi_varset",
  (MR_String) "spi_vartypes",
  (MR_String) "spi_transform_op",
  (MR_String) "spi_rtti_varmaps",
  (MR_String) "spi_module_info"
};

static const MR_DuArgLocn transform_hlds__size_prof__transform_hlds__size_prof__field_locns_size_prof_info_0_0[11] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
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
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0 = {
  (MR_String) "size_prof_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__size_prof__transform_hlds__size_prof__field_types_size_prof_info_0_0,
  transform_hlds__size_prof__transform_hlds__size_prof__field_names_size_prof_info_0_0,
  transform_hlds__size_prof__transform_hlds__size_prof__field_locns_size_prof_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_size_prof_info_0_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0
};

static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_size_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_size_prof_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_size_prof_info_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0
};

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_size_prof_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__size_prof____Unify____size_prof_info_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____size_prof_info_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "size_prof_info",
  {     transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_size_prof_info_0 },
  {     transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_size_prof_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_size_prof_info_0
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_ctor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_ctor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1106__1_3_p_0(
  MR_Word RevTypeInfoMap0_12,
  MR_Word HeadVar__2_45,
  MR_Word * HeadVar__3_46)
{
  {
    MR_bool succeeded;
    MR_Box conv0_HeadVar__3_46;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevTypeInfoMap0_12, ((MR_Box) (HeadVar__2_45)), &conv0_HeadVar__3_46);
    if (succeeded)
    {
      *HeadVar__3_46 = ((MR_Word) (conv0_HeadVar__3_46));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__773__1_2_p_0(
  MR_Word ArgGoals_21,
  MR_Word HeadVar__2_55)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[2]), ((MR_Box) (ArgGoals_21)), ((MR_Box) (HeadVar__2_55)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__730__1_2_p_0(
  MR_Word ArgGoals_36,
  MR_Word HeadVar__2_68)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[2]), ((MR_Box) (ArgGoals_36)), ((MR_Box) (HeadVar__2_68)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__603__1_3_p_0(
  MR_Word HeadVar__1_138,
  MR_Word HeadVar__2_139,
  MR_Word * HeadVar__3_140)
{
  transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_51_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_138, HeadVar__3_140);
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_51_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_138,
  MR_Word * HeadVar__3_140)
{
  {
    MR_Box conv0_HeadVar__3_140;

    transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (HeadVar__1_138)), &conv0_HeadVar__3_140);
    *HeadVar__3_140 = ((MR_Word) (conv0_HeadVar__3_140));
  }
}

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__562__1_3_p_0(
  MR_Word HeadVar__1_134,
  MR_Word HeadVar__2_135,
  MR_Word * HeadVar__3_136)
{
  transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_50_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_134, HeadVar__3_136);
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_50_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_134,
  MR_Word * HeadVar__3_136)
{
  {
    MR_Box conv0_HeadVar__3_136;

    transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (HeadVar__1_134)), &conv0_HeadVar__3_136);
    *HeadVar__3_136 = ((MR_Word) (conv0_HeadVar__3_136));
  }
}

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__444__1_3_p_0(
  MR_Word HeadVar__1_1034,
  MR_Word HeadVar__2_1035,
  MR_Word * HeadVar__3_1036)
{
  transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_1034, HeadVar__3_1036);
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_1034,
  MR_Word * HeadVar__3_1036)
{
  {
    MR_Box conv0_HeadVar__3_1036;

    transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (HeadVar__1_1034)), &conv0_HeadVar__3_1036);
    *HeadVar__3_1036 = ((MR_Word) (conv0_HeadVar__3_1036));
  }
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
  MR_Box X_4,
  MR_Box * X_3)
{
  *X_3 = X_4;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0(
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
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))) & (MR_Integer) 1);
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;
                      MR_Integer Var_49 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_50 = (MR_Integer) (ArgY9_29);

                      mercury__private_builtin__builtin_compare_int_3_p_0(&SubResult9_30, Var_49, Var_50);
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult10_33, ArgX10_31, ArgY10_32);
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                          hlds__hlds_module____Compare____module_info_0_0(HeadVar__1_1, ArgX11_34, ArgY11_35);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____size_prof_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_25 == CastY_26);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_31_31;
      MR_Word TypeInfo_32_32;
      MR_Word TypeInfo_33_33;
      MR_Word TypeCtorInfo_34_34;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_28_28 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_29_29 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_30_30 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_31_31 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_32_32 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_33_33 = (MR_Word) (&transform_hlds__size_prof_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeCtorInfo_34_34 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
                    succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_34_34, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX10_21, ArgY10_22);
                        if (succeeded)
                          succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX11_23, ArgY11_24);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
  MR_Word Info_3,
  MR_Word UnifyMode_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 10))));
    MR_Word LHSFromToInsts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 0))));
    MR_Word CellInitInst_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSFromToInsts_6, (MR_Integer) 0))));
    MR_Word CellFinalInst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSFromToInsts_6, (MR_Integer) 1))));

    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, CellInitInst_8);
    if (succeeded)
      succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_5, CellFinalInst_9);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
  MR_Word TypeInfoMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TargetTypeInfoMap_0_9,
  MR_Word * STATE_VARIABLE_TargetTypeInfoMap_10)
{
  {
    MR_bool succeeded;
    MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeInfoVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TypeInfo_17_17;
    MR_Word Var_16;
    MR_Box conv0_Var_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfoMap_5, ((MR_Box) (Type_6)), &conv0_Var_16);
    if (succeeded)
    {
      Var_16 = ((MR_Word) (conv0_Var_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_17_17 = (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (TypeInfoVar_7)), ((MR_Box) (Var_16)));
    }
    if (succeeded)
    {
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), ((MR_Box) (Type_6)), ((MR_Box) (TypeInfoVar_7)), STATE_VARIABLE_TargetTypeInfoMap_0_9, STATE_VARIABLE_TargetTypeInfoMap_10);
    }
    else
      *STATE_VARIABLE_TargetTypeInfoMap_10 = STATE_VARIABLE_TargetTypeInfoMap_0_9;
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
  MR_Word RttiVarMaps_5,
  MR_Word TVar_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfoLocn_8;
    MR_Word Type_9;

    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_5, TVar_6, &TypeInfoLocn_8);
    {
      Type_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_9, 0) = ((MR_Box) (TVar_6));
      MR_hl_field(MR_mktag(0), Type_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    if (((MR_tag((MR_Word) TypeInfoLocn_8)) == (MR_Integer) 0))
    {
      MR_Word TypeInfoVar_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeInfoLocn_8, (MR_Integer) 0))));
      MR_Word RevTypeInfoMap0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))));
      MR_Word TypeInfoMap0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
      MR_Word TypeInfoMap_24;
      MR_Word RevTypeInfoMap_26;
      MR_Word Var_49;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word RevTypeInfoMap1_25;

      mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), ((MR_Box) (Type_9)), ((MR_Box) (TypeInfoVar_10)), TypeInfoMap0_23, &TypeInfoMap_24);
      succeeded = mercury__map__insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (TypeInfoVar_10)), ((MR_Box) (Type_9)), RevTypeInfoMap0_22, &RevTypeInfoMap1_25);
      if (succeeded)
        RevTypeInfoMap_26 = RevTypeInfoMap1_25;
      else
        RevTypeInfoMap_26 = RevTypeInfoMap0_22;
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 4))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 5))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 6))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 7))));
      Var_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 8))) & (MR_Integer) 1);
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 9))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 10))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoMap_24));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RevTypeInfoMap_26));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_57));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_59));
      }
    }
    else
      *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
  }
}

void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_msg_6_p_0(
  MR_Word Transform_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * STATE_VARIABLE_ProcInfo_13,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Adding typeinfos in ", PredProcId_8, STATE_VARIABLE_ModuleInfo_0_14);
    transform_hlds__size_prof__size_prof_process_proc_6_p_0(Transform_7, PredProcId_8, STATE_VARIABLE_ProcInfo_0_12, STATE_VARIABLE_ProcInfo_13, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "done.\n", PredProcId_8, *STATE_VARIABLE_ModuleInfo_15);
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
  MR_Word Transform_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * STATE_VARIABLE_ProcInfo_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40)
{
  {
    MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SimplifyTasks_12;
    MR_Word Goal0_13;
    MR_Word VarSet0_14;
    MR_Word VarTypes0_15;
    MR_Word InstMap0_16;
    MR_Word RttiVarMaps0_17;
    MR_Word TypeCtorMap0_18;
    MR_Word TypeInfoMap0_19;
    MR_Word RevTypeCtorMap0_20;
    MR_Word RevTypeInfoMap0_21;
    MR_Word TargetTypeInfoMap0_22;
    MR_Word KnownSizeMap0_23;
    MR_Word Info0_24;
    MR_Word TVars_25;
    MR_Word Info1_26;
    MR_Word Goal1_27;
    MR_Word Info_28;
    MR_Word HeadVars_29;
    MR_Word InstVarSet_30;
    MR_Word Goal2_32;
    MR_Word VarSet_33;
    MR_Word VarTypes_34;
    MR_Word RttiVarMaps_35;
    MR_Word Goal_36;
    MR_Word STATE_VARIABLE_ModuleInfo_42_42;
    MR_Word STATE_VARIABLE_ProcInfo_43_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_ProcInfo_51_51;
    MR_Word STATE_VARIABLE_ProcInfo_52_52;
    MR_Word STATE_VARIABLE_ProcInfo_53_53;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Box conv1_Info1_26;
    MR_Word _Warnings_31;

    SimplifyTasks_12 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0((MR_Word) ((MR_Unsigned) 0U));
    check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(SimplifyTasks_12, PredId_8, ProcId_9, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_42_42, STATE_VARIABLE_ProcInfo_0_37, &STATE_VARIABLE_ProcInfo_43_43);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_43_43, &Goal0_13);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_43_43, &VarSet0_14);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_43_43, &VarTypes0_15);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_43_43, STATE_VARIABLE_ModuleInfo_42_42, &InstMap0_16);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_43_43, &RttiVarMaps0_17);
    TypeCtorMap0_18 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
    TypeInfoMap0_19 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
    RevTypeCtorMap0_20 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    RevTypeInfoMap0_21 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    TargetTypeInfoMap0_22 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
    KnownSizeMap0_23 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    {
      Info0_24 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_24, 0) = ((MR_Box) (TypeCtorMap0_18));
      MR_hl_field(MR_mktag(0), Info0_24, 1) = ((MR_Box) (TypeInfoMap0_19));
      MR_hl_field(MR_mktag(0), Info0_24, 2) = ((MR_Box) (RevTypeCtorMap0_20));
      MR_hl_field(MR_mktag(0), Info0_24, 3) = ((MR_Box) (RevTypeInfoMap0_21));
      MR_hl_field(MR_mktag(0), Info0_24, 4) = ((MR_Box) (TargetTypeInfoMap0_22));
      MR_hl_field(MR_mktag(0), Info0_24, 5) = ((MR_Box) (KnownSizeMap0_23));
      MR_hl_field(MR_mktag(0), Info0_24, 6) = ((MR_Box) (VarSet0_14));
      MR_hl_field(MR_mktag(0), Info0_24, 7) = ((MR_Box) (VarTypes0_15));
      MR_hl_field(MR_mktag(0), Info0_24, 8) = (MR_Box) ((MR_Unsigned) (Transform_7));
      MR_hl_field(MR_mktag(0), Info0_24, 9) = ((MR_Box) (RttiVarMaps0_17));
      MR_hl_field(MR_mktag(0), Info0_24, 10) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_42_42));
    }
    hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps0_17, &TVars_25);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_proc_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (RttiVarMaps0_17));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[1]), (MR_Word) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0), Var_44, TVars_25, ((MR_Box) (Info0_24)), &conv1_Info1_26);
    Info1_26 = ((MR_Word) (conv1_Info1_26));
    transform_hlds__size_prof__size_prof_process_goal_4_p_0(Goal0_13, &Goal1_27, Info1_26, &Info_28);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_43_43, &HeadVars_29);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_43_43, &InstVarSet_30);
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_28, (MR_Integer) 6))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_28, (MR_Integer) 7))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_28, (MR_Integer) 9))));
    hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, HeadVars_29, &_Warnings_31, Goal1_27, &Goal2_32, Var_46, &VarSet_33, Var_61, &VarTypes_34, Var_63, &RttiVarMaps_35);
    check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, Goal2_32, &Goal_36, VarTypes_34, InstVarSet_30, InstMap0_16, STATE_VARIABLE_ModuleInfo_42_42, STATE_VARIABLE_ModuleInfo_40);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_36, STATE_VARIABLE_ProcInfo_43_43, &STATE_VARIABLE_ProcInfo_51_51);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_33, STATE_VARIABLE_ProcInfo_51_51, &STATE_VARIABLE_ProcInfo_52_52);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_34, STATE_VARIABLE_ProcInfo_52_52, &STATE_VARIABLE_ProcInfo_53_53);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_35, STATE_VARIABLE_ProcInfo_53_53, STATE_VARIABLE_ProcInfo_38);
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_140;

    transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__603__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_140);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_140));
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
  MR_Word First0_15,
  MR_Word * First_16,
  MR_Word Later0_17,
  MR_Word * Later_18,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42,
  MR_Word TargetTypeInfoMap_20,
  MR_Word TypeInfoMap0_21,
  MR_Word RevTypeInfoMap0_22,
  MR_Word TypeCtorMap0_23,
  MR_Word RevTypeCtorMap0_24,
  MR_Word * TypeInfoMap_25,
  MR_Word KnownSizeMap0_26,
  MR_Word * KnownSizeMap_27)
{
  {
    MR_Word FirstMainConsId_28;
    MR_Word FirstOtherConsIds_29;
    MR_Word FirstGoal0_30;
    MR_Word FirstGoal_31;
    MR_Word TypeInfoMapFirst_32;
    MR_Word KnownSizeMapFirst_33;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 4))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 6))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 7))));
    MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 9))));
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_41, (MR_Integer) 10))));
    MR_Word Var_64 = TypeInfoMap0_21;
    MR_Word Var_67 = Var_56;
    MR_Word Var_69 = Var_58;
    MR_Word Var_70 = Var_59;
    MR_Word Var_71 = Var_60;
    MR_Word Var_72 = Var_61;
    MR_Word Var_73 = Var_62;
    MR_Word Var_75 = Var_64;
    MR_Word Var_77 = RevTypeInfoMap0_22;
    MR_Word Var_78 = Var_67;
    MR_Word Var_80 = Var_69;
    MR_Word Var_81 = Var_70;
    MR_Word Var_82 = Var_71;
    MR_Word Var_83 = Var_72;
    MR_Word Var_84 = Var_73;
    MR_Word Var_85 = TypeCtorMap0_23;
    MR_Word Var_86 = Var_75;
    MR_Word Var_88 = Var_77;
    MR_Word Var_89 = Var_78;
    MR_Word Var_91 = Var_80;
    MR_Word Var_92 = Var_81;
    MR_Word Var_93 = Var_82;
    MR_Word Var_94 = Var_83;
    MR_Word Var_95 = Var_84;

    {
      STATE_VARIABLE_Info_47_47 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 0) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 1) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 2) = ((MR_Box) (RevTypeCtorMap0_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 3) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 4) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 5) = ((MR_Box) (KnownSizeMap0_26));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 6) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 7) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 8) = (MR_Box) ((MR_Unsigned) (Var_93));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 9) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_47_47, 10) = ((MR_Box) (Var_95));
    }
    FirstMainConsId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First0_15, (MR_Integer) 0))));
    FirstOtherConsIds_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First0_15, (MR_Integer) 1))));
    FirstGoal0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First0_15, (MR_Integer) 2))));
    transform_hlds__size_prof__size_prof_process_goal_4_p_0(FirstGoal0_30, &FirstGoal_31, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
    TypeInfoMapFirst_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 1))));
    KnownSizeMapFirst_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *First_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstMainConsId_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FirstOtherConsIds_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FirstGoal_31));
    }
    if ((Later0_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Later_18 = (MR_Word) ((MR_Unsigned) 0U);
      *TypeInfoMap_25 = TypeInfoMapFirst_32;
      *KnownSizeMap_27 = KnownSizeMapFirst_33;
      *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_48_48;
    }
    else
    {
      MR_Word Head0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Later0_17, (MR_Integer) 0))));
      MR_Word Tail0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Later0_17, (MR_Integer) 1))));
      MR_Word LaterTargetTypeInfoMap_36;
      MR_Word Head_37;
      MR_Word Tail_38;
      MR_Word TypeInfoMapLater_39;
      MR_Word KnownSizeMapLater_40;
      MR_Word STATE_VARIABLE_Info_50_50;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word Var_137;

      mercury__map__union_4_p_1((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_2[8]), TargetTypeInfoMap_20, TypeInfoMapFirst_32, &LaterTargetTypeInfoMap_36);
      Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 0))));
      Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 1))));
      Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 2))));
      Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 3))));
      Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 5))));
      Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 6))));
      Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 7))));
      Var_135 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 8))) & (MR_Integer) 1);
      Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 9))));
      Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_48_48, (MR_Integer) 10))));
      {
        STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (LaterTargetTypeInfoMap_36));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (Var_133));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (Var_134));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 8) = (MR_Box) ((MR_Unsigned) (Var_135));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (Var_136));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (Var_137));
      }
      transform_hlds__size_prof__size_prof_process_switch_14_p_0(Head0_34, &Head_37, Tail0_35, &Tail_38, STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Info_42, TargetTypeInfoMap_20, TypeInfoMap0_21, RevTypeInfoMap0_22, TypeCtorMap0_23, RevTypeCtorMap0_24, &TypeInfoMapLater_39, KnownSizeMap0_26, &KnownSizeMapLater_40);
      *TypeInfoMap_25 = mercury__map__common_subset_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfoMapFirst_32, TypeInfoMapLater_39);
      *KnownSizeMap_27 = mercury__map__common_subset_2_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), KnownSizeMapFirst_33, KnownSizeMapLater_40);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Later_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_37));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_38));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_136;

    transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__562__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_136);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_136));
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
  MR_Word First0_15,
  MR_Word * First_16,
  MR_Word Later0_17,
  MR_Word * Later_18,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word TargetTypeInfoMap_20,
  MR_Word TypeInfoMap0_21,
  MR_Word RevTypeInfoMap0_22,
  MR_Word TypeCtorMap0_23,
  MR_Word RevTypeCtorMap0_24,
  MR_Word * TypeInfoMap_25,
  MR_Word KnownSizeMap0_26,
  MR_Word * KnownSizeMap_27)
{
  {
    MR_Word TypeInfoMapFirst_28;
    MR_Word KnownSizeMapFirst_29;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word STATE_VARIABLE_Info_44_44;
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 4))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 6))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 7))));
    MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 9))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_37, (MR_Integer) 10))));
    MR_Word Var_60 = TypeInfoMap0_21;
    MR_Word Var_63 = Var_52;
    MR_Word Var_65 = Var_54;
    MR_Word Var_66 = Var_55;
    MR_Word Var_67 = Var_56;
    MR_Word Var_68 = Var_57;
    MR_Word Var_69 = Var_58;
    MR_Word Var_71 = Var_60;
    MR_Word Var_73 = RevTypeInfoMap0_22;
    MR_Word Var_74 = Var_63;
    MR_Word Var_76 = Var_65;
    MR_Word Var_77 = Var_66;
    MR_Word Var_78 = Var_67;
    MR_Word Var_79 = Var_68;
    MR_Word Var_80 = Var_69;
    MR_Word Var_81 = TypeCtorMap0_23;
    MR_Word Var_82 = Var_71;
    MR_Word Var_84 = Var_73;
    MR_Word Var_85 = Var_74;
    MR_Word Var_87 = Var_76;
    MR_Word Var_88 = Var_77;
    MR_Word Var_89 = Var_78;
    MR_Word Var_90 = Var_79;
    MR_Word Var_91 = Var_80;

    {
      STATE_VARIABLE_Info_43_43 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 1) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 2) = ((MR_Box) (RevTypeCtorMap0_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 3) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 4) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 5) = ((MR_Box) (KnownSizeMap0_26));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 6) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 7) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 8) = (MR_Box) ((MR_Unsigned) (Var_89));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 9) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_43_43, 10) = ((MR_Box) (Var_91));
    }
    transform_hlds__size_prof__size_prof_process_goal_4_p_0(First0_15, First_16, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_44_44);
    TypeInfoMapFirst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 1))));
    KnownSizeMapFirst_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 5))));
    if ((Later0_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Later_18 = (MR_Word) ((MR_Unsigned) 0U);
      *TypeInfoMap_25 = TypeInfoMapFirst_28;
      *KnownSizeMap_27 = KnownSizeMapFirst_29;
      *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_44_44;
    }
    else
    {
      MR_Word Head0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Later0_17, (MR_Integer) 0))));
      MR_Word Tail0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Later0_17, (MR_Integer) 1))));
      MR_Word LaterTargetTypeInfoMap_32;
      MR_Word Head_33;
      MR_Word Tail_34;
      MR_Word TypeInfoMapLater_35;
      MR_Word KnownSizeMapLater_36;
      MR_Word STATE_VARIABLE_Info_46_46;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_133;

      mercury__map__union_4_p_1((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_2[7]), TypeInfoMapFirst_28, TargetTypeInfoMap_20, &LaterTargetTypeInfoMap_32);
      Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 0))));
      Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 1))));
      Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 2))));
      Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 3))));
      Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 5))));
      Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 6))));
      Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 7))));
      Var_131 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 8))) & (MR_Integer) 1);
      Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 9))));
      Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_44_44, (MR_Integer) 10))));
      {
        STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (LaterTargetTypeInfoMap_32));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (Var_130));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 8) = (MR_Box) ((MR_Unsigned) (Var_131));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 9) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, 10) = ((MR_Box) (Var_133));
      }
      transform_hlds__size_prof__size_prof_process_disj_14_p_0(Head0_30, &Head_33, Tail0_31, &Tail_34, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_38, TargetTypeInfoMap_20, TypeInfoMap0_21, RevTypeInfoMap0_22, TypeCtorMap0_23, RevTypeCtorMap0_24, &TypeInfoMapLater_35, KnownSizeMap0_26, &KnownSizeMapLater_36);
      *TypeInfoMap_25 = mercury__map__common_subset_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfoMapFirst_28, TypeInfoMapLater_35);
      *KnownSizeMap_27 = mercury__map__common_subset_2_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), KnownSizeMapFirst_29, KnownSizeMapLater_36);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Later_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_34));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word TargetTypeInfoMap0_5,
  MR_Word TypeInfoMap0_6,
  MR_Word TypeCtorMap0_7,
  MR_Word KnownSizeMap0_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 2))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 3))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 6))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 7))));
    MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 9))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 10))));
    MR_Word Var_46 = Var_35;
    MR_Word Var_47 = Var_36;
    MR_Word Var_48 = TargetTypeInfoMap0_5;
    MR_Word Var_50 = Var_39;
    MR_Word Var_51 = Var_40;
    MR_Word Var_52 = Var_41;
    MR_Word Var_53 = Var_42;
    MR_Word Var_54 = Var_43;
    MR_Word Var_56 = TypeInfoMap0_6;
    MR_Word Var_57 = Var_46;
    MR_Word Var_58 = Var_47;
    MR_Word Var_59 = Var_48;
    MR_Word Var_61 = Var_50;
    MR_Word Var_62 = Var_51;
    MR_Word Var_63 = Var_52;
    MR_Word Var_64 = Var_53;
    MR_Word Var_65 = Var_54;

    {
      STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (TypeCtorMap0_7));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (KnownSizeMap0_8));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 8) = (MR_Box) ((MR_Unsigned) (Var_63));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (Var_65));
    }
    transform_hlds__size_prof__size_prof_process_goal_4_p_0(Goal0_16, &Goal_18, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_31_31);
    transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(Goals0_17, &Goals_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_4, TargetTypeInfoMap0_5, TypeInfoMap0_6, TypeCtorMap0_7, KnownSizeMap0_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    }
    else
    {
      MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_12;
      MR_Word Goals_13;
      MR_Word STATE_VARIABLE_Info_18_18;
      MR_Word SubConj_14;
      MR_Word Var_20;
      MR_Word Var_21;

      transform_hlds__size_prof__size_prof_process_goal_4_p_0(Goal0_8, &Goal_12, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_18_18);
      transform_hlds__size_prof__size_prof_process_conj_4_p_0(Goals0_9, &Goals_13, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_4);
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1))) & (MR_Integer) 1);
        SubConj_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 2))));
        succeeded = (Var_21 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        *HeadVar__2_2 = mercury__list__append_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubConj_14, Goals_13);
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
        }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__size_prof__binds_arg_in_cell_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_1036;

    transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__444__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_1036);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_1036));
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_95,
  MR_Word * STATE_VARIABLE_Info_96)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    MR_Word GoalExpr_22;

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NegGoal0_87 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_8), (MR_Integer) 0));
          MR_Word NegGoal_88;
          MR_Word STATE_VARIABLE_Info_102_102;
          MR_Word TargetTypeInfoMap0_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
          MR_Word TypeInfoMap0_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
          MR_Word RevTypeInfoMap0_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
          MR_Word TypeCtorMap0_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
          MR_Word KnownSizeMap0_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
          MR_Word RevTypeCtorMap0_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
          MR_Word Var_957;
          MR_Word Var_958;
          MR_Word Var_959;
          MR_Word Var_960;
          MR_Word Var_961;
          MR_Word Var_966;
          MR_Word Var_968;
          MR_Word Var_969;
          MR_Word Var_970;
          MR_Word Var_971;
          MR_Word Var_972;
          MR_Word Var_974;
          MR_Word Var_977;
          MR_Word Var_979;
          MR_Word Var_980;
          MR_Word Var_981;
          MR_Word Var_982;
          MR_Word Var_983;
          MR_Word Var_985;
          MR_Word Var_987;
          MR_Word Var_988;
          MR_Word Var_990;
          MR_Word Var_991;
          MR_Word Var_992;
          MR_Word Var_993;
          MR_Word Var_994;
          MR_Word Var_995;
          MR_Word Var_996;
          MR_Word Var_998;
          MR_Word Var_999;
          MR_Word Var_1001;
          MR_Word Var_1002;
          MR_Word Var_1003;
          MR_Word Var_1004;
          MR_Word Var_1005;

          transform_hlds__size_prof__size_prof_process_goal_4_p_0(NegGoal0_87, &NegGoal_88, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_102_102);
          Var_957 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, (MR_Integer) 6))));
          Var_958 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, (MR_Integer) 7))));
          Var_959 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, (MR_Integer) 8))) & (MR_Integer) 1);
          Var_960 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, (MR_Integer) 9))));
          Var_961 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, (MR_Integer) 10))));
          Var_966 = TargetTypeInfoMap0_242;
          Var_968 = Var_957;
          Var_969 = Var_958;
          Var_970 = Var_959;
          Var_971 = Var_960;
          Var_972 = Var_961;
          Var_974 = TypeInfoMap0_243;
          Var_977 = Var_966;
          Var_979 = Var_968;
          Var_980 = Var_969;
          Var_981 = Var_970;
          Var_982 = Var_971;
          Var_983 = Var_972;
          Var_985 = Var_974;
          Var_987 = RevTypeInfoMap0_244;
          Var_988 = Var_977;
          Var_990 = Var_979;
          Var_991 = Var_980;
          Var_992 = Var_981;
          Var_993 = Var_982;
          Var_994 = Var_983;
          Var_995 = TypeCtorMap0_245;
          Var_996 = Var_985;
          Var_998 = Var_987;
          Var_999 = Var_988;
          Var_1001 = Var_990;
          Var_1002 = Var_991;
          Var_1003 = Var_992;
          Var_1004 = Var_993;
          Var_1005 = Var_994;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_96 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_995));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_996));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RevTypeCtorMap0_247));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_998));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_999));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (KnownSizeMap0_246));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_1001));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_1002));
            MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_1003));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_1004));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_1005));
          }
          GoalExpr_22 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (NegGoal_88)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word RHS_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
          MR_Word UniMode_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word Unify0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
          MR_Word UnifyContext_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));

          switch (MR_tag((MR_Word) Unify0_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify0_13, (MR_Integer) 0))));
                MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify0_13, (MR_Integer) 1))));
                MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify0_13, (MR_Integer) 2))));
                MR_Word ArgModes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify0_13, (MR_Integer) 3))));
                MR_Word How_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify0_13, (MR_Integer) 4))));
                MR_Word Unique_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unify0_13, (MR_Integer) 5))) & (MR_Integer) 1);

                transform_hlds__size_prof__size_prof_process_construct_14_p_0(LHS_10, RHS_11, UniMode_12, UnifyContext_14, Var_15, ConsId_16, Args_17, ArgModes_18, How_19, Unique_20, GoalInfo0_9, &GoalExpr_22, STATE_VARIABLE_Info_0_95, STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify0_13, (MR_Integer) 0))));
                MR_Word ConsId_180 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify0_13, (MR_Integer) 1))));
                MR_Word Args_181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify0_13, (MR_Integer) 2))));
                MR_Word ArgModes_182 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unify0_13, (MR_Integer) 3))));
                MR_Word BindingArgModes_25;
                MR_Word Var_176;

                {
                  Var_176 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_176, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_6[1]));
                  MR_hl_field(MR_mktag(0), Var_176, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_176, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_176, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_95));
                }
                mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_176, ArgModes_182, &BindingArgModes_25);
                succeeded = (BindingArgModes_25 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(Var_179, ConsId_180, Args_181, ArgModes_182, Goal0_5, &GoalExpr_22, STATE_VARIABLE_Info_0_95, STATE_VARIABLE_Info_96);
                }
                else
                {
                  GoalExpr_22 = GoalExpr0_8;
                  *STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_0_95;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                GoalExpr_22 = GoalExpr0_8;
                *STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_0_95;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify0_13, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    GoalExpr_22 = GoalExpr0_8;
                    *STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_0_95;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "complicated_unify");
                      return;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Info_170_170;
          MR_Word Var_171;
          MR_Word Var_173;
          MR_Word Var_249;
          MR_Word Var_250;
          MR_Word Var_251;
          MR_Word Var_252;
          MR_Word Var_253;
          MR_Word Var_254;
          MR_Word Var_255;
          MR_Word Var_256;
          MR_Word Var_257;
          MR_Word Var_258;
          MR_Word Var_259;
          MR_Word Var_260;
          MR_Word Var_262;
          MR_Word Var_263;
          MR_Word Var_264;
          MR_Word Var_265;
          MR_Word Var_266;
          MR_Word Var_267;
          MR_Word Var_268;
          MR_Word Var_269;

          Var_171 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
          Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
          Var_250 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
          Var_251 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
          Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
          Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
          Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
          Var_255 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 7))));
          Var_256 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 8))) & (MR_Integer) 1);
          Var_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 9))));
          Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 10))));
          {
            STATE_VARIABLE_Info_170_170 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 0) = ((MR_Box) (Var_171));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 1) = ((MR_Box) (Var_249));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 2) = ((MR_Box) (Var_250));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 3) = ((MR_Box) (Var_251));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 4) = ((MR_Box) (Var_252));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 5) = ((MR_Box) (Var_253));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 6) = ((MR_Box) (Var_254));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 7) = ((MR_Box) (Var_255));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 8) = (MR_Box) ((MR_Unsigned) (Var_256));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 9) = ((MR_Box) (Var_257));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, 10) = ((MR_Box) (Var_258));
          }
          Var_173 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 0))));
          Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 1))));
          Var_262 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 3))));
          Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 4))));
          Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 5))));
          Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 6))));
          Var_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 7))));
          Var_267 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 8))) & (MR_Integer) 1);
          Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 9))));
          Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_170_170, (MR_Integer) 10))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_96 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_259));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_260));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_173));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_262));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_263));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_264));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_265));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_266));
            MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_267));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_268));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_269));
          }
          GoalExpr_22 = GoalExpr0_8;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_Info_166_166;
              MR_Word Var_167;
              MR_Word Var_169;
              MR_Word Var_271;
              MR_Word Var_272;
              MR_Word Var_273;
              MR_Word Var_274;
              MR_Word Var_275;
              MR_Word Var_276;
              MR_Word Var_277;
              MR_Word Var_278;
              MR_Word Var_279;
              MR_Word Var_280;
              MR_Word Var_281;
              MR_Word Var_282;
              MR_Word Var_284;
              MR_Word Var_285;
              MR_Word Var_286;
              MR_Word Var_287;
              MR_Word Var_288;
              MR_Word Var_289;
              MR_Word Var_290;
              MR_Word Var_291;

              Var_167 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
              Var_271 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
              Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
              Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
              Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
              Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
              Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
              Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 7))));
              Var_278 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 9))));
              Var_280 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 10))));
              {
                STATE_VARIABLE_Info_166_166 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 0) = ((MR_Box) (Var_167));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 1) = ((MR_Box) (Var_271));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 2) = ((MR_Box) (Var_272));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 3) = ((MR_Box) (Var_273));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 4) = ((MR_Box) (Var_274));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 5) = ((MR_Box) (Var_275));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 6) = ((MR_Box) (Var_276));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 7) = ((MR_Box) (Var_277));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 8) = (MR_Box) ((MR_Unsigned) (Var_278));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 9) = ((MR_Box) (Var_279));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, 10) = ((MR_Box) (Var_280));
              }
              Var_169 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              Var_281 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 0))));
              Var_282 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 1))));
              Var_284 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 3))));
              Var_285 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 4))));
              Var_286 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 5))));
              Var_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 6))));
              Var_288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 7))));
              Var_289 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_290 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 9))));
              Var_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_166_166, (MR_Integer) 10))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_96 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_281));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_282));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_169));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_284));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_285));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_286));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_287));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_288));
                MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_289));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_290));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_291));
              }
              GoalExpr_22 = GoalExpr0_8;
            }
            break;
          case (MR_Integer) 1:
            {
              GoalExpr_22 = GoalExpr0_8;
              *STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_0_95;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Goals_55;

              switch (ConjType_53) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TargetTypeInfoMap0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
                    MR_Word TypeInfoMap0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
                    MR_Word RevTypeInfoMap0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
                    MR_Word TypeCtorMap0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
                    MR_Word KnownSizeMap0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_Info_156_156;
                    MR_Word STATE_VARIABLE_Info_159_159;
                    MR_Word STATE_VARIABLE_Info_160_160;
                    MR_Word Var_161;
                    MR_Word Var_163;
                    MR_Word Var_342;
                    MR_Word Var_344;
                    MR_Word Var_347;
                    MR_Word Var_348;
                    MR_Word Var_349;
                    MR_Word Var_350;
                    MR_Word Var_351;
                    MR_Word Var_352;
                    MR_Word Var_353;
                    MR_Word Var_355;
                    MR_Word Var_357;
                    MR_Word Var_358;
                    MR_Word Var_359;
                    MR_Word Var_360;
                    MR_Word Var_361;
                    MR_Word Var_362;
                    MR_Word Var_363;
                    MR_Word Var_386;
                    MR_Word Var_387;
                    MR_Word Var_389;
                    MR_Word Var_390;
                    MR_Word Var_392;
                    MR_Word Var_393;
                    MR_Word Var_394;
                    MR_Word Var_395;
                    MR_Word Var_396;
                    MR_Word Var_376;
                    MR_Word Var_377;
                    MR_Word Var_378;
                    MR_Word Var_379;
                    MR_Word Var_380;
                    MR_Word Var_381;
                    MR_Word Var_382;
                    MR_Word Var_383;
                    MR_Word Var_384;
                    MR_Word Var_385;

                    transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(Goals0_54, &Goals_55, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_156_156, TargetTypeInfoMap0_56, TypeInfoMap0_57, TypeCtorMap0_59, KnownSizeMap0_60);
                    Var_342 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_156_156, (MR_Integer) 0))));
                    Var_344 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_156_156, (MR_Integer) 2))));
                    Var_347 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_156_156, (MR_Integer) 5))));
                    Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_156_156, (MR_Integer) 6))));
                    Var_349 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_156_156, (MR_Integer) 7))));
                    Var_350 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_156_156, (MR_Integer) 8))) & (MR_Integer) 1);
                    Var_351 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_156_156, (MR_Integer) 9))));
                    Var_352 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_156_156, (MR_Integer) 10))));
                    Var_353 = Var_342;
                    Var_355 = Var_344;
                    Var_357 = TargetTypeInfoMap0_56;
                    Var_358 = Var_347;
                    Var_359 = Var_348;
                    Var_360 = Var_349;
                    Var_361 = Var_350;
                    Var_362 = Var_351;
                    Var_363 = Var_352;
                    {
                      STATE_VARIABLE_Info_159_159 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 0) = ((MR_Box) (Var_353));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 1) = ((MR_Box) (TypeInfoMap0_57));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 2) = ((MR_Box) (Var_355));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 3) = ((MR_Box) (RevTypeInfoMap0_58));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 4) = ((MR_Box) (Var_357));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 5) = ((MR_Box) (Var_358));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 6) = ((MR_Box) (Var_359));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 7) = ((MR_Box) (Var_360));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 8) = (MR_Box) ((MR_Unsigned) (Var_361));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 9) = ((MR_Box) (Var_362));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, 10) = ((MR_Box) (Var_363));
                    }
                    Var_161 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
                    Var_376 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 1))));
                    Var_377 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 2))));
                    Var_378 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 3))));
                    Var_379 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 4))));
                    Var_380 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 5))));
                    Var_381 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 6))));
                    Var_382 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 7))));
                    Var_383 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 8))) & (MR_Integer) 1);
                    Var_384 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 9))));
                    Var_385 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_159_159, (MR_Integer) 10))));
                    {
                      STATE_VARIABLE_Info_160_160 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 0) = ((MR_Box) (Var_161));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 1) = ((MR_Box) (Var_376));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 2) = ((MR_Box) (Var_377));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 3) = ((MR_Box) (Var_378));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 4) = ((MR_Box) (Var_379));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 5) = ((MR_Box) (Var_380));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 6) = ((MR_Box) (Var_381));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 7) = ((MR_Box) (Var_382));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 8) = (MR_Box) ((MR_Unsigned) (Var_383));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 9) = ((MR_Box) (Var_384));
                      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, 10) = ((MR_Box) (Var_385));
                    }
                    Var_163 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                    Var_386 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 0))));
                    Var_387 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 1))));
                    Var_389 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 3))));
                    Var_390 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 4))));
                    Var_392 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 6))));
                    Var_393 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 7))));
                    Var_394 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 8))) & (MR_Integer) 1);
                    Var_395 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 9))));
                    Var_396 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_160_160, (MR_Integer) 10))));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Info_96 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_386));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_387));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_163));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_389));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_390));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (KnownSizeMap0_60));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_392));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_393));
                      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_394));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_395));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_396));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  transform_hlds__size_prof__size_prof_process_conj_4_p_0(Goals0_54, &Goals_55, STATE_VARIABLE_Info_0_95, STATE_VARIABLE_Info_96);
                  break;
              }
              {
                GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 1) = (MR_Box) ((MR_Unsigned) (ConjType_53));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 2) = ((MR_Box) (Goals_55));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Disjuncts_73;
              MR_Word STATE_VARIABLE_Info_142_142;
              MR_Word STATE_VARIABLE_Info_143_143;

              if ((Disjuncts0_72 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word STATE_VARIABLE_Info_128_128;
                MR_Word Var_129;
                MR_Word STATE_VARIABLE_Info_130_130;
                MR_Word Var_131;
                MR_Word STATE_VARIABLE_Info_132_132;
                MR_Word Var_133;
                MR_Word Var_135;
                MR_Word Var_616;
                MR_Word Var_618;
                MR_Word Var_619;
                MR_Word Var_620;
                MR_Word Var_621;
                MR_Word Var_622;
                MR_Word Var_623;
                MR_Word Var_624;
                MR_Word Var_625;
                MR_Word Var_626;
                MR_Word Var_627;
                MR_Word Var_628;
                MR_Word Var_630;
                MR_Word Var_631;
                MR_Word Var_632;
                MR_Word Var_633;
                MR_Word Var_634;
                MR_Word Var_635;
                MR_Word Var_636;
                MR_Word Var_637;
                MR_Word Var_638;
                MR_Word Var_640;
                MR_Word Var_641;
                MR_Word Var_642;
                MR_Word Var_643;
                MR_Word Var_644;
                MR_Word Var_645;
                MR_Word Var_646;
                MR_Word Var_647;
                MR_Word Var_648;
                MR_Word Var_649;
                MR_Word Var_650;
                MR_Word Var_652;
                MR_Word Var_653;
                MR_Word Var_654;
                MR_Word Var_655;
                MR_Word Var_656;
                MR_Word Var_657;
                MR_Word Var_658;
                MR_Word Var_659;

                Var_129 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
                Var_616 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
                Var_618 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
                Var_619 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
                Var_620 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
                Var_621 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
                Var_622 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
                Var_623 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 7))));
                Var_624 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_625 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 9))));
                Var_626 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_128_128 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 0) = ((MR_Box) (Var_616));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 1) = ((MR_Box) (Var_129));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 2) = ((MR_Box) (Var_618));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 3) = ((MR_Box) (Var_619));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 4) = ((MR_Box) (Var_620));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 5) = ((MR_Box) (Var_621));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 6) = ((MR_Box) (Var_622));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 7) = ((MR_Box) (Var_623));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 8) = (MR_Box) ((MR_Unsigned) (Var_624));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 9) = ((MR_Box) (Var_625));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, 10) = ((MR_Box) (Var_626));
                }
                Var_131 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                Var_627 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 0))));
                Var_628 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 1))));
                Var_630 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 3))));
                Var_631 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 4))));
                Var_632 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 5))));
                Var_633 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 6))));
                Var_634 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 7))));
                Var_635 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_636 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 9))));
                Var_637 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_128_128, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_130_130 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 0) = ((MR_Box) (Var_627));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 1) = ((MR_Box) (Var_628));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 2) = ((MR_Box) (Var_131));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 3) = ((MR_Box) (Var_630));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 4) = ((MR_Box) (Var_631));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 5) = ((MR_Box) (Var_632));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 6) = ((MR_Box) (Var_633));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 7) = ((MR_Box) (Var_634));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 8) = (MR_Box) ((MR_Unsigned) (Var_635));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 9) = ((MR_Box) (Var_636));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 10) = ((MR_Box) (Var_637));
                }
                Var_133 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
                Var_638 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 0))));
                Var_640 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 2))));
                Var_641 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 3))));
                Var_642 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 4))));
                Var_643 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 5))));
                Var_644 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 6))));
                Var_645 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 7))));
                Var_646 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_647 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 9))));
                Var_648 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_132_132 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 0) = ((MR_Box) (Var_638));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 1) = ((MR_Box) (Var_133));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 2) = ((MR_Box) (Var_640));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 3) = ((MR_Box) (Var_641));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 4) = ((MR_Box) (Var_642));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 5) = ((MR_Box) (Var_643));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 6) = ((MR_Box) (Var_644));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 7) = ((MR_Box) (Var_645));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 8) = (MR_Box) ((MR_Unsigned) (Var_646));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 9) = ((MR_Box) (Var_647));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, 10) = ((MR_Box) (Var_648));
                }
                Var_135 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                Var_649 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 0))));
                Var_650 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 1))));
                Var_652 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 3))));
                Var_653 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 4))));
                Var_654 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 5))));
                Var_655 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 6))));
                Var_656 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 7))));
                Var_657 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_658 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 9))));
                Var_659 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_132_132, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_142_142 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 0) = ((MR_Box) (Var_649));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 1) = ((MR_Box) (Var_650));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 2) = ((MR_Box) (Var_135));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 3) = ((MR_Box) (Var_652));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 4) = ((MR_Box) (Var_653));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 5) = ((MR_Box) (Var_654));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 6) = ((MR_Box) (Var_655));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 7) = ((MR_Box) (Var_656));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 8) = (MR_Box) ((MR_Unsigned) (Var_657));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 9) = ((MR_Box) (Var_658));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 10) = ((MR_Box) (Var_659));
                }
                Disjuncts_73 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Word STATE_VARIABLE_Info_136_136;
                MR_Word STATE_VARIABLE_Info_137_137;
                MR_Word STATE_VARIABLE_Info_138_138;
                MR_Word Var_139;
                MR_Word Var_141;
                MR_Word TargetTypeInfoMap0_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
                MR_Word TypeInfoMap0_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
                MR_Word RevTypeInfoMap0_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
                MR_Word TypeCtorMap0_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
                MR_Word KnownSizeMap0_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
                MR_Word First0_203 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts0_72, (MR_Integer) 0))));
                MR_Word Later0_204 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts0_72, (MR_Integer) 1))));
                MR_Word RevTypeCtorMap0_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
                MR_Word First_206;
                MR_Word Later_207;
                MR_Word TypeInfoMap_208;
                MR_Word KnownSizeMap_209;
                MR_Word Var_594;
                MR_Word Var_595;
                MR_Word Var_597;
                MR_Word Var_598;
                MR_Word Var_600;
                MR_Word Var_601;
                MR_Word Var_602;
                MR_Word Var_603;
                MR_Word Var_604;
                MR_Word Var_572;
                MR_Word Var_574;
                MR_Word Var_575;
                MR_Word Var_576;
                MR_Word Var_577;
                MR_Word Var_578;
                MR_Word Var_579;
                MR_Word Var_580;
                MR_Word Var_581;
                MR_Word Var_582;
                MR_Word Var_584;
                MR_Word Var_585;
                MR_Word Var_586;
                MR_Word Var_587;
                MR_Word Var_588;
                MR_Word Var_589;
                MR_Word Var_590;
                MR_Word Var_591;
                MR_Word Var_592;
                MR_Word Var_593;

                transform_hlds__size_prof__size_prof_process_disj_14_p_0(First0_203, &First_206, Later0_204, &Later_207, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_136_136, TargetTypeInfoMap0_198, TypeInfoMap0_199, RevTypeInfoMap0_200, TypeCtorMap0_201, RevTypeCtorMap0_205, &TypeInfoMap_208, KnownSizeMap0_202, &KnownSizeMap_209);
                Var_572 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 0))));
                Var_574 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 2))));
                Var_575 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 3))));
                Var_576 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 4))));
                Var_577 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 5))));
                Var_578 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 6))));
                Var_579 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 7))));
                Var_580 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_581 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 9))));
                Var_582 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_136_136, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_137_137 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 0) = ((MR_Box) (Var_572));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 1) = ((MR_Box) (TypeInfoMap_208));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 2) = ((MR_Box) (Var_574));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 3) = ((MR_Box) (Var_575));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 4) = ((MR_Box) (Var_576));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 5) = ((MR_Box) (Var_577));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 6) = ((MR_Box) (Var_578));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 7) = ((MR_Box) (Var_579));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 8) = (MR_Box) ((MR_Unsigned) (Var_580));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 9) = ((MR_Box) (Var_581));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, 10) = ((MR_Box) (Var_582));
                }
                Var_139 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
                Var_584 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 1))));
                Var_585 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 2))));
                Var_586 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 3))));
                Var_587 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 4))));
                Var_588 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 5))));
                Var_589 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 6))));
                Var_590 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 7))));
                Var_591 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_592 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 9))));
                Var_593 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_137_137, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_138_138 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 0) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 1) = ((MR_Box) (Var_584));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 2) = ((MR_Box) (Var_585));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 3) = ((MR_Box) (Var_586));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 4) = ((MR_Box) (Var_587));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 5) = ((MR_Box) (Var_588));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 6) = ((MR_Box) (Var_589));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 7) = ((MR_Box) (Var_590));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 8) = (MR_Box) ((MR_Unsigned) (Var_591));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 9) = ((MR_Box) (Var_592));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, 10) = ((MR_Box) (Var_593));
                }
                Var_141 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                Var_594 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, (MR_Integer) 0))));
                Var_595 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, (MR_Integer) 1))));
                Var_597 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, (MR_Integer) 3))));
                Var_598 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, (MR_Integer) 4))));
                Var_600 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, (MR_Integer) 6))));
                Var_601 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, (MR_Integer) 7))));
                Var_602 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_603 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, (MR_Integer) 9))));
                Var_604 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_138_138, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_142_142 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 0) = ((MR_Box) (Var_594));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 1) = ((MR_Box) (Var_595));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 2) = ((MR_Box) (Var_141));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 3) = ((MR_Box) (Var_597));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 4) = ((MR_Box) (Var_598));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 5) = ((MR_Box) (KnownSizeMap_209));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 6) = ((MR_Box) (Var_600));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 7) = ((MR_Box) (Var_601));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 8) = (MR_Box) ((MR_Unsigned) (Var_602));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 9) = ((MR_Box) (Var_603));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_142_142, 10) = ((MR_Box) (Var_604));
                }
                {
                  Disjuncts_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Disjuncts_73, 0) = ((MR_Box) (First_206));
                  MR_hl_field(MR_mktag(1), Disjuncts_73, 1) = ((MR_Box) (Later_207));
                }
              }
              transform_hlds__size_prof__update_rev_maps_2_p_0(STATE_VARIABLE_Info_142_142, &STATE_VARIABLE_Info_143_143);
              transform_hlds__size_prof__update_target_map_2_p_0(STATE_VARIABLE_Info_143_143, STATE_VARIABLE_Info_96);
              {
                GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 1) = ((MR_Box) (Disjuncts_73));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word CanFail_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Cases_71;
              MR_Word STATE_VARIABLE_Info_153_153;
              MR_Word STATE_VARIABLE_Info_154_154;

              if ((Cases0_63 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "empty switch");
                  return;
                }
              }
              else
              {
                MR_Word First0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases0_63, (MR_Integer) 0))));
                MR_Word Later0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases0_63, (MR_Integer) 1))));
                MR_Word RevTypeCtorMap0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
                MR_Word First_67;
                MR_Word Later_68;
                MR_Word TypeInfoMap_69;
                MR_Word KnownSizeMap_70;
                MR_Word STATE_VARIABLE_Info_147_147;
                MR_Word STATE_VARIABLE_Info_148_148;
                MR_Word STATE_VARIABLE_Info_149_149;
                MR_Word Var_150;
                MR_Word Var_152;
                MR_Word TargetTypeInfoMap0_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
                MR_Word TypeInfoMap0_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
                MR_Word RevTypeInfoMap0_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
                MR_Word TypeCtorMap0_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
                MR_Word KnownSizeMap0_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
                MR_Word Var_490;
                MR_Word Var_491;
                MR_Word Var_493;
                MR_Word Var_494;
                MR_Word Var_496;
                MR_Word Var_497;
                MR_Word Var_498;
                MR_Word Var_499;
                MR_Word Var_500;
                MR_Word Var_468;
                MR_Word Var_470;
                MR_Word Var_471;
                MR_Word Var_472;
                MR_Word Var_473;
                MR_Word Var_474;
                MR_Word Var_475;
                MR_Word Var_476;
                MR_Word Var_477;
                MR_Word Var_478;
                MR_Word Var_480;
                MR_Word Var_481;
                MR_Word Var_482;
                MR_Word Var_483;
                MR_Word Var_484;
                MR_Word Var_485;
                MR_Word Var_486;
                MR_Word Var_487;
                MR_Word Var_488;
                MR_Word Var_489;

                transform_hlds__size_prof__size_prof_process_switch_14_p_0(First0_64, &First_67, Later0_65, &Later_68, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_147_147, TargetTypeInfoMap0_183, TypeInfoMap0_184, RevTypeInfoMap0_185, TypeCtorMap0_186, RevTypeCtorMap0_66, &TypeInfoMap_69, KnownSizeMap0_187, &KnownSizeMap_70);
                Var_468 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 0))));
                Var_470 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 2))));
                Var_471 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 3))));
                Var_472 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 4))));
                Var_473 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 5))));
                Var_474 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 6))));
                Var_475 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 7))));
                Var_476 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_477 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 9))));
                Var_478 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_147_147, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_148_148 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 0) = ((MR_Box) (Var_468));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 1) = ((MR_Box) (TypeInfoMap_69));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 2) = ((MR_Box) (Var_470));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 3) = ((MR_Box) (Var_471));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 4) = ((MR_Box) (Var_472));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 5) = ((MR_Box) (Var_473));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 6) = ((MR_Box) (Var_474));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 7) = ((MR_Box) (Var_475));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 8) = (MR_Box) ((MR_Unsigned) (Var_476));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 9) = ((MR_Box) (Var_477));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, 10) = ((MR_Box) (Var_478));
                }
                Var_150 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
                Var_480 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 1))));
                Var_481 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 2))));
                Var_482 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 3))));
                Var_483 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 4))));
                Var_484 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 5))));
                Var_485 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 6))));
                Var_486 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 7))));
                Var_487 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_488 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 9))));
                Var_489 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_148_148, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_149_149 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 0) = ((MR_Box) (Var_150));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 1) = ((MR_Box) (Var_480));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 2) = ((MR_Box) (Var_481));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 3) = ((MR_Box) (Var_482));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 4) = ((MR_Box) (Var_483));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 5) = ((MR_Box) (Var_484));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 6) = ((MR_Box) (Var_485));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 7) = ((MR_Box) (Var_486));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 8) = (MR_Box) ((MR_Unsigned) (Var_487));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 9) = ((MR_Box) (Var_488));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, 10) = ((MR_Box) (Var_489));
                }
                Var_152 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                Var_490 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, (MR_Integer) 0))));
                Var_491 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, (MR_Integer) 1))));
                Var_493 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, (MR_Integer) 3))));
                Var_494 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, (MR_Integer) 4))));
                Var_496 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, (MR_Integer) 6))));
                Var_497 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, (MR_Integer) 7))));
                Var_498 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_499 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, (MR_Integer) 9))));
                Var_500 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_149_149, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_153_153 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 0) = ((MR_Box) (Var_490));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 1) = ((MR_Box) (Var_491));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 2) = ((MR_Box) (Var_152));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 3) = ((MR_Box) (Var_493));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 4) = ((MR_Box) (Var_494));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 5) = ((MR_Box) (KnownSizeMap_70));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 6) = ((MR_Box) (Var_496));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 7) = ((MR_Box) (Var_497));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 8) = (MR_Box) ((MR_Unsigned) (Var_498));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 9) = ((MR_Box) (Var_499));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_153_153, 10) = ((MR_Box) (Var_500));
                }
                {
                  Cases_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Cases_71, 0) = ((MR_Box) (First_67));
                  MR_hl_field(MR_mktag(1), Cases_71, 1) = ((MR_Box) (Later_68));
                }
              }
              transform_hlds__size_prof__update_rev_maps_2_p_0(STATE_VARIABLE_Info_153_153, &STATE_VARIABLE_Info_154_154);
              transform_hlds__size_prof__update_target_map_2_p_0(STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_96);
              {
                GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 1) = ((MR_Box) (SwitchVar_61));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 2) = (MR_Box) ((MR_Unsigned) (CanFail_62));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 3) = ((MR_Box) (Cases_71));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SubGoal0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Reason_92;
              MR_Word SubGoal_93;
              MR_Word TermVar_91;
              MR_Word Var_99;

              succeeded = ((((MR_tag((MR_Word) Reason0_89)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_89, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_89, (MR_Integer) 1))));
                Var_99 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_89, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_99 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                {
                  Reason_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Reason_92, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), Reason_92, 1) = ((MR_Box) (TermVar_91));
                  MR_hl_field(MR_mktag(3), Reason_92, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                }
              }
              else
                Reason_92 = Reason0_89;
              transform_hlds__size_prof__size_prof_process_goal_4_p_0(SubGoal0_90, &SubGoal_93, STATE_VARIABLE_Info_0_95, STATE_VARIABLE_Info_96);
              {
                GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 1) = ((MR_Box) (Reason_92));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 2) = ((MR_Box) (SubGoal_93));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Quant_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_78;
              MR_Word Then_79;
              MR_Word TargetTypeInfoMapThen_80;
              MR_Word TypeInfoMapThen_81;
              MR_Word KnownSizeMapThen_82;
              MR_Word ElseTargetTypeInfoMap_83;
              MR_Word Else_84;
              MR_Word TypeInfoMapElse_85;
              MR_Word KnownSizeMapElse_86;
              MR_Word STATE_VARIABLE_Info_109_109;
              MR_Word Var_110;
              MR_Word STATE_VARIABLE_Info_111_111;
              MR_Word STATE_VARIABLE_Info_112_112;
              MR_Word STATE_VARIABLE_Info_113_113;
              MR_Word STATE_VARIABLE_Info_120_120;
              MR_Word STATE_VARIABLE_Info_121_121;
              MR_Word STATE_VARIABLE_Info_122_122;
              MR_Word Var_124;
              MR_Word STATE_VARIABLE_Info_125_125;
              MR_Word STATE_VARIABLE_Info_126_126;
              MR_Word TargetTypeInfoMap0_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
              MR_Word TypeInfoMap0_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
              MR_Word RevTypeInfoMap0_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
              MR_Word TypeCtorMap0_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
              MR_Word KnownSizeMap0_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
              MR_Word RevTypeCtorMap0_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
              MR_Word TypeInfoMap_240;
              MR_Word KnownSizeMap_241;
              MR_Word Var_778;
              MR_Word Var_779;
              MR_Word Var_780;
              MR_Word Var_781;
              MR_Word Var_782;
              MR_Word Var_787;
              MR_Word Var_789;
              MR_Word Var_790;
              MR_Word Var_791;
              MR_Word Var_792;
              MR_Word Var_793;
              MR_Word Var_795;
              MR_Word Var_798;
              MR_Word Var_800;
              MR_Word Var_801;
              MR_Word Var_802;
              MR_Word Var_803;
              MR_Word Var_804;
              MR_Word Var_806;
              MR_Word Var_808;
              MR_Word Var_809;
              MR_Word Var_811;
              MR_Word Var_812;
              MR_Word Var_813;
              MR_Word Var_814;
              MR_Word Var_815;
              MR_Word Var_816;
              MR_Word Var_817;
              MR_Word Var_819;
              MR_Word Var_820;
              MR_Word Var_822;
              MR_Word Var_823;
              MR_Word Var_824;
              MR_Word Var_825;
              MR_Word Var_826;
              MR_Word Var_870;
              MR_Word Var_871;
              MR_Word Var_872;
              MR_Word Var_873;
              MR_Word Var_875;
              MR_Word Var_876;
              MR_Word Var_877;
              MR_Word Var_878;
              MR_Word Var_879;
              MR_Word Var_720;
              MR_Word Var_721;
              MR_Word Var_722;
              MR_Word Var_723;
              MR_Word Var_725;
              MR_Word Var_726;
              MR_Word Var_727;
              MR_Word Var_728;
              MR_Word Var_729;
              MR_Word Var_730;
              MR_Word Var_731;
              MR_Word Var_732;
              MR_Word Var_733;
              MR_Word Var_734;
              MR_Word Var_736;
              MR_Word Var_737;
              MR_Word Var_738;
              MR_Word Var_739;
              MR_Word Var_740;
              MR_Word Var_741;
              MR_Word Var_858;
              MR_Word Var_860;
              MR_Word Var_861;
              MR_Word Var_862;
              MR_Word Var_863;
              MR_Word Var_864;
              MR_Word Var_865;
              MR_Word Var_866;
              MR_Word Var_867;
              MR_Word Var_868;

              Var_110 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
              Var_720 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
              Var_721 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
              Var_722 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
              Var_723 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
              Var_725 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
              Var_726 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
              Var_727 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 7))));
              Var_728 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_729 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 9))));
              Var_730 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 10))));
              {
                STATE_VARIABLE_Info_109_109 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 0) = ((MR_Box) (Var_720));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 1) = ((MR_Box) (Var_721));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 2) = ((MR_Box) (Var_722));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 3) = ((MR_Box) (Var_723));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 4) = ((MR_Box) (Var_110));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 5) = ((MR_Box) (Var_725));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 6) = ((MR_Box) (Var_726));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 7) = ((MR_Box) (Var_727));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 8) = (MR_Box) ((MR_Unsigned) (Var_728));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 9) = ((MR_Box) (Var_729));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, 10) = ((MR_Box) (Var_730));
              }
              transform_hlds__size_prof__size_prof_process_goal_4_p_0(Cond0_75, &Cond_78, STATE_VARIABLE_Info_109_109, &STATE_VARIABLE_Info_111_111);
              Var_731 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 0))));
              Var_732 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 1))));
              Var_733 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 2))));
              Var_734 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 3))));
              Var_736 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 5))));
              Var_737 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 6))));
              Var_738 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 7))));
              Var_739 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_740 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 9))));
              Var_741 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_111_111, (MR_Integer) 10))));
              {
                STATE_VARIABLE_Info_112_112 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 0) = ((MR_Box) (Var_731));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 1) = ((MR_Box) (Var_732));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 2) = ((MR_Box) (Var_733));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 3) = ((MR_Box) (Var_734));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 4) = ((MR_Box) (TargetTypeInfoMap0_234));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 5) = ((MR_Box) (Var_736));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 6) = ((MR_Box) (Var_737));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 7) = ((MR_Box) (Var_738));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 8) = (MR_Box) ((MR_Unsigned) (Var_739));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 9) = ((MR_Box) (Var_740));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 10) = ((MR_Box) (Var_741));
              }
              transform_hlds__size_prof__size_prof_process_goal_4_p_0(Then0_76, &Then_79, STATE_VARIABLE_Info_112_112, &STATE_VARIABLE_Info_113_113);
              TypeInfoMapThen_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_113_113, (MR_Integer) 1))));
              TargetTypeInfoMapThen_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_113_113, (MR_Integer) 4))));
              KnownSizeMapThen_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_113_113, (MR_Integer) 5))));
              mercury__map__union_4_p_1((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_2[6]), TargetTypeInfoMapThen_80, TargetTypeInfoMap0_234, &ElseTargetTypeInfoMap_83);
              Var_778 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_113_113, (MR_Integer) 6))));
              Var_779 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_113_113, (MR_Integer) 7))));
              Var_780 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_113_113, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_781 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_113_113, (MR_Integer) 9))));
              Var_782 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_113_113, (MR_Integer) 10))));
              Var_787 = ElseTargetTypeInfoMap_83;
              Var_789 = Var_778;
              Var_790 = Var_779;
              Var_791 = Var_780;
              Var_792 = Var_781;
              Var_793 = Var_782;
              Var_795 = TypeInfoMap0_235;
              Var_798 = Var_787;
              Var_800 = Var_789;
              Var_801 = Var_790;
              Var_802 = Var_791;
              Var_803 = Var_792;
              Var_804 = Var_793;
              Var_806 = Var_795;
              Var_808 = RevTypeInfoMap0_236;
              Var_809 = Var_798;
              Var_811 = Var_800;
              Var_812 = Var_801;
              Var_813 = Var_802;
              Var_814 = Var_803;
              Var_815 = Var_804;
              Var_816 = TypeCtorMap0_237;
              Var_817 = Var_806;
              Var_819 = Var_808;
              Var_820 = Var_809;
              Var_822 = Var_811;
              Var_823 = Var_812;
              Var_824 = Var_813;
              Var_825 = Var_814;
              Var_826 = Var_815;
              {
                STATE_VARIABLE_Info_120_120 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 0) = ((MR_Box) (Var_816));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 1) = ((MR_Box) (Var_817));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 2) = ((MR_Box) (RevTypeCtorMap0_239));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 3) = ((MR_Box) (Var_819));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 4) = ((MR_Box) (Var_820));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 5) = ((MR_Box) (KnownSizeMap0_238));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 6) = ((MR_Box) (Var_822));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 7) = ((MR_Box) (Var_823));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 8) = (MR_Box) ((MR_Unsigned) (Var_824));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 9) = ((MR_Box) (Var_825));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_120_120, 10) = ((MR_Box) (Var_826));
              }
              transform_hlds__size_prof__size_prof_process_goal_4_p_0(Else0_77, &Else_84, STATE_VARIABLE_Info_120_120, &STATE_VARIABLE_Info_121_121);
              TypeInfoMapElse_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 1))));
              KnownSizeMapElse_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 5))));
              TypeInfoMap_240 = mercury__map__common_subset_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfoMapThen_81, TypeInfoMapElse_85);
              KnownSizeMap_241 = mercury__map__common_subset_2_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), KnownSizeMapThen_82, KnownSizeMapElse_86);
              Var_858 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 0))));
              Var_860 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 2))));
              Var_861 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 3))));
              Var_862 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 4))));
              Var_863 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 5))));
              Var_864 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 6))));
              Var_865 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 7))));
              Var_866 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_867 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 9))));
              Var_868 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_121_121, (MR_Integer) 10))));
              {
                STATE_VARIABLE_Info_122_122 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 0) = ((MR_Box) (Var_858));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 1) = ((MR_Box) (TypeInfoMap_240));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 2) = ((MR_Box) (Var_860));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 3) = ((MR_Box) (Var_861));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 4) = ((MR_Box) (Var_862));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 5) = ((MR_Box) (Var_863));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 6) = ((MR_Box) (Var_864));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 7) = ((MR_Box) (Var_865));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 8) = (MR_Box) ((MR_Unsigned) (Var_866));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 9) = ((MR_Box) (Var_867));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, 10) = ((MR_Box) (Var_868));
              }
              Var_124 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
              Var_870 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, (MR_Integer) 1))));
              Var_871 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, (MR_Integer) 2))));
              Var_872 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, (MR_Integer) 3))));
              Var_873 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, (MR_Integer) 4))));
              Var_875 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, (MR_Integer) 6))));
              Var_876 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, (MR_Integer) 7))));
              Var_877 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_878 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, (MR_Integer) 9))));
              Var_879 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_122_122, (MR_Integer) 10))));
              {
                STATE_VARIABLE_Info_125_125 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 0) = ((MR_Box) (Var_124));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 1) = ((MR_Box) (Var_870));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 2) = ((MR_Box) (Var_871));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 3) = ((MR_Box) (Var_872));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 4) = ((MR_Box) (Var_873));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 5) = ((MR_Box) (KnownSizeMap_241));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 6) = ((MR_Box) (Var_875));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 7) = ((MR_Box) (Var_876));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 8) = (MR_Box) ((MR_Unsigned) (Var_877));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 9) = ((MR_Box) (Var_878));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_125_125, 10) = ((MR_Box) (Var_879));
              }
              transform_hlds__size_prof__update_rev_maps_2_p_0(STATE_VARIABLE_Info_125_125, &STATE_VARIABLE_Info_126_126);
              transform_hlds__size_prof__update_target_map_2_p_0(STATE_VARIABLE_Info_126_126, STATE_VARIABLE_Info_96);
              {
                GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 1) = ((MR_Box) (Quant_74));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 2) = ((MR_Box) (Cond_78));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 3) = ((MR_Box) (Then_79));
                MR_hl_field(MR_mktag(3), GoalExpr_22, 4) = ((MR_Box) (Else_84));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TargetTypeInfoMap_10;

    transform_hlds__size_prof__include_in_target_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TargetTypeInfoMap_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TargetTypeInfoMap_10));
  }
}

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word TargetTypeInfoMap0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    MR_Word TypeInfoMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    MR_Word TargetTypeInfoList_6;
    MR_Word TargetTypeInfoMap_7;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Box conv1_TargetTypeInfoMap_7;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TargetTypeInfoMap0_4, &TargetTypeInfoList_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__size_prof__update_target_map_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TypeInfoMap_5));
    }
    Var_11 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
    mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[0]), (MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), Var_10, TargetTypeInfoList_6, ((MR_Box) (Var_11)), &conv1_TargetTypeInfoMap_7);
    TargetTypeInfoMap_7 = ((MR_Word) (conv1_TargetTypeInfoMap_7));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
    Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 9))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TargetTypeInfoMap_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_41));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_43));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word TypeInfoList_4;
    MR_Word TypeCtorList_5;
    MR_Word VarCounts0_6;
    MR_Word VarCounts1_7;
    MR_Word VarCounts_8;
    MR_Word RevTypeInfoMap_9;
    MR_Word RevTypeCtorMap_10;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Var_13, &TypeInfoList_4);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Var_14, &TypeCtorList_5);
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &VarCounts0_6);
    transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(TypeInfoList_4, VarCounts0_6, &VarCounts1_7);
    transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(TypeCtorList_5, VarCounts1_7, &VarCounts_8);
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    transform_hlds__size_prof__construct_rev_map_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeInfoList_4, VarCounts_8, Var_15, &RevTypeInfoMap_9);
    Var_16 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    transform_hlds__size_prof__construct_rev_map_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtorList_5, VarCounts_8, Var_16, &RevTypeCtorMap_10);
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 4))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 5))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 6))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 7))));
    Var_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 9))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RevTypeCtorMap_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RevTypeInfoMap_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_47));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_49));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarCounts_0_2,
  MR_Word * STATE_VARIABLE_VarCounts_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarCounts_3 = STATE_VARIABLE_VarCounts_0_2;
    else
    {
      MR_Word Var_8;
      MR_Word AssocList_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_VarCounts_16_16;
      MR_Integer Count_11;
      MR_Box conv0_Count_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarCounts_0_2;

      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_VarCounts_0_2, ((MR_Box) (Var_8)), &conv0_Count_11);
      if (succeeded)
      {
        Count_11 = ((MR_Integer) (conv0_Count_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Count_11 + (MR_Unsigned) (MR_Integer) 1);

        mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_8)), ((MR_Box) (Var_15)), STATE_VARIABLE_VarCounts_0_2, &STATE_VARIABLE_VarCounts_16_16);
      }
      else
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_8)), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_VarCounts_0_2, &STATE_VARIABLE_VarCounts_16_16);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AssocList_9;
      next_value_of_STATE_VARIABLE_VarCounts_0_2 = STATE_VARIABLE_VarCounts_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarCounts_0_2 = next_value_of_STATE_VARIABLE_VarCounts_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__1_1,
  MR_Word VarCounts_2,
  MR_Word STATE_VARIABLE_RevMap_0_3,
  MR_Word * STATE_VARIABLE_RevMap_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevMap_4 = STATE_VARIABLE_RevMap_0_3;
    else
    {
      MR_Box T_9;
      MR_Word Var_10;
      MR_Word AssocList_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Count_14;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevMap_18_18;
      MR_Box conv0_Count_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevMap_0_3;

      T_9 = (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarCounts_2, ((MR_Box) (Var_10)), &conv0_Count_14);
      Count_14 = ((MR_Integer) (conv0_Count_14));
      succeeded = (Count_14 == (MR_Integer) 1);
      if (succeeded)
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfo_for_T_20, ((MR_Box) (Var_10)), T_9, STATE_VARIABLE_RevMap_0_3, &STATE_VARIABLE_RevMap_18_18);
      else
        STATE_VARIABLE_RevMap_18_18 = STATE_VARIABLE_RevMap_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AssocList_11;
      next_value_of_STATE_VARIABLE_RevMap_0_3 = STATE_VARIABLE_RevMap_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevMap_0_3 = next_value_of_STATE_VARIABLE_RevMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word Args_11,
  MR_Word ArgModes_12,
  MR_Word Goal0_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;
    MR_Word VarType_16;
    MR_Word VarTypeCtor_17;
    MR_Word VarTypeCtorModule_18;
    MR_String VarTypeCtorName_19;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 7))));
    MR_Integer Var_20;
    MR_Word Var_47;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    hlds__vartypes__lookup_var_type_3_p_0(Var_30, Var_9, &VarType_16);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_16, &VarTypeCtor_17);
    check_hlds__type_util__type_ctor_module_name_arity_4_p_0(VarTypeCtor_17, &VarTypeCtorModule_18, &VarTypeCtorName_19, &Var_20);
    Var_47 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(VarTypeCtorModule_18, Var_47);
    if (succeeded)
    {
      // binary string simple lookup switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(VarTypeCtorName_19, ((&transform_hlds__size_prof_vector_common_7[4 + mid_2]))->transform_hlds__size_prof__vector_common_type_7_0__vct_7_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_0:;
    }
    if (succeeded)
    {
      *GoalExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
    }
    else
    {
      if (((((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(Var_9, Args_11, ArgModes_12, Goal0_13, GoalExpr_14, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      else
      {
        MR_Word KnownSizeMap0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 5))));
        MR_Word KnownSizeMap_55;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;

        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_9)), ((MR_Box) ((MR_Integer) 0)), KnownSizeMap0_54, &KnownSizeMap_55);
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 0))));
        Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 1))));
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 2))));
        Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 3))));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 4))));
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 6))));
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 7))));
        Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 8))) & (MR_Integer) 1);
        Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 9))));
        Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 10))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_29 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (KnownSizeMap_55));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_75));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_77));
        }
        *GoalExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__773__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
  MR_Word Var_8,
  MR_Word Args_9,
  MR_Word ArgModes_10,
  MR_Word UnifyGoal_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;
    MR_Word DefinedArgs_14;
    MR_Word GoalExpr0_16;
    MR_Word GoalInfo0_17;
    MR_Word Context_18;
    MR_Integer KnownSize_19;
    MR_Word MaybeDynamicSizeVar_20;
    MR_Word ArgGoals_21;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word _NonDefArgs_15;

    transform_hlds__size_prof__find_defined_args_5_p_0(Args_9, ArgModes_10, &DefinedArgs_14, &_NonDefArgs_15, STATE_VARIABLE_Info_0_28);
    GoalExpr0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyGoal_11, (MR_Integer) 0))));
    GoalInfo0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyGoal_11, (MR_Integer) 1))));
    Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_17);
    transform_hlds__size_prof__size_prof_process_args_9_p_0(DefinedArgs_14, (MR_Integer) 0, &KnownSize_19, (MR_Word) ((MR_Unsigned) 0U), &MaybeDynamicSizeVar_20, Context_18, &ArgGoals_21, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32);
    if ((MaybeDynamicSizeVar_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_52;

      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ArgGoals_21));
        MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_deconstruct\'/7", (MR_String) "nonempty ArgGoals");
      *GoalExpr_12 = GoalExpr0_16;
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_32_32;
    }
    else
    {
      MR_Word SizeVar0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDynamicSizeVar_20, (MR_Integer) 0))));
      MR_Word SizeVar_23;
      MR_Word SizeGoals_24;
      MR_Word TermSizeProfBuiltin_25;
      MR_Word UpdateGoal_26;
      MR_Word Goals_27;
      MR_Word Var_34;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;

      transform_hlds__size_prof__generate_size_var_7_p_0(SizeVar0_22, KnownSize_19, Context_18, &SizeVar_23, &SizeGoals_24, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_29);
      TermSizeProfBuiltin_25 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_29, (MR_Integer) 10))));
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (SizeVar_23));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      Var_42 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
      hlds__goal_util__generate_simple_call_12_p_0(Var_34, TermSizeProfBuiltin_25, (MR_String) "increment_size", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Var_40, (MR_Word) ((MR_Unsigned) 0U), Var_42, Context_18, &UpdateGoal_26);
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (UnifyGoal_11));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (UpdateGoal_26));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SizeGoals_24, Var_49);
      Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoals_21, Var_48);
      Goals_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_45, Var_47);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_12 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_27));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
  MR_Word LHS_15,
  MR_Word RHS_16,
  MR_Word UniMode_17,
  MR_Word UnifyContext_18,
  MR_Word Var_19,
  MR_Word ConsId_20,
  MR_Word Args_21,
  MR_Word ArgModes_22,
  MR_Word How_23,
  MR_Word Unique_24,
  MR_Word GoalInfo_25,
  MR_Word * GoalExpr_26,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  {
    MR_bool succeeded;
    MR_Word VarType_28;
    MR_Word VarTypeCtor_29;
    MR_Word VarTypeCtorModule_30;
    MR_String VarTypeCtorName_31;
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_45, (MR_Integer) 7))));
    MR_Integer Var_32;
    MR_Word Var_81;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    hlds__vartypes__lookup_var_type_3_p_0(Var_47, Var_19, &VarType_28);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_28, &VarTypeCtor_29);
    check_hlds__type_util__type_ctor_module_name_arity_4_p_0(VarTypeCtor_29, &VarTypeCtorModule_30, &VarTypeCtorName_31, &Var_32);
    Var_81 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(VarTypeCtorModule_30, Var_81);
    if (succeeded)
    {
      // binary string simple lookup switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(VarTypeCtorName_31, ((&transform_hlds__size_prof_vector_common_7[0 + mid_2]))->transform_hlds__size_prof__vector_common_type_7_0__vct_7_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_0:;
    }
    if (succeeded)
    {
      MR_Word Unification_39;

      succeeded = (strcmp(VarTypeCtorName_31, (MR_String) "type_info") == 0);
      if (succeeded)
      {
        MR_Word TypeCtorInfoVar_34;
        MR_Word ArgTypeInfoVars_35;

        succeeded = ((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeCtorInfoVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 0))));
            ArgTypeInfoVars_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_21, (MR_Integer) 1))));
          }
        }
        if (succeeded)
          transform_hlds__size_prof__record_known_type_info_5_p_0(Var_19, TypeCtorInfoVar_34, ArgTypeInfoVars_35, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
        else
        {
          MR_Word M_36;
          MR_String N_37;
          MR_Integer A_38;

          succeeded = ((((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 19)));
          if (succeeded)
          {
            M_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_20, (MR_Integer) 1))));
            N_37 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_20, (MR_Integer) 2))));
            A_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_20, (MR_Integer) 3))));
            transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(Var_19, M_36, N_37, A_38, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_info");
              return;
            }
          }
        }
      }
      else
      {
        succeeded = (strcmp(VarTypeCtorName_31, (MR_String) "type_ctor_info") == 0);
        if (succeeded)
        {
          MR_Word M_61;
          MR_String N_62;
          MR_Integer A_63;

          succeeded = ((((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 19)));
          if (succeeded)
          {
            M_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_20, (MR_Integer) 1))));
            N_62 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_20, (MR_Integer) 2))));
            A_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_20, (MR_Integer) 3))));
            transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(Var_19, M_61, N_62, A_63, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_ctor_info");
              return;
            }
          }
        }
        else
          *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_0_45;
      }
      {
        Unification_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_39, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), Unification_39, 1) = ((MR_Box) (ConsId_20));
        MR_hl_field(MR_mktag(0), Unification_39, 2) = ((MR_Box) (Args_21));
        MR_hl_field(MR_mktag(0), Unification_39, 3) = ((MR_Box) (ArgModes_22));
        MR_hl_field(MR_mktag(0), Unification_39, 4) = ((MR_Box) (How_23));
        MR_hl_field(MR_mktag(0), Unification_39, 5) = (MR_Box) ((MR_Unsigned) (Unique_24));
        MR_hl_field(MR_mktag(0), Unification_39, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_16));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UniMode_17));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_39));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_18));
      }
    }
    else
    {
      succeeded = ((((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(LHS_15, RHS_16, UniMode_17, UnifyContext_18, Var_19, ConsId_20, Args_21, ArgModes_22, How_23, Unique_24, GoalInfo_25, GoalExpr_26, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
      else
      {
        MR_Word Unification_67;

        transform_hlds__size_prof__record_known_size_4_p_0(Var_19, (MR_Integer) 0, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
        {
          Unification_67 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unification_67, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(0), Unification_67, 1) = ((MR_Box) (ConsId_20));
          MR_hl_field(MR_mktag(0), Unification_67, 2) = ((MR_Box) (Args_21));
          MR_hl_field(MR_mktag(0), Unification_67, 3) = ((MR_Box) (ArgModes_22));
          MR_hl_field(MR_mktag(0), Unification_67, 4) = ((MR_Box) (How_23));
          MR_hl_field(MR_mktag(0), Unification_67, 5) = (MR_Box) ((MR_Unsigned) (Unique_24));
          MR_hl_field(MR_mktag(0), Unification_67, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_26 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_16));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UniMode_17));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_67));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_18));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__730__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
  MR_Word LHS_16,
  MR_Word RHS_17,
  MR_Word UniMode_18,
  MR_Word UnifyContext_19,
  MR_Word Var_20,
  MR_Word ConsId_22,
  MR_Word Args_23,
  MR_Word ArgModes_24,
  MR_Word How_25,
  MR_Word Unique_26,
  MR_Word GoalInfo0_27,
  MR_Word * GoalExpr_28,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  {
    MR_bool succeeded;
    MR_Integer FunctorSize_30;
    MR_Word DefinedArgs_31;
    MR_Word NonDefinedArgs_32;
    MR_Word Context_33;
    MR_Integer KnownSize_34;
    MR_Word MaybeDynamicSizeVar_35;
    MR_Word ArgGoals_36;
    MR_Word STATE_VARIABLE_Info_52_52;
    MR_Word TransformOp_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_49, (MR_Integer) 8))) & (MR_Integer) 1);

    switch (TransformOp_81) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        FunctorSize_30 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        {
          FunctorSize_30 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Args_23);
        }
        break;
    }
    transform_hlds__size_prof__find_defined_args_5_p_0(Args_23, ArgModes_24, &DefinedArgs_31, &NonDefinedArgs_32, STATE_VARIABLE_Info_0_49);
    Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_27);
    transform_hlds__size_prof__size_prof_process_args_9_p_0(DefinedArgs_31, FunctorSize_30, &KnownSize_34, (MR_Word) ((MR_Unsigned) 0U), &MaybeDynamicSizeVar_35, Context_33, &ArgGoals_36, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_52_52);
    if ((MaybeDynamicSizeVar_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Unification_39;
      MR_Word Var_65;
      MR_Word Var_70;
      MR_Word Var_72;
      MR_Word Var_73;

      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1));
        MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (ArgGoals_36));
        MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_construct\'/15", (MR_String) "nonempty ArgGoals");
      if ((NonDefinedArgs_32 == (MR_Word) ((MR_Unsigned) 0U)))
        transform_hlds__size_prof__record_known_size_4_p_0(Var_20, KnownSize_34, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_50);
      else
        *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_52_52;
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (KnownSize_34));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
      }
      {
        Unification_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_39, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), Unification_39, 1) = ((MR_Box) (ConsId_22));
        MR_hl_field(MR_mktag(0), Unification_39, 2) = ((MR_Box) (Args_23));
        MR_hl_field(MR_mktag(0), Unification_39, 3) = ((MR_Box) (ArgModes_24));
        MR_hl_field(MR_mktag(0), Unification_39, 4) = ((MR_Box) (How_25));
        MR_hl_field(MR_mktag(0), Unification_39, 5) = (MR_Box) ((MR_Unsigned) (Unique_26));
        MR_hl_field(MR_mktag(0), Unification_39, 6) = ((MR_Box) (Var_70));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_28 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_17));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UniMode_18));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_39));
        MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_19));
      }
    }
    else
    {
      MR_Word SizeVar0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDynamicSizeVar_35, (MR_Integer) 0))));
      MR_Word SizeVar_41;
      MR_Word SizeGoals_42;
      MR_Word UnifyExpr_43;
      MR_Word NonLocals0_44;
      MR_Word NonLocals_45;
      MR_Word GoalInfo_46;
      MR_Word UnifyGoal_47;
      MR_Word Goals_48;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Unification_74;

      transform_hlds__size_prof__generate_size_var_7_p_0(SizeVar0_40, KnownSize_34, Context_33, &SizeVar_41, &SizeGoals_42, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_50);
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (SizeVar_41));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
      }
      {
        Unification_74 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_74, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), Unification_74, 1) = ((MR_Box) (ConsId_22));
        MR_hl_field(MR_mktag(0), Unification_74, 2) = ((MR_Box) (Args_23));
        MR_hl_field(MR_mktag(0), Unification_74, 3) = ((MR_Box) (ArgModes_24));
        MR_hl_field(MR_mktag(0), Unification_74, 4) = ((MR_Box) (How_25));
        MR_hl_field(MR_mktag(0), Unification_74, 5) = (MR_Box) ((MR_Unsigned) (Unique_26));
        MR_hl_field(MR_mktag(0), Unification_74, 6) = ((MR_Box) (Var_54));
      }
      {
        UnifyExpr_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), UnifyExpr_43, 0) = ((MR_Box) (LHS_16));
        MR_hl_field(MR_mktag(1), UnifyExpr_43, 1) = ((MR_Box) (RHS_17));
        MR_hl_field(MR_mktag(1), UnifyExpr_43, 2) = ((MR_Box) (UniMode_18));
        MR_hl_field(MR_mktag(1), UnifyExpr_43, 3) = ((MR_Box) (Unification_74));
        MR_hl_field(MR_mktag(1), UnifyExpr_43, 4) = ((MR_Box) (UnifyContext_19));
      }
      NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_27);
      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_41, NonLocals0_44, &NonLocals_45);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_45, GoalInfo0_27, &GoalInfo_46);
      {
        UnifyGoal_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnifyGoal_47, 0) = ((MR_Box) (UnifyExpr_43));
        MR_hl_field(MR_mktag(0), UnifyGoal_47, 1) = ((MR_Box) (GoalInfo_46));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (UnifyGoal_47));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (SizeGoals_42));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ArgGoals_36));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
      }
      Goals_48 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_58);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_28 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_48));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word * DefinedArgs_8,
  MR_Word * NonDefinedArgs_9,
  MR_Word Info_10)
{
  {
    MR_bool succeeded;

    if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((Modes_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *DefinedArgs_8 = (MR_Word) ((MR_Unsigned) 0U);
        *NonDefinedArgs_9 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0))));

      if ((Modes_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word FirstMode_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_7, (MR_Integer) 0))));
        MR_Word LaterModes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_7, (MR_Integer) 1))));
        MR_Word LaterDefinedArgs_19;
        MR_Word LaterNonDefinedArgs_20;
        MR_Word ModuleInfo_29;
        MR_Word LHSFromToInsts_30;
        MR_Word CellInitInst_32;
        MR_Word CellFinalInst_33;

        transform_hlds__size_prof__find_defined_args_5_p_0(Var_25, LaterModes_18, &LaterDefinedArgs_19, &LaterNonDefinedArgs_20, Info_10);
        ModuleInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 10))));
        LHSFromToInsts_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstMode_17, (MR_Integer) 0))));
        CellInitInst_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSFromToInsts_30, (MR_Integer) 0))));
        CellFinalInst_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSFromToInsts_30, (MR_Integer) 1))));
        succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_29, CellInitInst_32);
        if (succeeded)
          succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_29, CellFinalInst_33);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *DefinedArgs_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterDefinedArgs_19));
          }
          *NonDefinedArgs_9 = LaterNonDefinedArgs_20;
        }
        else
        {
          *DefinedArgs_8 = LaterDefinedArgs_19;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *NonDefinedArgs_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterNonDefinedArgs_20));
          }
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
  MR_Word SizeVar0_8,
  MR_Integer KnownSize_9,
  MR_Word Context_10,
  MR_Word * SizeVar_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded = (KnownSize_9 == (MR_Integer) 0);

    if (succeeded)
    {
      *SizeVar_11 = SizeVar0_8;
      *Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word VarSet0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 6))));
      MR_Word VarTypes0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 7))));
      MR_Word KnownSizeGoal_16;
      MR_Word KnownSizeVar_17;
      MR_Word VarSet1_18;
      MR_Word VarTypes1_19;
      MR_Word TermSizeProfModule_20;
      MR_Word AddGoal_21;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;

      hlds__make_goal__make_int_const_construction_alloc_8_p_0(KnownSize_9, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_5[2])), &KnownSizeGoal_16, &KnownSizeVar_17, VarSet0_14, &VarSet1_18, VarTypes0_15, &VarTypes1_19);
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 4))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 5))));
      Var_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 8))) & (MR_Integer) 1);
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 9))));
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 10))));
      {
        STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 5) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 6) = ((MR_Box) (VarSet1_18));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 7) = ((MR_Box) (VarTypes1_19));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 8) = (MR_Box) ((MR_Unsigned) (Var_74));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 9) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_27_27, 10) = ((MR_Box) (Var_76));
      }
      Var_28 = parse_tree__builtin_lib_types__int_type_0_f_0();
      transform_hlds__size_prof__get_new_var_5_p_0(Var_28, (MR_String) "FinalSizeVar", SizeVar_11, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_23);
      TermSizeProfModule_20 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_23, (MR_Integer) 10))));
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (*SizeVar_11));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (KnownSizeVar_17));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (SizeVar0_8));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_41));
      }
      Var_39 = hlds__instmap__instmap_delta_bind_var_1_f_0(*SizeVar_11);
      hlds__goal_util__generate_simple_call_12_p_0(Var_31, TermSizeProfModule_20, (MR_String) "term_size_plus", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_5[3])), (MR_Integer) 0, (MR_Integer) 0, Var_37, (MR_Word) ((MR_Unsigned) 0U), Var_39, Context_10, &AddGoal_21);
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (AddGoal_21));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (KnownSizeGoal_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_44));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_KnownSize_0_2,
  MR_Integer * STATE_VARIABLE_KnownSize_3,
  MR_Word STATE_VARIABLE_MaybeSizeVar_0_4,
  MR_Word * STATE_VARIABLE_MaybeSizeVar_5,
  MR_Word Context_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_MaybeSizeVar_5 = STATE_VARIABLE_MaybeSizeVar_0_4;
      *STATE_VARIABLE_KnownSize_3 = STATE_VARIABLE_KnownSize_0_2;
    }
    else
    {
      MR_Word Arg_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_27;
      MR_Word ArgGoals_29;
      MR_Word LaterGoals_33;
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
      MR_Integer STATE_VARIABLE_KnownSize_42_42;
      MR_Word STATE_VARIABLE_MaybeSizeVar_45_45;
      MR_Word STATE_VARIABLE_Info_46_46;
      MR_Integer ArgSize_28;
      MR_Word Var_41;
      MR_Box conv0_ArgSize_28;

      hlds__vartypes__lookup_var_type_3_p_0(Var_40, Arg_20, &Type_27);
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_41, ((MR_Box) (Arg_20)), &conv0_ArgSize_28);
      if (succeeded)
      {
        ArgSize_28 = ((MR_Integer) (conv0_ArgSize_28));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        STATE_VARIABLE_KnownSize_42_42 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_KnownSize_0_2 + (MR_Unsigned) ArgSize_28);
        ArgGoals_29 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_46_46 = STATE_VARIABLE_Info_0_8;
        STATE_VARIABLE_MaybeSizeVar_45_45 = STATE_VARIABLE_MaybeSizeVar_0_4;
      }
      else
      {
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 10))));

        succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(Var_43, Type_27);
        if (succeeded)
        {
          ArgGoals_29 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_46_46 = STATE_VARIABLE_Info_0_8;
          STATE_VARIABLE_MaybeSizeVar_45_45 = STATE_VARIABLE_MaybeSizeVar_0_4;
        }
        else
        {
          MR_Word TypeInfoVar_30;
          MR_Word TypeInfoGoals_31;
          MR_Word SizeGoal_32;
          MR_Word STATE_VARIABLE_Info_44_44;
          MR_Word Var_47;

          transform_hlds__size_prof__make_type_info_6_p_0(Context_6, Type_27, &TypeInfoVar_30, &TypeInfoGoals_31, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_44_44);
          transform_hlds__size_prof__make_size_goal_8_p_0(TypeInfoVar_30, Arg_20, Context_6, &SizeGoal_32, STATE_VARIABLE_MaybeSizeVar_0_4, &STATE_VARIABLE_MaybeSizeVar_45_45, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_46_46);
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (SizeGoal_32));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfoGoals_31, Var_47, &ArgGoals_29);
        }
        STATE_VARIABLE_KnownSize_42_42 = STATE_VARIABLE_KnownSize_0_2;
      }
      transform_hlds__size_prof__size_prof_process_args_9_p_0(Args_21, STATE_VARIABLE_KnownSize_42_42, STATE_VARIABLE_KnownSize_3, STATE_VARIABLE_MaybeSizeVar_45_45, STATE_VARIABLE_MaybeSizeVar_5, Context_6, &LaterGoals_33, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_9);
      *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoals_29, LaterGoals_33);
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
  MR_Word TypeInfoVar_9,
  MR_Word Arg_10,
  MR_Word Context_11,
  MR_Word * SizeGoal_12,
  MR_Word MaybeSizeVar0_13,
  MR_Word * MaybeSizeVar_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_Word SizeVar_16;
    MR_String Pred_18;
    MR_Word Args_19;
    MR_Word TermSizeProfBuiltin_20;
    MR_Word Var_23;
    MR_Word Var_33;
    MR_Word Var_39;

    Var_23 = parse_tree__builtin_lib_types__int_type_0_f_0();
    transform_hlds__size_prof__get_new_var_5_p_0(Var_23, (MR_String) "SizeVar", &SizeVar_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    if ((MaybeSizeVar0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_26;
      MR_Word Var_27;

      Pred_18 = (MR_String) "measure_size";
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (SizeVar_16));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Arg_10));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
      }
      {
        Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Args_19, 0) = ((MR_Box) (TypeInfoVar_9));
        MR_hl_field(MR_mktag(1), Args_19, 1) = ((MR_Box) (Var_26));
      }
    }
    else
    {
      MR_Word SizeVar0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSizeVar0_13, (MR_Integer) 0))));
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;

      Pred_18 = (MR_String) "measure_size_acc";
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (SizeVar_16));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (SizeVar0_17));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Arg_10));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
      }
      {
        Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Args_19, 0) = ((MR_Box) (TypeInfoVar_9));
        MR_hl_field(MR_mktag(1), Args_19, 1) = ((MR_Box) (Var_29));
      }
    }
    TermSizeProfBuiltin_20 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_22, (MR_Integer) 10))));
    Var_39 = hlds__instmap__instmap_delta_bind_var_1_f_0(SizeVar_16);
    hlds__goal_util__generate_simple_call_12_p_0(Var_33, TermSizeProfBuiltin_20, Pred_18, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Args_19, (MR_Word) ((MR_Unsigned) 0U), Var_39, Context_11, SizeGoal_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeSizeVar_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SizeVar_16));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
  MR_Word Type_6,
  MR_String Prefix_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word VarSet0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 6))));
    MR_Word VarTypes0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 7))));
    MR_Word VarSet1_12;
    MR_Integer VarNum_13;
    MR_String VarNumStr_14;
    MR_String Name_15;
    MR_Word VarSet_16;
    MR_Word VarTypes_17;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, VarSet0_10, &VarSet1_12);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_8, &VarNum_13);
    mercury__string__int_to_string_2_p_0(VarNum_13, &VarNumStr_14);
    mercury__string__append_3_p_2(Prefix_7, VarNumStr_14, &Name_15);
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_8, Name_15, VarSet1_12, &VarSet_16);
    hlds__vartypes__add_var_type_4_p_0(*Var_8, Type_6, VarTypes0_11, &VarTypes_17);
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 0))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 2))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 5))));
    Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 9))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (VarSet_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (VarTypes_17));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_50));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_52));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
  MR_Word Context_7,
  MR_Word Type_8,
  MR_Word * TypeInfoVar_9,
  MR_Word * TypeInfoGoals_10,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfoVarPrime_12;
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 1))));
    MR_Box conv0_TypeInfoVarPrime_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Var_40, ((MR_Box) (Type_8)), &conv0_TypeInfoVarPrime_12);
    if (succeeded)
    {
      TypeInfoVarPrime_12 = ((MR_Word) (conv0_TypeInfoVarPrime_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *TypeInfoVar_9 = TypeInfoVarPrime_12;
      *TypeInfoGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
    }
    else
    {
      MR_Word TypeCtor_13;
      MR_Word ArgTypes_14;

      succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_8, &TypeCtor_13, &ArgTypes_14);
      if (succeeded)
      {
        transform_hlds__size_prof__construct_type_info_9_p_0(Context_7, Type_8, TypeCtor_13, ArgTypes_14, (MR_Integer) 1, TypeInfoVar_9, TypeInfoGoals_10, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
      }
      else
      {
        MR_Word TypeCtor_71;
        MR_Word ArgTypes_72;

        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_8, &TypeCtor_71, &ArgTypes_72);
        if (succeeded)
          if ((ArgTypes_72 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            transform_hlds__size_prof__make_type_ctor_info_6_p_0(TypeCtor_71, (MR_Word) ((MR_Unsigned) 0U), TypeInfoVar_9, TypeInfoGoals_10, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
          }
          else
          {
            transform_hlds__size_prof__construct_type_info_9_p_0(Context_7, Type_8, TypeCtor_71, ArgTypes_72, (MR_Integer) 0, TypeInfoVar_9, TypeInfoGoals_10, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
          }
        else
        {
          MR_Word TVar_19;

          succeeded = ((MR_tag((MR_Word) Type_8)) == (MR_Integer) 0);
          if (succeeded)
          {
            TVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Type_8, (MR_Integer) 0))));
            {
              MR_Word TVarLocn_21;
              MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 9))));

              hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(Var_47, TVar_19, &TVarLocn_21);
              if (((MR_tag((MR_Word) TVarLocn_21)) == (MR_Integer) 0))
              {
                *TypeInfoVar_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TVarLocn_21, (MR_Integer) 0))));
                *TypeInfoGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
              }
              else
              {
                MR_Word TypeClassInfoVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TVarLocn_21, (MR_Integer) 0))));
                MR_Integer Slot_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TVarLocn_21, (MR_Integer) 1))));
                MR_Word TargetTypeInfoMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 4))));
                MR_Word VarSet0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 6))));
                MR_Word VarTypes0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 7))));
                MR_Word VarSet1_28;
                MR_Word VarTypes1_29;
                MR_Word SlotGoal_32;
                MR_Word SlotVar_33;
                MR_Word VarSet_34;
                MR_Word VarTypes_35;
                MR_Word PrivateBuiltin_36;
                MR_Word ExtractGoal_37;
                MR_Word STATE_VARIABLE_Info_49_49;
                MR_Word STATE_VARIABLE_Info_53_53;
                MR_Word Var_54;
                MR_Word Var_60;
                MR_Word Var_62;
                MR_Word Var_63;
                MR_Word Var_64;
                MR_Word Var_67;
                MR_Word Var_144;
                MR_Word Var_145;
                MR_Word Var_146;
                MR_Word Var_147;
                MR_Word Var_148;
                MR_Word Var_149;
                MR_Word Var_152;
                MR_Word Var_153;
                MR_Word Var_154;
                MR_Word TargetVar_27;
                MR_Box conv1_TargetVar_27;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TargetTypeInfoMap_24, ((MR_Box) (Type_8)), &conv1_TargetVar_27);
                if (succeeded)
                {
                  TargetVar_27 = ((MR_Word) (conv1_TargetVar_27));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  *TypeInfoVar_9 = TargetVar_27;
                  VarSet1_28 = VarSet0_25;
                  VarTypes1_29 = VarTypes0_26;
                  STATE_VARIABLE_Info_49_49 = STATE_VARIABLE_Info_0_38;
                }
                else
                {
                  MR_Word RttiVarMaps0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 9))));
                  MR_Word RttiVarMaps_31;
                  MR_Word Var_133;
                  MR_Word Var_134;
                  MR_Word Var_135;
                  MR_Word Var_136;
                  MR_Word Var_137;
                  MR_Word Var_138;
                  MR_Word Var_139;
                  MR_Word Var_140;
                  MR_Word Var_141;
                  MR_Word Var_143;

                  check_hlds__polymorphism__new_type_info_var_raw_9_p_0(Type_8, (MR_Integer) 0, TypeInfoVar_9, VarSet0_25, &VarSet1_28, VarTypes0_26, &VarTypes1_29, RttiVarMaps0_30, &RttiVarMaps_31);
                  Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 0))));
                  Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 1))));
                  Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 2))));
                  Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 3))));
                  Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 4))));
                  Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 5))));
                  Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 6))));
                  Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 7))));
                  Var_141 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 8))) & (MR_Integer) 1);
                  Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_38, (MR_Integer) 10))));
                  {
                    STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (Var_133));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 1) = ((MR_Box) (Var_134));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (Var_135));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (Var_136));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (Var_137));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (Var_138));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (Var_139));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (Var_140));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 8) = (MR_Box) ((MR_Unsigned) (Var_141));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (RttiVarMaps_31));
                    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (Var_143));
                  }
                }
                hlds__make_goal__make_int_const_construction_alloc_8_p_0(Slot_23, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_5[1])), &SlotGoal_32, &SlotVar_33, VarSet1_28, &VarSet_34, VarTypes1_29, &VarTypes_35);
                Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 0))));
                Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 1))));
                Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 2))));
                Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 3))));
                Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 4))));
                Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 5))));
                Var_152 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 8))) & (MR_Integer) 1);
                Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 9))));
                Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 10))));
                {
                  STATE_VARIABLE_Info_53_53 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 0) = ((MR_Box) (Var_144));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 1) = ((MR_Box) (Var_145));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 2) = ((MR_Box) (Var_146));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 3) = ((MR_Box) (Var_147));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 4) = ((MR_Box) (Var_148));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 5) = ((MR_Box) (Var_149));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 6) = ((MR_Box) (VarSet_34));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 7) = ((MR_Box) (VarTypes_35));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 8) = (MR_Box) ((MR_Unsigned) (Var_152));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 9) = ((MR_Box) (Var_153));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, 10) = ((MR_Box) (Var_154));
                }
                PrivateBuiltin_36 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 10))));
                {
                  Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (*TypeInfoVar_9));
                  MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (SlotVar_33));
                  MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (TypeClassInfoVar_22));
                  MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
                }
                Var_62 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeInfoVar_9);
                hlds__goal_util__generate_simple_call_12_p_0(Var_54, PrivateBuiltin_36, (MR_String) "type_info_from_typeclass_info", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_60, (MR_Word) ((MR_Unsigned) 0U), Var_62, Context_7, &ExtractGoal_37);
                transform_hlds__size_prof__record_type_info_var_4_p_0(Type_8, *TypeInfoVar_9, STATE_VARIABLE_Info_53_53, STATE_VARIABLE_Info_39);
                {
                  Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (ExtractGoal_37));
                  MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *TypeInfoGoals_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SlotGoal_32));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_67));
                }
              }
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.make_type_info\'/6", (MR_String) "cannot happen");
              return;
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_TypeInfoVar_9;
    MR_Word conv1_TypeInfoGoals_10;
    MR_Word conv0_STATE_VARIABLE_Info_39;

    transform_hlds__size_prof__make_type_info_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_TypeInfoVar_9, &conv1_TypeInfoGoals_10, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_39);
    *wrapper_arg_2 = ((MR_Box) (conv2_TypeInfoVar_9));
    *wrapper_arg_3 = ((MR_Box) (conv1_TypeInfoGoals_10));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_39));
  }
}

static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
  MR_Word Context_10,
  MR_Word Type_11,
  MR_Word TypeCtor_12,
  MR_Word ArgTypes_13,
  MR_Word CtorIsVarArity_14,
  MR_Word * TypeInfoVar_15,
  MR_Word * TypeInfoGoals_16,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_bool succeeded;
    MR_Word ArgTypeInfoVars_18;
    MR_Word ArgTypeInfoGoalLists_19;
    MR_Word ArgTypeInfoGoals_20;
    MR_Word TypeCtorVar_21;
    MR_Word TypeCtorGoals_22;
    MR_Word FrontGoals_30;
    MR_Word ArgVars_31;
    MR_Word VarSet2_32;
    MR_Word VarTypes2_33;
    MR_Word RttiVarMaps0_34;
    MR_Word TargetTypeInfoMap_35;
    MR_Word MaybePreferredVar_37;
    MR_Word TypeInfoGoal_38;
    MR_Word VarSet_39;
    MR_Word VarTypes_40;
    MR_Word RttiVarMaps_41;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word STATE_VARIABLE_Info_46_46;
    MR_Word STATE_VARIABLE_Info_50_50;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_150;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_161;
    MR_Word Var_163;
    MR_Box conv3_STATE_VARIABLE_Info_45_45;
    MR_Word PrefTIVar_36;
    MR_Box conv4_PrefTIVar_36;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (transform_hlds__size_prof__construct_type_info_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (Context_10));
    }
    mercury__list__map2_foldl_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[2]), (MR_Word) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0), Var_44, ArgTypes_13, &ArgTypeInfoVars_18, &ArgTypeInfoGoalLists_19, ((MR_Box) (STATE_VARIABLE_Info_0_42)), &conv3_STATE_VARIABLE_Info_45_45);
    STATE_VARIABLE_Info_45_45 = ((MR_Word) (conv3_STATE_VARIABLE_Info_45_45));
    ArgTypeInfoGoals_20 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoalLists_19);
    transform_hlds__size_prof__make_type_ctor_info_6_p_0(TypeCtor_12, ArgTypes_13, &TypeCtorVar_21, &TypeCtorGoals_22, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_46_46);
    switch (CtorIsVarArity_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          FrontGoals_30 = TypeCtorGoals_22;
          {
            ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_31, 0) = ((MR_Box) (TypeCtorVar_21));
            MR_hl_field(MR_mktag(1), ArgVars_31, 1) = ((MR_Box) (ArgTypeInfoVars_18));
          }
          STATE_VARIABLE_Info_50_50 = STATE_VARIABLE_Info_46_46;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Arity_23;
          MR_Word VarSet0_24;
          MR_Word VarTypes0_25;
          MR_Word ArityGoal_26;
          MR_Word ArityVar_27;
          MR_Word VarSet1_28;
          MR_Word VarTypes1_29;
          MR_Word Var_51;
          MR_Word Var_53;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_13, &Arity_23);
          VarSet0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 6))));
          VarTypes0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 7))));
          hlds__make_goal__make_int_const_construction_alloc_8_p_0(Arity_23, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_5[0])), &ArityGoal_26, &ArityVar_27, VarSet0_24, &VarSet1_28, VarTypes0_25, &VarTypes1_29);
          Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 0))));
          Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 1))));
          Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 2))));
          Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 3))));
          Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 4))));
          Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 5))));
          Var_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 8))) & (MR_Integer) 1);
          Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 9))));
          Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_46_46, (MR_Integer) 10))));
          {
            STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (VarSet1_28));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (VarTypes1_29));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 8) = (MR_Box) ((MR_Unsigned) (Var_88));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (Var_89));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (Var_90));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (ArityGoal_26));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          FrontGoals_30 = mercury__list__append_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_22, Var_51);
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ArityVar_27));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (ArgTypeInfoVars_18));
          }
          {
            ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_31, 0) = ((MR_Box) (TypeCtorVar_21));
            MR_hl_field(MR_mktag(1), ArgVars_31, 1) = ((MR_Box) (Var_53));
          }
        }
        break;
    }
    TargetTypeInfoMap_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 4))));
    VarSet2_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 6))));
    VarTypes2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 7))));
    RttiVarMaps0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 9))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TargetTypeInfoMap_35, ((MR_Box) (Type_11)), &conv4_PrefTIVar_36);
    if (succeeded)
    {
      PrefTIVar_36 = ((MR_Word) (conv4_PrefTIVar_36));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MaybePreferredVar_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybePreferredVar_37, 0) = ((MR_Box) (PrefTIVar_36));
      }
    else
      MaybePreferredVar_37 = (MR_Word) ((MR_Unsigned) 0U);
    check_hlds__polymorphism__init_type_info_var_11_p_0(Type_11, ArgVars_31, MaybePreferredVar_37, TypeInfoVar_15, &TypeInfoGoal_38, VarSet2_32, &VarSet_39, VarTypes2_33, &VarTypes_40, RttiVarMaps0_34, &RttiVarMaps_41);
    Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 0))));
    Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 1))));
    Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 2))));
    Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 3))));
    Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 4))));
    Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 5))));
    Var_150 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 10))));
    Var_153 = Var_142;
    Var_154 = Var_143;
    Var_155 = Var_144;
    Var_156 = Var_145;
    Var_157 = Var_146;
    Var_158 = Var_147;
    Var_159 = VarSet_39;
    Var_161 = Var_150;
    Var_163 = Var_152;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_43 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_153));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_154));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_155));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_156));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_157));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_158));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_159));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (VarTypes_40));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_161));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (RttiVarMaps_41));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_163));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (TypeInfoGoal_38));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FrontGoals_30, Var_58);
    *TypeInfoGoals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_20, Var_57);
  }
}

static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word TypeArgs_8,
  MR_Word * TypeCtorVar_9,
  MR_Word * TypeCtorGoals_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorVarPrime_12;
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
    MR_Box conv0_TypeCtorVarPrime_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Var_27, ((MR_Box) (TypeCtor_7)), &conv0_TypeCtorVarPrime_12);
    if (succeeded)
    {
      TypeCtorVarPrime_12 = ((MR_Word) (conv0_TypeCtorVarPrime_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *TypeCtorVar_9 = TypeCtorVarPrime_12;
      *TypeCtorGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
    }
    else
    {
      MR_Word Type_16;
      MR_Word VarSet0_17;
      MR_Word VarTypes0_18;
      MR_Word RttiVarMaps0_19;
      MR_Word TypeCtorGoal_21;
      MR_Word VarSet_22;
      MR_Word VarTypes_23;
      MR_Word RttiVarMaps_24;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_81;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_92;
      MR_Word Var_94;
      MR_Word Purity_13;
      MR_Word PredOrFunc_14;
      MR_Word Var_20;

      succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(TypeCtor_7, &Purity_13, &PredOrFunc_14);
      if (succeeded)
        parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_13, PredOrFunc_14, TypeArgs_8, &Type_16);
      else
      {
        parse_tree__prog_type__construct_type_3_p_0(TypeCtor_7, (MR_Word) ((MR_Unsigned) 0U), &Type_16);
      }
      VarSet0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 6))));
      VarTypes0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 7))));
      RttiVarMaps0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 9))));
      check_hlds__polymorphism__init_const_type_ctor_info_var_11_p_0(Type_16, TypeCtor_7, TypeCtorVar_9, &Var_20, &TypeCtorGoal_21, VarSet0_17, &VarSet_22, VarTypes0_18, &VarTypes_23, RttiVarMaps0_19, &RttiVarMaps_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *TypeCtorGoals_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorGoal_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1))));
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4))));
      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5))));
      Var_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 8))) & (MR_Integer) 1);
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 10))));
      Var_84 = Var_73;
      Var_85 = Var_74;
      Var_86 = Var_75;
      Var_87 = Var_76;
      Var_88 = Var_77;
      Var_89 = Var_78;
      Var_90 = VarSet_22;
      Var_92 = Var_81;
      Var_94 = Var_83;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_26 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (VarTypes_23));
        MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_92));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (RttiVarMaps_24));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_94));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
  MR_Word Var_5,
  MR_Integer KnownSize_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word KnownSizeMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 5))));
    MR_Word KnownSizeMap_9;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_5)), ((MR_Box) (KnownSize_6)), KnownSizeMap0_8, &KnownSizeMap_9);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 6))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 7))));
    Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 9))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (KnownSizeMap_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_31));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_33));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_46;

    succeeded = transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1106__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_46);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_46));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
  MR_Word Var_6,
  MR_Word TypeCtorInfoVar_7,
  MR_Word ArgTypeInfoVars_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Word RevTypeCtorMap0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
    MR_Word TypeCtor0_11;
    MR_Box conv0_TypeCtor0_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RevTypeCtorMap0_10, ((MR_Box) (TypeCtorInfoVar_7)), &conv0_TypeCtor0_11);
    if (succeeded)
    {
      TypeCtor0_11 = ((MR_Word) (conv0_TypeCtor0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word RevTypeInfoMap0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
      MR_Word ArgTypes_13;
      MR_Word Var_21;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__size_prof__record_known_type_info_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (RevTypeInfoMap0_12));
      }
      succeeded = mercury__list__map_3_p_2((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_21, ArgTypeInfoVars_8, &ArgTypes_13);
      if (succeeded)
      {
        MR_Integer Arity_14;
        MR_Word SymName_15;
        MR_Word TypeCtor1_17;
        MR_Word Type_18;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_13, &Arity_14);
        SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 0))));
        {
          TypeCtor1_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor1_17, 0) = ((MR_Box) (SymName_15));
          MR_hl_field(MR_mktag(0), TypeCtor1_17, 1) = ((MR_Box) (Arity_14));
        }
        parse_tree__prog_type__construct_type_3_p_0(TypeCtor1_17, ArgTypes_13, &Type_18);
        transform_hlds__size_prof__record_type_info_var_4_p_0(Type_18, Var_6, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
      }
      else
        *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
    }
    else
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
  MR_Word Type_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word RevTypeInfoMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))));
    MR_Word TypeInfoMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    MR_Word TypeInfoMap_10;
    MR_Word RevTypeInfoMap_12;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word RevTypeInfoMap1_11;

    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), ((MR_Box) (Type_5)), ((MR_Box) (Var_6)), TypeInfoMap0_9, &TypeInfoMap_10);
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_6)), ((MR_Box) (Type_5)), RevTypeInfoMap0_8, &RevTypeInfoMap1_11);
    if (succeeded)
      RevTypeInfoMap_12 = RevTypeInfoMap1_11;
    else
      RevTypeInfoMap_12 = RevTypeInfoMap0_8;
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 4))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 5))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 6))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 7))));
    Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 9))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeInfoMap_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RevTypeInfoMap_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_45));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_47));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
  MR_Word Var_7,
  MR_Word TypeCtorModule_8,
  MR_String TypeCtorName_9,
  MR_Integer TypeCtorArity_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word TypeCtor_12;
    MR_Word TypeCtorMap0_13;
    MR_Word RevTypeCtorMap0_14;
    MR_Word TypeCtorMap_15;
    MR_Word RevTypeCtorMap_16;
    MR_Word Var_19;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (TypeCtorModule_8));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (TypeCtorName_9));
    }
    {
      TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_12, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), TypeCtor_12, 1) = ((MR_Box) (TypeCtorArity_10));
    }
    TypeCtorMap0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
    RevTypeCtorMap0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (Var_7)), TypeCtorMap0_13, &TypeCtorMap_15);
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (Var_7)), ((MR_Box) (TypeCtor_12)), RevTypeCtorMap0_14, &RevTypeCtorMap_16);
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7))));
    Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 9))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtorMap_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RevTypeCtorMap_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) ((MR_Unsigned) (Var_50));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_52));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__size_prof____Unify____construct_transform_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__size_prof____Compare____construct_transform_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__size_prof____Unify____known_size_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__size_prof____Compare____known_size_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__size_prof____Unify____rev_type_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__size_prof____Compare____rev_type_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____size_prof_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__size_prof____Unify____size_prof_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__size_prof____Compare____size_prof_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__size_prof____Unify____type_ctor_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__size_prof____Compare____type_ctor_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__size_prof____Unify____type_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__size_prof____Compare____type_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__size_prof__init(void)
{
}

void mercury__transform_hlds__size_prof__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_known_size_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_ctor_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_info_map_0);
}

void mercury__transform_hlds__size_prof__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__size_prof__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.size_prof.
