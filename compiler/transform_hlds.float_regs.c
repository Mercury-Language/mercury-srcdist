/*
** Automatically generated from `float_regs.m'
** by the Mercury compiler,
** version rotd-2020-08-26
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


// :- module transform_hlds.float_regs.
// :- implementation.

/*
INIT mercury__transform_hlds__float_regs__init
ENDINIT
*/

#include "transform_hlds.float_regs.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "ops.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.lambda.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__float_regs__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static MR_bool MR_CALL 
transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1519__1_4_p_0(
  MR_Word InstMap0_7,
  MR_Word NonLocals_8,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static void MR_CALL 
transform_hlds__float_regs__make_reg_r_headvars_5_p_0(
  MR_Word VarTypes_6,
  MR_Word Var_7,
  MR_Word RegType_8,
  MR_Word STATE_VARIABLE_RegR_HeadVars_0_11,
  MR_Word * STATE_VARIABLE_RegR_HeadVars_12);

static void MR_CALL 
transform_hlds__float_regs__fix_case_goal_8_p_0(
  MR_Word VarsExpectInsts_9,
  MR_Word Case0_10,
  MR_Word GoalInstMap0_11,
  MR_Word * Case_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
transform_hlds__float_regs__set_foreign_arg_var_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_ForeignArg_0_6,
  MR_Word * STATE_VARIABLE_ForeignArg_7);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word InstMap0_13,
  MR_Word Case0_14,
  MR_Word * Case_15,
  MR_Word * InstMap_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(
  MR_Word InstMap0_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word * InstMap_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
transform_hlds__float_regs__unify_mode_set_rhs_final_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ArgInst_6,
  MR_Word UnifyMode0_7,
  MR_Word * UnifyMode_8);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_arg_4_p_0(
  MR_Word InstMap_5,
  MR_Word Var_6,
  MR_Word ArgInst0_7,
  MR_Word * ArgInst_8);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0(
  MR_Word InstMap_6,
  MR_Word ConsId_7,
  MR_Word Args_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10);

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(
  MR_Word Type0_5,
  MR_Word * Type_6,
  MR_Word STATE_VARIABLE_TVarSet_0_14,
  MR_Word * STATE_VARIABLE_TVarSet_15);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_body_9_p_0(
  MR_Word HeadVars_10,
  MR_Word ArgModes_11,
  MR_Word Goal0_12,
  MR_Word * Goal_13,
  MR_Word InstMap0_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_InstMap_0_14,
  MR_Word * STATE_VARIABLE_InstMap_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(
  MR_Word NonLocals_10,
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word InstMap0_13,
  MR_Word * InstMap_14,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMap_0_3,
  MR_Word * STATE_VARIABLE_InstMap_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1(
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
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_InstMap_0_73,
  MR_Word * STATE_VARIABLE_InstMap_74,
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76,
  MR_Word STATE_VARIABLE_Specs_0_77,
  MR_Word * STATE_VARIABLE_Specs_78);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word ForeignArgs0_14,
  MR_Word * ForeignArgs_15,
  MR_Word * WrapGoals_16,
  MR_Word InstMap0_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(
  MR_Word ClassId_14,
  MR_Integer MethodNum_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word Modes0_18,
  MR_Word * Modes_19,
  MR_Word * WrapGoals_20,
  MR_Word InstMap0_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static void MR_CALL 
transform_hlds__float_regs__match_args_for_call_11_p_0(
  MR_Word InstMap0_12,
  MR_Word Context_13,
  MR_Word ArgTypes_14,
  MR_Word ArgModes_15,
  MR_Word OrigVars_16,
  MR_Word * Vars_17,
  MR_Word * WrapGoals_18,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(
  MR_Word CallVar_13,
  MR_Word Vars0_14,
  MR_Word * Vars_15,
  MR_Word * ArgModes_16,
  MR_Word * ArgRegs_17,
  MR_Word * WrapGoals_18,
  MR_Word InstMap0_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word Vars0_15,
  MR_Word * Vars_16,
  MR_Word * WrapGoals_17,
  MR_Word * MissingProc_18,
  MR_Word InstMap0_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
transform_hlds__float_regs__fix_branching_goal_8_p_0(
  MR_Word VarsExpectInsts_9,
  MR_Word Goal0_10,
  MR_Word GoalInstMap0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
transform_hlds__float_regs__match_vars_insts_11_p_0(
  MR_Word VarsExpectInsts_12,
  MR_Word InstMap0_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Renaming_0_22,
  MR_Word * STATE_VARIABLE_Renaming_23,
  MR_Word STATE_VARIABLE_WrapGoals_0_24,
  MR_Word * STATE_VARIABLE_WrapGoals_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static MR_bool MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0(
  MR_Word InstMap0_7,
  MR_Word NonLocals_8,
  MR_Word InstMaps_9,
  MR_Word * CommonDelta_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(
  MR_Word Var_11,
  MR_Word Cases0_12,
  MR_Word * Cases_13,
  MR_Word NonLocals_14,
  MR_Word InstMap0_15,
  MR_Word * InstMap_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(
  MR_Word Goals0_10,
  MR_Word * Goals_11,
  MR_Word NonLocals_12,
  MR_Word InstMap0_13,
  MR_Word * InstMap_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(
  MR_Word GoalExpr0_10,
  MR_Word GoalInfo0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_InstMap_0_71,
  MR_Word * STATE_VARIABLE_InstMap_72,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74,
  MR_Word STATE_VARIABLE_Specs_0_75,
  MR_Word * STATE_VARIABLE_Specs_76);

static void MR_CALL 
transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word CellVar_10,
  MR_Word ConsId_11,
  MR_Word Args_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word STATE_VARIABLE_InstMap_0_20,
  MR_Word * STATE_VARIABLE_InstMap_21);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstMap_8,
  MR_Word ConsId_9,
  MR_Word Args_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12);

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(
  MR_Word CellVar_14,
  MR_Word ConsId_15,
  MR_Word OrigVars_16,
  MR_Word * Vars_17,
  MR_Word ArgModes0_18,
  MR_Word * ArgModes_19,
  MR_Word * MaybeWrappedGoals_20,
  MR_Word InstMap0_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static void MR_CALL 
transform_hlds__float_regs__match_args_12_p_0(
  MR_Word InstMap0_13,
  MR_Word Context_14,
  MR_Word ArgTypes_15,
  MR_Word Insts_16,
  MR_Word OrigVars_17,
  MR_Word * Vars_18,
  MR_Word STATE_VARIABLE_WrapGoals_0_30,
  MR_Word * STATE_VARIABLE_WrapGoals_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0(
  MR_Word InstMapBefore_13,
  MR_Word Context_14,
  MR_Word ArgType_15,
  MR_Word ExpectInst_16,
  MR_Word OrigVar_17,
  MR_Word * Var_18,
  MR_Word STATE_VARIABLE_WrapGoals_0_44,
  MR_Word * STATE_VARIABLE_WrapGoals_45,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49);

static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0(
  MR_Word OrigVar_10,
  MR_Word OrigVarPredInstInfo_11,
  MR_Word OuterArgRegs_12,
  MR_Word InnerArgRegs_13,
  MR_Word Context_14,
  MR_Word * Var_15,
  MR_Word * UnifyGoal_16,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static void MR_CALL 
transform_hlds__float_regs__create_fresh_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6);

static void MR_CALL 
transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(
  MR_Word PredInfo_9,
  MR_Word VarSet_10,
  MR_Word Var_11,
  MR_Word Context_12,
  MR_Word ArgTypesA_13,
  MR_Word ArgTypesB_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0(
  MR_Word PredInstInfo_4,
  MR_Word ArgTypes_5,
  MR_Word * ArgRegs_6);

static MR_bool MR_CALL 
transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst_5,
  MR_Word * PredInstInfo_6);

static void MR_CALL 
transform_hlds__float_regs__do_recompute_atomic_instmap_delta_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word InstMap_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(
  MR_Word Goal_4,
  MR_Word InstMap0_5,
  MR_Word * InstMap_6);

static void MR_CALL 
transform_hlds__float_regs__finish_call_goal_8_p_0(
  MR_Word WrapGoals_9,
  MR_Word CallGoalExpr0_10,
  MR_Word CallGoalInfo0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_InstMap_0_19,
  MR_Word * STATE_VARIABLE_InstMap_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(
  MR_Word Type_3,
  MR_Word * RegType_4);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen_7,
  MR_Word Type_8,
  MR_Word BoundInst0_9,
  MR_Word * BoundInst_10);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_from_to_insts_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarType_6,
  MR_Word ArgFromToInsts0_7,
  MR_Word * ArgFromToInsts_8);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word RealVarType_6,
  MR_Word ArgMode0_7,
  MR_Word * ArgMode_8);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen_7,
  MR_Word VarType_8,
  MR_Word ArgMode0_9,
  MR_Word * ArgMode_10);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen0_7,
  MR_Word Type_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen_7,
  MR_Word ArgTypes_8,
  MR_Word PredInstInfo0_9,
  MR_Word * PredInstInfo_10);

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0(
  MR_Word PolymorphicContext_4,
  MR_Word Type0_5,
  MR_Word * Type_6);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Integer ProcId_6,
  MR_Word PredInfo0_7,
  MR_Word * PredInfo_8);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_1[20][2];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_2[5][6];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_3[17][3];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_4[6][8];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_5[7][7];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_6[1][4];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_7[3][5];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_8[1][9];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_9[1][1];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_10[4][11];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_11[1][13];




static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_1[20][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the generated code in this grade."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Please provide the higher-order inst to ensure correctness"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: missing higher-order inst for variable"))
  },
  /* row 17 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[14])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__float_regs_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_9[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_2[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_3[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__get_ho_arg_regs_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__match_arg_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[3])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[4])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[3])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_4[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__float_regs__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_5[7][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_6[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[1])),
    ((MR_Box) (transform_hlds__float_regs__make_generic_type_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_7[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_9[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "reg_wrapper"))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_10[4][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_11[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__float_regs__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static MR_bool MR_CALL 
transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1519__1_4_p_0(
  MR_Word InstMap0_7,
  MR_Word NonLocals_8,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(LambdaHeadVar__1_23);
    if (succeeded)
    {
      hlds__instmap__compute_instmap_delta_4_p_0(InstMap0_7, LambdaHeadVar__1_23, NonLocals_8, LambdaHeadVar__2_24);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__float_regs__make_reg_r_headvars_5_p_0(
  MR_Word VarTypes_6,
  MR_Word Var_7,
  MR_Word RegType_8,
  MR_Word STATE_VARIABLE_RegR_HeadVars_0_11,
  MR_Word * STATE_VARIABLE_RegR_HeadVars_12)
{
  {
    MR_bool succeeded;

    switch (RegType_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_RegR_HeadVars_12 = STATE_VARIABLE_RegR_HeadVars_0_11;
        break;
      case (MR_Integer) 0:
        {
          MR_Word VarType_10;
          MR_Word Var_15;

          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_6, Var_7, &VarType_10);
          Var_15 = parse_tree__builtin_lib_types__float_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_10, Var_15);
          if (succeeded)
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7, STATE_VARIABLE_RegR_HeadVars_0_11, STATE_VARIABLE_RegR_HeadVars_12);
          else
            *STATE_VARIABLE_RegR_HeadVars_12 = STATE_VARIABLE_RegR_HeadVars_0_11;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__fix_case_goal_8_p_0(
  MR_Word VarsExpectInsts_9,
  MR_Word Case0_10,
  MR_Word GoalInstMap0_11,
  MR_Word * Case_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word MainConsId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2))));
    MR_Word Goal_18;

    transform_hlds__float_regs__fix_branching_goal_8_p_0(VarsExpectInsts_9, Goal0_17, GoalInstMap0_11, &Goal_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_18));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__set_foreign_arg_var_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_ForeignArg_0_6,
  MR_Word * STATE_VARIABLE_ForeignArg_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 3))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ForeignArg_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_12));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word InstMap0_13,
  MR_Word Case0_14,
  MR_Word * Case_15,
  MR_Word * InstMap_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 2))));
    MR_Word ModuleInfo0_22;
    MR_Word InstMap1_23;
    MR_Word ModuleInfo1_24;
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_Info_30_30;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_26, &ModuleInfo0_22);
    hlds__instmap__bind_var_to_functors_8_p_0(Var_11, Type_12, MainConsId_19, OtherConsIds_20, InstMap0_13, &InstMap1_23, ModuleInfo0_22, &ModuleInfo1_24);
    transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo1_24, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_30_30);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_23);
    if (succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(Goal0_21, &Goal_25, InstMap1_23, InstMap_16, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
    else
    {
      Goal_25 = Goal0_21;
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_30_30;
      *InstMap_16 = InstMap1_23;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_25));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(
  MR_Word InstMap0_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word * InstMap_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_9);
    if (succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(Goal0_10, Goal_11, InstMap0_9, InstMap_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
    else
    {
      *Goal_11 = Goal0_10;
      *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
      *InstMap_12 = InstMap0_9;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__unify_mode_set_rhs_final_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ArgInst_6,
  MR_Word UnifyMode0_7,
  MR_Word * UnifyMode_8)
{
  {
    MR_bool succeeded;
    MR_Word LI_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode0_7, (MR_Integer) 0))));
    MR_Word LF_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode0_7, (MR_Integer) 1))));
    MR_Word RI_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode0_7, (MR_Integer) 2))));
    MR_Word RF_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode0_7, (MR_Integer) 3))));

    succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, RI_11);
    if (succeeded)
      succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_5, RF_12);
    if (succeeded)
    {
      MR_Word Uniq_13;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;

      succeeded = ((((MR_tag((MR_Word) ArgInst_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgInst_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Uniq_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgInst_6, (MR_Integer) 1))) & (MR_Integer) 7);
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgInst_6, (MR_Integer) 2))));
        succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) RF_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), RF_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), RF_12, (MR_Integer) 1))) & (MR_Integer) 7);
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RF_12, (MR_Integer) 2))));
            succeeded = (Uniq_13 == Var_17);
            if (succeeded)
            {
              succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
          }
        }
      }
      if (succeeded)
        *UnifyMode_8 = UnifyMode0_7;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *UnifyMode_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LI_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LF_10));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RI_11));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgInst_6));
        }
    }
    else
      *UnifyMode_8 = UnifyMode0_7;
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_arg_4_p_0(
  MR_Word InstMap_5,
  MR_Word Var_6,
  MR_Word ArgInst0_7,
  MR_Word * ArgInst_8)
{
  {
    MR_bool succeeded;
    MR_Word VarInst_9;
    MR_Word Var_10;

    hlds__instmap__instmap_lookup_var_3_p_0(InstMap_5, Var_6, &VarInst_9);
    Var_10 = parse_tree__prog_mode__free_inst_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(VarInst_9, Var_10);
    if (succeeded)
      *ArgInst_8 = ArgInst0_7;
    else
      *ArgInst_8 = VarInst_9;
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgInst_8;

    transform_hlds__float_regs__rebuild_cell_bound_inst_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_ArgInst_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_ArgInst_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0(
  MR_Word InstMap_6,
  MR_Word ConsId_7,
  MR_Word Args_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  {
    MR_bool succeeded;
    MR_Word BoundConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inst0_9, (MR_Integer) 0))));
    MR_Word ArgInsts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inst0_9, (MR_Integer) 1))));

    succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsId_7, BoundConsId_11);
    if (succeeded)
    {
      MR_Word ArgInsts_13;
      MR_Word Var_14;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[6]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (InstMap_6));
      }
      mercury__list__map_corresponding_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_14, Args_8, ArgInsts0_12, &ArgInsts_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Inst_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (BoundConsId_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts_13));
      }
    }
    else
      *Inst_10 = Inst0_9;
  }
}

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_6;
    MR_Word conv0_STATE_VARIABLE_TVarSet_15;

    transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Type_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TVarSet_15);
    *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TVarSet_15));
  }
}

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(
  MR_Word Type0_5,
  MR_Word * Type_6,
  MR_Word STATE_VARIABLE_TVarSet_0_14,
  MR_Word * STATE_VARIABLE_TVarSet_15)
{
  {
    MR_bool succeeded;
    MR_Word Purity_8;
    MR_Word PredOrFunc_9;
    MR_Word ArgTypes0_11;

    succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type0_5, &Purity_8, &PredOrFunc_9, &ArgTypes0_11);
    if (succeeded)
    {
      MR_Word ArgTypes_12;
      MR_Box conv2_STATE_VARIABLE_TVarSet_15;

      mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[2]), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[16]), ArgTypes0_11, &ArgTypes_12, ((MR_Box) (STATE_VARIABLE_TVarSet_0_14)), &conv2_STATE_VARIABLE_TVarSet_15);
      *STATE_VARIABLE_TVarSet_15 = ((MR_Word) (conv2_STATE_VARIABLE_TVarSet_15));
      parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_8, PredOrFunc_9, ArgTypes_12, Type_6);
    }
    else
    {
      MR_Word TVar_13;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVar_13, STATE_VARIABLE_TVarSet_0_14, STATE_VARIABLE_TVarSet_15);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Type_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TVar_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word PredTable0_11;
    MR_Word PredInfo0_12;
    MR_Word ProcTable0_13;
    MR_Word ProcInfo0_14;
    MR_Word ProcInfo_15;
    MR_Word PredInfo1_16;
    MR_Word ProcTable1_17;
    MR_Word ProcTable_18;
    MR_Word PredInfo_19;
    MR_Word PredTable1_20;
    MR_Word PredTable_21;
    MR_Word STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word TypeVarSet0_45;
    MR_Word HeadVars_46;
    MR_Word VarSet0_47;
    MR_Word VarTypes0_48;
    MR_Word ArgModes_49;
    MR_Word Goal0_50;
    MR_Word InstMap0_51;
    MR_Word RttiVarMaps0_52;
    MR_Word InstVarSet0_53;
    MR_Word HasParallelConj_54;
    MR_Word Info0_55;
    MR_Word Goal1_56;
    MR_Word Info1_57;
    MR_Word VarSet1_58;
    MR_Word VarTypes1_59;
    MR_Word TypeVarSet_60;
    MR_Word RttiVarMaps1_61;
    MR_Word MustRecomputeNonLocals_62;
    MR_Word Goal2_64;
    MR_Word Goal_68;
    MR_Word VarSet_69;
    MR_Word VarTypes_70;
    MR_Word RttiVarMaps_71;
    MR_Word STATE_VARIABLE_ModuleInfo_49_73;
    MR_Word STATE_VARIABLE_ProcInfo_53_77;
    MR_Word STATE_VARIABLE_ProcInfo_54_78;
    MR_Word STATE_VARIABLE_ProcInfo_55_79;
    MR_Word STATE_VARIABLE_ProcInfo_56_80;
    MR_Word STATE_VARIABLE_ProcInfo_57_81;
    MR_Box conv0_PredInfo0_12;
    MR_Box conv1_ProcInfo0_14;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &PredTable0_11);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_11, ((MR_Box) (PredId_7)), &conv0_PredInfo0_12);
    PredInfo0_12 = ((MR_Word) (conv0_PredInfo0_12));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &ProcTable0_13);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_13, ((MR_Box) (ProcId_8)), &conv1_ProcInfo0_14);
    ProcInfo0_14 = ((MR_Word) (conv1_ProcInfo0_14));
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_12, &TypeVarSet0_45);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_14, &HeadVars_46);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo0_14, &VarSet0_47);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_14, &VarTypes0_48);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_14, &ArgModes_49);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_14, &Goal0_50);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo0_14, STATE_VARIABLE_ModuleInfo_0_22, &InstMap0_51);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_14, &RttiVarMaps0_52);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo0_14, &InstVarSet0_53);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo0_14, &HasParallelConj_54);
    transform_hlds__lambda__init_lambda_info_9_p_0(VarSet0_47, VarTypes0_48, TypeVarSet0_45, InstVarSet0_53, RttiVarMaps0_52, HasParallelConj_54, PredInfo0_12, STATE_VARIABLE_ModuleInfo_0_22, &Info0_55);
    transform_hlds__float_regs__insert_reg_wrappers_proc_body_9_p_0(HeadVars_46, ArgModes_49, Goal0_50, &Goal1_56, InstMap0_51, Info0_55, &Info1_57, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
    transform_hlds__lambda__lambda_info_get_varset_2_p_0(Info1_57, &VarSet1_58);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(Info1_57, &VarTypes1_59);
    transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(Info1_57, &TypeVarSet_60);
    transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(Info1_57, &RttiVarMaps1_61);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(Info1_57, &STATE_VARIABLE_ModuleInfo_49_73);
    transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(Info1_57, &MustRecomputeNonLocals_62);
    switch (MustRecomputeNonLocals_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Goal2_64 = Goal1_56;
          VarSet_69 = VarSet1_58;
          VarTypes_70 = VarTypes1_59;
          RttiVarMaps_71 = RttiVarMaps1_61;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word _Warnings_63;

          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, HeadVars_46, &_Warnings_63, Goal1_56, &Goal2_64, VarSet1_58, &VarSet_69, VarTypes1_59, &VarTypes_70, RttiVarMaps1_61, &RttiVarMaps_71);
        }
        break;
    }
    check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, Goal2_64, &Goal_68, VarTypes_70, InstVarSet0_53, InstMap0_51, STATE_VARIABLE_ModuleInfo_49_73, &STATE_VARIABLE_ModuleInfo_26_26);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_68, ProcInfo0_14, &STATE_VARIABLE_ProcInfo_53_77);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_69, STATE_VARIABLE_ProcInfo_53_77, &STATE_VARIABLE_ProcInfo_54_78);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_70, STATE_VARIABLE_ProcInfo_54_78, &STATE_VARIABLE_ProcInfo_55_79);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_71, STATE_VARIABLE_ProcInfo_55_79, &STATE_VARIABLE_ProcInfo_56_80);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_46, STATE_VARIABLE_ProcInfo_56_80, &STATE_VARIABLE_ProcInfo_57_81);
    hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(STATE_VARIABLE_ProcInfo_57_81, &ProcInfo_15);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_60, PredInfo0_12, &PredInfo1_16);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo1_16, &ProcTable1_17);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_8)), ((MR_Box) (ProcInfo_15)), ProcTable1_17, &ProcTable_18);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_18, PredInfo1_16, &PredInfo_19);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_26_26, &PredTable1_20);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_19)), PredTable1_20, &PredTable_21);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_21, STATE_VARIABLE_ModuleInfo_26_26, STATE_VARIABLE_ModuleInfo_23);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_body_9_p_0(
  MR_Word HeadVars_10,
  MR_Word ArgModes_11,
  MR_Word Goal0_12,
  MR_Word * Goal_13,
  MR_Word InstMap0_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_bool succeeded;
    MR_Word Goal1_17;
    MR_Word InstMap1_18;
    MR_Word ModuleInfo_19;
    MR_Word FinalInsts_20;
    MR_Word VarsExpectInsts_21;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Specs_27_27;

    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_14);
    if (succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(Goal0_12, &Goal1_17, InstMap0_14, &InstMap1_18, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_27_27);
    else
    {
      Goal1_17 = Goal0_12;
      STATE_VARIABLE_Specs_27_27 = STATE_VARIABLE_Specs_0_24;
      STATE_VARIABLE_Info_26_26 = STATE_VARIABLE_Info_0_22;
      InstMap1_18 = InstMap0_14;
    }
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_26_26, &ModuleInfo_19);
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_19, ArgModes_11, &FinalInsts_20);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadVars_10, FinalInsts_20, &VarsExpectInsts_21);
    transform_hlds__float_regs__fix_branching_goal_8_p_0(VarsExpectInsts_21, Goal1_17, InstMap1_18, Goal_13, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_23, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_25);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_InstMap_0_14,
  MR_Word * STATE_VARIABLE_InstMap_15,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(STATE_VARIABLE_InstMap_0_14);
    if (succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(Goal0_9, Goal_10, STATE_VARIABLE_InstMap_0_14, STATE_VARIABLE_InstMap_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
    else
    {
      *Goal_10 = Goal0_9;
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
      *STATE_VARIABLE_InstMap_15 = STATE_VARIABLE_InstMap_0_14;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(
  MR_Word NonLocals_10,
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word InstMap0_13,
  MR_Word * InstMap_14,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
    MR_Word Cond0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
    MR_Word Then0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
    MR_Word Else0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4))));
    MR_Word Cond_21;
    MR_Word InstMapCond_22;
    MR_Word Then1_23;
    MR_Word InstMapThen_24;
    MR_Word Else1_25;
    MR_Word InstMapElse_26;
    MR_Word CommonDelta_27;
    MR_Word Then_29;
    MR_Word Else_30;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word STATE_VARIABLE_Specs_40_40;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word Var_43;

    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_13);
    if (succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(Cond0_18, &Cond_21, InstMap0_13, &InstMapCond_22, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Specs_0_33, &STATE_VARIABLE_Specs_36_36);
    else
    {
      Cond_21 = Cond0_18;
      STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_33;
      STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_31;
      InstMapCond_22 = InstMap0_13;
    }
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_22);
    if (succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(Then0_19, &Then1_23, InstMapCond_22, &InstMapThen_24, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_38_38);
    else
    {
      Then1_23 = Then0_19;
      STATE_VARIABLE_Specs_38_38 = STATE_VARIABLE_Specs_36_36;
      STATE_VARIABLE_Info_37_37 = STATE_VARIABLE_Info_35_35;
      InstMapThen_24 = InstMapCond_22;
    }
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_13);
    if (succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(Else0_20, &Else1_25, InstMap0_13, &InstMapElse_26, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Specs_38_38, &STATE_VARIABLE_Specs_40_40);
    else
    {
      Else1_25 = Else0_20;
      STATE_VARIABLE_Specs_40_40 = STATE_VARIABLE_Specs_38_38;
      STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_37_37;
      InstMapElse_26 = InstMap0_13;
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (InstMapElse_26));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (InstMapThen_24));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    transform_hlds__float_regs__common_instmap_delta_6_p_0(InstMap0_13, NonLocals_10, Var_41, &CommonDelta_27, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_42_42);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(CommonDelta_27);
    if (succeeded)
    {
      MR_Word VarsExpectInsts_28;
      MR_Word STATE_VARIABLE_Info_45_45;
      MR_Word STATE_VARIABLE_Specs_46_46;

      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(CommonDelta_27, &VarsExpectInsts_28);
      transform_hlds__float_regs__fix_branching_goal_8_p_0(VarsExpectInsts_28, Then1_23, InstMapThen_24, &Then_29, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Specs_40_40, &STATE_VARIABLE_Specs_46_46);
      transform_hlds__float_regs__fix_branching_goal_8_p_0(VarsExpectInsts_28, Else1_25, InstMapElse_26, &Else_30, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_32, STATE_VARIABLE_Specs_46_46, STATE_VARIABLE_Specs_34);
    }
    else
    {
      Then_29 = Then1_23;
      Else_30 = Else1_25;
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_40_40;
      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_42_42;
    }
    hlds__instmap__apply_instmap_delta_3_p_0(CommonDelta_27, InstMap0_13, InstMap_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_17));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_21));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_29));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_30));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMap_0_3,
  MR_Word * STATE_VARIABLE_InstMap_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_InstMap_4 = STATE_VARIABLE_InstMap_0_3;
    }
    else
    {
      MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal1_24;
      MR_Word Goal1List_25;
      MR_Word Goals1_26;
      MR_Word STATE_VARIABLE_InstMap_33_33;
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word STATE_VARIABLE_Specs_35_35;

      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(STATE_VARIABLE_InstMap_0_3);
      if (succeeded)
        transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(Goal0_18, &Goal1_24, STATE_VARIABLE_InstMap_0_3, &STATE_VARIABLE_InstMap_33_33, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_35_35);
      else
      {
        Goal1_24 = Goal0_18;
        STATE_VARIABLE_Specs_35_35 = STATE_VARIABLE_Specs_0_7;
        STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_0_5;
        STATE_VARIABLE_InstMap_33_33 = STATE_VARIABLE_InstMap_0_3;
      }
      hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal1_24, &Goal1List_25);
      transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(Goals0_19, &Goals1_26, STATE_VARIABLE_InstMap_33_33, STATE_VARIABLE_InstMap_4, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_35_35, STATE_VARIABLE_Specs_8);
      mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goal1List_25, Goals1_26, HeadVar__2_2);
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1(
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
    MR_Word conv3_Goal_10;
    MR_Word conv2_STATE_VARIABLE_InstMap_15;
    MR_Word conv1_STATE_VARIABLE_Info_17;
    MR_Word conv0_STATE_VARIABLE_Specs_19;

    transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(((MR_Word) (wrapper_arg_1)), &conv3_Goal_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstMap_15, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Info_17, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_Specs_19);
    *wrapper_arg_2 = ((MR_Box) (conv3_Goal_10));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstMap_15));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Info_17));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_InstMap_0_73,
  MR_Word * STATE_VARIABLE_InstMap_74,
  MR_Word STATE_VARIABLE_Info_0_75,
  MR_Word * STATE_VARIABLE_Info_76,
  MR_Word STATE_VARIABLE_Specs_0_77,
  MR_Word * STATE_VARIABLE_Specs_78)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
    MR_Word GoalInfo0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_30 = (MR_Word) ((MR_Word) (GoalExpr0_14));
          MR_Word SubGoal_31;
          MR_Word GoalExpr_133;
          MR_Word Var_32;

          transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(SubGoal0_30, &SubGoal_31, STATE_VARIABLE_InstMap_0_73, &Var_32, STATE_VARIABLE_Info_0_75, STATE_VARIABLE_Info_76, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
          GoalExpr_133 = (MR_Word) ((MR_Word) (SubGoal_31));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_133));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_15));
          }
          transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(*Goal_10, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74);
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(GoalExpr0_14, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74, STATE_VARIABLE_Info_0_75, STATE_VARIABLE_Info_76, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_14, (MR_Integer) 0))));
          MR_Integer ProcId_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_14, (MR_Integer) 1))));
          MR_Word Args0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_14, (MR_Integer) 2))));
          MR_Word Builtin_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_14, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word MaybeUnifyContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_14, (MR_Integer) 4))));
          MR_Word SymName_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_14, (MR_Integer) 5))));
          MR_Word Context_45;
          MR_Word Args_46;
          MR_Word WrapGoals_47;
          MR_Word MissingProc_48;
          MR_Word STATE_VARIABLE_Info_96_96;

          Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_15);
          transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(PredId_39, ProcId_40, Args0_41, &Args_46, &WrapGoals_47, &MissingProc_48, STATE_VARIABLE_InstMap_0_73, Context_45, STATE_VARIABLE_Info_0_75, &STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
          switch (MissingProc_48) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GoalExpr1_49;

                {
                  GoalExpr1_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), GoalExpr1_49, 0) = ((MR_Box) (PredId_39));
                  MR_hl_field(MR_mktag(2), GoalExpr1_49, 1) = ((MR_Box) (ProcId_40));
                  MR_hl_field(MR_mktag(2), GoalExpr1_49, 2) = ((MR_Box) (Args_46));
                  MR_hl_field(MR_mktag(2), GoalExpr1_49, 3) = (MR_Box) ((MR_Unsigned) (Builtin_42));
                  MR_hl_field(MR_mktag(2), GoalExpr1_49, 4) = ((MR_Box) (MaybeUnifyContext_43));
                  MR_hl_field(MR_mktag(2), GoalExpr1_49, 5) = ((MR_Box) (SymName_44));
                }
                transform_hlds__float_regs__finish_call_goal_8_p_0(WrapGoals_47, GoalExpr1_49, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_76);
              }
              break;
            case (MR_Integer) 1:
              {
                *Goal_10 = Goal0_9;
                *STATE_VARIABLE_InstMap_74 = STATE_VARIABLE_InstMap_0_73;
                *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_96_96;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
              MR_Word Modes0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 3))));
              MR_Word Determinism_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 5))) & (MR_Integer) 7);
              MR_Word Args0_157 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) GenericCall_50)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CallVar_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_50, (MR_Integer) 0))));
                    MR_Word Modes_58;
                    MR_Word ArgsRegs_59;
                    MR_Word STATE_VARIABLE_Info_91_91;
                    MR_Word Var_93;
                    MR_Word Context_144;
                    MR_Word Args_145;
                    MR_Word WrapGoals_146;
                    MR_Word GoalExpr1_147;

                    Context_144 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_15);
                    transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(CallVar_54, Args0_157, &Args_145, &Modes_58, &ArgsRegs_59, &WrapGoals_146, STATE_VARIABLE_InstMap_0_73, Context_144, STATE_VARIABLE_Info_0_75, &STATE_VARIABLE_Info_91_91, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
                    {
                      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (ArgsRegs_59));
                    }
                    {
                      GoalExpr1_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr1_147, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), GoalExpr1_147, 1) = ((MR_Box) (GenericCall_50));
                      MR_hl_field(MR_mktag(3), GoalExpr1_147, 2) = ((MR_Box) (Args_145));
                      MR_hl_field(MR_mktag(3), GoalExpr1_147, 3) = ((MR_Box) (Modes_58));
                      MR_hl_field(MR_mktag(3), GoalExpr1_147, 4) = ((MR_Box) (Var_93));
                      MR_hl_field(MR_mktag(3), GoalExpr1_147, 5) = (MR_Box) ((MR_Unsigned) (Determinism_53));
                    }
                    transform_hlds__float_regs__finish_call_goal_8_p_0(WrapGoals_146, GoalExpr1_147, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74, STATE_VARIABLE_Info_91_91, STATE_VARIABLE_Info_76);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer MethodNum_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), GenericCall_50, (MR_Integer) 1))));
                    MR_Word ClassId_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCall_50, (MR_Integer) 2))));
                    MR_Word STATE_VARIABLE_Info_86_86;
                    MR_Word Context_148;
                    MR_Word Args_149;
                    MR_Word WrapGoals_150;
                    MR_Word GoalExpr1_151;
                    MR_Word Modes_152;

                    Context_148 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_15);
                    transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(ClassId_62, MethodNum_61, Args0_157, &Args_149, Modes0_51, &Modes_152, &WrapGoals_150, STATE_VARIABLE_InstMap_0_73, Context_148, STATE_VARIABLE_Info_0_75, &STATE_VARIABLE_Info_86_86, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
                    {
                      GoalExpr1_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr1_151, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), GoalExpr1_151, 1) = ((MR_Box) (GenericCall_50));
                      MR_hl_field(MR_mktag(3), GoalExpr1_151, 2) = ((MR_Box) (Args_149));
                      MR_hl_field(MR_mktag(3), GoalExpr1_151, 3) = ((MR_Box) (Modes_152));
                      MR_hl_field(MR_mktag(3), GoalExpr1_151, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), GoalExpr1_151, 5) = (MR_Box) ((MR_Unsigned) (Determinism_53));
                    }
                    transform_hlds__float_regs__finish_call_goal_8_p_0(WrapGoals_150, GoalExpr1_151, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74, STATE_VARIABLE_Info_86_86, STATE_VARIABLE_Info_76);
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    *Goal_10 = Goal0_9;
                    hlds__goal_util__update_instmap_3_p_0(*Goal_10, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74);
                    *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_0_75;
                    *STATE_VARIABLE_Specs_78 = STATE_VARIABLE_Specs_0_77;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
              MR_Word ForeignArgs0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 4))));
              MR_Word ExtraArgs_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 5))));
              MR_Word MaybeTraceRuntimeCond_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 6))));
              MR_Word PragmaImpl_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 7))));
              MR_Word ForeignArgs_71;
              MR_Word STATE_VARIABLE_Info_81_81;
              MR_Word PredId_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
              MR_Integer ProcId_163 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 3))));
              MR_Word Context_164;
              MR_Word WrapGoals_165;
              MR_Word GoalExpr1_166;

              Context_164 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_15);
              transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(PredId_162, ProcId_163, ForeignArgs0_67, &ForeignArgs_71, &WrapGoals_165, STATE_VARIABLE_InstMap_0_73, Context_164, STATE_VARIABLE_Info_0_75, &STATE_VARIABLE_Info_81_81, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
              {
                GoalExpr1_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr1_166, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), GoalExpr1_166, 1) = ((MR_Box) (Attributes_66));
                MR_hl_field(MR_mktag(3), GoalExpr1_166, 2) = ((MR_Box) (PredId_162));
                MR_hl_field(MR_mktag(3), GoalExpr1_166, 3) = ((MR_Box) (ProcId_163));
                MR_hl_field(MR_mktag(3), GoalExpr1_166, 4) = ((MR_Box) (ForeignArgs_71));
                MR_hl_field(MR_mktag(3), GoalExpr1_166, 5) = ((MR_Box) (ExtraArgs_68));
                MR_hl_field(MR_mktag(3), GoalExpr1_166, 6) = ((MR_Box) (MaybeTraceRuntimeCond_69));
                MR_hl_field(MR_mktag(3), GoalExpr1_166, 7) = ((MR_Box) (PragmaImpl_70));
              }
              transform_hlds__float_regs__finish_call_goal_8_p_0(WrapGoals_165, GoalExpr1_166, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74, STATE_VARIABLE_Info_81_81, STATE_VARIABLE_Info_76);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
              MR_Word Goals_23;
              MR_Word GoalExpr_24;
              MR_Word STATE_VARIABLE_InstMap_121_121;

              switch (ConjType_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Box conv6_STATE_VARIABLE_InstMap_121_121;
                    MR_Box conv5_STATE_VARIABLE_Info_76;
                    MR_Box conv4_STATE_VARIABLE_Specs_78;

                    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[15]), Goals0_22, &Goals_23, ((MR_Box) (STATE_VARIABLE_InstMap_0_73)), &conv6_STATE_VARIABLE_InstMap_121_121, ((MR_Box) (STATE_VARIABLE_Info_0_75)), &conv5_STATE_VARIABLE_Info_76, ((MR_Box) (STATE_VARIABLE_Specs_0_77)), &conv4_STATE_VARIABLE_Specs_78);
                    STATE_VARIABLE_InstMap_121_121 = ((MR_Word) (conv6_STATE_VARIABLE_InstMap_121_121));
                    *STATE_VARIABLE_Info_76 = ((MR_Word) (conv5_STATE_VARIABLE_Info_76));
                    *STATE_VARIABLE_Specs_78 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_78));
                  }
                  break;
                case (MR_Integer) 0:
                  transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(Goals0_22, &Goals_23, STATE_VARIABLE_InstMap_0_73, &STATE_VARIABLE_InstMap_121_121, STATE_VARIABLE_Info_0_75, STATE_VARIABLE_Info_76, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
                  break;
              }
              {
                GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) (ConjType_21));
                MR_hl_field(MR_mktag(3), GoalExpr_24, 2) = ((MR_Box) (Goals_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_24));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_15));
              }
              transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(*Goal_10, STATE_VARIABLE_InstMap_121_121, STATE_VARIABLE_InstMap_74);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word NonLocals_25;
              MR_Word Goals0_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
              MR_Word Goals_129;
              MR_Word GoalExpr_130;

              NonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
              transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(Goals0_128, &Goals_129, NonLocals_25, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74, STATE_VARIABLE_Info_0_75, STATE_VARIABLE_Info_76, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
              {
                GoalExpr_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_130, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_130, 1) = ((MR_Box) (Goals_129));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_130));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_15));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
              MR_Word CanFail_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 3))));
              MR_Word Cases_29;
              MR_Word GoalExpr_131;
              MR_Word NonLocals_132;

              NonLocals_132 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
              transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(Var_26, Cases0_28, &Cases_29, NonLocals_132, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74, STATE_VARIABLE_Info_0_75, STATE_VARIABLE_Info_76, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
              {
                GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 1) = ((MR_Box) (Var_26));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 2) = (MR_Box) ((MR_Unsigned) (CanFail_27));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 3) = ((MR_Box) (Cases_29));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_131));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_15));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 1))));
              MR_Word SubGoal0_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_14, (MR_Integer) 2))));
              MR_Word Var_103;

              succeeded = ((((MR_tag((MR_Word) Reason_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_33, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_33, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_103 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *Goal_10 = Goal0_9;
                hlds__goal_util__update_instmap_3_p_0(*Goal_10, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74);
                *STATE_VARIABLE_Specs_78 = STATE_VARIABLE_Specs_0_77;
                *STATE_VARIABLE_Info_76 = STATE_VARIABLE_Info_0_75;
              }
              else
              {
                MR_Word GoalExpr_135;
                MR_Word SubGoal_136;

                transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(SubGoal0_140, &SubGoal_136, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74, STATE_VARIABLE_Info_0_75, STATE_VARIABLE_Info_76, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
                {
                  GoalExpr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_135, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_135, 1) = ((MR_Box) (Reason_33));
                  MR_hl_field(MR_mktag(3), GoalExpr_135, 2) = ((MR_Box) (SubGoal_136));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_135));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_15));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word GoalExpr_142;
              MR_Word NonLocals_143;

              NonLocals_143 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
              transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(NonLocals_143, GoalExpr0_14, &GoalExpr_142, STATE_VARIABLE_InstMap_0_73, STATE_VARIABLE_InstMap_74, STATE_VARIABLE_Info_0_75, STATE_VARIABLE_Info_76, STATE_VARIABLE_Specs_0_77, STATE_VARIABLE_Specs_78);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_142));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_15));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_goal_2\'/8", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ForeignArg_7;

    transform_hlds__float_regs__set_foreign_arg_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ForeignArg_7);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ForeignArg_7));
  }
}

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word ForeignArgs0_14,
  MR_Word * ForeignArgs_15,
  MR_Word * WrapGoals_16,
  MR_Word InstMap0_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word Vars0_21;
    MR_Word Vars_22;
    MR_Word ModuleInfo_53;
    MR_Word PredInfo_54;
    MR_Word ProcTable_55;
    MR_Word ProcInfo_56;
    MR_Box conv1_ProcInfo_56;

    Vars0_21 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[13]), ForeignArgs0_14);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_24, &ModuleInfo_53);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_53, PredId_12, &PredInfo_54);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_54, &ProcTable_55);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_55, ((MR_Box) (ProcId_13)), &conv1_ProcInfo_56);
    if (succeeded)
    {
      ProcInfo_56 = ((MR_Word) (conv1_ProcInfo_56));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ArgTypes_57;
      MR_Word ArgModes_58;
      MR_Word ModuleInfo_80;
      MR_Word InitialInsts_81;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_54, &ArgTypes_57);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_56, &ArgModes_58);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_24, &ModuleInfo_80);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_80, ArgModes_58, &InitialInsts_81);
      transform_hlds__float_regs__match_args_12_p_0(InstMap0_17, Context_18, ArgTypes_57, InitialInsts_81, Vars0_21, &Vars_22, (MR_Word) ((MR_Unsigned) 0U), WrapGoals_16, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
    }
    else
    {
      Vars_22 = Vars0_21;
      *WrapGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
    }
    mercury__list__map_corresponding_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[14]), Vars_22, ForeignArgs0_14, ForeignArgs_15);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(
  MR_Word ClassId_14,
  MR_Integer MethodNum_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word Modes0_18,
  MR_Word * Modes_19,
  MR_Word * WrapGoals_20,
  MR_Word InstMap0_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_25;
    MR_Word Classes_26;
    MR_Word ClassDefn_27;
    MR_Word ClassInterface_28;
    MR_Word ClassProc_29;
    MR_Word PredId_30;
    MR_Integer ProcId_31;
    MR_Word PredInfo_32;
    MR_Word ProcInfo_33;
    MR_Word ArgTypes_34;
    MR_Word ProcArgModes_35;
    MR_Word EndTypes_36;
    MR_Integer N_37;
    MR_Word StartVars_38;
    MR_Word EndVars0_39;
    MR_Word StartModes_40;
    MR_Word EndProcArgModes_43;
    MR_Word EndVars_44;
    MR_Integer Len_71;
    MR_Integer StartLen_72;
    MR_Integer Len_80;
    MR_Integer StartLen_81;
    MR_Integer Len_89;
    MR_Integer StartLen_90;
    MR_Box conv0_ClassDefn_27;
    MR_Box conv1_ClassProc_29;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_45, &ModuleInfo_25);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_25, &Classes_26);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_26, ((MR_Box) (ClassId_14)), &conv0_ClassDefn_27);
    ClassDefn_27 = ((MR_Word) (conv0_ClassDefn_27));
    ClassInterface_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_27, (MR_Integer) 7))));
    mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ClassInterface_28, MethodNum_15, &conv1_ClassProc_29);
    ClassProc_29 = ((MR_Word) (conv1_ClassProc_29));
    PredId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassProc_29, (MR_Integer) 0))));
    ProcId_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassProc_29, (MR_Integer) 1))));
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_25, PredId_30, ProcId_31, &PredInfo_32, &ProcInfo_33);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_32, &ArgTypes_34);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_33, &ProcArgModes_35);
    transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(ArgTypes_34, &EndTypes_36);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EndTypes_36, &N_37);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), Vars0_16, &Len_71);
    StartLen_72 = (MR_Integer) ((MR_Unsigned) Len_71 - (MR_Unsigned) N_37);
    succeeded = (StartLen_72 == (MR_Integer) 0);
    if (succeeded)
    {
      StartVars_38 = (MR_Word) ((MR_Unsigned) 0U);
      EndVars0_39 = Vars0_16;
    }
    else
    {
      succeeded = (StartLen_72 > (MR_Integer) 0);
      if (succeeded)
        mercury__list__det_split_list_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), StartLen_72, Vars0_16, &StartVars_38, &EndVars0_39);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
          return;
        }
    }
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_18, &Len_80);
    StartLen_81 = (MR_Integer) ((MR_Unsigned) Len_80 - (MR_Unsigned) N_37);
    succeeded = (StartLen_81 == (MR_Integer) 0);
    if (succeeded)
      StartModes_40 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      succeeded = (StartLen_81 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_94;

        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StartLen_81, Modes0_18, &StartModes_40, &Var_94);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
          return;
        }
    }
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ProcArgModes_35, &Len_89);
    StartLen_90 = (MR_Integer) ((MR_Unsigned) Len_89 - (MR_Unsigned) N_37);
    succeeded = (StartLen_90 == (MR_Integer) 0);
    if (succeeded)
      EndProcArgModes_43 = ProcArgModes_35;
    else
    {
      succeeded = (StartLen_90 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_96;

        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StartLen_90, ProcArgModes_35, &Var_96, &EndProcArgModes_43);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
          return;
        }
    }
    transform_hlds__float_regs__match_args_for_call_11_p_0(InstMap0_21, Context_22, EndTypes_36, EndProcArgModes_43, EndVars0_39, &EndVars_44, WrapGoals_20, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
    *Vars_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), StartVars_38, EndVars_44);
    *Modes_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StartModes_40, EndProcArgModes_43);
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_args_for_call_11_p_0(
  MR_Word InstMap0_12,
  MR_Word Context_13,
  MR_Word ArgTypes_14,
  MR_Word ArgModes_15,
  MR_Word OrigVars_16,
  MR_Word * Vars_17,
  MR_Word * WrapGoals_18,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word ModuleInfo_21;
    MR_Word InitialInsts_22;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_23, &ModuleInfo_21);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_21, ArgModes_15, &InitialInsts_22);
    transform_hlds__float_regs__match_args_12_p_0(InstMap0_12, Context_13, ArgTypes_14, InitialInsts_22, OrigVars_16, Vars_17, (MR_Word) ((MR_Unsigned) 0U), WrapGoals_18, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  }
}

static void MR_CALL 
transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Type_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Types1_6;

      transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(Types0_4, &Types1_6);
      succeeded = check_hlds__polymorphism__type_is_typeclass_info_1_p_0(Type_3);
      if (!(succeeded))
      {
        MR_Word Var_7;

        Var_7 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_3, Var_7);
      }
      if (succeeded)
        *HeadVar__2_2 = Types1_6;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Types1_6));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_RegType_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(
  MR_Word CallVar_13,
  MR_Word Vars0_14,
  MR_Word * Vars_15,
  MR_Word * ArgModes_16,
  MR_Word * ArgRegs_17,
  MR_Word * WrapGoals_18,
  MR_Word InstMap0_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_23;
    MR_Word VarTypes_24;
    MR_Word CallVarType_25;
    MR_Word CallVarInst_26;
    MR_Word PredOrFunc_28;
    MR_Word ArgTypes_30;
    MR_Integer Arity_31;
    MR_Word CallVarPredInstInfo_32;
    MR_Word MaybeArgRegs_62;
    MR_Word ModuleInfo_82;
    MR_Word InitialInsts_83;
    MR_Word Var_27;
    MR_Word PredInstInfo0_48;
    MR_Word PredInstInfo0_56;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_36, &ModuleInfo_23);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_0_36, &VarTypes_24);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_24, CallVar_13, &CallVarType_25);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_19, CallVar_13, &CallVarInst_26);
    parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(CallVarType_25, &Var_27, &PredOrFunc_28, &ArgTypes_30);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_30, &Arity_31);
    succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(ModuleInfo_23, CallVarInst_26, &PredInstInfo0_56);
    if (succeeded)
    {
      PredInstInfo0_48 = PredInstInfo0_56;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (PredOrFunc_28 == (MR_Integer) 1);
      if (succeeded)
      {
        PredInstInfo0_48 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_31);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      CallVarPredInstInfo_32 = PredInstInfo0_48;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.lookup_pred_inst_info\'/5", (MR_String) "no higher order inst");
        return;
      }
    *ArgModes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallVarPredInstInfo_32, (MR_Integer) 1))));
    MaybeArgRegs_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallVarPredInstInfo_32, (MR_Integer) 2))));
    if ((MaybeArgRegs_62 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[12]), ArgTypes_30, ArgRegs_17);
    else
      *ArgRegs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgRegs_62, (MR_Integer) 0))));
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_36, &ModuleInfo_82);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_82, *ArgModes_16, &InitialInsts_83);
    transform_hlds__float_regs__match_args_12_p_0(InstMap0_19, Context_20, ArgTypes_30, InitialInsts_83, Vars0_14, Vars_15, (MR_Word) ((MR_Unsigned) 0U), WrapGoals_18, STATE_VARIABLE_Info_0_36, STATE_VARIABLE_Info_37, STATE_VARIABLE_Specs_0_38, STATE_VARIABLE_Specs_39);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word Vars0_15,
  MR_Word * Vars_16,
  MR_Word * WrapGoals_17,
  MR_Word * MissingProc_18,
  MR_Word InstMap0_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_23;
    MR_Word PredInfo_24;
    MR_Word ProcTable_25;
    MR_Word ProcInfo_26;
    MR_Box conv0_ProcInfo_26;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_30, &ModuleInfo_23);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_23, PredId_13, &PredInfo_24);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_24, &ProcTable_25);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_25, ((MR_Box) (ProcId_14)), &conv0_ProcInfo_26);
    if (succeeded)
    {
      ProcInfo_26 = ((MR_Word) (conv0_ProcInfo_26));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ArgTypes_27;
      MR_Word ArgModes_28;
      MR_Word ModuleInfo_54;
      MR_Word InitialInsts_55;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_24, &ArgTypes_27);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_26, &ArgModes_28);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_30, &ModuleInfo_54);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_54, ArgModes_28, &InitialInsts_55);
      transform_hlds__float_regs__match_args_12_p_0(InstMap0_19, Context_20, ArgTypes_27, InitialInsts_55, Vars0_15, Vars_16, (MR_Word) ((MR_Unsigned) 0U), WrapGoals_17, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31, STATE_VARIABLE_Specs_0_32, STATE_VARIABLE_Specs_33);
      *MissingProc_18 = (MR_Integer) 0;
    }
    else
    {
      *Vars_16 = Vars0_15;
      *WrapGoals_17 = (MR_Word) ((MR_Unsigned) 0U);
      *MissingProc_18 = (MR_Integer) 1;
      *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__fix_branching_goal_8_p_0(
  MR_Word VarsExpectInsts_9,
  MR_Word Goal0_10,
  MR_Word GoalInstMap0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(GoalInstMap0_11);
    if (succeeded)
    {
      MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
      MR_Word Context_17;
      MR_Word Renaming_18;
      MR_Word WrapGoals0_19;
      MR_Word Var_27;

      Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_16);
      Var_27 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]));
      transform_hlds__float_regs__match_vars_insts_11_p_0(VarsExpectInsts_9, GoalInstMap0_11, Context_17, Var_27, &Renaming_18, (MR_Word) ((MR_Unsigned) 0U), &WrapGoals0_19, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
      if ((WrapGoals0_19 == (MR_Word) ((MR_Unsigned) 0U)))
        *Goal_12 = Goal0_10;
      else
      {
        MR_Word Goal1_22;

        hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(Goal0_10, WrapGoals0_19, &Goal1_22);
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_18, Goal1_22, Goal_12);
      }
    }
    else
    {
      *Goal_12 = Goal0_10;
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_vars_insts_11_p_0(
  MR_Word VarsExpectInsts_12,
  MR_Word InstMap0_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Renaming_0_22,
  MR_Word * STATE_VARIABLE_Renaming_23,
  MR_Word STATE_VARIABLE_WrapGoals_0_24,
  MR_Word * STATE_VARIABLE_WrapGoals_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((VarsExpectInsts_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Renaming_23 = STATE_VARIABLE_Renaming_0_22;
      *STATE_VARIABLE_WrapGoals_25 = STATE_VARIABLE_WrapGoals_0_24;
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    }
    else
    {
      MR_Word Var_19;
      MR_Word Inst_20;
      MR_Word Tail_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarsExpectInsts_12, (MR_Integer) 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarsExpectInsts_12, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Renaming_31_31;
      MR_Word STATE_VARIABLE_WrapGoals_32_32;
      MR_Word STATE_VARIABLE_Info_33_33;
      MR_Word STATE_VARIABLE_Specs_34_34;
      MR_Word ModuleInfo_55;
      MR_Word VarTypes_56;
      MR_Word next_value_of_VarsExpectInsts_12;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_22;
      MR_Word next_value_of_STATE_VARIABLE_WrapGoals_0_24;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_26;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_28;

      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      Inst_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_26, &ModuleInfo_55);
      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_0_26, &VarTypes_56);
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_55, Inst_20);
      if (succeeded)
      {
        STATE_VARIABLE_Specs_34_34 = STATE_VARIABLE_Specs_0_28;
        STATE_VARIABLE_Info_33_33 = STATE_VARIABLE_Info_0_26;
        STATE_VARIABLE_WrapGoals_32_32 = STATE_VARIABLE_WrapGoals_0_24;
        STATE_VARIABLE_Renaming_31_31 = STATE_VARIABLE_Renaming_0_22;
      }
      else
      {
        MR_Word WrapGoals_52;
        MR_Word VarType_57;
        MR_Word SubstVar_58;

        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_56, Var_19, &VarType_57);
        transform_hlds__float_regs__match_arg_12_p_0(InstMap0_13, Context_14, VarType_57, Inst_20, Var_19, &SubstVar_58, (MR_Word) ((MR_Unsigned) 0U), &WrapGoals_52, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_34_34);
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), ((MR_Box) (Var_19)), ((MR_Box) (SubstVar_58)));
        if (succeeded)
        {
          STATE_VARIABLE_WrapGoals_32_32 = STATE_VARIABLE_WrapGoals_0_24;
          STATE_VARIABLE_Renaming_31_31 = STATE_VARIABLE_Renaming_0_22;
        }
        else
        {
          MR_Word STATE_VARIABLE_Renaming_36_62;

          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), ((MR_Box) (Var_19)), ((MR_Box) (SubstVar_58)), STATE_VARIABLE_Renaming_0_22, &STATE_VARIABLE_Renaming_36_62);
          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), ((MR_Box) (SubstVar_58)), ((MR_Box) (Var_19)), STATE_VARIABLE_Renaming_36_62, &STATE_VARIABLE_Renaming_31_31);
          mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WrapGoals_52, STATE_VARIABLE_WrapGoals_0_24, &STATE_VARIABLE_WrapGoals_32_32);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_VarsExpectInsts_12 = Tail_21;
      next_value_of_STATE_VARIABLE_Renaming_0_22 = STATE_VARIABLE_Renaming_31_31;
      next_value_of_STATE_VARIABLE_WrapGoals_0_24 = STATE_VARIABLE_WrapGoals_32_32;
      next_value_of_STATE_VARIABLE_Info_0_26 = STATE_VARIABLE_Info_33_33;
      next_value_of_STATE_VARIABLE_Specs_0_28 = STATE_VARIABLE_Specs_34_34;
      VarsExpectInsts_12 = next_value_of_VarsExpectInsts_12;
      STATE_VARIABLE_Renaming_0_22 = next_value_of_STATE_VARIABLE_Renaming_0_22;
      STATE_VARIABLE_WrapGoals_0_24 = next_value_of_STATE_VARIABLE_WrapGoals_0_24;
      STATE_VARIABLE_Info_0_26 = next_value_of_STATE_VARIABLE_Info_0_26;
      STATE_VARIABLE_Specs_0_28 = next_value_of_STATE_VARIABLE_Specs_0_28;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_24;

    succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1519__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0(
  MR_Word InstMap0_7,
  MR_Word NonLocals_8,
  MR_Word InstMaps_9,
  MR_Word * CommonDelta_10,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_bool succeeded;
    MR_Word InstMapDeltas_14;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__float_regs__common_instmap_delta_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (InstMap0_7));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (NonLocals_8));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Var_22, InstMaps_9, &InstMapDeltas_14);
    if ((InstMapDeltas_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(CommonDelta_10);
      *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    }
    else
    {
      MR_Word VarTypes_17;
      MR_Word ModuleInfo0_18;
      MR_Word ModuleInfo_19;

      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_0_20, &VarTypes_17);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_20, &ModuleInfo0_18);
      hlds__instmap__merge_instmap_deltas_7_p_0(InstMap0_7, NonLocals_8, VarTypes_17, InstMapDeltas_14, CommonDelta_10, ModuleInfo0_18, &ModuleInfo_19);
      transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_Case_12;
    MR_Word conv8_STATE_VARIABLE_Info_20;
    MR_Word conv7_STATE_VARIABLE_Specs_22;

    transform_hlds__float_regs__fix_case_goal_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Case_12, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Info_20, ((MR_Word) (wrapper_arg_6)), &conv7_STATE_VARIABLE_Specs_22);
    *wrapper_arg_3 = ((MR_Box) (conv9_Case_12));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Info_20));
    *wrapper_arg_7 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_22));
  }
}

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__2_24;

    succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1519__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_LambdaHeadVar__2_24);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_24));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Case_15;
    MR_Word conv2_InstMap_16;
    MR_Word conv1_STATE_VARIABLE_Info_27;
    MR_Word conv0_STATE_VARIABLE_Specs_29;

    transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_Case_15, &conv2_InstMap_16, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_29);
    *wrapper_arg_2 = ((MR_Box) (conv3_Case_15));
    *wrapper_arg_3 = ((MR_Box) (conv2_InstMap_16));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_27));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_29));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(
  MR_Word Var_11,
  MR_Word Cases0_12,
  MR_Word * Cases_13,
  MR_Word NonLocals_14,
  MR_Word InstMap0_15,
  MR_Word * InstMap_16,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_19;
    MR_Word Type_20;
    MR_Word Cases1_21;
    MR_Word InstMaps1_22;
    MR_Word CommonDelta_23;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Specs_31_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word InstMapDeltas_63;
    MR_Word Var_69;
    MR_Box conv5_STATE_VARIABLE_Info_30_30;
    MR_Box conv4_STATE_VARIABLE_Specs_31_31;

    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_0_25, &VarTypes_19);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Var_11, &Type_20);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (Type_20));
      MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (InstMap0_15));
    }
    mercury__list__map2_foldl2_8_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), Var_29, Cases0_12, &Cases1_21, &InstMaps1_22, ((MR_Box) (STATE_VARIABLE_Info_0_25)), &conv5_STATE_VARIABLE_Info_30_30, ((MR_Box) (STATE_VARIABLE_Specs_0_27)), &conv4_STATE_VARIABLE_Specs_31_31);
    STATE_VARIABLE_Info_30_30 = ((MR_Word) (conv5_STATE_VARIABLE_Info_30_30));
    STATE_VARIABLE_Specs_31_31 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_31_31));
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (InstMap0_15));
      MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (NonLocals_14));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Var_69, InstMaps1_22, &InstMapDeltas_63);
    if ((InstMapDeltas_63 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&CommonDelta_23);
      STATE_VARIABLE_Info_32_32 = STATE_VARIABLE_Info_30_30;
    }
    else
    {
      MR_Word VarTypes_66;
      MR_Word ModuleInfo0_67;
      MR_Word ModuleInfo_68;

      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_30_30, &VarTypes_66);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_30_30, &ModuleInfo0_67);
      hlds__instmap__merge_instmap_deltas_7_p_0(InstMap0_15, NonLocals_14, VarTypes_66, InstMapDeltas_63, &CommonDelta_23, ModuleInfo0_67, &ModuleInfo_68);
      transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_68, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_32_32);
    }
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(CommonDelta_23);
    if (succeeded)
    {
      MR_Word VarsExpectInsts_24;
      MR_Word Var_33;
      MR_Box conv11_STATE_VARIABLE_Info_26;
      MR_Box conv10_STATE_VARIABLE_Specs_28;

      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(CommonDelta_23, &VarsExpectInsts_24);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[2]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (VarsExpectInsts_24));
      }
      mercury__list__map_corresponding_foldl2_8_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), Var_33, Cases1_21, InstMaps1_22, Cases_13, ((MR_Box) (STATE_VARIABLE_Info_32_32)), &conv11_STATE_VARIABLE_Info_26, ((MR_Box) (STATE_VARIABLE_Specs_31_31)), &conv10_STATE_VARIABLE_Specs_28);
      *STATE_VARIABLE_Info_26 = ((MR_Word) (conv11_STATE_VARIABLE_Info_26));
      *STATE_VARIABLE_Specs_28 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_28));
    }
    else
    {
      *Cases_13 = Cases1_21;
      *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_31_31;
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_32_32;
    }
    hlds__instmap__apply_instmap_delta_3_p_0(CommonDelta_23, InstMap0_15, InstMap_16);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_Goal_12;
    MR_Word conv8_STATE_VARIABLE_Info_24;
    MR_Word conv7_STATE_VARIABLE_Specs_26;

    transform_hlds__float_regs__fix_branching_goal_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Goal_12, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Info_24, ((MR_Word) (wrapper_arg_6)), &conv7_STATE_VARIABLE_Specs_26);
    *wrapper_arg_3 = ((MR_Box) (conv9_Goal_12));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Info_24));
    *wrapper_arg_7 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_26));
  }
}

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__2_24;

    succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1519__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_LambdaHeadVar__2_24);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_24));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Goal_11;
    MR_Word conv2_InstMap_12;
    MR_Word conv1_STATE_VARIABLE_Info_16;
    MR_Word conv0_STATE_VARIABLE_Specs_18;

    transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Goal_11, &conv2_InstMap_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_16, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_18);
    *wrapper_arg_2 = ((MR_Box) (conv3_Goal_11));
    *wrapper_arg_3 = ((MR_Box) (conv2_InstMap_12));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_16));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(
  MR_Word Goals0_10,
  MR_Word * Goals_11,
  MR_Word NonLocals_12,
  MR_Word InstMap0_13,
  MR_Word * InstMap_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_bool succeeded;
    MR_Word Goals1_17;
    MR_Word InstMaps1_18;
    MR_Word CommonDelta_19;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Specs_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word InstMapDeltas_59;
    MR_Word Var_65;
    MR_Box conv5_STATE_VARIABLE_Info_26_26;
    MR_Box conv4_STATE_VARIABLE_Specs_27_27;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (InstMap0_13));
    }
    mercury__list__map2_foldl2_8_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), Var_25, Goals0_10, &Goals1_17, &InstMaps1_18, ((MR_Box) (STATE_VARIABLE_Info_0_21)), &conv5_STATE_VARIABLE_Info_26_26, ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv4_STATE_VARIABLE_Specs_27_27);
    STATE_VARIABLE_Info_26_26 = ((MR_Word) (conv5_STATE_VARIABLE_Info_26_26));
    STATE_VARIABLE_Specs_27_27 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_27_27));
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (InstMap0_13));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (NonLocals_12));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Var_65, InstMaps1_18, &InstMapDeltas_59);
    if ((InstMapDeltas_59 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&CommonDelta_19);
      STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_26_26;
    }
    else
    {
      MR_Word VarTypes_62;
      MR_Word ModuleInfo0_63;
      MR_Word ModuleInfo_64;

      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_26_26, &VarTypes_62);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_26_26, &ModuleInfo0_63);
      hlds__instmap__merge_instmap_deltas_7_p_0(InstMap0_13, NonLocals_12, VarTypes_62, InstMapDeltas_59, &CommonDelta_19, ModuleInfo0_63, &ModuleInfo_64);
      transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_64, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_28_28);
    }
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(CommonDelta_19);
    if (succeeded)
    {
      MR_Word VarsExpectInsts_20;
      MR_Word Var_29;
      MR_Box conv11_STATE_VARIABLE_Info_22;
      MR_Box conv10_STATE_VARIABLE_Specs_24;

      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(CommonDelta_19, &VarsExpectInsts_20);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[1]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (VarsExpectInsts_20));
      }
      mercury__list__map_corresponding_foldl2_8_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), Var_29, Goals1_17, InstMaps1_18, Goals_11, ((MR_Box) (STATE_VARIABLE_Info_28_28)), &conv11_STATE_VARIABLE_Info_22, ((MR_Box) (STATE_VARIABLE_Specs_27_27)), &conv10_STATE_VARIABLE_Specs_24);
      *STATE_VARIABLE_Info_22 = ((MR_Word) (conv11_STATE_VARIABLE_Info_22));
      *STATE_VARIABLE_Specs_24 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_24));
    }
    else
    {
      *Goals_11 = Goals1_17;
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_27_27;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_28_28;
    }
    hlds__instmap__apply_instmap_delta_3_p_0(CommonDelta_19, InstMap0_13, InstMap_14);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_UnifyMode_8;

    transform_hlds__float_regs__unify_mode_set_rhs_final_inst_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_UnifyMode_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_UnifyMode_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__goal_util__update_instmap_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(
  MR_Word GoalExpr0_10,
  MR_Word GoalInfo0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_InstMap_0_71,
  MR_Word * STATE_VARIABLE_InstMap_72,
  MR_Word STATE_VARIABLE_Info_0_73,
  MR_Word * STATE_VARIABLE_Info_74,
  MR_Word STATE_VARIABLE_Specs_0_75,
  MR_Word * STATE_VARIABLE_Specs_76)
{
  {
    MR_bool succeeded;
    MR_Word LHS_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 0))));
    MR_Word RHS0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 1))));
    MR_Word Mode_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 2))));
    MR_Word Unification0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 3))));
    MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 4))));

    switch (MR_tag((MR_Word) Unification0_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CellVar_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_19, (MR_Integer) 0))));
          MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_19, (MR_Integer) 1))));
          MR_Word Args0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_19, (MR_Integer) 2))));
          MR_Word ArgUnifyModes0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_19, (MR_Integer) 3))));
          MR_Word HowToConstruct_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_19, (MR_Integer) 4))));
          MR_Word IsUnique_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification0_19, (MR_Integer) 5))) & (MR_Integer) 1);
          MR_Word SubInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_19, (MR_Integer) 6))));
          MR_Word IsExistConstruct_29;

          switch (MR_tag((MR_Word) RHS0_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_unify_goal\'/9", (MR_String) "construct rhs_var");
                return;
              }
              break;
            case (MR_Integer) 1:
              IsExistConstruct_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), RHS0_17, (MR_Integer) 1))) & (MR_Integer) 1);
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_unify_goal\'/9", (MR_String) "construct rhs_lambda_goal");
                return;
              }
              break;
          }
          if ((Args0_23 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ModuleInfo_41;
            MR_Word GoalInfo_42;

            transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_73, &ModuleInfo_41);
            transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(ModuleInfo_41, CellVar_21, ConsId_22, Args0_23, GoalInfo0_11, &GoalInfo_42, STATE_VARIABLE_InstMap_0_71, STATE_VARIABLE_InstMap_72);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_10));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_42));
            }
            *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_0_73;
            *STATE_VARIABLE_Specs_76 = STATE_VARIABLE_Specs_0_75;
          }
          else
          {
            MR_Word GoalContext_45;
            MR_Word Args_46;
            MR_Word ArgUnifyModes_47;
            MR_Word MaybeWrappedGoals_48;

            GoalContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
            transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(CellVar_21, ConsId_22, Args0_23, &Args_46, ArgUnifyModes0_24, &ArgUnifyModes_47, &MaybeWrappedGoals_48, STATE_VARIABLE_InstMap_0_71, GoalContext_45, STATE_VARIABLE_Info_0_73, STATE_VARIABLE_Info_74, STATE_VARIABLE_Specs_0_75, STATE_VARIABLE_Specs_76);
            if ((MaybeWrappedGoals_48 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ModuleInfo_99;
              MR_Word GoalInfo_100;

              transform_hlds__lambda__lambda_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_74, &ModuleInfo_99);
              transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(ModuleInfo_99, CellVar_21, ConsId_22, Args0_23, GoalInfo0_11, &GoalInfo_100, STATE_VARIABLE_InstMap_0_71, STATE_VARIABLE_InstMap_72);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_10));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_100));
              }
            }
            else
            {
              MR_Word WrapGoals_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWrappedGoals_48, (MR_Integer) 0))));
              MR_Word GoalInfo1_50;
              MR_Word RHS_51;
              MR_Word Unification_52;
              MR_Word GoalExpr1_53;
              MR_Word Goal1_54;
              MR_Word STATE_VARIABLE_InstMap_92_92;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word ModuleInfo_98;
              MR_Box conv1_STATE_VARIABLE_InstMap_92_92;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[11]), WrapGoals_49, ((MR_Box) (STATE_VARIABLE_InstMap_0_71)), &conv1_STATE_VARIABLE_InstMap_92_92);
              STATE_VARIABLE_InstMap_92_92 = ((MR_Word) (conv1_STATE_VARIABLE_InstMap_92_92));
              transform_hlds__lambda__lambda_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_74, &ModuleInfo_98);
              transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(ModuleInfo_98, CellVar_21, ConsId_22, Args_46, GoalInfo0_11, &GoalInfo1_50, STATE_VARIABLE_InstMap_92_92, STATE_VARIABLE_InstMap_72);
              {
                RHS_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RHS_51, 0) = ((MR_Box) (ConsId_22));
                MR_hl_field(MR_mktag(1), RHS_51, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstruct_29));
                MR_hl_field(MR_mktag(1), RHS_51, 2) = ((MR_Box) (Args_46));
              }
              {
                Unification_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Unification_52, 0) = ((MR_Box) (CellVar_21));
                MR_hl_field(MR_mktag(0), Unification_52, 1) = ((MR_Box) (ConsId_22));
                MR_hl_field(MR_mktag(0), Unification_52, 2) = ((MR_Box) (Args_46));
                MR_hl_field(MR_mktag(0), Unification_52, 3) = ((MR_Box) (ArgUnifyModes_47));
                MR_hl_field(MR_mktag(0), Unification_52, 4) = ((MR_Box) (HowToConstruct_25));
                MR_hl_field(MR_mktag(0), Unification_52, 5) = (MR_Box) ((MR_Unsigned) (IsUnique_26));
                MR_hl_field(MR_mktag(0), Unification_52, 6) = ((MR_Box) (SubInfo_27));
              }
              {
                GoalExpr1_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), GoalExpr1_53, 0) = ((MR_Box) (LHS_16));
                MR_hl_field(MR_mktag(1), GoalExpr1_53, 1) = ((MR_Box) (RHS_51));
                MR_hl_field(MR_mktag(1), GoalExpr1_53, 2) = ((MR_Box) (Mode_18));
                MR_hl_field(MR_mktag(1), GoalExpr1_53, 3) = ((MR_Box) (Unification_52));
                MR_hl_field(MR_mktag(1), GoalExpr1_53, 4) = ((MR_Box) (Context_20));
              }
              {
                Goal1_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal1_54, 0) = ((MR_Box) (GoalExpr1_53));
                MR_hl_field(MR_mktag(0), Goal1_54, 1) = ((MR_Box) (GoalInfo1_50));
              }
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Goal1_54));
                MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WrapGoals_49, Var_95);
              hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_94, GoalInfo1_50, Goal_12);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Arity_57;
          MR_Word CellVarInst0_58;
          MR_Word CellVarInst_59;
          MR_Word CellVar_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 0))));
          MR_Word ConsId_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 1))));
          MR_Word ArgUnifyModes0_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 3))));
          MR_Word ModuleInfo_115;
          MR_Word Args_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 2))));
          MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification0_19, (MR_Integer) 4)));
          MR_Word ArgUnifyModes_108;
          MR_Word TypeCtorInfo_131_131;
          MR_Word TypeCtorInfo_132_132;
          MR_Word ArgInsts_60;
          MR_Word Var_81;
          MR_Word TypeInfo_133_133;

          transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_73, &ModuleInfo_115);
          mercury__list__length_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), Args_116, &Arity_57);
          hlds__instmap__instmap_lookup_var_3_p_0(STATE_VARIABLE_InstMap_0_71, CellVar_112, &CellVarInst0_58);
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo_115, CellVarInst0_58, &CellVarInst_59);
          succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(CellVarInst_59, ConsId_113, Arity_57, &ArgInsts_60);
          if (succeeded)
          {
            TypeCtorInfo_131_131 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
            TypeCtorInfo_132_132 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0);
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[4]));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2));
              MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (ModuleInfo_115));
            }
            mercury__list__map_corresponding_4_p_0(TypeCtorInfo_131_131, TypeCtorInfo_132_132, TypeCtorInfo_132_132, Var_81, ArgInsts_60, ArgUnifyModes0_114, &ArgUnifyModes_108);
            TypeInfo_133_133 = (MR_Word) (&transform_hlds__float_regs_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_133_133, ((MR_Box) (ArgUnifyModes_108)), ((MR_Box) (ArgUnifyModes0_114)));
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word Unification_105;
            MR_Word GoalExpr1_106;
            MR_Word Goal1_107;

            {
              Unification_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Unification_105, 0) = ((MR_Box) (CellVar_112));
              MR_hl_field(MR_mktag(1), Unification_105, 1) = ((MR_Box) (ConsId_113));
              MR_hl_field(MR_mktag(1), Unification_105, 2) = ((MR_Box) (Args_116));
              MR_hl_field(MR_mktag(1), Unification_105, 3) = ((MR_Box) (ArgUnifyModes_108));
              MR_hl_field(MR_mktag(1), Unification_105, 4) = (MR_Box) (packed_word_2);
            }
            {
              GoalExpr1_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalExpr1_106, 0) = ((MR_Box) (LHS_16));
              MR_hl_field(MR_mktag(1), GoalExpr1_106, 1) = ((MR_Box) (RHS0_17));
              MR_hl_field(MR_mktag(1), GoalExpr1_106, 2) = ((MR_Box) (Mode_18));
              MR_hl_field(MR_mktag(1), GoalExpr1_106, 3) = ((MR_Box) (Unification_105));
              MR_hl_field(MR_mktag(1), GoalExpr1_106, 4) = ((MR_Box) (Context_20));
            }
            {
              Goal1_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Goal1_107, 0) = ((MR_Box) (GoalExpr1_106));
              MR_hl_field(MR_mktag(0), Goal1_107, 1) = ((MR_Box) (GoalInfo0_11));
            }
            transform_hlds__float_regs__do_recompute_atomic_instmap_delta_5_p_0(Goal1_107, Goal_12, STATE_VARIABLE_InstMap_0_71, STATE_VARIABLE_Info_0_73, STATE_VARIABLE_Info_74);
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_10));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
            }
            *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_0_73;
          }
          hlds__goal_util__update_instmap_3_p_0(*Goal_12, STATE_VARIABLE_InstMap_0_71, STATE_VARIABLE_InstMap_72);
          *STATE_VARIABLE_Specs_76 = STATE_VARIABLE_Specs_0_75;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ToVar_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification0_19, (MR_Integer) 0))));
          MR_Word FromVar_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification0_19, (MR_Integer) 1))));
          MR_Word Delta0_63;
          MR_Word Inst_64;
          MR_Word Delta_65;
          MR_Word GoalInfo1_121;

          Delta0_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_11);
          hlds__instmap__instmap_lookup_var_3_p_0(STATE_VARIABLE_InstMap_0_71, FromVar_62, &Inst_64);
          hlds__instmap__instmap_delta_set_var_4_p_0(ToVar_61, Inst_64, Delta0_63, &Delta_65);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_65, GoalInfo0_11, &GoalInfo1_121);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_10));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo1_121));
          }
          hlds__goal_util__update_instmap_3_p_0(*Goal_12, STATE_VARIABLE_InstMap_0_71, STATE_VARIABLE_InstMap_72);
          *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_0_73;
          *STATE_VARIABLE_Specs_76 = STATE_VARIABLE_Specs_0_75;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification0_19, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_10));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
              hlds__goal_util__update_instmap_3_p_0(*Goal_12, STATE_VARIABLE_InstMap_0_71, STATE_VARIABLE_InstMap_72);
              *STATE_VARIABLE_Info_74 = STATE_VARIABLE_Info_0_73;
              *STATE_VARIABLE_Specs_76 = STATE_VARIABLE_Specs_0_75;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_unify_goal\'/9", (MR_String) "complicated_unify");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word CellVar_10,
  MR_Word ConsId_11,
  MR_Word Args_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word STATE_VARIABLE_InstMap_0_20,
  MR_Word * STATE_VARIABLE_InstMap_21)
{
  {
    MR_bool succeeded;
    MR_Word Delta0_16;
    MR_Word CellInst0_17;

    Delta0_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
    succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(Delta0_16, CellVar_10, &CellInst0_17);
    if (succeeded)
    {
      MR_Word CellInst_18;
      MR_Word Delta_19;

      transform_hlds__float_regs__rebuild_cell_inst_6_p_0(ModuleInfo_9, STATE_VARIABLE_InstMap_0_20, ConsId_11, Args_12, CellInst0_17, &CellInst_18);
      hlds__instmap__instmap_delta_set_var_4_p_0(CellVar_10, CellInst_18, Delta0_16, &Delta_19);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_19, GoalInfo0_13, GoalInfo_14);
      hlds__instmap__apply_instmap_delta_3_p_0(Delta_19, STATE_VARIABLE_InstMap_0_20, STATE_VARIABLE_InstMap_21);
    }
    else
    {
      *GoalInfo_14 = GoalInfo0_13;
      hlds__instmap__apply_instmap_delta_3_p_0(Delta0_16, STATE_VARIABLE_InstMap_0_20, STATE_VARIABLE_InstMap_21);
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_RegType_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Inst_10;

    transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Inst_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_Inst_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_RegType_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word InstMap_8,
  MR_Word ConsId_9,
  MR_Word Args_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Inst_12 = Inst0_11;
            break;
          case (MR_Integer) 1:
            *Inst_12 = Inst0_11;
            break;
        }
        break;
      case (MR_Integer) 1:
        *Inst_12 = Inst0_11;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 1))));
          MR_Word Var_189 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((Var_188 == (MR_Word) ((MR_Unsigned) 0U)))
            *Inst_12 = Inst0_11;
          else
          {
            MR_Word PredInstInfo0_17 = (MR_Word) (MR_body((MR_Word) (Var_188), (MR_Integer) 1));
            MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_17, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_17, (MR_Integer) 1))));
            MR_Word Determinism_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_17, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word ShroudedPredProcId_22;

            succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ShroudedPredProcId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
              {
                MR_Word PredId_24;
                MR_Word PredInfo_26;
                MR_Word ArgTypes_27;
                MR_Integer NumArgs_28;
                MR_Word MissingArgTypes_29;
                MR_Word ArgRegs_30;
                MR_Word PredInstInfo_31;
                MR_Word Var_54;
                MR_Word Var_56;
                MR_Word Var_57;

                Var_54 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_22);
                PredId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
                hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_24, &PredInfo_26);
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_26, &ArgTypes_27);
                mercury__list__length_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), Args_10, &NumArgs_28);
                mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumArgs_28, ArgTypes_27, &MissingArgTypes_29);
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[9]), MissingArgTypes_29, &ArgRegs_30);
                {
                  Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ArgRegs_30));
                }
                {
                  PredInstInfo_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PredInstInfo_31, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
                  MR_hl_field(MR_mktag(0), PredInstInfo_31, 1) = ((MR_Box) (Modes_19));
                  MR_hl_field(MR_mktag(0), PredInstInfo_31, 2) = ((MR_Box) (Var_56));
                  MR_hl_field(MR_mktag(0), PredInstInfo_31, 3) = (MR_Box) ((MR_Unsigned) (Determinism_21));
                }
                Var_57 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_31)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_12 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Var_189));
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_57));
                }
              }
            }
            else
              *Inst_12 = Inst0_11;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Uniq_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word InstResults_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word BoundInsts0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 3))));
              MR_Word BoundInsts_16;
              MR_Word Var_59;

              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[5]));
                MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (InstMap_8));
                MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (ConsId_9));
                MR_hl_field(MR_mktag(0), Var_59, 5) = ((MR_Box) (Args_10));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_59, BoundInsts0_15, &BoundInsts_16);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_13));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_14));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_16));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word Var_191 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);

              if ((Var_190 == (MR_Word) ((MR_Unsigned) 0U)))
                *Inst_12 = Inst0_11;
              else
              {
                MR_Word PredInstInfo0_132 = (MR_Word) (MR_body((MR_Word) (Var_190), (MR_Integer) 1));
                MR_Word PredOrFunc_133 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_132, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Modes_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_132, (MR_Integer) 1))));
                MR_Word Determinism_136 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_132, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word ShroudedPredProcId_110;

                succeeded = ((((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ShroudedPredProcId_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_9, (MR_Integer) 1))));
                  {
                    MR_Word Var_78;
                    MR_Word PredId_90;
                    MR_Word PredInfo_92;
                    MR_Word ArgTypes_93;
                    MR_Integer NumArgs_94;
                    MR_Word MissingArgTypes_95;
                    MR_Word ArgRegs_96;
                    MR_Word PredInstInfo_97;
                    MR_Word Var_102;
                    MR_Word Var_104;

                    Var_102 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_110);
                    PredId_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_102, (MR_Integer) 0))));
                    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_90, &PredInfo_92);
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_92, &ArgTypes_93);
                    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), Args_10, &NumArgs_94);
                    mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumArgs_94, ArgTypes_93, &MissingArgTypes_95);
                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[10]), MissingArgTypes_95, &ArgRegs_96);
                    {
                      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (ArgRegs_96));
                    }
                    {
                      PredInstInfo_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredInstInfo_97, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_133));
                      MR_hl_field(MR_mktag(0), PredInstInfo_97, 1) = ((MR_Box) (Modes_134));
                      MR_hl_field(MR_mktag(0), PredInstInfo_97, 2) = ((MR_Box) (Var_104));
                      MR_hl_field(MR_mktag(0), PredInstInfo_97, 3) = (MR_Box) ((MR_Unsigned) (Determinism_136));
                    }
                    Var_78 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_97)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_12 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_191));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_78));
                    }
                  }
                }
                else
                  *Inst_12 = Inst0_11;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.rebuild_cell_inst\'/6", (MR_String) "inst_var");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVarSet_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word SpecInst0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word SpecInst_38;

              transform_hlds__float_regs__rebuild_cell_inst_6_p_0(ModuleInfo_7, InstMap_8, ConsId_9, Args_10, SpecInst0_37, &SpecInst_38);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVarSet_36));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SpecInst_38));
              }
            }
            break;
          case (MR_Integer) 4:
            *Inst_12 = Inst0_11;
            break;
          case (MR_Integer) 5:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.rebuild_cell_inst\'/6", (MR_String) "abstract_inst");
              return;
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = check_hlds__mode_util__from_to_insts_to_init_inst_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_ArgFromToInsts_8;

    transform_hlds__float_regs__add_arg_regs_in_from_to_insts_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_ArgFromToInsts_8);
    *wrapper_arg_3 = ((MR_Box) (conv5_ArgFromToInsts_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;
    MR_Word conv3_HeadVar__3_3;

    check_hlds__mode_util__unify_mode_to_lhs_rhs_from_to_insts_3_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2, &conv3_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_6;
    MR_Word conv0_STATE_VARIABLE_TVarSet_15;

    transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Type_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TVarSet_15);
    *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TVarSet_15));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(
  MR_Word CellVar_14,
  MR_Word ConsId_15,
  MR_Word OrigVars_16,
  MR_Word * Vars_17,
  MR_Word ArgModes0_18,
  MR_Word * ArgModes_19,
  MR_Word * MaybeWrappedGoals_20,
  MR_Word InstMap0_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_25;
    MR_Word VarTypes_26;
    MR_Word CellType_27;
    MR_Word PhonyArgTypes_36;
    MR_Word TypeCtorInfo_57_57;
    MR_Word TypeCtorInfo_62_62;
    MR_Word TypeInfo_63_63;
    MR_Word TypeCtor_28;
    MR_Word TypeArgs_29;
    MR_Word TVarSet0_32;
    MR_Word PhonyTypeArgs_33;
    MR_Word PhonyCellType_35;
    MR_Word Var_49;
    MR_Box conv2__TVarSet_34;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_45, &ModuleInfo_25);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_0_45, &VarTypes_26);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_26, CellVar_14, &CellType_27);
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(CellType_27, &TypeCtor_28, &TypeArgs_29);
    if (succeeded)
    {
      succeeded = (TypeArgs_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeCtorInfo_57_57 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        mercury__varset__init_1_p_0(TypeCtorInfo_57_57, &TVarSet0_32);
        Var_49 = (MR_Word) (&transform_hlds__float_regs_scalar_common_3[6]);
        TypeCtorInfo_62_62 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        TypeInfo_63_63 = (MR_Word) (&transform_hlds__float_regs_scalar_common_1[2]);
        mercury__list__map_foldl_5_p_0(TypeCtorInfo_62_62, TypeCtorInfo_62_62, TypeInfo_63_63, Var_49, TypeArgs_29, &PhonyTypeArgs_33, ((MR_Box) (TVarSet0_32)), &conv2__TVarSet_34);
        parse_tree__prog_type__construct_type_3_p_0(TypeCtor_28, PhonyTypeArgs_33, &PhonyCellType_35);
        succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_25, PhonyCellType_35, ConsId_15, &PhonyArgTypes_36);
        if (succeeded)
        {
          succeeded = (PhonyArgTypes_36 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word LHSFromToInsts0_39;
      MR_Word RHSFromToInsts0_40;
      MR_Word LHSFromToInsts_41;
      MR_Word RHSFromToInsts_42;
      MR_Word ArgInitialInsts_43;
      MR_Word WrapGoals_44;
      MR_Word Var_51;

      mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[7]), ArgModes0_18, &LHSFromToInsts0_39, &RHSFromToInsts0_40);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_3));
        MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ModuleInfo_25));
      }
      mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), Var_51, PhonyArgTypes_36, LHSFromToInsts0_39, &LHSFromToInsts_41);
      mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), Var_51, PhonyArgTypes_36, RHSFromToInsts0_40, &RHSFromToInsts_42);
      check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(LHSFromToInsts_41, RHSFromToInsts_42, ArgModes_19);
      ArgInitialInsts_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[8]), RHSFromToInsts_42);
      transform_hlds__float_regs__match_args_12_p_0(InstMap0_21, Context_22, PhonyArgTypes_36, ArgInitialInsts_43, OrigVars_16, Vars_17, (MR_Word) ((MR_Unsigned) 0U), &WrapGoals_44, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeWrappedGoals_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WrapGoals_44));
      }
    }
    else
    {
      *Vars_17 = OrigVars_16;
      *ArgModes_19 = ArgModes0_18;
      *MaybeWrappedGoals_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
      *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_0_45;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_args_12_p_0(
  MR_Word InstMap0_13,
  MR_Word Context_14,
  MR_Word ArgTypes_15,
  MR_Word Insts_16,
  MR_Word OrigVars_17,
  MR_Word * Vars_18,
  MR_Word STATE_VARIABLE_WrapGoals_0_30,
  MR_Word * STATE_VARIABLE_WrapGoals_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    MR_bool succeeded = (ArgTypes_15 == (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
      succeeded = (Insts_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (OrigVars_17 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      *Vars_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
      *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
      *STATE_VARIABLE_WrapGoals_31 = STATE_VARIABLE_WrapGoals_0_30;
    }
    else
    {
      MR_Word AT_22;
      MR_Word ATs_23;
      MR_Word I_24;
      MR_Word Is_25;
      MR_Word OV_26;
      MR_Word OVs_27;

      succeeded = (ArgTypes_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        AT_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_15, (MR_Integer) 0))));
        ATs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_15, (MR_Integer) 1))));
        succeeded = (Insts_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          I_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_16, (MR_Integer) 0))));
          Is_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_16, (MR_Integer) 1))));
          succeeded = (OrigVars_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OV_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrigVars_17, (MR_Integer) 0))));
            OVs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrigVars_17, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word V_28;
        MR_Word Vs_29;
        MR_Word STATE_VARIABLE_WrapGoals_36_36;
        MR_Word STATE_VARIABLE_Info_37_37;
        MR_Word STATE_VARIABLE_Specs_38_38;

        transform_hlds__float_regs__match_arg_12_p_0(InstMap0_13, Context_14, AT_22, I_24, OV_26, &V_28, STATE_VARIABLE_WrapGoals_0_30, &STATE_VARIABLE_WrapGoals_36_36, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_38_38);
        transform_hlds__float_regs__match_args_12_p_0(InstMap0_13, Context_14, ATs_23, Is_25, OVs_27, &Vs_29, STATE_VARIABLE_WrapGoals_36_36, STATE_VARIABLE_WrapGoals_31, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_33, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_35);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Vars_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vs_29));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.match_args\'/12", (MR_String) "length mismatch");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_RegType_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0(
  MR_Word InstMapBefore_13,
  MR_Word Context_14,
  MR_Word ArgType_15,
  MR_Word ExpectInst_16,
  MR_Word OrigVar_17,
  MR_Word * Var_18,
  MR_Word STATE_VARIABLE_WrapGoals_0_44,
  MR_Word * STATE_VARIABLE_WrapGoals_45,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_22;
    MR_Word VarTypes_23;
    MR_Word PredOrFunc_25;
    MR_Word ArgPredArgTypes_27;
    MR_Word Var_24;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_46, &ModuleInfo_22);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_0_46, &VarTypes_23);
    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_22, ExpectInst_16);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(ArgType_15, &Var_24, &PredOrFunc_25, &ArgPredArgTypes_27);
      if (succeeded)
      {
        succeeded = (ArgPredArgTypes_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      MR_Word OrigVarType_30;
      MR_Word OrigPredArgTypes_34;
      MR_Integer Arity_35;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word ExpectPredInstInfo_36;
      MR_Word PredInstInfo0_61;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_23, OrigVar_17, &OrigVarType_30);
      parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(OrigVarType_30, &Var_31, &Var_32, &OrigPredArgTypes_34);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OrigPredArgTypes_34, &Arity_35);
      succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(ModuleInfo_22, ExpectInst_16, &PredInstInfo0_61);
      if (succeeded)
      {
        ExpectPredInstInfo_36 = PredInstInfo0_61;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (PredOrFunc_25 == (MR_Integer) 1);
        if (succeeded)
        {
          ExpectPredInstInfo_36 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_35);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word OrigVarInst_37;
        MR_Word OrigPredInstInfo_38;
        MR_Word ExpectArgRegs_39;
        MR_Word OrigArgRegs_40;
        MR_Word MaybeArgRegs_81;
        MR_Word PredInstInfo0_67;
        MR_Word PredInstInfo0_75;

        hlds__instmap__instmap_lookup_var_3_p_0(InstMapBefore_13, OrigVar_17, &OrigVarInst_37);
        succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(ModuleInfo_22, OrigVarInst_37, &PredInstInfo0_75);
        if (succeeded)
        {
          PredInstInfo0_67 = PredInstInfo0_75;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (PredOrFunc_25 == (MR_Integer) 1);
          if (succeeded)
          {
            PredInstInfo0_67 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_35);
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          OrigPredInstInfo_38 = PredInstInfo0_67;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.lookup_pred_inst_info\'/5", (MR_String) "no higher order inst");
            return;
          }
        MaybeArgRegs_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExpectPredInstInfo_36, (MR_Integer) 2))));
        if ((MaybeArgRegs_81 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[5]), ArgPredArgTypes_27, &ExpectArgRegs_39);
        else
          ExpectArgRegs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgRegs_81, (MR_Integer) 0))));
        transform_hlds__float_regs__get_ho_arg_regs_3_p_0(OrigPredInstInfo_38, OrigPredArgTypes_34, &OrigArgRegs_40);
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[5]), ((MR_Box) (OrigArgRegs_40)), ((MR_Box) (ExpectArgRegs_39)));
        if (succeeded)
        {
          *Var_18 = OrigVar_17;
          *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
          *STATE_VARIABLE_WrapGoals_45 = STATE_VARIABLE_WrapGoals_0_44;
        }
        else
        {
          MR_Word UnifyGoal_41;

          transform_hlds__float_regs__create_reg_wrapper_9_p_0(OrigVar_17, OrigPredInstInfo_38, ExpectArgRegs_39, OrigArgRegs_40, Context_14, Var_18, &UnifyGoal_41, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
          mercury__list__cons_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (UnifyGoal_41)), STATE_VARIABLE_WrapGoals_0_44, STATE_VARIABLE_WrapGoals_45);
        }
        *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
      }
      else
      {
        MR_Word PredInfo_42;
        MR_Word VarSet_43;

        transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(STATE_VARIABLE_Info_0_46, &PredInfo_42);
        transform_hlds__lambda__lambda_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_46, &VarSet_43);
        transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(PredInfo_42, VarSet_43, OrigVar_17, Context_14, OrigPredArgTypes_34, ArgPredArgTypes_27, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
        *Var_18 = OrigVar_17;
        *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
        *STATE_VARIABLE_WrapGoals_45 = STATE_VARIABLE_WrapGoals_0_44;
      }
    }
    else
    {
      *Var_18 = OrigVar_17;
      *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
      *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
      *STATE_VARIABLE_WrapGoals_45 = STATE_VARIABLE_WrapGoals_0_44;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RegR_HeadVars_12;

    transform_hlds__float_regs__make_reg_r_headvars_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_RegR_HeadVars_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_RegR_HeadVars_12));
  }
}

static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0(
  MR_Word OrigVar_10,
  MR_Word OrigVarPredInstInfo_11,
  MR_Word OuterArgRegs_12,
  MR_Word InnerArgRegs_13,
  MR_Word Context_14,
  MR_Word * Var_15,
  MR_Word * UnifyGoal_16,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  {
    MR_Word VarSet0_18;
    MR_Word VarTypes0_19;
    MR_Word ModuleInfo0_20;
    MR_Word OrigVarType_21;
    MR_Word Purity_22;
    MR_Word PredOrFunc_23;
    MR_Word PredArgTypes_25;
    MR_Word CallVars_26;
    MR_Word VarSet1_27;
    MR_Word VarTypes1_28;
    MR_Integer Arity_29;
    MR_Word ArgModes_32;
    MR_Word Determinism_34;
    MR_Word GenericCall_35;
    MR_Word CallGoalExpr_36;
    MR_Word CallNonLocals_37;
    MR_Word CallInstMapDelta_38;
    MR_Word CallGoalInfo_39;
    MR_Word CallGoal_40;
    MR_Word VarSet_41;
    MR_Word VarTypes_42;
    MR_Word RegR_HeadVars_43;
    MR_Word DummyPPId_44;
    MR_Word DummyShroudedPPId_45;
    MR_Word ConsId_46;
    MR_Word InInst_47;
    MR_Word ArgUnifyModes0_48;
    MR_Word Unification0_49;
    MR_Word LambdaNonLocals_50;
    MR_Word Functor_51;
    MR_Word Unification_52;
    MR_Word UnifyMode_53;
    MR_Word UnifyGoalExpr_56;
    MR_Word UnifyNonLocals_57;
    MR_Word UnifyPredInstInfo_58;
    MR_Word UnifyPredVarInst_59;
    MR_Word UnifyInstMapDelta_60;
    MR_Word UnifyGoalInfo_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Integer Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_84;
    MR_Word STATE_VARIABLE_Info_85_85;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Box conv1_RegR_HeadVars_43;

    transform_hlds__lambda__lambda_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_62, &VarSet0_18);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_0_62, &VarTypes0_19);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_62, &ModuleInfo0_20);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_19, OrigVar_10, &OrigVarType_21);
    parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(OrigVarType_21, &Purity_22, &PredOrFunc_23, &PredArgTypes_25);
    transform_hlds__float_regs__create_fresh_vars_6_p_0(PredArgTypes_25, &CallVars_26, VarSet0_18, &VarSet1_27, VarTypes0_19, &VarTypes1_28);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), CallVars_26, &Arity_29);
    ArgModes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigVarPredInstInfo_11, (MR_Integer) 1))));
    Determinism_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OrigVarPredInstInfo_11, (MR_Integer) 3))) & (MR_Integer) 7);
    {
      GenericCall_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GenericCall_35, 0) = ((MR_Box) (OrigVar_10));
      MR_hl_field(MR_mktag(0), GenericCall_35, 1) = (MR_Box) (((((MR_Unsigned) (Purity_22) << 1)) | (MR_Unsigned) (PredOrFunc_23)));
      MR_hl_field(MR_mktag(0), GenericCall_35, 2) = ((MR_Box) (Arity_29));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (InnerArgRegs_13));
    }
    {
      CallGoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CallGoalExpr_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), CallGoalExpr_36, 1) = ((MR_Box) (GenericCall_35));
      MR_hl_field(MR_mktag(3), CallGoalExpr_36, 2) = ((MR_Box) (CallVars_26));
      MR_hl_field(MR_mktag(3), CallGoalExpr_36, 3) = ((MR_Box) (ArgModes_32));
      MR_hl_field(MR_mktag(3), CallGoalExpr_36, 4) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(3), CallGoalExpr_36, 5) = (MR_Box) ((MR_Unsigned) (Determinism_34));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (OrigVar_10));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (CallVars_26));
    }
    CallNonLocals_37 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_65);
    hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo0_20, CallVars_26, ArgModes_32, &CallInstMapDelta_38);
    hlds__hlds_goal__goal_info_init_6_p_0(CallNonLocals_37, CallInstMapDelta_38, Determinism_34, Purity_22, Context_14, &CallGoalInfo_39);
    {
      CallGoal_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallGoal_40, 0) = ((MR_Box) (CallGoalExpr_36));
      MR_hl_field(MR_mktag(0), CallGoal_40, 1) = ((MR_Box) (CallGoalInfo_39));
    }
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_15, VarSet1_27, &VarSet_41);
    hlds__vartypes__add_var_type_4_p_0(*Var_15, OrigVarType_21, VarTypes1_28, &VarTypes_42);
    transform_hlds__lambda__lambda_info_set_varset_3_p_0(VarSet_41, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_66_66);
    transform_hlds__lambda__lambda_info_set_vartypes_3_p_0(VarTypes_42, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_67_67);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (transform_hlds__float_regs__create_reg_wrapper_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (VarTypes_42));
    }
    Var_69 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[3]), Var_68, CallVars_26, OuterArgRegs_12, ((MR_Box) (Var_69)), &conv1_RegR_HeadVars_43);
    RegR_HeadVars_43 = ((MR_Word) (conv1_RegR_HeadVars_43));
    Var_70 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    Var_71 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      DummyPPId_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DummyPPId_44, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), DummyPPId_44, 1) = ((MR_Box) (Var_71));
    }
    DummyShroudedPPId_45 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(DummyPPId_44);
    {
      ConsId_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), ConsId_46, 1) = ((MR_Box) (DummyShroudedPPId_45));
      MR_hl_field(MR_mktag(3), ConsId_46, 2) = NULL;
    }
    Var_73 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (OrigVarPredInstInfo_11)));
    {
      InInst_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InInst_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), InInst_47, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), InInst_47, 2) = ((MR_Box) (Var_73));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (InInst_47));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (InInst_47));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) (InInst_47));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (InInst_47));
    }
    {
      ArgUnifyModes0_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgUnifyModes0_48, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), ArgUnifyModes0_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      LambdaNonLocals_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaNonLocals_50, 0) = ((MR_Box) (OrigVar_10));
      MR_hl_field(MR_mktag(1), LambdaNonLocals_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unification0_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification0_49, 0) = ((MR_Box) (*Var_15));
      MR_hl_field(MR_mktag(0), Unification0_49, 1) = ((MR_Box) (ConsId_46));
      MR_hl_field(MR_mktag(0), Unification0_49, 2) = ((MR_Box) (LambdaNonLocals_50));
      MR_hl_field(MR_mktag(0), Unification0_49, 3) = ((MR_Box) (ArgUnifyModes0_48));
      MR_hl_field(MR_mktag(0), Unification0_49, 4) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Unification0_49, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification0_49, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (RegR_HeadVars_43));
    }
    transform_hlds__lambda__expand_lambda_15_p_0(Purity_22, (MR_Integer) 0, PredOrFunc_23, Var_84, CallVars_26, ArgModes_32, Determinism_34, LambdaNonLocals_50, CallGoal_40, Unification0_49, &Functor_51, &Unification_52, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_85_85);
    Var_87 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_88 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_89 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), UnifyMode_53, 1) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), UnifyMode_53, 2) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), UnifyMode_53, 3) = ((MR_Box) (Var_89));
    }
    {
      UnifyGoalExpr_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UnifyGoalExpr_56, 0) = ((MR_Box) (*Var_15));
      MR_hl_field(MR_mktag(1), UnifyGoalExpr_56, 1) = ((MR_Box) (Functor_51));
      MR_hl_field(MR_mktag(1), UnifyGoalExpr_56, 2) = ((MR_Box) (UnifyMode_53));
      MR_hl_field(MR_mktag(1), UnifyGoalExpr_56, 3) = ((MR_Box) (Unification_52));
      MR_hl_field(MR_mktag(1), UnifyGoalExpr_56, 4) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_1[19]));
    }
    UnifyNonLocals_57 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_15);
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (OuterArgRegs_12));
    }
    {
      UnifyPredInstInfo_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyPredInstInfo_58, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
      MR_hl_field(MR_mktag(0), UnifyPredInstInfo_58, 1) = ((MR_Box) (ArgModes_32));
      MR_hl_field(MR_mktag(0), UnifyPredInstInfo_58, 2) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), UnifyPredInstInfo_58, 3) = (MR_Box) ((MR_Unsigned) (Determinism_34));
    }
    Var_94 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (UnifyPredInstInfo_58)));
    {
      UnifyPredVarInst_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UnifyPredVarInst_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), UnifyPredVarInst_59, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), UnifyPredVarInst_59, 2) = ((MR_Box) (Var_94));
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (*Var_15));
      MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (UnifyPredVarInst_59));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    UnifyInstMapDelta_60 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_95);
    hlds__hlds_goal__goal_info_init_5_p_0(UnifyNonLocals_57, UnifyInstMapDelta_60, (MR_Integer) 0, (MR_Integer) 0, &UnifyGoalInfo_61);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *UnifyGoal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnifyGoalExpr_56));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (UnifyGoalInfo_61));
    }
    transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_85_85, STATE_VARIABLE_Info_63);
  }
}

static void MR_CALL 
transform_hlds__float_regs__create_fresh_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarSet_0_3,
  MR_Word * STATE_VARIABLE_VarSet_4,
  MR_Word STATE_VARIABLE_VarTypes_0_5,
  MR_Word * STATE_VARIABLE_VarTypes_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTypes_6 = STATE_VARIABLE_VarTypes_0_5;
    *STATE_VARIABLE_VarSet_4 = STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_15;
    MR_Word Vars_16;
    MR_Word STATE_VARIABLE_VarSet_23_23;
    MR_Word STATE_VARIABLE_VarTypes_24_24;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_15, STATE_VARIABLE_VarSet_0_3, &STATE_VARIABLE_VarSet_23_23);
    hlds__vartypes__add_var_type_4_p_0(Var_15, Type_13, STATE_VARIABLE_VarTypes_0_5, &STATE_VARIABLE_VarTypes_24_24);
    transform_hlds__float_regs__create_fresh_vars_6_p_0(Types_14, &Vars_16, STATE_VARIABLE_VarSet_23_23, STATE_VARIABLE_VarSet_4, STATE_VARIABLE_VarTypes_24_24, STATE_VARIABLE_VarTypes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_16));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(
  MR_Word PredInfo_9,
  MR_Word VarSet_10,
  MR_Word Var_11,
  MR_Word Context_12,
  MR_Word ArgTypesA_13,
  MR_Word ArgTypesB_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_bool succeeded;
    MR_Word Origin_16;

    {
      MR_Word Var_23;

      Var_23 = parse_tree__builtin_lib_types__float_type_0_f_0();
      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_23)), ArgTypesA_13);
    }
    if (!(succeeded))
    {
      MR_Word Var_22;

      Var_22 = parse_tree__builtin_lib_types__float_type_0_f_0();
      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_22)), ArgTypesB_14);
    }
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_9, &Origin_16);
      succeeded = ((MR_tag((MR_Word) Origin_16)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Spec_19;
      MR_Word PredPieces_33;
      MR_String VarName_34;
      MR_Word InPieces_35;
      MR_Word ErrorPieces_36;
      MR_Word Msg_38;
      MR_Word Var_40;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_76;

      PredPieces_33 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, PredInfo_9);
      mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, Var_11, &VarName_34);
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[15])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (PredPieces_33));
      }
      InPieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_40, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[8])));
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (VarName_34));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[10])));
      }
      {
        ErrorPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ErrorPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[16])));
        MR_hl_field(MR_mktag(1), ErrorPieces_36, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (InPieces_35));
      }
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (ErrorPieces_36));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[18])));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
      }
      {
        Msg_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_38, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), Msg_38, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Msg_38));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.float_regs.report_missing_higher_order_inst\'/4"));
        MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 76U));
        MR_hl_field(MR_mktag(0), Spec_19, 3) = ((MR_Box) (Var_76));
      }
      mercury__list__cons_3_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ((MR_Box) (Spec_19)), STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
    }
    else
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
  }
}

static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_RegType_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0(
  MR_Word PredInstInfo_4,
  MR_Word ArgTypes_5,
  MR_Word * ArgRegs_6)
{
  {
    MR_Word MaybeArgRegs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo_4, (MR_Integer) 2))));

    if ((MaybeArgRegs_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[4]), ArgTypes_5, ArgRegs_6);
    else
      *ArgRegs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgRegs_9, (MR_Integer) 0))));
  }
}

static MR_bool MR_CALL 
transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst_5,
  MR_Word * PredInstInfo_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst_5, (MR_Integer) 1))));

          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            *PredInstInfo_6 = (MR_Word) (MR_body((MR_Word) (Var_21), (MR_Integer) 1));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 2))));

              succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                *PredInstInfo_6 = (MR_Word) (MR_body((MR_Word) (Var_20), (MR_Integer) 1));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_5, (MR_Integer) 1))));
              MR_Word InstB_10;
              MR_Word next_value_of_Inst_5;

              check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_4, InstName_9, &InstB_10);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_5 = InstB_10;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__float_regs__do_recompute_atomic_instmap_delta_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word InstMap_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_Word VarTypes_10;
    MR_Word InstVarSet_11;
    MR_Word ModuleInfo0_12;
    MR_Word ModuleInfo_13;

    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_0_14, &VarTypes_10);
    transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_0_14, &InstVarSet_11);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_14, &ModuleInfo0_12);
    check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, Goal0_6, Goal_7, VarTypes_10, InstVarSet_11, InstMap_8, ModuleInfo0_12, &ModuleInfo_13);
    transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
  }
}

static void MR_CALL 
transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(
  MR_Word Goal_4,
  MR_Word InstMap0_5,
  MR_Word * InstMap_6)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
    MR_Word InstMapDelta_9;

    InstMapDelta_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_8);
    succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_9);
    if (succeeded)
      hlds__instmap__init_unreachable_1_p_0(InstMap_6);
    else
      *InstMap_6 = InstMap0_5;
  }
}

static void MR_CALL 
transform_hlds__float_regs__finish_call_goal_8_p_0(
  MR_Word WrapGoals_9,
  MR_Word CallGoalExpr0_10,
  MR_Word CallGoalInfo0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_InstMap_0_19,
  MR_Word * STATE_VARIABLE_InstMap_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_Word CallGoal0_15;
    MR_Word CallGoal_16;
    MR_Word CallGoalInfo_18;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word VarTypes_35;
    MR_Word InstVarSet_36;
    MR_Word ModuleInfo0_37;
    MR_Word ModuleInfo_38;

    {
      CallGoal0_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallGoal0_15, 0) = ((MR_Box) (CallGoalExpr0_10));
      MR_hl_field(MR_mktag(0), CallGoal0_15, 1) = ((MR_Box) (CallGoalInfo0_11));
    }
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(STATE_VARIABLE_Info_0_21, &VarTypes_35);
    transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_0_21, &InstVarSet_36);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_21, &ModuleInfo0_37);
    check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, CallGoal0_15, &CallGoal_16, VarTypes_35, InstVarSet_36, STATE_VARIABLE_InstMap_0_19, ModuleInfo0_37, &ModuleInfo_38);
    transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_38, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    hlds__goal_util__update_instmap_3_p_0(CallGoal_16, STATE_VARIABLE_InstMap_0_19, STATE_VARIABLE_InstMap_20);
    CallGoalInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallGoal_16, (MR_Integer) 1))));
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (CallGoal_16));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WrapGoals_9, Var_26);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_25, CallGoalInfo_18, Goal_12);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_23;
    MR_Word conv0_STATE_VARIABLE_Specs_25;

    transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_25);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_23));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_25));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word PredInfo_9;
    MR_Word ProcIds_10;
    MR_Word Var_15;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Box conv2_STATE_VARIABLE_Specs_14;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, PredId_6, &PredInfo_9);
    ProcIds_10 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_9);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (PredId_6));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), Var_15, ProcIds_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (STATE_VARIABLE_Specs_0_13)), &conv2_STATE_VARIABLE_Specs_14);
    *STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_12));
    *STATE_VARIABLE_Specs_14 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(
  MR_Word Type_3,
  MR_Word * RegType_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;

    Var_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_3, Var_5);
    if (succeeded)
      *RegType_4 = (MR_Integer) 1;
    else
      *RegType_4 = (MR_Integer) 0;
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Inst_10;

    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Inst_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_Inst_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen_7,
  MR_Word Type_8,
  MR_Word BoundInst0_9,
  MR_Word * BoundInst_10)
{
  {
    MR_bool succeeded;
    MR_Word ConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_9, (MR_Integer) 0))));
    MR_Word ArgInsts0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_9, (MR_Integer) 1))));
    MR_Word ArgInsts_14;
    MR_Word ArgTypes_13;

    succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_8, ConsId_11, &ArgTypes_13);
    if (succeeded)
      if ((ArgTypes_13 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgInsts_14 = ArgInsts0_12;
      else
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleInfo_6));
          MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Seen_7));
        }
        mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_17, ArgTypes_13, ArgInsts0_12, &ArgInsts_14);
      }
    else
      ArgInsts_14 = ArgInsts0_12;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *BoundInst_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgInsts_14));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_from_to_insts_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarType_6,
  MR_Word ArgFromToInsts0_7,
  MR_Word * ArgFromToInsts_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word InitialInst0_16;
    MR_Word FinalInst0_17;
    MR_Word InitialInst_18;
    MR_Word FinalInst_19;

    Var_9 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
    InitialInst0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgFromToInsts0_7, (MR_Integer) 0))));
    FinalInst0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgFromToInsts0_7, (MR_Integer) 1))));
    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_5, Var_9, VarType_6, InitialInst0_16, &InitialInst_18);
    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_5, Var_9, VarType_6, FinalInst0_17, &FinalInst_19);
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InitialInst_18, InitialInst0_16);
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(FinalInst_19, FinalInst0_17);
    if (succeeded)
      *ArgFromToInsts_8 = ArgFromToInsts0_7;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *ArgFromToInsts_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitialInst_18));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FinalInst_19));
      }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word RealVarType_6,
  MR_Word ArgMode0_7,
  MR_Word * ArgMode_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeArgs_10;
    MR_Word _TypeCtor_9;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(RealVarType_6, &_TypeCtor_9, &TypeArgs_10);
    if (succeeded)
    {
      succeeded = (TypeArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word AssumedType_14;
      MR_Word Var_19;

      transform_hlds__float_regs__make_generic_type_3_p_0((MR_Integer) 0, RealVarType_6, &AssumedType_14);
      Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
      transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(ModuleInfo_5, Var_19, AssumedType_14, ArgMode0_7, ArgMode_8);
    }
    else
      *ArgMode_8 = ArgMode0_7;
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen_7,
  MR_Word VarType_8,
  MR_Word ArgMode0_9,
  MR_Word * ArgMode_10)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst0_11;
    MR_Word FinalInst0_12;
    MR_Word InitialInst_13;
    MR_Word FinalInst_14;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_6, ArgMode0_9, &InitialInst0_11, &FinalInst0_12);
    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_6, Seen_7, VarType_8, InitialInst0_11, &InitialInst_13);
    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_6, Seen_7, VarType_8, FinalInst0_12, &FinalInst_14);
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InitialInst_13, InitialInst0_11);
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(FinalInst_14, FinalInst0_12);
    if (succeeded)
      *ArgMode_10 = ArgMode0_9;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *ArgMode_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InitialInst_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FinalInst_14));
      }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_BoundInst_10;

    transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_BoundInst_10);
    *wrapper_arg_2 = ((MR_Box) (conv2_BoundInst_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_RegType_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgMode_10;

    transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_ArgMode_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_ArgMode_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen0_7,
  MR_Word Type_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Inst_10 = Inst0_9;
            break;
          case (MR_Integer) 1:
            *Inst_10 = Inst0_9;
            break;
        }
        break;
      case (MR_Integer) 1:
        *Inst_10 = Inst0_9;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 1))));
          MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_9, (MR_Integer) 0))) & (MR_Integer) 7);

          if ((Var_55 == (MR_Word) ((MR_Unsigned) 0U)))
            *Inst_10 = Inst0_9;
          else
          {
            MR_Word Var_41;
            MR_Word PredInstInfo0_46 = (MR_Word) (MR_body((MR_Word) (Var_55), (MR_Integer) 1));
            MR_Word PredInstInfo_48;
            MR_Word ArgTypes_44;
            MR_Word Var_18;
            MR_Word Var_19;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_8, &Var_18, &Var_19, &ArgTypes_44);
            if (succeeded)
            {
              MR_Word PredOrFunc_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_46, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Modes0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_46, (MR_Integer) 1))));
              MR_Word Detism_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_46, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Modes_69;
              MR_Word ArgRegs_70;
              MR_Word ArgRegInfo_71;
              MR_Word Var_72;

              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ModuleInfo_6));
                MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (Seen0_7));
              }
              mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_72, ArgTypes_44, Modes0_66, &Modes_69);
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[3]), ArgTypes_44, &ArgRegs_70);
              {
                ArgRegInfo_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgRegInfo_71, 0) = ((MR_Box) (ArgRegs_70));
              }
              {
                PredInstInfo_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredInstInfo_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_65));
                MR_hl_field(MR_mktag(0), PredInstInfo_48, 1) = ((MR_Box) (Modes_69));
                MR_hl_field(MR_mktag(0), PredInstInfo_48, 2) = ((MR_Box) (ArgRegInfo_71));
                MR_hl_field(MR_mktag(0), PredInstInfo_48, 3) = (MR_Box) ((MR_Unsigned) (Detism_68));
              }
            }
            else
              PredInstInfo_48 = PredInstInfo0_46;
            Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_48)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Var_56));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_41));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word BoundInsts0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 3))));
              MR_Word BoundInsts_23;
              MR_Word Var_39;
              MR_Word Uniq_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);

              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_3));
                MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleInfo_6));
                MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Seen0_7));
                MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (Type_8));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_39, BoundInsts0_22, &BoundInsts_23);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_49));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults_21));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_23));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);

              if ((Var_57 == (MR_Word) ((MR_Unsigned) 0U)))
                *Inst_10 = Inst0_9;
              else
              {
                MR_Word PredInstInfo0_12 = (MR_Word) (MR_body((MR_Word) (Var_57), (MR_Integer) 1));
                MR_Word PredInstInfo_17;
                MR_Word Var_43;
                MR_Word ArgTypes_16;
                MR_Word Var_13;
                MR_Word Var_14;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_8, &Var_13, &Var_14, &ArgTypes_16);
                if (succeeded)
                  transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(ModuleInfo_6, Seen0_7, ArgTypes_16, PredInstInfo0_12, &PredInstInfo_17);
                else
                  PredInstInfo_17 = PredInstInfo0_12;
                Var_43 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_17)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Var_58));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_43));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *Inst_10 = Inst0_9;
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVarSet_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));
              MR_Word SpecInst0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 2))));
              MR_Word SpecInst_26;

              transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_6, Seen0_7, Type_8, SpecInst0_25, &SpecInst_26);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVarSet_24));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SpecInst_26));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_9, (MR_Integer) 1))));

              succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), Seen0_7, ((MR_Box) (InstName_27)));
              if (succeeded)
                *Inst_10 = Inst0_9;
              else
              {
                MR_Word Seen1_28;
                MR_Word Inst1_29;
                MR_Word Inst2_30;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_27)), Seen0_7, &Seen1_28);
                check_hlds__mode_util__inst_lookup_3_p_0(ModuleInfo_6, InstName_27, &Inst1_29);
                transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_6, Seen1_28, Type_8, Inst1_29, &Inst2_30);
                succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst1_29, Inst2_30);
                if (succeeded)
                  *Inst_10 = Inst0_9;
                else
                  *Inst_10 = Inst2_30;
              }
            }
            break;
          case (MR_Integer) 5:
            *Inst_10 = Inst0_9;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_RegType_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgMode_10;

    transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_ArgMode_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_ArgMode_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen_7,
  MR_Word ArgTypes_8,
  MR_Word PredInstInfo0_9,
  MR_Word * PredInstInfo_10)
{
  {
    MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_9, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Modes0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredInstInfo0_9, (MR_Integer) 1))));
    MR_Word Detism_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredInstInfo0_9, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word Modes_15;
    MR_Word ArgRegs_16;
    MR_Word ArgRegInfo_17;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Seen_7));
    }
    mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_18, ArgTypes_8, Modes0_12, &Modes_15);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[2]), ArgTypes_8, &ArgRegs_16);
    {
      ArgRegInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgRegInfo_17, 0) = ((MR_Box) (ArgRegs_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *PredInstInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Modes_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgRegInfo_17));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Detism_14));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_6;

    transform_hlds__float_regs__make_generic_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
  }
}

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Type_6;

    transform_hlds__float_regs__make_generic_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
  }
}

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0(
  MR_Word PolymorphicContext_4,
  MR_Word Type0_5,
  MR_Word * Type_6)
{
  {
    MR_bool succeeded;
    MR_Word Purity_7;
    MR_Word PredOrFunc_8;
    MR_Word ArgTypes0_10;

    succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type0_5, &Purity_7, &PredOrFunc_8, &ArgTypes0_10);
    if (succeeded)
    {
      MR_Word ArgTypes_11;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__float_regs__make_generic_type_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (PolymorphicContext_4));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_15, ArgTypes0_10, &ArgTypes_11);
      parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_7, PredOrFunc_8, ArgTypes_11, Type_6);
    }
    else
    {
      MR_Word TypeCtor_12;
      MR_Word ArgTypes0_20;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type0_5, &TypeCtor_12, &ArgTypes0_20);
      if (succeeded)
        if ((ArgTypes0_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_28;

          succeeded = (PolymorphicContext_4 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_28 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_12, Var_28);
          }
          if (succeeded)
            *Type_6 = parse_tree__builtin_lib_types__heap_pointer_type_0_f_0();
          else
            *Type_6 = Type0_5;
        }
        else
        {
          MR_Word ArgTypes_18;

          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_6[0]), ArgTypes0_20, &ArgTypes_18);
          parse_tree__prog_type__construct_type_3_p_0(TypeCtor_12, ArgTypes_18, Type_6);
        }
      else
        *Type_6 = Type0_5;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ArgMode_8;

    transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_ArgMode_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_ArgMode_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ArgMode_8;

    transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_ArgMode_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_ArgMode_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Integer ProcId_6,
  MR_Word PredInfo0_7,
  MR_Word * PredInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word PredMarkers_9;
    MR_Word ProcInfo0_10;
    MR_Word ArgModes0_11;
    MR_Word ArgModes_17;
    MR_Word ProcInfo_19;

    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_7, &PredMarkers_9);
    hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_7, ProcId_6, &ProcInfo0_10);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_10, &ArgModes0_11);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_9, (MR_Integer) 11);
    if (succeeded)
    {
      MR_Word IM_ArgTypes_12;
      MR_Integer Num_IM_ArgTypes_13;
      MR_Word FrontModes_14;
      MR_Word ArgModes1_15;
      MR_Word ArgModes2_16;
      MR_Word Var_21;
      MR_Integer Len_37;
      MR_Integer StartLen_38;

      hlds__hlds_pred__pred_info_get_instance_method_arg_types_2_p_0(PredInfo0_7, &IM_ArgTypes_12);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), IM_ArgTypes_12, &Num_IM_ArgTypes_13);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_11, &Len_37);
      StartLen_38 = (MR_Integer) ((MR_Unsigned) Len_37 - (MR_Unsigned) Num_IM_ArgTypes_13);
      succeeded = (StartLen_38 == (MR_Integer) 0);
      if (succeeded)
      {
        FrontModes_14 = (MR_Word) ((MR_Unsigned) 0U);
        ArgModes1_15 = ArgModes0_11;
      }
      else
      {
        succeeded = (StartLen_38 > (MR_Integer) 0);
        if (succeeded)
          mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StartLen_38, ArgModes0_11, &FrontModes_14, &ArgModes1_15);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
            return;
          }
      }
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_5));
      }
      mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_21, IM_ArgTypes_12, ArgModes1_15, &ArgModes2_16);
      ArgModes_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FrontModes_14, ArgModes2_16);
    }
    else
    {
      MR_Word ArgTypes_18;
      MR_Word Var_22;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_7, &ArgTypes_18);
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleInfo_5));
      }
      mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_22, ArgTypes_18, ArgModes0_11, &ArgModes_17);
    }
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_17, ProcInfo0_10, &ProcInfo_19);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_6, ProcInfo_19, PredInfo0_7, PredInfo_8);
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_PredInfo_8;

    transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_PredInfo_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_PredInfo_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_Word PredInfo0_6;
    MR_Word ProcIds_7;
    MR_Word PredInfo_8;
    MR_Word Var_11;
    MR_Box conv1_PredInfo_8;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_9, PredId_4, &PredInfo0_6);
    ProcIds_7 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo0_6);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_11, ProcIds_7, ((MR_Box) (PredInfo0_6)), &conv1_PredInfo_8);
    PredInfo_8 = ((MR_Word) (conv1_PredInfo_8));
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_8, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Word conv2_STATE_VARIABLE_Specs_14;

    transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_12));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_10;

    transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_10));
  }
}

void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8,
  MR_Word * Specs_5)
{
  {
    MR_Word PredIds_6;
    MR_Word STATE_VARIABLE_ModuleInfo_10_10;
    MR_Word STATE_VARIABLE_ModuleInfo_12_12;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_10_10;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_12_12;
    MR_Box conv4_Specs_5;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &PredIds_6);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[0]), PredIds_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_7)), &conv1_STATE_VARIABLE_ModuleInfo_10_10);
    STATE_VARIABLE_ModuleInfo_10_10 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_10_10));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), (MR_Word) (&transform_hlds__float_regs_scalar_common_3[1]), PredIds_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_10_10)), &conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_5);
    STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_12_12));
    *Specs_5 = ((MR_Word) (conv4_Specs_5));
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_12_12, STATE_VARIABLE_ModuleInfo_8);
  }
}

void mercury__transform_hlds__float_regs__init(void)
{
}

void mercury__transform_hlds__float_regs__init_type_tables(void)
{
}

void mercury__transform_hlds__float_regs__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__float_regs__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.float_regs.
