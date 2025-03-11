/*
** Automatically generated from `float_regs.m'
** by the Mercury compiler,
** version rotd-2025-03-11
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.var_table_hlds.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.lambda.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static MR_bool MR_CALL 
transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1504__1_4_p_0(
  MR_Word InstMap0_7,
  MR_Word NonLocals_8,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static void MR_CALL 
transform_hlds__float_regs__make_reg_r_headvars_5_p_0(
  MR_Word VarTable_6,
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
transform_hlds__float_regs__rebuild_cell_bound_functor_arg_4_p_0(
  MR_Word InstMap_5,
  MR_Word Var_6,
  MR_Word ArgInst0_7,
  MR_Word * ArgInst_8);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_functor_5_p_0(
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
  MR_Word STATE_VARIABLE_TVarSet_0_13,
  MR_Word * STATE_VARIABLE_TVarSet_14);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

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

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_InstMap_0_74,
  MR_Word * STATE_VARIABLE_InstMap_75,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79);

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
  MR_Word MethodProcNum_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word Modes0_18,
  MR_Word * Modes_19,
  MR_Word * WrapGoals_20,
  MR_Word InstMap0_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

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
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

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
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

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
  MR_Word STATE_VARIABLE_InstMap_0_69,
  MR_Word * STATE_VARIABLE_InstMap_70,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74);

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
transform_hlds__float_regs__match_arg_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_WrapGoals_0_41,
  MR_Word * STATE_VARIABLE_WrapGoals_42,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

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
  MR_Word * LHSVar_15,
  MR_Word * UnifyGoal_16,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64);

static void MR_CALL 
transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(
  MR_Word PredInfo_9,
  MR_Word VarTable_10,
  MR_Word Var_11,
  MR_Word Context_12,
  MR_Word ArgTypesA_13,
  MR_Word ArgTypesB_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static MR_bool MR_CALL 
transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst_5,
  MR_Word * PredInstInfo_6);

static void MR_CALL 
transform_hlds__float_regs__copy_any_unreachability_from_goal_instmap_delta_3_p_0(
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
transform_hlds__float_regs__add_arg_regs_in_bound_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_functor_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen_7,
  MR_Word Type_8,
  MR_Word BoundFunctor0_9,
  MR_Word * BoundFunctor_10);

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
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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


static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_1[25][2];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_2[1][1];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_3[5][6];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_4[17][3];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_5[6][8];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_6[7][7];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_7[1][4];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_8[3][5];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_9[1][9];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_10[4][11];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_11[1][13];




static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_1[25][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__float_regs_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__float_regs_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "missing higher-order inst"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__float_regs_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for variable"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__float_regs_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__float_regs_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the generated code in this grade."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__float_regs_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Please provide the higher-order inst to ensure correctness"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__float_regs_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__float_regs_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(2, &transform_hlds__float_regs_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "reg_wrapper")) },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_3[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_4[17][3] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__float_regs__match_arg_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__float_regs__match_arg_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[3])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_5[6][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
  /* row   3 */
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
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_6[7][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row   6 */
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

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_7[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__float_regs__make_generic_type_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_8[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_10[4][11] = {
  /* row   0 */
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
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
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
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
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
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
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
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_11[1][13] = {
  /* row   0 */
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
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_PseudoTypeInfo) (&transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0) }
};

static MR_bool MR_CALL 
transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1504__1_4_p_0(
  MR_Word InstMap0_7,
  MR_Word NonLocals_8,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24)
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

static void MR_CALL 
transform_hlds__float_regs__make_reg_r_headvars_5_p_0(
  MR_Word VarTable_6,
  MR_Word Var_7,
  MR_Word RegType_8,
  MR_Word STATE_VARIABLE_RegR_HeadVars_0_11,
  MR_Word * STATE_VARIABLE_RegR_HeadVars_12)
{
  MR_bool succeeded;

  switch (RegType_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_RegR_HeadVars_12 = STATE_VARIABLE_RegR_HeadVars_0_11;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Entry_10;
        MR_Word Var_13;
        MR_Word Var_17;

        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_6, Var_7, &Entry_10);
        Var_13 = ((MR_Word) ((MR_hl_field(0, Entry_10, (MR_Integer) 1))));
        Var_17 = parse_tree__builtin_lib_types__float_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_13, Var_17);
        if (succeeded)
          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7, STATE_VARIABLE_RegR_HeadVars_0_11, STATE_VARIABLE_RegR_HeadVars_12);
        else
          *STATE_VARIABLE_RegR_HeadVars_12 = STATE_VARIABLE_RegR_HeadVars_0_11;
      }
      break;
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
  MR_Word MainConsId_15 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 0))));
  MR_Word OtherConsIds_16 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 1))));
  MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 2))));
  MR_Word Goal_18;

  transform_hlds__float_regs__fix_branching_goal_8_p_0(VarsExpectInsts_9, Goal0_17, GoalInstMap0_11, &Goal_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_18));
  }
}

static void MR_CALL 
transform_hlds__float_regs__set_foreign_arg_var_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_ForeignArg_0_6,
  MR_Word * STATE_VARIABLE_ForeignArg_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 3))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ForeignArg_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_11));
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
  MR_bool succeeded;
  MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 0))));
  MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 1))));
  MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_14, (MR_Integer) 2))));
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
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_25));
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

