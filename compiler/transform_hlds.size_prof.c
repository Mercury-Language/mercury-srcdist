/*
** Automatically generated from `size_prof.m'
** by the Mercury compiler,
** version rotd-2024-05-11
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
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0;

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_ordinal_ordered_construct_transform_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2];

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_size_prof_info_0_0[10];

static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_size_prof_info_0_0[10];

static const MR_DuArgLocn transform_hlds__size_prof__transform_hlds__size_prof__field_locns_size_prof_info_0_0[10];

static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_size_prof_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_size_prof_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_size_prof_info_0[1];

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_size_prof_info_0[1];

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1089__1_3_p_0(
  MR_Word RevTypeInfoMap0_12,
  MR_Word HeadVar__2_42,
  MR_Word * HeadVar__3_43);

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__774__1_2_p_0(
  MR_Word ArgGoals_21,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__731__1_2_p_0(
  MR_Word ArgGoals_36,
  MR_Word HeadVar__2_56);

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__604__1_3_p_0(
  MR_Word HeadVar__1_129,
  MR_Word HeadVar__2_130,
  MR_Word * HeadVar__3_131);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_129,
  MR_Word * HeadVar__3_131);

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__563__1_3_p_0(
  MR_Word HeadVar__1_125,
  MR_Word HeadVar__2_126,
  MR_Word * HeadVar__3_127);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_51_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_125,
  MR_Word * HeadVar__3_127);

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__445__1_3_p_0(
  MR_Word HeadVar__1_961,
  MR_Word HeadVar__2_962,
  MR_Word * HeadVar__3_963);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_53_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_961,
  MR_Word * HeadVar__3_963);

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
transform_hlds__size_prof__size_prof_process_proc_msg_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word VarCounts_2,
  MR_Word STATE_VARIABLE_RevMap_0_3,
  MR_Word * STATE_VARIABLE_RevMap_4);

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0_1(
  MR_Box closure_arg);

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

static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
  MR_Word Var_5,
  MR_Integer KnownSize_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

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
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

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
transform_hlds__size_prof__make_type_info_6_p_0(
  MR_Word Context_7,
  MR_Word Type_8,
  MR_Word * TypeInfoVar_9,
  MR_Word * TypeInfoGoals_10,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
  MR_Word Type_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word TypeArgs_8,
  MR_Word * TypeCtorVar_9,
  MR_Word * TypeCtorGoals_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

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


static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_2[9][3];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[2][6];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[1][9];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_6[2][5];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_8[2][7];


struct transform_hlds__size_prof__vector_common_type_7_0_s {
  const MR_String transform_hlds__size_prof__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct transform_hlds__size_prof__vector_common_type_7_0_s transform_hlds__size_prof_vector_common_7[8];



static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_disj_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_switch_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_6[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_8[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
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
  /* row   0 */   { (MR_String) "base_typeclass_info" },
  /* row   1 */   { (MR_String) "type_ctor_info" },
  /* row   2 */   { (MR_String) "type_info" },
  /* row   3 */   { (MR_String) "typeclass_info" },
  /* row   4 */   { (MR_String) "base_typeclass_info" },
  /* row   5 */   { (MR_String) "type_ctor_info" },
  /* row   6 */   { (MR_String) "type_info" },
  /* row   7 */   { (MR_String) "typeclass_info" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0 = {
  (MR_String) "term_words",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1 = {
  (MR_String) "term_cells",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_ordinal_ordered_construct_transform_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__size_prof____Unify____construct_transform_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____construct_transform_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "construct_transform",
  { transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0 },
  { transform_hlds__size_prof__transform_hlds__size_prof__enum_ordinal_ordered_construct_transform_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____known_size_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____known_size_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "known_size_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_ctor_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_size_prof_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)
};

static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_size_prof_info_0_0[10] = {
  (MR_String) "spi_module_info",
  (MR_String) "spi_type_ctor_map",
  (MR_String) "spi_type_info_map",
  (MR_String) "spi_rev_type_ctor_map",
  (MR_String) "spi_rev_type_info_map",
  (MR_String) "spi_target_type_info_map",
  (MR_String) "spi_known_size_map",
  (MR_String) "spi_var_table",
  (MR_String) "spi_transform_op",
  (MR_String) "spi_rtti_varmaps"
};

static const MR_DuArgLocn transform_hlds__size_prof__transform_hlds__size_prof__field_locns_size_prof_info_0_0[10] = {
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
  }
};

static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0 = {
  (MR_String) "size_prof_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__size_prof__transform_hlds__size_prof__field_types_size_prof_info_0_0,
  transform_hlds__size_prof__transform_hlds__size_prof__field_names_size_prof_info_0_0,
  transform_hlds__size_prof__transform_hlds__size_prof__field_locns_size_prof_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_size_prof_info_0_0[1] = { &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0 };

static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_size_prof_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_size_prof_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_size_prof_info_0[1] = { &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0 };

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_size_prof_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__size_prof____Unify____size_prof_info_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____size_prof_info_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "size_prof_info",
  { transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_size_prof_info_0 },
  { transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_size_prof_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_size_prof_info_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_ctor_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_ctor_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1089__1_3_p_0(
  MR_Word RevTypeInfoMap0_12,
  MR_Word HeadVar__2_42,
  MR_Word * HeadVar__3_43)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_43;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevTypeInfoMap0_12, ((MR_Box) (HeadVar__2_42)), &conv0_HeadVar__3_43);
  if (succeeded)
  {
    *HeadVar__3_43 = ((MR_Word) (conv0_HeadVar__3_43));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__774__1_2_p_0(
  MR_Word ArgGoals_21,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[2]), ((MR_Box) (ArgGoals_21)), ((MR_Box) (HeadVar__2_36)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__731__1_2_p_0(
  MR_Word ArgGoals_36,
  MR_Word HeadVar__2_56)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[2]), ((MR_Box) (ArgGoals_36)), ((MR_Box) (HeadVar__2_56)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__604__1_3_p_0(
  MR_Word HeadVar__1_129,
  MR_Word HeadVar__2_130,
  MR_Word * HeadVar__3_131)
{
  transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_52_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_129, HeadVar__3_131);
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_129,
  MR_Word * HeadVar__3_131)
{
  *HeadVar__3_131 = HeadVar__1_129;
}

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__563__1_3_p_0(
  MR_Word HeadVar__1_125,
  MR_Word HeadVar__2_126,
  MR_Word * HeadVar__3_127)
{
  transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_51_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_125, HeadVar__3_127);
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_51_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_125,
  MR_Word * HeadVar__3_127)
{
  *HeadVar__3_127 = HeadVar__1_125;
}

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__445__1_3_p_0(
  MR_Word HeadVar__1_961,
  MR_Word HeadVar__2_962,
  MR_Word * HeadVar__3_963)
{
  transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_53_95_95_49_95_95_91_50_93_95_48_3_p_0(HeadVar__1_961, HeadVar__3_963);
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_53_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word HeadVar__1_961,
  MR_Word * HeadVar__3_963)
{
  *HeadVar__3_963 = HeadVar__1_961;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[2]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  parse_tree__var_table____Compare____var_table_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;
                    MR_Integer Var_45 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_46 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_45 < Var_46);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_45 > Var_46);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(HeadVar__1_1, ArgX10_31, ArgY10_32);
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
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_26_26 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_27_27 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_28_28 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_29_29 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_30_30 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_31_31 = (MR_Word) (&transform_hlds__size_prof_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                      succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX10_21, ArgY10_22);
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

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0(
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
transform_hlds__size_prof____Unify____construct_transform_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
  MR_Word Info_3,
  MR_Word UnifyMode_4)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));
  MR_Word CellInitInst_6 = ((MR_Word) ((MR_hl_field(0, UnifyMode_4, (MR_Integer) 0))));
  MR_Word CellFinalInst_7 = ((MR_Word) ((MR_hl_field(0, UnifyMode_4, (MR_Integer) 1))));

  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, CellInitInst_6);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_5, CellFinalInst_7);
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
  MR_Word TypeInfoMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TargetTypeInfoMap_0_9,
  MR_Word * STATE_VARIABLE_TargetTypeInfoMap_10)
{
  MR_bool succeeded;
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TypeInfoVar_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word TypeInfo_16_16;
  MR_Word Var_15;
  MR_Box conv0_Var_15;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfoMap_5, ((MR_Box) (Type_6)), &conv0_Var_15);
  if (succeeded)
  {
    Var_15 = ((MR_Word) (conv0_Var_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeInfo_16_16 = (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (TypeInfoVar_7)), ((MR_Box) (Var_15)));
  }
  if (succeeded)
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), ((MR_Box) (Type_6)), ((MR_Box) (TypeInfoVar_7)), STATE_VARIABLE_TargetTypeInfoMap_0_9, STATE_VARIABLE_TargetTypeInfoMap_10);
  else
    *STATE_VARIABLE_TargetTypeInfoMap_10 = STATE_VARIABLE_TargetTypeInfoMap_0_9;
}

