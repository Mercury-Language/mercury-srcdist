/*
** Automatically generated from `float_regs.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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


/* :- module transform_hlds.float_regs. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__float_regs__init
ENDINIT
*/

#include "transform_hlds.float_regs.mih"


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
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.lambda.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1489__1_4_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_7,
  MR_Word transform_hlds__float_regs__NonLocals_8,
  MR_Word transform_hlds__float_regs__LambdaHeadVar__1_23,
  MR_Word * transform_hlds__float_regs__LambdaHeadVar__2_24);

static void MR_CALL 
transform_hlds__float_regs__make_reg_r_headvars_5_p_0(
  MR_Word transform_hlds__float_regs__VarTypes_6,
  MR_Word transform_hlds__float_regs__Var_7,
  MR_Word transform_hlds__float_regs__RegType_8,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12);

static void MR_CALL 
transform_hlds__float_regs__fix_case_goal_8_p_0(
  MR_Word transform_hlds__float_regs__VarsExpectInsts_9,
  MR_Word transform_hlds__float_regs__Case0_10,
  MR_Word transform_hlds__float_regs__GoalInstMap0_11,
  MR_Word * transform_hlds__float_regs__Case_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_19,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_20,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_21,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_22);

static void MR_CALL 
transform_hlds__float_regs__set_foreign_arg_var_3_p_0(
  MR_Word transform_hlds__float_regs__Var_4,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_7);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(
  MR_Word transform_hlds__float_regs__Var_11,
  MR_Word transform_hlds__float_regs__Type_12,
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word transform_hlds__float_regs__Case0_14,
  MR_Word * transform_hlds__float_regs__Case_15,
  MR_Word * transform_hlds__float_regs__InstMap_16,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_26,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_27,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_29);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_9,
  MR_Word transform_hlds__float_regs__Goal0_10,
  MR_Word * transform_hlds__float_regs__Goal_11,
  MR_Word * transform_hlds__float_regs__InstMap_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_15,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_16,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_17,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_18);

static void MR_CALL 
transform_hlds__float_regs__unify_mode_set_rhs_final_inst_4_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
  MR_Word transform_hlds__float_regs__ArgInst_6,
  MR_Word transform_hlds__float_regs__UnifyMode0_7,
  MR_Word * transform_hlds__float_regs__UnifyMode_8);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_arg_4_p_0(
  MR_Word transform_hlds__float_regs__InstMap_5,
  MR_Word transform_hlds__float_regs__Var_6,
  MR_Word transform_hlds__float_regs__ArgInst0_7,
  MR_Word * transform_hlds__float_regs__ArgInst_8);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0(
  MR_Word transform_hlds__float_regs__InstMap_6,
  MR_Word transform_hlds__float_regs__ConsId_7,
  MR_Word transform_hlds__float_regs__Args_8,
  MR_Word transform_hlds__float_regs__Inst0_9,
  MR_Word * transform_hlds__float_regs__Inst_10);

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
  MR_Box * transform_hlds__float_regs__wrapper_arg_4);

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(
  MR_Word transform_hlds__float_regs__Type0_5,
  MR_Word * transform_hlds__float_regs__Type_6,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_TVarSet_0_14,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_TVarSet_15);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(
  MR_Word transform_hlds__float_regs__PredId_7,
  MR_Integer transform_hlds__float_regs__ProcId_8,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_23,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_25);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_body_9_p_0(
  MR_Word transform_hlds__float_regs__HeadVars_10,
  MR_Word transform_hlds__float_regs__ArgModes_11,
  MR_Word transform_hlds__float_regs__Goal0_12,
  MR_Word * transform_hlds__float_regs__Goal_13,
  MR_Word transform_hlds__float_regs__InstMap0_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_22,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_23,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_25);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(
  MR_Word transform_hlds__float_regs__NonLocals_10,
  MR_Word transform_hlds__float_regs__GoalExpr0_11,
  MR_Word * transform_hlds__float_regs__GoalExpr_12,
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word * transform_hlds__float_regs__InstMap_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_31,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_32,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_33,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_34);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_4,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_5,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_6,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_8);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
  MR_Box * transform_hlds__float_regs__wrapper_arg_4,
  MR_Box transform_hlds__float_regs__wrapper_arg_5,
  MR_Box * transform_hlds__float_regs__wrapper_arg_6,
  MR_Box transform_hlds__float_regs__wrapper_arg_7,
  MR_Box * transform_hlds__float_regs__wrapper_arg_8);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(
  MR_Word transform_hlds__float_regs__Goal0_9,
  MR_Word * transform_hlds__float_regs__Goal_10,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_74,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_75,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_76,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_78);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(
  MR_Word transform_hlds__float_regs__Goal0_9,
  MR_Word * transform_hlds__float_regs__Goal_10,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_15,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_16,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_17,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_19);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(
  MR_Word transform_hlds__float_regs__PredId_12,
  MR_Integer transform_hlds__float_regs__ProcId_13,
  MR_Word transform_hlds__float_regs__ForeignArgs0_14,
  MR_Word * transform_hlds__float_regs__ForeignArgs_15,
  MR_Word * transform_hlds__float_regs__WrapGoals_16,
  MR_Word transform_hlds__float_regs__InstMap0_17,
  MR_Word transform_hlds__float_regs__Context_18,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_24,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_25,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_26,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_27);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(
  MR_Word transform_hlds__float_regs__ClassId_14,
  MR_Integer transform_hlds__float_regs__MethodNum_15,
  MR_Word transform_hlds__float_regs__Vars0_16,
  MR_Word * transform_hlds__float_regs__Vars_17,
  MR_Word transform_hlds__float_regs__Modes0_18,
  MR_Word * transform_hlds__float_regs__Modes_19,
  MR_Word * transform_hlds__float_regs__WrapGoals_20,
  MR_Word transform_hlds__float_regs__InstMap0_21,
  MR_Word transform_hlds__float_regs__Context_22,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_45,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_46,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_48);

static void MR_CALL 
transform_hlds__float_regs__match_args_for_call_11_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_12,
  MR_Word transform_hlds__float_regs__Context_13,
  MR_Word transform_hlds__float_regs__ArgTypes_14,
  MR_Word transform_hlds__float_regs__ArgModes_15,
  MR_Word transform_hlds__float_regs__OrigVars_16,
  MR_Word * transform_hlds__float_regs__Vars_17,
  MR_Word * transform_hlds__float_regs__WrapGoals_18,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_23,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_24,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_26);

static void MR_CALL 
transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
  MR_Word * transform_hlds__float_regs__HeadVar__2_2);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(
  MR_Word transform_hlds__float_regs__CallVar_13,
  MR_Word transform_hlds__float_regs__Vars0_14,
  MR_Word * transform_hlds__float_regs__Vars_15,
  MR_Word * transform_hlds__float_regs__ArgModes_16,
  MR_Word * transform_hlds__float_regs__ArgRegs_17,
  MR_Word * transform_hlds__float_regs__WrapGoals_18,
  MR_Word transform_hlds__float_regs__InstMap0_19,
  MR_Word transform_hlds__float_regs__Context_20,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_36,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_37,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_38,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_39);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(
  MR_Word transform_hlds__float_regs__PredId_13,
  MR_Integer transform_hlds__float_regs__ProcId_14,
  MR_Word transform_hlds__float_regs__Vars0_15,
  MR_Word * transform_hlds__float_regs__Vars_16,
  MR_Word * transform_hlds__float_regs__WrapGoals_17,
  MR_Word * transform_hlds__float_regs__MissingProc_18,
  MR_Word transform_hlds__float_regs__InstMap0_19,
  MR_Word transform_hlds__float_regs__Context_20,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_30,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_31,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_32,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_33);

static void MR_CALL 
transform_hlds__float_regs__fix_branching_goal_8_p_0(
  MR_Word transform_hlds__float_regs__VarsExpectInsts_9,
  MR_Word transform_hlds__float_regs__Goal0_10,
  MR_Word transform_hlds__float_regs__GoalInstMap0_11,
  MR_Word * transform_hlds__float_regs__Goal_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_23,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_24,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_26);

static void MR_CALL 
transform_hlds__float_regs__match_vars_insts_11_p_0(
  MR_Word transform_hlds__float_regs__VarsExpectInsts_12,
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word transform_hlds__float_regs__Context_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Renaming_23,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_25,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_26,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_27,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_29);

static MR_bool MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_7,
  MR_Word transform_hlds__float_regs__NonLocals_8,
  MR_Word transform_hlds__float_regs__InstMaps_9,
  MR_Word * transform_hlds__float_regs__CommonDelta_10,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_20,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_21);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
  MR_Box * transform_hlds__float_regs__wrapper_arg_7);

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
  MR_Box * transform_hlds__float_regs__wrapper_arg_7);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(
  MR_Word transform_hlds__float_regs__Var_11,
  MR_Word transform_hlds__float_regs__Cases0_12,
  MR_Word * transform_hlds__float_regs__Cases_13,
  MR_Word transform_hlds__float_regs__NonLocals_14,
  MR_Word transform_hlds__float_regs__InstMap0_15,
  MR_Word * transform_hlds__float_regs__InstMap_16,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_25,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_26,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_27,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_28);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
  MR_Box * transform_hlds__float_regs__wrapper_arg_7);

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
  MR_Box * transform_hlds__float_regs__wrapper_arg_7);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(
  MR_Word transform_hlds__float_regs__Goals0_10,
  MR_Word * transform_hlds__float_regs__Goals_11,
  MR_Word transform_hlds__float_regs__NonLocals_12,
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word * transform_hlds__float_regs__InstMap_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_21,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_22,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_23,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_24);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(
  MR_Word transform_hlds__float_regs__GoalExpr0_10,
  MR_Word transform_hlds__float_regs__GoalInfo0_11,
  MR_Word * transform_hlds__float_regs__Goal_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_72,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_73,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_74,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_76);

static void MR_CALL 
transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_9,
  MR_Word transform_hlds__float_regs__CellVar_10,
  MR_Word transform_hlds__float_regs__ConsId_11,
  MR_Word transform_hlds__float_regs__Args_12,
  MR_Word transform_hlds__float_regs__GoalInfo0_13,
  MR_Word * transform_hlds__float_regs__GoalInfo_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_21);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_7,
  MR_Word transform_hlds__float_regs__InstMap_8,
  MR_Word transform_hlds__float_regs__ConsId_9,
  MR_Word transform_hlds__float_regs__Args_10,
  MR_Word transform_hlds__float_regs__Inst0_11,
  MR_Word * transform_hlds__float_regs__Inst_12);

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_4(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
  MR_Box * transform_hlds__float_regs__wrapper_arg_4);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(
  MR_Word transform_hlds__float_regs__CellVar_14,
  MR_Word transform_hlds__float_regs__ConsId_15,
  MR_Word transform_hlds__float_regs__OrigVars_16,
  MR_Word * transform_hlds__float_regs__Vars_17,
  MR_Word transform_hlds__float_regs__ArgModes0_18,
  MR_Word * transform_hlds__float_regs__ArgModes_19,
  MR_Word * transform_hlds__float_regs__MaybeWrappedGoals_20,
  MR_Word transform_hlds__float_regs__InstMap0_21,
  MR_Word transform_hlds__float_regs__Context_22,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_45,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_46,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_48);

static void MR_CALL 
transform_hlds__float_regs__match_args_12_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word transform_hlds__float_regs__Context_14,
  MR_Word transform_hlds__float_regs__ArgTypes_15,
  MR_Word transform_hlds__float_regs__Insts_16,
  MR_Word transform_hlds__float_regs__OrigVars_17,
  MR_Word * transform_hlds__float_regs__Vars_18,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_30,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_31,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_32,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_33,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_34,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_35);

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0(
  MR_Word transform_hlds__float_regs__InstMapBefore_13,
  MR_Word transform_hlds__float_regs__Context_14,
  MR_Word transform_hlds__float_regs__ArgType_15,
  MR_Word transform_hlds__float_regs__ExpectInst_16,
  MR_Word transform_hlds__float_regs__OrigVar_17,
  MR_Word * transform_hlds__float_regs__Var_18,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_46,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_47,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_49);

static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
  MR_Box * transform_hlds__float_regs__wrapper_arg_4);

static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0(
  MR_Word transform_hlds__float_regs__OrigVar_10,
  MR_Word transform_hlds__float_regs__OrigVarPredInstInfo_11,
  MR_Word transform_hlds__float_regs__OuterArgRegs_12,
  MR_Word transform_hlds__float_regs__InnerArgRegs_13,
  MR_Word transform_hlds__float_regs__Context_14,
  MR_Word * transform_hlds__float_regs__Var_15,
  MR_Word * transform_hlds__float_regs__UnifyGoal_16,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_62,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_63);

static void MR_CALL 
transform_hlds__float_regs__create_fresh_vars_6_p_0(
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarSet_0_3,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_VarSet_4,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_VarTypes_6);

static void MR_CALL 
transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(
  MR_Word transform_hlds__float_regs__PredInfo_9,
  MR_Word transform_hlds__float_regs__VarSet_10,
  MR_Word transform_hlds__float_regs__Var_11,
  MR_Word transform_hlds__float_regs__Context_12,
  MR_Word transform_hlds__float_regs__ArgTypesA_13,
  MR_Word transform_hlds__float_regs__ArgTypesB_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_20,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_21);

static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0(
  MR_Word transform_hlds__float_regs__PredInstInfo_4,
  MR_Word transform_hlds__float_regs__ArgTypes_5,
  MR_Word * transform_hlds__float_regs__ArgRegs_6);

static MR_bool MR_CALL 
transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_4,
  MR_Word transform_hlds__float_regs__Inst_5,
  MR_Word * transform_hlds__float_regs__PredInstInfo_6);

static void MR_CALL 
transform_hlds__float_regs__do_recompute_atomic_instmap_delta_5_p_0(
  MR_Word transform_hlds__float_regs__Goal0_6,
  MR_Word * transform_hlds__float_regs__Goal_7,
  MR_Word transform_hlds__float_regs__InstMap_8,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_14,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_15);

static void MR_CALL 
transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(
  MR_Word transform_hlds__float_regs__Goal_4,
  MR_Word transform_hlds__float_regs__InstMap0_5,
  MR_Word * transform_hlds__float_regs__InstMap_6);

static void MR_CALL 
transform_hlds__float_regs__finish_call_goal_8_p_0(
  MR_Word transform_hlds__float_regs__WrapGoals_9,
  MR_Word transform_hlds__float_regs__CallGoalExpr0_10,
  MR_Word transform_hlds__float_regs__CallGoalInfo0_11,
  MR_Word * transform_hlds__float_regs__Goal_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_19,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_20,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_21,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_22);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(
  MR_Word transform_hlds__float_regs__PredId_6,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_13,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_14);

static void MR_CALL 
transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(
  MR_Word transform_hlds__float_regs__Type_3,
  MR_Word * transform_hlds__float_regs__RegType_4);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
  MR_Word transform_hlds__float_regs__Seen_7,
  MR_Word transform_hlds__float_regs__Type_8,
  MR_Word transform_hlds__float_regs__BoundInst0_9,
  MR_Word * transform_hlds__float_regs__BoundInst_10);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_from_to_insts_4_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
  MR_Word transform_hlds__float_regs__VarType_6,
  MR_Word transform_hlds__float_regs__ArgFromToInsts0_7,
  MR_Word * transform_hlds__float_regs__ArgFromToInsts_8);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
  MR_Word transform_hlds__float_regs__RealVarType_6,
  MR_Word transform_hlds__float_regs__ArgMode0_7,
  MR_Word * transform_hlds__float_regs__ArgMode_8);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
  MR_Word transform_hlds__float_regs__Seen_7,
  MR_Word transform_hlds__float_regs__VarType_8,
  MR_Word transform_hlds__float_regs__ArgMode0_9,
  MR_Word * transform_hlds__float_regs__ArgMode_10);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
  MR_Word transform_hlds__float_regs__Seen0_7,
  MR_Word transform_hlds__float_regs__Type_8,
  MR_Word transform_hlds__float_regs__Inst0_9,
  MR_Word * transform_hlds__float_regs__Inst_10);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
  MR_Word transform_hlds__float_regs__Seen_7,
  MR_Word transform_hlds__float_regs__ArgTypes_8,
  MR_Word transform_hlds__float_regs__PredInstInfo0_9,
  MR_Word * transform_hlds__float_regs__PredInstInfo_10);

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0(
  MR_Word transform_hlds__float_regs__PolymorphicContext_4,
  MR_Word transform_hlds__float_regs__Type0_5,
  MR_Word * transform_hlds__float_regs__Type_6);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
  MR_Integer transform_hlds__float_regs__ProcId_6,
  MR_Word transform_hlds__float_regs__PredInfo0_7,
  MR_Word * transform_hlds__float_regs__PredInfo_8);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(
  MR_Word transform_hlds__float_regs__PredId_4,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_10);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5);

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);


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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_1[1]))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the generated code in this grade."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Please provide the higher-order inst to ensure correctness"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: missing higher-order inst for variable"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[14])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__float_regs_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_9[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_2[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__get_ho_arg_regs_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__match_arg_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[3])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[4])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[3])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_4[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_7[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__float_regs__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static MR_bool MR_CALL 
transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1489__1_4_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_7,
  MR_Word transform_hlds__float_regs__NonLocals_8,
  MR_Word transform_hlds__float_regs__LambdaHeadVar__1_23,
  MR_Word * transform_hlds__float_regs__LambdaHeadVar__2_24)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;

    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__LambdaHeadVar__1_23);
    if (transform_hlds__float_regs__succeeded)
    {
      hlds__instmap__compute_instmap_delta_4_p_0(transform_hlds__float_regs__InstMap0_7, transform_hlds__float_regs__LambdaHeadVar__1_23, transform_hlds__float_regs__NonLocals_8, transform_hlds__float_regs__LambdaHeadVar__2_24);
      transform_hlds__float_regs__succeeded = MR_TRUE;
    }
    return transform_hlds__float_regs__succeeded;
  }
}

static void MR_CALL 
transform_hlds__float_regs__make_reg_r_headvars_5_p_0(
  MR_Word transform_hlds__float_regs__VarTypes_6,
  MR_Word transform_hlds__float_regs__Var_7,
  MR_Word transform_hlds__float_regs__RegType_8,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;

    switch (transform_hlds__float_regs__RegType_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12 = transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11;
        break;
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__float_regs__VarType_10;
          MR_Word transform_hlds__float_regs__Var_15;

          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_6, transform_hlds__float_regs__Var_7, &transform_hlds__float_regs__VarType_10);
          transform_hlds__float_regs__Var_15 = parse_tree__builtin_lib_types__float_type_0_f_0();
          transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__float_regs__VarType_10, transform_hlds__float_regs__Var_15);
          if (transform_hlds__float_regs__succeeded)
          {
            parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__float_regs__Var_7, transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11, transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12);
          }
          else
            *transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12 = transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__fix_case_goal_8_p_0(
  MR_Word transform_hlds__float_regs__VarsExpectInsts_9,
  MR_Word transform_hlds__float_regs__Case0_10,
  MR_Word transform_hlds__float_regs__GoalInstMap0_11,
  MR_Word * transform_hlds__float_regs__Case_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_19,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_20,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_21,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_22)
{
  {
    MR_Word transform_hlds__float_regs__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_10, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_10, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_10, (MR_Integer) 2)));
    MR_Word transform_hlds__float_regs__Goal_18;

    transform_hlds__float_regs__fix_branching_goal_8_p_0(transform_hlds__float_regs__VarsExpectInsts_9, transform_hlds__float_regs__Goal0_17, transform_hlds__float_regs__GoalInstMap0_11, &transform_hlds__float_regs__Goal_18, transform_hlds__float_regs__STATE_VARIABLE_Info_0_19, transform_hlds__float_regs__STATE_VARIABLE_Info_20, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_21, transform_hlds__float_regs__STATE_VARIABLE_Specs_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__float_regs__Case_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__MainConsId_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__OtherConsIds_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__float_regs__Goal_18));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__set_foreign_arg_var_3_p_0(
  MR_Word transform_hlds__float_regs__Var_4,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_7)
{
  {
    MR_Word transform_hlds__float_regs__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__float_regs__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__float_regs__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__Var_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__float_regs__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__float_regs__Var_12));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(
  MR_Word transform_hlds__float_regs__Var_11,
  MR_Word transform_hlds__float_regs__Type_12,
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word transform_hlds__float_regs__Case0_14,
  MR_Word * transform_hlds__float_regs__Case_15,
  MR_Word * transform_hlds__float_regs__InstMap_16,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_26,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_27,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_29)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_14, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_14, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_14, (MR_Integer) 2)));
    MR_Word transform_hlds__float_regs__ModuleInfo0_22;
    MR_Word transform_hlds__float_regs__InstMap1_23;
    MR_Word transform_hlds__float_regs__ModuleInfo1_24;
    MR_Word transform_hlds__float_regs__Goal_25;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_30_30;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__ModuleInfo0_22);
    hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__float_regs__Var_11, transform_hlds__float_regs__Type_12, transform_hlds__float_regs__MainConsId_19, transform_hlds__float_regs__OtherConsIds_20, transform_hlds__float_regs__InstMap0_13, &transform_hlds__float_regs__InstMap1_23, transform_hlds__float_regs__ModuleInfo0_22, &transform_hlds__float_regs__ModuleInfo1_24);
    transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo1_24, transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__STATE_VARIABLE_Info_30_30);
    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap1_23);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_21, &transform_hlds__float_regs__Goal_25, transform_hlds__float_regs__InstMap1_23, transform_hlds__float_regs__InstMap_16, transform_hlds__float_regs__STATE_VARIABLE_Info_30_30, transform_hlds__float_regs__STATE_VARIABLE_Info_27, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28, transform_hlds__float_regs__STATE_VARIABLE_Specs_29);
    else
    {
      transform_hlds__float_regs__Goal_25 = transform_hlds__float_regs__Goal0_21;
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_29 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_27 = transform_hlds__float_regs__STATE_VARIABLE_Info_30_30;
      *transform_hlds__float_regs__InstMap_16 = transform_hlds__float_regs__InstMap1_23;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__float_regs__Case_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__MainConsId_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__OtherConsIds_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__float_regs__Goal_25));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_9,
  MR_Word transform_hlds__float_regs__Goal0_10,
  MR_Word * transform_hlds__float_regs__Goal_11,
  MR_Word * transform_hlds__float_regs__InstMap_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_15,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_16,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_17,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_18)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;

    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap0_9);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_10, transform_hlds__float_regs__Goal_11, transform_hlds__float_regs__InstMap0_9, transform_hlds__float_regs__InstMap_12, transform_hlds__float_regs__STATE_VARIABLE_Info_0_15, transform_hlds__float_regs__STATE_VARIABLE_Info_16, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_17, transform_hlds__float_regs__STATE_VARIABLE_Specs_18);
    else
    {
      *transform_hlds__float_regs__Goal_11 = transform_hlds__float_regs__Goal0_10;
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_18 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_17;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_16 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_15;
      *transform_hlds__float_regs__InstMap_12 = transform_hlds__float_regs__InstMap0_9;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__unify_mode_set_rhs_final_inst_4_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
  MR_Word transform_hlds__float_regs__ArgInst_6,
  MR_Word transform_hlds__float_regs__UnifyMode0_7,
  MR_Word * transform_hlds__float_regs__UnifyMode_8)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__RI_11;
    MR_Word transform_hlds__float_regs__RF_12;
    MR_Word transform_hlds__float_regs__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyMode0_7, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyMode0_7, (MR_Integer) 1)));

    transform_hlds__float_regs__RI_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_14, (MR_Integer) 0)));
    transform_hlds__float_regs__RF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_14, (MR_Integer) 1)));
    transform_hlds__float_regs__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__float_regs__ModuleInfo_5, transform_hlds__float_regs__RI_11);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__float_regs__ModuleInfo_5, transform_hlds__float_regs__RF_12);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__Var_16;

      {
        transform_hlds__float_regs__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_16, 0) = ((MR_Box) (transform_hlds__float_regs__RI_11));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_16, 1) = ((MR_Box) (transform_hlds__float_regs__ArgInst_6));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__float_regs__UnifyMode_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__Var_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__Var_16));
      }
    }
    else
      *transform_hlds__float_regs__UnifyMode_8 = transform_hlds__float_regs__UnifyMode0_7;
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_arg_4_p_0(
  MR_Word transform_hlds__float_regs__InstMap_5,
  MR_Word transform_hlds__float_regs__Var_6,
  MR_Word transform_hlds__float_regs__ArgInst0_7,
  MR_Word * transform_hlds__float_regs__ArgInst_8)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__VarInst_9;
    MR_Word transform_hlds__float_regs__Var_10;

    hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__InstMap_5, transform_hlds__float_regs__Var_6, &transform_hlds__float_regs__VarInst_9);
    transform_hlds__float_regs__Var_10 = parse_tree__prog_mode__free_inst_0_f_0();
    transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__VarInst_9, transform_hlds__float_regs__Var_10);
    if (transform_hlds__float_regs__succeeded)
      *transform_hlds__float_regs__ArgInst_8 = transform_hlds__float_regs__ArgInst0_7;
    else
      *transform_hlds__float_regs__ArgInst_8 = transform_hlds__float_regs__VarInst_9;
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_ArgInst_8;

    transform_hlds__float_regs__rebuild_cell_bound_inst_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_ArgInst_8);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_ArgInst_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0(
  MR_Word transform_hlds__float_regs__InstMap_6,
  MR_Word transform_hlds__float_regs__ConsId_7,
  MR_Word transform_hlds__float_regs__Args_8,
  MR_Word transform_hlds__float_regs__Inst0_9,
  MR_Word * transform_hlds__float_regs__Inst_10)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__BoundConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__ArgInsts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));

    transform_hlds__float_regs__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(transform_hlds__float_regs__ConsId_7, transform_hlds__float_regs__BoundConsId_11);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__TypeCtorInfo_19_19;
      MR_Word transform_hlds__float_regs__ArgInsts_13;
      MR_Word transform_hlds__float_regs__Var_14;

      {
        transform_hlds__float_regs__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_14, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[6]));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_14, 1) = ((MR_Box) (transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_14, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap_6));
      }
      transform_hlds__float_regs__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
      mercury__list__map_corresponding_4_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], transform_hlds__float_regs__TypeCtorInfo_19_19, transform_hlds__float_regs__TypeCtorInfo_19_19, transform_hlds__float_regs__Var_14, transform_hlds__float_regs__Args_8, transform_hlds__float_regs__ArgInsts0_12, &transform_hlds__float_regs__ArgInsts_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__float_regs__Inst_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__BoundConsId_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__ArgInsts_13));
      }
    }
    else
      *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
  }
}

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
  MR_Box * transform_hlds__float_regs__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv1_Type_6;
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15;

    transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_Type_6, ((MR_Word) transform_hlds__float_regs__wrapper_arg_3), &transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_Type_6));
    *transform_hlds__float_regs__wrapper_arg_4 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15));
  }
}