static void MR_CALL 
transform_hlds__float_regs__unify_mode_set_rhs_final_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ArgInst_6,
  MR_Word UnifyMode0_7,
  MR_Word * UnifyMode_8)
{
  MR_bool succeeded;
  MR_Word LI_9 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_7, (MR_Integer) 0))));
  MR_Word LF_10 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_7, (MR_Integer) 1))));
  MR_Word RI_11 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_7, (MR_Integer) 2))));
  MR_Word RF_12 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_7, (MR_Integer) 3))));

  succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_5, RI_11);
  if (succeeded)
    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_5, RF_12);
  if (succeeded)
  {
    MR_Word Uniq_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;

    succeeded = ((MR_tag((MR_Word) ArgInst_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      Uniq_13 = ((MR_Unsigned) ((MR_hl_field(1, ArgInst_6, (MR_Integer) 0))) & (MR_Integer) 7);
      Var_15 = ((MR_Word) ((MR_hl_field(1, ArgInst_6, (MR_Integer) 1))));
      succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) RF_12)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_17 = ((MR_Unsigned) ((MR_hl_field(1, RF_12, (MR_Integer) 0))) & (MR_Integer) 7);
          Var_16 = ((MR_Word) ((MR_hl_field(1, RF_12, (MR_Integer) 1))));
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
        MR_hl_field(0, base, 0) = ((MR_Box) (LI_9));
        MR_hl_field(0, base, 1) = ((MR_Box) (LF_10));
        MR_hl_field(0, base, 2) = ((MR_Box) (RI_11));
        MR_hl_field(0, base, 3) = ((MR_Box) (ArgInst_6));
      }
  }
  else
    *UnifyMode_8 = UnifyMode0_7;
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_functor_arg_4_p_0(
  MR_Word InstMap_5,
  MR_Word Var_6,
  MR_Word ArgInst0_7,
  MR_Word * ArgInst_8)
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

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ArgInst_8;

  transform_hlds__float_regs__rebuild_cell_bound_functor_arg_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_ArgInst_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_ArgInst_8));
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_functor_5_p_0(
  MR_Word InstMap_6,
  MR_Word ConsId_7,
  MR_Word Args_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
{
  MR_bool succeeded;
  MR_Word BoundConsId_11 = ((MR_Word) ((MR_hl_field(0, Inst0_9, (MR_Integer) 0))));
  MR_Word ArgInsts0_12 = ((MR_Word) ((MR_hl_field(0, Inst0_9, (MR_Integer) 1))));

  succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(ConsId_7, BoundConsId_11);
  if (succeeded)
  {
    MR_Word ArgInsts_13;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[6]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__float_regs__rebuild_cell_bound_functor_5_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (InstMap_6));
    }
    mercury__list__map_corresponding_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_14, Args_8, ArgInsts0_12, &ArgInsts_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Inst_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (BoundConsId_11));
      MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts_13));
    }
  }
  else
    *Inst_10 = Inst0_9;
}

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_6;
  MR_Word conv0_STATE_VARIABLE_TVarSet_14;

  transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Type_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TVarSet_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TVarSet_14));
}

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(
  MR_Word Type0_5,
  MR_Word * Type_6,
  MR_Word STATE_VARIABLE_TVarSet_0_13,
  MR_Word * STATE_VARIABLE_TVarSet_14)
{
  MR_bool succeeded;
  MR_Word Purity_8;
  MR_Word PredOrFunc_9;
  MR_Word ArgTypes0_10;

  succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type0_5, &Purity_8, &PredOrFunc_9, &ArgTypes0_10);
  if (succeeded)
  {
    MR_Word ArgTypes_11;
    MR_Box conv2_STATE_VARIABLE_TVarSet_14;

    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[2]), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[16]), ArgTypes0_10, &ArgTypes_11, ((MR_Box) (STATE_VARIABLE_TVarSet_0_13)), &conv2_STATE_VARIABLE_TVarSet_14);
    *STATE_VARIABLE_TVarSet_14 = ((MR_Word) (conv2_STATE_VARIABLE_TVarSet_14));
    parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_8, PredOrFunc_9, ArgTypes_11, Type_6);
  }
  else
  {
    MR_Word TVar_12;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVar_12, STATE_VARIABLE_TVarSet_0_13, STATE_VARIABLE_TVarSet_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Type_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TVar_12));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word PredInfo0_11;
  MR_Word ProcInfo0_12;
  MR_Word ProcInfo_13;
  MR_Word PredInfo1_14;
  MR_Word PredInfo_15;
  MR_Word STATE_VARIABLE_ModuleInfo_20_20;
  MR_Word TypeVarSet0_21;
  MR_Word HeadVars_22;
  MR_Word VarTable0_23;
  MR_Word ArgModes_24;
  MR_Word Goal0_25;
  MR_Word InstMap0_26;
  MR_Word RttiVarMaps0_27;
  MR_Word InstVarSet0_28;
  MR_Word HasParallelConj_29;
  MR_Word Info0_30;
  MR_Word Goal1_31;
  MR_Word Info1_32;
  MR_Word VarTable1_33;
  MR_Word TypeVarSet_34;
  MR_Word RttiVarMaps1_35;
  MR_Word MustRecomputeNonLocals_36;
  MR_Word Goal2_38;
  MR_Word VarTable_39;
  MR_Word RttiVarMaps_40;
  MR_Word Goal_41;
  MR_Word STATE_VARIABLE_ModuleInfo_43_42;
  MR_Word STATE_VARIABLE_ProcInfo_47_45;
  MR_Word STATE_VARIABLE_ProcInfo_48_46;
  MR_Word STATE_VARIABLE_ProcInfo_49_47;
  MR_Word STATE_VARIABLE_ProcInfo_50_48;
  MR_Word Goal1_49;
  MR_Word InstMap1_50;
  MR_Word ModuleInfo_51;
  MR_Word FinalInsts_52;
  MR_Word VarsExpectInsts_53;
  MR_Word STATE_VARIABLE_Info_26_54;
  MR_Word STATE_VARIABLE_Specs_27_55;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredId_7, &PredInfo0_11);
  hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo0_11, ProcId_8, &ProcInfo0_12);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_11, &TypeVarSet0_21);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_12, &HeadVars_22);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_12, &VarTable0_23);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_12, &ArgModes_24);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_12, &Goal0_25);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, ProcInfo0_12, &InstMap0_26);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_12, &RttiVarMaps0_27);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo0_12, &InstVarSet0_28);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo0_12, &HasParallelConj_29);
  transform_hlds__lambda__init_lambda_info_8_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredInfo0_11, TypeVarSet0_21, InstVarSet0_28, VarTable0_23, RttiVarMaps0_27, HasParallelConj_29, &Info0_30);
  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_26);
  if (succeeded)
    transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(Goal0_25, &Goal1_49, InstMap0_26, &InstMap1_50, Info0_30, &STATE_VARIABLE_Info_26_54, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_27_55);
  else
  {
    Goal1_49 = Goal0_25;
    STATE_VARIABLE_Specs_27_55 = STATE_VARIABLE_Specs_0_18;
    STATE_VARIABLE_Info_26_54 = Info0_30;
    InstMap1_50 = InstMap0_26;
  }
  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_26_54, &ModuleInfo_51);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_51, ArgModes_24, &FinalInsts_52);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), HeadVars_22, FinalInsts_52, &VarsExpectInsts_53);
  transform_hlds__float_regs__fix_branching_goal_8_p_0(VarsExpectInsts_53, Goal1_49, InstMap1_50, &Goal1_31, STATE_VARIABLE_Info_26_54, &Info1_32, STATE_VARIABLE_Specs_27_55, STATE_VARIABLE_Specs_19);
  transform_hlds__lambda__lambda_info_get_var_table_2_p_0(Info1_32, &VarTable1_33);
  transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(Info1_32, &TypeVarSet_34);
  transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(Info1_32, &RttiVarMaps1_35);
  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(Info1_32, &STATE_VARIABLE_ModuleInfo_43_42);
  transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(Info1_32, &MustRecomputeNonLocals_36);
  switch (MustRecomputeNonLocals_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word _Warnings_37;

        hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 1, HeadVars_22, &_Warnings_37, Goal1_31, &Goal2_38, VarTable1_33, &VarTable_39, RttiVarMaps1_35, &RttiVarMaps_40);
      }
      break;
    case (MR_Integer) 0:
      {
        Goal2_38 = Goal1_31;
        VarTable_39 = VarTable1_33;
        RttiVarMaps_40 = RttiVarMaps1_35;
      }
      break;
  }
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 1, VarTable_39, InstVarSet0_28, InstMap0_26, Goal2_38, &Goal_41, STATE_VARIABLE_ModuleInfo_43_42, &STATE_VARIABLE_ModuleInfo_20_20);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_41, ProcInfo0_12, &STATE_VARIABLE_ProcInfo_47_45);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_39, STATE_VARIABLE_ProcInfo_47_45, &STATE_VARIABLE_ProcInfo_48_46);
  hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_40, STATE_VARIABLE_ProcInfo_48_46, &STATE_VARIABLE_ProcInfo_49_47);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_22, STATE_VARIABLE_ProcInfo_49_47, &STATE_VARIABLE_ProcInfo_50_48);
  hlds__hlds_proc_util__ensure_all_headvars_are_named_2_p_0(STATE_VARIABLE_ProcInfo_50_48, &ProcInfo_13);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_34, PredInfo0_11, &PredInfo1_14);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_8, ProcInfo_13, PredInfo1_14, &PredInfo_15);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, PredInfo_15, STATE_VARIABLE_ModuleInfo_20_20, STATE_VARIABLE_ModuleInfo_17);
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

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_24;

  succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1504__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
    succeeded = MR_TRUE;
  }
  return succeeded;
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
  MR_bool succeeded;
  MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
  MR_Word Cond0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
  MR_Word Then0_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
  MR_Word Else0_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 4))));
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
  MR_Word InstMapDeltas_47;
  MR_Word Var_51;

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
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (InstMapElse_26));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (InstMapThen_24));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[5]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (InstMap0_13));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) (NonLocals_10));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Var_51, Var_41, &InstMapDeltas_47);
  if ((InstMapDeltas_47 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&CommonDelta_27);
    STATE_VARIABLE_Info_42_42 = STATE_VARIABLE_Info_39_39;
  }
  else
  {
    MR_Word VarTable_48;
    MR_Word ModuleInfo0_49;
    MR_Word ModuleInfo_50;

    transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_39_39, &VarTable_48);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_39_39, &ModuleInfo0_49);
    hlds__instmap__merge_instmap_deltas_7_p_0(VarTable_48, NonLocals_10, InstMap0_13, InstMapDeltas_47, &CommonDelta_27, ModuleInfo0_49, &ModuleInfo_50);
    transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_50, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_42_42);
  }
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
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_12 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Vars_17));
    MR_hl_field(3, base, 2) = ((MR_Box) (Cond_21));
    MR_hl_field(3, base, 3) = ((MR_Box) (Then_29));
    MR_hl_field(3, base, 4) = ((MR_Box) (Else_30));
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
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_InstMap_0_74,
  MR_Word * STATE_VARIABLE_InstMap_75,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_30 = (MR_Word) ((MR_Word) (GoalExpr0_14));
        MR_Word SubGoal_31;
        MR_Word GoalExpr_134;
        MR_Word Var_32;

        transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(SubGoal0_30, &SubGoal_31, STATE_VARIABLE_InstMap_0_74, &Var_32, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
        GoalExpr_134 = (MR_Word) ((MR_Word) (SubGoal_31));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_134));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
        }
        transform_hlds__float_regs__copy_any_unreachability_from_goal_instmap_delta_3_p_0(*Goal_10, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75);
      }
      break;
    case (MR_Integer) 1:
      transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(GoalExpr0_14, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_39 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_14, (MR_Integer) 0))));
        MR_Integer ProcId_40 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_14, (MR_Integer) 1))));
        MR_Word Args0_41 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_14, (MR_Integer) 2))));
        MR_Word Builtin_42 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_14, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word MaybeUnifyContext_43 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_14, (MR_Integer) 4))));
        MR_Word SymName_44 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_14, (MR_Integer) 5))));
        MR_Word Context_45;
        MR_Word Args_46;
        MR_Word WrapGoals_47;
        MR_Word MissingProc_48;
        MR_Word STATE_VARIABLE_Info_108_108;

        Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_15);
        transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(PredId_39, ProcId_40, Args0_41, &Args_46, &WrapGoals_47, &MissingProc_48, STATE_VARIABLE_InstMap_0_74, Context_45, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_108_108, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
        switch (MissingProc_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GoalExpr1_49;

              {
                GoalExpr1_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, GoalExpr1_49, 0) = ((MR_Box) (PredId_39));
                MR_hl_field(2, GoalExpr1_49, 1) = ((MR_Box) (ProcId_40));
                MR_hl_field(2, GoalExpr1_49, 2) = ((MR_Box) (Args_46));
                MR_hl_field(2, GoalExpr1_49, 3) = (MR_Box) ((MR_Unsigned) (Builtin_42));
                MR_hl_field(2, GoalExpr1_49, 4) = ((MR_Box) (MaybeUnifyContext_43));
                MR_hl_field(2, GoalExpr1_49, 5) = ((MR_Box) (SymName_44));
              }
              transform_hlds__float_regs__finish_call_goal_8_p_0(WrapGoals_47, GoalExpr1_49, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75, STATE_VARIABLE_Info_108_108, STATE_VARIABLE_Info_77);
            }
            break;
          case (MR_Integer) 1:
            {
              *Goal_10 = Goal0_9;
              *STATE_VARIABLE_InstMap_75 = STATE_VARIABLE_InstMap_0_74;
              *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_108_108;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
            MR_Word Modes0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 3))));
            MR_Word Determinism_53 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 5))) & (MR_Integer) 7);
            MR_Word Args0_158 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) GenericCall_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CallVar_54 = ((MR_Word) ((MR_hl_field(0, GenericCall_50, (MR_Integer) 0))));
                  MR_Word Modes_59;
                  MR_Word ArgsRegs_60;
                  MR_Word STATE_VARIABLE_Info_112_112;
                  MR_Word Var_114;
                  MR_Word Context_145;
                  MR_Word Args_146;
                  MR_Word WrapGoals_147;
                  MR_Word GoalExpr1_148;

                  Context_145 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_15);
                  transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(CallVar_54, Args0_158, &Args_146, &Modes_59, &ArgsRegs_60, &WrapGoals_147, STATE_VARIABLE_InstMap_0_74, Context_145, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
                  {
                    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_114, 0) = ((MR_Box) (ArgsRegs_60));
                  }
                  {
                    GoalExpr1_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr1_148, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, GoalExpr1_148, 1) = ((MR_Box) (GenericCall_50));
                    MR_hl_field(3, GoalExpr1_148, 2) = ((MR_Box) (Args_146));
                    MR_hl_field(3, GoalExpr1_148, 3) = ((MR_Box) (Modes_59));
                    MR_hl_field(3, GoalExpr1_148, 4) = ((MR_Box) (Var_114));
                    MR_hl_field(3, GoalExpr1_148, 5) = (MR_Box) ((MR_Unsigned) (Determinism_53));
                  }
                  transform_hlds__float_regs__finish_call_goal_8_p_0(WrapGoals_147, GoalExpr1_148, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75, STATE_VARIABLE_Info_112_112, STATE_VARIABLE_Info_77);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MethodNum_62 = ((MR_Word) ((MR_hl_field(1, GenericCall_50, (MR_Integer) 1))));
                  MR_Word ClassId_63 = ((MR_Word) ((MR_hl_field(1, GenericCall_50, (MR_Integer) 2))));
                  MR_Word STATE_VARIABLE_Info_117_117;
                  MR_Word Context_149;
                  MR_Word Args_150;
                  MR_Word WrapGoals_151;
                  MR_Word GoalExpr1_152;
                  MR_Word Modes_153;

                  Context_149 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_15);
                  transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(ClassId_63, MethodNum_62, Args0_158, &Args_150, Modes0_51, &Modes_153, &WrapGoals_151, STATE_VARIABLE_InstMap_0_74, Context_149, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_117_117, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
                  {
                    GoalExpr1_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr1_152, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, GoalExpr1_152, 1) = ((MR_Box) (GenericCall_50));
                    MR_hl_field(3, GoalExpr1_152, 2) = ((MR_Box) (Args_150));
                    MR_hl_field(3, GoalExpr1_152, 3) = ((MR_Box) (Modes_153));
                    MR_hl_field(3, GoalExpr1_152, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, GoalExpr1_152, 5) = (MR_Box) ((MR_Unsigned) (Determinism_53));
                  }
                  transform_hlds__float_regs__finish_call_goal_8_p_0(WrapGoals_151, GoalExpr1_152, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75, STATE_VARIABLE_Info_117_117, STATE_VARIABLE_Info_77);
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  *Goal_10 = Goal0_9;
                  hlds__goal_util__apply_goal_instmap_delta_3_p_0(*Goal_10, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75);
                  *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
                  *STATE_VARIABLE_Specs_79 = STATE_VARIABLE_Specs_0_78;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
            MR_Word ForeignArgs0_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 4))));
            MR_Word ExtraArgs_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 5))));
            MR_Word MaybeTraceRuntimeCond_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 6))));
            MR_Word PragmaImpl_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 7))));
            MR_Word ForeignArgs_72;
            MR_Word STATE_VARIABLE_Info_123_123;
            MR_Word PredId_163 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));
            MR_Integer ProcId_164 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 3))));
            MR_Word Context_165;
            MR_Word WrapGoals_166;
            MR_Word GoalExpr1_167;

            Context_165 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_15);
            transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(PredId_163, ProcId_164, ForeignArgs0_68, &ForeignArgs_72, &WrapGoals_166, STATE_VARIABLE_InstMap_0_74, Context_165, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_123_123, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
            {
              GoalExpr1_167 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr1_167, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, GoalExpr1_167, 1) = ((MR_Box) (Attributes_67));
              MR_hl_field(3, GoalExpr1_167, 2) = ((MR_Box) (PredId_163));
              MR_hl_field(3, GoalExpr1_167, 3) = ((MR_Box) (ProcId_164));
              MR_hl_field(3, GoalExpr1_167, 4) = ((MR_Box) (ForeignArgs_72));
              MR_hl_field(3, GoalExpr1_167, 5) = ((MR_Box) (ExtraArgs_69));
              MR_hl_field(3, GoalExpr1_167, 6) = ((MR_Box) (MaybeTraceRuntimeCond_70));
              MR_hl_field(3, GoalExpr1_167, 7) = ((MR_Box) (PragmaImpl_71));
            }
            transform_hlds__float_regs__finish_call_goal_8_p_0(WrapGoals_166, GoalExpr1_167, GoalInfo0_15, Goal_10, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75, STATE_VARIABLE_Info_123_123, STATE_VARIABLE_Info_77);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_21 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));
            MR_Word Goals_23;
            MR_Word GoalExpr_24;
            MR_Word STATE_VARIABLE_InstMap_83_83;

            switch (ConjType_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Box conv6_STATE_VARIABLE_InstMap_83_83;
                  MR_Box conv5_STATE_VARIABLE_Info_77;
                  MR_Box conv4_STATE_VARIABLE_Specs_79;

                  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[15]), Goals0_22, &Goals_23, ((MR_Box) (STATE_VARIABLE_InstMap_0_74)), &conv6_STATE_VARIABLE_InstMap_83_83, ((MR_Box) (STATE_VARIABLE_Info_0_76)), &conv5_STATE_VARIABLE_Info_77, ((MR_Box) (STATE_VARIABLE_Specs_0_78)), &conv4_STATE_VARIABLE_Specs_79);
                  STATE_VARIABLE_InstMap_83_83 = ((MR_Word) (conv6_STATE_VARIABLE_InstMap_83_83));
                  *STATE_VARIABLE_Info_77 = ((MR_Word) (conv5_STATE_VARIABLE_Info_77));
                  *STATE_VARIABLE_Specs_79 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_79));
                }
                break;
              case (MR_Integer) 0:
                transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(Goals0_22, &Goals_23, STATE_VARIABLE_InstMap_0_74, &STATE_VARIABLE_InstMap_83_83, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
                break;
            }
            {
              GoalExpr_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_24, 1) = (MR_Box) ((MR_Unsigned) (ConjType_21));
              MR_hl_field(3, GoalExpr_24, 2) = ((MR_Box) (Goals_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_24));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
            }
            transform_hlds__float_regs__copy_any_unreachability_from_goal_instmap_delta_3_p_0(*Goal_10, STATE_VARIABLE_InstMap_83_83, STATE_VARIABLE_InstMap_75);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word NonLocals_25;
            MR_Word Goals0_129 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
            MR_Word Goals_130;
            MR_Word GoalExpr_131;

            NonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
            transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(Goals0_129, &Goals_130, NonLocals_25, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
            {
              GoalExpr_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_131, 1) = ((MR_Box) (Goals_130));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_131));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
            MR_Word CanFail_27 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 3))));
            MR_Word Cases_29;
            MR_Word GoalExpr_132;
            MR_Word NonLocals_133;

            NonLocals_133 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
            transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(Var_26, Cases0_28, &Cases_29, NonLocals_133, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
            {
              GoalExpr_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_132, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_132, 1) = ((MR_Box) (Var_26));
              MR_hl_field(3, GoalExpr_132, 2) = (MR_Box) ((MR_Unsigned) (CanFail_27));
              MR_hl_field(3, GoalExpr_132, 3) = ((MR_Box) (Cases_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_132));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
            MR_Word SubGoal0_141 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));
            MR_Word Var_100;

            succeeded = ((((MR_tag((MR_Word) Reason_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_33, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_100 = ((MR_Unsigned) ((MR_hl_field(3, Reason_33, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_100 == (MR_Integer) 1);
            }
            if (succeeded)
            {
              *Goal_10 = Goal0_9;
              hlds__goal_util__apply_goal_instmap_delta_3_p_0(*Goal_10, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75);
              *STATE_VARIABLE_Specs_79 = STATE_VARIABLE_Specs_0_78;
              *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_0_76;
            }
            else
            {
              MR_Word GoalExpr_136;
              MR_Word SubGoal_137;

              transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(SubGoal0_141, &SubGoal_137, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
              {
                GoalExpr_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_136, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_136, 1) = ((MR_Box) (Reason_33));
                MR_hl_field(3, GoalExpr_136, 2) = ((MR_Box) (SubGoal_137));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_136));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word GoalExpr_143;
            MR_Word NonLocals_144;

            NonLocals_144 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
            transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(NonLocals_144, GoalExpr0_14, &GoalExpr_143, STATE_VARIABLE_InstMap_0_74, STATE_VARIABLE_InstMap_75, STATE_VARIABLE_Info_0_76, STATE_VARIABLE_Info_77, STATE_VARIABLE_Specs_0_78, STATE_VARIABLE_Specs_79);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_143));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
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

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ForeignArg_7;

  transform_hlds__float_regs__set_foreign_arg_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ForeignArg_7);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ForeignArg_7));
}

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_bool succeeded;
  MR_Word Vars0_21;
  MR_Word Vars_22;
  MR_Word ModuleInfo_34;
  MR_Word PredInfo_35;
  MR_Word ProcTable_36;
  MR_Word ProcInfo_37;
  MR_Box conv1_ProcInfo_37;

  Vars0_21 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[13]), ForeignArgs0_14);
  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_24, &ModuleInfo_34);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_34, PredId_12, &PredInfo_35);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_35, &ProcTable_36);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_36, ((MR_Box) (ProcId_13)), &conv1_ProcInfo_37);
  if (succeeded)
  {
    ProcInfo_37 = ((MR_Word) (conv1_ProcInfo_37));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ArgTypes_38;
    MR_Word ArgModes_39;
    MR_Word ModuleInfo_48;
    MR_Word InitialInsts_49;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_35, &ArgTypes_38);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_37, &ArgModes_39);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_24, &ModuleInfo_48);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_48, ArgModes_39, &InitialInsts_49);
    transform_hlds__float_regs__match_args_12_p_0(InstMap0_17, Context_18, ArgTypes_38, InitialInsts_49, Vars0_21, &Vars_22, (MR_Word) ((MR_Unsigned) 0U), WrapGoals_16, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  }
  else
  {
    Vars_22 = Vars0_21;
    *WrapGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
  }
  mercury__list__map_corresponding_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[14]), Vars_22, ForeignArgs0_14, ForeignArgs_15);
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(
  MR_Word ClassId_14,
  MR_Word MethodProcNum_15,
  MR_Word Vars0_16,
  MR_Word * Vars_17,
  MR_Word Modes0_18,
  MR_Word * Modes_19,
  MR_Word * WrapGoals_20,
  MR_Word InstMap0_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_25;
  MR_Word Classes_26;
  MR_Word ClassDefn_27;
  MR_Word MethodInfos_28;
  MR_Word MethodInfo_29;
  MR_Word PredProcId_30;
  MR_Word PredInfo_31;
  MR_Word ProcInfo_32;
  MR_Word ArgTypes_33;
  MR_Word ProcArgModes_34;
  MR_Word EndTypes_35;
  MR_Integer N_36;
  MR_Word StartVars_37;
  MR_Word EndVars0_38;
  MR_Word StartModes_39;
  MR_Word EndProcArgModes_42;
  MR_Word EndVars_43;
  MR_Integer Len_66;
  MR_Integer StartLen_67;
  MR_Integer Len_71;
  MR_Integer StartLen_72;
  MR_Integer Len_76;
  MR_Integer StartLen_77;
  MR_Word ModuleInfo_81;
  MR_Word InitialInsts_82;
  MR_Box conv0_ClassDefn_27;

  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_44, &ModuleInfo_25);
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_25, &Classes_26);
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes_26, ((MR_Box) (ClassId_14)), &conv0_ClassDefn_27);
  ClassDefn_27 = ((MR_Word) (conv0_ClassDefn_27));
  MethodInfos_28 = ((MR_Word) ((MR_hl_field(0, ClassDefn_27, (MR_Integer) 8))));
  MethodInfo_29 = hlds__hlds_class__lookup_method_proc_2_f_0(MethodInfos_28, MethodProcNum_15);
  PredProcId_30 = ((MR_Word) ((MR_hl_field(0, MethodInfo_29, (MR_Integer) 3))));
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_25, PredProcId_30, &PredInfo_31, &ProcInfo_32);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_31, &ArgTypes_33);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_32, &ProcArgModes_34);
  transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(ArgTypes_33, &EndTypes_35);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EndTypes_35, &N_36);
  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), Vars0_16, &Len_66);
  StartLen_67 = (MR_Integer) ((MR_Unsigned) Len_66 - (MR_Unsigned) N_36);
  succeeded = (StartLen_67 == (MR_Integer) 0);
  if (succeeded)
  {
    StartVars_37 = (MR_Word) ((MR_Unsigned) 0U);
    EndVars0_38 = Vars0_16;
  }
  else
  {
    succeeded = (StartLen_67 > (MR_Integer) 0);
    if (succeeded)
      mercury__list__det_split_list_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), StartLen_67, Vars0_16, &StartVars_37, &EndVars0_38);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
        return;
      }
  }
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_18, &Len_71);
  StartLen_72 = (MR_Integer) ((MR_Unsigned) Len_71 - (MR_Unsigned) N_36);
  succeeded = (StartLen_72 == (MR_Integer) 0);
  if (succeeded)
    StartModes_39 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    succeeded = (StartLen_72 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_84;

      mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StartLen_72, Modes0_18, &StartModes_39, &Var_84);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
        return;
      }
  }
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ProcArgModes_34, &Len_76);
  StartLen_77 = (MR_Integer) ((MR_Unsigned) Len_76 - (MR_Unsigned) N_36);
  succeeded = (StartLen_77 == (MR_Integer) 0);
  if (succeeded)
    EndProcArgModes_42 = ProcArgModes_34;
  else
  {
    succeeded = (StartLen_77 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_86;

      mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StartLen_77, ProcArgModes_34, &Var_86, &EndProcArgModes_42);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
        return;
      }
  }
  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_44, &ModuleInfo_81);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_81, EndProcArgModes_42, &InitialInsts_82);
  transform_hlds__float_regs__match_args_12_p_0(InstMap0_21, Context_22, EndTypes_35, InitialInsts_82, EndVars0_38, &EndVars_43, (MR_Word) ((MR_Unsigned) 0U), WrapGoals_20, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
  *Vars_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), StartVars_37, EndVars_43);
  *Modes_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StartModes_39, EndProcArgModes_42);
}