static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
  MR_Word RttiVarMaps_5,
  MR_Word TVar_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;
  MR_Word TypeInfoLocn_8;
  MR_Word Type_9;

  hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(RttiVarMaps_5, TVar_6, &TypeInfoLocn_8);
  {
    Type_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Type_9, 0) = ((MR_Box) (TVar_6));
    MR_hl_field(0, Type_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  if (((MR_tag((MR_Word) TypeInfoLocn_8)) == (MR_Integer) 0))
  {
    MR_Word TypeInfoVar_10 = ((MR_Word) ((MR_hl_field(0, TypeInfoLocn_8, (MR_Integer) 0))));
    MR_Word RevTypeInfoMap0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 4))));
    MR_Word TypeInfoMap0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
    MR_Word TypeInfoMap_18;
    MR_Word RevTypeInfoMap_20;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word RevTypeInfoMap1_19;

    mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), ((MR_Box) (Type_9)), ((MR_Box) (TypeInfoVar_10)), TypeInfoMap0_17, &TypeInfoMap_18);
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (TypeInfoVar_10)), ((MR_Box) (Type_9)), RevTypeInfoMap0_16, &RevTypeInfoMap1_19);
    if (succeeded)
      RevTypeInfoMap_20 = RevTypeInfoMap1_19;
    else
      RevTypeInfoMap_20 = RevTypeInfoMap0_16;
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 3))));
    Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 5))));
    Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 6))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 7))));
    Var_48 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 2) = ((MR_Box) (TypeInfoMap_18));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 4) = ((MR_Box) (RevTypeInfoMap_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_48));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_49));
    }
  }
  else
    *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_msg_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_msg_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Transform_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_Word PredId_21;
  MR_Integer ProcId_22;
  MR_Word Globals_23;
  MR_Word SimplifyTasks_24;
  MR_Word Goal0_25;
  MR_Word VarTable0_26;
  MR_Word InstMap0_27;
  MR_Word RttiVarMaps0_28;
  MR_Word TypeCtorMap0_29;
  MR_Word TypeInfoMap0_30;
  MR_Word RevTypeCtorMap0_31;
  MR_Word RevTypeInfoMap0_32;
  MR_Word TargetTypeInfoMap0_33;
  MR_Word KnownSizeMap0_34;
  MR_Word Info0_35;
  MR_Word TVars_36;
  MR_Word Info1_37;
  MR_Word Goal1_38;
  MR_Word Info_39;
  MR_Word HeadVars_40;
  MR_Word InstVarSet_41;
  MR_Word Goal2_43;
  MR_Word VarTable_44;
  MR_Word RttiVarMaps_45;
  MR_Word Goal_46;
  MR_Word STATE_VARIABLE_ProcInfo_44_49;
  MR_Word STATE_VARIABLE_ModuleInfo_45_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word STATE_VARIABLE_ProcInfo_52_55;
  MR_Word STATE_VARIABLE_ProcInfo_53_56;
  MR_Word Var_65;
  MR_Box conv1_Info1_37;
  MR_Word _Warnings_42;

  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_8, STATE_VARIABLE_ModuleInfo_0_16, (MR_String) "Size profiling", PredProcId_10);
  PredId_21 = ((MR_Word) ((MR_hl_field(0, PredProcId_10, (MR_Integer) 0))));
  ProcId_22 = ((MR_Integer) ((MR_hl_field(0, PredProcId_10, (MR_Integer) 1))));
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &Globals_23);
  SimplifyTasks_24 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_2_f_0(Globals_23, (MR_Word) ((MR_Unsigned) 0U));
  check_hlds__simplify__simplify_proc__simplify_proc_9_p_0((MR_Word) ((MR_Unsigned) 0U), ProgressStream_8, SimplifyTasks_24, PredId_21, ProcId_22, STATE_VARIABLE_ProcInfo_0_14, &STATE_VARIABLE_ProcInfo_44_49, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_45_50);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_44_49, &Goal0_25);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_44_49, &VarTable0_26);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_45_50, STATE_VARIABLE_ProcInfo_44_49, &InstMap0_27);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_44_49, &RttiVarMaps0_28);
  TypeCtorMap0_29 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
  TypeInfoMap0_30 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
  RevTypeCtorMap0_31 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  RevTypeInfoMap0_32 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
  TargetTypeInfoMap0_33 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
  KnownSizeMap0_34 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  {
    Info0_35 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_35, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_45_50));
    MR_hl_field(0, Info0_35, 1) = ((MR_Box) (TypeCtorMap0_29));
    MR_hl_field(0, Info0_35, 2) = ((MR_Box) (TypeInfoMap0_30));
    MR_hl_field(0, Info0_35, 3) = ((MR_Box) (RevTypeCtorMap0_31));
    MR_hl_field(0, Info0_35, 4) = ((MR_Box) (RevTypeInfoMap0_32));
    MR_hl_field(0, Info0_35, 5) = ((MR_Box) (TargetTypeInfoMap0_33));
    MR_hl_field(0, Info0_35, 6) = ((MR_Box) (KnownSizeMap0_34));
    MR_hl_field(0, Info0_35, 7) = ((MR_Box) (VarTable0_26));
    MR_hl_field(0, Info0_35, 8) = (MR_Box) ((MR_Unsigned) (Transform_9));
    MR_hl_field(0, Info0_35, 9) = ((MR_Box) (RttiVarMaps0_28));
  }
  hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(RttiVarMaps0_28, &TVars_36);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_8[1]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_proc_msg_7_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (RttiVarMaps0_28));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[1]), (MR_Word) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0), Var_51, TVars_36, ((MR_Box) (Info0_35)), &conv1_Info1_37);
  Info1_37 = ((MR_Word) (conv1_Info1_37));
  transform_hlds__size_prof__size_prof_process_goal_4_p_0(Goal0_25, &Goal1_38, Info1_37, &Info_39);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_44_49, &HeadVars_40);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_44_49, &InstVarSet_41);
  Var_53 = ((MR_Word) ((MR_hl_field(0, Info_39, (MR_Integer) 7))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, Info_39, (MR_Integer) 9))));
  hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 1, HeadVars_40, &_Warnings_42, Goal1_38, &Goal2_43, Var_53, &VarTable_44, Var_65, &RttiVarMaps_45);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 1, VarTable_44, InstVarSet_41, InstMap0_27, Goal2_43, &Goal_46, STATE_VARIABLE_ModuleInfo_45_50, STATE_VARIABLE_ModuleInfo_17);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_46, STATE_VARIABLE_ProcInfo_44_49, &STATE_VARIABLE_ProcInfo_52_55);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_44, STATE_VARIABLE_ProcInfo_52_55, &STATE_VARIABLE_ProcInfo_53_56);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_45, STATE_VARIABLE_ProcInfo_53_56, STATE_VARIABLE_ProcInfo_15);
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_131;

  transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__604__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_131);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_131));
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
  MR_Word FirstMainConsId_28;
  MR_Word FirstOtherConsIds_29;
  MR_Word FirstGoal0_30;
  MR_Word FirstGoal_31;
  MR_Word TypeInfoMapFirst_32;
  MR_Word KnownSizeMapFirst_33;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Word STATE_VARIABLE_Info_48_48;
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 5))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 7))));
  MR_Word Var_59 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 8))) & (MR_Integer) 1);
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 9))));

  {
    STATE_VARIABLE_Info_47_47 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 0) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 1) = ((MR_Box) (TypeCtorMap0_23));
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 2) = ((MR_Box) (TypeInfoMap0_21));
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 3) = ((MR_Box) (RevTypeCtorMap0_24));
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 4) = ((MR_Box) (RevTypeInfoMap0_22));
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 5) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 6) = ((MR_Box) (KnownSizeMap0_26));
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 7) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 8) = (MR_Box) ((MR_Unsigned) (Var_59));
    MR_hl_field(0, STATE_VARIABLE_Info_47_47, 9) = ((MR_Box) (Var_60));
  }
  FirstMainConsId_28 = ((MR_Word) ((MR_hl_field(0, First0_15, (MR_Integer) 0))));
  FirstOtherConsIds_29 = ((MR_Word) ((MR_hl_field(0, First0_15, (MR_Integer) 1))));
  FirstGoal0_30 = ((MR_Word) ((MR_hl_field(0, First0_15, (MR_Integer) 2))));
  transform_hlds__size_prof__size_prof_process_goal_4_p_0(FirstGoal0_30, &FirstGoal_31, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
  TypeInfoMapFirst_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 2))));
  KnownSizeMapFirst_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 6))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *First_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FirstMainConsId_28));
    MR_hl_field(0, base, 1) = ((MR_Box) (FirstOtherConsIds_29));
    MR_hl_field(0, base, 2) = ((MR_Box) (FirstGoal_31));
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
    MR_Word Head0_34 = ((MR_Word) ((MR_hl_field(1, Later0_17, (MR_Integer) 0))));
    MR_Word Tail0_35 = ((MR_Word) ((MR_hl_field(1, Later0_17, (MR_Integer) 1))));
    MR_Word LaterTargetTypeInfoMap_36;
    MR_Word Head_37;
    MR_Word Tail_38;
    MR_Word TypeInfoMapLater_39;
    MR_Word KnownSizeMapLater_40;
    MR_Word STATE_VARIABLE_Info_50_50;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;

    mercury__map__union_4_p_1((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_2[8]), TargetTypeInfoMap_20, TypeInfoMapFirst_32, &LaterTargetTypeInfoMap_36);
    Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 0))));
    Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 1))));
    Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 2))));
    Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 3))));
    Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 4))));
    Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 6))));
    Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 7))));
    Var_127 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 9))));
    {
      STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (Var_119));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (Var_120));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (Var_121));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (Var_122));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (Var_123));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (LaterTargetTypeInfoMap_36));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (Var_125));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (Var_126));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 8) = (MR_Box) ((MR_Unsigned) (Var_127));
      MR_hl_field(0, STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (Var_128));
    }
    transform_hlds__size_prof__size_prof_process_switch_14_p_0(Head0_34, &Head_37, Tail0_35, &Tail_38, STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Info_42, TargetTypeInfoMap_20, TypeInfoMap0_21, RevTypeInfoMap0_22, TypeCtorMap0_23, RevTypeCtorMap0_24, &TypeInfoMapLater_39, KnownSizeMap0_26, &KnownSizeMapLater_40);
    *TypeInfoMap_25 = mercury__map__common_subset_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfoMapFirst_32, TypeInfoMapLater_39);
    *KnownSizeMap_27 = mercury__map__common_subset_2_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), KnownSizeMapFirst_33, KnownSizeMapLater_40);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Later_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Head_37));
      MR_hl_field(1, base, 1) = ((MR_Box) (Tail_38));
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
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_127;

  transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__563__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_127);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_127));
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
  MR_Word TypeInfoMapFirst_28;
  MR_Word KnownSizeMapFirst_29;
  MR_Word STATE_VARIABLE_Info_43_43;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_37, (MR_Integer) 0))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_37, (MR_Integer) 5))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_37, (MR_Integer) 7))));
  MR_Word Var_55 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_37, (MR_Integer) 8))) & (MR_Integer) 1);
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_37, (MR_Integer) 9))));

  {
    STATE_VARIABLE_Info_43_43 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 1) = ((MR_Box) (TypeCtorMap0_23));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 2) = ((MR_Box) (TypeInfoMap0_21));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 3) = ((MR_Box) (RevTypeCtorMap0_24));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 4) = ((MR_Box) (RevTypeInfoMap0_22));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 5) = ((MR_Box) (Var_52));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 6) = ((MR_Box) (KnownSizeMap0_26));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 7) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 8) = (MR_Box) ((MR_Unsigned) (Var_55));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 9) = ((MR_Box) (Var_56));
  }
  transform_hlds__size_prof__size_prof_process_goal_4_p_0(First0_15, First_16, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_44_44);
  TypeInfoMapFirst_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 2))));
  KnownSizeMapFirst_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 6))));
  if ((Later0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Later_18 = (MR_Word) ((MR_Unsigned) 0U);
    *TypeInfoMap_25 = TypeInfoMapFirst_28;
    *KnownSizeMap_27 = KnownSizeMapFirst_29;
    *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_44_44;
  }
  else
  {
    MR_Word Head0_30 = ((MR_Word) ((MR_hl_field(1, Later0_17, (MR_Integer) 0))));
    MR_Word Tail0_31 = ((MR_Word) ((MR_hl_field(1, Later0_17, (MR_Integer) 1))));
    MR_Word LaterTargetTypeInfoMap_32;
    MR_Word Head_33;
    MR_Word Tail_34;
    MR_Word TypeInfoMapLater_35;
    MR_Word KnownSizeMapLater_36;
    MR_Word STATE_VARIABLE_Info_46_46;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;

    mercury__map__union_4_p_1((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_2[7]), TypeInfoMapFirst_28, TargetTypeInfoMap_20, &LaterTargetTypeInfoMap_32);
    Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 0))));
    Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 1))));
    Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 2))));
    Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 3))));
    Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 4))));
    Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 6))));
    Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 7))));
    Var_123 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 9))));
    {
      STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (Var_115));
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (Var_116));
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (Var_117));
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (Var_118));
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (Var_119));
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (LaterTargetTypeInfoMap_32));
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (Var_121));
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (Var_122));
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 8) = (MR_Box) ((MR_Unsigned) (Var_123));
      MR_hl_field(0, STATE_VARIABLE_Info_46_46, 9) = ((MR_Box) (Var_124));
    }
    transform_hlds__size_prof__size_prof_process_disj_14_p_0(Head0_30, &Head_33, Tail0_31, &Tail_34, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_38, TargetTypeInfoMap_20, TypeInfoMap0_21, RevTypeInfoMap0_22, TypeCtorMap0_23, RevTypeCtorMap0_24, &TypeInfoMapLater_35, KnownSizeMap0_26, &KnownSizeMapLater_36);
    *TypeInfoMap_25 = mercury__map__common_subset_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfoMapFirst_28, TypeInfoMapLater_35);
    *KnownSizeMap_27 = mercury__map__common_subset_2_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), KnownSizeMapFirst_29, KnownSizeMapLater_36);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Later_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Head_33));
      MR_hl_field(1, base, 1) = ((MR_Box) (Tail_34));
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
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_3, (MR_Integer) 0))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_3, (MR_Integer) 3))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_3, (MR_Integer) 4))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_3, (MR_Integer) 7))));
    MR_Word Var_40 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_3, (MR_Integer) 8))) & (MR_Integer) 1);
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_3, (MR_Integer) 9))));

    {
      STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (Var_32));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (TypeCtorMap0_7));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (TypeInfoMap0_6));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (Var_35));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (Var_36));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (TargetTypeInfoMap0_5));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (KnownSizeMap0_8));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (Var_39));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 8) = (MR_Box) ((MR_Unsigned) (Var_40));
      MR_hl_field(0, STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (Var_41));
    }
    transform_hlds__size_prof__size_prof_process_goal_4_p_0(Goal0_16, &Goal_18, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_31_31);
    transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(Goals0_17, &Goals_19, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_4, TargetTypeInfoMap0_5, TypeInfoMap0_6, TypeCtorMap0_7, KnownSizeMap0_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_19));
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_18_18;
    MR_Word SubConj_14;
    MR_Word Var_20;
    MR_Word Var_21;

    transform_hlds__size_prof__size_prof_process_goal_4_p_0(Goal0_8, &Goal_12, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_18_18);
    transform_hlds__size_prof__size_prof_process_conj_4_p_0(Goals0_9, &Goals_13, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_4);
    Var_20 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_21 = ((MR_Unsigned) ((MR_hl_field(3, Var_20, (MR_Integer) 1))) & (MR_Integer) 1);
      SubConj_14 = ((MR_Word) ((MR_hl_field(3, Var_20, (MR_Integer) 2))));
      succeeded = (Var_21 == (MR_Integer) 0);
    }
    if (succeeded)
      *HeadVar__2_2 = mercury__list__append_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubConj_14, Goals_13);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals_13));
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__size_prof__binds_arg_in_cell_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_963;

  transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__445__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_963);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_963));
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_95,
  MR_Word * STATE_VARIABLE_Info_96)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word GoalExpr_22;

  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NegGoal0_87 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word NegGoal_88;
        MR_Word STATE_VARIABLE_Info_167_167;
        MR_Word TargetTypeInfoMap0_242 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
        MR_Word TypeInfoMap0_243 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
        MR_Word RevTypeInfoMap0_244 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
        MR_Word TypeCtorMap0_245 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
        MR_Word KnownSizeMap0_246 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
        MR_Word RevTypeCtorMap0_247 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
        MR_Word Var_884;
        MR_Word Var_891;
        MR_Word Var_892;
        MR_Word Var_893;

        transform_hlds__size_prof__size_prof_process_goal_4_p_0(NegGoal0_87, &NegGoal_88, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_167_167);
        Var_884 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_167_167, (MR_Integer) 0))));
        Var_891 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_167_167, (MR_Integer) 7))));
        Var_892 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_167_167, (MR_Integer) 8))) & (MR_Integer) 1);
        Var_893 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_167_167, (MR_Integer) 9))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_96 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_884));
          MR_hl_field(0, base, 1) = ((MR_Box) (TypeCtorMap0_245));
          MR_hl_field(0, base, 2) = ((MR_Box) (TypeInfoMap0_243));
          MR_hl_field(0, base, 3) = ((MR_Box) (RevTypeCtorMap0_247));
          MR_hl_field(0, base, 4) = ((MR_Box) (RevTypeInfoMap0_244));
          MR_hl_field(0, base, 5) = ((MR_Box) (TargetTypeInfoMap0_242));
          MR_hl_field(0, base, 6) = ((MR_Box) (KnownSizeMap0_246));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_891));
          MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_892));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_893));
        }
        GoalExpr_22 = (MR_Word) ((MR_Word) (NegGoal_88));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 0))));
        MR_Word RHS_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 1))));
        MR_Word UniMode_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 2))));
        MR_Word Unify0_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
        MR_Word UnifyContext_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 4))));

        switch (MR_tag((MR_Word) Unify0_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, Unify0_13, (MR_Integer) 0))));
              MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(0, Unify0_13, (MR_Integer) 1))));
              MR_Word Args_17 = ((MR_Word) ((MR_hl_field(0, Unify0_13, (MR_Integer) 2))));
              MR_Word ArgModes_18 = ((MR_Word) ((MR_hl_field(0, Unify0_13, (MR_Integer) 3))));
              MR_Word How_19 = ((MR_Word) ((MR_hl_field(0, Unify0_13, (MR_Integer) 4))));
              MR_Word Unique_20 = ((MR_Unsigned) ((MR_hl_field(0, Unify0_13, (MR_Integer) 5))) & (MR_Integer) 1);

              transform_hlds__size_prof__size_prof_process_construct_14_p_0(LHS_10, RHS_11, UniMode_12, UnifyContext_14, Var_15, ConsId_16, Args_17, ArgModes_18, How_19, Unique_20, GoalInfo0_9, &GoalExpr_22, STATE_VARIABLE_Info_0_95, STATE_VARIABLE_Info_96);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_179 = ((MR_Word) ((MR_hl_field(1, Unify0_13, (MR_Integer) 0))));
              MR_Word ConsId_180 = ((MR_Word) ((MR_hl_field(1, Unify0_13, (MR_Integer) 1))));
              MR_Word Args_181 = ((MR_Word) ((MR_hl_field(1, Unify0_13, (MR_Integer) 2))));
              MR_Word ArgModes_182 = ((MR_Word) ((MR_hl_field(1, Unify0_13, (MR_Integer) 3))));
              MR_Word BindingArgModes_25;
              MR_Word Var_98;

              {
                Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_98, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_6[1]));
                MR_hl_field(0, Var_98, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_2));
                MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_98, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_95));
              }
              mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_98, ArgModes_182, &BindingArgModes_25);
              succeeded = (BindingArgModes_25 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(Var_179, ConsId_180, Args_181, ArgModes_182, Goal0_5, &GoalExpr_22, STATE_VARIABLE_Info_0_95, STATE_VARIABLE_Info_96);
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
            switch (((MR_Integer) ((MR_hl_field(3, Unify0_13, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  GoalExpr_22 = GoalExpr0_8;
                  *STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_0_95;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "complicated_unify");
                  return;
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_Info_102_102;
        MR_Word Var_103;
        MR_Word Var_105;
        MR_Word Var_248;
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

        Var_103 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
        Var_248 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
        Var_250 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
        Var_251 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
        Var_252 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
        Var_253 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
        Var_254 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
        Var_255 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 7))));
        Var_256 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 8))) & (MR_Integer) 1);
        Var_257 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 9))));
        {
          STATE_VARIABLE_Info_102_102 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 0) = ((MR_Box) (Var_248));
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 1) = ((MR_Box) (Var_103));
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 2) = ((MR_Box) (Var_250));
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 3) = ((MR_Box) (Var_251));
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 4) = ((MR_Box) (Var_252));
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 5) = ((MR_Box) (Var_253));
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 6) = ((MR_Box) (Var_254));
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 7) = ((MR_Box) (Var_255));
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 8) = (MR_Box) ((MR_Unsigned) (Var_256));
          MR_hl_field(0, STATE_VARIABLE_Info_102_102, 9) = ((MR_Box) (Var_257));
        }
        Var_105 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        Var_258 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_102_102, (MR_Integer) 0))));
        Var_259 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_102_102, (MR_Integer) 1))));
        Var_260 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_102_102, (MR_Integer) 2))));
        Var_262 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_102_102, (MR_Integer) 4))));
        Var_263 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_102_102, (MR_Integer) 5))));
        Var_264 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_102_102, (MR_Integer) 6))));
        Var_265 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_102_102, (MR_Integer) 7))));
        Var_266 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_102_102, (MR_Integer) 8))) & (MR_Integer) 1);
        Var_267 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_102_102, (MR_Integer) 9))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_96 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_258));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_259));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_260));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_105));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_262));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_263));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_264));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_265));
          MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_266));
          MR_hl_field(0, base, 9) = ((MR_Box) (Var_267));
        }
        GoalExpr_22 = GoalExpr0_8;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Info_106_106;
            MR_Word Var_107;
            MR_Word Var_109;
            MR_Word Var_268;
            MR_Word Var_270;
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
            MR_Word Var_282;
            MR_Word Var_283;
            MR_Word Var_284;
            MR_Word Var_285;
            MR_Word Var_286;
            MR_Word Var_287;

            Var_107 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
            Var_268 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
            Var_270 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
            Var_271 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
            Var_272 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
            Var_273 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
            Var_274 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
            Var_275 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 7))));
            Var_276 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 8))) & (MR_Integer) 1);
            Var_277 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 9))));
            {
              STATE_VARIABLE_Info_106_106 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 0) = ((MR_Box) (Var_268));
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 1) = ((MR_Box) (Var_107));
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 2) = ((MR_Box) (Var_270));
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 3) = ((MR_Box) (Var_271));
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 4) = ((MR_Box) (Var_272));
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 5) = ((MR_Box) (Var_273));
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 6) = ((MR_Box) (Var_274));
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 7) = ((MR_Box) (Var_275));
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 8) = (MR_Box) ((MR_Unsigned) (Var_276));
              MR_hl_field(0, STATE_VARIABLE_Info_106_106, 9) = ((MR_Box) (Var_277));
            }
            Var_109 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            Var_278 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_106_106, (MR_Integer) 0))));
            Var_279 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_106_106, (MR_Integer) 1))));
            Var_280 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_106_106, (MR_Integer) 2))));
            Var_282 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_106_106, (MR_Integer) 4))));
            Var_283 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_106_106, (MR_Integer) 5))));
            Var_284 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_106_106, (MR_Integer) 6))));
            Var_285 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_106_106, (MR_Integer) 7))));
            Var_286 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_106_106, (MR_Integer) 8))) & (MR_Integer) 1);
            Var_287 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_106_106, (MR_Integer) 9))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_96 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_278));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_279));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_280));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_109));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_282));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_283));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_284));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_285));
              MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_286));
              MR_hl_field(0, base, 9) = ((MR_Box) (Var_287));
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
            MR_Word ConjType_53 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Goals_55;

            switch (ConjType_53) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word TargetTypeInfoMap0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
                  MR_Word TypeInfoMap0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
                  MR_Word RevTypeInfoMap0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
                  MR_Word TypeCtorMap0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
                  MR_Word KnownSizeMap0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
                  MR_Word STATE_VARIABLE_Info_111_111;
                  MR_Word STATE_VARIABLE_Info_114_114;
                  MR_Word STATE_VARIABLE_Info_115_115;
                  MR_Word Var_116;
                  MR_Word Var_118;
                  MR_Word Var_333;
                  MR_Word Var_334;
                  MR_Word Var_336;
                  MR_Word Var_339;
                  MR_Word Var_340;
                  MR_Word Var_341;
                  MR_Word Var_342;
                  MR_Word Var_373;
                  MR_Word Var_374;
                  MR_Word Var_375;
                  MR_Word Var_377;
                  MR_Word Var_378;
                  MR_Word Var_380;
                  MR_Word Var_381;
                  MR_Word Var_382;
                  MR_Word Var_363;
                  MR_Word Var_365;
                  MR_Word Var_366;
                  MR_Word Var_367;
                  MR_Word Var_368;
                  MR_Word Var_369;
                  MR_Word Var_370;
                  MR_Word Var_371;
                  MR_Word Var_372;

                  transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(Goals0_54, &Goals_55, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_111_111, TargetTypeInfoMap0_56, TypeInfoMap0_57, TypeCtorMap0_59, KnownSizeMap0_60);
                  Var_333 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_111_111, (MR_Integer) 0))));
                  Var_334 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_111_111, (MR_Integer) 1))));
                  Var_336 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_111_111, (MR_Integer) 3))));
                  Var_339 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_111_111, (MR_Integer) 6))));
                  Var_340 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_111_111, (MR_Integer) 7))));
                  Var_341 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_111_111, (MR_Integer) 8))) & (MR_Integer) 1);
                  Var_342 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_111_111, (MR_Integer) 9))));
                  {
                    STATE_VARIABLE_Info_114_114 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 0) = ((MR_Box) (Var_333));
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 1) = ((MR_Box) (Var_334));
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 2) = ((MR_Box) (TypeInfoMap0_57));
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 3) = ((MR_Box) (Var_336));
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 4) = ((MR_Box) (RevTypeInfoMap0_58));
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 5) = ((MR_Box) (TargetTypeInfoMap0_56));
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 6) = ((MR_Box) (Var_339));
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 7) = ((MR_Box) (Var_340));
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 8) = (MR_Box) ((MR_Unsigned) (Var_341));
                    MR_hl_field(0, STATE_VARIABLE_Info_114_114, 9) = ((MR_Box) (Var_342));
                  }
                  Var_116 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
                  Var_363 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_114_114, (MR_Integer) 0))));
                  Var_365 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_114_114, (MR_Integer) 2))));
                  Var_366 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_114_114, (MR_Integer) 3))));
                  Var_367 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_114_114, (MR_Integer) 4))));
                  Var_368 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_114_114, (MR_Integer) 5))));
                  Var_369 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_114_114, (MR_Integer) 6))));
                  Var_370 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_114_114, (MR_Integer) 7))));
                  Var_371 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_114_114, (MR_Integer) 8))) & (MR_Integer) 1);
                  Var_372 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_114_114, (MR_Integer) 9))));
                  {
                    STATE_VARIABLE_Info_115_115 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 0) = ((MR_Box) (Var_363));
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 1) = ((MR_Box) (Var_116));
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 2) = ((MR_Box) (Var_365));
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 3) = ((MR_Box) (Var_366));
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 4) = ((MR_Box) (Var_367));
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 5) = ((MR_Box) (Var_368));
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 6) = ((MR_Box) (Var_369));
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 7) = ((MR_Box) (Var_370));
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 8) = (MR_Box) ((MR_Unsigned) (Var_371));
                    MR_hl_field(0, STATE_VARIABLE_Info_115_115, 9) = ((MR_Box) (Var_372));
                  }
                  Var_118 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                  Var_373 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_115_115, (MR_Integer) 0))));
                  Var_374 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_115_115, (MR_Integer) 1))));
                  Var_375 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_115_115, (MR_Integer) 2))));
                  Var_377 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_115_115, (MR_Integer) 4))));
                  Var_378 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_115_115, (MR_Integer) 5))));
                  Var_380 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_115_115, (MR_Integer) 7))));
                  Var_381 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_115_115, (MR_Integer) 8))) & (MR_Integer) 1);
                  Var_382 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_115_115, (MR_Integer) 9))));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Info_96 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_373));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_374));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Var_375));
                    MR_hl_field(0, base, 3) = ((MR_Box) (Var_118));
                    MR_hl_field(0, base, 4) = ((MR_Box) (Var_377));
                    MR_hl_field(0, base, 5) = ((MR_Box) (Var_378));
                    MR_hl_field(0, base, 6) = ((MR_Box) (KnownSizeMap0_60));
                    MR_hl_field(0, base, 7) = ((MR_Box) (Var_380));
                    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_381));
                    MR_hl_field(0, base, 9) = ((MR_Box) (Var_382));
                  }
                }
                break;
              case (MR_Integer) 0:
                transform_hlds__size_prof__size_prof_process_conj_4_p_0(Goals0_54, &Goals_55, STATE_VARIABLE_Info_0_95, STATE_VARIABLE_Info_96);
                break;
            }
            {
              GoalExpr_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_22, 1) = (MR_Box) ((MR_Unsigned) (ConjType_53));
              MR_hl_field(3, GoalExpr_22, 2) = ((MR_Box) (Goals_55));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Disjuncts_73;
            MR_Word STATE_VARIABLE_Info_137_137;
            MR_Word STATE_VARIABLE_Info_146_146;

            if ((Disjuncts0_72 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word STATE_VARIABLE_Info_138_138;
              MR_Word Var_139;
              MR_Word STATE_VARIABLE_Info_140_140;
              MR_Word Var_141;
              MR_Word STATE_VARIABLE_Info_142_142;
              MR_Word Var_143;
              MR_Word Var_145;
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
              MR_Word Var_595;
              MR_Word Var_596;
              MR_Word Var_597;
              MR_Word Var_598;
              MR_Word Var_599;
              MR_Word Var_600;
              MR_Word Var_601;
              MR_Word Var_602;
              MR_Word Var_604;
              MR_Word Var_605;
              MR_Word Var_606;
              MR_Word Var_607;
              MR_Word Var_608;
              MR_Word Var_609;
              MR_Word Var_610;
              MR_Word Var_611;
              MR_Word Var_612;
              MR_Word Var_613;
              MR_Word Var_615;
              MR_Word Var_616;
              MR_Word Var_617;
              MR_Word Var_618;
              MR_Word Var_619;
              MR_Word Var_620;

              Var_139 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
              Var_581 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
              Var_582 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
              Var_584 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
              Var_585 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
              Var_586 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
              Var_587 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
              Var_588 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 7))));
              Var_589 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_590 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_138_138 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 0) = ((MR_Box) (Var_581));
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 1) = ((MR_Box) (Var_582));
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 2) = ((MR_Box) (Var_139));
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 3) = ((MR_Box) (Var_584));
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 4) = ((MR_Box) (Var_585));
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 5) = ((MR_Box) (Var_586));
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 6) = ((MR_Box) (Var_587));
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 7) = ((MR_Box) (Var_588));
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 8) = (MR_Box) ((MR_Unsigned) (Var_589));
                MR_hl_field(0, STATE_VARIABLE_Info_138_138, 9) = ((MR_Box) (Var_590));
              }
              Var_141 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              Var_591 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_138_138, (MR_Integer) 0))));
              Var_592 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_138_138, (MR_Integer) 1))));
              Var_593 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_138_138, (MR_Integer) 2))));
              Var_595 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_138_138, (MR_Integer) 4))));
              Var_596 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_138_138, (MR_Integer) 5))));
              Var_597 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_138_138, (MR_Integer) 6))));
              Var_598 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_138_138, (MR_Integer) 7))));
              Var_599 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_138_138, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_600 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_138_138, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_140_140 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 0) = ((MR_Box) (Var_591));
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 1) = ((MR_Box) (Var_592));
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 2) = ((MR_Box) (Var_593));
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 3) = ((MR_Box) (Var_141));
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 4) = ((MR_Box) (Var_595));
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 5) = ((MR_Box) (Var_596));
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 6) = ((MR_Box) (Var_597));
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 7) = ((MR_Box) (Var_598));
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 8) = (MR_Box) ((MR_Unsigned) (Var_599));
                MR_hl_field(0, STATE_VARIABLE_Info_140_140, 9) = ((MR_Box) (Var_600));
              }
              Var_143 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
              Var_601 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_140_140, (MR_Integer) 0))));
              Var_602 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_140_140, (MR_Integer) 1))));
              Var_604 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_140_140, (MR_Integer) 3))));
              Var_605 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_140_140, (MR_Integer) 4))));
              Var_606 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_140_140, (MR_Integer) 5))));
              Var_607 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_140_140, (MR_Integer) 6))));
              Var_608 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_140_140, (MR_Integer) 7))));
              Var_609 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_140_140, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_610 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_140_140, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_142_142 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 0) = ((MR_Box) (Var_601));
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 1) = ((MR_Box) (Var_602));
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 2) = ((MR_Box) (Var_143));
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 3) = ((MR_Box) (Var_604));
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 4) = ((MR_Box) (Var_605));
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 5) = ((MR_Box) (Var_606));
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 6) = ((MR_Box) (Var_607));
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 7) = ((MR_Box) (Var_608));
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 8) = (MR_Box) ((MR_Unsigned) (Var_609));
                MR_hl_field(0, STATE_VARIABLE_Info_142_142, 9) = ((MR_Box) (Var_610));
              }
              Var_145 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              Var_611 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_142_142, (MR_Integer) 0))));
              Var_612 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_142_142, (MR_Integer) 1))));
              Var_613 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_142_142, (MR_Integer) 2))));
              Var_615 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_142_142, (MR_Integer) 4))));
              Var_616 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_142_142, (MR_Integer) 5))));
              Var_617 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_142_142, (MR_Integer) 6))));
              Var_618 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_142_142, (MR_Integer) 7))));
              Var_619 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_142_142, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_620 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_142_142, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_137_137 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 0) = ((MR_Box) (Var_611));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 1) = ((MR_Box) (Var_612));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 2) = ((MR_Box) (Var_613));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 3) = ((MR_Box) (Var_145));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 4) = ((MR_Box) (Var_615));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 5) = ((MR_Box) (Var_616));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 6) = ((MR_Box) (Var_617));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 7) = ((MR_Box) (Var_618));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 8) = (MR_Box) ((MR_Unsigned) (Var_619));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 9) = ((MR_Box) (Var_620));
              }
              Disjuncts_73 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word STATE_VARIABLE_Info_131_131;
              MR_Word STATE_VARIABLE_Info_132_132;
              MR_Word STATE_VARIABLE_Info_133_133;
              MR_Word Var_134;
              MR_Word Var_136;
              MR_Word TargetTypeInfoMap0_198 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
              MR_Word TypeInfoMap0_199 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
              MR_Word RevTypeInfoMap0_200 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
              MR_Word TypeCtorMap0_201 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
              MR_Word KnownSizeMap0_202 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
              MR_Word First0_203 = ((MR_Word) ((MR_hl_field(1, Disjuncts0_72, (MR_Integer) 0))));
              MR_Word Later0_204 = ((MR_Word) ((MR_hl_field(1, Disjuncts0_72, (MR_Integer) 1))));
              MR_Word RevTypeCtorMap0_205 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
              MR_Word First_206;
              MR_Word Later_207;
              MR_Word TypeInfoMap_208;
              MR_Word KnownSizeMap_209;
              MR_Word Var_561;
              MR_Word Var_562;
              MR_Word Var_563;
              MR_Word Var_565;
              MR_Word Var_566;
              MR_Word Var_568;
              MR_Word Var_569;
              MR_Word Var_570;
              MR_Word Var_541;
              MR_Word Var_542;
              MR_Word Var_544;
              MR_Word Var_545;
              MR_Word Var_546;
              MR_Word Var_547;
              MR_Word Var_548;
              MR_Word Var_549;
              MR_Word Var_550;
              MR_Word Var_551;
              MR_Word Var_553;
              MR_Word Var_554;
              MR_Word Var_555;
              MR_Word Var_556;
              MR_Word Var_557;
              MR_Word Var_558;
              MR_Word Var_559;
              MR_Word Var_560;

              transform_hlds__size_prof__size_prof_process_disj_14_p_0(First0_203, &First_206, Later0_204, &Later_207, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_131_131, TargetTypeInfoMap0_198, TypeInfoMap0_199, RevTypeInfoMap0_200, TypeCtorMap0_201, RevTypeCtorMap0_205, &TypeInfoMap_208, KnownSizeMap0_202, &KnownSizeMap_209);
              Var_541 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_131_131, (MR_Integer) 0))));
              Var_542 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_131_131, (MR_Integer) 1))));
              Var_544 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_131_131, (MR_Integer) 3))));
              Var_545 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_131_131, (MR_Integer) 4))));
              Var_546 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_131_131, (MR_Integer) 5))));
              Var_547 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_131_131, (MR_Integer) 6))));
              Var_548 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_131_131, (MR_Integer) 7))));
              Var_549 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_131_131, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_550 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_131_131, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_132_132 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 0) = ((MR_Box) (Var_541));
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 1) = ((MR_Box) (Var_542));
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 2) = ((MR_Box) (TypeInfoMap_208));
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 3) = ((MR_Box) (Var_544));
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 4) = ((MR_Box) (Var_545));
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 5) = ((MR_Box) (Var_546));
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 6) = ((MR_Box) (Var_547));
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 7) = ((MR_Box) (Var_548));
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 8) = (MR_Box) ((MR_Unsigned) (Var_549));
                MR_hl_field(0, STATE_VARIABLE_Info_132_132, 9) = ((MR_Box) (Var_550));
              }
              Var_134 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
              Var_551 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_132_132, (MR_Integer) 0))));
              Var_553 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_132_132, (MR_Integer) 2))));
              Var_554 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_132_132, (MR_Integer) 3))));
              Var_555 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_132_132, (MR_Integer) 4))));
              Var_556 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_132_132, (MR_Integer) 5))));
              Var_557 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_132_132, (MR_Integer) 6))));
              Var_558 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_132_132, (MR_Integer) 7))));
              Var_559 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_132_132, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_560 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_132_132, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_133_133 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 0) = ((MR_Box) (Var_551));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 1) = ((MR_Box) (Var_134));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 2) = ((MR_Box) (Var_553));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 3) = ((MR_Box) (Var_554));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 4) = ((MR_Box) (Var_555));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 5) = ((MR_Box) (Var_556));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 6) = ((MR_Box) (Var_557));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 7) = ((MR_Box) (Var_558));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 8) = (MR_Box) ((MR_Unsigned) (Var_559));
                MR_hl_field(0, STATE_VARIABLE_Info_133_133, 9) = ((MR_Box) (Var_560));
              }
              Var_136 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              Var_561 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_133_133, (MR_Integer) 0))));
              Var_562 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_133_133, (MR_Integer) 1))));
              Var_563 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_133_133, (MR_Integer) 2))));
              Var_565 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_133_133, (MR_Integer) 4))));
              Var_566 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_133_133, (MR_Integer) 5))));
              Var_568 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_133_133, (MR_Integer) 7))));
              Var_569 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_133_133, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_570 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_133_133, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_137_137 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 0) = ((MR_Box) (Var_561));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 1) = ((MR_Box) (Var_562));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 2) = ((MR_Box) (Var_563));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 3) = ((MR_Box) (Var_136));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 4) = ((MR_Box) (Var_565));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 5) = ((MR_Box) (Var_566));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 6) = ((MR_Box) (KnownSizeMap_209));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 7) = ((MR_Box) (Var_568));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 8) = (MR_Box) ((MR_Unsigned) (Var_569));
                MR_hl_field(0, STATE_VARIABLE_Info_137_137, 9) = ((MR_Box) (Var_570));
              }
              {
                Disjuncts_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Disjuncts_73, 0) = ((MR_Box) (First_206));
                MR_hl_field(1, Disjuncts_73, 1) = ((MR_Box) (Later_207));
              }
            }
            transform_hlds__size_prof__update_rev_maps_2_p_0(STATE_VARIABLE_Info_137_137, &STATE_VARIABLE_Info_146_146);
            transform_hlds__size_prof__update_target_map_2_p_0(STATE_VARIABLE_Info_146_146, STATE_VARIABLE_Info_96);
            {
              GoalExpr_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_22, 1) = ((MR_Box) (Disjuncts_73));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word CanFail_62 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Cases_71;
            MR_Word STATE_VARIABLE_Info_126_126;
            MR_Word STATE_VARIABLE_Info_129_129;

            if ((Cases0_63 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "empty switch");
                return;
              }
            else
            {
              MR_Word First0_64 = ((MR_Word) ((MR_hl_field(1, Cases0_63, (MR_Integer) 0))));
              MR_Word Later0_65 = ((MR_Word) ((MR_hl_field(1, Cases0_63, (MR_Integer) 1))));
              MR_Word RevTypeCtorMap0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
              MR_Word First_67;
              MR_Word Later_68;
              MR_Word TypeInfoMap_69;
              MR_Word KnownSizeMap_70;
              MR_Word STATE_VARIABLE_Info_120_120;
              MR_Word STATE_VARIABLE_Info_121_121;
              MR_Word STATE_VARIABLE_Info_122_122;
              MR_Word Var_123;
              MR_Word Var_125;
              MR_Word TargetTypeInfoMap0_183 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
              MR_Word TypeInfoMap0_184 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
              MR_Word RevTypeInfoMap0_185 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
              MR_Word TypeCtorMap0_186 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
              MR_Word KnownSizeMap0_187 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
              MR_Word Var_467;
              MR_Word Var_468;
              MR_Word Var_469;
              MR_Word Var_471;
              MR_Word Var_472;
              MR_Word Var_474;
              MR_Word Var_475;
              MR_Word Var_476;
              MR_Word Var_447;
              MR_Word Var_448;
              MR_Word Var_450;
              MR_Word Var_451;
              MR_Word Var_452;
              MR_Word Var_453;
              MR_Word Var_454;
              MR_Word Var_455;
              MR_Word Var_456;
              MR_Word Var_457;
              MR_Word Var_459;
              MR_Word Var_460;
              MR_Word Var_461;
              MR_Word Var_462;
              MR_Word Var_463;
              MR_Word Var_464;
              MR_Word Var_465;
              MR_Word Var_466;

              transform_hlds__size_prof__size_prof_process_switch_14_p_0(First0_64, &First_67, Later0_65, &Later_68, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_120_120, TargetTypeInfoMap0_183, TypeInfoMap0_184, RevTypeInfoMap0_185, TypeCtorMap0_186, RevTypeCtorMap0_66, &TypeInfoMap_69, KnownSizeMap0_187, &KnownSizeMap_70);
              Var_447 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_120_120, (MR_Integer) 0))));
              Var_448 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_120_120, (MR_Integer) 1))));
              Var_450 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_120_120, (MR_Integer) 3))));
              Var_451 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_120_120, (MR_Integer) 4))));
              Var_452 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_120_120, (MR_Integer) 5))));
              Var_453 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_120_120, (MR_Integer) 6))));
              Var_454 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_120_120, (MR_Integer) 7))));
              Var_455 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_120_120, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_456 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_120_120, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_121_121 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 0) = ((MR_Box) (Var_447));
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 1) = ((MR_Box) (Var_448));
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 2) = ((MR_Box) (TypeInfoMap_69));
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 3) = ((MR_Box) (Var_450));
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 4) = ((MR_Box) (Var_451));
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 5) = ((MR_Box) (Var_452));
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 6) = ((MR_Box) (Var_453));
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 7) = ((MR_Box) (Var_454));
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 8) = (MR_Box) ((MR_Unsigned) (Var_455));
                MR_hl_field(0, STATE_VARIABLE_Info_121_121, 9) = ((MR_Box) (Var_456));
              }
              Var_123 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
              Var_457 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_121_121, (MR_Integer) 0))));
              Var_459 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_121_121, (MR_Integer) 2))));
              Var_460 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_121_121, (MR_Integer) 3))));
              Var_461 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_121_121, (MR_Integer) 4))));
              Var_462 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_121_121, (MR_Integer) 5))));
              Var_463 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_121_121, (MR_Integer) 6))));
              Var_464 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_121_121, (MR_Integer) 7))));
              Var_465 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_121_121, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_466 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_121_121, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_122_122 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 0) = ((MR_Box) (Var_457));
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 1) = ((MR_Box) (Var_123));
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 2) = ((MR_Box) (Var_459));
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 3) = ((MR_Box) (Var_460));
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 4) = ((MR_Box) (Var_461));
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 5) = ((MR_Box) (Var_462));
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 6) = ((MR_Box) (Var_463));
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 7) = ((MR_Box) (Var_464));
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 8) = (MR_Box) ((MR_Unsigned) (Var_465));
                MR_hl_field(0, STATE_VARIABLE_Info_122_122, 9) = ((MR_Box) (Var_466));
              }
              Var_125 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              Var_467 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_122_122, (MR_Integer) 0))));
              Var_468 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_122_122, (MR_Integer) 1))));
              Var_469 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_122_122, (MR_Integer) 2))));
              Var_471 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_122_122, (MR_Integer) 4))));
              Var_472 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_122_122, (MR_Integer) 5))));
              Var_474 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_122_122, (MR_Integer) 7))));
              Var_475 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_122_122, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_476 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_122_122, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_126_126 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 0) = ((MR_Box) (Var_467));
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 1) = ((MR_Box) (Var_468));
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 2) = ((MR_Box) (Var_469));
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 3) = ((MR_Box) (Var_125));
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 4) = ((MR_Box) (Var_471));
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 5) = ((MR_Box) (Var_472));
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 6) = ((MR_Box) (KnownSizeMap_70));
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 7) = ((MR_Box) (Var_474));
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 8) = (MR_Box) ((MR_Unsigned) (Var_475));
                MR_hl_field(0, STATE_VARIABLE_Info_126_126, 9) = ((MR_Box) (Var_476));
              }
              {
                Cases_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Cases_71, 0) = ((MR_Box) (First_67));
                MR_hl_field(1, Cases_71, 1) = ((MR_Box) (Later_68));
              }
            }
            transform_hlds__size_prof__update_rev_maps_2_p_0(STATE_VARIABLE_Info_126_126, &STATE_VARIABLE_Info_129_129);
            transform_hlds__size_prof__update_target_map_2_p_0(STATE_VARIABLE_Info_129_129, STATE_VARIABLE_Info_96);
            {
              GoalExpr_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_22, 1) = ((MR_Box) (SwitchVar_61));
              MR_hl_field(3, GoalExpr_22, 2) = (MR_Box) ((MR_Unsigned) (CanFail_62));
              MR_hl_field(3, GoalExpr_22, 3) = ((MR_Box) (Cases_71));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word SubGoal0_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Reason_92;
            MR_Word SubGoal_93;
            MR_Word TermVar_91;
            MR_Word Var_174;

            succeeded = ((((MR_tag((MR_Word) Reason0_89)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason0_89, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              TermVar_91 = ((MR_Word) ((MR_hl_field(3, Reason0_89, (MR_Integer) 1))));
              Var_174 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_89, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_174 == (MR_Integer) 1);
            }
            if (succeeded)
              {
                Reason_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_92, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Reason_92, 1) = ((MR_Box) (TermVar_91));
                MR_hl_field(3, Reason_92, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
              }
            else
              Reason_92 = Reason0_89;
            transform_hlds__size_prof__size_prof_process_goal_4_p_0(SubGoal0_90, &SubGoal_93, STATE_VARIABLE_Info_0_95, STATE_VARIABLE_Info_96);
            {
              GoalExpr_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_22, 1) = ((MR_Box) (Reason_92));
              MR_hl_field(3, GoalExpr_22, 2) = ((MR_Box) (SubGoal_93));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Quant_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Cond_78;
            MR_Word Then_79;
            MR_Word TargetTypeInfoMapThen_80;
            MR_Word TypeInfoMapThen_81;
            MR_Word KnownSizeMapThen_82;
            MR_Word ElseTargetTypeInfoMap_83;
            MR_Word Else_84;
            MR_Word TypeInfoMapElse_85;
            MR_Word KnownSizeMapElse_86;
            MR_Word STATE_VARIABLE_Info_148_148;
            MR_Word Var_149;
            MR_Word STATE_VARIABLE_Info_150_150;
            MR_Word STATE_VARIABLE_Info_151_151;
            MR_Word STATE_VARIABLE_Info_152_152;
            MR_Word STATE_VARIABLE_Info_159_159;
            MR_Word STATE_VARIABLE_Info_160_160;
            MR_Word STATE_VARIABLE_Info_161_161;
            MR_Word Var_163;
            MR_Word STATE_VARIABLE_Info_164_164;
            MR_Word STATE_VARIABLE_Info_165_165;
            MR_Word TargetTypeInfoMap0_234 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 5))));
            MR_Word TypeInfoMap0_235 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
            MR_Word RevTypeInfoMap0_236 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
            MR_Word TypeCtorMap0_237 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
            MR_Word KnownSizeMap0_238 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
            MR_Word RevTypeCtorMap0_239 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
            MR_Word TypeInfoMap_240;
            MR_Word KnownSizeMap_241;
            MR_Word Var_722;
            MR_Word Var_729;
            MR_Word Var_730;
            MR_Word Var_731;
            MR_Word Var_810;
            MR_Word Var_812;
            MR_Word Var_813;
            MR_Word Var_814;
            MR_Word Var_815;
            MR_Word Var_817;
            MR_Word Var_818;
            MR_Word Var_819;
            MR_Word Var_675;
            MR_Word Var_676;
            MR_Word Var_677;
            MR_Word Var_678;
            MR_Word Var_679;
            MR_Word Var_681;
            MR_Word Var_682;
            MR_Word Var_683;
            MR_Word Var_684;
            MR_Word Var_685;
            MR_Word Var_686;
            MR_Word Var_687;
            MR_Word Var_688;
            MR_Word Var_689;
            MR_Word Var_691;
            MR_Word Var_692;
            MR_Word Var_693;
            MR_Word Var_694;
            MR_Word Var_800;
            MR_Word Var_801;
            MR_Word Var_803;
            MR_Word Var_804;
            MR_Word Var_805;
            MR_Word Var_806;
            MR_Word Var_807;
            MR_Word Var_808;
            MR_Word Var_809;

            Var_149 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
            Var_675 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
            Var_676 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
            Var_677 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 2))));
            Var_678 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 3))));
            Var_679 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 4))));
            Var_681 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 6))));
            Var_682 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 7))));
            Var_683 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 8))) & (MR_Integer) 1);
            Var_684 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_95, (MR_Integer) 9))));
            {
              STATE_VARIABLE_Info_148_148 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 0) = ((MR_Box) (Var_675));
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 1) = ((MR_Box) (Var_676));
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 2) = ((MR_Box) (Var_677));
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 3) = ((MR_Box) (Var_678));
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 4) = ((MR_Box) (Var_679));
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 5) = ((MR_Box) (Var_149));
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 6) = ((MR_Box) (Var_681));
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 7) = ((MR_Box) (Var_682));
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 8) = (MR_Box) ((MR_Unsigned) (Var_683));
              MR_hl_field(0, STATE_VARIABLE_Info_148_148, 9) = ((MR_Box) (Var_684));
            }
            transform_hlds__size_prof__size_prof_process_goal_4_p_0(Cond0_75, &Cond_78, STATE_VARIABLE_Info_148_148, &STATE_VARIABLE_Info_150_150);
            Var_685 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_150_150, (MR_Integer) 0))));
            Var_686 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_150_150, (MR_Integer) 1))));
            Var_687 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_150_150, (MR_Integer) 2))));
            Var_688 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_150_150, (MR_Integer) 3))));
            Var_689 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_150_150, (MR_Integer) 4))));
            Var_691 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_150_150, (MR_Integer) 6))));
            Var_692 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_150_150, (MR_Integer) 7))));
            Var_693 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_150_150, (MR_Integer) 8))) & (MR_Integer) 1);
            Var_694 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_150_150, (MR_Integer) 9))));
            {
              STATE_VARIABLE_Info_151_151 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 0) = ((MR_Box) (Var_685));
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 1) = ((MR_Box) (Var_686));
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 2) = ((MR_Box) (Var_687));
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 3) = ((MR_Box) (Var_688));
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 4) = ((MR_Box) (Var_689));
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 5) = ((MR_Box) (TargetTypeInfoMap0_234));
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 6) = ((MR_Box) (Var_691));
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 7) = ((MR_Box) (Var_692));
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 8) = (MR_Box) ((MR_Unsigned) (Var_693));
              MR_hl_field(0, STATE_VARIABLE_Info_151_151, 9) = ((MR_Box) (Var_694));
            }
            transform_hlds__size_prof__size_prof_process_goal_4_p_0(Then0_76, &Then_79, STATE_VARIABLE_Info_151_151, &STATE_VARIABLE_Info_152_152);
            TypeInfoMapThen_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_152_152, (MR_Integer) 2))));
            TargetTypeInfoMapThen_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_152_152, (MR_Integer) 5))));
            KnownSizeMapThen_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_152_152, (MR_Integer) 6))));
            mercury__map__union_4_p_1((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_2[6]), TargetTypeInfoMapThen_80, TargetTypeInfoMap0_234, &ElseTargetTypeInfoMap_83);
            Var_722 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_152_152, (MR_Integer) 0))));
            Var_729 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_152_152, (MR_Integer) 7))));
            Var_730 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_152_152, (MR_Integer) 8))) & (MR_Integer) 1);
            Var_731 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_152_152, (MR_Integer) 9))));
            {
              STATE_VARIABLE_Info_159_159 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 0) = ((MR_Box) (Var_722));
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 1) = ((MR_Box) (TypeCtorMap0_237));
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 2) = ((MR_Box) (TypeInfoMap0_235));
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 3) = ((MR_Box) (RevTypeCtorMap0_239));
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 4) = ((MR_Box) (RevTypeInfoMap0_236));
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 5) = ((MR_Box) (ElseTargetTypeInfoMap_83));
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 6) = ((MR_Box) (KnownSizeMap0_238));
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 7) = ((MR_Box) (Var_729));
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 8) = (MR_Box) ((MR_Unsigned) (Var_730));
              MR_hl_field(0, STATE_VARIABLE_Info_159_159, 9) = ((MR_Box) (Var_731));
            }
            transform_hlds__size_prof__size_prof_process_goal_4_p_0(Else0_77, &Else_84, STATE_VARIABLE_Info_159_159, &STATE_VARIABLE_Info_160_160);
            TypeInfoMapElse_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 2))));
            KnownSizeMapElse_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 6))));
            TypeInfoMap_240 = mercury__map__common_subset_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfoMapThen_81, TypeInfoMapElse_85);
            KnownSizeMap_241 = mercury__map__common_subset_2_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), KnownSizeMapThen_82, KnownSizeMapElse_86);
            Var_800 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 0))));
            Var_801 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 1))));
            Var_803 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 3))));
            Var_804 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 4))));
            Var_805 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 5))));
            Var_806 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 6))));
            Var_807 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 7))));
            Var_808 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 8))) & (MR_Integer) 1);
            Var_809 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_160_160, (MR_Integer) 9))));
            {
              STATE_VARIABLE_Info_161_161 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 0) = ((MR_Box) (Var_800));
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 1) = ((MR_Box) (Var_801));
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 2) = ((MR_Box) (TypeInfoMap_240));
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 3) = ((MR_Box) (Var_803));
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 4) = ((MR_Box) (Var_804));
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 5) = ((MR_Box) (Var_805));
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 6) = ((MR_Box) (Var_806));
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 7) = ((MR_Box) (Var_807));
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 8) = (MR_Box) ((MR_Unsigned) (Var_808));
              MR_hl_field(0, STATE_VARIABLE_Info_161_161, 9) = ((MR_Box) (Var_809));
            }
            Var_163 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
            Var_810 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_161_161, (MR_Integer) 0))));
            Var_812 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_161_161, (MR_Integer) 2))));
            Var_813 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_161_161, (MR_Integer) 3))));
            Var_814 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_161_161, (MR_Integer) 4))));
            Var_815 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_161_161, (MR_Integer) 5))));
            Var_817 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_161_161, (MR_Integer) 7))));
            Var_818 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_161_161, (MR_Integer) 8))) & (MR_Integer) 1);
            Var_819 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_161_161, (MR_Integer) 9))));
            {
              STATE_VARIABLE_Info_164_164 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 0) = ((MR_Box) (Var_810));
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 1) = ((MR_Box) (Var_163));
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 2) = ((MR_Box) (Var_812));
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 3) = ((MR_Box) (Var_813));
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 4) = ((MR_Box) (Var_814));
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 5) = ((MR_Box) (Var_815));
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 6) = ((MR_Box) (KnownSizeMap_241));
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 7) = ((MR_Box) (Var_817));
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 8) = (MR_Box) ((MR_Unsigned) (Var_818));
              MR_hl_field(0, STATE_VARIABLE_Info_164_164, 9) = ((MR_Box) (Var_819));
            }
            transform_hlds__size_prof__update_rev_maps_2_p_0(STATE_VARIABLE_Info_164_164, &STATE_VARIABLE_Info_165_165);
            transform_hlds__size_prof__update_target_map_2_p_0(STATE_VARIABLE_Info_165_165, STATE_VARIABLE_Info_96);
            {
              GoalExpr_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_22, 1) = ((MR_Box) (Quant_74));
              MR_hl_field(3, GoalExpr_22, 2) = ((MR_Box) (Cond_78));
              MR_hl_field(3, GoalExpr_22, 3) = ((MR_Box) (Then_79));
              MR_hl_field(3, GoalExpr_22, 4) = ((MR_Box) (Else_84));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
  }
}

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TargetTypeInfoMap_10;

  transform_hlds__size_prof__include_in_target_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TargetTypeInfoMap_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TargetTypeInfoMap_10));
}

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word TargetTypeInfoMap0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  MR_Word TypeInfoMap_5 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word TargetTypeInfoList_6;
  MR_Word TargetTypeInfoMap_7;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Box conv1_TargetTypeInfoMap_7;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TargetTypeInfoMap0_4, &TargetTypeInfoList_6);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_8[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (transform_hlds__size_prof__update_target_map_2_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (TypeInfoMap_5));
  }
  Var_11 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]));
  mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_2[0]), (MR_Word) (&transform_hlds__size_prof_scalar_common_2[1]), Var_10, TargetTypeInfoList_6, ((MR_Box) (Var_11)), &conv1_TargetTypeInfoMap_7);
  TargetTypeInfoMap_7 = ((MR_Word) (conv1_TargetTypeInfoMap_7));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
  Var_38 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 8))) & (MR_Integer) 1);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 5) = ((MR_Box) (TargetTypeInfoMap_7));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_38));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_39));
  }
}