static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(
  MR_Word transform_hlds__float_regs__Type0_5,
  MR_Word * transform_hlds__float_regs__Type_6,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_TVarSet_0_14,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_TVarSet_15)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__Purity_8;
    MR_Word transform_hlds__float_regs__PredOrFunc_9;
    MR_Word transform_hlds__float_regs__ArgTypes0_11;

    transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__Type0_5, &transform_hlds__float_regs__Purity_8, &transform_hlds__float_regs__PredOrFunc_9, &transform_hlds__float_regs__ArgTypes0_11);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      MR_Word transform_hlds__float_regs__ArgTypes_12;
      MR_Box transform_hlds__float_regs__conv2_STATE_VARIABLE_TVarSet_15;

      mercury__list__map_foldl_5_p_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__float_regs_scalar_common_1[2], (MR_Word) &transform_hlds__float_regs_scalar_common_3[16], transform_hlds__float_regs__ArgTypes0_11, &transform_hlds__float_regs__ArgTypes_12, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_TVarSet_0_14)), &transform_hlds__float_regs__conv2_STATE_VARIABLE_TVarSet_15);
      *transform_hlds__float_regs__STATE_VARIABLE_TVarSet_15 = ((MR_Word) transform_hlds__float_regs__conv2_STATE_VARIABLE_TVarSet_15);
      parse_tree__prog_type__construct_higher_order_type_5_p_0(transform_hlds__float_regs__Purity_8, transform_hlds__float_regs__PredOrFunc_9, transform_hlds__float_regs__ArgTypes_12, transform_hlds__float_regs__Type_6);
    }
    else
    {
      MR_Word transform_hlds__float_regs__TVar_13;

      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__float_regs__TVar_13, transform_hlds__float_regs__STATE_VARIABLE_TVarSet_0_14, transform_hlds__float_regs__STATE_VARIABLE_TVarSet_15);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__float_regs__Type_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__TVar_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(
  MR_Word transform_hlds__float_regs__PredId_7,
  MR_Integer transform_hlds__float_regs__ProcId_8,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_23,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_25)
{
  {
    MR_Word transform_hlds__float_regs__TypeCtorInfo_29_29;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_30_30;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_32_32;
    MR_Word transform_hlds__float_regs__PredTable0_11;
    MR_Word transform_hlds__float_regs__PredInfo0_12;
    MR_Word transform_hlds__float_regs__ProcTable0_13;
    MR_Word transform_hlds__float_regs__ProcInfo0_14;
    MR_Word transform_hlds__float_regs__ProcInfo_15;
    MR_Word transform_hlds__float_regs__PredInfo1_16;
    MR_Word transform_hlds__float_regs__ProcTable1_17;
    MR_Word transform_hlds__float_regs__ProcTable_18;
    MR_Word transform_hlds__float_regs__PredInfo_19;
    MR_Word transform_hlds__float_regs__PredTable1_20;
    MR_Word transform_hlds__float_regs__PredTable_21;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word transform_hlds__float_regs__TypeVarSet0_45;
    MR_Word transform_hlds__float_regs__HeadVars_46;
    MR_Word transform_hlds__float_regs__VarSet0_47;
    MR_Word transform_hlds__float_regs__VarTypes0_48;
    MR_Word transform_hlds__float_regs__ArgModes_49;
    MR_Word transform_hlds__float_regs__Goal0_50;
    MR_Word transform_hlds__float_regs__InstMap0_51;
    MR_Word transform_hlds__float_regs__RttiVarMaps0_52;
    MR_Word transform_hlds__float_regs__InstVarSet0_53;
    MR_Word transform_hlds__float_regs__HasParallelConj_54;
    MR_Word transform_hlds__float_regs__Info0_55;
    MR_Word transform_hlds__float_regs__Goal1_56;
    MR_Word transform_hlds__float_regs__Info1_57;
    MR_Word transform_hlds__float_regs__VarSet1_58;
    MR_Word transform_hlds__float_regs__VarTypes1_59;
    MR_Word transform_hlds__float_regs__TypeVarSet_60;
    MR_Word transform_hlds__float_regs__RttiVarMaps1_61;
    MR_Word transform_hlds__float_regs__MustRecomputeNonLocals_62;
    MR_Word transform_hlds__float_regs__Goal2_64;
    MR_Word transform_hlds__float_regs__Goal_68;
    MR_Word transform_hlds__float_regs__VarSet_69;
    MR_Word transform_hlds__float_regs__VarTypes_70;
    MR_Word transform_hlds__float_regs__RttiVarMaps_71;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_49_73;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_53_77;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_54_78;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_55_79;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_56_80;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_57_81;
    MR_Box transform_hlds__float_regs__conv0_PredInfo0_12;
    MR_Box transform_hlds__float_regs__conv1_ProcInfo0_14;

    hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__float_regs__PredTable0_11);
    transform_hlds__float_regs__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    transform_hlds__float_regs__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__lookup_3_p_0(transform_hlds__float_regs__TypeCtorInfo_29_29, transform_hlds__float_regs__TypeCtorInfo_30_30, transform_hlds__float_regs__PredTable0_11, ((MR_Box) (transform_hlds__float_regs__PredId_7)), &transform_hlds__float_regs__conv0_PredInfo0_12);
    transform_hlds__float_regs__PredInfo0_12 = ((MR_Word) transform_hlds__float_regs__conv0_PredInfo0_12);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__float_regs__PredInfo0_12, &transform_hlds__float_regs__ProcTable0_13);
    transform_hlds__float_regs__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__ProcTable0_13, transform_hlds__float_regs__ProcId_8, &transform_hlds__float_regs__conv1_ProcInfo0_14);
    transform_hlds__float_regs__ProcInfo0_14 = ((MR_Word) transform_hlds__float_regs__conv1_ProcInfo0_14);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__float_regs__PredInfo0_12, &transform_hlds__float_regs__TypeVarSet0_45);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__HeadVars_46);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__VarSet0_47);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__VarTypes0_48);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__ArgModes_49);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__Goal0_50);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__float_regs__ProcInfo0_14, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__float_regs__InstMap0_51);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__RttiVarMaps0_52);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__InstVarSet0_53);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__HasParallelConj_54);
    transform_hlds__lambda__init_lambda_info_9_p_0(transform_hlds__float_regs__VarSet0_47, transform_hlds__float_regs__VarTypes0_48, transform_hlds__float_regs__TypeVarSet0_45, transform_hlds__float_regs__InstVarSet0_53, transform_hlds__float_regs__RttiVarMaps0_52, transform_hlds__float_regs__HasParallelConj_54, transform_hlds__float_regs__PredInfo0_12, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__float_regs__Info0_55);
    transform_hlds__float_regs__insert_reg_wrappers_proc_body_9_p_0(transform_hlds__float_regs__HeadVars_46, transform_hlds__float_regs__ArgModes_49, transform_hlds__float_regs__Goal0_50, &transform_hlds__float_regs__Goal1_56, transform_hlds__float_regs__InstMap0_51, transform_hlds__float_regs__Info0_55, &transform_hlds__float_regs__Info1_57, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24, transform_hlds__float_regs__STATE_VARIABLE_Specs_25);
    transform_hlds__lambda__lambda_info_get_varset_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__VarSet1_58);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__VarTypes1_59);
    transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__TypeVarSet_60);
    transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__RttiVarMaps1_61);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_49_73);
    transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__MustRecomputeNonLocals_62);
    switch (transform_hlds__float_regs__MustRecomputeNonLocals_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__float_regs__Goal2_64 = transform_hlds__float_regs__Goal1_56;
          transform_hlds__float_regs__VarSet_69 = transform_hlds__float_regs__VarSet1_58;
          transform_hlds__float_regs__VarTypes_70 = transform_hlds__float_regs__VarTypes1_59;
          transform_hlds__float_regs__RttiVarMaps_71 = transform_hlds__float_regs__RttiVarMaps1_61;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__float_regs___Warnings_63;

          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__float_regs__HeadVars_46, &transform_hlds__float_regs___Warnings_63, transform_hlds__float_regs__Goal1_56, &transform_hlds__float_regs__Goal2_64, transform_hlds__float_regs__VarSet1_58, &transform_hlds__float_regs__VarSet_69, transform_hlds__float_regs__VarTypes1_59, &transform_hlds__float_regs__VarTypes_70, transform_hlds__float_regs__RttiVarMaps1_61, &transform_hlds__float_regs__RttiVarMaps_71);
        }
        break;
    }
    check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__float_regs__Goal2_64, &transform_hlds__float_regs__Goal_68, transform_hlds__float_regs__VarTypes_70, transform_hlds__float_regs__InstVarSet0_53, transform_hlds__float_regs__InstMap0_51, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_49_73, &transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_26_26);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__float_regs__Goal_68, transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_53_77);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__float_regs__VarSet_69, transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_53_77, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_54_78);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__float_regs__VarTypes_70, transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_54_78, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_55_79);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__float_regs__RttiVarMaps_71, transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_55_79, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_56_80);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__float_regs__HeadVars_46, transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_56_80, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_57_81);
    hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_57_81, &transform_hlds__float_regs__ProcInfo_15);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__float_regs__TypeVarSet_60, transform_hlds__float_regs__PredInfo0_12, &transform_hlds__float_regs__PredInfo1_16);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__float_regs__PredInfo1_16, &transform_hlds__float_regs__ProcTable1_17);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__ProcId_8, ((MR_Box) (transform_hlds__float_regs__ProcInfo_15)), transform_hlds__float_regs__ProcTable1_17, &transform_hlds__float_regs__ProcTable_18);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__float_regs__ProcTable_18, transform_hlds__float_regs__PredInfo1_16, &transform_hlds__float_regs__PredInfo_19);
    hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_26_26, &transform_hlds__float_regs__PredTable1_20);
    mercury__map__det_update_4_p_0(transform_hlds__float_regs__TypeCtorInfo_29_29, transform_hlds__float_regs__TypeCtorInfo_30_30, ((MR_Box) (transform_hlds__float_regs__PredId_7)), ((MR_Box) (transform_hlds__float_regs__PredInfo_19)), transform_hlds__float_regs__PredTable1_20, &transform_hlds__float_regs__PredTable_21);
    hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__float_regs__PredTable_21, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_26_26, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_23);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_body_9_p_0(
  MR_Word transform_hlds__float_regs__HeadVars_10,
  MR_Word transform_hlds__float_regs__ArgModes_11,
  MR_Word transform_hlds__float_regs__Goal0_12,
  MR_Word * transform_hlds__float_regs__Goal_13,
  MR_Word transform_hlds__float_regs__InstMap0_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_22,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_23,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_25)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__Goal1_17;
    MR_Word transform_hlds__float_regs__InstMap1_18;
    MR_Word transform_hlds__float_regs__ModuleInfo_19;
    MR_Word transform_hlds__float_regs__FinalInsts_20;
    MR_Word transform_hlds__float_regs__VarsExpectInsts_21;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_26_26;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27;

    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap0_14);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_12, &transform_hlds__float_regs__Goal1_17, transform_hlds__float_regs__InstMap0_14, &transform_hlds__float_regs__InstMap1_18, transform_hlds__float_regs__STATE_VARIABLE_Info_0_22, &transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24, &transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27);
    else
    {
      transform_hlds__float_regs__Goal1_17 = transform_hlds__float_regs__Goal0_12;
      transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24;
      transform_hlds__float_regs__STATE_VARIABLE_Info_26_26 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_22;
      transform_hlds__float_regs__InstMap1_18 = transform_hlds__float_regs__InstMap0_14;
    }
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, &transform_hlds__float_regs__ModuleInfo_19);
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_19, transform_hlds__float_regs__ArgModes_11, &transform_hlds__float_regs__FinalInsts_20);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, transform_hlds__float_regs__HeadVars_10, transform_hlds__float_regs__FinalInsts_20, &transform_hlds__float_regs__VarsExpectInsts_21);
    transform_hlds__float_regs__fix_branching_goal_8_p_0(transform_hlds__float_regs__VarsExpectInsts_21, transform_hlds__float_regs__Goal1_17, transform_hlds__float_regs__InstMap1_18, transform_hlds__float_regs__Goal_13, transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, transform_hlds__float_regs__STATE_VARIABLE_Info_23, transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27, transform_hlds__float_regs__STATE_VARIABLE_Specs_25);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(
  MR_Word transform_hlds__float_regs__NonLocals_10,
  MR_Word transform_hlds__float_regs__GoalExpr0_11,
  MR_Word * transform_hlds__float_regs__GoalExpr_12,
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word * transform_hlds__float_regs__InstMap_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_31,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_32,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_33,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_34)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_11, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__Cond0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_11, (MR_Integer) 2)));
    MR_Word transform_hlds__float_regs__Then0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_11, (MR_Integer) 3)));
    MR_Word transform_hlds__float_regs__Else0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_11, (MR_Integer) 4)));
    MR_Word transform_hlds__float_regs__Cond_21;
    MR_Word transform_hlds__float_regs__InstMapCond_22;
    MR_Word transform_hlds__float_regs__Then1_23;
    MR_Word transform_hlds__float_regs__InstMapThen_24;
    MR_Word transform_hlds__float_regs__Else1_25;
    MR_Word transform_hlds__float_regs__InstMapElse_26;
    MR_Word transform_hlds__float_regs__CommonDelta_27;
    MR_Word transform_hlds__float_regs__Then_29;
    MR_Word transform_hlds__float_regs__Else_30;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_35_35;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_37_37;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_39_39;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40;
    MR_Word transform_hlds__float_regs__Var_41;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_42_42;
    MR_Word transform_hlds__float_regs__Var_43;

    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap0_13);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Cond0_18, &transform_hlds__float_regs__Cond_21, transform_hlds__float_regs__InstMap0_13, &transform_hlds__float_regs__InstMapCond_22, transform_hlds__float_regs__STATE_VARIABLE_Info_0_31, &transform_hlds__float_regs__STATE_VARIABLE_Info_35_35, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_33, &transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36);
    else
    {
      transform_hlds__float_regs__Cond_21 = transform_hlds__float_regs__Cond0_18;
      transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_33;
      transform_hlds__float_regs__STATE_VARIABLE_Info_35_35 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_31;
      transform_hlds__float_regs__InstMapCond_22 = transform_hlds__float_regs__InstMap0_13;
    }
    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMapCond_22);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Then0_19, &transform_hlds__float_regs__Then1_23, transform_hlds__float_regs__InstMapCond_22, &transform_hlds__float_regs__InstMapThen_24, transform_hlds__float_regs__STATE_VARIABLE_Info_35_35, &transform_hlds__float_regs__STATE_VARIABLE_Info_37_37, transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36, &transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38);
    else
    {
      transform_hlds__float_regs__Then1_23 = transform_hlds__float_regs__Then0_19;
      transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38 = transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36;
      transform_hlds__float_regs__STATE_VARIABLE_Info_37_37 = transform_hlds__float_regs__STATE_VARIABLE_Info_35_35;
      transform_hlds__float_regs__InstMapThen_24 = transform_hlds__float_regs__InstMapCond_22;
    }
    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap0_13);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Else0_20, &transform_hlds__float_regs__Else1_25, transform_hlds__float_regs__InstMap0_13, &transform_hlds__float_regs__InstMapElse_26, transform_hlds__float_regs__STATE_VARIABLE_Info_37_37, &transform_hlds__float_regs__STATE_VARIABLE_Info_39_39, transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38, &transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40);
    else
    {
      transform_hlds__float_regs__Else1_25 = transform_hlds__float_regs__Else0_20;
      transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40 = transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38;
      transform_hlds__float_regs__STATE_VARIABLE_Info_39_39 = transform_hlds__float_regs__STATE_VARIABLE_Info_37_37;
      transform_hlds__float_regs__InstMapElse_26 = transform_hlds__float_regs__InstMap0_13;
    }
    {
      transform_hlds__float_regs__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_43, 0) = ((MR_Box) (transform_hlds__float_regs__InstMapElse_26));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__float_regs__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_41, 0) = ((MR_Box) (transform_hlds__float_regs__InstMapThen_24));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_41, 1) = ((MR_Box) (transform_hlds__float_regs__Var_43));
    }
    transform_hlds__float_regs__common_instmap_delta_6_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__NonLocals_10, transform_hlds__float_regs__Var_41, &transform_hlds__float_regs__CommonDelta_27, transform_hlds__float_regs__STATE_VARIABLE_Info_39_39, &transform_hlds__float_regs__STATE_VARIABLE_Info_42_42);
    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(transform_hlds__float_regs__CommonDelta_27);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__VarsExpectInsts_28;
      MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_45_45;
      MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_46_46;

      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__float_regs__CommonDelta_27, &transform_hlds__float_regs__VarsExpectInsts_28);
      transform_hlds__float_regs__fix_branching_goal_8_p_0(transform_hlds__float_regs__VarsExpectInsts_28, transform_hlds__float_regs__Then1_23, transform_hlds__float_regs__InstMapThen_24, &transform_hlds__float_regs__Then_29, transform_hlds__float_regs__STATE_VARIABLE_Info_42_42, &transform_hlds__float_regs__STATE_VARIABLE_Info_45_45, transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40, &transform_hlds__float_regs__STATE_VARIABLE_Specs_46_46);
      transform_hlds__float_regs__fix_branching_goal_8_p_0(transform_hlds__float_regs__VarsExpectInsts_28, transform_hlds__float_regs__Else1_25, transform_hlds__float_regs__InstMapElse_26, &transform_hlds__float_regs__Else_30, transform_hlds__float_regs__STATE_VARIABLE_Info_45_45, transform_hlds__float_regs__STATE_VARIABLE_Info_32, transform_hlds__float_regs__STATE_VARIABLE_Specs_46_46, transform_hlds__float_regs__STATE_VARIABLE_Specs_34);
    }
    else
    {
      transform_hlds__float_regs__Then_29 = transform_hlds__float_regs__Then1_23;
      transform_hlds__float_regs__Else_30 = transform_hlds__float_regs__Else1_25;
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_34 = transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_32 = transform_hlds__float_regs__STATE_VARIABLE_Info_42_42;
    }
    hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__CommonDelta_27, transform_hlds__float_regs__InstMap_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__float_regs__GoalExpr_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__Vars_17));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__Cond_21));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__float_regs__Then_29));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__float_regs__Else_30));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_4,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_5,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_6,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;

    if ((transform_hlds__float_regs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *transform_hlds__float_regs__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_8 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_6 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_5;
      *transform_hlds__float_regs__STATE_VARIABLE_InstMap_4 = transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3;
    }
    else
    {
      MR_Word transform_hlds__float_regs__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__float_regs__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__float_regs__Goal1_24;
      MR_Word transform_hlds__float_regs__Goal1List_25;
      MR_Word transform_hlds__float_regs__Goals1_26;
      MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_33_33;
      MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_34_34;
      MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_35_35;

      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3);
      if (transform_hlds__float_regs__succeeded)
        transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_18, &transform_hlds__float_regs__Goal1_24, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3, &transform_hlds__float_regs__STATE_VARIABLE_InstMap_33_33, transform_hlds__float_regs__STATE_VARIABLE_Info_0_5, &transform_hlds__float_regs__STATE_VARIABLE_Info_34_34, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7, &transform_hlds__float_regs__STATE_VARIABLE_Specs_35_35);
      else
      {
        transform_hlds__float_regs__Goal1_24 = transform_hlds__float_regs__Goal0_18;
        transform_hlds__float_regs__STATE_VARIABLE_Specs_35_35 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7;
        transform_hlds__float_regs__STATE_VARIABLE_Info_34_34 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_5;
        transform_hlds__float_regs__STATE_VARIABLE_InstMap_33_33 = transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3;
      }
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__float_regs__Goal1_24, &transform_hlds__float_regs__Goal1List_25);
      transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(transform_hlds__float_regs__Goals0_19, &transform_hlds__float_regs__Goals1_26, transform_hlds__float_regs__STATE_VARIABLE_InstMap_33_33, transform_hlds__float_regs__STATE_VARIABLE_InstMap_4, transform_hlds__float_regs__STATE_VARIABLE_Info_34_34, transform_hlds__float_regs__STATE_VARIABLE_Info_6, transform_hlds__float_regs__STATE_VARIABLE_Specs_35_35, transform_hlds__float_regs__STATE_VARIABLE_Specs_8);
      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__float_regs__Goal1List_25, transform_hlds__float_regs__Goals1_26, transform_hlds__float_regs__HeadVar__2_2);
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
  MR_Box * transform_hlds__float_regs__wrapper_arg_4,
  MR_Box transform_hlds__float_regs__wrapper_arg_5,
  MR_Box * transform_hlds__float_regs__wrapper_arg_6,
  MR_Box transform_hlds__float_regs__wrapper_arg_7,
  MR_Box * transform_hlds__float_regs__wrapper_arg_8)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv3_Goal_10;
    MR_Word transform_hlds__float_regs__conv2_STATE_VARIABLE_InstMap_15;
    MR_Word transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_17;
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_19;

    transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv3_Goal_10, ((MR_Word) transform_hlds__float_regs__wrapper_arg_3), &transform_hlds__float_regs__conv2_STATE_VARIABLE_InstMap_15, ((MR_Word) transform_hlds__float_regs__wrapper_arg_5), &transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_17, ((MR_Word) transform_hlds__float_regs__wrapper_arg_7), &transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_19);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv3_Goal_10));
    *transform_hlds__float_regs__wrapper_arg_4 = ((MR_Box) (transform_hlds__float_regs__conv2_STATE_VARIABLE_InstMap_15));
    *transform_hlds__float_regs__wrapper_arg_6 = ((MR_Box) (transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_17));
    *transform_hlds__float_regs__wrapper_arg_8 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(
  MR_Word transform_hlds__float_regs__Goal0_9,
  MR_Word * transform_hlds__float_regs__Goal_10,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_74,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_75,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_76,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_78)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal0_9, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__float_regs__SubGoal0_30 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__GoalExpr0_14), (MR_Integer) 0);
          MR_Word transform_hlds__float_regs__SubGoal_31;
          MR_Word transform_hlds__float_regs__GoalExpr_134;
          MR_Word transform_hlds__float_regs__Var_32;

          transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(transform_hlds__float_regs__SubGoal0_30, &transform_hlds__float_regs__SubGoal_31, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, &transform_hlds__float_regs__Var_32, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
          transform_hlds__float_regs__GoalExpr_134 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__float_regs__SubGoal_31);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__float_regs__Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_134));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
          }
          transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(*transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74);
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(transform_hlds__float_regs__GoalExpr0_14, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__float_regs__PredId_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)));
          MR_Integer transform_hlds__float_regs__ProcId_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
          MR_Word transform_hlds__float_regs__Args0_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
          MR_Word transform_hlds__float_regs__Builtin_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 3)));
          MR_Word transform_hlds__float_regs__MaybeUnifyContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 4)));
          MR_Word transform_hlds__float_regs__SymName_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 5)));
          MR_Word transform_hlds__float_regs__Context_45;
          MR_Word transform_hlds__float_regs__Args_46;
          MR_Word transform_hlds__float_regs__WrapGoals_47;
          MR_Word transform_hlds__float_regs__MissingProc_48;
          MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_97_97;

          transform_hlds__float_regs__Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
          transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(transform_hlds__float_regs__PredId_39, transform_hlds__float_regs__ProcId_40, transform_hlds__float_regs__Args0_41, &transform_hlds__float_regs__Args_46, &transform_hlds__float_regs__WrapGoals_47, &transform_hlds__float_regs__MissingProc_48, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__Context_45, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, &transform_hlds__float_regs__STATE_VARIABLE_Info_97_97, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
          switch (transform_hlds__float_regs__MissingProc_48) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__float_regs__GoalExpr1_49;

                {
                  transform_hlds__float_regs__GoalExpr1_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 0) = ((MR_Box) (transform_hlds__float_regs__PredId_39));
                  MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 1) = ((MR_Box) (transform_hlds__float_regs__ProcId_40));
                  MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 2) = ((MR_Box) (transform_hlds__float_regs__Args_46));
                  MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 3) = ((MR_Box) (transform_hlds__float_regs__Builtin_42));
                  MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 4) = ((MR_Box) (transform_hlds__float_regs__MaybeUnifyContext_43));
                  MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 5) = ((MR_Box) (transform_hlds__float_regs__SymName_44));
                }
                transform_hlds__float_regs__finish_call_goal_8_p_0(transform_hlds__float_regs__WrapGoals_47, transform_hlds__float_regs__GoalExpr1_49, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_97_97, transform_hlds__float_regs__STATE_VARIABLE_Info_76);
              }
              break;
            case (MR_Integer) 1:
              {
                *transform_hlds__float_regs__Goal_10 = transform_hlds__float_regs__Goal0_9;
                *transform_hlds__float_regs__STATE_VARIABLE_InstMap_74 = transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73;
                *transform_hlds__float_regs__STATE_VARIABLE_Info_76 = transform_hlds__float_regs__STATE_VARIABLE_Info_97_97;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__float_regs__GenericCall_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__Modes0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 3)));
              MR_Word transform_hlds__float_regs__Determinism_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 5)));
              MR_Word transform_hlds__float_regs__Args0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs___MaybeArgRegs0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) transform_hlds__float_regs__GenericCall_50)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word transform_hlds__float_regs__CallVar_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 0)));
                    MR_Word transform_hlds__float_regs__Modes_58;
                    MR_Word transform_hlds__float_regs__ArgsRegs_59;
                    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_92_92;
                    MR_Word transform_hlds__float_regs__Var_94;
                    MR_Word transform_hlds__float_regs__Context_145;
                    MR_Word transform_hlds__float_regs__Args_146;
                    MR_Word transform_hlds__float_regs__WrapGoals_147;
                    MR_Word transform_hlds__float_regs__GoalExpr1_148;
                    MR_Word transform_hlds__float_regs___Purity_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 1)));
                    MR_Word transform_hlds__float_regs___PredOrFunc_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 2)));
                    MR_Integer transform_hlds__float_regs___Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 3)));

                    transform_hlds__float_regs__Context_145 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
                    transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(transform_hlds__float_regs__CallVar_54, transform_hlds__float_regs__Args0_158, &transform_hlds__float_regs__Args_146, &transform_hlds__float_regs__Modes_58, &transform_hlds__float_regs__ArgsRegs_59, &transform_hlds__float_regs__WrapGoals_147, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__Context_145, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, &transform_hlds__float_regs__STATE_VARIABLE_Info_92_92, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                    {
                      transform_hlds__float_regs__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_94, 0) = ((MR_Box) (transform_hlds__float_regs__ArgsRegs_59));
                    }
                    {
                      transform_hlds__float_regs__GoalExpr1_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 1) = ((MR_Box) (transform_hlds__float_regs__GenericCall_50));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 2) = ((MR_Box) (transform_hlds__float_regs__Args_146));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 3) = ((MR_Box) (transform_hlds__float_regs__Modes_58));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 4) = ((MR_Box) (transform_hlds__float_regs__Var_94));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 5) = ((MR_Box) (transform_hlds__float_regs__Determinism_53));
                    }
                    transform_hlds__float_regs__finish_call_goal_8_p_0(transform_hlds__float_regs__WrapGoals_147, transform_hlds__float_regs__GoalExpr1_148, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_92_92, transform_hlds__float_regs__STATE_VARIABLE_Info_76);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer transform_hlds__float_regs__MethodNum_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 1)));
                    MR_Word transform_hlds__float_regs__ClassId_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 2)));
                    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_87_87;
                    MR_Word transform_hlds__float_regs__Context_149;
                    MR_Word transform_hlds__float_regs__Args_150;
                    MR_Word transform_hlds__float_regs__WrapGoals_151;
                    MR_Word transform_hlds__float_regs__GoalExpr1_152;
                    MR_Word transform_hlds__float_regs__Modes_153;
                    MR_Word transform_hlds__float_regs___TCIVar_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 0)));
                    MR_Word transform_hlds__float_regs__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 3)));

                    transform_hlds__float_regs__Context_149 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
                    transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(transform_hlds__float_regs__ClassId_62, transform_hlds__float_regs__MethodNum_61, transform_hlds__float_regs__Args0_158, &transform_hlds__float_regs__Args_150, transform_hlds__float_regs__Modes0_51, &transform_hlds__float_regs__Modes_153, &transform_hlds__float_regs__WrapGoals_151, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__Context_149, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, &transform_hlds__float_regs__STATE_VARIABLE_Info_87_87, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                    {
                      transform_hlds__float_regs__GoalExpr1_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 1) = ((MR_Box) (transform_hlds__float_regs__GenericCall_50));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 2) = ((MR_Box) (transform_hlds__float_regs__Args_150));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 3) = ((MR_Box) (transform_hlds__float_regs__Modes_153));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 5) = ((MR_Box) (transform_hlds__float_regs__Determinism_53));
                    }
                    transform_hlds__float_regs__finish_call_goal_8_p_0(transform_hlds__float_regs__WrapGoals_151, transform_hlds__float_regs__GoalExpr1_152, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_87_87, transform_hlds__float_regs__STATE_VARIABLE_Info_76);
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    *transform_hlds__float_regs__Goal_10 = transform_hlds__float_regs__Goal0_9;
                    hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74);
                    *transform_hlds__float_regs__STATE_VARIABLE_Info_76 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_75;
                    *transform_hlds__float_regs__STATE_VARIABLE_Specs_78 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__float_regs__Attributes_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__ForeignArgs0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 4)));
              MR_Word transform_hlds__float_regs__ExtraArgs_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 5)));
              MR_Word transform_hlds__float_regs__MaybeTraceRuntimeCond_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 6)));
              MR_Word transform_hlds__float_regs__PragmaImpl_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 7)));
              MR_Word transform_hlds__float_regs__ForeignArgs_71;
              MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_82_82;
              MR_Word transform_hlds__float_regs__PredId_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
              MR_Integer transform_hlds__float_regs__ProcId_164 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 3)));
              MR_Word transform_hlds__float_regs__Context_165;
              MR_Word transform_hlds__float_regs__WrapGoals_166;
              MR_Word transform_hlds__float_regs__GoalExpr1_167;

              transform_hlds__float_regs__Context_165 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
              transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(transform_hlds__float_regs__PredId_163, transform_hlds__float_regs__ProcId_164, transform_hlds__float_regs__ForeignArgs0_67, &transform_hlds__float_regs__ForeignArgs_71, &transform_hlds__float_regs__WrapGoals_166, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__Context_165, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, &transform_hlds__float_regs__STATE_VARIABLE_Info_82_82, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
              {
                transform_hlds__float_regs__GoalExpr1_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 1) = ((MR_Box) (transform_hlds__float_regs__Attributes_66));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 2) = ((MR_Box) (transform_hlds__float_regs__PredId_163));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 3) = ((MR_Box) (transform_hlds__float_regs__ProcId_164));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 4) = ((MR_Box) (transform_hlds__float_regs__ForeignArgs_71));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 5) = ((MR_Box) (transform_hlds__float_regs__ExtraArgs_68));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 6) = ((MR_Box) (transform_hlds__float_regs__MaybeTraceRuntimeCond_69));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 7) = ((MR_Box) (transform_hlds__float_regs__PragmaImpl_70));
              }
              transform_hlds__float_regs__finish_call_goal_8_p_0(transform_hlds__float_regs__WrapGoals_166, transform_hlds__float_regs__GoalExpr1_167, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_82_82, transform_hlds__float_regs__STATE_VARIABLE_Info_76);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__float_regs__ConjType_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs__Goals_23;
              MR_Word transform_hlds__float_regs__GoalExpr_24;
              MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_122_122;

              switch (transform_hlds__float_regs__ConjType_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__float_regs__TypeCtorInfo_176_176 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    MR_Box transform_hlds__float_regs__conv6_STATE_VARIABLE_InstMap_122_122;
                    MR_Box transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_76;
                    MR_Box transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_78;

                    mercury__list__map_foldl3_9_p_1(transform_hlds__float_regs__TypeCtorInfo_176_176, transform_hlds__float_regs__TypeCtorInfo_176_176, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0, (MR_Word) &transform_hlds__float_regs_scalar_common_1[0], (MR_Word) &transform_hlds__float_regs_scalar_common_3[15], transform_hlds__float_regs__Goals0_22, &transform_hlds__float_regs__Goals_23, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73)), &transform_hlds__float_regs__conv6_STATE_VARIABLE_InstMap_122_122, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_0_75)), &transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_76, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77)), &transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_78);
                    transform_hlds__float_regs__STATE_VARIABLE_InstMap_122_122 = ((MR_Word) transform_hlds__float_regs__conv6_STATE_VARIABLE_InstMap_122_122);
                    *transform_hlds__float_regs__STATE_VARIABLE_Info_76 = ((MR_Word) transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_76);
                    *transform_hlds__float_regs__STATE_VARIABLE_Specs_78 = ((MR_Word) transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_78);
                  }
                  break;
                case (MR_Integer) 0:
                  transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(transform_hlds__float_regs__Goals0_22, &transform_hlds__float_regs__Goals_23, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, &transform_hlds__float_regs__STATE_VARIABLE_InstMap_122_122, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                  break;
              }
              {
                transform_hlds__float_regs__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__float_regs__ConjType_21));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__float_regs__Goals_23));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__float_regs__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_24));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
              }
              transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(*transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_122_122, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__float_regs__NonLocals_25;
              MR_Word transform_hlds__float_regs__Goals0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__Goals_130;
              MR_Word transform_hlds__float_regs__GoalExpr_131;

              transform_hlds__float_regs__NonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
              transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(transform_hlds__float_regs__Goals0_129, &transform_hlds__float_regs__Goals_130, transform_hlds__float_regs__NonLocals_25, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
              {
                transform_hlds__float_regs__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_131, 1) = ((MR_Box) (transform_hlds__float_regs__Goals_130));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__float_regs__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_131));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__float_regs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 3)));
              MR_Word transform_hlds__float_regs__Cases_29;
              MR_Word transform_hlds__float_regs__GoalExpr_132;
              MR_Word transform_hlds__float_regs__NonLocals_133;

              transform_hlds__float_regs__NonLocals_133 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
              transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(transform_hlds__float_regs__Var_26, transform_hlds__float_regs__Cases0_28, &transform_hlds__float_regs__Cases_29, transform_hlds__float_regs__NonLocals_133, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
              {
                transform_hlds__float_regs__GoalExpr_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_132, 1) = ((MR_Box) (transform_hlds__float_regs__Var_26));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_132, 2) = ((MR_Box) (transform_hlds__float_regs__CanFail_27));
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_132, 3) = ((MR_Box) (transform_hlds__float_regs__Cases_29));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__float_regs__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_132));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__float_regs__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__SubGoal0_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs__Var_104;
              MR_Word transform_hlds__float_regs__Var_34;

              transform_hlds__float_regs__succeeded = ((((MR_tag((MR_Word) transform_hlds__float_regs__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (transform_hlds__float_regs__succeeded)
              {
                transform_hlds__float_regs__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Reason_33, (MR_Integer) 1)));
                transform_hlds__float_regs__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Reason_33, (MR_Integer) 2)));
                transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__Var_104 == (MR_Integer) 1);
              }
              if (transform_hlds__float_regs__succeeded)
              {
                *transform_hlds__float_regs__Goal_10 = transform_hlds__float_regs__Goal0_9;
                hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74);
                *transform_hlds__float_regs__STATE_VARIABLE_Specs_78 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77;
                *transform_hlds__float_regs__STATE_VARIABLE_Info_76 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_75;
              }
              else
              {
                MR_Word transform_hlds__float_regs__GoalExpr_136;
                MR_Word transform_hlds__float_regs__SubGoal_137;

                transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(transform_hlds__float_regs__SubGoal0_141, &transform_hlds__float_regs__SubGoal_137, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                {
                  transform_hlds__float_regs__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__float_regs__Reason_33));
                  MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_136, 2) = ((MR_Box) (transform_hlds__float_regs__SubGoal_137));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__float_regs__Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_136));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__float_regs__GoalExpr_143;
              MR_Word transform_hlds__float_regs__NonLocals_144;

              transform_hlds__float_regs__NonLocals_144 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
              transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(transform_hlds__float_regs__NonLocals_144, transform_hlds__float_regs__GoalExpr0_14, &transform_hlds__float_regs__GoalExpr_143, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__float_regs__Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_143));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_goal_2\'/8", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(
  MR_Word transform_hlds__float_regs__Goal0_9,
  MR_Word * transform_hlds__float_regs__Goal_10,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_15,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_16,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_17,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;

    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_9, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14, transform_hlds__float_regs__STATE_VARIABLE_InstMap_15, transform_hlds__float_regs__STATE_VARIABLE_Info_0_16, transform_hlds__float_regs__STATE_VARIABLE_Info_17, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18, transform_hlds__float_regs__STATE_VARIABLE_Specs_19);
    else
    {
      *transform_hlds__float_regs__Goal_10 = transform_hlds__float_regs__Goal0_9;
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_19 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_17 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_16;
      *transform_hlds__float_regs__STATE_VARIABLE_InstMap_15 = transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv2_STATE_VARIABLE_ForeignArg_7;

    transform_hlds__float_regs__set_foreign_arg_var_3_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv2_STATE_VARIABLE_ForeignArg_7);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv2_STATE_VARIABLE_ForeignArg_7));
  }
}

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__float_regs__wrapper_arg_2;
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_HeadVar__2_2;

    transform_hlds__float_regs__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1));
    transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_HeadVar__2_2));
    return transform_hlds__float_regs__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(
  MR_Word transform_hlds__float_regs__PredId_12,
  MR_Integer transform_hlds__float_regs__ProcId_13,
  MR_Word transform_hlds__float_regs__ForeignArgs0_14,
  MR_Word * transform_hlds__float_regs__ForeignArgs_15,
  MR_Word * transform_hlds__float_regs__WrapGoals_16,
  MR_Word transform_hlds__float_regs__InstMap0_17,
  MR_Word transform_hlds__float_regs__Context_18,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_24,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_25,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_26,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
    MR_Word transform_hlds__float_regs__TypeInfo_33_33 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
    MR_Word transform_hlds__float_regs__Vars0_21;
    MR_Word transform_hlds__float_regs__Vars_22;
    MR_Word transform_hlds__float_regs__ModuleInfo_53;
    MR_Word transform_hlds__float_regs__PredInfo_54;
    MR_Word transform_hlds__float_regs__ProcTable_55;
    MR_Word transform_hlds__float_regs__ProcInfo_56;
    MR_Box transform_hlds__float_regs__conv1_ProcInfo_56;

    transform_hlds__float_regs__Vars0_21 = mercury__list__map_2_f_0(transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__TypeInfo_33_33, (MR_Word) &transform_hlds__float_regs_scalar_common_3[13], transform_hlds__float_regs__ForeignArgs0_14);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_24, &transform_hlds__float_regs__ModuleInfo_53);
    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__ModuleInfo_53, transform_hlds__float_regs__PredId_12, &transform_hlds__float_regs__PredInfo_54);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__float_regs__PredInfo_54, &transform_hlds__float_regs__ProcTable_55);
    transform_hlds__float_regs__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__float_regs__ProcTable_55, transform_hlds__float_regs__ProcId_13, &transform_hlds__float_regs__conv1_ProcInfo_56);
    if (transform_hlds__float_regs__succeeded)
    {
      transform_hlds__float_regs__ProcInfo_56 = ((MR_Word) transform_hlds__float_regs__conv1_ProcInfo_56);
      transform_hlds__float_regs__succeeded = MR_TRUE;
    }
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__ArgTypes_57;
      MR_Word transform_hlds__float_regs__ArgModes_58;
      MR_Word transform_hlds__float_regs__ModuleInfo_80;
      MR_Word transform_hlds__float_regs__InitialInsts_81;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_54, &transform_hlds__float_regs__ArgTypes_57);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo_56, &transform_hlds__float_regs__ArgModes_58);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_24, &transform_hlds__float_regs__ModuleInfo_80);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_80, transform_hlds__float_regs__ArgModes_58, &transform_hlds__float_regs__InitialInsts_81);
      transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_17, transform_hlds__float_regs__Context_18, transform_hlds__float_regs__ArgTypes_57, transform_hlds__float_regs__InitialInsts_81, transform_hlds__float_regs__Vars0_21, &transform_hlds__float_regs__Vars_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__float_regs__WrapGoals_16, transform_hlds__float_regs__STATE_VARIABLE_Info_0_24, transform_hlds__float_regs__STATE_VARIABLE_Info_25, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_26, transform_hlds__float_regs__STATE_VARIABLE_Specs_27);
    }
    else
    {
      transform_hlds__float_regs__Vars_22 = transform_hlds__float_regs__Vars0_21;
      *transform_hlds__float_regs__WrapGoals_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_27 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_26;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_25 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_24;
    }
    mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeInfo_33_33, transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__float_regs_scalar_common_3[14], transform_hlds__float_regs__Vars_22, transform_hlds__float_regs__ForeignArgs0_14, transform_hlds__float_regs__ForeignArgs_15);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(
  MR_Word transform_hlds__float_regs__ClassId_14,
  MR_Integer transform_hlds__float_regs__MethodNum_15,
  MR_Word transform_hlds__float_regs__Vars0_16,
  MR_Word * transform_hlds__float_regs__Vars_17,
  MR_Word transform_hlds__float_regs__Modes0_18,
  MR_Word * transform_hlds__float_regs__Modes_19,
  MR_Word * transform_hlds__float_regs__WrapGoals_20,
  MR_Word transform_hlds__float_regs__InstMap0_21,
  MR_Word transform_hlds__float_regs__Context_22,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_45,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_46,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_48)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__TypeInfo_64_64;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_65_65;
    MR_Word transform_hlds__float_regs__ModuleInfo_25;
    MR_Word transform_hlds__float_regs__Classes_26;
    MR_Word transform_hlds__float_regs__ClassDefn_27;
    MR_Word transform_hlds__float_regs__ClassInterface_28;
    MR_Word transform_hlds__float_regs__ClassProc_29;
    MR_Word transform_hlds__float_regs__PredId_30;
    MR_Integer transform_hlds__float_regs__ProcId_31;
    MR_Word transform_hlds__float_regs__PredInfo_32;
    MR_Word transform_hlds__float_regs__ProcInfo_33;
    MR_Word transform_hlds__float_regs__ArgTypes_34;
    MR_Word transform_hlds__float_regs__ProcArgModes_35;
    MR_Word transform_hlds__float_regs__EndTypes_36;
    MR_Integer transform_hlds__float_regs__N_37;
    MR_Word transform_hlds__float_regs__StartVars_38;
    MR_Word transform_hlds__float_regs__EndVars0_39;
    MR_Word transform_hlds__float_regs__StartModes_40;
    MR_Word transform_hlds__float_regs__EndProcArgModes_43;
    MR_Word transform_hlds__float_regs__EndVars_44;
    MR_Integer transform_hlds__float_regs__Len_70;
    MR_Integer transform_hlds__float_regs__StartLen_71;
    MR_Integer transform_hlds__float_regs__Len_80;
    MR_Integer transform_hlds__float_regs__StartLen_81;
    MR_Integer transform_hlds__float_regs__Len_90;
    MR_Integer transform_hlds__float_regs__StartLen_91;
    MR_Box transform_hlds__float_regs__conv0_ClassDefn_27;
    MR_Word transform_hlds__float_regs__Var_51;
    MR_Word transform_hlds__float_regs__Var_52;
    MR_Word transform_hlds__float_regs__Var_53;
    MR_Word transform_hlds__float_regs__Var_54;
    MR_Word transform_hlds__float_regs__Var_55;
    MR_Word transform_hlds__float_regs__Var_56;
    MR_Word transform_hlds__float_regs__Var_57;
    MR_Word transform_hlds__float_regs__Var_58;
    MR_Word transform_hlds__float_regs__Var_59;
    MR_Box transform_hlds__float_regs__conv1_ClassProc_29;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, &transform_hlds__float_regs__ModuleInfo_25);
    hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__float_regs__ModuleInfo_25, &transform_hlds__float_regs__Classes_26);
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, transform_hlds__float_regs__Classes_26, ((MR_Box) (transform_hlds__float_regs__ClassId_14)), &transform_hlds__float_regs__conv0_ClassDefn_27);
    transform_hlds__float_regs__ClassDefn_27 = ((MR_Word) transform_hlds__float_regs__conv0_ClassDefn_27);
    transform_hlds__float_regs__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 0)));
    transform_hlds__float_regs__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 1)));
    transform_hlds__float_regs__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 2)));
    transform_hlds__float_regs__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 3)));
    transform_hlds__float_regs__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 4)));
    transform_hlds__float_regs__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 5)));
    transform_hlds__float_regs__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 6)));
    transform_hlds__float_regs__ClassInterface_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 7)));
    transform_hlds__float_regs__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 8)));
    transform_hlds__float_regs__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 9)));
    mercury__list__det_index1_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__float_regs__ClassInterface_28, transform_hlds__float_regs__MethodNum_15, &transform_hlds__float_regs__conv1_ClassProc_29);
    transform_hlds__float_regs__ClassProc_29 = ((MR_Word) transform_hlds__float_regs__conv1_ClassProc_29);
    transform_hlds__float_regs__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassProc_29, (MR_Integer) 0)));
    transform_hlds__float_regs__ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassProc_29, (MR_Integer) 1)));
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__float_regs__ModuleInfo_25, transform_hlds__float_regs__PredId_30, transform_hlds__float_regs__ProcId_31, &transform_hlds__float_regs__PredInfo_32, &transform_hlds__float_regs__ProcInfo_33);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_32, &transform_hlds__float_regs__ArgTypes_34);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo_33, &transform_hlds__float_regs__ProcArgModes_35);
    transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(transform_hlds__float_regs__ArgTypes_34, &transform_hlds__float_regs__EndTypes_36);
    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__EndTypes_36, &transform_hlds__float_regs__N_37);
    transform_hlds__float_regs__TypeInfo_64_64 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
    mercury__list__length_2_p_0(transform_hlds__float_regs__TypeInfo_64_64, transform_hlds__float_regs__Vars0_16, &transform_hlds__float_regs__Len_70);
    transform_hlds__float_regs__StartLen_71 = (transform_hlds__float_regs__Len_70 - transform_hlds__float_regs__N_37);
    transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_71 == (MR_Integer) 0);
    if (transform_hlds__float_regs__succeeded)
    {
      transform_hlds__float_regs__StartVars_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      transform_hlds__float_regs__EndVars0_39 = transform_hlds__float_regs__Vars0_16;
    }
    else
    {
      transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_71 > (MR_Integer) 0);
      if (transform_hlds__float_regs__succeeded)
        mercury__list__det_split_list_4_p_0(transform_hlds__float_regs__TypeInfo_64_64, transform_hlds__float_regs__StartLen_71, transform_hlds__float_regs__Vars0_16, &transform_hlds__float_regs__StartVars_38, &transform_hlds__float_regs__EndVars0_39);
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
          return;
        }
      }
    }
    transform_hlds__float_regs__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    mercury__list__length_2_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__Modes0_18, &transform_hlds__float_regs__Len_80);
    transform_hlds__float_regs__StartLen_81 = (transform_hlds__float_regs__Len_80 - transform_hlds__float_regs__N_37);
    transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_81 == (MR_Integer) 0);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__StartModes_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_81 > (MR_Integer) 0);
      if (transform_hlds__float_regs__succeeded)
      {
        MR_Word transform_hlds__float_regs__Var_96;

        mercury__list__det_split_list_4_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__StartLen_81, transform_hlds__float_regs__Modes0_18, &transform_hlds__float_regs__StartModes_40, &transform_hlds__float_regs__Var_96);
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
          return;
        }
      }
    }
    mercury__list__length_2_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__ProcArgModes_35, &transform_hlds__float_regs__Len_90);
    transform_hlds__float_regs__StartLen_91 = (transform_hlds__float_regs__Len_90 - transform_hlds__float_regs__N_37);
    transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_91 == (MR_Integer) 0);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__EndProcArgModes_43 = transform_hlds__float_regs__ProcArgModes_35;
    else
    {
      transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_91 > (MR_Integer) 0);
      if (transform_hlds__float_regs__succeeded)
      {
        MR_Word transform_hlds__float_regs__Var_98;

        mercury__list__det_split_list_4_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__StartLen_91, transform_hlds__float_regs__ProcArgModes_35, &transform_hlds__float_regs__Var_98, &transform_hlds__float_regs__EndProcArgModes_43);
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
          return;
        }
      }
    }
    transform_hlds__float_regs__match_args_for_call_11_p_0(transform_hlds__float_regs__InstMap0_21, transform_hlds__float_regs__Context_22, transform_hlds__float_regs__EndTypes_36, transform_hlds__float_regs__EndProcArgModes_43, transform_hlds__float_regs__EndVars0_39, &transform_hlds__float_regs__EndVars_44, transform_hlds__float_regs__WrapGoals_20, transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, transform_hlds__float_regs__STATE_VARIABLE_Info_46, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47, transform_hlds__float_regs__STATE_VARIABLE_Specs_48);
    *transform_hlds__float_regs__Vars_17 = mercury__list__f_43_43_2_f_0(transform_hlds__float_regs__TypeInfo_64_64, transform_hlds__float_regs__StartVars_38, transform_hlds__float_regs__EndVars_44);
    *transform_hlds__float_regs__Modes_19 = mercury__list__f_43_43_2_f_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__StartModes_40, transform_hlds__float_regs__EndProcArgModes_43);
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_args_for_call_11_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_12,
  MR_Word transform_hlds__float_regs__Context_13,
  MR_Word transform_hlds__float_regs__ArgTypes_14,
  MR_Word transform_hlds__float_regs__ArgModes_15,
  MR_Word transform_hlds__float_regs__OrigVars_16,
  MR_Word * transform_hlds__float_regs__Vars_17,
  MR_Word * transform_hlds__float_regs__WrapGoals_18,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_23,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_24,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_26)
{
  {
    MR_Word transform_hlds__float_regs__ModuleInfo_21;
    MR_Word transform_hlds__float_regs__InitialInsts_22;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_23, &transform_hlds__float_regs__ModuleInfo_21);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_21, transform_hlds__float_regs__ArgModes_15, &transform_hlds__float_regs__InitialInsts_22);
    transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_12, transform_hlds__float_regs__Context_13, transform_hlds__float_regs__ArgTypes_14, transform_hlds__float_regs__InitialInsts_22, transform_hlds__float_regs__OrigVars_16, transform_hlds__float_regs__Vars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__float_regs__WrapGoals_18, transform_hlds__float_regs__STATE_VARIABLE_Info_0_23, transform_hlds__float_regs__STATE_VARIABLE_Info_24, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25, transform_hlds__float_regs__STATE_VARIABLE_Specs_26);
  }
}