static void MR_CALL 
transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Type_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypesTail_6;

    transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(Types0_4, &TypesTail_6);
    succeeded = parse_tree__builtin_lib_types__type_is_typeclass_info_type_1_p_0(Type_3);
    if (!(succeeded))
      succeeded = parse_tree__builtin_lib_types__type_is_type_info_or_ctor_type_1_p_0(Type_3);
    if (succeeded)
      *HeadVar__2_2 = TypesTail_6;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Type_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (TypesTail_6));
      }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RegType_4;

  transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_RegType_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_RegType_4));
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
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_23;
  MR_Word VarTable_24;
  MR_Word CallVarType_25;
  MR_Word CallVarInst_26;
  MR_Word PredOrFunc_28;
  MR_Word ArgTypes_29;
  MR_Integer Arity_30;
  MR_Word CallVarPredInstInfo_31;
  MR_Word MaybeArgRegs_46;
  MR_Word ModuleInfo_51;
  MR_Word InitialInsts_52;
  MR_Word Var_27;
  MR_Word PredInstInfo0_40;
  MR_Word PredInstInfo0_43;

  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_35, &ModuleInfo_23);
  transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_35, &VarTable_24);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_24, CallVar_13, &CallVarType_25);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_19, CallVar_13, &CallVarInst_26);
  parse_tree__prog_type_test__type_is_higher_order_details_det_4_p_0(CallVarType_25, &Var_27, &PredOrFunc_28, &ArgTypes_29);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_29, &Arity_30);
  succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(ModuleInfo_23, CallVarInst_26, &PredInstInfo0_43);
  if (succeeded)
  {
    PredInstInfo0_40 = PredInstInfo0_43;
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (PredOrFunc_28 == (MR_Integer) 1);
    if (succeeded)
    {
      PredInstInfo0_40 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_30);
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    CallVarPredInstInfo_31 = PredInstInfo0_40;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.lookup_pred_inst_info\'/5", (MR_String) "no higher order inst");
      return;
    }
  *ArgModes_16 = ((MR_Word) ((MR_hl_field(0, CallVarPredInstInfo_31, (MR_Integer) 1))));
  MaybeArgRegs_46 = ((MR_Word) ((MR_hl_field(0, CallVarPredInstInfo_31, (MR_Integer) 2))));
  if ((MaybeArgRegs_46 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[12]), ArgTypes_29, ArgRegs_17);
  else
    *ArgRegs_17 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_46, (MR_Integer) 0))));
  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_35, &ModuleInfo_51);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_51, *ArgModes_16, &InitialInsts_52);
  transform_hlds__float_regs__match_args_12_p_0(InstMap0_19, Context_20, ArgTypes_29, InitialInsts_52, Vars0_14, Vars_15, (MR_Word) ((MR_Unsigned) 0U), WrapGoals_18, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36, STATE_VARIABLE_Specs_0_37, STATE_VARIABLE_Specs_38);
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
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_23;
  MR_Word PredInfo_24;
  MR_Word ProcTable_25;
  MR_Word ProcInfo_26;
  MR_Box conv0_ProcInfo_26;

  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_23);
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
    MR_Word ModuleInfo_44;
    MR_Word InitialInsts_45;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_24, &ArgTypes_27);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_26, &ArgModes_28);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_44);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_44, ArgModes_28, &InitialInsts_45);
    transform_hlds__float_regs__match_args_12_p_0(InstMap0_19, Context_20, ArgTypes_27, InitialInsts_45, Vars0_15, Vars_16, (MR_Word) ((MR_Unsigned) 0U), WrapGoals_17, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
    *MissingProc_18 = (MR_Integer) 0;
  }
  else
  {
    *Vars_16 = Vars0_15;
    *WrapGoals_17 = (MR_Word) ((MR_Unsigned) 0U);
    *MissingProc_18 = (MR_Integer) 1;
    *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
    *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
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
  MR_bool succeeded;

  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(GoalInstMap0_11);
  if (succeeded)
  {
    MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 1))));
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
      MR_Word Tail_21 = ((MR_Word) ((MR_hl_field(1, VarsExpectInsts_12, (MR_Integer) 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, VarsExpectInsts_12, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Renaming_31_31;
      MR_Word STATE_VARIABLE_WrapGoals_32_32;
      MR_Word STATE_VARIABLE_Info_33_33;
      MR_Word STATE_VARIABLE_Specs_34_34;
      MR_Word ModuleInfo_36;
      MR_Word VarTable_37;
      MR_Word next_value_of_VarsExpectInsts_12;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_22;
      MR_Word next_value_of_STATE_VARIABLE_WrapGoals_0_24;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_26;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_28;

      Var_19 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
      Inst_20 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_26, &ModuleInfo_36);
      transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_26, &VarTable_37);
      succeeded = check_hlds__inst_test__inst_is_free_2_p_0(ModuleInfo_36, Inst_20);
      if (succeeded)
      {
        STATE_VARIABLE_Specs_34_34 = STATE_VARIABLE_Specs_0_28;
        STATE_VARIABLE_Info_33_33 = STATE_VARIABLE_Info_0_26;
        STATE_VARIABLE_WrapGoals_32_32 = STATE_VARIABLE_WrapGoals_0_24;
        STATE_VARIABLE_Renaming_31_31 = STATE_VARIABLE_Renaming_0_22;
      }
      else
      {
        MR_Word WrapGoals_35;
        MR_Word VarType_38;
        MR_Word SubstVar_39;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_37, Var_19, &VarType_38);
        transform_hlds__float_regs__match_arg_12_p_0(InstMap0_13, Context_14, VarType_38, Inst_20, Var_19, &SubstVar_39, (MR_Word) ((MR_Unsigned) 0U), &WrapGoals_35, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_34_34);
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), ((MR_Box) (Var_19)), ((MR_Box) (SubstVar_39)));
        if (succeeded)
        {
          STATE_VARIABLE_WrapGoals_32_32 = STATE_VARIABLE_WrapGoals_0_24;
          STATE_VARIABLE_Renaming_31_31 = STATE_VARIABLE_Renaming_0_22;
        }
        else
        {
          MR_Word STATE_VARIABLE_Renaming_36_41;

          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), ((MR_Box) (Var_19)), ((MR_Box) (SubstVar_39)), STATE_VARIABLE_Renaming_0_22, &STATE_VARIABLE_Renaming_36_41);
          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), ((MR_Box) (SubstVar_39)), ((MR_Box) (Var_19)), STATE_VARIABLE_Renaming_36_41, &STATE_VARIABLE_Renaming_31_31);
          mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WrapGoals_35, STATE_VARIABLE_WrapGoals_0_24, &STATE_VARIABLE_WrapGoals_32_32);
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
  MR_Box closure = closure_arg;
  MR_Word conv9_Case_12;
  MR_Word conv8_STATE_VARIABLE_Info_20;
  MR_Word conv7_STATE_VARIABLE_Specs_22;

  transform_hlds__float_regs__fix_case_goal_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Case_12, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Info_20, ((MR_Word) (wrapper_arg_6)), &conv7_STATE_VARIABLE_Specs_22);
  *wrapper_arg_3 = ((MR_Box) (conv9_Case_12));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Info_20));
  *wrapper_arg_7 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_22));
}

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__2_24;

  succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1504__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_LambdaHeadVar__2_24);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_24));
    succeeded = MR_TRUE;
  }
  return succeeded;
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
  MR_Box closure = closure_arg;
  MR_Word conv3_Case_15;
  MR_Word conv2_InstMap_16;
  MR_Word conv1_STATE_VARIABLE_Info_27;
  MR_Word conv0_STATE_VARIABLE_Specs_29;

  transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_Case_15, &conv2_InstMap_16, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_29);
  *wrapper_arg_2 = ((MR_Box) (conv3_Case_15));
  *wrapper_arg_3 = ((MR_Box) (conv2_InstMap_16));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_29));
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
  MR_bool succeeded;
  MR_Word VarTable_19;
  MR_Word Type_20;
  MR_Word Cases1_21;
  MR_Word InstMaps1_22;
  MR_Word CommonDelta_23;
  MR_Word Var_29;
  MR_Word STATE_VARIABLE_Info_30_30;
  MR_Word STATE_VARIABLE_Specs_31_31;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word InstMapDeltas_45;
  MR_Word Var_49;
  MR_Box conv5_STATE_VARIABLE_Info_30_30;
  MR_Box conv4_STATE_VARIABLE_Specs_31_31;

  transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_25, &VarTable_19);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_19, Var_11, &Type_20);
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_11[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (Type_20));
    MR_hl_field(0, Var_29, 5) = ((MR_Box) (InstMap0_15));
  }
  mercury__list__map2_foldl2_8_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), Var_29, Cases0_12, &Cases1_21, &InstMaps1_22, ((MR_Box) (STATE_VARIABLE_Info_0_25)), &conv5_STATE_VARIABLE_Info_30_30, ((MR_Box) (STATE_VARIABLE_Specs_0_27)), &conv4_STATE_VARIABLE_Specs_31_31);
  STATE_VARIABLE_Info_30_30 = ((MR_Word) (conv5_STATE_VARIABLE_Info_30_30));
  STATE_VARIABLE_Specs_31_31 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_31_31));
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[5]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (InstMap0_15));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (NonLocals_14));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Var_49, InstMaps1_22, &InstMapDeltas_45);
  if ((InstMapDeltas_45 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&CommonDelta_23);
    STATE_VARIABLE_Info_32_32 = STATE_VARIABLE_Info_30_30;
  }
  else
  {
    MR_Word VarTable_46;
    MR_Word ModuleInfo0_47;
    MR_Word ModuleInfo_48;

    transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_30_30, &VarTable_46);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_30_30, &ModuleInfo0_47);
    hlds__instmap__merge_instmap_deltas_7_p_0(VarTable_46, NonLocals_14, InstMap0_15, InstMapDeltas_45, &CommonDelta_23, ModuleInfo0_47, &ModuleInfo_48);
    transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_48, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_32_32);
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
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[2]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (VarsExpectInsts_24));
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
  MR_Box closure = closure_arg;
  MR_Word conv9_Goal_12;
  MR_Word conv8_STATE_VARIABLE_Info_24;
  MR_Word conv7_STATE_VARIABLE_Specs_26;

  transform_hlds__float_regs__fix_branching_goal_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Goal_12, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_Info_24, ((MR_Word) (wrapper_arg_6)), &conv7_STATE_VARIABLE_Specs_26);
  *wrapper_arg_3 = ((MR_Box) (conv9_Goal_12));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_Info_24));
  *wrapper_arg_7 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_26));
}

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__2_24;

  succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1504__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_LambdaHeadVar__2_24);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_24));
    succeeded = MR_TRUE;
  }
  return succeeded;
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
  MR_Box closure = closure_arg;
  MR_Word conv3_Goal_11;
  MR_Word conv2_InstMap_12;
  MR_Word conv1_STATE_VARIABLE_Info_16;
  MR_Word conv0_STATE_VARIABLE_Specs_18;

  transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Goal_11, &conv2_InstMap_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_16, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_18);
  *wrapper_arg_2 = ((MR_Box) (conv3_Goal_11));
  *wrapper_arg_3 = ((MR_Box) (conv2_InstMap_12));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_16));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_18));
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
  MR_bool succeeded;
  MR_Word Goals1_17;
  MR_Word InstMaps1_18;
  MR_Word CommonDelta_19;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word STATE_VARIABLE_Specs_27_27;
  MR_Word STATE_VARIABLE_Info_28_28;
  MR_Word InstMapDeltas_41;
  MR_Word Var_45;
  MR_Box conv5_STATE_VARIABLE_Info_26_26;
  MR_Box conv4_STATE_VARIABLE_Specs_27_27;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (InstMap0_13));
  }
  mercury__list__map2_foldl2_8_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), Var_25, Goals0_10, &Goals1_17, &InstMaps1_18, ((MR_Box) (STATE_VARIABLE_Info_0_21)), &conv5_STATE_VARIABLE_Info_26_26, ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv4_STATE_VARIABLE_Specs_27_27);
  STATE_VARIABLE_Info_26_26 = ((MR_Word) (conv5_STATE_VARIABLE_Info_26_26));
  STATE_VARIABLE_Specs_27_27 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_27_27));
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[5]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (InstMap0_13));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (NonLocals_12));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Var_45, InstMaps1_18, &InstMapDeltas_41);
  if ((InstMapDeltas_41 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&CommonDelta_19);
    STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_26_26;
  }
  else
  {
    MR_Word VarTable_42;
    MR_Word ModuleInfo0_43;
    MR_Word ModuleInfo_44;

    transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_26_26, &VarTable_42);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_26_26, &ModuleInfo0_43);
    hlds__instmap__merge_instmap_deltas_7_p_0(VarTable_42, NonLocals_12, InstMap0_13, InstMapDeltas_41, &CommonDelta_19, ModuleInfo0_43, &ModuleInfo_44);
    transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_44, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_28_28);
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
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[1]));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3));
      MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_29, 3) = ((MR_Box) (VarsExpectInsts_20));
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

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_UnifyMode_8;

  transform_hlds__float_regs__unify_mode_set_rhs_final_inst_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_UnifyMode_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_UnifyMode_8));
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__goal_util__apply_goal_instmap_delta_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(
  MR_Word GoalExpr0_10,
  MR_Word GoalInfo0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_InstMap_0_69,
  MR_Word * STATE_VARIABLE_InstMap_70,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74)
{
  MR_bool succeeded;
  MR_Word LHS_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, (MR_Integer) 0))));
  MR_Word RHS0_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, (MR_Integer) 1))));
  MR_Word Mode_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, (MR_Integer) 2))));
  MR_Word Unification0_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, (MR_Integer) 3))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_10, (MR_Integer) 4))));

  switch (MR_tag((MR_Word) Unification0_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CellVar_21 = ((MR_Word) ((MR_hl_field(0, Unification0_19, (MR_Integer) 0))));
        MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, Unification0_19, (MR_Integer) 1))));
        MR_Word Args0_23 = ((MR_Word) ((MR_hl_field(0, Unification0_19, (MR_Integer) 2))));
        MR_Word ArgUnifyModes0_24 = ((MR_Word) ((MR_hl_field(0, Unification0_19, (MR_Integer) 3))));
        MR_Word HowToConstruct_25 = ((MR_Word) ((MR_hl_field(0, Unification0_19, (MR_Integer) 4))));
        MR_Word IsUnique_26 = ((MR_Unsigned) ((MR_hl_field(0, Unification0_19, (MR_Integer) 5))) & (MR_Integer) 1);
        MR_Word SubInfo_27 = ((MR_Word) ((MR_hl_field(0, Unification0_19, (MR_Integer) 6))));
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
            IsExistConstruct_29 = ((MR_Unsigned) ((MR_hl_field(1, RHS0_17, (MR_Integer) 1))) & (MR_Integer) 1);
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
          MR_Word ModuleInfo_39;
          MR_Word GoalInfo_40;
          MR_Word Delta0_132;
          MR_Word CellInst0_133;

          transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_71, &ModuleInfo_39);
          Delta0_132 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_11);
          succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(Delta0_132, CellVar_21, &CellInst0_133);
          if (succeeded)
          {
            MR_Word CellInst_134;
            MR_Word Delta_135;

            transform_hlds__float_regs__rebuild_cell_inst_6_p_0(ModuleInfo_39, STATE_VARIABLE_InstMap_0_69, ConsId_22, Args0_23, CellInst0_133, &CellInst_134);
            hlds__instmap__instmap_delta_set_var_4_p_0(CellVar_21, CellInst_134, Delta0_132, &Delta_135);
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_135, GoalInfo0_11, &GoalInfo_40);
            hlds__instmap__apply_instmap_delta_3_p_0(Delta_135, STATE_VARIABLE_InstMap_0_69, STATE_VARIABLE_InstMap_70);
          }
          else
          {
            GoalInfo_40 = GoalInfo0_11;
            hlds__instmap__apply_instmap_delta_3_p_0(Delta0_132, STATE_VARIABLE_InstMap_0_69, STATE_VARIABLE_InstMap_70);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_10));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_40));
          }
          *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_0_71;
          *STATE_VARIABLE_Specs_74 = STATE_VARIABLE_Specs_0_73;
        }
        else
        {
          MR_Word GoalContext_43;
          MR_Word Args_44;
          MR_Word ArgUnifyModes_45;
          MR_Word MaybeWrappedGoals_46;

          GoalContext_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
          transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(CellVar_21, ConsId_22, Args0_23, &Args_44, ArgUnifyModes0_24, &ArgUnifyModes_45, &MaybeWrappedGoals_46, STATE_VARIABLE_InstMap_0_69, GoalContext_43, STATE_VARIABLE_Info_0_71, STATE_VARIABLE_Info_72, STATE_VARIABLE_Specs_0_73, STATE_VARIABLE_Specs_74);
          if ((MaybeWrappedGoals_46 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ModuleInfo_97;
            MR_Word GoalInfo_98;
            MR_Word Delta0_136;
            MR_Word CellInst0_137;

            transform_hlds__lambda__lambda_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_72, &ModuleInfo_97);
            Delta0_136 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_11);
            succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(Delta0_136, CellVar_21, &CellInst0_137);
            if (succeeded)
            {
              MR_Word CellInst_138;
              MR_Word Delta_139;

              transform_hlds__float_regs__rebuild_cell_inst_6_p_0(ModuleInfo_97, STATE_VARIABLE_InstMap_0_69, ConsId_22, Args0_23, CellInst0_137, &CellInst_138);
              hlds__instmap__instmap_delta_set_var_4_p_0(CellVar_21, CellInst_138, Delta0_136, &Delta_139);
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_139, GoalInfo0_11, &GoalInfo_98);
              hlds__instmap__apply_instmap_delta_3_p_0(Delta_139, STATE_VARIABLE_InstMap_0_69, STATE_VARIABLE_InstMap_70);
            }
            else
            {
              GoalInfo_98 = GoalInfo0_11;
              hlds__instmap__apply_instmap_delta_3_p_0(Delta0_136, STATE_VARIABLE_InstMap_0_69, STATE_VARIABLE_InstMap_70);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_10));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_98));
            }
          }
          else
          {
            MR_Word WrapGoals_47 = ((MR_Word) ((MR_hl_field(1, MaybeWrappedGoals_46, (MR_Integer) 0))));
            MR_Word GoalInfo1_48;
            MR_Word RHS_49;
            MR_Word Unification_50;
            MR_Word GoalExpr1_51;
            MR_Word Goal1_52;
            MR_Word STATE_VARIABLE_InstMap_83_83;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word ModuleInfo_96;
            MR_Word Delta0_140;
            MR_Box conv1_STATE_VARIABLE_InstMap_83_83;
            MR_Word CellInst0_141;

            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[11]), WrapGoals_47, ((MR_Box) (STATE_VARIABLE_InstMap_0_69)), &conv1_STATE_VARIABLE_InstMap_83_83);
            STATE_VARIABLE_InstMap_83_83 = ((MR_Word) (conv1_STATE_VARIABLE_InstMap_83_83));
            transform_hlds__lambda__lambda_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_72, &ModuleInfo_96);
            Delta0_140 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_11);
            succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(Delta0_140, CellVar_21, &CellInst0_141);
            if (succeeded)
            {
              MR_Word CellInst_142;
              MR_Word Delta_143;

              transform_hlds__float_regs__rebuild_cell_inst_6_p_0(ModuleInfo_96, STATE_VARIABLE_InstMap_83_83, ConsId_22, Args_44, CellInst0_141, &CellInst_142);
              hlds__instmap__instmap_delta_set_var_4_p_0(CellVar_21, CellInst_142, Delta0_140, &Delta_143);
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_143, GoalInfo0_11, &GoalInfo1_48);
              hlds__instmap__apply_instmap_delta_3_p_0(Delta_143, STATE_VARIABLE_InstMap_83_83, STATE_VARIABLE_InstMap_70);
            }
            else
            {
              GoalInfo1_48 = GoalInfo0_11;
              hlds__instmap__apply_instmap_delta_3_p_0(Delta0_140, STATE_VARIABLE_InstMap_83_83, STATE_VARIABLE_InstMap_70);
            }
            {
              RHS_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RHS_49, 0) = ((MR_Box) (ConsId_22));
              MR_hl_field(1, RHS_49, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstruct_29));
              MR_hl_field(1, RHS_49, 2) = ((MR_Box) (Args_44));
            }
            {
              Unification_50 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Unification_50, 0) = ((MR_Box) (CellVar_21));
              MR_hl_field(0, Unification_50, 1) = ((MR_Box) (ConsId_22));
              MR_hl_field(0, Unification_50, 2) = ((MR_Box) (Args_44));
              MR_hl_field(0, Unification_50, 3) = ((MR_Box) (ArgUnifyModes_45));
              MR_hl_field(0, Unification_50, 4) = ((MR_Box) (HowToConstruct_25));
              MR_hl_field(0, Unification_50, 5) = (MR_Box) ((MR_Unsigned) (IsUnique_26));
              MR_hl_field(0, Unification_50, 6) = ((MR_Box) (SubInfo_27));
            }
            {
              GoalExpr1_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, GoalExpr1_51, 0) = ((MR_Box) (LHS_16));
              MR_hl_field(1, GoalExpr1_51, 1) = ((MR_Box) (RHS_49));
              MR_hl_field(1, GoalExpr1_51, 2) = ((MR_Box) (Mode_18));
              MR_hl_field(1, GoalExpr1_51, 3) = ((MR_Box) (Unification_50));
              MR_hl_field(1, GoalExpr1_51, 4) = ((MR_Box) (Context_20));
            }
            {
              Goal1_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal1_52, 0) = ((MR_Box) (GoalExpr1_51));
              MR_hl_field(0, Goal1_52, 1) = ((MR_Box) (GoalInfo1_48));
            }
            {
              Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_86, 0) = ((MR_Box) (Goal1_52));
              MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WrapGoals_47, Var_86);
            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_85, GoalInfo1_48, Goal_12);
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Arity_55;
        MR_Word CellVarInst0_56;
        MR_Word CellVarInst_57;
        MR_Word CellVar_110 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 0))));
        MR_Word ConsId_111 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 1))));
        MR_Word ArgUnifyModes0_112 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 3))));
        MR_Word ModuleInfo_113;
        MR_Word Args_114 = ((MR_Word) ((MR_hl_field(1, Unification0_19, (MR_Integer) 2))));
        MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(1, Unification0_19, (MR_Integer) 4)));
        MR_Word ArgUnifyModes_106;
        MR_Word TypeCtorInfo_129_129;
        MR_Word TypeCtorInfo_130_130;
        MR_Word ArgInsts_58;
        MR_Word Var_89;
        MR_Word TypeInfo_131_131;

        transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_71, &ModuleInfo_113);
        mercury__list__length_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), Args_114, &Arity_55);
        hlds__instmap__instmap_lookup_var_3_p_0(STATE_VARIABLE_InstMap_0_69, CellVar_110, &CellVarInst0_56);
        check_hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo_113, CellVarInst0_56, &CellVarInst_57);
        succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(CellVarInst_57, ConsId_111, Arity_55, &ArgInsts_58);
        if (succeeded)
        {
          TypeCtorInfo_129_129 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
          TypeCtorInfo_130_130 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0);
          {
            Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_89, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[4]));
            MR_hl_field(0, Var_89, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2));
            MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_89, 3) = ((MR_Box) (ModuleInfo_113));
          }
          mercury__list__map_corresponding_4_p_0(TypeCtorInfo_129_129, TypeCtorInfo_130_130, TypeCtorInfo_130_130, Var_89, ArgInsts_58, ArgUnifyModes0_112, &ArgUnifyModes_106);
          TypeInfo_131_131 = (MR_Word) (&transform_hlds__float_regs_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_131_131, ((MR_Box) (ArgUnifyModes_106)), ((MR_Box) (ArgUnifyModes0_112)));
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Unification_103;
          MR_Word GoalExpr1_104;
          MR_Word Goal1_105;
          MR_Word VarTable_144;
          MR_Word InstVarSet_145;
          MR_Word ModuleInfo0_146;
          MR_Word ModuleInfo_147;

          {
            Unification_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Unification_103, 0) = ((MR_Box) (CellVar_110));
            MR_hl_field(1, Unification_103, 1) = ((MR_Box) (ConsId_111));
            MR_hl_field(1, Unification_103, 2) = ((MR_Box) (Args_114));
            MR_hl_field(1, Unification_103, 3) = ((MR_Box) (ArgUnifyModes_106));
            MR_hl_field(1, Unification_103, 4) = (MR_Box) (packed_word_2);
          }
          {
            GoalExpr1_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, GoalExpr1_104, 0) = ((MR_Box) (LHS_16));
            MR_hl_field(1, GoalExpr1_104, 1) = ((MR_Box) (RHS0_17));
            MR_hl_field(1, GoalExpr1_104, 2) = ((MR_Box) (Mode_18));
            MR_hl_field(1, GoalExpr1_104, 3) = ((MR_Box) (Unification_103));
            MR_hl_field(1, GoalExpr1_104, 4) = ((MR_Box) (Context_20));
          }
          {
            Goal1_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Goal1_105, 0) = ((MR_Box) (GoalExpr1_104));
            MR_hl_field(0, Goal1_105, 1) = ((MR_Box) (GoalInfo0_11));
          }
          transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_71, &VarTable_144);
          transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_0_71, &InstVarSet_145);
          transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_71, &ModuleInfo0_146);
          check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, VarTable_144, InstVarSet_145, STATE_VARIABLE_InstMap_0_69, Goal1_105, Goal_12, ModuleInfo0_146, &ModuleInfo_147);
          transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_147, STATE_VARIABLE_Info_0_71, STATE_VARIABLE_Info_72);
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_10));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
          }
          *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_0_71;
        }
        hlds__goal_util__apply_goal_instmap_delta_3_p_0(*Goal_12, STATE_VARIABLE_InstMap_0_69, STATE_VARIABLE_InstMap_70);
        *STATE_VARIABLE_Specs_74 = STATE_VARIABLE_Specs_0_73;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ToVar_59 = ((MR_Word) ((MR_hl_field(2, Unification0_19, (MR_Integer) 0))));
        MR_Word FromVar_60 = ((MR_Word) ((MR_hl_field(2, Unification0_19, (MR_Integer) 1))));
        MR_Word Delta0_61;
        MR_Word Inst_62;
        MR_Word Delta_63;
        MR_Word GoalInfo1_119;

        Delta0_61 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_11);
        hlds__instmap__instmap_lookup_var_3_p_0(STATE_VARIABLE_InstMap_0_69, FromVar_60, &Inst_62);
        hlds__instmap__instmap_delta_set_var_4_p_0(ToVar_59, Inst_62, Delta0_61, &Delta_63);
        hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(Delta_63, GoalInfo0_11, &GoalInfo1_119);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_10));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo1_119));
        }
        hlds__goal_util__apply_goal_instmap_delta_3_p_0(*Goal_12, STATE_VARIABLE_InstMap_0_69, STATE_VARIABLE_InstMap_70);
        *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_0_71;
        *STATE_VARIABLE_Specs_74 = STATE_VARIABLE_Specs_0_73;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification0_19, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_10));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
            hlds__goal_util__apply_goal_instmap_delta_3_p_0(*Goal_12, STATE_VARIABLE_InstMap_0_69, STATE_VARIABLE_InstMap_70);
            *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_0_71;
            *STATE_VARIABLE_Specs_74 = STATE_VARIABLE_Specs_0_73;
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

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_RegType_4;

  transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_RegType_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_RegType_4));
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Inst_10;

  transform_hlds__float_regs__rebuild_cell_bound_functor_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Inst_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_Inst_10));
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RegType_4;

  transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_RegType_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_RegType_4));
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
      {
        MR_Word Var_180 = ((MR_Word) ((MR_hl_field(1, Inst0_11, (MR_Integer) 1))));
        MR_Word Var_181 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);

        if ((Var_180 == (MR_Word) ((MR_Unsigned) 0U)))
          *Inst_12 = Inst0_11;
        else
        {
          MR_Word PredInstInfo0_124 = (MR_Word) (MR_body((MR_Word) (Var_180), (MR_Integer) 1));
          MR_Word PredOrFunc_125 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_124, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Modes_126 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_124, (MR_Integer) 1))));
          MR_Word Determinism_128 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_124, (MR_Integer) 3))) & (MR_Integer) 7);
          MR_Word ShroudedPredProcId_103;

          succeeded = ((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 2);
          if (succeeded)
          {
            ShroudedPredProcId_103 = (MR_Word) (MR_body((MR_Word) (ConsId_9), (MR_Integer) 2));
            {
              MR_Word Var_71;
              MR_Word PredId_83;
              MR_Word PredInfo_85;
              MR_Word ArgTypes_86;
              MR_Integer NumArgs_87;
              MR_Word MissingArgTypes_88;
              MR_Word ArgRegs_89;
              MR_Word PredInstInfo_90;
              MR_Word Var_95;
              MR_Word Var_97;

              Var_95 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_103);
              PredId_83 = ((MR_Word) ((MR_hl_field(0, Var_95, (MR_Integer) 0))));
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_83, &PredInfo_85);
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_85, &ArgTypes_86);
              mercury__list__length_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), Args_10, &NumArgs_87);
              mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumArgs_87, ArgTypes_86, &MissingArgTypes_88);
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[10]), MissingArgTypes_88, &ArgRegs_89);
              {
                Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_97, 0) = ((MR_Box) (ArgRegs_89));
              }
              {
                PredInstInfo_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredInstInfo_90, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_125));
                MR_hl_field(0, PredInstInfo_90, 1) = ((MR_Box) (Modes_126));
                MR_hl_field(0, PredInstInfo_90, 2) = ((MR_Box) (Var_97));
                MR_hl_field(0, PredInstInfo_90, 3) = (MR_Box) ((MR_Unsigned) (Determinism_128));
              }
              Var_71 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_90)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_12 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Var_181));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_71));
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
        MR_Word Uniq_13 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word InstResults_14 = ((MR_Word) ((MR_hl_field(2, Inst0_11, (MR_Integer) 1))));
        MR_Word BoundFunctors0_15 = ((MR_Word) ((MR_hl_field(2, Inst0_11, (MR_Integer) 2))));
        MR_Word BoundFunctors_16;
        MR_Word Var_42;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2));
          MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_42, 3) = ((MR_Box) (InstMap_8));
          MR_hl_field(0, Var_42, 4) = ((MR_Box) (ConsId_9));
          MR_hl_field(0, Var_42, 5) = ((MR_Box) (Args_10));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_42, BoundFunctors0_15, &BoundFunctors_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_12 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_13));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_14));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_16));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Inst_12 = Inst0_11;
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVarSet_35 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
            MR_Word SpecInst0_36 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
            MR_Word SpecInst_37;

            transform_hlds__float_regs__rebuild_cell_inst_6_p_0(ModuleInfo_7, InstMap_8, ConsId_9, Args_10, SpecInst0_36, &SpecInst_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstVarSet_35));
              MR_hl_field(3, base, 2) = ((MR_Box) (SpecInst_37));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_178 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
            MR_Word Var_179 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);

            if ((Var_178 == (MR_Word) ((MR_Unsigned) 0U)))
              *Inst_12 = Inst0_11;
            else
            {
              MR_Word PredInstInfo0_17 = (MR_Word) (MR_body((MR_Word) (Var_178), (MR_Integer) 1));
              MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_17, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Modes_19 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_17, (MR_Integer) 1))));
              MR_Word Determinism_21 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_17, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word ShroudedPredProcId_22;

              succeeded = ((MR_tag((MR_Word) ConsId_9)) == (MR_Integer) 2);
              if (succeeded)
              {
                ShroudedPredProcId_22 = (MR_Word) (MR_body((MR_Word) (ConsId_9), (MR_Integer) 2));
                {
                  MR_Word PredId_23;
                  MR_Word PredInfo_25;
                  MR_Word ArgTypes_26;
                  MR_Integer NumArgs_27;
                  MR_Word MissingArgTypes_28;
                  MR_Word ArgRegs_29;
                  MR_Word PredInstInfo_30;
                  MR_Word Var_45;
                  MR_Word Var_47;
                  MR_Word Var_49;

                  Var_45 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_22);
                  PredId_23 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
                  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_23, &PredInfo_25);
                  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_25, &ArgTypes_26);
                  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), Args_10, &NumArgs_27);
                  mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumArgs_27, ArgTypes_26, &MissingArgTypes_28);
                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[9]), MissingArgTypes_28, &ArgRegs_29);
                  {
                    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_47, 0) = ((MR_Box) (ArgRegs_29));
                  }
                  {
                    PredInstInfo_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, PredInstInfo_30, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
                    MR_hl_field(0, PredInstInfo_30, 1) = ((MR_Box) (Modes_19));
                    MR_hl_field(0, PredInstInfo_30, 2) = ((MR_Box) (Var_47));
                    MR_hl_field(0, PredInstInfo_30, 3) = (MR_Box) ((MR_Unsigned) (Determinism_21));
                  }
                  Var_49 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_30)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_12 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Var_179));
                    MR_hl_field(3, base, 2) = ((MR_Box) (Var_49));
                  }
                }
              }
              else
                *Inst_12 = Inst0_11;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.rebuild_cell_inst\'/6", (MR_String) "inst_var");
            return;
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = check_hlds__mode_util__from_to_insts_to_init_inst_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_ArgFromToInsts_8;

  transform_hlds__float_regs__add_arg_regs_in_from_to_insts_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_ArgFromToInsts_8);
  *wrapper_arg_3 = ((MR_Box) (conv5_ArgFromToInsts_8));
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;
  MR_Word conv3_HeadVar__3_3;

  check_hlds__mode_util__unify_mode_to_lhs_rhs_from_to_insts_3_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2, &conv3_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_6;
  MR_Word conv0_STATE_VARIABLE_TVarSet_14;

  transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Type_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TVarSet_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TVarSet_14));
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
  MR_bool succeeded;
  MR_Word ModuleInfo_25;
  MR_Word VarTable_26;
  MR_Word CellType_27;
  MR_Word PhonyArgTypes_36;
  MR_Word TypeCtorInfo_55_55;
  MR_Word TypeCtorInfo_60_60;
  MR_Word TypeInfo_61_61;
  MR_Word TypeCtor_28;
  MR_Word TypeArgs_29;
  MR_Word TVarSet0_32;
  MR_Word PhonyTypeArgs_33;
  MR_Word PhonyCellType_35;
  MR_Word Var_49;
  MR_Box conv2__TVarSet_34;

  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_45, &ModuleInfo_25);
  transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_45, &VarTable_26);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_26, CellVar_14, &CellType_27);
  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(CellType_27, &TypeCtor_28, &TypeArgs_29);
  if (succeeded)
  {
    succeeded = (TypeArgs_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeCtorInfo_55_55 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
      mercury__varset__init_1_p_0(TypeCtorInfo_55_55, &TVarSet0_32);
      Var_49 = (MR_Word) (&transform_hlds__float_regs_scalar_common_4[6]);
      TypeCtorInfo_60_60 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      TypeInfo_61_61 = (MR_Word) (&transform_hlds__float_regs_scalar_common_1[2]);
      mercury__list__map_foldl_5_p_0(TypeCtorInfo_60_60, TypeCtorInfo_60_60, TypeInfo_61_61, Var_49, TypeArgs_29, &PhonyTypeArgs_33, ((MR_Box) (TVarSet0_32)), &conv2__TVarSet_34);
      parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_28, PhonyTypeArgs_33, &PhonyCellType_35);
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

    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[7]), ArgModes0_18, &LHSFromToInsts0_39, &RHSFromToInsts0_40);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[3]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_3));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (ModuleInfo_25));
    }
    mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), Var_51, PhonyArgTypes_36, LHSFromToInsts0_39, &LHSFromToInsts_41);
    mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), Var_51, PhonyArgTypes_36, RHSFromToInsts0_40, &RHSFromToInsts_42);
    check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(LHSFromToInsts_41, RHSFromToInsts_42, ArgModes_19);
    ArgInitialInsts_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[8]), RHSFromToInsts_42);
    transform_hlds__float_regs__match_args_12_p_0(InstMap0_21, Context_22, PhonyArgTypes_36, ArgInitialInsts_43, OrigVars_16, Vars_17, (MR_Word) ((MR_Unsigned) 0U), &WrapGoals_44, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeWrappedGoals_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (WrapGoals_44));
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
      AT_22 = ((MR_Word) ((MR_hl_field(1, ArgTypes_15, (MR_Integer) 0))));
      ATs_23 = ((MR_Word) ((MR_hl_field(1, ArgTypes_15, (MR_Integer) 1))));
      succeeded = (Insts_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        I_24 = ((MR_Word) ((MR_hl_field(1, Insts_16, (MR_Integer) 0))));
        Is_25 = ((MR_Word) ((MR_hl_field(1, Insts_16, (MR_Integer) 1))));
        succeeded = (OrigVars_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OV_26 = ((MR_Word) ((MR_hl_field(1, OrigVars_17, (MR_Integer) 0))));
          OVs_27 = ((MR_Word) ((MR_hl_field(1, OrigVars_17, (MR_Integer) 1))));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Vars_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (V_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (Vs_29));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.match_args\'/12", (MR_String) "length mismatch");
        return;
      }
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_RegType_4;

  transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_RegType_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_RegType_4));
}

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RegType_4;

  transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_RegType_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_RegType_4));
}

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0(
  MR_Word InstMapBefore_13,
  MR_Word Context_14,
  MR_Word ArgType_15,
  MR_Word ExpectInst_16,
  MR_Word OrigVar_17,
  MR_Word * Var_18,
  MR_Word STATE_VARIABLE_WrapGoals_0_41,
  MR_Word * STATE_VARIABLE_WrapGoals_42,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_22;
  MR_Word VarTable_23;
  MR_Word PredOrFunc_25;
  MR_Word ArgPredArgTypes_26;
  MR_Word Var_24;

  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_43, &ModuleInfo_22);
  transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_43, &VarTable_23);
  succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_22, ExpectInst_16);
  if (succeeded)
  {
    succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(ArgType_15, &Var_24, &PredOrFunc_25, &ArgPredArgTypes_26);
    if (succeeded)
    {
      succeeded = (ArgPredArgTypes_26 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
  }
  if (succeeded)
  {
    MR_Word OrigVarType_29;
    MR_Word OrigPredArgTypes_32;
    MR_Integer Arity_33;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word ExpectPredInstInfo_34;
    MR_Word PredInstInfo0_50;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_23, OrigVar_17, &OrigVarType_29);
    parse_tree__prog_type_test__type_is_higher_order_details_det_4_p_0(OrigVarType_29, &Var_30, &Var_31, &OrigPredArgTypes_32);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OrigPredArgTypes_32, &Arity_33);
    succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(ModuleInfo_22, ExpectInst_16, &PredInstInfo0_50);
    if (succeeded)
    {
      ExpectPredInstInfo_34 = PredInstInfo0_50;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (PredOrFunc_25 == (MR_Integer) 1);
      if (succeeded)
      {
        ExpectPredInstInfo_34 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_33);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word OrigVarInst_35;
      MR_Word OrigPredInstInfo_36;
      MR_Word ExpectArgRegs_37;
      MR_Word OrigArgRegs_38;
      MR_Word MaybeArgRegs_57;
      MR_Word MaybeArgRegs_64;
      MR_Word PredInstInfo0_51;
      MR_Word PredInstInfo0_54;

      hlds__instmap__instmap_lookup_var_3_p_0(InstMapBefore_13, OrigVar_17, &OrigVarInst_35);
      succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(ModuleInfo_22, OrigVarInst_35, &PredInstInfo0_54);
      if (succeeded)
      {
        PredInstInfo0_51 = PredInstInfo0_54;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (PredOrFunc_25 == (MR_Integer) 1);
        if (succeeded)
        {
          PredInstInfo0_51 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(Arity_33);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        OrigPredInstInfo_36 = PredInstInfo0_51;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.lookup_pred_inst_info\'/5", (MR_String) "no higher order inst");
          return;
        }
      MaybeArgRegs_57 = ((MR_Word) ((MR_hl_field(0, ExpectPredInstInfo_34, (MR_Integer) 2))));
      if ((MaybeArgRegs_57 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[4]), ArgPredArgTypes_26, &ExpectArgRegs_37);
      else
        ExpectArgRegs_37 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_57, (MR_Integer) 0))));
      MaybeArgRegs_64 = ((MR_Word) ((MR_hl_field(0, OrigPredInstInfo_36, (MR_Integer) 2))));
      if ((MaybeArgRegs_64 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[5]), OrigPredArgTypes_32, &OrigArgRegs_38);
      else
        OrigArgRegs_38 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_64, (MR_Integer) 0))));
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[5]), ((MR_Box) (OrigArgRegs_38)), ((MR_Box) (ExpectArgRegs_37)));
      if (succeeded)
      {
        *Var_18 = OrigVar_17;
        *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
        *STATE_VARIABLE_WrapGoals_42 = STATE_VARIABLE_WrapGoals_0_41;
      }
      else
      {
        MR_Word UnifyGoal_39;

        transform_hlds__float_regs__create_reg_wrapper_9_p_0(OrigVar_17, OrigPredInstInfo_36, ExpectArgRegs_37, OrigArgRegs_38, Context_14, Var_18, &UnifyGoal_39, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
        mercury__list__cons_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (UnifyGoal_39)), STATE_VARIABLE_WrapGoals_0_41, STATE_VARIABLE_WrapGoals_42);
      }
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
    }
    else
    {
      MR_Word PredInfo_40;

      transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(STATE_VARIABLE_Info_0_43, &PredInfo_40);
      transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(PredInfo_40, VarTable_23, OrigVar_17, Context_14, OrigPredArgTypes_32, ArgPredArgTypes_26, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
      *Var_18 = OrigVar_17;
      *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
      *STATE_VARIABLE_WrapGoals_42 = STATE_VARIABLE_WrapGoals_0_41;
    }
  }
  else
  {
    *Var_18 = OrigVar_17;
    *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
    *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
    *STATE_VARIABLE_WrapGoals_42 = STATE_VARIABLE_WrapGoals_0_41;
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
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RegR_HeadVars_12;

  transform_hlds__float_regs__make_reg_r_headvars_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_RegR_HeadVars_12);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_RegR_HeadVars_12));
}