static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word TypeInfoList_4;
  MR_Word TypeCtorList_5;
  MR_Word VarCounts0_6;
  MR_Word VarCounts1_7;
  MR_Word VarCounts_8;
  MR_Word RevTypeInfoMap_9;
  MR_Word RevTypeCtorMap_10;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 2))));
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Var_13, &TypeInfoList_4);
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Var_14, &TypeCtorList_5);
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &VarCounts0_6);
  transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(TypeInfoList_4, VarCounts0_6, &VarCounts1_7);
  transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(TypeCtorList_5, VarCounts1_7, &VarCounts_8);
  Var_15 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
  transform_hlds__size_prof__construct_rev_map_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeInfoList_4, VarCounts_8, Var_15, &RevTypeInfoMap_9);
  Var_16 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  transform_hlds__size_prof__construct_rev_map_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCtorList_5, VarCounts_8, Var_16, &RevTypeCtorMap_10);
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 2))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 5))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 6))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 7))));
  Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 8))) & (MR_Integer) 1);
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 3) = ((MR_Box) (RevTypeCtorMap_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (RevTypeInfoMap_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_44));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_45));
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
      MR_Word AssocList_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_VarCounts_16_16;
      MR_Integer Count_11;
      MR_Box conv0_Count_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarCounts_0_2;

      Var_8 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 1))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_VarCounts_0_2, ((MR_Box) (Var_8)), &conv0_Count_11);
      if (succeeded)
      {
        Count_11 = ((MR_Integer) (conv0_Count_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Count_11 + (MR_Unsigned) 1);

        mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_8)), ((MR_Box) (Var_15)), STATE_VARIABLE_VarCounts_0_2, &STATE_VARIABLE_VarCounts_16_16);
      }
      else
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_8)), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_VarCounts_0_2, &STATE_VARIABLE_VarCounts_16_16);
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
  MR_Word TypeInfo_for_T_19,
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
      MR_Word AssocList_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Count_14;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevMap_18_18;
      MR_Box conv0_Count_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevMap_0_3;

      T_9 = (MR_hl_field(0, Var_17, (MR_Integer) 0));
      Var_10 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarCounts_2, ((MR_Box) (Var_10)), &conv0_Count_14);
      Count_14 = ((MR_Integer) (conv0_Count_14));
      succeeded = (Count_14 == (MR_Integer) 1);
      if (succeeded)
        mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TypeInfo_for_T_19, ((MR_Box) (Var_10)), T_9, STATE_VARIABLE_RevMap_0_3, &STATE_VARIABLE_RevMap_18_18);
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

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__774__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_bool succeeded;
  MR_Word VarType_16;
  MR_Word VarTypeCtor_17;
  MR_Word VarTypeCtorModule_18;
  MR_String VarTypeCtorName_19;
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 7))));
  MR_Integer Var_20;
  MR_Word Var_44;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  parse_tree__var_table__lookup_var_type_3_p_0(Var_30, Var_9, &VarType_16);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_16, &VarTypeCtor_17);
  check_hlds__type_util__type_ctor_module_name_arity_4_p_0(VarTypeCtor_17, &VarTypeCtorModule_18, &VarTypeCtorName_19, &Var_20);
  Var_44 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(VarTypeCtorModule_18, Var_44);
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
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
  }
  if (succeeded)
  {
    *GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
  }
  else
  {
    if (((((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) ConsId_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
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
    {
      MR_Word DefinedArgs_46;
      MR_Word GoalExpr0_48;
      MR_Word GoalInfo0_49;
      MR_Word Context_50;
      MR_Integer KnownSize_51;
      MR_Word MaybeDynamicSizeVar_52;
      MR_Word ArgGoals_53;
      MR_Word STATE_VARIABLE_Info_32_62;
      MR_Word _NonDefArgs_47;

      transform_hlds__size_prof__find_defined_args_5_p_0(Args_11, ArgModes_12, &DefinedArgs_46, &_NonDefArgs_47, STATE_VARIABLE_Info_0_28);
      GoalExpr0_48 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
      GoalInfo0_49 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 1))));
      Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_49);
      transform_hlds__size_prof__size_prof_process_args_9_p_0(DefinedArgs_46, (MR_Integer) 0, &KnownSize_51, (MR_Word) ((MR_Unsigned) 0U), &MaybeDynamicSizeVar_52, Context_50, &ArgGoals_53, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_62);
      if ((MaybeDynamicSizeVar_52 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_63;

        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_6[0]));
          MR_hl_field(0, Var_63, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0_1));
          MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_63, 3) = ((MR_Box) (ArgGoals_53));
          MR_hl_field(0, Var_63, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_deconstruct\'/7", (MR_String) "nonempty ArgGoals");
        *GoalExpr_14 = GoalExpr0_48;
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_32_62;
      }
      else
      {
        MR_Word SizeVar0_54 = ((MR_Word) ((MR_hl_field(1, MaybeDynamicSizeVar_52, (MR_Integer) 0))));
        MR_Word SizeVar_55;
        MR_Word SizeGoals_56;
        MR_Word TermSizeProfBuiltin_57;
        MR_Word UpdateGoal_58;
        MR_Word Goals_59;
        MR_Word Var_67;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;

        transform_hlds__size_prof__generate_size_var_7_p_0(SizeVar0_54, KnownSize_51, Context_50, &SizeVar_55, &SizeGoals_56, STATE_VARIABLE_Info_32_62, STATE_VARIABLE_Info_29);
        TermSizeProfBuiltin_57 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
        Var_67 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Info_29, (MR_Integer) 0))));
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (SizeVar_55));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_9));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_77));
        }
        Var_72 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(Var_67, (MR_Integer) 0, TermSizeProfBuiltin_57, (MR_String) "increment_size", (MR_Word) ((MR_Unsigned) 0U), Var_71, Var_72, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_50, &UpdateGoal_58);
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (Goal0_13));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (UpdateGoal_58));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SizeGoals_56, Var_82);
        Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoals_53, Var_81);
        Goals_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_78, Var_80);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_14 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, base, 2) = ((MR_Box) (Goals_59));
        }
      }
    }
    else
    {
      transform_hlds__size_prof__record_known_size_4_p_0(Var_9, (MR_Integer) 0, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      *GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
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
  MR_Word KnownSizeMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 6))));
  MR_Word KnownSizeMap_9;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;

  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_5)), ((MR_Box) (KnownSize_6)), KnownSizeMap0_8, &KnownSizeMap_9);
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 0))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 1))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 3))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 4))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 5))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 7))));
  Var_29 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 8))) & (MR_Integer) 1);
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 6) = ((MR_Box) (KnownSizeMap_9));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_29));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_30));
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
  MR_bool succeeded;
  MR_Word VarType_28;
  MR_Word VarTypeCtor_29;
  MR_Word VarTypeCtorModule_30;
  MR_String VarTypeCtorName_31;
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 7))));
  MR_Integer Var_32;
  MR_Word Var_77;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  parse_tree__var_table__lookup_var_type_3_p_0(Var_47, Var_19, &VarType_28);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_28, &VarTypeCtor_29);
  check_hlds__type_util__type_ctor_module_name_arity_4_p_0(VarTypeCtor_29, &VarTypeCtorModule_30, &VarTypeCtorName_31, &Var_32);
  Var_77 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(VarTypeCtorModule_30, Var_77);
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
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
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

      succeeded = ((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 2);
      if (succeeded)
      {
        succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeCtorInfoVar_34 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
          ArgTypeInfoVars_35 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
        }
      }
      if (succeeded)
        transform_hlds__size_prof__record_known_type_info_5_p_0(Var_19, TypeCtorInfoVar_34, ArgTypeInfoVars_35, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
      else
      {
        MR_Word M_36;
        MR_String N_37;
        MR_Integer A_38;

        succeeded = ((((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 10)));
        if (succeeded)
        {
          M_36 = ((MR_Word) ((MR_hl_field(3, ConsId_20, (MR_Integer) 1))));
          N_37 = ((MR_String) ((MR_hl_field(3, ConsId_20, (MR_Integer) 2))));
          A_38 = ((MR_Integer) ((MR_hl_field(3, ConsId_20, (MR_Integer) 3))));
          transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(Var_19, M_36, N_37, A_38, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_info");
            return;
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

        succeeded = ((((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 10)));
        if (succeeded)
        {
          M_61 = ((MR_Word) ((MR_hl_field(3, ConsId_20, (MR_Integer) 1))));
          N_62 = ((MR_String) ((MR_hl_field(3, ConsId_20, (MR_Integer) 2))));
          A_63 = ((MR_Integer) ((MR_hl_field(3, ConsId_20, (MR_Integer) 3))));
          transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(Var_19, M_61, N_62, A_63, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_ctor_info");
            return;
          }
      }
      else
        *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_0_45;
    }
    {
      Unification_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Unification_39, 0) = ((MR_Box) (Var_19));
      MR_hl_field(0, Unification_39, 1) = ((MR_Box) (ConsId_20));
      MR_hl_field(0, Unification_39, 2) = ((MR_Box) (Args_21));
      MR_hl_field(0, Unification_39, 3) = ((MR_Box) (ArgModes_22));
      MR_hl_field(0, Unification_39, 4) = ((MR_Box) (How_23));
      MR_hl_field(0, Unification_39, 5) = (MR_Box) ((MR_Unsigned) (Unique_24));
      MR_hl_field(0, Unification_39, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_26 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LHS_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (RHS_16));
      MR_hl_field(1, base, 2) = ((MR_Box) (UniMode_17));
      MR_hl_field(1, base, 3) = ((MR_Box) (Unification_39));
      MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_18));
    }
  }
  else
  {
    succeeded = ((((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
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
      MR_Word KnownSizeMap0_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 6))));
      MR_Word KnownSizeMap_80;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;

      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_19)), ((MR_Box) ((MR_Integer) 0)), KnownSizeMap0_79, &KnownSizeMap_80);
      Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 0))));
      Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 1))));
      Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 2))));
      Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 3))));
      Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 4))));
      Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 5))));
      Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 7))));
      Var_98 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 8))) & (MR_Integer) 1);
      Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, (MR_Integer) 9))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_46 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_90));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_91));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_92));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_93));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_94));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_95));
        MR_hl_field(0, base, 6) = ((MR_Box) (KnownSizeMap_80));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_97));
        MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_98));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_99));
      }
      {
        Unification_67 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unification_67, 0) = ((MR_Box) (Var_19));
        MR_hl_field(0, Unification_67, 1) = ((MR_Box) (ConsId_20));
        MR_hl_field(0, Unification_67, 2) = ((MR_Box) (Args_21));
        MR_hl_field(0, Unification_67, 3) = ((MR_Box) (ArgModes_22));
        MR_hl_field(0, Unification_67, 4) = ((MR_Box) (How_23));
        MR_hl_field(0, Unification_67, 5) = (MR_Box) ((MR_Unsigned) (Unique_24));
        MR_hl_field(0, Unification_67, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_26 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (LHS_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (RHS_16));
        MR_hl_field(1, base, 2) = ((MR_Box) (UniMode_17));
        MR_hl_field(1, base, 3) = ((MR_Box) (Unification_67));
        MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_18));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__731__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_bool succeeded;
  MR_Integer FunctorSize_30;
  MR_Word DefinedArgs_31;
  MR_Word NonDefinedArgs_32;
  MR_Word Context_33;
  MR_Integer KnownSize_34;
  MR_Word MaybeDynamicSizeVar_35;
  MR_Word ArgGoals_36;
  MR_Word STATE_VARIABLE_Info_52_52;
  MR_Word TransformOp_78 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_49, (MR_Integer) 8))) & (MR_Integer) 1);

  switch (TransformOp_78) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      FunctorSize_30 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      FunctorSize_30 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Args_23);
      break;
  }
  transform_hlds__size_prof__find_defined_args_5_p_0(Args_23, ArgModes_24, &DefinedArgs_31, &NonDefinedArgs_32, STATE_VARIABLE_Info_0_49);
  Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_27);
  transform_hlds__size_prof__size_prof_process_args_9_p_0(DefinedArgs_31, FunctorSize_30, &KnownSize_34, (MR_Word) ((MR_Unsigned) 0U), &MaybeDynamicSizeVar_35, Context_33, &ArgGoals_36, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_52_52);
  if ((MaybeDynamicSizeVar_35 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Unification_39;
    MR_Word Var_53;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;

    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_6[0]));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1));
      MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_53, 3) = ((MR_Box) (ArgGoals_36));
      MR_hl_field(0, Var_53, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_construct\'/15", (MR_String) "nonempty ArgGoals");
    if ((NonDefinedArgs_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word KnownSizeMap0_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 6))));
      MR_Word KnownSizeMap_90;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;

      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_20)), ((MR_Box) (KnownSize_34)), KnownSizeMap0_89, &KnownSizeMap_90);
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 0))));
      Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 1))));
      Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 2))));
      Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 3))));
      Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 4))));
      Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 5))));
      Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 7))));
      Var_108 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 8))) & (MR_Integer) 1);
      Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_52_52, (MR_Integer) 9))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_50 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_100));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_101));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_102));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_103));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_104));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_105));
        MR_hl_field(0, base, 6) = ((MR_Box) (KnownSizeMap_90));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_107));
        MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_108));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_109));
      }
    }
    else
      *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_52_52;
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (KnownSize_34));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
    }
    {
      Unification_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Unification_39, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, Unification_39, 1) = ((MR_Box) (ConsId_22));
      MR_hl_field(0, Unification_39, 2) = ((MR_Box) (Args_23));
      MR_hl_field(0, Unification_39, 3) = ((MR_Box) (ArgModes_24));
      MR_hl_field(0, Unification_39, 4) = ((MR_Box) (How_25));
      MR_hl_field(0, Unification_39, 5) = (MR_Box) ((MR_Unsigned) (Unique_26));
      MR_hl_field(0, Unification_39, 6) = ((MR_Box) (Var_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_28 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LHS_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (RHS_17));
      MR_hl_field(1, base, 2) = ((MR_Box) (UniMode_18));
      MR_hl_field(1, base, 3) = ((MR_Box) (Unification_39));
      MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_19));
    }
  }
  else
  {
    MR_Word SizeVar0_40 = ((MR_Word) ((MR_hl_field(1, MaybeDynamicSizeVar_35, (MR_Integer) 0))));
    MR_Word SizeVar_41;
    MR_Word SizeGoals_42;
    MR_Word UnifyExpr_43;
    MR_Word NonLocals0_44;
    MR_Word NonLocals_45;
    MR_Word GoalInfo_46;
    MR_Word UnifyGoal_47;
    MR_Word Goals_48;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Unification_74;

    transform_hlds__size_prof__generate_size_var_7_p_0(SizeVar0_40, KnownSize_34, Context_33, &SizeVar_41, &SizeGoals_42, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_50);
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (SizeVar_41));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
    }
    {
      Unification_74 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Unification_74, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, Unification_74, 1) = ((MR_Box) (ConsId_22));
      MR_hl_field(0, Unification_74, 2) = ((MR_Box) (Args_23));
      MR_hl_field(0, Unification_74, 3) = ((MR_Box) (ArgModes_24));
      MR_hl_field(0, Unification_74, 4) = ((MR_Box) (How_25));
      MR_hl_field(0, Unification_74, 5) = (MR_Box) ((MR_Unsigned) (Unique_26));
      MR_hl_field(0, Unification_74, 6) = ((MR_Box) (Var_63));
    }
    {
      UnifyExpr_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UnifyExpr_43, 0) = ((MR_Box) (LHS_16));
      MR_hl_field(1, UnifyExpr_43, 1) = ((MR_Box) (RHS_17));
      MR_hl_field(1, UnifyExpr_43, 2) = ((MR_Box) (UniMode_18));
      MR_hl_field(1, UnifyExpr_43, 3) = ((MR_Box) (Unification_74));
      MR_hl_field(1, UnifyExpr_43, 4) = ((MR_Box) (UnifyContext_19));
    }
    NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_27);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SizeVar_41, NonLocals0_44, &NonLocals_45);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_45, GoalInfo0_27, &GoalInfo_46);
    {
      UnifyGoal_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyGoal_47, 0) = ((MR_Box) (UnifyExpr_43));
      MR_hl_field(0, UnifyGoal_47, 1) = ((MR_Box) (GoalInfo_46));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (UnifyGoal_47));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (SizeGoals_42));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (ArgGoals_36));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
    }
    Goals_48 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_67);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_28 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, base, 2) = ((MR_Box) (Goals_48));
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
  MR_bool succeeded;

  if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((Modes_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *DefinedArgs_8 = (MR_Word) ((MR_Unsigned) 0U);
      *NonDefinedArgs_9 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, Args_6, (MR_Integer) 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, Args_6, (MR_Integer) 0))));

    if ((Modes_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word FirstMode_17 = ((MR_Word) ((MR_hl_field(1, Modes_7, (MR_Integer) 0))));
      MR_Word LaterModes_18 = ((MR_Word) ((MR_hl_field(1, Modes_7, (MR_Integer) 1))));
      MR_Word LaterDefinedArgs_19;
      MR_Word LaterNonDefinedArgs_20;
      MR_Word ModuleInfo_27;
      MR_Word CellInitInst_28;
      MR_Word CellFinalInst_29;

      transform_hlds__size_prof__find_defined_args_5_p_0(Var_25, LaterModes_18, &LaterDefinedArgs_19, &LaterNonDefinedArgs_20, Info_10);
      ModuleInfo_27 = ((MR_Word) ((MR_hl_field(0, Info_10, (MR_Integer) 0))));
      CellInitInst_28 = ((MR_Word) ((MR_hl_field(0, FirstMode_17, (MR_Integer) 0))));
      CellFinalInst_29 = ((MR_Word) ((MR_hl_field(0, FirstMode_17, (MR_Integer) 1))));
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_27, CellInitInst_28);
      if (succeeded)
        succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_27, CellFinalInst_29);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *DefinedArgs_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, base, 1) = ((MR_Box) (LaterDefinedArgs_19));
        }
        *NonDefinedArgs_9 = LaterNonDefinedArgs_20;
      }
      else
      {
        *DefinedArgs_8 = LaterDefinedArgs_19;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *NonDefinedArgs_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, base, 1) = ((MR_Box) (LaterNonDefinedArgs_20));
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
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded = (KnownSize_9 == (MR_Integer) 0);

  if (succeeded)
  {
    *SizeVar_11 = SizeVar0_8;
    *Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
  else
  {
    MR_Word VarTable0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 7))));
    MR_Word KnownSizeGoal_15;
    MR_Word KnownSizeVar_16;
    MR_Word VarTable1_17;
    MR_Word TermSizeProfModule_18;
    MR_Word AddGoal_19;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word VarTable0_72;
    MR_Word VarTable_73;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_Word Var_92;

    hlds__make_goal__make_int_const_construction_alloc_6_p_0(KnownSize_9, (MR_String) "KnownSize", &KnownSizeGoal_15, &KnownSizeVar_16, VarTable0_14, &VarTable1_17);
    Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
    Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 1))));
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 4))));
    Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 5))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 6))));
    Var_61 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 9))));
    {
      STATE_VARIABLE_Info_23_23 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 0) = ((MR_Box) (Var_53));
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 1) = ((MR_Box) (Var_54));
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 2) = ((MR_Box) (Var_55));
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 3) = ((MR_Box) (Var_56));
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 4) = ((MR_Box) (Var_57));
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 5) = ((MR_Box) (Var_58));
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 6) = ((MR_Box) (Var_59));
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 7) = ((MR_Box) (VarTable1_17));
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 8) = (MR_Box) ((MR_Unsigned) (Var_61));
      MR_hl_field(0, STATE_VARIABLE_Info_23_23, 9) = ((MR_Box) (Var_62));
    }
    Var_25 = parse_tree__builtin_lib_types__int_type_0_f_0();
    VarTable0_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 7))));
    parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "FinalSizeVar", Var_25, (MR_Integer) 1, SizeVar_11, VarTable0_72, &VarTable_73);
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 0))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 1))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 2))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 3))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 4))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 5))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 6))));
    Var_91 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 8))) & (MR_Integer) 1);
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_85));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 7) = ((MR_Box) (VarTable_73));
      MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_91));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_92));
    }
    TermSizeProfModule_18 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    Var_28 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Info_21, (MR_Integer) 0))));
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (*SizeVar_11));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (KnownSizeVar_16));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (SizeVar0_8));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_38));
    }
    Var_33 = hlds__instmap__instmap_delta_bind_var_1_f_0(*SizeVar_11);
    hlds__goal_util__generate_plain_call_13_p_0(Var_28, (MR_Integer) 1, TermSizeProfModule_18, (MR_String) "term_size_plus", (MR_Word) ((MR_Unsigned) 0U), Var_32, Var_33, (MR_Word) (MR_mkword(1, &transform_hlds__size_prof_scalar_common_3[0])), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_10, &AddGoal_19);
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (AddGoal_19));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (KnownSizeGoal_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_42));
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
    MR_Word Arg_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Args_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Type_27;
    MR_Word ArgGoals_29;
    MR_Word LaterGoals_33;
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))));
    MR_Integer STATE_VARIABLE_KnownSize_42_42;
    MR_Word STATE_VARIABLE_MaybeSizeVar_45_45;
    MR_Word STATE_VARIABLE_Info_46_46;
    MR_Integer ArgSize_28;
    MR_Word Var_41;
    MR_Box conv0_ArgSize_28;

    parse_tree__var_table__lookup_var_type_3_p_0(Var_40, Arg_20, &Type_27);
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
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
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));

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
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (SizeGoal_32));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfoGoals_31, Var_47, &ArgGoals_29);
      }
      STATE_VARIABLE_KnownSize_42_42 = STATE_VARIABLE_KnownSize_0_2;
    }
    transform_hlds__size_prof__size_prof_process_args_9_p_0(Args_21, STATE_VARIABLE_KnownSize_42_42, STATE_VARIABLE_KnownSize_3, STATE_VARIABLE_MaybeSizeVar_45_45, STATE_VARIABLE_MaybeSizeVar_5, Context_6, &LaterGoals_33, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_9);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgGoals_29, LaterGoals_33);
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
  MR_Word SizeVar_16;
  MR_String Pred_18;
  MR_Word ArgVars_19;
  MR_Word TermSizeProfBuiltin_20;
  MR_Word Var_24;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word VarTable0_50;
  MR_Word VarTable_51;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_70;

  Var_24 = parse_tree__builtin_lib_types__int_type_0_f_0();
  VarTable0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 7))));
  parse_tree__var_table__add_prefix_number_var_entry_6_p_0((MR_String) "SizeVar", Var_24, (MR_Integer) 1, &SizeVar_16, VarTable0_50, &VarTable_51);
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
  Var_69 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 8))) & (MR_Integer) 1);
  Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_63));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_64));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_66));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 7) = ((MR_Box) (VarTable_51));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_69));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_70));
  }
  if ((MaybeSizeVar0_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_30;

    Pred_18 = (MR_String) "measure_size";
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (SizeVar_16));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ArgVars_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgVars_19, 0) = ((MR_Box) (Arg_10));
      MR_hl_field(1, ArgVars_19, 1) = ((MR_Box) (Var_30));
    }
  }
  else
  {
    MR_Word SizeVar0_17 = ((MR_Word) ((MR_hl_field(1, MaybeSizeVar0_13, (MR_Integer) 0))));
    MR_Word Var_27;
    MR_Word Var_28;

    Pred_18 = (MR_String) "measure_size_acc";
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (SizeVar_16));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (SizeVar0_17));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      ArgVars_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgVars_19, 0) = ((MR_Box) (Arg_10));
      MR_hl_field(1, ArgVars_19, 1) = ((MR_Box) (Var_27));
    }
  }
  TermSizeProfBuiltin_20 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
  Var_32 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Info_22, (MR_Integer) 0))));
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (TypeInfoVar_9));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_35 = hlds__instmap__instmap_delta_bind_var_1_f_0(SizeVar_16);
  hlds__goal_util__generate_plain_call_13_p_0(Var_32, (MR_Integer) 0, TermSizeProfBuiltin_20, Pred_18, Var_34, ArgVars_19, Var_35, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, SizeGoal_12);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *MaybeSizeVar_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (SizeVar_16));
  }
}