static void MR_CALL 
transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
  MR_Word * transform_hlds__float_regs__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;

    if ((transform_hlds__float_regs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__float_regs__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word transform_hlds__float_regs__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__float_regs__Types0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__float_regs__Types1_6;

      transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(transform_hlds__float_regs__Types0_4, &transform_hlds__float_regs__Types1_6);
      transform_hlds__float_regs__succeeded = check_hlds__polymorphism__type_is_typeclass_info_1_p_0(transform_hlds__float_regs__Type_3);
      if (!(transform_hlds__float_regs__succeeded))
      {
        MR_Word transform_hlds__float_regs__Var_7;

        transform_hlds__float_regs__Var_7 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
        transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__float_regs__Type_3, transform_hlds__float_regs__Var_7);
      }
      if (transform_hlds__float_regs__succeeded)
        *transform_hlds__float_regs__HeadVar__2_2 = transform_hlds__float_regs__Types1_6;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__float_regs__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__Type_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__float_regs__Types1_6));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_RegType_4);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(
  MR_Word transform_hlds__float_regs__CallVar_13,
  MR_Word transform_hlds__float_regs__Vars0_14,
  MR_Word * transform_hlds__float_regs__Vars_15,
  MR_Word * transform_hlds__float_regs__ArgModes_16,
  MR_Word * transform_hlds__float_regs__ArgRegs_17,
  MR_Word * transform_hlds__float_regs__WrapGoals_18,
  MR_Word transform_hlds__float_regs__InstMap0_19,
  MR_Word transform_hlds__float_regs__Context_20,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_36,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_37,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_38,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_39)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__ModuleInfo_23;
    MR_Word transform_hlds__float_regs__VarTypes_24;
    MR_Word transform_hlds__float_regs__CallVarType_25;
    MR_Word transform_hlds__float_regs__CallVarInst_26;
    MR_Word transform_hlds__float_regs__PredOrFunc_28;
    MR_Word transform_hlds__float_regs__ArgTypes_30;
    MR_Integer transform_hlds__float_regs__Arity_31;
    MR_Word transform_hlds__float_regs__CallVarPredInstInfo_32;
    MR_Word transform_hlds__float_regs__MaybeArgRegs_63;
    MR_Word transform_hlds__float_regs__ModuleInfo_83;
    MR_Word transform_hlds__float_regs__InitialInsts_84;
    MR_Word transform_hlds__float_regs__Var_27;
    MR_Word transform_hlds__float_regs__PredInstInfo0_48;
    MR_Word transform_hlds__float_regs__PredInstInfo0_57;
    MR_Word transform_hlds__float_regs__Var_33;
    MR_Word transform_hlds__float_regs__Var_35;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_36, &transform_hlds__float_regs__ModuleInfo_23);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_36, &transform_hlds__float_regs__VarTypes_24);
    hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_24, transform_hlds__float_regs__CallVar_13, &transform_hlds__float_regs__CallVarType_25);
    hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__InstMap0_19, transform_hlds__float_regs__CallVar_13, &transform_hlds__float_regs__CallVarInst_26);
    parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(transform_hlds__float_regs__CallVarType_25, &transform_hlds__float_regs__Var_27, &transform_hlds__float_regs__PredOrFunc_28, &transform_hlds__float_regs__ArgTypes_30);
    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__ArgTypes_30, &transform_hlds__float_regs__Arity_31);
    transform_hlds__float_regs__succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(transform_hlds__float_regs__ModuleInfo_23, transform_hlds__float_regs__CallVarInst_26, &transform_hlds__float_regs__PredInstInfo0_57);
    if (transform_hlds__float_regs__succeeded)
    {
      transform_hlds__float_regs__PredInstInfo0_48 = transform_hlds__float_regs__PredInstInfo0_57;
      transform_hlds__float_regs__succeeded = MR_TRUE;
    }
    else
    {
      transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__PredOrFunc_28 == (MR_Integer) 1);
      if (transform_hlds__float_regs__succeeded)
      {
        transform_hlds__float_regs__PredInstInfo0_48 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(transform_hlds__float_regs__Arity_31);
        transform_hlds__float_regs__succeeded = MR_TRUE;
      }
    }
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__CallVarPredInstInfo_32 = transform_hlds__float_regs__PredInstInfo0_48;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.lookup_pred_inst_info\'/5", (MR_String) "no higher order inst");
        return;
      }
    }
    transform_hlds__float_regs__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallVarPredInstInfo_32, (MR_Integer) 0)));
    *transform_hlds__float_regs__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallVarPredInstInfo_32, (MR_Integer) 1)));
    transform_hlds__float_regs__MaybeArgRegs_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallVarPredInstInfo_32, (MR_Integer) 2)));
    transform_hlds__float_regs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallVarPredInstInfo_32, (MR_Integer) 3)));
    if ((transform_hlds__float_regs__MaybeArgRegs_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[12], transform_hlds__float_regs__ArgTypes_30, transform_hlds__float_regs__ArgRegs_17);
    }
    else
      *transform_hlds__float_regs__ArgRegs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__MaybeArgRegs_63, (MR_Integer) 0)));
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_36, &transform_hlds__float_regs__ModuleInfo_83);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_83, *transform_hlds__float_regs__ArgModes_16, &transform_hlds__float_regs__InitialInsts_84);
    transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_19, transform_hlds__float_regs__Context_20, transform_hlds__float_regs__ArgTypes_30, transform_hlds__float_regs__InitialInsts_84, transform_hlds__float_regs__Vars0_14, transform_hlds__float_regs__Vars_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__float_regs__WrapGoals_18, transform_hlds__float_regs__STATE_VARIABLE_Info_0_36, transform_hlds__float_regs__STATE_VARIABLE_Info_37, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_38, transform_hlds__float_regs__STATE_VARIABLE_Specs_39);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(
  MR_Word transform_hlds__float_regs__PredId_13,
  MR_Integer transform_hlds__float_regs__ProcId_14,
  MR_Word transform_hlds__float_regs__Vars0_15,
  MR_Word * transform_hlds__float_regs__Vars_16,
  MR_Word * transform_hlds__float_regs__WrapGoals_17,
  MR_Word * transform_hlds__float_regs__MissingProc_18,
  MR_Word transform_hlds__float_regs__InstMap0_19,
  MR_Word transform_hlds__float_regs__Context_20,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_30,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_31,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_32,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_33)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__ModuleInfo_23;
    MR_Word transform_hlds__float_regs__PredInfo_24;
    MR_Word transform_hlds__float_regs__ProcTable_25;
    MR_Word transform_hlds__float_regs__ProcInfo_26;
    MR_Box transform_hlds__float_regs__conv0_ProcInfo_26;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_30, &transform_hlds__float_regs__ModuleInfo_23);
    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__ModuleInfo_23, transform_hlds__float_regs__PredId_13, &transform_hlds__float_regs__PredInfo_24);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__float_regs__PredInfo_24, &transform_hlds__float_regs__ProcTable_25);
    transform_hlds__float_regs__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__float_regs__ProcTable_25, transform_hlds__float_regs__ProcId_14, &transform_hlds__float_regs__conv0_ProcInfo_26);
    if (transform_hlds__float_regs__succeeded)
    {
      transform_hlds__float_regs__ProcInfo_26 = ((MR_Word) transform_hlds__float_regs__conv0_ProcInfo_26);
      transform_hlds__float_regs__succeeded = MR_TRUE;
    }
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__ArgTypes_27;
      MR_Word transform_hlds__float_regs__ArgModes_28;
      MR_Word transform_hlds__float_regs__ModuleInfo_54;
      MR_Word transform_hlds__float_regs__InitialInsts_55;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_24, &transform_hlds__float_regs__ArgTypes_27);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo_26, &transform_hlds__float_regs__ArgModes_28);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_30, &transform_hlds__float_regs__ModuleInfo_54);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_54, transform_hlds__float_regs__ArgModes_28, &transform_hlds__float_regs__InitialInsts_55);
      transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_19, transform_hlds__float_regs__Context_20, transform_hlds__float_regs__ArgTypes_27, transform_hlds__float_regs__InitialInsts_55, transform_hlds__float_regs__Vars0_15, transform_hlds__float_regs__Vars_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__float_regs__WrapGoals_17, transform_hlds__float_regs__STATE_VARIABLE_Info_0_30, transform_hlds__float_regs__STATE_VARIABLE_Info_31, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_32, transform_hlds__float_regs__STATE_VARIABLE_Specs_33);
      *transform_hlds__float_regs__MissingProc_18 = (MR_Integer) 0;
    }
    else
    {
      *transform_hlds__float_regs__Vars_16 = transform_hlds__float_regs__Vars0_15;
      *transform_hlds__float_regs__WrapGoals_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *transform_hlds__float_regs__MissingProc_18 = (MR_Integer) 1;
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_33 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_32;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_31 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_30;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__fix_branching_goal_8_p_0(
  MR_Word transform_hlds__float_regs__VarsExpectInsts_9,
  MR_Word transform_hlds__float_regs__Goal0_10,
  MR_Word transform_hlds__float_regs__GoalInstMap0_11,
  MR_Word * transform_hlds__float_regs__Goal_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_23,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_24,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_26)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;

    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__GoalInstMap0_11);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__TypeInfo_31_31;
      MR_Word transform_hlds__float_regs__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal0_10, (MR_Integer) 1)));
      MR_Word transform_hlds__float_regs__Context_17;
      MR_Word transform_hlds__float_regs__Renaming_18;
      MR_Word transform_hlds__float_regs__WrapGoals0_19;
      MR_Word transform_hlds__float_regs__Var_27;
      MR_Word transform_hlds__float_regs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal0_10, (MR_Integer) 0)));

      transform_hlds__float_regs__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_16);
      transform_hlds__float_regs__TypeInfo_31_31 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
      transform_hlds__float_regs__Var_27 = mercury__map__init_0_f_0(transform_hlds__float_regs__TypeInfo_31_31, transform_hlds__float_regs__TypeInfo_31_31);
      transform_hlds__float_regs__match_vars_insts_11_p_0(transform_hlds__float_regs__VarsExpectInsts_9, transform_hlds__float_regs__GoalInstMap0_11, transform_hlds__float_regs__Context_17, transform_hlds__float_regs__Var_27, &transform_hlds__float_regs__Renaming_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__float_regs__WrapGoals0_19, transform_hlds__float_regs__STATE_VARIABLE_Info_0_23, transform_hlds__float_regs__STATE_VARIABLE_Info_24, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25, transform_hlds__float_regs__STATE_VARIABLE_Specs_26);
      if ((transform_hlds__float_regs__WrapGoals0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__float_regs__Goal_12 = transform_hlds__float_regs__Goal0_10;
      else
      {
        MR_Word transform_hlds__float_regs__Goal1_22;

        hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(transform_hlds__float_regs__Goal0_10, transform_hlds__float_regs__WrapGoals0_19, &transform_hlds__float_regs__Goal1_22);
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__float_regs__Renaming_18, transform_hlds__float_regs__Goal1_22, transform_hlds__float_regs__Goal_12);
      }
    }
    else
    {
      *transform_hlds__float_regs__Goal_12 = transform_hlds__float_regs__Goal0_10;
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_26 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_24 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_23;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_vars_insts_11_p_0(
  MR_Word transform_hlds__float_regs__VarsExpectInsts_12,
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word transform_hlds__float_regs__Context_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Renaming_23,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_25,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_26,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_27,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_29)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__float_regs__succeeded;

      if ((transform_hlds__float_regs__VarsExpectInsts_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__float_regs__STATE_VARIABLE_Renaming_23 = transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22;
        *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_25 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24;
        *transform_hlds__float_regs__STATE_VARIABLE_Info_27 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_26;
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_29 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28;
      }
      else
      {
        MR_Word transform_hlds__float_regs__Var_19;
        MR_Word transform_hlds__float_regs__Inst_20;
        MR_Word transform_hlds__float_regs__Tail_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__VarsExpectInsts_12, (MR_Integer) 1)));
        MR_Word transform_hlds__float_regs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__VarsExpectInsts_12, (MR_Integer) 0)));
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31;
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32;
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_33_33;
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_34_34;
        MR_Word transform_hlds__float_regs__ModuleInfo_55;
        MR_Word transform_hlds__float_regs__VarTypes_56;

        transform_hlds__float_regs__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_30, (MR_Integer) 0)));
        transform_hlds__float_regs__Inst_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_30, (MR_Integer) 1)));
        transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__ModuleInfo_55);
        transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__VarTypes_56);
        transform_hlds__float_regs__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__float_regs__ModuleInfo_55, transform_hlds__float_regs__Inst_20);
        if (transform_hlds__float_regs__succeeded)
        {
          transform_hlds__float_regs__STATE_VARIABLE_Specs_34_34 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28;
          transform_hlds__float_regs__STATE_VARIABLE_Info_33_33 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_26;
          transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24;
          transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31 = transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22;
        }
        else
        {
          MR_Word transform_hlds__float_regs__WrapGoals_52;
          MR_Word transform_hlds__float_regs__VarType_57;
          MR_Word transform_hlds__float_regs__SubstVar_58;

          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_56, transform_hlds__float_regs__Var_19, &transform_hlds__float_regs__VarType_57);
          transform_hlds__float_regs__match_arg_12_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__VarType_57, transform_hlds__float_regs__Inst_20, transform_hlds__float_regs__Var_19, &transform_hlds__float_regs__SubstVar_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__float_regs__WrapGoals_52, transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__STATE_VARIABLE_Info_33_33, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28, &transform_hlds__float_regs__STATE_VARIABLE_Specs_34_34);
          transform_hlds__float_regs__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], ((MR_Box) (transform_hlds__float_regs__Var_19)), ((MR_Box) (transform_hlds__float_regs__SubstVar_58)));
          if (transform_hlds__float_regs__succeeded)
          {
            transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24;
            transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31 = transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22;
          }
          else
          {
            MR_Word transform_hlds__float_regs__TypeInfo_39_65 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
            MR_Word transform_hlds__float_regs__STATE_VARIABLE_Renaming_36_62;

            mercury__map__det_insert_4_p_0(transform_hlds__float_regs__TypeInfo_39_65, transform_hlds__float_regs__TypeInfo_39_65, ((MR_Box) (transform_hlds__float_regs__Var_19)), ((MR_Box) (transform_hlds__float_regs__SubstVar_58)), transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22, &transform_hlds__float_regs__STATE_VARIABLE_Renaming_36_62);
            mercury__map__det_insert_4_p_0(transform_hlds__float_regs__TypeInfo_39_65, transform_hlds__float_regs__TypeInfo_39_65, ((MR_Box) (transform_hlds__float_regs__SubstVar_58)), ((MR_Box) (transform_hlds__float_regs__Var_19)), transform_hlds__float_regs__STATE_VARIABLE_Renaming_36_62, &transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31);
            mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__float_regs__WrapGoals_52, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24, &transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32);
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word transform_hlds__float_regs__next_value_of_VarsExpectInsts_12 = transform_hlds__float_regs__Tail_21;
          MR_Word transform_hlds__float_regs__next_value_of_STATE_VARIABLE_Renaming_0_22 = transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31;
          MR_Word transform_hlds__float_regs__next_value_of_STATE_VARIABLE_WrapGoals_0_24 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32;
          MR_Word transform_hlds__float_regs__next_value_of_STATE_VARIABLE_Info_0_26 = transform_hlds__float_regs__STATE_VARIABLE_Info_33_33;
          MR_Word transform_hlds__float_regs__next_value_of_STATE_VARIABLE_Specs_0_28 = transform_hlds__float_regs__STATE_VARIABLE_Specs_34_34;

          transform_hlds__float_regs__VarsExpectInsts_12 = transform_hlds__float_regs__next_value_of_VarsExpectInsts_12;
          transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22 = transform_hlds__float_regs__next_value_of_STATE_VARIABLE_Renaming_0_22;
          transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24 = transform_hlds__float_regs__next_value_of_STATE_VARIABLE_WrapGoals_0_24;
          transform_hlds__float_regs__STATE_VARIABLE_Info_0_26 = transform_hlds__float_regs__next_value_of_STATE_VARIABLE_Info_0_26;
          transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28 = transform_hlds__float_regs__next_value_of_STATE_VARIABLE_Specs_0_28;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_LambdaHeadVar__2_24;

    transform_hlds__float_regs__succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1489__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_LambdaHeadVar__2_24);
    if (transform_hlds__float_regs__succeeded)
    {
      *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_LambdaHeadVar__2_24));
      transform_hlds__float_regs__succeeded = MR_TRUE;
    }
    return transform_hlds__float_regs__succeeded;
  }
}