static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0(
  MR_Word OrigVar_10,
  MR_Word OrigVarPredInstInfo_11,
  MR_Word OuterArgRegs_12,
  MR_Word InnerArgRegs_13,
  MR_Word Context_14,
  MR_Word * LHSVar_15,
  MR_Word * UnifyGoal_16,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64)
{
  MR_Word VarTable0_18;
  MR_Word ModuleInfo0_19;
  MR_Word OrigVarEntry_20;
  MR_Word OrigVarType_22;
  MR_Word OrigVarIsDummy_23;
  MR_Word Purity_24;
  MR_Word PredOrFunc_25;
  MR_Word PredArgTypes_26;
  MR_Word CallVars_27;
  MR_Word VarTable1_28;
  MR_Word PredFormArity_29;
  MR_Word ArgModes_32;
  MR_Word Determinism_34;
  MR_Word GenericCall_36;
  MR_Word CallGoalExpr_37;
  MR_Word CallNonLocals_38;
  MR_Word CallInstMapDelta_39;
  MR_Word CallGoalInfo_40;
  MR_Word CallGoal_41;
  MR_Word ReplacementEntry_42;
  MR_Word VarTable_43;
  MR_Word RegR_HeadVars_44;
  MR_Word DummyPPId_45;
  MR_Word DummyShroudedPPId_46;
  MR_Word ConsId_47;
  MR_Word LambdaNonLocals_48;
  MR_Word InInst_49;
  MR_Word ArgUnifyModes0_50;
  MR_Word Unification0_51;
  MR_Word UnifyMode_52;
  MR_Word CallVarsArgModes_55;
  MR_Word RHS_56;
  MR_Word UnifyGoalExpr_57;
  MR_Word UnifyNonLocals_58;
  MR_Word UnifyPredInstInfo_59;
  MR_Word UnifyPredVarInst_60;
  MR_Word UnifyInstMapDelta_61;
  MR_Word UnifyGoalInfo_62;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word STATE_VARIABLE_Info_68_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Integer Var_72;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_91;
  MR_Word STATE_VARIABLE_Info_92_92;
  MR_Word Var_93;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Box conv1_RegR_HeadVars_44;

  transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_63, &VarTable0_18);
  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_63, &ModuleInfo0_19);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_18, OrigVar_10, &OrigVarEntry_20);
  OrigVarType_22 = ((MR_Word) ((MR_hl_field(0, OrigVarEntry_20, (MR_Integer) 1))));
  OrigVarIsDummy_23 = ((MR_Unsigned) ((MR_hl_field(0, OrigVarEntry_20, (MR_Integer) 2))) & (MR_Integer) 1);
  parse_tree__prog_type_test__type_is_higher_order_details_det_4_p_0(OrigVarType_22, &Purity_24, &PredOrFunc_25, &PredArgTypes_26);
  hlds__var_table_hlds__create_fresh_vars_5_p_0(ModuleInfo0_19, PredArgTypes_26, &CallVars_27, VarTable0_18, &VarTable1_28);
  PredFormArity_29 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), CallVars_27);
  ArgModes_32 = ((MR_Word) ((MR_hl_field(0, OrigVarPredInstInfo_11, (MR_Integer) 1))));
  Determinism_34 = ((MR_Unsigned) ((MR_hl_field(0, OrigVarPredInstInfo_11, (MR_Integer) 3))) & (MR_Integer) 7);
  {
    GenericCall_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GenericCall_36, 0) = ((MR_Box) (OrigVar_10));
    MR_hl_field(0, GenericCall_36, 1) = (MR_Box) (((((MR_Unsigned) (Purity_24) << 1)) | (MR_Unsigned) (PredOrFunc_25)));
    MR_hl_field(0, GenericCall_36, 2) = ((MR_Box) (PredFormArity_29));
    MR_hl_field(0, GenericCall_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (InnerArgRegs_13));
  }
  {
    CallGoalExpr_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CallGoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, CallGoalExpr_37, 1) = ((MR_Box) (GenericCall_36));
    MR_hl_field(3, CallGoalExpr_37, 2) = ((MR_Box) (CallVars_27));
    MR_hl_field(3, CallGoalExpr_37, 3) = ((MR_Box) (ArgModes_32));
    MR_hl_field(3, CallGoalExpr_37, 4) = ((MR_Box) (Var_65));
    MR_hl_field(3, CallGoalExpr_37, 5) = (MR_Box) ((MR_Unsigned) (Determinism_34));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (OrigVar_10));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (CallVars_27));
  }
  CallNonLocals_38 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_66);
  hlds__instmap__instmap_delta_from_mode_list_4_p_0(ModuleInfo0_19, CallVars_27, ArgModes_32, &CallInstMapDelta_39);
  hlds__hlds_goal__goal_info_init_6_p_0(CallNonLocals_38, CallInstMapDelta_39, Determinism_34, Purity_24, Context_14, &CallGoalInfo_40);
  {
    CallGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallGoal_41, 0) = ((MR_Box) (CallGoalExpr_37));
    MR_hl_field(0, CallGoal_41, 1) = ((MR_Box) (CallGoalInfo_40));
  }
  {
    ReplacementEntry_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ReplacementEntry_42, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, ReplacementEntry_42, 1) = ((MR_Box) (OrigVarType_22));
    MR_hl_field(0, ReplacementEntry_42, 2) = (MR_Box) ((MR_Unsigned) (OrigVarIsDummy_23));
  }
  parse_tree__var_table__add_var_entry_4_p_0(ReplacementEntry_42, LHSVar_15, VarTable1_28, &VarTable_43);
  transform_hlds__lambda__lambda_info_set_var_table_3_p_0(VarTable_43, STATE_VARIABLE_Info_0_63, &STATE_VARIABLE_Info_68_68);
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[4]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (transform_hlds__float_regs__create_reg_wrapper_9_p_0_1));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (VarTable_43));
  }
  Var_70 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  mercury__list__foldl_corresponding_5_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[3]), Var_69, CallVars_27, OuterArgRegs_12, ((MR_Box) (Var_70)), &conv1_RegR_HeadVars_44);
  RegR_HeadVars_44 = ((MR_Word) (conv1_RegR_HeadVars_44));
  Var_71 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  Var_72 = hlds__hlds_pred__invalid_proc_id_0_f_0();
  {
    DummyPPId_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DummyPPId_45, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, DummyPPId_45, 1) = ((MR_Box) (Var_72));
  }
  DummyShroudedPPId_46 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(DummyPPId_45);
  ConsId_47 = (MR_Word) (MR_mkword(2, (MR_Word) (DummyShroudedPPId_46)));
  {
    LambdaNonLocals_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaNonLocals_48, 0) = ((MR_Box) (OrigVar_10));
    MR_hl_field(1, LambdaNonLocals_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_75 = (MR_Word) (MR_mkword(1, (MR_Word) (OrigVarPredInstInfo_11)));
  {
    InInst_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InInst_49, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, InInst_49, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (InInst_49));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (InInst_49));
    MR_hl_field(0, Var_76, 2) = ((MR_Box) (InInst_49));
    MR_hl_field(0, Var_76, 3) = ((MR_Box) (InInst_49));
  }
  {
    ArgUnifyModes0_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgUnifyModes0_50, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, ArgUnifyModes0_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unification0_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Unification0_51, 0) = ((MR_Box) (*LHSVar_15));
    MR_hl_field(0, Unification0_51, 1) = ((MR_Box) (ConsId_47));
    MR_hl_field(0, Unification0_51, 2) = ((MR_Box) (LambdaNonLocals_48));
    MR_hl_field(0, Unification0_51, 3) = ((MR_Box) (ArgUnifyModes0_50));
    MR_hl_field(0, Unification0_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification0_51, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Unification0_51, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_85 = parse_tree__prog_mode__ground_inst_0_f_0();
  Var_86 = parse_tree__prog_mode__ground_inst_0_f_0();
  Var_87 = parse_tree__prog_mode__ground_inst_0_f_0();
  {
    UnifyMode_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, UnifyMode_52, 1) = ((MR_Box) (Var_85));
    MR_hl_field(0, UnifyMode_52, 2) = ((MR_Box) (Var_86));
    MR_hl_field(0, UnifyMode_52, 3) = ((MR_Box) (Var_87));
  }
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__float_regs_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), CallVars_27, ArgModes_32, &CallVarsArgModes_55);
  {
    RHS_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, RHS_56, 0) = (MR_Box) (((((MR_Unsigned) (Purity_24) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (PredOrFunc_25)))));
    MR_hl_field(2, RHS_56, 1) = ((MR_Box) (LambdaNonLocals_48));
    MR_hl_field(2, RHS_56, 2) = ((MR_Box) (CallVarsArgModes_55));
    MR_hl_field(2, RHS_56, 3) = (MR_Box) ((MR_Unsigned) (Determinism_34));
    MR_hl_field(2, RHS_56, 4) = ((MR_Box) (CallGoal_41));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (RegR_HeadVars_44));
  }
  transform_hlds__lambda__expand_lambda_9_p_0(Var_91, *LHSVar_15, RHS_56, UnifyMode_52, Unification0_51, (MR_Word) (&transform_hlds__float_regs_scalar_common_1[22]), &UnifyGoalExpr_57, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_92_92);
  UnifyNonLocals_58 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *LHSVar_15);
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (OuterArgRegs_12));
  }
  {
    UnifyPredInstInfo_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyPredInstInfo_59, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
    MR_hl_field(0, UnifyPredInstInfo_59, 1) = ((MR_Box) (ArgModes_32));
    MR_hl_field(0, UnifyPredInstInfo_59, 2) = ((MR_Box) (Var_93));
    MR_hl_field(0, UnifyPredInstInfo_59, 3) = (MR_Box) ((MR_Unsigned) (Determinism_34));
  }
  Var_95 = (MR_Word) (MR_mkword(1, (MR_Word) (UnifyPredInstInfo_59)));
  {
    UnifyPredVarInst_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, UnifyPredVarInst_60, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, UnifyPredVarInst_60, 1) = ((MR_Box) (Var_95));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (*LHSVar_15));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (UnifyPredVarInst_60));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  UnifyInstMapDelta_61 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_96);
  hlds__hlds_goal__goal_info_init_5_p_0(UnifyNonLocals_58, UnifyInstMapDelta_61, (MR_Integer) 0, (MR_Integer) 0, &UnifyGoalInfo_62);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *UnifyGoal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnifyGoalExpr_57));
    MR_hl_field(0, base, 1) = ((MR_Box) (UnifyGoalInfo_62));
  }
  transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_92_92, STATE_VARIABLE_Info_64);
}