static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
  MR_Word Context_7,
  MR_Word Type_8,
  MR_Word * TypeInfoVar_9,
  MR_Word * TypeInfoGoals_10,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_bool succeeded;
  MR_Word TypeInfoVarPrime_12;
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 2))));
  MR_Box conv0_TypeInfoVarPrime_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Var_37, ((MR_Box) (Type_8)), &conv0_TypeInfoVarPrime_12);
  if (succeeded)
  {
    TypeInfoVarPrime_12 = ((MR_Word) (conv0_TypeInfoVarPrime_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *TypeInfoVar_9 = TypeInfoVarPrime_12;
    *TypeInfoGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
  }
  else
  {
    MR_Word TypeCtor_13;
    MR_Word ArgTypes_14;

    succeeded = parse_tree__prog_type_test__type_has_variable_arity_ctor_3_p_0(Type_8, &TypeCtor_13, &ArgTypes_14);
    if (succeeded)
      transform_hlds__size_prof__construct_type_info_9_p_0(Context_7, Type_8, TypeCtor_13, ArgTypes_14, (MR_Integer) 1, TypeInfoVar_9, TypeInfoGoals_10, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
    else
    {
      MR_Word TypeCtor_67;
      MR_Word ArgTypes_68;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_8, &TypeCtor_67, &ArgTypes_68);
      if (succeeded)
        if ((ArgTypes_68 == (MR_Word) ((MR_Unsigned) 0U)))
          transform_hlds__size_prof__make_type_ctor_info_6_p_0(TypeCtor_67, (MR_Word) ((MR_Unsigned) 0U), TypeInfoVar_9, TypeInfoGoals_10, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
        else
          transform_hlds__size_prof__construct_type_info_9_p_0(Context_7, Type_8, TypeCtor_67, ArgTypes_68, (MR_Integer) 0, TypeInfoVar_9, TypeInfoGoals_10, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
      else
      {
        MR_Word TVar_19;

        succeeded = ((MR_tag((MR_Word) Type_8)) == (MR_Integer) 0);
        if (succeeded)
        {
          TVar_19 = ((MR_Word) ((MR_hl_field(0, Type_8, (MR_Integer) 0))));
          {
            MR_Word TVarLocn_21;
            MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 9))));

            hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(Var_44, TVar_19, &TVarLocn_21);
            if (((MR_tag((MR_Word) TVarLocn_21)) == (MR_Integer) 0))
            {
              *TypeInfoVar_9 = ((MR_Word) ((MR_hl_field(0, TVarLocn_21, (MR_Integer) 0))));
              *TypeInfoGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
            }
            else
            {
              MR_Word TypeClassInfoVar_22 = ((MR_Word) ((MR_hl_field(1, TVarLocn_21, (MR_Integer) 0))));
              MR_Integer Slot_23 = ((MR_Integer) ((MR_hl_field(1, TVarLocn_21, (MR_Integer) 1))));
              MR_Word TargetTypeInfoMap_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 5))));
              MR_Word VarTable0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 7))));
              MR_Word VarTable1_27;
              MR_Word SlotGoal_30;
              MR_Word SlotVar_31;
              MR_Word VarTable_32;
              MR_Word PrivateBuiltin_33;
              MR_Word ExtractGoal_34;
              MR_Word STATE_VARIABLE_Info_46_46;
              MR_Word STATE_VARIABLE_Info_48_48;
              MR_Word Var_49;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_63;
              MR_Word TargetVar_26;
              MR_Box conv1_TargetVar_26;
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Word Var_132;
              MR_Word Var_133;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TargetTypeInfoMap_24, ((MR_Box) (Type_8)), &conv1_TargetVar_26);
              if (succeeded)
              {
                TargetVar_26 = ((MR_Word) (conv1_TargetVar_26));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                *TypeInfoVar_9 = TargetVar_26;
                VarTable1_27 = VarTable0_25;
                STATE_VARIABLE_Info_46_46 = STATE_VARIABLE_Info_0_35;
              }
              else
              {
                MR_Word RttiVarMaps0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 9))));
                MR_Word RttiVarMaps_29;
                MR_Word Var_114;
                MR_Word Var_115;
                MR_Word Var_116;
                MR_Word Var_117;
                MR_Word Var_118;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word Var_121;
                MR_Word Var_122;

                check_hlds__polymorphism_type_info__new_type_info_var_vt_7_p_0(Type_8, (MR_Integer) 0, TypeInfoVar_9, VarTable0_25, &VarTable1_27, RttiVarMaps0_28, &RttiVarMaps_29);
                Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 0))));
                Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 1))));
                Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 2))));
                Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 3))));
                Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 4))));
                Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 5))));
                Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 6))));
                Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 7))));
                Var_122 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_35, (MR_Integer) 8))) & (MR_Integer) 1);
                {
                  STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (Var_114));
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (Var_115));
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (Var_116));
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (Var_117));
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (Var_118));
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (Var_119));
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (Var_120));
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (Var_121));
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 8) = (MR_Box) ((MR_Unsigned) (Var_122));
                  MR_hl_field(0, STATE_VARIABLE_Info_46_46, 9) = ((MR_Box) (RttiVarMaps_29));
                }
              }
              hlds__make_goal__make_int_const_construction_alloc_6_p_0(Slot_23, (MR_String) "TypeClassInfoSlot", &SlotGoal_30, &SlotVar_31, VarTable1_27, &VarTable_32);
              Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 0))));
              Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 1))));
              Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 2))));
              Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 3))));
              Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 4))));
              Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 5))));
              Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 6))));
              Var_132 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 8))) & (MR_Integer) 1);
              Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_46_46, (MR_Integer) 9))));
              {
                STATE_VARIABLE_Info_48_48 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 0) = ((MR_Box) (Var_124));
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 1) = ((MR_Box) (Var_125));
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 2) = ((MR_Box) (Var_126));
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 3) = ((MR_Box) (Var_127));
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 4) = ((MR_Box) (Var_128));
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 5) = ((MR_Box) (Var_129));
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 6) = ((MR_Box) (Var_130));
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 7) = ((MR_Box) (VarTable_32));
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 8) = (MR_Box) ((MR_Unsigned) (Var_132));
                MR_hl_field(0, STATE_VARIABLE_Info_48_48, 9) = ((MR_Box) (Var_133));
              }
              PrivateBuiltin_33 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_48_48, (MR_Integer) 0))));
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (*TypeInfoVar_9));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_59, 0) = ((MR_Box) (SlotVar_31));
                MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
              }
              {
                Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_53, 0) = ((MR_Box) (TypeClassInfoVar_22));
                MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_59));
              }
              Var_54 = hlds__instmap__instmap_delta_bind_var_1_f_0(*TypeInfoVar_9);
              hlds__goal_util__generate_plain_call_13_p_0(Var_49, (MR_Integer) 0, PrivateBuiltin_33, (MR_String) "type_info_from_typeclass_info", (MR_Word) ((MR_Unsigned) 0U), Var_53, Var_54, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_7, &ExtractGoal_34);
              transform_hlds__size_prof__record_type_info_var_4_p_0(Type_8, *TypeInfoVar_9, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_36);
              {
                Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_63, 0) = ((MR_Box) (ExtractGoal_34));
                MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *TypeInfoGoals_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (SlotGoal_30));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_63));
              }
            }
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.size_prof.make_type_info\'/6", (MR_String) "cannot happen");
            return;
          }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
  MR_Word Type_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;
  MR_Word RevTypeInfoMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 4))));
  MR_Word TypeInfoMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
  MR_Word TypeInfoMap_10;
  MR_Word RevTypeInfoMap_12;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word RevTypeInfoMap1_11;

  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), ((MR_Box) (Type_5)), ((MR_Box) (Var_6)), TypeInfoMap0_9, &TypeInfoMap_10);
  succeeded = mercury__map__insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_6)), ((MR_Box) (Type_5)), RevTypeInfoMap0_8, &RevTypeInfoMap1_11);
  if (succeeded)
    RevTypeInfoMap_12 = RevTypeInfoMap1_11;
  else
    RevTypeInfoMap_12 = RevTypeInfoMap0_8;
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 3))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 5))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 6))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 7))));
  Var_42 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 8))) & (MR_Integer) 1);
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeInfoMap_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 4) = ((MR_Box) (RevTypeInfoMap_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_42));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_43));
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
  MR_Box closure = closure_arg;
  MR_Word conv2_TypeInfoVar_9;
  MR_Word conv1_TypeInfoGoals_10;
  MR_Word conv0_STATE_VARIABLE_Info_36;

  transform_hlds__size_prof__make_type_info_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_TypeInfoVar_9, &conv1_TypeInfoGoals_10, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_36);
  *wrapper_arg_2 = ((MR_Box) (conv2_TypeInfoVar_9));
  *wrapper_arg_3 = ((MR_Box) (conv1_TypeInfoGoals_10));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_36));
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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_bool succeeded;
  MR_Word ArgTypeInfoVars_18;
  MR_Word ArgTypeInfoGoalLists_19;
  MR_Word ArgTypeInfoGoals_20;
  MR_Word TypeCtorVar_21;
  MR_Word TypeCtorGoals_22;
  MR_Word FrontGoals_28;
  MR_Word ArgVars_29;
  MR_Word VarTable2_30;
  MR_Word RttiVarMaps2_31;
  MR_Word TargetTypeInfoMap_32;
  MR_Word VarTable_34;
  MR_Word RttiVarMaps3_35;
  MR_Word TypeInfoGoal_36;
  MR_Word RttiVarMaps_37;
  MR_Word Var_40;
  MR_Word STATE_VARIABLE_Info_41_41;
  MR_Word STATE_VARIABLE_Info_42_42;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_108;
  MR_Box conv3_STATE_VARIABLE_Info_41_41;
  MR_Word TypeInfoVarPrime_33;
  MR_Box conv4_TypeInfoVarPrime_33;

  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[0]));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (transform_hlds__size_prof__construct_type_info_9_p_0_1));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_40, 3) = ((MR_Box) (Context_10));
  }
  mercury__list__map2_foldl_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[2]), (MR_Word) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0), Var_40, ArgTypes_13, &ArgTypeInfoVars_18, &ArgTypeInfoGoalLists_19, ((MR_Box) (STATE_VARIABLE_Info_0_38)), &conv3_STATE_VARIABLE_Info_41_41);
  STATE_VARIABLE_Info_41_41 = ((MR_Word) (conv3_STATE_VARIABLE_Info_41_41));
  ArgTypeInfoGoals_20 = mercury__list__condense_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoalLists_19);
  transform_hlds__size_prof__make_type_ctor_info_6_p_0(TypeCtor_12, ArgTypes_13, &TypeCtorVar_21, &TypeCtorGoals_22, STATE_VARIABLE_Info_41_41, &STATE_VARIABLE_Info_42_42);
  switch (CtorIsVarArity_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        FrontGoals_28 = TypeCtorGoals_22;
        {
          ArgVars_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVars_29, 0) = ((MR_Box) (TypeCtorVar_21));
          MR_hl_field(1, ArgVars_29, 1) = ((MR_Box) (ArgTypeInfoVars_18));
        }
        STATE_VARIABLE_Info_44_44 = STATE_VARIABLE_Info_42_42;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Arity_23;
        MR_Word VarTable0_24;
        MR_Word ArityGoal_25;
        MR_Word ArityVar_26;
        MR_Word VarTable1_27;
        MR_Word Var_45;
        MR_Word Var_47;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_71;
        MR_Word Var_72;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_13, &Arity_23);
        VarTable0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 7))));
        hlds__make_goal__make_int_const_construction_alloc_6_p_0(Arity_23, (MR_String) "TupleArity", &ArityGoal_25, &ArityVar_26, VarTable0_24, &VarTable1_27);
        Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 0))));
        Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 1))));
        Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 2))));
        Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 3))));
        Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 4))));
        Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 5))));
        Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 6))));
        Var_71 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 8))) & (MR_Integer) 1);
        Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_42_42, (MR_Integer) 9))));
        {
          STATE_VARIABLE_Info_44_44 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 0) = ((MR_Box) (Var_63));
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 1) = ((MR_Box) (Var_64));
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 2) = ((MR_Box) (Var_65));
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 3) = ((MR_Box) (Var_66));
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 4) = ((MR_Box) (Var_67));
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 5) = ((MR_Box) (Var_68));
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 6) = ((MR_Box) (Var_69));
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 7) = ((MR_Box) (VarTable1_27));
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 8) = (MR_Box) ((MR_Unsigned) (Var_71));
          MR_hl_field(0, STATE_VARIABLE_Info_44_44, 9) = ((MR_Box) (Var_72));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (ArityGoal_25));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        FrontGoals_28 = mercury__list__append_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeCtorGoals_22, Var_45);
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (ArityVar_26));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (ArgTypeInfoVars_18));
        }
        {
          ArgVars_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVars_29, 0) = ((MR_Box) (TypeCtorVar_21));
          MR_hl_field(1, ArgVars_29, 1) = ((MR_Box) (Var_47));
        }
      }
      break;
  }
  TargetTypeInfoMap_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 5))));
  VarTable2_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 7))));
  RttiVarMaps2_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 9))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), TargetTypeInfoMap_32, ((MR_Box) (Type_11)), &conv4_TypeInfoVarPrime_33);
  if (succeeded)
  {
    TypeInfoVarPrime_33 = ((MR_Word) (conv4_TypeInfoVarPrime_33));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *TypeInfoVar_15 = TypeInfoVarPrime_33;
    VarTable_34 = VarTable2_30;
    RttiVarMaps3_35 = RttiVarMaps2_31;
  }
  else
    check_hlds__polymorphism_type_info__new_type_info_var_vt_7_p_0(Type_11, (MR_Integer) 0, TypeInfoVar_15, VarTable2_30, &VarTable_34, RttiVarMaps2_31, &RttiVarMaps3_35);
  check_hlds__polymorphism_type_info__init_type_info_var_6_p_0(Type_11, ArgVars_29, *TypeInfoVar_15, &TypeInfoGoal_36, RttiVarMaps3_35, &RttiVarMaps_37);
  Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 0))));
  Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 1))));
  Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 2))));
  Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 3))));
  Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 4))));
  Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 5))));
  Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 6))));
  Var_108 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_44_44, (MR_Integer) 8))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_39 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_100));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_101));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_102));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_103));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_104));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_105));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_106));
    MR_hl_field(0, base, 7) = ((MR_Box) (VarTable_34));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_108));
    MR_hl_field(0, base, 9) = ((MR_Box) (RttiVarMaps_37));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (TypeInfoGoal_36));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FrontGoals_28, Var_52);
  *TypeInfoGoals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_20, Var_51);
}