static void MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_7,
  MR_Word transform_hlds__float_regs__NonLocals_8,
  MR_Word transform_hlds__float_regs__InstMaps_9,
  MR_Word * transform_hlds__float_regs__CommonDelta_10,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_20,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_21)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_28_28;
    MR_Word transform_hlds__float_regs__InstMapDeltas_14;
    MR_Word transform_hlds__float_regs__Var_22;

    {
      transform_hlds__float_regs__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_22, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_22, 1) = ((MR_Box) (transform_hlds__float_regs__common_instmap_delta_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_22, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap0_7));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_22, 4) = ((MR_Box) (transform_hlds__float_regs__NonLocals_8));
    }
    transform_hlds__float_regs__TypeCtorInfo_28_28 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
    mercury__list__filter_map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_28_28, transform_hlds__float_regs__TypeCtorInfo_28_28, transform_hlds__float_regs__Var_22, transform_hlds__float_regs__InstMaps_9, &transform_hlds__float_regs__InstMapDeltas_14);
    if ((transform_hlds__float_regs__InstMapDeltas_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(transform_hlds__float_regs__CommonDelta_10);
      *transform_hlds__float_regs__STATE_VARIABLE_Info_21 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_20;
    }
    else
    {
      MR_Word transform_hlds__float_regs__VarTypes_17;
      MR_Word transform_hlds__float_regs__ModuleInfo0_18;
      MR_Word transform_hlds__float_regs__ModuleInfo_19;

      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_20, &transform_hlds__float_regs__VarTypes_17);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_20, &transform_hlds__float_regs__ModuleInfo0_18);
      hlds__instmap__merge_instmap_deltas_7_p_0(transform_hlds__float_regs__InstMap0_7, transform_hlds__float_regs__NonLocals_8, transform_hlds__float_regs__VarTypes_17, transform_hlds__float_regs__InstMapDeltas_14, transform_hlds__float_regs__CommonDelta_10, transform_hlds__float_regs__ModuleInfo0_18, &transform_hlds__float_regs__ModuleInfo_19);
      transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_19, transform_hlds__float_regs__STATE_VARIABLE_Info_0_20, transform_hlds__float_regs__STATE_VARIABLE_Info_21);
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
  MR_Box * transform_hlds__float_regs__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv9_Case_12;
    MR_Word transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_20;
    MR_Word transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_22;

    transform_hlds__float_regs__fix_case_goal_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv9_Case_12, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_20, ((MR_Word) transform_hlds__float_regs__wrapper_arg_6), &transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_22);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv9_Case_12));
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_20));
    *transform_hlds__float_regs__wrapper_arg_7 = ((MR_Box) (transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_22));
  }
}

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv6_LambdaHeadVar__2_24;

    transform_hlds__float_regs__succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1489__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv6_LambdaHeadVar__2_24);
    if (transform_hlds__float_regs__succeeded)
    {
      *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv6_LambdaHeadVar__2_24));
      transform_hlds__float_regs__succeeded = MR_TRUE;
    }
    return transform_hlds__float_regs__succeeded;
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
  MR_Box * transform_hlds__float_regs__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv3_Case_15;
    MR_Word transform_hlds__float_regs__conv2_InstMap_16;
    MR_Word transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_27;
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_29;

    transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv3_Case_15, &transform_hlds__float_regs__conv2_InstMap_16, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_27, ((MR_Word) transform_hlds__float_regs__wrapper_arg_6), &transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_29);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv3_Case_15));
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv2_InstMap_16));
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_27));
    *transform_hlds__float_regs__wrapper_arg_7 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_29));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(
  MR_Word transform_hlds__float_regs__Var_11,
  MR_Word transform_hlds__float_regs__Cases0_12,
  MR_Word * transform_hlds__float_regs__Cases_13,
  MR_Word transform_hlds__float_regs__NonLocals_14,
  MR_Word transform_hlds__float_regs__InstMap0_15,
  MR_Word * transform_hlds__float_regs__InstMap_16,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_25,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_26,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_27,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_28)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_43_43;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_44_44;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_45_45;
    MR_Word transform_hlds__float_regs__TypeInfo_46_46;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_28_75;
    MR_Word transform_hlds__float_regs__VarTypes_19;
    MR_Word transform_hlds__float_regs__Type_20;
    MR_Word transform_hlds__float_regs__Cases1_21;
    MR_Word transform_hlds__float_regs__InstMaps1_22;
    MR_Word transform_hlds__float_regs__CommonDelta_23;
    MR_Word transform_hlds__float_regs__Var_29;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_30_30;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_31_31;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_32_32;
    MR_Word transform_hlds__float_regs__InstMapDeltas_63;
    MR_Word transform_hlds__float_regs__Var_69;
    MR_Box transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_30_30;
    MR_Box transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_31_31;

    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_25, &transform_hlds__float_regs__VarTypes_19);
    hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_19, transform_hlds__float_regs__Var_11, &transform_hlds__float_regs__Type_20);
    {
      transform_hlds__float_regs__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 3) = ((MR_Box) (transform_hlds__float_regs__Var_11));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 4) = ((MR_Box) (transform_hlds__float_regs__Type_20));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 5) = ((MR_Box) (transform_hlds__float_regs__InstMap0_15));
    }
    transform_hlds__float_regs__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
    transform_hlds__float_regs__TypeCtorInfo_44_44 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
    transform_hlds__float_regs__TypeCtorInfo_45_45 = (MR_Word) &transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0;
    transform_hlds__float_regs__TypeInfo_46_46 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[0];
    mercury__list__map2_foldl2_8_p_1(transform_hlds__float_regs__TypeCtorInfo_43_43, transform_hlds__float_regs__TypeCtorInfo_43_43, transform_hlds__float_regs__TypeCtorInfo_44_44, transform_hlds__float_regs__TypeCtorInfo_45_45, transform_hlds__float_regs__TypeInfo_46_46, transform_hlds__float_regs__Var_29, transform_hlds__float_regs__Cases0_12, &transform_hlds__float_regs__Cases1_21, &transform_hlds__float_regs__InstMaps1_22, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_0_25)), &transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_30_30, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_0_27)), &transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_31_31);
    transform_hlds__float_regs__STATE_VARIABLE_Info_30_30 = ((MR_Word) transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_30_30);
    transform_hlds__float_regs__STATE_VARIABLE_Specs_31_31 = ((MR_Word) transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_31_31);
    {
      transform_hlds__float_regs__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_69, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_69, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_69, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap0_15));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_69, 4) = ((MR_Box) (transform_hlds__float_regs__NonLocals_14));
    }
    transform_hlds__float_regs__TypeCtorInfo_28_75 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
    mercury__list__filter_map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_28_75, transform_hlds__float_regs__TypeCtorInfo_28_75, transform_hlds__float_regs__Var_69, transform_hlds__float_regs__InstMaps1_22, &transform_hlds__float_regs__InstMapDeltas_63);
    if ((transform_hlds__float_regs__InstMapDeltas_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&transform_hlds__float_regs__CommonDelta_23);
      transform_hlds__float_regs__STATE_VARIABLE_Info_32_32 = transform_hlds__float_regs__STATE_VARIABLE_Info_30_30;
    }
    else
    {
      MR_Word transform_hlds__float_regs__VarTypes_66;
      MR_Word transform_hlds__float_regs__ModuleInfo0_67;
      MR_Word transform_hlds__float_regs__ModuleInfo_68;

      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_30_30, &transform_hlds__float_regs__VarTypes_66);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_30_30, &transform_hlds__float_regs__ModuleInfo0_67);
      hlds__instmap__merge_instmap_deltas_7_p_0(transform_hlds__float_regs__InstMap0_15, transform_hlds__float_regs__NonLocals_14, transform_hlds__float_regs__VarTypes_66, transform_hlds__float_regs__InstMapDeltas_63, &transform_hlds__float_regs__CommonDelta_23, transform_hlds__float_regs__ModuleInfo0_67, &transform_hlds__float_regs__ModuleInfo_68);
      transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_68, transform_hlds__float_regs__STATE_VARIABLE_Info_30_30, &transform_hlds__float_regs__STATE_VARIABLE_Info_32_32);
    }
    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(transform_hlds__float_regs__CommonDelta_23);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__VarsExpectInsts_24;
      MR_Word transform_hlds__float_regs__Var_33;
      MR_Box transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_26;
      MR_Box transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_28;

      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__float_regs__CommonDelta_23, &transform_hlds__float_regs__VarsExpectInsts_24);
      {
        transform_hlds__float_regs__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_33, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[2]));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_33, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_33, 3) = ((MR_Box) (transform_hlds__float_regs__VarsExpectInsts_24));
      }
      mercury__list__map_corresponding_foldl2_8_p_0(transform_hlds__float_regs__TypeCtorInfo_43_43, transform_hlds__float_regs__TypeCtorInfo_44_44, transform_hlds__float_regs__TypeCtorInfo_43_43, transform_hlds__float_regs__TypeCtorInfo_45_45, transform_hlds__float_regs__TypeInfo_46_46, transform_hlds__float_regs__Var_33, transform_hlds__float_regs__Cases1_21, transform_hlds__float_regs__InstMaps1_22, transform_hlds__float_regs__Cases_13, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_32_32)), &transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_26, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_31_31)), &transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_28);
      *transform_hlds__float_regs__STATE_VARIABLE_Info_26 = ((MR_Word) transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_26);
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_28 = ((MR_Word) transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_28);
    }
    else
    {
      *transform_hlds__float_regs__Cases_13 = transform_hlds__float_regs__Cases1_21;
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_28 = transform_hlds__float_regs__STATE_VARIABLE_Specs_31_31;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_26 = transform_hlds__float_regs__STATE_VARIABLE_Info_32_32;
    }
    hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__float_regs__InstMap0_15, transform_hlds__float_regs__CommonDelta_23, transform_hlds__float_regs__InstMap_16);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
  MR_Box * transform_hlds__float_regs__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv9_Goal_12;
    MR_Word transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_24;
    MR_Word transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_26;

    transform_hlds__float_regs__fix_branching_goal_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv9_Goal_12, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_24, ((MR_Word) transform_hlds__float_regs__wrapper_arg_6), &transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_26);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv9_Goal_12));
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_24));
    *transform_hlds__float_regs__wrapper_arg_7 = ((MR_Box) (transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_26));
  }
}