static void MR_CALL 
transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(
  MR_Word PredInfo_9,
  MR_Word VarTable_10,
  MR_Word Var_11,
  MR_Word Context_12,
  MR_Word ArgTypesA_13,
  MR_Word ArgTypesB_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_Word Origin_16;
  MR_Word Var_24;

  {
    MR_Word Var_22;

    Var_22 = parse_tree__builtin_lib_types__float_type_0_f_0();
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_22)), ArgTypesA_13);
  }
  if (!(succeeded))
  {
    MR_Word Var_23;

    Var_23 = parse_tree__builtin_lib_types__float_type_0_f_0();
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Var_23)), ArgTypesB_14);
  }
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_9, &Origin_16);
    succeeded = ((MR_tag((MR_Word) Origin_16)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(1, Origin_16, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word Spec_19;
    MR_Word PredPieces_28;
    MR_Word Entry_29;
    MR_String VarName_30;
    MR_Word InPieces_31;
    MR_Word ErrorPieces_32;
    MR_Word Msg_34;
    MR_Word Var_38;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_52;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_79;

    PredPieces_28 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredInfo_9);
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_10, Var_11, &Entry_29);
    VarName_30 = parse_tree__var_table__var_entry_name_2_f_0(Var_11, Entry_29);
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &transform_hlds__float_regs_scalar_common_1[6])));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (PredPieces_28));
    }
    InPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[9])));
    Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[13])));
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (VarName_30));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[17])));
    }
    Var_58 = parse_tree__error_spec__color_as_subject_1_f_0(Var_59);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[7])));
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[15])), Var_57);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_52);
    ErrorPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[11])), Var_46);
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_69, 0) = ((MR_Box) (InPieces_31));
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (ErrorPieces_32));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__float_regs_scalar_common_1[24])));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
    }
    {
      Msg_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Msg_34, 0) = ((MR_Box) (Context_12));
      MR_hl_field(2, Msg_34, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (Msg_34));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_19, 0) = ((MR_Box) ((MR_String) "function \140transform_hlds.float_regs.report_missing_higher_order_inst\'/4"));
      MR_hl_field(2, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 108U));
      MR_hl_field(2, Spec_19, 3) = ((MR_Box) (Var_79));
    }
    mercury__list__cons_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ((MR_Box) (Spec_19)), STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
  }
  else
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
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
      case (MR_Integer) 1:
        {
          MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, Inst_5, (MR_Integer) 1))));

          succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            *PredInstInfo_6 = (MR_Word) (MR_body((MR_Word) (Var_18), (MR_Integer) 1));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_5, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word InstName_9 = ((MR_Word) ((MR_hl_field(3, Inst_5, (MR_Integer) 1))));
              MR_Word InstB_10;
              MR_Word next_value_of_Inst_5;

              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_4, InstName_9, &InstB_10);
              // direct tailcall eliminated
              ;
              next_value_of_Inst_5 = InstB_10;
              Inst_5 = next_value_of_Inst_5;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(3, Inst_5, (MR_Integer) 2))));

              succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                *PredInstInfo_6 = (MR_Word) (MR_body((MR_Word) (Var_17), (MR_Integer) 1));
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
transform_hlds__float_regs__copy_any_unreachability_from_goal_instmap_delta_3_p_0(
  MR_Word Goal_4,
  MR_Word InstMap0_5,
  MR_Word * InstMap_6)
{
  MR_bool succeeded;
  MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 1))));
  MR_Word InstMapDelta_9;

  InstMapDelta_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_8);
  succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_9);
  if (succeeded)
    hlds__instmap__init_unreachable_1_p_0(InstMap_6);
  else
    *InstMap_6 = InstMap0_5;
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
  MR_Word CallGoal0_15;
  MR_Word CallGoal_16;
  MR_Word CallGoalInfo_18;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word VarTable_29;
  MR_Word InstVarSet_30;
  MR_Word ModuleInfo0_31;
  MR_Word ModuleInfo_32;

  {
    CallGoal0_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallGoal0_15, 0) = ((MR_Box) (CallGoalExpr0_10));
    MR_hl_field(0, CallGoal0_15, 1) = ((MR_Box) (CallGoalInfo0_11));
  }
  transform_hlds__lambda__lambda_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_21, &VarTable_29);
  transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_0_21, &InstVarSet_30);
  transform_hlds__lambda__lambda_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_21, &ModuleInfo0_31);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 0, VarTable_29, InstVarSet_30, STATE_VARIABLE_InstMap_0_19, CallGoal0_15, &CallGoal_16, ModuleInfo0_31, &ModuleInfo_32);
  transform_hlds__lambda__lambda_info_set_module_info_3_p_0(ModuleInfo_32, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  hlds__goal_util__apply_goal_instmap_delta_3_p_0(CallGoal_16, STATE_VARIABLE_InstMap_0_19, STATE_VARIABLE_InstMap_20);
  CallGoalInfo_18 = ((MR_Word) ((MR_hl_field(0, CallGoal_16, (MR_Integer) 1))));
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (CallGoal_16));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WrapGoals_9, Var_26);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_25, CallGoalInfo_18, Goal_12);
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_17;
  MR_Word conv0_STATE_VARIABLE_Specs_19;

  transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_17));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_19));
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_Word PredInfo_9;
  MR_Word ProcIds_10;
  MR_Word Var_15;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_12;
  MR_Box conv2_STATE_VARIABLE_Specs_14;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, PredId_6, &PredInfo_9);
  ProcIds_10 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_9);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_9[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (PredId_6));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), Var_15, ProcIds_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (STATE_VARIABLE_Specs_0_13)), &conv2_STATE_VARIABLE_Specs_14);
  *STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_12));
  *STATE_VARIABLE_Specs_14 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_14));
}