static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word TypeArgs_8,
  MR_Word * TypeCtorVar_9,
  MR_Word * TypeCtorGoals_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word TypeCtorVarPrime_12;
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 1))));
  MR_Box conv0_TypeCtorVarPrime_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), Var_24, ((MR_Box) (TypeCtor_7)), &conv0_TypeCtorVarPrime_12);
  if (succeeded)
  {
    TypeCtorVarPrime_12 = ((MR_Word) (conv0_TypeCtorVarPrime_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *TypeCtorVar_9 = TypeCtorVarPrime_12;
    *TypeCtorGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
  else
  {
    MR_Word Type_15;
    MR_Word VarTable0_16;
    MR_Word RttiVarMaps0_17;
    MR_Word TypeCtorGoal_19;
    MR_Word VarTable_20;
    MR_Word RttiVarMaps_21;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Purity_13;
    MR_Word PredOrFunc_14;
    MR_Word _ConsId_18;

    succeeded = parse_tree__prog_type_test__type_ctor_is_higher_order_3_p_0(TypeCtor_7, &Purity_13, &PredOrFunc_14);
    if (succeeded)
      parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_13, PredOrFunc_14, TypeArgs_8, &Type_15);
    else
      parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_7, (MR_Word) ((MR_Unsigned) 0U), &Type_15);
    VarTable0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 7))));
    RttiVarMaps0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 9))));
    check_hlds__polymorphism_type_info__init_const_type_ctor_info_var_9_p_0(Type_15, TypeCtor_7, TypeCtorVar_9, &_ConsId_18, &TypeCtorGoal_19, VarTable0_16, &VarTable_20, RttiVarMaps0_17, &RttiVarMaps_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *TypeCtorGoals_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeCtorGoal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 1))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 2))));
    Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 4))));
    Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 5))));
    Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 6))));
    Var_63 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 8))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_23 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_57));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_58));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_59));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_60));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_61));
      MR_hl_field(0, base, 7) = ((MR_Box) (VarTable_20));
      MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_63));
      MR_hl_field(0, base, 9) = ((MR_Box) (RttiVarMaps_21));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_43;

  succeeded = transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1089__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_43);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_43));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
  MR_Word Var_6,
  MR_Word TypeCtorInfoVar_7,
  MR_Word ArgTypeInfoVars_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;
  MR_Word RevTypeCtorMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
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
    MR_Word RevTypeInfoMap0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
    MR_Word ArgTypes_13;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (transform_hlds__size_prof__record_known_type_info_5_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (RevTypeInfoMap0_12));
    }
    succeeded = mercury__list__map_3_p_2((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_21, ArgTypeInfoVars_8, &ArgTypes_13);
    if (succeeded)
    {
      MR_Integer Arity_14;
      MR_Word SymName_15;
      MR_Word TypeCtor1_17;
      MR_Word Type_18;
      MR_Word RevTypeInfoMap0_49;
      MR_Word TypeInfoMap0_50;
      MR_Word TypeInfoMap_51;
      MR_Word RevTypeInfoMap_53;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_76;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word RevTypeInfoMap1_52;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_13, &Arity_14);
      SymName_15 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_11, (MR_Integer) 0))));
      {
        TypeCtor1_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeCtor1_17, 0) = ((MR_Box) (SymName_15));
        MR_hl_field(0, TypeCtor1_17, 1) = ((MR_Box) (Arity_14));
      }
      parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor1_17, ArgTypes_13, &Type_18);
      TypeInfoMap0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
      RevTypeInfoMap0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
      mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), ((MR_Box) (Type_18)), ((MR_Box) (Var_6)), TypeInfoMap0_50, &TypeInfoMap_51);
      succeeded = mercury__map__insert_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_6)), ((MR_Box) (Type_18)), RevTypeInfoMap0_49, &RevTypeInfoMap1_52);
      if (succeeded)
        RevTypeInfoMap_53 = RevTypeInfoMap1_52;
      else
        RevTypeInfoMap_53 = RevTypeInfoMap0_49;
      Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
      Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 1))));
      Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
      Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 5))));
      Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 6))));
      Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 7))));
      Var_81 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 8))) & (MR_Integer) 1);
      Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_19, (MR_Integer) 9))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_74));
        MR_hl_field(0, base, 2) = ((MR_Box) (TypeInfoMap_51));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_76));
        MR_hl_field(0, base, 4) = ((MR_Box) (RevTypeInfoMap_53));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_78));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_79));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_80));
        MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_81));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_82));
      }
    }
    else
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
  }
  else
    *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
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
  MR_Word TypeCtor_12;
  MR_Word TypeCtorMap0_13;
  MR_Word RevTypeCtorMap0_14;
  MR_Word TypeCtorMap_15;
  MR_Word RevTypeCtorMap_16;
  MR_Word Var_19;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;

  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (TypeCtorModule_8));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (TypeCtorName_9));
  }
  {
    TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_12, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, TypeCtor_12, 1) = ((MR_Box) (TypeCtorArity_10));
  }
  TypeCtorMap0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 1))));
  RevTypeCtorMap0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 3))));
  mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (Var_7)), TypeCtorMap0_13, &TypeCtorMap_15);
  mercury__map__set_4_p_0((MR_Word) (&transform_hlds__size_prof_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (Var_7)), ((MR_Box) (TypeCtor_12)), RevTypeCtorMap0_14, &RevTypeCtorMap_16);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 5))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 7))));
  Var_47 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 8))) & (MR_Integer) 1);
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeCtorMap_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 3) = ((MR_Box) (RevTypeCtorMap_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_47));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_48));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__size_prof____Unify____construct_transform_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__size_prof____Compare____construct_transform_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__size_prof____Unify____known_size_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__size_prof____Compare____known_size_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__size_prof____Unify____rev_type_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__size_prof____Compare____rev_type_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____size_prof_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__size_prof____Unify____size_prof_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__size_prof____Compare____size_prof_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__size_prof____Unify____type_ctor_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__size_prof____Compare____type_ctor_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__size_prof____Unify____type_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__size_prof____Compare____type_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