static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv6_LambdaHeadVar__2_24;

    transform_hlds__float_regs__succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1489__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv6_LambdaHeadVar__2_24);
    if (transform_hlds__float_regs__succeeded)
    {
      *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv6_LambdaHeadVar__2_24));
      transform_hlds__float_regs__succeeded = MR_TRUE;
    }
    return transform_hlds__float_regs__succeeded;
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
  MR_Box * transform_hlds__float_regs__wrapper_arg_7)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv3_Goal_11;
    MR_Word transform_hlds__float_regs__conv2_InstMap_12;
    MR_Word transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_16;
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_18;

    transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv3_Goal_11, &transform_hlds__float_regs__conv2_InstMap_12, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_16, ((MR_Word) transform_hlds__float_regs__wrapper_arg_6), &transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_18);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv3_Goal_11));
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv2_InstMap_12));
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_16));
    *transform_hlds__float_regs__wrapper_arg_7 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(
  MR_Word transform_hlds__float_regs__Goals0_10,
  MR_Word * transform_hlds__float_regs__Goals_11,
  MR_Word transform_hlds__float_regs__NonLocals_12,
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word * transform_hlds__float_regs__InstMap_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_21,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_22,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_23,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_24)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_39_39;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_40_40;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_41_41;
    MR_Word transform_hlds__float_regs__TypeInfo_42_42;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_28_71;
    MR_Word transform_hlds__float_regs__Goals1_17;
    MR_Word transform_hlds__float_regs__InstMaps1_18;
    MR_Word transform_hlds__float_regs__CommonDelta_19;
    MR_Word transform_hlds__float_regs__Var_25;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_26_26;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_28_28;
    MR_Word transform_hlds__float_regs__InstMapDeltas_59;
    MR_Word transform_hlds__float_regs__Var_65;
    MR_Box transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_26_26;
    MR_Box transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_27_27;

    {
      transform_hlds__float_regs__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_25, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_25, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_25, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap0_13));
    }
    transform_hlds__float_regs__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    transform_hlds__float_regs__TypeCtorInfo_40_40 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
    transform_hlds__float_regs__TypeCtorInfo_41_41 = (MR_Word) &transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0;
    transform_hlds__float_regs__TypeInfo_42_42 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[0];
    mercury__list__map2_foldl2_8_p_1(transform_hlds__float_regs__TypeCtorInfo_39_39, transform_hlds__float_regs__TypeCtorInfo_39_39, transform_hlds__float_regs__TypeCtorInfo_40_40, transform_hlds__float_regs__TypeCtorInfo_41_41, transform_hlds__float_regs__TypeInfo_42_42, transform_hlds__float_regs__Var_25, transform_hlds__float_regs__Goals0_10, &transform_hlds__float_regs__Goals1_17, &transform_hlds__float_regs__InstMaps1_18, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_0_21)), &transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_26_26, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_0_23)), &transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_27_27);
    transform_hlds__float_regs__STATE_VARIABLE_Info_26_26 = ((MR_Word) transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_26_26);
    transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27 = ((MR_Word) transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_27_27);
    {
      transform_hlds__float_regs__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_65, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_65, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_65, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap0_13));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_65, 4) = ((MR_Box) (transform_hlds__float_regs__NonLocals_12));
    }
    transform_hlds__float_regs__TypeCtorInfo_28_71 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
    mercury__list__filter_map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_28_71, transform_hlds__float_regs__TypeCtorInfo_28_71, transform_hlds__float_regs__Var_65, transform_hlds__float_regs__InstMaps1_18, &transform_hlds__float_regs__InstMapDeltas_59);
    if ((transform_hlds__float_regs__InstMapDeltas_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&transform_hlds__float_regs__CommonDelta_19);
      transform_hlds__float_regs__STATE_VARIABLE_Info_28_28 = transform_hlds__float_regs__STATE_VARIABLE_Info_26_26;
    }
    else
    {
      MR_Word transform_hlds__float_regs__VarTypes_62;
      MR_Word transform_hlds__float_regs__ModuleInfo0_63;
      MR_Word transform_hlds__float_regs__ModuleInfo_64;

      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, &transform_hlds__float_regs__VarTypes_62);
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, &transform_hlds__float_regs__ModuleInfo0_63);
      hlds__instmap__merge_instmap_deltas_7_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__NonLocals_12, transform_hlds__float_regs__VarTypes_62, transform_hlds__float_regs__InstMapDeltas_59, &transform_hlds__float_regs__CommonDelta_19, transform_hlds__float_regs__ModuleInfo0_63, &transform_hlds__float_regs__ModuleInfo_64);
      transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_64, transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, &transform_hlds__float_regs__STATE_VARIABLE_Info_28_28);
    }
    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(transform_hlds__float_regs__CommonDelta_19);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__VarsExpectInsts_20;
      MR_Word transform_hlds__float_regs__Var_29;
      MR_Box transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_22;
      MR_Box transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_24;

      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__float_regs__CommonDelta_19, &transform_hlds__float_regs__VarsExpectInsts_20);
      {
        transform_hlds__float_regs__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[1]));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_29, 3) = ((MR_Box) (transform_hlds__float_regs__VarsExpectInsts_20));
      }
      mercury__list__map_corresponding_foldl2_8_p_0(transform_hlds__float_regs__TypeCtorInfo_39_39, transform_hlds__float_regs__TypeCtorInfo_40_40, transform_hlds__float_regs__TypeCtorInfo_39_39, transform_hlds__float_regs__TypeCtorInfo_41_41, transform_hlds__float_regs__TypeInfo_42_42, transform_hlds__float_regs__Var_29, transform_hlds__float_regs__Goals1_17, transform_hlds__float_regs__InstMaps1_18, transform_hlds__float_regs__Goals_11, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_28_28)), &transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_22, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27)), &transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_24);
      *transform_hlds__float_regs__STATE_VARIABLE_Info_22 = ((MR_Word) transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_22);
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_24 = ((MR_Word) transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_24);
    }
    else
    {
      *transform_hlds__float_regs__Goals_11 = transform_hlds__float_regs__Goals1_17;
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_24 = transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_22 = transform_hlds__float_regs__STATE_VARIABLE_Info_28_28;
    }
    hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__CommonDelta_19, transform_hlds__float_regs__InstMap_14);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv2_UnifyMode_8;

    transform_hlds__float_regs__unify_mode_set_rhs_final_inst_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv2_UnifyMode_8);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv2_UnifyMode_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_HeadVar__3_3;

    hlds__goal_util__update_instmap_3_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_HeadVar__3_3);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(
  MR_Word transform_hlds__float_regs__GoalExpr0_10,
  MR_Word transform_hlds__float_regs__GoalInfo0_11,
  MR_Word * transform_hlds__float_regs__Goal_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_72,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_73,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_74,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_76)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__LHS_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__RHS0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 2)));
    MR_Word transform_hlds__float_regs__Unification0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 3)));
    MR_Word transform_hlds__float_regs__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 4)));

    switch (MR_tag((MR_Word) transform_hlds__float_regs__Unification0_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__float_regs__CellVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 0)));
          MR_Word transform_hlds__float_regs__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 1)));
          MR_Word transform_hlds__float_regs__Args0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 2)));
          MR_Word transform_hlds__float_regs__ArgUnifyModes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 3)));
          MR_Word transform_hlds__float_regs__HowToConstruct_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 4)));
          MR_Word transform_hlds__float_regs__IsUnique_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 5)));
          MR_Word transform_hlds__float_regs__SubInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 6)));
          MR_Word transform_hlds__float_regs__IsExistConstruct_29;

          switch (MR_tag((MR_Word) transform_hlds__float_regs__RHS0_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_unify_goal\'/9", (MR_String) "construct rhs_var");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__float_regs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS0_17, (MR_Integer) 0)));
                MR_Word transform_hlds__float_regs__Var_30;

                transform_hlds__float_regs__IsExistConstruct_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS0_17, (MR_Integer) 1)));
                transform_hlds__float_regs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS0_17, (MR_Integer) 2)));
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_unify_goal\'/9", (MR_String) "construct rhs_lambda_goal");
                  return;
                }
              }
              break;
          }
          if ((transform_hlds__float_regs__Args0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word transform_hlds__float_regs__ModuleInfo_41;
            MR_Word transform_hlds__float_regs__GoalInfo_42;

            transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_73, &transform_hlds__float_regs__ModuleInfo_41);
            transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(transform_hlds__float_regs__ModuleInfo_41, transform_hlds__float_regs__CellVar_21, transform_hlds__float_regs__ConsId_22, transform_hlds__float_regs__Args0_23, transform_hlds__float_regs__GoalInfo0_11, &transform_hlds__float_regs__GoalInfo_42, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__float_regs__Goal_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo_42));
            }
            *transform_hlds__float_regs__STATE_VARIABLE_Info_74 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_73;
            *transform_hlds__float_regs__STATE_VARIABLE_Specs_76 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75;
          }
          else
          {
            MR_Word transform_hlds__float_regs__GoalContext_45;
            MR_Word transform_hlds__float_regs__Args_46;
            MR_Word transform_hlds__float_regs__ArgUnifyModes_47;
            MR_Word transform_hlds__float_regs__MaybeWrappedGoals_48;

            transform_hlds__float_regs__GoalContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_11);
            transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(transform_hlds__float_regs__CellVar_21, transform_hlds__float_regs__ConsId_22, transform_hlds__float_regs__Args0_23, &transform_hlds__float_regs__Args_46, transform_hlds__float_regs__ArgUnifyModes0_24, &transform_hlds__float_regs__ArgUnifyModes_47, &transform_hlds__float_regs__MaybeWrappedGoals_48, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__GoalContext_45, transform_hlds__float_regs__STATE_VARIABLE_Info_0_73, transform_hlds__float_regs__STATE_VARIABLE_Info_74, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75, transform_hlds__float_regs__STATE_VARIABLE_Specs_76);
            if ((transform_hlds__float_regs__MaybeWrappedGoals_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word transform_hlds__float_regs__ModuleInfo_102;
              MR_Word transform_hlds__float_regs__GoalInfo_103;

              transform_hlds__lambda__lambda_info_get_module_info_2_p_0(*transform_hlds__float_regs__STATE_VARIABLE_Info_74, &transform_hlds__float_regs__ModuleInfo_102);
              transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(transform_hlds__float_regs__ModuleInfo_102, transform_hlds__float_regs__CellVar_21, transform_hlds__float_regs__ConsId_22, transform_hlds__float_regs__Args0_23, transform_hlds__float_regs__GoalInfo0_11, &transform_hlds__float_regs__GoalInfo_103, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__float_regs__Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo_103));
              }
            }
            else
            {
              MR_Word transform_hlds__float_regs__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word transform_hlds__float_regs__WrapGoals_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__MaybeWrappedGoals_48, (MR_Integer) 0)));
              MR_Word transform_hlds__float_regs__GoalInfo1_50;
              MR_Word transform_hlds__float_regs__RHS_51;
              MR_Word transform_hlds__float_regs__Unification_52;
              MR_Word transform_hlds__float_regs__GoalExpr1_53;
              MR_Word transform_hlds__float_regs__Goal1_54;
              MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_95_95;
              MR_Word transform_hlds__float_regs__Var_97;
              MR_Word transform_hlds__float_regs__Var_98;
              MR_Word transform_hlds__float_regs__ModuleInfo_101;
              MR_Box transform_hlds__float_regs__conv1_STATE_VARIABLE_InstMap_95_95;

              mercury__list__foldl_4_p_0(transform_hlds__float_regs__TypeCtorInfo_128_128, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[11], transform_hlds__float_regs__WrapGoals_49, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71)), &transform_hlds__float_regs__conv1_STATE_VARIABLE_InstMap_95_95);
              transform_hlds__float_regs__STATE_VARIABLE_InstMap_95_95 = ((MR_Word) transform_hlds__float_regs__conv1_STATE_VARIABLE_InstMap_95_95);
              transform_hlds__lambda__lambda_info_get_module_info_2_p_0(*transform_hlds__float_regs__STATE_VARIABLE_Info_74, &transform_hlds__float_regs__ModuleInfo_101);
              transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(transform_hlds__float_regs__ModuleInfo_101, transform_hlds__float_regs__CellVar_21, transform_hlds__float_regs__ConsId_22, transform_hlds__float_regs__Args_46, transform_hlds__float_regs__GoalInfo0_11, &transform_hlds__float_regs__GoalInfo1_50, transform_hlds__float_regs__STATE_VARIABLE_InstMap_95_95, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
              {
                transform_hlds__float_regs__RHS_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS_51, 0) = ((MR_Box) (transform_hlds__float_regs__ConsId_22));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS_51, 1) = ((MR_Box) (transform_hlds__float_regs__IsExistConstruct_29));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS_51, 2) = ((MR_Box) (transform_hlds__float_regs__Args_46));
              }
              {
                transform_hlds__float_regs__Unification_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 0) = ((MR_Box) (transform_hlds__float_regs__CellVar_21));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 1) = ((MR_Box) (transform_hlds__float_regs__ConsId_22));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 2) = ((MR_Box) (transform_hlds__float_regs__Args_46));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 3) = ((MR_Box) (transform_hlds__float_regs__ArgUnifyModes_47));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 4) = ((MR_Box) (transform_hlds__float_regs__HowToConstruct_25));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 5) = ((MR_Box) (transform_hlds__float_regs__IsUnique_26));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 6) = ((MR_Box) (transform_hlds__float_regs__SubInfo_27));
              }
              {
                transform_hlds__float_regs__GoalExpr1_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 0) = ((MR_Box) (transform_hlds__float_regs__LHS_16));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 1) = ((MR_Box) (transform_hlds__float_regs__RHS_51));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 2) = ((MR_Box) (transform_hlds__float_regs__Mode_18));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 3) = ((MR_Box) (transform_hlds__float_regs__Unification_52));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 4) = ((MR_Box) (transform_hlds__float_regs__Context_20));
              }
              {
                transform_hlds__float_regs__Goal1_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal1_54, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr1_53));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal1_54, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo1_50));
              }
              {
                transform_hlds__float_regs__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_98, 0) = ((MR_Box) (transform_hlds__float_regs__Goal1_54));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              transform_hlds__float_regs__Var_97 = mercury__list__f_43_43_2_f_0(transform_hlds__float_regs__TypeCtorInfo_128_128, transform_hlds__float_regs__WrapGoals_49, transform_hlds__float_regs__Var_98);
              hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__float_regs__Var_97, transform_hlds__float_regs__GoalInfo1_50, transform_hlds__float_regs__Goal_12);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__float_regs__CanFail_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 4)));
          MR_Word transform_hlds__float_regs__CanCGC_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 5)));
          MR_Integer transform_hlds__float_regs__Arity_57;
          MR_Word transform_hlds__float_regs__CellVarInst0_58;
          MR_Word transform_hlds__float_regs__CellVarInst_59;
          MR_Word transform_hlds__float_regs__CellVar_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 0)));
          MR_Word transform_hlds__float_regs__ConsId_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 1)));
          MR_Word transform_hlds__float_regs__ArgUnifyModes0_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 3)));
          MR_Word transform_hlds__float_regs__ModuleInfo_118;
          MR_Word transform_hlds__float_regs__Args_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 2)));
          MR_Word transform_hlds__float_regs__ArgUnifyModes_111;
          MR_Word transform_hlds__float_regs__TypeCtorInfo_134_134;
          MR_Word transform_hlds__float_regs__TypeCtorInfo_135_135;
          MR_Word transform_hlds__float_regs__ArgInsts_60;
          MR_Word transform_hlds__float_regs__Var_82;
          MR_Word transform_hlds__float_regs__TypeInfo_136_136;

          transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_73, &transform_hlds__float_regs__ModuleInfo_118);
          mercury__list__length_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], transform_hlds__float_regs__Args_119, &transform_hlds__float_regs__Arity_57);
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__CellVar_115, &transform_hlds__float_regs__CellVarInst0_58);
          check_hlds__inst_util__inst_expand_3_p_0(transform_hlds__float_regs__ModuleInfo_118, transform_hlds__float_regs__CellVarInst0_58, &transform_hlds__float_regs__CellVarInst_59);
          transform_hlds__float_regs__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(transform_hlds__float_regs__CellVarInst_59, transform_hlds__float_regs__ConsId_116, transform_hlds__float_regs__Arity_57, &transform_hlds__float_regs__ArgInsts_60);
          if (transform_hlds__float_regs__succeeded)
          {
            transform_hlds__float_regs__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
            transform_hlds__float_regs__TypeCtorInfo_135_135 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0;
            {
              transform_hlds__float_regs__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_82, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[4]));
              MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_82, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2));
              MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_82, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_118));
            }
            mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_134_134, transform_hlds__float_regs__TypeCtorInfo_135_135, transform_hlds__float_regs__TypeCtorInfo_135_135, transform_hlds__float_regs__Var_82, transform_hlds__float_regs__ArgInsts_60, transform_hlds__float_regs__ArgUnifyModes0_117, &transform_hlds__float_regs__ArgUnifyModes_111);
            transform_hlds__float_regs__TypeInfo_136_136 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[4];
            transform_hlds__float_regs__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__float_regs__TypeInfo_136_136, ((MR_Box) (transform_hlds__float_regs__ArgUnifyModes_111)), ((MR_Box) (transform_hlds__float_regs__ArgUnifyModes0_117)));
            transform_hlds__float_regs__succeeded = !(transform_hlds__float_regs__succeeded);
          }
          if (transform_hlds__float_regs__succeeded)
          {
            MR_Word transform_hlds__float_regs__Unification_108;
            MR_Word transform_hlds__float_regs__GoalExpr1_109;
            MR_Word transform_hlds__float_regs__Goal1_110;

            {
              transform_hlds__float_regs__Unification_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 0) = ((MR_Box) (transform_hlds__float_regs__CellVar_115));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 1) = ((MR_Box) (transform_hlds__float_regs__ConsId_116));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 2) = ((MR_Box) (transform_hlds__float_regs__Args_119));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 3) = ((MR_Box) (transform_hlds__float_regs__ArgUnifyModes_111));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 4) = ((MR_Box) (transform_hlds__float_regs__CanFail_55));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 5) = ((MR_Box) (transform_hlds__float_regs__CanCGC_56));
            }
            {
              transform_hlds__float_regs__GoalExpr1_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 0) = ((MR_Box) (transform_hlds__float_regs__LHS_16));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 1) = ((MR_Box) (transform_hlds__float_regs__RHS0_17));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 2) = ((MR_Box) (transform_hlds__float_regs__Mode_18));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 3) = ((MR_Box) (transform_hlds__float_regs__Unification_108));
              MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 4) = ((MR_Box) (transform_hlds__float_regs__Context_20));
            }
            {
              transform_hlds__float_regs__Goal1_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal1_110, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr1_109));
              MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal1_110, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_11));
            }
            transform_hlds__float_regs__do_recompute_atomic_instmap_delta_5_p_0(transform_hlds__float_regs__Goal1_110, transform_hlds__float_regs__Goal_12, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_Info_0_73, transform_hlds__float_regs__STATE_VARIABLE_Info_74);
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__float_regs__Goal_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_11));
            }
            *transform_hlds__float_regs__STATE_VARIABLE_Info_74 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_73;
          }
          hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_12, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
          *transform_hlds__float_regs__STATE_VARIABLE_Specs_76 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__float_regs__ToVar_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Unification0_19, (MR_Integer) 0)));
          MR_Word transform_hlds__float_regs__FromVar_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Unification0_19, (MR_Integer) 1)));
          MR_Word transform_hlds__float_regs__Delta0_63;
          MR_Word transform_hlds__float_regs__Inst_64;
          MR_Word transform_hlds__float_regs__Delta_65;
          MR_Word transform_hlds__float_regs__GoalInfo1_124;

          transform_hlds__float_regs__Delta0_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__float_regs__GoalInfo0_11);
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__FromVar_62, &transform_hlds__float_regs__Inst_64);
          hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__float_regs__ToVar_61, transform_hlds__float_regs__Inst_64, transform_hlds__float_regs__Delta0_63, &transform_hlds__float_regs__Delta_65);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__float_regs__Delta_65, transform_hlds__float_regs__GoalInfo0_11, &transform_hlds__float_regs__GoalInfo1_124);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__float_regs__Goal_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo1_124));
          }
          hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_12, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
          *transform_hlds__float_regs__STATE_VARIABLE_Info_74 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_73;
          *transform_hlds__float_regs__STATE_VARIABLE_Specs_76 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Unification0_19, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__float_regs__Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_11));
              }
              hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_12, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
              *transform_hlds__float_regs__STATE_VARIABLE_Info_74 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_73;
              *transform_hlds__float_regs__STATE_VARIABLE_Specs_76 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_unify_goal\'/9", (MR_String) "complicated_unify");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_9,
  MR_Word transform_hlds__float_regs__CellVar_10,
  MR_Word transform_hlds__float_regs__ConsId_11,
  MR_Word transform_hlds__float_regs__Args_12,
  MR_Word transform_hlds__float_regs__GoalInfo0_13,
  MR_Word * transform_hlds__float_regs__GoalInfo_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_21)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__Delta0_16;
    MR_Word transform_hlds__float_regs__CellInst0_17;

    transform_hlds__float_regs__Delta0_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__float_regs__GoalInfo0_13);
    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__float_regs__Delta0_16, transform_hlds__float_regs__CellVar_10, &transform_hlds__float_regs__CellInst0_17);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__CellInst_18;
      MR_Word transform_hlds__float_regs__Delta_19;

      transform_hlds__float_regs__rebuild_cell_inst_6_p_0(transform_hlds__float_regs__ModuleInfo_9, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20, transform_hlds__float_regs__ConsId_11, transform_hlds__float_regs__Args_12, transform_hlds__float_regs__CellInst0_17, &transform_hlds__float_regs__CellInst_18);
      hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__float_regs__CellVar_10, transform_hlds__float_regs__CellInst_18, transform_hlds__float_regs__Delta0_16, &transform_hlds__float_regs__Delta_19);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__float_regs__Delta_19, transform_hlds__float_regs__GoalInfo0_13, transform_hlds__float_regs__GoalInfo_14);
      hlds__instmap__apply_instmap_delta_sv_3_p_0(transform_hlds__float_regs__Delta_19, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20, transform_hlds__float_regs__STATE_VARIABLE_InstMap_21);
    }
    else
    {
      *transform_hlds__float_regs__GoalInfo_14 = transform_hlds__float_regs__GoalInfo0_13;
      hlds__instmap__apply_instmap_delta_sv_3_p_0(transform_hlds__float_regs__Delta0_16, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20, transform_hlds__float_regs__STATE_VARIABLE_InstMap_21);
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv2_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv2_RegType_4);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv2_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv1_Inst_10;

    transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_Inst_10);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_Inst_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_RegType_4);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_7,
  MR_Word transform_hlds__float_regs__InstMap_8,
  MR_Word transform_hlds__float_regs__ConsId_9,
  MR_Word transform_hlds__float_regs__Args_10,
  MR_Word transform_hlds__float_regs__Inst0_11,
  MR_Word * transform_hlds__float_regs__Inst_12)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__float_regs__Inst0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__float_regs__Inst0_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
            break;
          case (MR_Integer) 1:
            *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
            break;
        }
        break;
      case (MR_Integer) 1:
        *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__float_regs__Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst0_11, (MR_Integer) 1)));
          MR_Word transform_hlds__float_regs__Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst0_11, (MR_Integer) 0)));

          if ((transform_hlds__float_regs__Var_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
          else
          {
            MR_Word transform_hlds__float_regs__PredInstInfo0_17 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__Var_190), (MR_Integer) 1);
            MR_Word transform_hlds__float_regs__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_17, (MR_Integer) 0)));
            MR_Word transform_hlds__float_regs__Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_17, (MR_Integer) 1)));
            MR_Word transform_hlds__float_regs__Determinism_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_17, (MR_Integer) 3)));
            MR_Word transform_hlds__float_regs__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_17, (MR_Integer) 2)));
            MR_Word transform_hlds__float_regs__ShroudedPredProcId_22;

            transform_hlds__float_regs__succeeded = ((((MR_tag((MR_Word) transform_hlds__float_regs__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (transform_hlds__float_regs__succeeded)
            {
              transform_hlds__float_regs__ShroudedPredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_9, (MR_Integer) 1)));
              {
                MR_Word transform_hlds__float_regs__TypeCtorInfo_67_67;
                MR_Word transform_hlds__float_regs__PredId_24;
                MR_Word transform_hlds__float_regs__PredInfo_26;
                MR_Word transform_hlds__float_regs__ArgTypes_27;
                MR_Integer transform_hlds__float_regs__NumArgs_28;
                MR_Word transform_hlds__float_regs__MissingArgTypes_29;
                MR_Word transform_hlds__float_regs__ArgRegs_30;
                MR_Word transform_hlds__float_regs__PredInstInfo_31;
                MR_Word transform_hlds__float_regs__Var_56;
                MR_Word transform_hlds__float_regs__Var_58;
                MR_Word transform_hlds__float_regs__Var_59;
                MR_Integer transform_hlds__float_regs__Var_25;

                transform_hlds__float_regs__Var_56 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__float_regs__ShroudedPredProcId_22);
                transform_hlds__float_regs__PredId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_56, (MR_Integer) 0)));
                transform_hlds__float_regs__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_56, (MR_Integer) 1)));
                hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__ModuleInfo_7, transform_hlds__float_regs__PredId_24, &transform_hlds__float_regs__PredInfo_26);
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_26, &transform_hlds__float_regs__ArgTypes_27);
                mercury__list__length_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], transform_hlds__float_regs__Args_10, &transform_hlds__float_regs__NumArgs_28);
                transform_hlds__float_regs__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                mercury__list__det_drop_3_p_0(transform_hlds__float_regs__TypeCtorInfo_67_67, transform_hlds__float_regs__NumArgs_28, transform_hlds__float_regs__ArgTypes_27, &transform_hlds__float_regs__MissingArgTypes_29);
                mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_67_67, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[9], transform_hlds__float_regs__MissingArgTypes_29, &transform_hlds__float_regs__ArgRegs_30);
                {
                  transform_hlds__float_regs__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_58, 0) = ((MR_Box) (transform_hlds__float_regs__ArgRegs_30));
                }
                {
                  transform_hlds__float_regs__PredInstInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_31, 0) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_18));
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_31, 1) = ((MR_Box) (transform_hlds__float_regs__Modes_19));
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_31, 2) = ((MR_Box) (transform_hlds__float_regs__Var_58));
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_31, 3) = ((MR_Box) (transform_hlds__float_regs__Determinism_21));
                }
                transform_hlds__float_regs__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__PredInstInfo_31);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__float_regs__Inst_12 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__float_regs__Var_191));
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__float_regs__Var_59));
                }
              }
            }
            else
              *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__float_regs__TypeCtorInfo_65_65;
              MR_Word transform_hlds__float_regs__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs__BoundInsts0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 3)));
              MR_Word transform_hlds__float_regs__BoundInsts_16;
              MR_Word transform_hlds__float_regs__Var_61;

              {
                transform_hlds__float_regs__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_61, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[5]));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_61, 1) = ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_61, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap_8));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_61, 4) = ((MR_Box) (transform_hlds__float_regs__ConsId_9));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_61, 5) = ((MR_Box) (transform_hlds__float_regs__Args_10));
              }
              transform_hlds__float_regs__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
              mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__Var_61, transform_hlds__float_regs__BoundInsts0_15, &transform_hlds__float_regs__BoundInsts_16);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__float_regs__Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__Uniq_13));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__InstResults_14));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__float_regs__BoundInsts_16));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__float_regs__Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 1)));

              if ((transform_hlds__float_regs__Var_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
              else
              {
                MR_Word transform_hlds__float_regs__PredInstInfo0_134 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__Var_192), (MR_Integer) 1);
                MR_Word transform_hlds__float_regs__PredOrFunc_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_134, (MR_Integer) 0)));
                MR_Word transform_hlds__float_regs__Modes_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_134, (MR_Integer) 1)));
                MR_Word transform_hlds__float_regs__Determinism_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_134, (MR_Integer) 3)));
                MR_Word transform_hlds__float_regs__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_134, (MR_Integer) 2)));
                MR_Word transform_hlds__float_regs__ShroudedPredProcId_112;

                transform_hlds__float_regs__succeeded = ((((MR_tag((MR_Word) transform_hlds__float_regs__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (transform_hlds__float_regs__succeeded)
                {
                  transform_hlds__float_regs__ShroudedPredProcId_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_9, (MR_Integer) 1)));
                  {
                    MR_Word transform_hlds__float_regs__TypeCtorInfo_67_110;
                    MR_Word transform_hlds__float_regs__Var_80;
                    MR_Word transform_hlds__float_regs__PredId_92;
                    MR_Word transform_hlds__float_regs__PredInfo_94;
                    MR_Word transform_hlds__float_regs__ArgTypes_95;
                    MR_Integer transform_hlds__float_regs__NumArgs_96;
                    MR_Word transform_hlds__float_regs__MissingArgTypes_97;
                    MR_Word transform_hlds__float_regs__ArgRegs_98;
                    MR_Word transform_hlds__float_regs__PredInstInfo_99;
                    MR_Word transform_hlds__float_regs__Var_104;
                    MR_Word transform_hlds__float_regs__Var_106;
                    MR_Integer transform_hlds__float_regs__Var_73;

                    transform_hlds__float_regs__Var_104 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__float_regs__ShroudedPredProcId_112);
                    transform_hlds__float_regs__PredId_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_104, (MR_Integer) 0)));
                    transform_hlds__float_regs__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_104, (MR_Integer) 1)));
                    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__ModuleInfo_7, transform_hlds__float_regs__PredId_92, &transform_hlds__float_regs__PredInfo_94);
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_94, &transform_hlds__float_regs__ArgTypes_95);
                    mercury__list__length_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], transform_hlds__float_regs__Args_10, &transform_hlds__float_regs__NumArgs_96);
                    transform_hlds__float_regs__TypeCtorInfo_67_110 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                    mercury__list__det_drop_3_p_0(transform_hlds__float_regs__TypeCtorInfo_67_110, transform_hlds__float_regs__NumArgs_96, transform_hlds__float_regs__ArgTypes_95, &transform_hlds__float_regs__MissingArgTypes_97);
                    mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_67_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[10], transform_hlds__float_regs__MissingArgTypes_97, &transform_hlds__float_regs__ArgRegs_98);
                    {
                      transform_hlds__float_regs__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_106, 0) = ((MR_Box) (transform_hlds__float_regs__ArgRegs_98));
                    }
                    {
                      transform_hlds__float_regs__PredInstInfo_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_99, 0) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_135));
                      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_99, 1) = ((MR_Box) (transform_hlds__float_regs__Modes_136));
                      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_99, 2) = ((MR_Box) (transform_hlds__float_regs__Var_106));
                      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_99, 3) = ((MR_Box) (transform_hlds__float_regs__Determinism_138));
                    }
                    transform_hlds__float_regs__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__PredInstInfo_99);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__float_regs__Inst_12 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__Var_193));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__Var_80));
                    }
                  }
                }
                else
                  *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.rebuild_cell_inst\'/6", (MR_String) "inst_var");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__float_regs__InstVarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__SpecInst0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs__SpecInst_38;

              transform_hlds__float_regs__rebuild_cell_inst_6_p_0(transform_hlds__float_regs__ModuleInfo_7, transform_hlds__float_regs__InstMap_8, transform_hlds__float_regs__ConsId_9, transform_hlds__float_regs__Args_10, transform_hlds__float_regs__SpecInst0_37, &transform_hlds__float_regs__SpecInst_38);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__float_regs__Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__InstVarSet_36));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__SpecInst_38));
              }
            }
            break;
          case (MR_Integer) 4:
            *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.rebuild_cell_inst\'/6", (MR_String) "abstract_inst");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_4(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__float_regs__wrapper_arg_2;
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv6_HeadVar__2_2;

    transform_hlds__float_regs__conv6_HeadVar__2_2 = check_hlds__mode_util__from_to_insts_to_init_inst_1_f_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1));
    transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv6_HeadVar__2_2));
    return transform_hlds__float_regs__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv5_ArgFromToInsts_8;

    transform_hlds__float_regs__add_arg_regs_in_from_to_insts_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv5_ArgFromToInsts_8);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv5_ArgFromToInsts_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv4_HeadVar__2_2;
    MR_Word transform_hlds__float_regs__conv3_HeadVar__3_3;

    check_hlds__mode_util__unify_mode_to_lhs_rhs_from_to_insts_3_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv4_HeadVar__2_2, &transform_hlds__float_regs__conv3_HeadVar__3_3);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv4_HeadVar__2_2));
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
  MR_Box * transform_hlds__float_regs__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv1_Type_6;
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15;

    transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_Type_6, ((MR_Word) transform_hlds__float_regs__wrapper_arg_3), &transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_Type_6));
    *transform_hlds__float_regs__wrapper_arg_4 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(
  MR_Word transform_hlds__float_regs__CellVar_14,
  MR_Word transform_hlds__float_regs__ConsId_15,
  MR_Word transform_hlds__float_regs__OrigVars_16,
  MR_Word * transform_hlds__float_regs__Vars_17,
  MR_Word transform_hlds__float_regs__ArgModes0_18,
  MR_Word * transform_hlds__float_regs__ArgModes_19,
  MR_Word * transform_hlds__float_regs__MaybeWrappedGoals_20,
  MR_Word transform_hlds__float_regs__InstMap0_21,
  MR_Word transform_hlds__float_regs__Context_22,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_45,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_46,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_48)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__ModuleInfo_25;
    MR_Word transform_hlds__float_regs__VarTypes_26;
    MR_Word transform_hlds__float_regs__CellType_27;
    MR_Word transform_hlds__float_regs__PhonyArgTypes_36;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_57_57;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_62_62;
    MR_Word transform_hlds__float_regs__TypeInfo_63_63;
    MR_Word transform_hlds__float_regs__TypeCtor_28;
    MR_Word transform_hlds__float_regs__TypeArgs_29;
    MR_Word transform_hlds__float_regs__TVarSet0_32;
    MR_Word transform_hlds__float_regs__PhonyTypeArgs_33;
    MR_Word transform_hlds__float_regs__PhonyCellType_35;
    MR_Word transform_hlds__float_regs__Var_49;
    MR_Word transform_hlds__float_regs__Var_30;
    MR_Word transform_hlds__float_regs__Var_31;
    MR_Word transform_hlds__float_regs___TVarSet_34;
    MR_Box transform_hlds__float_regs__conv2__TVarSet_34;
    MR_Word transform_hlds__float_regs__Var_37;
    MR_Word transform_hlds__float_regs__Var_38;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, &transform_hlds__float_regs__ModuleInfo_25);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, &transform_hlds__float_regs__VarTypes_26);
    hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_26, transform_hlds__float_regs__CellVar_14, &transform_hlds__float_regs__CellType_27);
    transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__float_regs__CellType_27, &transform_hlds__float_regs__TypeCtor_28, &transform_hlds__float_regs__TypeArgs_29);
    if (transform_hlds__float_regs__succeeded)
    {
      transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__TypeArgs_29)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__float_regs__succeeded)
      {
        transform_hlds__float_regs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__TypeArgs_29, (MR_Integer) 0)));
        transform_hlds__float_regs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__TypeArgs_29, (MR_Integer) 1)));
        transform_hlds__float_regs__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
        mercury__varset__init_1_p_0(transform_hlds__float_regs__TypeCtorInfo_57_57, &transform_hlds__float_regs__TVarSet0_32);
        transform_hlds__float_regs__Var_49 = (MR_Word) &transform_hlds__float_regs_scalar_common_3[6];
        transform_hlds__float_regs__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        transform_hlds__float_regs__TypeInfo_63_63 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[2];
        mercury__list__map_foldl_5_p_0(transform_hlds__float_regs__TypeCtorInfo_62_62, transform_hlds__float_regs__TypeCtorInfo_62_62, transform_hlds__float_regs__TypeInfo_63_63, transform_hlds__float_regs__Var_49, transform_hlds__float_regs__TypeArgs_29, &transform_hlds__float_regs__PhonyTypeArgs_33, ((MR_Box) (transform_hlds__float_regs__TVarSet0_32)), &transform_hlds__float_regs__conv2__TVarSet_34);
        transform_hlds__float_regs___TVarSet_34 = ((MR_Word) transform_hlds__float_regs__conv2__TVarSet_34);
        parse_tree__prog_type__construct_type_3_p_0(transform_hlds__float_regs__TypeCtor_28, transform_hlds__float_regs__PhonyTypeArgs_33, &transform_hlds__float_regs__PhonyCellType_35);
        transform_hlds__float_regs__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__float_regs__ModuleInfo_25, transform_hlds__float_regs__PhonyCellType_35, transform_hlds__float_regs__ConsId_15, &transform_hlds__float_regs__PhonyArgTypes_36);
        if (transform_hlds__float_regs__succeeded)
        {
          transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__PhonyArgTypes_36)) == (MR_mktag((MR_Integer) 1)));
          if (transform_hlds__float_regs__succeeded)
          {
            transform_hlds__float_regs__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__PhonyArgTypes_36, (MR_Integer) 0)));
            transform_hlds__float_regs__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__PhonyArgTypes_36, (MR_Integer) 1)));
          }
        }
      }
    }
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0;
      MR_Word transform_hlds__float_regs__TypeCtorInfo_72_72;
      MR_Word transform_hlds__float_regs__LHSFromToInsts0_39;
      MR_Word transform_hlds__float_regs__RHSFromToInsts0_40;
      MR_Word transform_hlds__float_regs__LHSFromToInsts_41;
      MR_Word transform_hlds__float_regs__RHSFromToInsts_42;
      MR_Word transform_hlds__float_regs__ArgInitialInsts_43;
      MR_Word transform_hlds__float_regs__WrapGoals_44;
      MR_Word transform_hlds__float_regs__Var_51;

      mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, transform_hlds__float_regs__TypeCtorInfo_68_68, transform_hlds__float_regs__TypeCtorInfo_68_68, (MR_Word) &transform_hlds__float_regs_scalar_common_3[7], transform_hlds__float_regs__ArgModes0_18, &transform_hlds__float_regs__LHSFromToInsts0_39, &transform_hlds__float_regs__RHSFromToInsts0_40);
      {
        transform_hlds__float_regs__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_51, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_51, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_3));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_51, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_25));
      }
      transform_hlds__float_regs__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_72_72, transform_hlds__float_regs__TypeCtorInfo_68_68, transform_hlds__float_regs__TypeCtorInfo_68_68, transform_hlds__float_regs__Var_51, transform_hlds__float_regs__PhonyArgTypes_36, transform_hlds__float_regs__LHSFromToInsts0_39, &transform_hlds__float_regs__LHSFromToInsts_41);
      mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_72_72, transform_hlds__float_regs__TypeCtorInfo_68_68, transform_hlds__float_regs__TypeCtorInfo_68_68, transform_hlds__float_regs__Var_51, transform_hlds__float_regs__PhonyArgTypes_36, transform_hlds__float_regs__RHSFromToInsts0_40, &transform_hlds__float_regs__RHSFromToInsts_42);
      check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(transform_hlds__float_regs__LHSFromToInsts_41, transform_hlds__float_regs__RHSFromToInsts_42, transform_hlds__float_regs__ArgModes_19);
      transform_hlds__float_regs__ArgInitialInsts_43 = mercury__list__map_2_f_0(transform_hlds__float_regs__TypeCtorInfo_68_68, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[8], transform_hlds__float_regs__RHSFromToInsts_42);
      transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_21, transform_hlds__float_regs__Context_22, transform_hlds__float_regs__PhonyArgTypes_36, transform_hlds__float_regs__ArgInitialInsts_43, transform_hlds__float_regs__OrigVars_16, transform_hlds__float_regs__Vars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__float_regs__WrapGoals_44, transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, transform_hlds__float_regs__STATE_VARIABLE_Info_46, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47, transform_hlds__float_regs__STATE_VARIABLE_Specs_48);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__float_regs__MaybeWrappedGoals_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__WrapGoals_44));
      }
    }
    else
    {
      *transform_hlds__float_regs__Vars_17 = transform_hlds__float_regs__OrigVars_16;
      *transform_hlds__float_regs__ArgModes_19 = transform_hlds__float_regs__ArgModes0_18;
      *transform_hlds__float_regs__MaybeWrappedGoals_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_48 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_46 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_45;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_args_12_p_0(
  MR_Word transform_hlds__float_regs__InstMap0_13,
  MR_Word transform_hlds__float_regs__Context_14,
  MR_Word transform_hlds__float_regs__ArgTypes_15,
  MR_Word transform_hlds__float_regs__Insts_16,
  MR_Word transform_hlds__float_regs__OrigVars_17,
  MR_Word * transform_hlds__float_regs__Vars_18,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_30,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_31,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_32,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_33,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_34,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_35)
{
  {
    MR_bool transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__ArgTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (transform_hlds__float_regs__succeeded)
    {
      transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__Insts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (transform_hlds__float_regs__succeeded)
        transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__OrigVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (transform_hlds__float_regs__succeeded)
    {
      *transform_hlds__float_regs__Vars_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_35 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_34;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_33 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_32;
      *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_31 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_30;
    }
    else
    {
      MR_Word transform_hlds__float_regs__AT_22;
      MR_Word transform_hlds__float_regs__ATs_23;
      MR_Word transform_hlds__float_regs__I_24;
      MR_Word transform_hlds__float_regs__Is_25;
      MR_Word transform_hlds__float_regs__OV_26;
      MR_Word transform_hlds__float_regs__OVs_27;

      transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__ArgTypes_15)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__float_regs__succeeded)
      {
        transform_hlds__float_regs__AT_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgTypes_15, (MR_Integer) 0)));
        transform_hlds__float_regs__ATs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgTypes_15, (MR_Integer) 1)));
        transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__Insts_16)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__float_regs__succeeded)
        {
          transform_hlds__float_regs__I_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Insts_16, (MR_Integer) 0)));
          transform_hlds__float_regs__Is_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Insts_16, (MR_Integer) 1)));
          transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__OrigVars_17)) == (MR_mktag((MR_Integer) 1)));
          if (transform_hlds__float_regs__succeeded)
          {
            transform_hlds__float_regs__OV_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__OrigVars_17, (MR_Integer) 0)));
            transform_hlds__float_regs__OVs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__OrigVars_17, (MR_Integer) 1)));
          }
        }
      }
      if (transform_hlds__float_regs__succeeded)
      {
        MR_Word transform_hlds__float_regs__V_28;
        MR_Word transform_hlds__float_regs__Vs_29;
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_36_36;
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_37_37;
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38;

        transform_hlds__float_regs__match_arg_12_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__AT_22, transform_hlds__float_regs__I_24, transform_hlds__float_regs__OV_26, &transform_hlds__float_regs__V_28, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_30, &transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_36_36, transform_hlds__float_regs__STATE_VARIABLE_Info_0_32, &transform_hlds__float_regs__STATE_VARIABLE_Info_37_37, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_34, &transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38);
        transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__ATs_23, transform_hlds__float_regs__Is_25, transform_hlds__float_regs__OVs_27, &transform_hlds__float_regs__Vs_29, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_36_36, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_31, transform_hlds__float_regs__STATE_VARIABLE_Info_37_37, transform_hlds__float_regs__STATE_VARIABLE_Info_33, transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38, transform_hlds__float_regs__STATE_VARIABLE_Specs_35);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__float_regs__Vars_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__V_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__float_regs__Vs_29));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.match_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_RegType_4);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0(
  MR_Word transform_hlds__float_regs__InstMapBefore_13,
  MR_Word transform_hlds__float_regs__Context_14,
  MR_Word transform_hlds__float_regs__ArgType_15,
  MR_Word transform_hlds__float_regs__ExpectInst_16,
  MR_Word transform_hlds__float_regs__OrigVar_17,
  MR_Word * transform_hlds__float_regs__Var_18,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_46,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_47,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_49)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__ModuleInfo_22;
    MR_Word transform_hlds__float_regs__VarTypes_23;
    MR_Word transform_hlds__float_regs__PredOrFunc_25;
    MR_Word transform_hlds__float_regs__ArgPredArgTypes_27;
    MR_Word transform_hlds__float_regs__Var_24;
    MR_Word transform_hlds__float_regs__Var_28;
    MR_Word transform_hlds__float_regs__Var_29;

    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, &transform_hlds__float_regs__ModuleInfo_22);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, &transform_hlds__float_regs__VarTypes_23);
    transform_hlds__float_regs__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__float_regs__ModuleInfo_22, transform_hlds__float_regs__ExpectInst_16);
    if (transform_hlds__float_regs__succeeded)
    {
      transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__ArgType_15, &transform_hlds__float_regs__Var_24, &transform_hlds__float_regs__PredOrFunc_25, &transform_hlds__float_regs__ArgPredArgTypes_27);
      if (transform_hlds__float_regs__succeeded)
      {
        transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__ArgPredArgTypes_27)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__float_regs__succeeded)
        {
          transform_hlds__float_regs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgPredArgTypes_27, (MR_Integer) 0)));
          transform_hlds__float_regs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgPredArgTypes_27, (MR_Integer) 1)));
        }
      }
    }
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__OrigVarType_30;
      MR_Word transform_hlds__float_regs__OrigPredArgTypes_34;
      MR_Integer transform_hlds__float_regs__Arity_35;
      MR_Word transform_hlds__float_regs__Var_31;
      MR_Word transform_hlds__float_regs__Var_32;
      MR_Word transform_hlds__float_regs__ExpectPredInstInfo_36;
      MR_Word transform_hlds__float_regs__PredInstInfo0_61;

      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_23, transform_hlds__float_regs__OrigVar_17, &transform_hlds__float_regs__OrigVarType_30);
      parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(transform_hlds__float_regs__OrigVarType_30, &transform_hlds__float_regs__Var_31, &transform_hlds__float_regs__Var_32, &transform_hlds__float_regs__OrigPredArgTypes_34);
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__OrigPredArgTypes_34, &transform_hlds__float_regs__Arity_35);
      transform_hlds__float_regs__succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(transform_hlds__float_regs__ModuleInfo_22, transform_hlds__float_regs__ExpectInst_16, &transform_hlds__float_regs__PredInstInfo0_61);
      if (transform_hlds__float_regs__succeeded)
      {
        transform_hlds__float_regs__ExpectPredInstInfo_36 = transform_hlds__float_regs__PredInstInfo0_61;
        transform_hlds__float_regs__succeeded = MR_TRUE;
      }
      else
      {
        transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__PredOrFunc_25 == (MR_Integer) 1);
        if (transform_hlds__float_regs__succeeded)
        {
          transform_hlds__float_regs__ExpectPredInstInfo_36 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(transform_hlds__float_regs__Arity_35);
          transform_hlds__float_regs__succeeded = MR_TRUE;
        }
      }
      if (transform_hlds__float_regs__succeeded)
      {
        MR_Word transform_hlds__float_regs__OrigVarInst_37;
        MR_Word transform_hlds__float_regs__OrigPredInstInfo_38;
        MR_Word transform_hlds__float_regs__ExpectArgRegs_39;
        MR_Word transform_hlds__float_regs__OrigArgRegs_40;
        MR_Word transform_hlds__float_regs__MaybeArgRegs_82;
        MR_Word transform_hlds__float_regs__PredInstInfo0_67;
        MR_Word transform_hlds__float_regs__PredInstInfo0_76;
        MR_Word transform_hlds__float_regs__Var_80;
        MR_Word transform_hlds__float_regs__Var_81;
        MR_Word transform_hlds__float_regs__Var_83;

        hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__InstMapBefore_13, transform_hlds__float_regs__OrigVar_17, &transform_hlds__float_regs__OrigVarInst_37);
        transform_hlds__float_regs__succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(transform_hlds__float_regs__ModuleInfo_22, transform_hlds__float_regs__OrigVarInst_37, &transform_hlds__float_regs__PredInstInfo0_76);
        if (transform_hlds__float_regs__succeeded)
        {
          transform_hlds__float_regs__PredInstInfo0_67 = transform_hlds__float_regs__PredInstInfo0_76;
          transform_hlds__float_regs__succeeded = MR_TRUE;
        }
        else
        {
          transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__PredOrFunc_25 == (MR_Integer) 1);
          if (transform_hlds__float_regs__succeeded)
          {
            transform_hlds__float_regs__PredInstInfo0_67 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(transform_hlds__float_regs__Arity_35);
            transform_hlds__float_regs__succeeded = MR_TRUE;
          }
        }
        if (transform_hlds__float_regs__succeeded)
          transform_hlds__float_regs__OrigPredInstInfo_38 = transform_hlds__float_regs__PredInstInfo0_67;
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.lookup_pred_inst_info\'/5", (MR_String) "no higher order inst");
            return;
          }
        }
        transform_hlds__float_regs__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ExpectPredInstInfo_36, (MR_Integer) 0)));
        transform_hlds__float_regs__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ExpectPredInstInfo_36, (MR_Integer) 1)));
        transform_hlds__float_regs__MaybeArgRegs_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ExpectPredInstInfo_36, (MR_Integer) 2)));
        transform_hlds__float_regs__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ExpectPredInstInfo_36, (MR_Integer) 3)));
        if ((transform_hlds__float_regs__MaybeArgRegs_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[5], transform_hlds__float_regs__ArgPredArgTypes_27, &transform_hlds__float_regs__ExpectArgRegs_39);
        }
        else
          transform_hlds__float_regs__ExpectArgRegs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__MaybeArgRegs_82, (MR_Integer) 0)));
        transform_hlds__float_regs__get_ho_arg_regs_3_p_0(transform_hlds__float_regs__OrigPredInstInfo_38, transform_hlds__float_regs__OrigPredArgTypes_34, &transform_hlds__float_regs__OrigArgRegs_40);
        transform_hlds__float_regs__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[5], ((MR_Box) (transform_hlds__float_regs__OrigArgRegs_40)), ((MR_Box) (transform_hlds__float_regs__ExpectArgRegs_39)));
        if (transform_hlds__float_regs__succeeded)
        {
          *transform_hlds__float_regs__Var_18 = transform_hlds__float_regs__OrigVar_17;
          *transform_hlds__float_regs__STATE_VARIABLE_Info_47 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_46;
          *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44;
        }
        else
        {
          MR_Word transform_hlds__float_regs__UnifyGoal_41;

          transform_hlds__float_regs__create_reg_wrapper_9_p_0(transform_hlds__float_regs__OrigVar_17, transform_hlds__float_regs__OrigPredInstInfo_38, transform_hlds__float_regs__ExpectArgRegs_39, transform_hlds__float_regs__OrigArgRegs_40, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__Var_18, &transform_hlds__float_regs__UnifyGoal_41, transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, transform_hlds__float_regs__STATE_VARIABLE_Info_47);
          mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__float_regs__UnifyGoal_41)), transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45);
        }
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_49 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48;
      }
      else
      {
        MR_Word transform_hlds__float_regs__PredInfo_42;
        MR_Word transform_hlds__float_regs__VarSet_43;

        transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, &transform_hlds__float_regs__PredInfo_42);
        transform_hlds__lambda__lambda_info_get_varset_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, &transform_hlds__float_regs__VarSet_43);
        transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(transform_hlds__float_regs__PredInfo_42, transform_hlds__float_regs__VarSet_43, transform_hlds__float_regs__OrigVar_17, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__OrigPredArgTypes_34, transform_hlds__float_regs__ArgPredArgTypes_27, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48, transform_hlds__float_regs__STATE_VARIABLE_Specs_49);
        *transform_hlds__float_regs__Var_18 = transform_hlds__float_regs__OrigVar_17;
        *transform_hlds__float_regs__STATE_VARIABLE_Info_47 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_46;
        *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44;
      }
    }
    else
    {
      *transform_hlds__float_regs__Var_18 = transform_hlds__float_regs__OrigVar_17;
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_49 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48;
      *transform_hlds__float_regs__STATE_VARIABLE_Info_47 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_46;
      *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
  MR_Box * transform_hlds__float_regs__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_RegR_HeadVars_12;

    transform_hlds__float_regs__make_reg_r_headvars_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), ((MR_Word) transform_hlds__float_regs__wrapper_arg_3), &transform_hlds__float_regs__conv0_STATE_VARIABLE_RegR_HeadVars_12);
    *transform_hlds__float_regs__wrapper_arg_4 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_RegR_HeadVars_12));
  }
}