static void MR_CALL 
transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(
  MR_Word Type_3,
  MR_Word * RegType_4)
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

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_10;

  transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Inst_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_Inst_10));
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_functor_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen_7,
  MR_Word Type_8,
  MR_Word BoundFunctor0_9,
  MR_Word * BoundFunctor_10)
{
  MR_bool succeeded;
  MR_Word ConsId_11 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_9, (MR_Integer) 0))));
  MR_Word ArgInsts0_12 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_9, (MR_Integer) 1))));
  MR_Word ArgInsts_15;
  MR_Word DuCtor_13;

  succeeded = ((MR_tag((MR_Word) ConsId_11)) == (MR_Integer) 1);
  if (succeeded)
  {
    DuCtor_13 = (MR_Word) (MR_body((MR_Word) (ConsId_11), (MR_Integer) 1));
    {
      MR_Word ArgTypes_14;

      succeeded = check_hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_8, DuCtor_13, &ArgTypes_14);
      if (succeeded)
        if ((ArgTypes_14 == (MR_Word) ((MR_Unsigned) 0U)))
          ArgInsts_15 = ArgInsts0_12;
        else
        {
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[3]));
            MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_bound_functor_5_p_0_1));
            MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_18, 3) = ((MR_Box) (ModuleInfo_6));
            MR_hl_field(0, Var_18, 4) = ((MR_Box) (Seen_7));
          }
          mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_18, ArgTypes_14, ArgInsts0_12, &ArgInsts_15);
        }
      else
        ArgInsts_15 = ArgInsts0_12;
    }
  }
  else
    ArgInsts_15 = ArgInsts0_12;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BoundFunctor_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts_15));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_from_to_insts_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarType_6,
  MR_Word ArgFromToInsts0_7,
  MR_Word * ArgFromToInsts_8)
{
  MR_bool succeeded;
  MR_Word Var_9;
  MR_Word InitialInst0_11;
  MR_Word FinalInst0_12;
  MR_Word InitialInst_13;
  MR_Word FinalInst_14;

  Var_9 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
  InitialInst0_11 = ((MR_Word) ((MR_hl_field(0, ArgFromToInsts0_7, (MR_Integer) 0))));
  FinalInst0_12 = ((MR_Word) ((MR_hl_field(0, ArgFromToInsts0_7, (MR_Integer) 1))));
  transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_5, Var_9, VarType_6, InitialInst0_11, &InitialInst_13);
  transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_5, Var_9, VarType_6, FinalInst0_12, &FinalInst_14);
  succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InitialInst_13, InitialInst0_11);
  if (succeeded)
    succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(FinalInst_14, FinalInst0_12);
  if (succeeded)
    *ArgFromToInsts_8 = ArgFromToInsts0_7;
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ArgFromToInsts_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InitialInst_13));
      MR_hl_field(0, base, 1) = ((MR_Box) (FinalInst_14));
    }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word RealVarType_6,
  MR_Word ArgMode0_7,
  MR_Word * ArgMode_8)
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
    MR_Word Var_15;

    transform_hlds__float_regs__make_generic_type_3_p_0((MR_Integer) 0, RealVarType_6, &AssumedType_14);
    Var_15 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
    transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(ModuleInfo_5, Var_15, AssumedType_14, ArgMode0_7, ArgMode_8);
  }
  else
    *ArgMode_8 = ArgMode0_7;
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen_7,
  MR_Word VarType_8,
  MR_Word ArgMode0_9,
  MR_Word * ArgMode_10)
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
      MR_hl_field(0, base, 0) = ((MR_Box) (InitialInst_13));
      MR_hl_field(0, base, 1) = ((MR_Box) (FinalInst_14));
    }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_RegType_4;

  transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_RegType_4);
  *wrapper_arg_2 = ((MR_Box) (conv4_RegType_4));
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_ArgMode_10;

  transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_ArgMode_10);
  *wrapper_arg_3 = ((MR_Box) (conv3_ArgMode_10));
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_BoundFunctor_10;

  transform_hlds__float_regs__add_arg_regs_in_bound_functor_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_BoundFunctor_10);
  *wrapper_arg_2 = ((MR_Box) (conv2_BoundFunctor_10));
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_RegType_4;

  transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_RegType_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_RegType_4));
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ArgMode_10;

  transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_ArgMode_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_ArgMode_10));
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Seen0_7,
  MR_Word Type_8,
  MR_Word Inst0_9,
  MR_Word * Inst_10)
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
      {
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, Inst0_9, (MR_Integer) 1))));
        MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_9, (MR_Integer) 0))) & (MR_Integer) 7);

        if ((Var_52 == (MR_Word) ((MR_Unsigned) 0U)))
          *Inst_10 = Inst0_9;
        else
        {
          MR_Word PredInstInfo0_12 = (MR_Word) (MR_body((MR_Word) (Var_52), (MR_Integer) 1));
          MR_Word PredInstInfo_16;
          MR_Word Var_33;
          MR_Word ArgTypes_15;
          MR_Word Var_13;
          MR_Word Var_14;

          succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_8, &Var_13, &Var_14, &ArgTypes_15);
          if (succeeded)
          {
            MR_Word PredOrFunc_67 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_12, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes0_68 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_12, (MR_Integer) 1))));
            MR_Word Detism_70 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_12, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Modes_71;
            MR_Word ArgRegs_72;
            MR_Word ArgRegInfo_73;
            MR_Word Var_74;

            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_74, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[1]));
              MR_hl_field(0, Var_74, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_4));
              MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_74, 3) = ((MR_Box) (ModuleInfo_6));
              MR_hl_field(0, Var_74, 4) = ((MR_Box) (Seen0_7));
            }
            mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_74, ArgTypes_15, Modes0_68, &Modes_71);
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[3]), ArgTypes_15, &ArgRegs_72);
            {
              ArgRegInfo_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgRegInfo_73, 0) = ((MR_Box) (ArgRegs_72));
            }
            {
              PredInstInfo_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredInstInfo_16, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_67));
              MR_hl_field(0, PredInstInfo_16, 1) = ((MR_Box) (Modes_71));
              MR_hl_field(0, PredInstInfo_16, 2) = ((MR_Box) (ArgRegInfo_73));
              MR_hl_field(0, PredInstInfo_16, 3) = (MR_Box) ((MR_Unsigned) (Detism_70));
            }
          }
          else
            PredInstInfo_16 = PredInstInfo0_12;
          Var_33 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_16)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_10 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Var_53));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_33));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults_19 = ((MR_Word) ((MR_hl_field(2, Inst0_9, (MR_Integer) 1))));
        MR_Word BoundFunctors0_20 = ((MR_Word) ((MR_hl_field(2, Inst0_9, (MR_Integer) 2))));
        MR_Word BoundFunctors_21;
        MR_Word Var_36;
        MR_Word Uniq_44 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_9, (MR_Integer) 0))) & (MR_Integer) 7);

        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[2]));
          MR_hl_field(0, Var_36, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_3));
          MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_36, 3) = ((MR_Box) (ModuleInfo_6));
          MR_hl_field(0, Var_36, 4) = ((MR_Box) (Seen0_7));
          MR_hl_field(0, Var_36, 5) = ((MR_Box) (Type_8));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), Var_36, BoundFunctors0_20, &BoundFunctors_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_10 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_44));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_19));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_21));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_25 = ((MR_Word) ((MR_hl_field(3, Inst0_9, (MR_Integer) 1))));

            succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), Seen0_7, ((MR_Box) (InstName_25)));
            if (succeeded)
              *Inst_10 = Inst0_9;
            else
            {
              MR_Word Seen1_26;
              MR_Word Inst1_27;
              MR_Word Inst2_28;

              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0), ((MR_Box) (InstName_25)), Seen0_7, &Seen1_26);
              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_6, InstName_25, &Inst1_27);
              transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_6, Seen1_26, Type_8, Inst1_27, &Inst2_28);
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst1_27, Inst2_28);
              if (succeeded)
                *Inst_10 = Inst0_9;
              else
                *Inst_10 = Inst2_28;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVarSet_22 = ((MR_Word) ((MR_hl_field(3, Inst0_9, (MR_Integer) 1))));
            MR_Word SpecInst0_23 = ((MR_Word) ((MR_hl_field(3, Inst0_9, (MR_Integer) 2))));
            MR_Word SpecInst_24;

            transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(ModuleInfo_6, Seen0_7, Type_8, SpecInst0_23, &SpecInst_24);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstVarSet_22));
              MR_hl_field(3, base, 2) = ((MR_Box) (SpecInst_24));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_50 = ((MR_Word) ((MR_hl_field(3, Inst0_9, (MR_Integer) 2))));
            MR_Word Var_51 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_9, (MR_Integer) 1))) & (MR_Integer) 7);

            if ((Var_50 == (MR_Word) ((MR_Unsigned) 0U)))
              *Inst_10 = Inst0_9;
            else
            {
              MR_Word Var_35;
              MR_Word PredInstInfo0_41 = (MR_Word) (MR_body((MR_Word) (Var_50), (MR_Integer) 1));
              MR_Word PredInstInfo_43;
              MR_Word ArgTypes_39;
              MR_Word Var_17;
              MR_Word Var_18;

              succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_8, &Var_17, &Var_18, &ArgTypes_39);
              if (succeeded)
              {
                MR_Word PredOrFunc_55 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_41, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Modes0_56 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_41, (MR_Integer) 1))));
                MR_Word Detism_58 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_41, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word Modes_59;
                MR_Word ArgRegs_60;
                MR_Word ArgRegInfo_61;
                MR_Word Var_62;

                {
                  Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_62, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[1]));
                  MR_hl_field(0, Var_62, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1));
                  MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_62, 3) = ((MR_Box) (ModuleInfo_6));
                  MR_hl_field(0, Var_62, 4) = ((MR_Box) (Seen0_7));
                }
                mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_62, ArgTypes_39, Modes0_56, &Modes_59);
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[2]), ArgTypes_39, &ArgRegs_60);
                {
                  ArgRegInfo_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ArgRegInfo_61, 0) = ((MR_Box) (ArgRegs_60));
                }
                {
                  PredInstInfo_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PredInstInfo_43, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_55));
                  MR_hl_field(0, PredInstInfo_43, 1) = ((MR_Box) (Modes_59));
                  MR_hl_field(0, PredInstInfo_43, 2) = ((MR_Box) (ArgRegInfo_61));
                  MR_hl_field(0, PredInstInfo_43, 3) = (MR_Box) ((MR_Unsigned) (Detism_58));
                }
              }
              else
                PredInstInfo_43 = PredInstInfo0_41;
              Var_35 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_43)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_10 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Var_51));
                MR_hl_field(3, base, 2) = ((MR_Box) (Var_35));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          *Inst_10 = Inst0_9;
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_6;

  transform_hlds__float_regs__make_generic_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_6));
}

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  transform_hlds__float_regs__make_generic_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
}

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0(
  MR_Word PolymorphicContext_4,
  MR_Word Type0_5,
  MR_Word * Type_6)
{
  MR_bool succeeded;
  MR_Word Purity_7;
  MR_Word PredOrFunc_8;
  MR_Word ArgTypes0_9;

  succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type0_5, &Purity_7, &PredOrFunc_8, &ArgTypes0_9);
  if (succeeded)
  {
    MR_Word ArgTypes_10;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_3[1]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (transform_hlds__float_regs__make_generic_type_3_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (PolymorphicContext_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_14, ArgTypes0_9, &ArgTypes_10);
    parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_7, PredOrFunc_8, ArgTypes_10, Type_6);
  }
  else
  {
    MR_Word TypeCtor_11;
    MR_Word ArgTypes0_19;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type0_5, &TypeCtor_11, &ArgTypes0_19);
    if (succeeded)
      if ((ArgTypes0_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_26;

        succeeded = (PolymorphicContext_4 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_26 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
          succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_11, Var_26);
        }
        if (succeeded)
          *Type_6 = parse_tree__builtin_lib_types__heap_pointer_type_0_f_0();
        else
          *Type_6 = Type0_5;
      }
      else
      {
        MR_Word ArgTypes_17;

        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_7[0]), ArgTypes0_19, &ArgTypes_17);
        parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_11, ArgTypes_17, Type_6);
      }
    else
      *Type_6 = Type0_5;
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ArgMode_8;

  transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_ArgMode_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_ArgMode_8));
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ArgMode_8;

  transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_ArgMode_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_ArgMode_8));
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Integer ProcId_6,
  MR_Word PredInfo0_7,
  MR_Word * PredInfo_8)
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
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(PredMarkers_9, (MR_Integer) 12);
  if (succeeded)
  {
    MR_Word IM_ArgTypes_12;
    MR_Integer Num_IM_ArgTypes_13;
    MR_Word FrontModes_14;
    MR_Word ArgModes1_15;
    MR_Word ArgModes2_16;
    MR_Word Var_21;
    MR_Integer Len_33;
    MR_Integer StartLen_34;

    hlds__hlds_pred__pred_info_get_instance_method_arg_types_2_p_0(PredInfo0_7, &IM_ArgTypes_12);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), IM_ArgTypes_12, &Num_IM_ArgTypes_13);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_11, &Len_33);
    StartLen_34 = (MR_Integer) ((MR_Unsigned) Len_33 - (MR_Unsigned) Num_IM_ArgTypes_13);
    succeeded = (StartLen_34 == (MR_Integer) 0);
    if (succeeded)
    {
      FrontModes_14 = (MR_Word) ((MR_Unsigned) 0U);
      ArgModes1_15 = ArgModes0_11;
    }
    else
    {
      succeeded = (StartLen_34 > (MR_Integer) 0);
      if (succeeded)
        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StartLen_34, ArgModes0_11, &FrontModes_14, &ArgModes1_15);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
          return;
        }
    }
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[1]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleInfo_5));
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
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[1]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__map_corresponding_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_22, ArgTypes_18, ArgModes0_11, &ArgModes_17);
  }
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_17, ProcInfo0_10, &ProcInfo_19);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_6, ProcInfo_19, PredInfo0_7, PredInfo_8);
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_PredInfo_8;

  transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_PredInfo_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_PredInfo_8));
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  MR_Word PredInfo0_6;
  MR_Word ProcIds_7;
  MR_Word PredInfo_8;
  MR_Word Var_11;
  MR_Box conv1_PredInfo_8;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_9, PredId_4, &PredInfo0_6);
  ProcIds_7 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo0_6);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_6[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_11, ProcIds_7, ((MR_Box) (PredInfo0_6)), &conv1_PredInfo_8);
  PredInfo_8 = ((MR_Word) (conv1_PredInfo_8));
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_8, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
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
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_12;
  MR_Word conv2_STATE_VARIABLE_Specs_14;

  transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Specs_14);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_12));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_14));
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_10;

  transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_10));
}

void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8,
  MR_Word * Specs_5)
{
  MR_Word PredIds_6;
  MR_Word STATE_VARIABLE_ModuleInfo_10_10;
  MR_Word STATE_VARIABLE_ModuleInfo_12_12;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_10_10;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_12_12;
  MR_Box conv4_Specs_5;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &PredIds_6);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[0]), PredIds_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_7)), &conv1_STATE_VARIABLE_ModuleInfo_10_10);
  STATE_VARIABLE_ModuleInfo_10_10 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_10_10));
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__float_regs_scalar_common_1[0]), (MR_Word) (&transform_hlds__float_regs_scalar_common_4[1]), PredIds_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_10_10)), &conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_5);
  STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_12_12));
  *Specs_5 = ((MR_Word) (conv4_Specs_5));
  hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_12_12, STATE_VARIABLE_ModuleInfo_8);
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