static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0(
  MR_Word transform_hlds__float_regs__OrigVar_10,
  MR_Word transform_hlds__float_regs__OrigVarPredInstInfo_11,
  MR_Word transform_hlds__float_regs__OuterArgRegs_12,
  MR_Word transform_hlds__float_regs__InnerArgRegs_13,
  MR_Word transform_hlds__float_regs__Context_14,
  MR_Word * transform_hlds__float_regs__Var_15,
  MR_Word * transform_hlds__float_regs__UnifyGoal_16,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_62,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_63)
{
  {
    MR_Word transform_hlds__float_regs__TypeInfo_101_101;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_102_102;
    MR_Word transform_hlds__float_regs__VarSet0_18;
    MR_Word transform_hlds__float_regs__VarTypes0_19;
    MR_Word transform_hlds__float_regs__ModuleInfo0_20;
    MR_Word transform_hlds__float_regs__OrigVarType_21;
    MR_Word transform_hlds__float_regs__Purity_22;
    MR_Word transform_hlds__float_regs__PredOrFunc_23;
    MR_Word transform_hlds__float_regs__PredArgTypes_25;
    MR_Word transform_hlds__float_regs__CallVars_26;
    MR_Word transform_hlds__float_regs__VarSet1_27;
    MR_Word transform_hlds__float_regs__VarTypes1_28;
    MR_Integer transform_hlds__float_regs__Arity_29;
    MR_Word transform_hlds__float_regs__ArgModes_32;
    MR_Word transform_hlds__float_regs__Determinism_34;
    MR_Word transform_hlds__float_regs__GenericCall_35;
    MR_Word transform_hlds__float_regs__CallGoalExpr_36;
    MR_Word transform_hlds__float_regs__CallNonLocals_37;
    MR_Word transform_hlds__float_regs__CallInstMapDelta_38;
    MR_Word transform_hlds__float_regs__CallGoalInfo_39;
    MR_Word transform_hlds__float_regs__CallGoal_40;
    MR_Word transform_hlds__float_regs__VarSet_41;
    MR_Word transform_hlds__float_regs__VarTypes_42;
    MR_Word transform_hlds__float_regs__RegR_HeadVars_43;
    MR_Word transform_hlds__float_regs__DummyPPId_44;
    MR_Word transform_hlds__float_regs__DummyShroudedPPId_45;
    MR_Word transform_hlds__float_regs__ConsId_46;
    MR_Word transform_hlds__float_regs__InInst_47;
    MR_Word transform_hlds__float_regs__ArgUnifyModes0_48;
    MR_Word transform_hlds__float_regs__Unification0_49;
    MR_Word transform_hlds__float_regs__LambdaNonLocals_50;
    MR_Word transform_hlds__float_regs__Functor_51;
    MR_Word transform_hlds__float_regs__Unification_52;
    MR_Word transform_hlds__float_regs__UnifyMode_53;
    MR_Word transform_hlds__float_regs__UnifyGoalExpr_56;
    MR_Word transform_hlds__float_regs__UnifyNonLocals_57;
    MR_Word transform_hlds__float_regs__UnifyPredInstInfo_58;
    MR_Word transform_hlds__float_regs__UnifyPredVarInst_59;
    MR_Word transform_hlds__float_regs__UnifyInstMapDelta_60;
    MR_Word transform_hlds__float_regs__UnifyGoalInfo_61;
    MR_Word transform_hlds__float_regs__Var_64;
    MR_Word transform_hlds__float_regs__Var_65;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_66_66;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_67_67;
    MR_Word transform_hlds__float_regs__Var_68;
    MR_Word transform_hlds__float_regs__Var_69;
    MR_Word transform_hlds__float_regs__Var_70;
    MR_Integer transform_hlds__float_regs__Var_71;
    MR_Word transform_hlds__float_regs__Var_73;
    MR_Word transform_hlds__float_regs__Var_74;
    MR_Word transform_hlds__float_regs__Var_75;
    MR_Word transform_hlds__float_regs__Var_85;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_86_86;
    MR_Word transform_hlds__float_regs__Var_87;
    MR_Word transform_hlds__float_regs__Var_88;
    MR_Word transform_hlds__float_regs__Var_91;
    MR_Word transform_hlds__float_regs__Var_93;
    MR_Word transform_hlds__float_regs__Var_94;
    MR_Word transform_hlds__float_regs__Var_95;
    MR_Word transform_hlds__float_regs__Var_31;
    MR_Word transform_hlds__float_regs__Var_33;
    MR_Box transform_hlds__float_regs__conv1_RegR_HeadVars_43;

    transform_hlds__lambda__lambda_info_get_varset_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_62, &transform_hlds__float_regs__VarSet0_18);
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_62, &transform_hlds__float_regs__VarTypes0_19);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_62, &transform_hlds__float_regs__ModuleInfo0_20);
    hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes0_19, transform_hlds__float_regs__OrigVar_10, &transform_hlds__float_regs__OrigVarType_21);
    parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(transform_hlds__float_regs__OrigVarType_21, &transform_hlds__float_regs__Purity_22, &transform_hlds__float_regs__PredOrFunc_23, &transform_hlds__float_regs__PredArgTypes_25);
    transform_hlds__float_regs__create_fresh_vars_6_p_0(transform_hlds__float_regs__PredArgTypes_25, &transform_hlds__float_regs__CallVars_26, transform_hlds__float_regs__VarSet0_18, &transform_hlds__float_regs__VarSet1_27, transform_hlds__float_regs__VarTypes0_19, &transform_hlds__float_regs__VarTypes1_28);
    transform_hlds__float_regs__TypeInfo_101_101 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
    mercury__list__length_2_p_0(transform_hlds__float_regs__TypeInfo_101_101, transform_hlds__float_regs__CallVars_26, &transform_hlds__float_regs__Arity_29);
    transform_hlds__float_regs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__OrigVarPredInstInfo_11, (MR_Integer) 0)));
    transform_hlds__float_regs__ArgModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__OrigVarPredInstInfo_11, (MR_Integer) 1)));
    transform_hlds__float_regs__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__OrigVarPredInstInfo_11, (MR_Integer) 2)));
    transform_hlds__float_regs__Determinism_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__OrigVarPredInstInfo_11, (MR_Integer) 3)));
    {
      transform_hlds__float_regs__GenericCall_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_35, 0) = ((MR_Box) (transform_hlds__float_regs__OrigVar_10));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_35, 1) = ((MR_Box) (transform_hlds__float_regs__Purity_22));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_35, 2) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_23));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_35, 3) = ((MR_Box) (transform_hlds__float_regs__Arity_29));
    }
    {
      transform_hlds__float_regs__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_64, 0) = ((MR_Box) (transform_hlds__float_regs__InnerArgRegs_13));
    }
    {
      transform_hlds__float_regs__CallGoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 1) = ((MR_Box) (transform_hlds__float_regs__GenericCall_35));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 2) = ((MR_Box) (transform_hlds__float_regs__CallVars_26));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 3) = ((MR_Box) (transform_hlds__float_regs__ArgModes_32));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 4) = ((MR_Box) (transform_hlds__float_regs__Var_64));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 5) = ((MR_Box) (transform_hlds__float_regs__Determinism_34));
    }
    transform_hlds__float_regs__TypeCtorInfo_102_102 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      transform_hlds__float_regs__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_65, 0) = ((MR_Box) (transform_hlds__float_regs__OrigVar_10));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_65, 1) = ((MR_Box) (transform_hlds__float_regs__CallVars_26));
    }
    transform_hlds__float_regs__CallNonLocals_37 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__float_regs__TypeCtorInfo_102_102, transform_hlds__float_regs__Var_65);
    hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__float_regs__ModuleInfo0_20, transform_hlds__float_regs__CallVars_26, transform_hlds__float_regs__ArgModes_32, &transform_hlds__float_regs__CallInstMapDelta_38);
    hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__float_regs__CallNonLocals_37, transform_hlds__float_regs__CallInstMapDelta_38, transform_hlds__float_regs__Determinism_34, transform_hlds__float_regs__Purity_22, transform_hlds__float_regs__Context_14, &transform_hlds__float_regs__CallGoalInfo_39);
    {
      transform_hlds__float_regs__CallGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal_40, 0) = ((MR_Box) (transform_hlds__float_regs__CallGoalExpr_36));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal_40, 1) = ((MR_Box) (transform_hlds__float_regs__CallGoalInfo_39));
    }
    mercury__varset__new_var_3_p_0(transform_hlds__float_regs__TypeCtorInfo_102_102, transform_hlds__float_regs__Var_15, transform_hlds__float_regs__VarSet1_27, &transform_hlds__float_regs__VarSet_41);
    hlds__vartypes__add_var_type_4_p_0(*transform_hlds__float_regs__Var_15, transform_hlds__float_regs__OrigVarType_21, transform_hlds__float_regs__VarTypes1_28, &transform_hlds__float_regs__VarTypes_42);
    transform_hlds__lambda__lambda_info_set_varset_3_p_0(transform_hlds__float_regs__VarSet_41, transform_hlds__float_regs__STATE_VARIABLE_Info_0_62, &transform_hlds__float_regs__STATE_VARIABLE_Info_66_66);
    transform_hlds__lambda__lambda_info_set_vartypes_3_p_0(transform_hlds__float_regs__VarTypes_42, transform_hlds__float_regs__STATE_VARIABLE_Info_66_66, &transform_hlds__float_regs__STATE_VARIABLE_Info_67_67);
    {
      transform_hlds__float_regs__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_68, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_68, 1) = ((MR_Box) (transform_hlds__float_regs__create_reg_wrapper_9_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_68, 3) = ((MR_Box) (transform_hlds__float_regs__VarTypes_42));
    }
    transform_hlds__float_regs__Var_69 = parse_tree__set_of_var__init_0_f_0(transform_hlds__float_regs__TypeCtorInfo_102_102);
    mercury__list__foldl_corresponding_5_p_0(transform_hlds__float_regs__TypeInfo_101_101, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_1[3], transform_hlds__float_regs__Var_68, transform_hlds__float_regs__CallVars_26, transform_hlds__float_regs__OuterArgRegs_12, ((MR_Box) (transform_hlds__float_regs__Var_69)), &transform_hlds__float_regs__conv1_RegR_HeadVars_43);
    transform_hlds__float_regs__RegR_HeadVars_43 = ((MR_Word) transform_hlds__float_regs__conv1_RegR_HeadVars_43);
    transform_hlds__float_regs__Var_70 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    transform_hlds__float_regs__Var_71 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      transform_hlds__float_regs__DummyPPId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__DummyPPId_44, 0) = ((MR_Box) (transform_hlds__float_regs__Var_70));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__DummyPPId_44, 1) = ((MR_Box) (transform_hlds__float_regs__Var_71));
    }
    transform_hlds__float_regs__DummyShroudedPPId_45 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__float_regs__DummyPPId_44);
    {
      transform_hlds__float_regs__ConsId_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_46, 1) = ((MR_Box) (transform_hlds__float_regs__DummyShroudedPPId_45));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_46, 2) = NULL;
    }
    transform_hlds__float_regs__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__OrigVarPredInstInfo_11);
    {
      transform_hlds__float_regs__InInst_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__InInst_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__InInst_47, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__InInst_47, 2) = ((MR_Box) (transform_hlds__float_regs__Var_73));
    }
    {
      transform_hlds__float_regs__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_75, 0) = ((MR_Box) (transform_hlds__float_regs__InInst_47));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_75, 1) = ((MR_Box) (transform_hlds__float_regs__InInst_47));
    }
    {
      transform_hlds__float_regs__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_74, 0) = ((MR_Box) (transform_hlds__float_regs__Var_75));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_74, 1) = ((MR_Box) (transform_hlds__float_regs__Var_75));
    }
    {
      transform_hlds__float_regs__ArgUnifyModes0_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgUnifyModes0_48, 0) = ((MR_Box) (transform_hlds__float_regs__Var_74));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgUnifyModes0_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__float_regs__LambdaNonLocals_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__LambdaNonLocals_50, 0) = ((MR_Box) (transform_hlds__float_regs__OrigVar_10));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__LambdaNonLocals_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__float_regs__Unification0_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 0) = ((MR_Box) (*transform_hlds__float_regs__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 1) = ((MR_Box) (transform_hlds__float_regs__ConsId_46));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 2) = ((MR_Box) (transform_hlds__float_regs__LambdaNonLocals_50));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 3) = ((MR_Box) (transform_hlds__float_regs__ArgUnifyModes0_48));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__float_regs__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_85, 0) = ((MR_Box) (transform_hlds__float_regs__RegR_HeadVars_43));
    }
    transform_hlds__lambda__expand_lambda_15_p_0(transform_hlds__float_regs__Purity_22, (MR_Integer) 0, transform_hlds__float_regs__PredOrFunc_23, transform_hlds__float_regs__Var_85, transform_hlds__float_regs__CallVars_26, transform_hlds__float_regs__ArgModes_32, transform_hlds__float_regs__Determinism_34, transform_hlds__float_regs__LambdaNonLocals_50, transform_hlds__float_regs__CallGoal_40, transform_hlds__float_regs__Unification0_49, &transform_hlds__float_regs__Functor_51, &transform_hlds__float_regs__Unification_52, transform_hlds__float_regs__STATE_VARIABLE_Info_67_67, &transform_hlds__float_regs__STATE_VARIABLE_Info_86_86);
    transform_hlds__float_regs__Var_87 = parse_tree__prog_mode__out_from_to_insts_0_f_0();
    transform_hlds__float_regs__Var_88 = parse_tree__prog_mode__in_from_to_insts_0_f_0();
    {
      transform_hlds__float_regs__UnifyMode_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyMode_53, 0) = ((MR_Box) (transform_hlds__float_regs__Var_87));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyMode_53, 1) = ((MR_Box) (transform_hlds__float_regs__Var_88));
    }
    {
      transform_hlds__float_regs__UnifyGoalExpr_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 0) = ((MR_Box) (*transform_hlds__float_regs__Var_15));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 1) = ((MR_Box) (transform_hlds__float_regs__Functor_51));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 2) = ((MR_Box) (transform_hlds__float_regs__UnifyMode_53));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 3) = ((MR_Box) (transform_hlds__float_regs__Unification_52));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 4) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_1[19]));
    }
    transform_hlds__float_regs__UnifyNonLocals_57 = parse_tree__set_of_var__make_singleton_1_f_0(transform_hlds__float_regs__TypeCtorInfo_102_102, *transform_hlds__float_regs__Var_15);
    {
      transform_hlds__float_regs__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_91, 0) = ((MR_Box) (transform_hlds__float_regs__OuterArgRegs_12));
    }
    {
      transform_hlds__float_regs__UnifyPredInstInfo_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyPredInstInfo_58, 0) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_23));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyPredInstInfo_58, 1) = ((MR_Box) (transform_hlds__float_regs__ArgModes_32));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyPredInstInfo_58, 2) = ((MR_Box) (transform_hlds__float_regs__Var_91));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyPredInstInfo_58, 3) = ((MR_Box) (transform_hlds__float_regs__Determinism_34));
    }
    transform_hlds__float_regs__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__UnifyPredInstInfo_58);
    {
      transform_hlds__float_regs__UnifyPredVarInst_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__UnifyPredVarInst_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__UnifyPredVarInst_59, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__UnifyPredVarInst_59, 2) = ((MR_Box) (transform_hlds__float_regs__Var_93));
    }
    {
      transform_hlds__float_regs__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_95, 0) = ((MR_Box) (*transform_hlds__float_regs__Var_15));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_95, 1) = ((MR_Box) (transform_hlds__float_regs__UnifyPredVarInst_59));
    }
    {
      transform_hlds__float_regs__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_94, 0) = ((MR_Box) (transform_hlds__float_regs__Var_95));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__float_regs__UnifyInstMapDelta_60 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__float_regs__Var_94);
    hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__float_regs__UnifyNonLocals_57, transform_hlds__float_regs__UnifyInstMapDelta_60, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__float_regs__UnifyGoalInfo_61);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__float_regs__UnifyGoal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__UnifyGoalExpr_56));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__UnifyGoalInfo_61));
    }
    transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0((MR_Integer) 1, transform_hlds__float_regs__STATE_VARIABLE_Info_86_86, transform_hlds__float_regs__STATE_VARIABLE_Info_63);
  }
}

static void MR_CALL 
transform_hlds__float_regs__create_fresh_vars_6_p_0(
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarSet_0_3,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_VarSet_4,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarTypes_0_5,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_VarTypes_6)
{
  if ((transform_hlds__float_regs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *transform_hlds__float_regs__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *transform_hlds__float_regs__STATE_VARIABLE_VarTypes_6 = transform_hlds__float_regs__STATE_VARIABLE_VarTypes_0_5;
    *transform_hlds__float_regs__STATE_VARIABLE_VarSet_4 = transform_hlds__float_regs__STATE_VARIABLE_VarSet_0_3;
  }
  else
  {
    MR_Word transform_hlds__float_regs__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__Var_15;
    MR_Word transform_hlds__float_regs__Vars_16;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarSet_23_23;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarTypes_24_24;

    mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__float_regs__Var_15, transform_hlds__float_regs__STATE_VARIABLE_VarSet_0_3, &transform_hlds__float_regs__STATE_VARIABLE_VarSet_23_23);
    hlds__vartypes__add_var_type_4_p_0(transform_hlds__float_regs__Var_15, transform_hlds__float_regs__Type_13, transform_hlds__float_regs__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__float_regs__STATE_VARIABLE_VarTypes_24_24);
    transform_hlds__float_regs__create_fresh_vars_6_p_0(transform_hlds__float_regs__Types_14, &transform_hlds__float_regs__Vars_16, transform_hlds__float_regs__STATE_VARIABLE_VarSet_23_23, transform_hlds__float_regs__STATE_VARIABLE_VarSet_4, transform_hlds__float_regs__STATE_VARIABLE_VarTypes_24_24, transform_hlds__float_regs__STATE_VARIABLE_VarTypes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__float_regs__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__Var_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__float_regs__Vars_16));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(
  MR_Word transform_hlds__float_regs__PredInfo_9,
  MR_Word transform_hlds__float_regs__VarSet_10,
  MR_Word transform_hlds__float_regs__Var_11,
  MR_Word transform_hlds__float_regs__Context_12,
  MR_Word transform_hlds__float_regs__ArgTypesA_13,
  MR_Word transform_hlds__float_regs__ArgTypesB_14,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_20,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_21)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__Origin_16;
    MR_Word transform_hlds__float_regs__Var_17;
    MR_Word transform_hlds__float_regs__Var_18;

    {
      MR_Word transform_hlds__float_regs__Var_23;

      transform_hlds__float_regs__Var_23 = parse_tree__builtin_lib_types__float_type_0_f_0();
      transform_hlds__float_regs__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (transform_hlds__float_regs__Var_23)), transform_hlds__float_regs__ArgTypesA_13);
    }
    if (!(transform_hlds__float_regs__succeeded))
    {
      MR_Word transform_hlds__float_regs__Var_22;

      transform_hlds__float_regs__Var_22 = parse_tree__builtin_lib_types__float_type_0_f_0();
      transform_hlds__float_regs__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (transform_hlds__float_regs__Var_22)), transform_hlds__float_regs__ArgTypesB_14);
    }
    if (transform_hlds__float_regs__succeeded)
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__float_regs__PredInfo_9, &transform_hlds__float_regs__Origin_16);
      transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__Origin_16)) == (MR_mktag((MR_Integer) 0)));
      if (transform_hlds__float_regs__succeeded)
      {
        transform_hlds__float_regs__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Origin_16, (MR_Integer) 0)));
        transform_hlds__float_regs__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Origin_16, (MR_Integer) 1)));
      }
      transform_hlds__float_regs__succeeded = !(transform_hlds__float_regs__succeeded);
    }
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__Spec_19;
      MR_Word transform_hlds__float_regs__PredPieces_33;
      MR_String transform_hlds__float_regs__VarName_34;
      MR_Word transform_hlds__float_regs__InPieces_35;
      MR_Word transform_hlds__float_regs__ErrorPieces_36;
      MR_Word transform_hlds__float_regs__Msg_38;
      MR_Word transform_hlds__float_regs__Var_40;
      MR_Word transform_hlds__float_regs__Var_51;
      MR_Word transform_hlds__float_regs__Var_52;
      MR_Word transform_hlds__float_regs__Var_65;
      MR_Word transform_hlds__float_regs__Var_66;
      MR_Word transform_hlds__float_regs__Var_67;
      MR_Word transform_hlds__float_regs__Var_68;
      MR_Word transform_hlds__float_regs__Var_75;

      transform_hlds__float_regs__PredPieces_33 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, transform_hlds__float_regs__PredInfo_9);
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__float_regs__VarSet_10, transform_hlds__float_regs__Var_11, &transform_hlds__float_regs__VarName_34);
      {
        transform_hlds__float_regs__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[15])));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_40, 1) = ((MR_Box) (transform_hlds__float_regs__PredPieces_33));
      }
      transform_hlds__float_regs__InPieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__float_regs__Var_40, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[8]));
      {
        transform_hlds__float_regs__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Var_52, 1) = ((MR_Box) (transform_hlds__float_regs__VarName_34));
      }
      {
        transform_hlds__float_regs__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_51, 0) = ((MR_Box) (transform_hlds__float_regs__Var_52));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[10])));
      }
      {
        transform_hlds__float_regs__ErrorPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ErrorPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[16])));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ErrorPieces_36, 1) = ((MR_Box) (transform_hlds__float_regs__Var_51));
      }
      {
        transform_hlds__float_regs__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_66, 0) = ((MR_Box) (transform_hlds__float_regs__InPieces_35));
      }
      {
        transform_hlds__float_regs__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_68, 0) = ((MR_Box) (transform_hlds__float_regs__ErrorPieces_36));
      }
      {
        transform_hlds__float_regs__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_67, 0) = ((MR_Box) (transform_hlds__float_regs__Var_68));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[18])));
      }
      {
        transform_hlds__float_regs__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_65, 0) = ((MR_Box) (transform_hlds__float_regs__Var_66));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_65, 1) = ((MR_Box) (transform_hlds__float_regs__Var_67));
      }
      {
        transform_hlds__float_regs__Msg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Msg_38, 0) = ((MR_Box) (transform_hlds__float_regs__Context_12));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Msg_38, 1) = ((MR_Box) (transform_hlds__float_regs__Var_65));
      }
      {
        transform_hlds__float_regs__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_75, 0) = ((MR_Box) (transform_hlds__float_regs__Msg_38));
        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        transform_hlds__float_regs__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Spec_19, 2) = ((MR_Box) (transform_hlds__float_regs__Var_75));
      }
      mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (transform_hlds__float_regs__Spec_19)), transform_hlds__float_regs__STATE_VARIABLE_Specs_0_20, transform_hlds__float_regs__STATE_VARIABLE_Specs_21);
    }
    else
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_21 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_20;
  }
}

static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_RegType_4);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0(
  MR_Word transform_hlds__float_regs__PredInstInfo_4,
  MR_Word transform_hlds__float_regs__ArgTypes_5,
  MR_Word * transform_hlds__float_regs__ArgRegs_6)
{
  {
    MR_Word transform_hlds__float_regs__MaybeArgRegs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_4, (MR_Integer) 2)));
    MR_Word transform_hlds__float_regs__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_4, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_4, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_4, (MR_Integer) 3)));

    if ((transform_hlds__float_regs__MaybeArgRegs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[4], transform_hlds__float_regs__ArgTypes_5, transform_hlds__float_regs__ArgRegs_6);
    }
    else
      *transform_hlds__float_regs__ArgRegs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__MaybeArgRegs_9, (MR_Integer) 0)));
  }
}

static MR_bool MR_CALL 
transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_4,
  MR_Word transform_hlds__float_regs__Inst_5,
  MR_Word * transform_hlds__float_regs__PredInstInfo_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__float_regs__succeeded;

      switch (MR_tag((MR_Word) transform_hlds__float_regs__Inst_5)) {
        default:
          transform_hlds__float_regs__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__float_regs__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst_5, (MR_Integer) 1)));
            MR_Word transform_hlds__float_regs__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst_5, (MR_Integer) 0)));

            transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__Var_12)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__float_regs__succeeded)
              *transform_hlds__float_regs__PredInstInfo_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__Var_12), (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst_5, (MR_Integer) 0)))) {
            default:
              transform_hlds__float_regs__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__float_regs__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst_5, (MR_Integer) 2)));
                MR_Word transform_hlds__float_regs__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst_5, (MR_Integer) 1)));

                transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__Var_11)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__float_regs__succeeded)
                  *transform_hlds__float_regs__PredInstInfo_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__Var_11), (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word transform_hlds__float_regs__InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst_5, (MR_Integer) 1)));
                MR_Word transform_hlds__float_regs__InstB_10;

                check_hlds__mode_util__inst_lookup_3_p_0(transform_hlds__float_regs__ModuleInfo_4, transform_hlds__float_regs__InstName_9, &transform_hlds__float_regs__InstB_10);
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__float_regs__next_value_of_Inst_5 = transform_hlds__float_regs__InstB_10;

                  transform_hlds__float_regs__Inst_5 = transform_hlds__float_regs__next_value_of_Inst_5;
                }
                continue;
              }
              break;
          }
          break;
      }
      return transform_hlds__float_regs__succeeded;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__float_regs__do_recompute_atomic_instmap_delta_5_p_0(
  MR_Word transform_hlds__float_regs__Goal0_6,
  MR_Word * transform_hlds__float_regs__Goal_7,
  MR_Word transform_hlds__float_regs__InstMap_8,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_14,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_15)
{
  {
    MR_Word transform_hlds__float_regs__VarTypes_10;
    MR_Word transform_hlds__float_regs__InstVarSet_11;
    MR_Word transform_hlds__float_regs__ModuleInfo0_12;
    MR_Word transform_hlds__float_regs__ModuleInfo_13;

    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_14, &transform_hlds__float_regs__VarTypes_10);
    transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_14, &transform_hlds__float_regs__InstVarSet_11);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_14, &transform_hlds__float_regs__ModuleInfo0_12);
    check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__float_regs__Goal0_6, transform_hlds__float_regs__Goal_7, transform_hlds__float_regs__VarTypes_10, transform_hlds__float_regs__InstVarSet_11, transform_hlds__float_regs__InstMap_8, transform_hlds__float_regs__ModuleInfo0_12, &transform_hlds__float_regs__ModuleInfo_13);
    transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_13, transform_hlds__float_regs__STATE_VARIABLE_Info_0_14, transform_hlds__float_regs__STATE_VARIABLE_Info_15);
  }
}

static void MR_CALL 
transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(
  MR_Word transform_hlds__float_regs__Goal_4,
  MR_Word transform_hlds__float_regs__InstMap0_5,
  MR_Word * transform_hlds__float_regs__InstMap_6)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal_4, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__InstMapDelta_9;
    MR_Word transform_hlds__float_regs__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal_4, (MR_Integer) 0)));

    transform_hlds__float_regs__InstMapDelta_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__float_regs__GoalInfo_8);
    transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(transform_hlds__float_regs__InstMapDelta_9);
    if (transform_hlds__float_regs__succeeded)
      hlds__instmap__init_unreachable_1_p_0(transform_hlds__float_regs__InstMap_6);
    else
      *transform_hlds__float_regs__InstMap_6 = transform_hlds__float_regs__InstMap0_5;
  }
}

static void MR_CALL 
transform_hlds__float_regs__finish_call_goal_8_p_0(
  MR_Word transform_hlds__float_regs__WrapGoals_9,
  MR_Word transform_hlds__float_regs__CallGoalExpr0_10,
  MR_Word transform_hlds__float_regs__CallGoalInfo0_11,
  MR_Word * transform_hlds__float_regs__Goal_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_19,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_20,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_21,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_22)
{
  {
    MR_Word transform_hlds__float_regs__CallGoal0_15;
    MR_Word transform_hlds__float_regs__CallGoal_16;
    MR_Word transform_hlds__float_regs__CallGoalInfo_18;
    MR_Word transform_hlds__float_regs__Var_25;
    MR_Word transform_hlds__float_regs__Var_26;
    MR_Word transform_hlds__float_regs__VarTypes_35;
    MR_Word transform_hlds__float_regs__InstVarSet_36;
    MR_Word transform_hlds__float_regs__ModuleInfo0_37;
    MR_Word transform_hlds__float_regs__ModuleInfo_38;
    MR_Word transform_hlds__float_regs__Var_17;

    {
      transform_hlds__float_regs__CallGoal0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal0_15, 0) = ((MR_Box) (transform_hlds__float_regs__CallGoalExpr0_10));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal0_15, 1) = ((MR_Box) (transform_hlds__float_regs__CallGoalInfo0_11));
    }
    transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_21, &transform_hlds__float_regs__VarTypes_35);
    transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_21, &transform_hlds__float_regs__InstVarSet_36);
    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_21, &transform_hlds__float_regs__ModuleInfo0_37);
    check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__float_regs__CallGoal0_15, &transform_hlds__float_regs__CallGoal_16, transform_hlds__float_regs__VarTypes_35, transform_hlds__float_regs__InstVarSet_36, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_19, transform_hlds__float_regs__ModuleInfo0_37, &transform_hlds__float_regs__ModuleInfo_38);
    transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_38, transform_hlds__float_regs__STATE_VARIABLE_Info_0_21, transform_hlds__float_regs__STATE_VARIABLE_Info_22);
    hlds__goal_util__update_instmap_3_p_0(transform_hlds__float_regs__CallGoal_16, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_19, transform_hlds__float_regs__STATE_VARIABLE_InstMap_20);
    transform_hlds__float_regs__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal_16, (MR_Integer) 0)));
    transform_hlds__float_regs__CallGoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal_16, (MR_Integer) 1)));
    {
      transform_hlds__float_regs__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_26, 0) = ((MR_Box) (transform_hlds__float_regs__CallGoal_16));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__float_regs__Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__float_regs__WrapGoals_9, transform_hlds__float_regs__Var_26);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__float_regs__Var_25, transform_hlds__float_regs__CallGoalInfo_18, transform_hlds__float_regs__Goal_12);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_23;
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_25;

    transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_25);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_23));
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_25));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(
  MR_Word transform_hlds__float_regs__PredId_6,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_12,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_13,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_14)
{
  {
    MR_Word transform_hlds__float_regs__PredInfo_9;
    MR_Word transform_hlds__float_regs__ProcIds_10;
    MR_Word transform_hlds__float_regs__Var_15;
    MR_Box transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Box transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__float_regs__PredId_6, &transform_hlds__float_regs__PredInfo_9);
    transform_hlds__float_regs__ProcIds_10 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__float_regs__PredInfo_9);
    {
      transform_hlds__float_regs__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_15, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_15, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_15, 3) = ((MR_Box) (transform_hlds__float_regs__PredId_6));
    }
    mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__float_regs_scalar_common_1[0], transform_hlds__float_regs__Var_15, transform_hlds__float_regs__ProcIds_10, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_0_13)), &transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14);
    *transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12);
    *transform_hlds__float_regs__STATE_VARIABLE_Specs_14 = ((MR_Word) transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14);
  }
}

static void MR_CALL 
transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(
  MR_Word transform_hlds__float_regs__Type_3,
  MR_Word * transform_hlds__float_regs__RegType_4)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__Var_5;

    transform_hlds__float_regs__Var_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
    transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__float_regs__Type_3, transform_hlds__float_regs__Var_5);
    if (transform_hlds__float_regs__succeeded)
      *transform_hlds__float_regs__RegType_4 = (MR_Integer) 1;
    else
      *transform_hlds__float_regs__RegType_4 = (MR_Integer) 0;
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_Inst_10;

    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_Inst_10);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_Inst_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
  MR_Word transform_hlds__float_regs__Seen_7,
  MR_Word transform_hlds__float_regs__Type_8,
  MR_Word transform_hlds__float_regs__BoundInst0_9,
  MR_Word * transform_hlds__float_regs__BoundInst_10)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__BoundInst0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__ArgInsts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__BoundInst0_9, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__ArgInsts_14;
    MR_Word transform_hlds__float_regs__ArgTypes_13;

    transform_hlds__float_regs__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Type_8, transform_hlds__float_regs__ConsId_11, &transform_hlds__float_regs__ArgTypes_13);
    if (transform_hlds__float_regs__succeeded)
      if ((transform_hlds__float_regs__ArgTypes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        transform_hlds__float_regs__ArgInsts_14 = transform_hlds__float_regs__ArgInsts0_12;
      else
      {
        MR_Word transform_hlds__float_regs__TypeCtorInfo_25_25;
        MR_Word transform_hlds__float_regs__Var_17;

        {
          transform_hlds__float_regs__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_17, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_17, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_17, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_6));
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_17, 4) = ((MR_Box) (transform_hlds__float_regs__Seen_7));
        }
        transform_hlds__float_regs__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
        mercury__list__map_corresponding_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__TypeCtorInfo_25_25, transform_hlds__float_regs__TypeCtorInfo_25_25, transform_hlds__float_regs__Var_17, transform_hlds__float_regs__ArgTypes_13, transform_hlds__float_regs__ArgInsts0_12, &transform_hlds__float_regs__ArgInsts_14);
      }
    else
      transform_hlds__float_regs__ArgInsts_14 = transform_hlds__float_regs__ArgInsts0_12;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__float_regs__BoundInst_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__ConsId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__ArgInsts_14));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_from_to_insts_4_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
  MR_Word transform_hlds__float_regs__VarType_6,
  MR_Word transform_hlds__float_regs__ArgFromToInsts0_7,
  MR_Word * transform_hlds__float_regs__ArgFromToInsts_8)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__Var_9;
    MR_Word transform_hlds__float_regs__InitialInst0_16;
    MR_Word transform_hlds__float_regs__FinalInst0_17;
    MR_Word transform_hlds__float_regs__InitialInst_18;
    MR_Word transform_hlds__float_regs__FinalInst_19;

    transform_hlds__float_regs__Var_9 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
    transform_hlds__float_regs__InitialInst0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ArgFromToInsts0_7, (MR_Integer) 0)));
    transform_hlds__float_regs__FinalInst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ArgFromToInsts0_7, (MR_Integer) 1)));
    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_5, transform_hlds__float_regs__Var_9, transform_hlds__float_regs__VarType_6, transform_hlds__float_regs__InitialInst0_16, &transform_hlds__float_regs__InitialInst_18);
    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_5, transform_hlds__float_regs__Var_9, transform_hlds__float_regs__VarType_6, transform_hlds__float_regs__FinalInst0_17, &transform_hlds__float_regs__FinalInst_19);
    transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__InitialInst_18, transform_hlds__float_regs__InitialInst0_16);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__FinalInst_19, transform_hlds__float_regs__FinalInst0_17);
    if (transform_hlds__float_regs__succeeded)
      *transform_hlds__float_regs__ArgFromToInsts_8 = transform_hlds__float_regs__ArgFromToInsts0_7;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__float_regs__ArgFromToInsts_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__InitialInst_18));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__FinalInst_19));
      }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
  MR_Word transform_hlds__float_regs__RealVarType_6,
  MR_Word transform_hlds__float_regs__ArgMode0_7,
  MR_Word * transform_hlds__float_regs__ArgMode_8)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__TypeArgs_10;
    MR_Word transform_hlds__float_regs___TypeCtor_9;
    MR_Word transform_hlds__float_regs__Var_11;
    MR_Word transform_hlds__float_regs__Var_12;

    transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__float_regs__RealVarType_6, &transform_hlds__float_regs___TypeCtor_9, &transform_hlds__float_regs__TypeArgs_10);
    if (transform_hlds__float_regs__succeeded)
    {
      transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__TypeArgs_10)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__float_regs__succeeded)
      {
        transform_hlds__float_regs__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__TypeArgs_10, (MR_Integer) 0)));
        transform_hlds__float_regs__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__TypeArgs_10, (MR_Integer) 1)));
      }
    }
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__AssumedType_14;
      MR_Word transform_hlds__float_regs__Var_19;

      transform_hlds__float_regs__make_generic_type_3_p_0((MR_Integer) 0, transform_hlds__float_regs__RealVarType_6, &transform_hlds__float_regs__AssumedType_14);
      transform_hlds__float_regs__Var_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
      transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(transform_hlds__float_regs__ModuleInfo_5, transform_hlds__float_regs__Var_19, transform_hlds__float_regs__AssumedType_14, transform_hlds__float_regs__ArgMode0_7, transform_hlds__float_regs__ArgMode_8);
    }
    else
      *transform_hlds__float_regs__ArgMode_8 = transform_hlds__float_regs__ArgMode0_7;
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
  MR_Word transform_hlds__float_regs__Seen_7,
  MR_Word transform_hlds__float_regs__VarType_8,
  MR_Word transform_hlds__float_regs__ArgMode0_9,
  MR_Word * transform_hlds__float_regs__ArgMode_10)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__InitialInst0_11;
    MR_Word transform_hlds__float_regs__FinalInst0_12;
    MR_Word transform_hlds__float_regs__InitialInst_13;
    MR_Word transform_hlds__float_regs__FinalInst_14;

    check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__ArgMode0_9, &transform_hlds__float_regs__InitialInst0_11, &transform_hlds__float_regs__FinalInst0_12);
    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen_7, transform_hlds__float_regs__VarType_8, transform_hlds__float_regs__InitialInst0_11, &transform_hlds__float_regs__InitialInst_13);
    transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen_7, transform_hlds__float_regs__VarType_8, transform_hlds__float_regs__FinalInst0_12, &transform_hlds__float_regs__FinalInst_14);
    transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__InitialInst_13, transform_hlds__float_regs__InitialInst0_11);
    if (transform_hlds__float_regs__succeeded)
      transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__FinalInst_14, transform_hlds__float_regs__FinalInst0_12);
    if (transform_hlds__float_regs__succeeded)
      *transform_hlds__float_regs__ArgMode_10 = transform_hlds__float_regs__ArgMode0_9;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__float_regs__ArgMode_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__InitialInst_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__FinalInst_14));
      }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_3(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv2_BoundInst_10;

    transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv2_BoundInst_10);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv2_BoundInst_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv1_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_RegType_4);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_ArgMode_10;

    transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_ArgMode_10);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_ArgMode_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
  MR_Word transform_hlds__float_regs__Seen0_7,
  MR_Word transform_hlds__float_regs__Type_8,
  MR_Word transform_hlds__float_regs__Inst0_9,
  MR_Word * transform_hlds__float_regs__Inst_10)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__float_regs__Inst0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__float_regs__Inst0_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
            break;
          case (MR_Integer) 1:
            *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
            break;
        }
        break;
      case (MR_Integer) 1:
        *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__float_regs__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));
          MR_Word transform_hlds__float_regs__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)));

          if ((transform_hlds__float_regs__Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
          else
          {
            MR_Word transform_hlds__float_regs__Var_41;
            MR_Word transform_hlds__float_regs__PredInstInfo0_46 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__Var_55), (MR_Integer) 1);
            MR_Word transform_hlds__float_regs__PredInstInfo_48;
            MR_Word transform_hlds__float_regs__ArgTypes_44;
            MR_Word transform_hlds__float_regs__Var_18;
            MR_Word transform_hlds__float_regs__Var_19;

            transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__Type_8, &transform_hlds__float_regs__Var_18, &transform_hlds__float_regs__Var_19, &transform_hlds__float_regs__ArgTypes_44);
            if (transform_hlds__float_regs__succeeded)
            {
              MR_Word transform_hlds__float_regs__TypeCtorInfo_23_77;
              MR_Word transform_hlds__float_regs__TypeCtorInfo_24_78;
              MR_Word transform_hlds__float_regs__PredOrFunc_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_46, (MR_Integer) 0)));
              MR_Word transform_hlds__float_regs__Modes0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_46, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__Detism_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_46, (MR_Integer) 3)));
              MR_Word transform_hlds__float_regs__Modes_69;
              MR_Word transform_hlds__float_regs__ArgRegs_70;
              MR_Word transform_hlds__float_regs__ArgRegInfo_71;
              MR_Word transform_hlds__float_regs__Var_72;
              MR_Word transform_hlds__float_regs___ArgRegInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_46, (MR_Integer) 2)));

              {
                transform_hlds__float_regs__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_72, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_72, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_72, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_6));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_72, 4) = ((MR_Box) (transform_hlds__float_regs__Seen0_7));
              }
              transform_hlds__float_regs__TypeCtorInfo_23_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              transform_hlds__float_regs__TypeCtorInfo_24_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
              mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_23_77, transform_hlds__float_regs__TypeCtorInfo_24_78, transform_hlds__float_regs__TypeCtorInfo_24_78, transform_hlds__float_regs__Var_72, transform_hlds__float_regs__ArgTypes_44, transform_hlds__float_regs__Modes0_66, &transform_hlds__float_regs__Modes_69);
              mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_23_77, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[3], transform_hlds__float_regs__ArgTypes_44, &transform_hlds__float_regs__ArgRegs_70);
              {
                transform_hlds__float_regs__ArgRegInfo_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgRegInfo_71, 0) = ((MR_Box) (transform_hlds__float_regs__ArgRegs_70));
              }
              {
                transform_hlds__float_regs__PredInstInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_48, 0) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_65));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_48, 1) = ((MR_Box) (transform_hlds__float_regs__Modes_69));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_48, 2) = ((MR_Box) (transform_hlds__float_regs__ArgRegInfo_71));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_48, 3) = ((MR_Box) (transform_hlds__float_regs__Detism_68));
              }
            }
            else
              transform_hlds__float_regs__PredInstInfo_48 = transform_hlds__float_regs__PredInstInfo0_46;
            transform_hlds__float_regs__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__PredInstInfo_48);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__float_regs__Inst_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__float_regs__Var_56));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__float_regs__Var_41));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__float_regs__TypeCtorInfo_52_52;
              MR_Word transform_hlds__float_regs__InstResults_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs__BoundInsts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 3)));
              MR_Word transform_hlds__float_regs__BoundInsts_23;
              MR_Word transform_hlds__float_regs__Var_39;
              MR_Word transform_hlds__float_regs__Uniq_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));

              {
                transform_hlds__float_regs__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_39, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_39, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_39, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_6));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_39, 4) = ((MR_Box) (transform_hlds__float_regs__Seen0_7));
                MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_39, 5) = ((MR_Box) (transform_hlds__float_regs__Type_8));
              }
              transform_hlds__float_regs__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
              mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_52_52, transform_hlds__float_regs__TypeCtorInfo_52_52, transform_hlds__float_regs__Var_39, transform_hlds__float_regs__BoundInsts0_22, &transform_hlds__float_regs__BoundInsts_23);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__float_regs__Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__Uniq_49));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__InstResults_21));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__float_regs__BoundInsts_23));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__float_regs__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));

              if ((transform_hlds__float_regs__Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
              else
              {
                MR_Word transform_hlds__float_regs__PredInstInfo0_12 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__Var_57), (MR_Integer) 1);
                MR_Word transform_hlds__float_regs__PredInstInfo_17;
                MR_Word transform_hlds__float_regs__Var_43;
                MR_Word transform_hlds__float_regs__ArgTypes_16;
                MR_Word transform_hlds__float_regs__Var_13;
                MR_Word transform_hlds__float_regs__Var_14;

                transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__Type_8, &transform_hlds__float_regs__Var_13, &transform_hlds__float_regs__Var_14, &transform_hlds__float_regs__ArgTypes_16);
                if (transform_hlds__float_regs__succeeded)
                  transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen0_7, transform_hlds__float_regs__ArgTypes_16, transform_hlds__float_regs__PredInstInfo0_12, &transform_hlds__float_regs__PredInstInfo_17);
                else
                  transform_hlds__float_regs__PredInstInfo_17 = transform_hlds__float_regs__PredInstInfo0_12;
                transform_hlds__float_regs__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__PredInstInfo_17);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__float_regs__Inst_10 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__Var_58));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__Var_43));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__float_regs__InstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));
              MR_Word transform_hlds__float_regs__SpecInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 2)));
              MR_Word transform_hlds__float_regs__SpecInst_26;

              transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen0_7, transform_hlds__float_regs__Type_8, transform_hlds__float_regs__SpecInst0_25, &transform_hlds__float_regs__SpecInst_26);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__float_regs__Inst_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__InstVarSet_24));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__SpecInst_26));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__float_regs__InstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));

              transform_hlds__float_regs__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, transform_hlds__float_regs__Seen0_7, ((MR_Box) (transform_hlds__float_regs__InstName_27)));
              if (transform_hlds__float_regs__succeeded)
                *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
              else
              {
                MR_Word transform_hlds__float_regs__Seen1_28;
                MR_Word transform_hlds__float_regs__Inst1_29;
                MR_Word transform_hlds__float_regs__Inst2_30;

                mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (transform_hlds__float_regs__InstName_27)), transform_hlds__float_regs__Seen0_7, &transform_hlds__float_regs__Seen1_28);
                check_hlds__mode_util__inst_lookup_3_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__InstName_27, &transform_hlds__float_regs__Inst1_29);
                transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen1_28, transform_hlds__float_regs__Type_8, transform_hlds__float_regs__Inst1_29, &transform_hlds__float_regs__Inst2_30);
                transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__Inst1_29, transform_hlds__float_regs__Inst2_30);
                if (transform_hlds__float_regs__succeeded)
                  *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
                else
                  *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst2_30;
              }
            }
            break;
          case (MR_Integer) 5:
            *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv1_RegType_4;

    transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_RegType_4);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_RegType_4));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_ArgMode_10;

    transform_hlds__float_regs__add_arg_regs_in_mode_seen_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_ArgMode_10);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_ArgMode_10));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
  MR_Word transform_hlds__float_regs__Seen_7,
  MR_Word transform_hlds__float_regs__ArgTypes_8,
  MR_Word transform_hlds__float_regs__PredInstInfo0_9,
  MR_Word * transform_hlds__float_regs__PredInstInfo_10)
{
  {
    MR_Word transform_hlds__float_regs__TypeCtorInfo_23_23;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_24_24;
    MR_Word transform_hlds__float_regs__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__float_regs__Modes0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_9, (MR_Integer) 1)));
    MR_Word transform_hlds__float_regs__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_9, (MR_Integer) 3)));
    MR_Word transform_hlds__float_regs__Modes_15;
    MR_Word transform_hlds__float_regs__ArgRegs_16;
    MR_Word transform_hlds__float_regs__ArgRegInfo_17;
    MR_Word transform_hlds__float_regs__Var_18;
    MR_Word transform_hlds__float_regs___ArgRegInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_9, (MR_Integer) 2)));

    {
      transform_hlds__float_regs__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_18, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_18, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_18, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_18, 4) = ((MR_Box) (transform_hlds__float_regs__Seen_7));
    }
    transform_hlds__float_regs__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    transform_hlds__float_regs__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_23_23, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__Var_18, transform_hlds__float_regs__ArgTypes_8, transform_hlds__float_regs__Modes0_12, &transform_hlds__float_regs__Modes_15);
    mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_23_23, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[2], transform_hlds__float_regs__ArgTypes_8, &transform_hlds__float_regs__ArgRegs_16);
    {
      transform_hlds__float_regs__ArgRegInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgRegInfo_17, 0) = ((MR_Box) (transform_hlds__float_regs__ArgRegs_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__float_regs__PredInstInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__Modes_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__float_regs__ArgRegInfo_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__float_regs__Detism_14));
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv1_Type_6;

    transform_hlds__float_regs__make_generic_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_Type_6);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_Type_6));
  }
}

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_Type_6;

    transform_hlds__float_regs__make_generic_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_Type_6);
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_Type_6));
  }
}

static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0(
  MR_Word transform_hlds__float_regs__PolymorphicContext_4,
  MR_Word transform_hlds__float_regs__Type0_5,
  MR_Word * transform_hlds__float_regs__Type_6)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__Purity_7;
    MR_Word transform_hlds__float_regs__PredOrFunc_8;
    MR_Word transform_hlds__float_regs__ArgTypes0_10;

    transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__Type0_5, &transform_hlds__float_regs__Purity_7, &transform_hlds__float_regs__PredOrFunc_8, &transform_hlds__float_regs__ArgTypes0_10);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__TypeCtorInfo_24_24;
      MR_Word transform_hlds__float_regs__ArgTypes_11;
      MR_Word transform_hlds__float_regs__Var_15;

      {
        transform_hlds__float_regs__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_15, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_15, 1) = ((MR_Box) (transform_hlds__float_regs__make_generic_type_3_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_15, 3) = ((MR_Box) (transform_hlds__float_regs__PolymorphicContext_4));
      }
      transform_hlds__float_regs__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__Var_15, transform_hlds__float_regs__ArgTypes0_10, &transform_hlds__float_regs__ArgTypes_11);
      parse_tree__prog_type__construct_higher_order_type_5_p_0(transform_hlds__float_regs__Purity_7, transform_hlds__float_regs__PredOrFunc_8, transform_hlds__float_regs__ArgTypes_11, transform_hlds__float_regs__Type_6);
    }
    else
    {
      MR_Word transform_hlds__float_regs__TypeCtor_12;
      MR_Word transform_hlds__float_regs__ArgTypes0_20;

      transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__float_regs__Type0_5, &transform_hlds__float_regs__TypeCtor_12, &transform_hlds__float_regs__ArgTypes0_20);
      if (transform_hlds__float_regs__succeeded)
        if ((transform_hlds__float_regs__ArgTypes0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word transform_hlds__float_regs__Var_28;

          transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__PolymorphicContext_4 == (MR_Integer) 1);
          if (transform_hlds__float_regs__succeeded)
          {
            transform_hlds__float_regs__Var_28 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
            transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(transform_hlds__float_regs__TypeCtor_12, transform_hlds__float_regs__Var_28);
          }
          if (transform_hlds__float_regs__succeeded)
            *transform_hlds__float_regs__Type_6 = parse_tree__builtin_lib_types__heap_pointer_type_0_f_0();
          else
            *transform_hlds__float_regs__Type_6 = transform_hlds__float_regs__Type0_5;
        }
        else
        {
          MR_Word transform_hlds__float_regs__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
          MR_Word transform_hlds__float_regs__ArgTypes_18;

          mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_27_27, transform_hlds__float_regs__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__float_regs_scalar_common_6[0], transform_hlds__float_regs__ArgTypes0_20, &transform_hlds__float_regs__ArgTypes_18);
          parse_tree__prog_type__construct_type_3_p_0(transform_hlds__float_regs__TypeCtor_12, transform_hlds__float_regs__ArgTypes_18, transform_hlds__float_regs__Type_6);
        }
      else
        *transform_hlds__float_regs__Type_6 = transform_hlds__float_regs__Type0_5;
    }
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv1_ArgMode_8;

    transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv1_ArgMode_8);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv1_ArgMode_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_ArgMode_8;

    transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_ArgMode_8);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_ArgMode_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
  MR_Integer transform_hlds__float_regs__ProcId_6,
  MR_Word transform_hlds__float_regs__PredInfo0_7,
  MR_Word * transform_hlds__float_regs__PredInfo_8)
{
  {
    MR_bool transform_hlds__float_regs__succeeded;
    MR_Word transform_hlds__float_regs__PredMarkers_9;
    MR_Word transform_hlds__float_regs__ProcInfo0_10;
    MR_Word transform_hlds__float_regs__ArgModes0_11;
    MR_Word transform_hlds__float_regs__ArgModes_17;
    MR_Word transform_hlds__float_regs__ProcInfo_19;

    hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__float_regs__PredInfo0_7, &transform_hlds__float_regs__PredMarkers_9);
    hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__float_regs__PredInfo0_7, transform_hlds__float_regs__ProcId_6, &transform_hlds__float_regs__ProcInfo0_10);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo0_10, &transform_hlds__float_regs__ArgModes0_11);
    transform_hlds__float_regs__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__float_regs__PredMarkers_9, (MR_Integer) 12);
    if (transform_hlds__float_regs__succeeded)
    {
      MR_Word transform_hlds__float_regs__TypeCtorInfo_23_23;
      MR_Word transform_hlds__float_regs__TypeCtorInfo_24_24;
      MR_Word transform_hlds__float_regs__IM_ArgTypes_12;
      MR_Integer transform_hlds__float_regs__Num_IM_ArgTypes_13;
      MR_Word transform_hlds__float_regs__FrontModes_14;
      MR_Word transform_hlds__float_regs__ArgModes1_15;
      MR_Word transform_hlds__float_regs__ArgModes2_16;
      MR_Word transform_hlds__float_regs__Var_21;
      MR_Integer transform_hlds__float_regs__Len_37;
      MR_Integer transform_hlds__float_regs__StartLen_38;

      hlds__hlds_pred__pred_info_get_instance_method_arg_types_2_p_0(transform_hlds__float_regs__PredInfo0_7, &transform_hlds__float_regs__IM_ArgTypes_12);
      transform_hlds__float_regs__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      mercury__list__length_2_p_0(transform_hlds__float_regs__TypeCtorInfo_23_23, transform_hlds__float_regs__IM_ArgTypes_12, &transform_hlds__float_regs__Num_IM_ArgTypes_13);
      transform_hlds__float_regs__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
      mercury__list__length_2_p_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__ArgModes0_11, &transform_hlds__float_regs__Len_37);
      transform_hlds__float_regs__StartLen_38 = (transform_hlds__float_regs__Len_37 - transform_hlds__float_regs__Num_IM_ArgTypes_13);
      transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_38 == (MR_Integer) 0);
      if (transform_hlds__float_regs__succeeded)
      {
        transform_hlds__float_regs__FrontModes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        transform_hlds__float_regs__ArgModes1_15 = transform_hlds__float_regs__ArgModes0_11;
      }
      else
      {
        transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_38 > (MR_Integer) 0);
        if (transform_hlds__float_regs__succeeded)
          mercury__list__det_split_list_4_p_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__StartLen_38, transform_hlds__float_regs__ArgModes0_11, &transform_hlds__float_regs__FrontModes_14, &transform_hlds__float_regs__ArgModes1_15);
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
            return;
          }
        }
      }
      {
        transform_hlds__float_regs__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_21, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_21, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_21, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_5));
      }
      mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_23_23, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__Var_21, transform_hlds__float_regs__IM_ArgTypes_12, transform_hlds__float_regs__ArgModes1_15, &transform_hlds__float_regs__ArgModes2_16);
      transform_hlds__float_regs__ArgModes_17 = mercury__list__f_43_43_2_f_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__FrontModes_14, transform_hlds__float_regs__ArgModes2_16);
    }
    else
    {
      MR_Word transform_hlds__float_regs__TypeCtorInfo_32_32;
      MR_Word transform_hlds__float_regs__ArgTypes_18;
      MR_Word transform_hlds__float_regs__Var_22;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo0_7, &transform_hlds__float_regs__ArgTypes_18);
      {
        transform_hlds__float_regs__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_22, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_22, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_22, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_5));
      }
      transform_hlds__float_regs__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
      mercury__list__map_corresponding_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__Var_22, transform_hlds__float_regs__ArgTypes_18, transform_hlds__float_regs__ArgModes0_11, &transform_hlds__float_regs__ArgModes_17);
    }
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__float_regs__ArgModes_17, transform_hlds__float_regs__ProcInfo0_10, &transform_hlds__float_regs__ProcInfo_19);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__float_regs__ProcId_6, transform_hlds__float_regs__ProcInfo_19, transform_hlds__float_regs__PredInfo0_7, transform_hlds__float_regs__PredInfo_8);
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_PredInfo_8;

    transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_PredInfo_8);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_PredInfo_8));
  }
}

static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(
  MR_Word transform_hlds__float_regs__PredId_4,
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_Word transform_hlds__float_regs__PredInfo0_6;
    MR_Word transform_hlds__float_regs__ProcIds_7;
    MR_Word transform_hlds__float_regs__PredInfo_8;
    MR_Word transform_hlds__float_regs__Var_11;
    MR_Box transform_hlds__float_regs__conv1_PredInfo_8;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__float_regs__PredId_4, &transform_hlds__float_regs__PredInfo0_6);
    transform_hlds__float_regs__ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__float_regs__PredInfo0_6);
    {
      transform_hlds__float_regs__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_11, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_11, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Var_11, 3) = ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__float_regs__Var_11, transform_hlds__float_regs__ProcIds_7, ((MR_Box) (transform_hlds__float_regs__PredInfo0_6)), &transform_hlds__float_regs__conv1_PredInfo_8);
    transform_hlds__float_regs__PredInfo_8 = ((MR_Word) transform_hlds__float_regs__conv1_PredInfo_8);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__float_regs__PredId_4, transform_hlds__float_regs__PredInfo_8, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_10);
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_2(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
  MR_Box * transform_hlds__float_regs__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Word transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14;

    transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12));
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_1(
  MR_Box transform_hlds__float_regs__closure_arg,
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_ModuleInfo_10;

    transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_STATE_VARIABLE_ModuleInfo_10);
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_ModuleInfo_10));
  }
}

void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0(
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_8,
  MR_Word * transform_hlds__float_regs__Specs_5)
{
  {
    MR_Word transform_hlds__float_regs__TypeCtorInfo_18_18;
    MR_Word transform_hlds__float_regs__TypeCtorInfo_19_19;
    MR_Word transform_hlds__float_regs__PredIds_6;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_10_10;
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_12_12;
    MR_Box transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_10_10;
    MR_Box transform_hlds__float_regs__conv5_STATE_VARIABLE_ModuleInfo_12_12;
    MR_Box transform_hlds__float_regs__conv4_Specs_5;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__float_regs__PredIds_6);
    transform_hlds__float_regs__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    transform_hlds__float_regs__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
    mercury__list__foldl_4_p_0(transform_hlds__float_regs__TypeCtorInfo_18_18, transform_hlds__float_regs__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__float_regs_scalar_common_3[0], transform_hlds__float_regs__PredIds_6, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_7)), &transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_10_10);
    transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_10_10 = ((MR_Word) transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_10_10);
    mercury__list__foldl2_6_p_0(transform_hlds__float_regs__TypeCtorInfo_18_18, transform_hlds__float_regs__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__float_regs_scalar_common_1[0], (MR_Word) &transform_hlds__float_regs_scalar_common_3[1], transform_hlds__float_regs__PredIds_6, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_10_10)), &transform_hlds__float_regs__conv5_STATE_VARIABLE_ModuleInfo_12_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__float_regs__conv4_Specs_5);
    transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_12_12 = ((MR_Word) transform_hlds__float_regs__conv5_STATE_VARIABLE_ModuleInfo_12_12);
    *transform_hlds__float_regs__Specs_5 = ((MR_Word) transform_hlds__float_regs__conv4_Specs_5);
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_12_12, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_8);
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

/* :- end_module transform_hlds.float_regs. */
