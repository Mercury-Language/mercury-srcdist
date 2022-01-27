/*
** Automatically generated from `float_regs.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.lambda.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 150 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 153 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 156 "transform_hlds.float_regs.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "transform_hlds.float_regs.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 171 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 174 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__float_regs__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 1458 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1458__1_4_p_0(
#line 1458 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_7,
#line 1458 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_8,
#line 1458 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__3_23,
#line 1458 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__4_24);

#line 1638 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__make_reg_r_headvars_5_p_0(
#line 1638 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarTypes_6,
#line 1638 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_7,
#line 1638 "float_regs.m"
  MR_Word transform_hlds__float_regs__RegType_8,
#line 1638 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11,
#line 1638 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12);

#line 1629 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__create_fresh_vars_6_p_0(
#line 1629 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
#line 1629 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
#line 1629 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarSet_0_3,
#line 1629 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_VarSet_4,
#line 1629 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarTypes_0_5,
#line 1629 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_VarTypes_6);

#line 1596 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0_1(
#line 1596 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1596 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1596 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 1596 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
#line 1596 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_4);

#line 1555 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0(
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVar_10,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVarPredInstInfo_11,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__OuterArgRegs_12,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__InnerArgRegs_13,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_14,
#line 1555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Var_15,
#line 1555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__UnifyGoal_16,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_62,
#line 1555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_63);

#line 1510 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_vars_insts_11_p_0(
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarsExpectInsts_12,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_14,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22,
#line 1510 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Renaming_23,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24,
#line 1510 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_25,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_26,
#line 1510 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_27,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28,
#line 1510 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_29);

#line 1500 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__fix_case_goal_8_p_0(
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarsExpectInsts_9,
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__Case0_10,
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalInstMap0_11,
#line 1500 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Case_12,
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_19,
#line 1500 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_20,
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_21,
#line 1500 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_22);

#line 1475 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__fix_branching_goal_8_p_0(
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarsExpectInsts_9,
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_10,
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalInstMap0_11,
#line 1475 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_12,
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_23,
#line 1475 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_24,
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25,
#line 1475 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_26);

#line 1458 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0_1(
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1458 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 1453 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0(
#line 1453 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_7,
#line 1453 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_8,
#line 1453 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMaps_9,
#line 1453 "float_regs.m"
  MR_Word * transform_hlds__float_regs__CommonDelta_10,
#line 1453 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_20,
#line 1453 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_21);

#line 1419 "float_regs.m"
static MR_Word MR_CALL 
transform_hlds__float_regs__report_missing_higher_order_inst_4_f_0(
#line 1419 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInfo_6,
#line 1419 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarSet_7,
#line 1419 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_8,
#line 1419 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_9);

#line 1399 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInfo_9,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarSet_10,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_11,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_12,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypesA_13,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypesB_14,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18,
#line 1399 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_19);

#line 1389 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0_1(
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1389 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 1380 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0(
#line 1380 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInstInfo_4,
#line 1380 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypes_5,
#line 1380 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgRegs_6);

#line 1366 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(
#line 1366 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_4,
#line 1366 "float_regs.m"
  MR_Word transform_hlds__float_regs__Inst_5,
#line 1366 "float_regs.m"
  MR_Word * transform_hlds__float_regs__PredInstInfo_6);

#line 1389 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0_1(
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1389 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 1294 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0(
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMapBefore_13,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_14,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgType_15,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__ExpectInst_16,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVar_17,
#line 1294 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Var_18,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44,
#line 1294 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_46,
#line 1294 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_47,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48,
#line 1294 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_49);

#line 1267 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_args_12_p_0(
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_14,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypes_15,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__Insts_16,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVars_17,
#line 1267 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_18,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_30,
#line 1267 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_31,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_32,
#line 1267 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_33,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_34,
#line 1267 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_35);

#line 1255 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_args_for_call_11_p_0(
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_12,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_13,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypes_14,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgModes_15,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVars_16,
#line 1255 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_17,
#line 1255 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_18,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_23,
#line 1255 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_24,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25,
#line 1255 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_26);

#line 1247 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__set_foreign_arg_var_3_p_0(
#line 1247 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_4,
#line 1247 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6,
#line 1247 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_7);

#line 1244 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2(
#line 1244 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1244 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1244 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 1244 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 1241 "float_regs.m"
static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1(
#line 1241 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1241 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1);

#line 1234 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_12,
#line 1234 "float_regs.m"
  MR_Integer transform_hlds__float_regs__ProcId_13,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__ForeignArgs0_14,
#line 1234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ForeignArgs_15,
#line 1234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_16,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_17,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_18,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_24,
#line 1234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_25,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_26,
#line 1234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_27);

#line 1218 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(
#line 1218 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
#line 1218 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__2_2);

#line 1175 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__ClassId_14,
#line 1175 "float_regs.m"
  MR_Integer transform_hlds__float_regs__MethodNum_15,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__Vars0_16,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_17,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__Modes0_18,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Modes_19,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_20,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_21,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_22,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_45,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_46,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_48);

#line 1389 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1(
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1389 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 1154 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__CallVar_13,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__Vars0_14,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_15,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgModes_16,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgRegs_17,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_18,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_19,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_20,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_36,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_37,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_38,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_39);

#line 1125 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_13,
#line 1125 "float_regs.m"
  MR_Integer transform_hlds__float_regs__ProcId_14,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__Vars0_15,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_16,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_17,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__MissingProc_18,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_19,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_20,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_30,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_31,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_32,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_33);

#line 1093 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_10,
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalExpr0_11,
#line 1093 "float_regs.m"
  MR_Word * transform_hlds__float_regs__GoalExpr_12,
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1093 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_14,
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_31,
#line 1093 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_32,
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_33,
#line 1093 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_34);

#line 1077 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_11,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type_12,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__Case0_14,
#line 1077 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Case_15,
#line 1077 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_16,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_26,
#line 1077 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_27,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28,
#line 1077 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_29);

#line 1070 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3(
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 1070 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 1070 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
#line 1070 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_7);

#line 1458 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2(
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1458 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 1065 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1(
#line 1065 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1065 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1065 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 1065 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 1065 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 1065 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
#line 1065 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
#line 1065 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_7);

#line 1056 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_11,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__Cases0_12,
#line 1056 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Cases_13,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_14,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_15,
#line 1056 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_16,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_25,
#line 1056 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_26,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_27,
#line 1056 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_28);

#line 1046 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(
#line 1046 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_9,
#line 1046 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_10,
#line 1046 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_11,
#line 1046 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_12,
#line 1046 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_15,
#line 1046 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_16,
#line 1046 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_17,
#line 1046 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_18);

#line 1039 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3(
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 1039 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 1039 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
#line 1039 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_7);

#line 1458 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2(
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1458 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 1034 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1(
#line 1034 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1034 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1034 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 1034 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 1034 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 1034 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
#line 1034 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
#line 1034 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_7);

#line 1027 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goals0_10,
#line 1027 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goals_11,
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_12,
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1027 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_14,
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_21,
#line 1027 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_22,
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_23,
#line 1027 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_24);

#line 1013 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(
#line 1013 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
#line 1013 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
#line 1013 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3,
#line 1013 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_4,
#line 1013 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_5,
#line 1013 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_6,
#line 1013 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7,
#line 1013 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_8);

#line 996 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__uni_mode_set_rhs_final_inst_4_p_0(
#line 996 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
#line 996 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgInst_6,
#line 996 "float_regs.m"
  MR_Word transform_hlds__float_regs__UniMode0_7,
#line 996 "float_regs.m"
  MR_Word * transform_hlds__float_regs__UniMode_8);

#line 984 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_arg_4_p_0(
#line 984 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap_5,
#line 984 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_6,
#line 984 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgInst0_7,
#line 984 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgInst_8);

#line 977 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0_1(
#line 977 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 977 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 977 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 977 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 971 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0(
#line 971 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap_6,
#line 971 "float_regs.m"
  MR_Word transform_hlds__float_regs__ConsId_7,
#line 971 "float_regs.m"
  MR_Word transform_hlds__float_regs__Args_8,
#line 971 "float_regs.m"
  MR_Word transform_hlds__float_regs__Inst0_9,
#line 971 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Inst_10);

#line 935 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3(
#line 935 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 935 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 935 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 919 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2(
#line 919 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 919 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 919 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 935 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1(
#line 935 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 935 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 935 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 913 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0(
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_7,
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap_8,
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__ConsId_9,
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__Args_10,
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__Inst0_11,
#line 913 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Inst_12);

#line 895 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_9,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__CellVar_10,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__ConsId_11,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__Args_12,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalInfo0_13,
#line 895 "float_regs.m"
  MR_Word * transform_hlds__float_regs__GoalInfo_14,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20,
#line 895 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_21);

#line 885 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__uni_modes_to_modes_3_p_0(
#line 885 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
#line 885 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
#line 885 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__3_3);

#line 876 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1(
#line 876 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 876 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 876 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 876 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
#line 876 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_4);

#line 868 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(
#line 868 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type0_5,
#line 868 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Type_6,
#line 868 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_TVarSet_0_14,
#line 868 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_TVarSet_15);

#line 853 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2(
#line 853 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 853 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 853 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 853 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 845 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1(
#line 845 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 845 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 845 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 845 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
#line 845 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_4);

#line 827 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__CellVar_14,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__ConsId_15,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVars_16,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_17,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__UniModes0_18,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__UniModes_19,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__MaybeWrappedGoals_20,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_21,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_22,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_45,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_46,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_48);

#line 797 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2(
#line 797 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 797 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 797 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 797 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 767 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1(
#line 767 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 767 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 767 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 767 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 733 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalExpr0_10,
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalInfo0_11,
#line 733 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_12,
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71,
#line 733 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_72,
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_73,
#line 733 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_74,
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75,
#line 733 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_76);

#line 719 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(
#line 719 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal_4,
#line 719 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_5,
#line 719 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_6);

#line 708 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__do_recompute_atomic_instmap_delta_5_p_0(
#line 708 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_6,
#line 708 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_7,
#line 708 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap_8,
#line 708 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_14,
#line 708 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_15);

#line 694 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__finish_call_goal_8_p_0(
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__WrapGoals_9,
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__CallGoalExpr0_10,
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__CallGoalInfo0_11,
#line 694 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_12,
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_19,
#line 694 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_20,
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_21,
#line 694 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_22);

#line 583 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1(
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 583 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
#line 583 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_4,
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_5,
#line 583 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_6,
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_7,
#line 583 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_8);

#line 566 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(
#line 566 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_9,
#line 566 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_10,
#line 566 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73,
#line 566 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_74,
#line 566 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_75,
#line 566 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_76,
#line 566 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77,
#line 566 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_78);

#line 555 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(
#line 555 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_9,
#line 555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_10,
#line 555 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14,
#line 555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_15,
#line 555 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_16,
#line 555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_17,
#line 555 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18,
#line 555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_19);

#line 537 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_body_9_p_0(
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVars_10,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgModes_11,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_12,
#line 537 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_13,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_14,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_22,
#line 537 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_23,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24,
#line 537 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_25);

#line 456 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(
#line 456 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_7,
#line 456 "float_regs.m"
  MR_Integer transform_hlds__float_regs__ProcId_8,
#line 456 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22,
#line 456 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_23,
#line 456 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24,
#line 456 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_25);

#line 453 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1(
#line 453 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 453 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 453 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 453 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 453 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 453 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5);

#line 446 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(
#line 446 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_6,
#line 446 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_11,
#line 446 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_12,
#line 446 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_13,
#line 446 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_14);

#line 432 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(
#line 432 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type_3,
#line 432 "float_regs.m"
  MR_Word * transform_hlds__float_regs__RegType_4);

#line 420 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0_1(
#line 420 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 420 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 420 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 420 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 404 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0(
#line 404 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
#line 404 "float_regs.m"
  MR_Word transform_hlds__float_regs__Seen_7,
#line 404 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type_8,
#line 404 "float_regs.m"
  MR_Word transform_hlds__float_regs__BoundInst0_9,
#line 404 "float_regs.m"
  MR_Word * transform_hlds__float_regs__BoundInst_10);

#line 400 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_2(
#line 400 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 400 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 400 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 398 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_1(
#line 398 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 398 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 398 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 398 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 392 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(
#line 392 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
#line 392 "float_regs.m"
  MR_Word transform_hlds__float_regs__Seen_7,
#line 392 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypes_8,
#line 392 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInstInfo0_9,
#line 392 "float_regs.m"
  MR_Word * transform_hlds__float_regs__PredInstInfo_10);

#line 357 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1(
#line 357 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 357 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 357 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 333 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(
#line 333 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
#line 333 "float_regs.m"
  MR_Word transform_hlds__float_regs__Seen0_7,
#line 333 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type_8,
#line 333 "float_regs.m"
  MR_Word transform_hlds__float_regs__Inst0_9,
#line 333 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Inst_10);

#line 316 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_mode_2_5_p_0(
#line 316 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
#line 316 "float_regs.m"
  MR_Word transform_hlds__float_regs__Seen_7,
#line 316 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarType_8,
#line 316 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgMode0_9,
#line 316 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgMode_10);

#line 310 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_mode_4_p_0(
#line 310 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
#line 310 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarType_6,
#line 310 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgMode0_7,
#line 310 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgMode_8);

#line 303 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_2(
#line 303 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 303 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 303 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 282 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_1(
#line 282 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 282 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 282 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2);

#line 275 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0(
#line 275 "float_regs.m"
  MR_Word transform_hlds__float_regs__PolymorphicContext_4,
#line 275 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type0_5,
#line 275 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Type_6);

#line 234 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(
#line 234 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
#line 234 "float_regs.m"
  MR_Word transform_hlds__float_regs__RealVarType_6,
#line 234 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgMode0_7,
#line 234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgMode_8);

#line 228 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2(
#line 228 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 228 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 228 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 228 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 223 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1(
#line 223 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 223 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 223 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 223 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 208 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(
#line 208 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
#line 208 "float_regs.m"
  MR_Integer transform_hlds__float_regs__ProcId_6,
#line 208 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInfo0_7,
#line 208 "float_regs.m"
  MR_Word * transform_hlds__float_regs__PredInfo_8);

#line 204 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1(
#line 204 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 204 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 204 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 204 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);

#line 198 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(
#line 198 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_4,
#line 198 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9,
#line 198 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_10);

#line 190 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_2(
#line 190 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 190 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 190 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 190 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 190 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 190 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5);

#line 183 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_1(
#line 183 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 183 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 183 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 183 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_1[19][2];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_2[4][6];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_3[14][3];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_4[6][8];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_5[6][7];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_6[1][4];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_7[2][5];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_8[1][9];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_9[4][11];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_10[1][13];

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_11[2][1];




static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_1[19][2] = {
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of the generated code in this grade."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Please provide the higher-order inst to ensure correctness"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: missing higher-order inst for variable"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__float_regs_scalar_common_11[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_11[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_2[4][6] = {
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_3[14][3] = {
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
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[2])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[3])),
    ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__match_arg_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__float_regs_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__float_regs__get_ho_arg_regs_3_p_0_1)),
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 2 */
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
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__float_regs__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&transform_hlds__float_regs__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_5[6][7] = {
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
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__float_regs__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
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

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_7[2][5] = {
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

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_9[4][11] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
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
  /* row 3 */
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
};

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_10[1][13] = {
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

static /* final */ const MR_Box transform_hlds__float_regs_scalar_common_11[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[14])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "reg_wrapper"))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 2101 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2109 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 2117 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2125 "transform_hlds.float_regs.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2133 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2141 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2149 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2157 "transform_hlds.float_regs.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 2166 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__float_regs__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__float_regs__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 2174 "transform_hlds.float_regs.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__float_regs__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__float_regs__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1458 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1458__1_4_p_0(
#line 1458 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_7,
#line 1458 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_8,
#line 1458 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__3_23,
#line 1458 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__4_24)
#line 1458 "float_regs.m"
{
#line 1458 "float_regs.m"
  {
#line 1458 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 1460 "float_regs.m"
    {
#line 1460 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__HeadVar__3_23);
    }
#line 1458 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1458 "float_regs.m"
      {
#line 1461 "float_regs.m"
        {
#line 1461 "float_regs.m"
          hlds__instmap__compute_instmap_delta_4_p_0(transform_hlds__float_regs__InstMap0_7, transform_hlds__float_regs__HeadVar__3_23, transform_hlds__float_regs__NonLocals_8, transform_hlds__float_regs__HeadVar__4_24);
        }
#line 1461 "float_regs.m"
        transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1458 "float_regs.m"
      }
#line 1458 "float_regs.m"
    return transform_hlds__float_regs__succeeded;
#line 1458 "float_regs.m"
  }
#line 1458 "float_regs.m"
}

#line 1638 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__make_reg_r_headvars_5_p_0(
#line 1638 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarTypes_6,
#line 1638 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_7,
#line 1638 "float_regs.m"
  MR_Word transform_hlds__float_regs__RegType_8,
#line 1638 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11,
#line 1638 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12)
#line 1638 "float_regs.m"
{
#line 1643 "float_regs.m"
  {
#line 1643 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 1643 "float_regs.m"
    if ((transform_hlds__float_regs__RegType_8 == (MR_Integer) 1))
#line 1651 "float_regs.m"
      *transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12 = transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11;
#line 1643 "float_regs.m"
    else
#line 1643 "float_regs.m"
      {
#line 1643 "float_regs.m"
        MR_Word transform_hlds__float_regs__VarType_10;
#line 1645 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_15_15;

#line 1644 "float_regs.m"
        {
#line 1644 "float_regs.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_6, transform_hlds__float_regs__Var_7, &transform_hlds__float_regs__VarType_10);
        }
#line 1645 "float_regs.m"
        {
#line 1645 "float_regs.m"
          transform_hlds__float_regs__V_15_15 = parse_tree__builtin_lib_types__float_type_0_f_0();
        }
#line 1645 "float_regs.m"
        {
#line 1645 "float_regs.m"
          transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__float_regs__VarType_10, transform_hlds__float_regs__V_15_15);
        }
#line 1647 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1646 "float_regs.m"
          {
#line 1646 "float_regs.m"
            {
#line 1646 "float_regs.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__float_regs__Var_7, transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11, transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12);
#line 1646 "float_regs.m"
              return;
            }
#line 1646 "float_regs.m"
          }
#line 1647 "float_regs.m"
        else
#line 1646 "float_regs.m"
          *transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_12 = transform_hlds__float_regs__STATE_VARIABLE_RegR_HeadVars_0_11;
#line 1643 "float_regs.m"
      }
#line 1643 "float_regs.m"
  }
#line 1638 "float_regs.m"
}

#line 1629 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__create_fresh_vars_6_p_0(
#line 1629 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
#line 1629 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
#line 1629 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarSet_0_3,
#line 1629 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_VarSet_4,
#line 1629 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarTypes_0_5,
#line 1629 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_VarTypes_6)
#line 1629 "float_regs.m"
{
#line 1632 "float_regs.m"
  {
#line 1632 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 1632 "float_regs.m"
    if ((transform_hlds__float_regs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1632 "float_regs.m"
      {
#line 1632 "float_regs.m"
        *transform_hlds__float_regs__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1632 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_VarTypes_6 = transform_hlds__float_regs__STATE_VARIABLE_VarTypes_0_5;
#line 1632 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_VarSet_4 = transform_hlds__float_regs__STATE_VARIABLE_VarSet_0_3;
#line 1632 "float_regs.m"
      }
#line 1632 "float_regs.m"
    else
#line 1633 "float_regs.m"
      {
#line 1633 "float_regs.m"
        MR_Word transform_hlds__float_regs__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 0)));
#line 1633 "float_regs.m"
        MR_Word transform_hlds__float_regs__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 1)));
#line 1633 "float_regs.m"
        MR_Word transform_hlds__float_regs__Var_15;
#line 1633 "float_regs.m"
        MR_Word transform_hlds__float_regs__Vars_16;
#line 1633 "float_regs.m"
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarSet_23_23;
#line 1633 "float_regs.m"
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_VarTypes_24_24;

#line 1634 "float_regs.m"
        {
#line 1634 "float_regs.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__float_regs__Var_15, transform_hlds__float_regs__STATE_VARIABLE_VarSet_0_3, &transform_hlds__float_regs__STATE_VARIABLE_VarSet_23_23);
        }
#line 1635 "float_regs.m"
        {
#line 1635 "float_regs.m"
          parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__float_regs__Var_15, transform_hlds__float_regs__Type_13, transform_hlds__float_regs__STATE_VARIABLE_VarTypes_0_5, &transform_hlds__float_regs__STATE_VARIABLE_VarTypes_24_24);
        }
#line 1636 "float_regs.m"
        {
#line 1636 "float_regs.m"
          transform_hlds__float_regs__create_fresh_vars_6_p_0(transform_hlds__float_regs__Types_14, &transform_hlds__float_regs__Vars_16, transform_hlds__float_regs__STATE_VARIABLE_VarSet_23_23, transform_hlds__float_regs__STATE_VARIABLE_VarSet_4, transform_hlds__float_regs__STATE_VARIABLE_VarTypes_24_24, transform_hlds__float_regs__STATE_VARIABLE_VarTypes_6);
        }
#line 1633 "float_regs.m"
        {
#line 1633 "float_regs.m"
          MR_Word base;
#line 1633 "float_regs.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1633 "float_regs.m"
          *transform_hlds__float_regs__HeadVar__2_2 = base;
#line 1633 "float_regs.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__Var_15));
#line 1633 "float_regs.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__float_regs__Vars_16));
#line 1633 "float_regs.m"
        }
#line 1633 "float_regs.m"
      }
#line 1632 "float_regs.m"
  }
#line 1629 "float_regs.m"
}

#line 1596 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0_1(
#line 1596 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1596 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1596 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 1596 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
#line 1596 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_4)
#line 1596 "float_regs.m"
{
#line 1596 "float_regs.m"
  {
#line 1596 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1596 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_RegR_HeadVars_12;

#line 1596 "float_regs.m"
    {
#line 1596 "float_regs.m"
      transform_hlds__float_regs__make_reg_r_headvars_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), ((MR_Word) transform_hlds__float_regs__wrapper_arg_3), &transform_hlds__float_regs__conv0_STATE_VARIABLE_RegR_HeadVars_12);
    }
#line 1596 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_4 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_RegR_HeadVars_12));
#line 1596 "float_regs.m"
  }
#line 1596 "float_regs.m"
}

#line 1555 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__create_reg_wrapper_9_p_0(
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVar_10,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVarPredInstInfo_11,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__OuterArgRegs_12,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__InnerArgRegs_13,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_14,
#line 1555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Var_15,
#line 1555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__UnifyGoal_16,
#line 1555 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_62,
#line 1555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_63)
#line 1555 "float_regs.m"
{
#line 1560 "float_regs.m"
  {
#line 1560 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeInfo_101_101;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_102_102;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarSet0_18;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes0_19;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo0_20;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__OrigVarType_21;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__Purity_22;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredOrFunc_23;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredArgTypes_25;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallVars_26;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarSet1_27;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes1_28;
#line 1560 "float_regs.m"
    MR_Integer transform_hlds__float_regs__Arity_29;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgModes_32;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__Determinism_34;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__GenericCall_35;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallGoalExpr_36;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallNonLocals_37;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallInstMapDelta_38;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallGoalInfo_39;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallGoal_40;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarSet_41;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes_42;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__RegR_HeadVars_43;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__DummyPPId_44;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__DummyShroudedPPId_45;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__ConsId_46;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__InInst_47;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__UniModes0_48;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__Unification0_49;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__LambdaNonLocals_50;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__Functor_51;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__Unification_52;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__UnifyMode_53;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__UnifyGoalExpr_56;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__UnifyNonLocals_57;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__UnifyPredInstInfo_58;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__UnifyPredVarInst_59;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__UnifyInstMapDelta_60;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__UnifyGoalInfo_61;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_64_64;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_65_65;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_66_66;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_67_67;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_68_68;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_69_69;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_70_70;
#line 1560 "float_regs.m"
    MR_Integer transform_hlds__float_regs__V_71_71;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_73_73;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_74_74;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_75_75;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_85_85;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_86_86;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_87_87;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_88_88;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_91_91;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_93_93;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_94_94;
#line 1560 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_95_95;
#line 1577 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_31_31;
#line 1577 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_33_33;
#line 1596 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv1_RegR_HeadVars_43;

#line 1561 "float_regs.m"
    {
#line 1561 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_varset_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_62, &transform_hlds__float_regs__VarSet0_18);
    }
#line 1562 "float_regs.m"
    {
#line 1562 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_62, &transform_hlds__float_regs__VarTypes0_19);
    }
#line 1563 "float_regs.m"
    {
#line 1563 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_62, &transform_hlds__float_regs__ModuleInfo0_20);
    }
#line 1565 "float_regs.m"
    {
#line 1565 "float_regs.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes0_19, transform_hlds__float_regs__OrigVar_10, &transform_hlds__float_regs__OrigVarType_21);
    }
#line 1566 "float_regs.m"
    {
#line 1566 "float_regs.m"
      parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(transform_hlds__float_regs__OrigVarType_21, &transform_hlds__float_regs__Purity_22, &transform_hlds__float_regs__PredOrFunc_23, &transform_hlds__float_regs__PredArgTypes_25);
    }
#line 1571 "float_regs.m"
    {
#line 1571 "float_regs.m"
      transform_hlds__float_regs__create_fresh_vars_6_p_0(transform_hlds__float_regs__PredArgTypes_25, &transform_hlds__float_regs__CallVars_26, transform_hlds__float_regs__VarSet0_18, &transform_hlds__float_regs__VarSet1_27, transform_hlds__float_regs__VarTypes0_19, &transform_hlds__float_regs__VarTypes1_28);
    }
#line 2601 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeInfo_101_101 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
#line 1573 "float_regs.m"
    {
#line 1573 "float_regs.m"
      mercury__list__length_2_p_0(transform_hlds__float_regs__TypeInfo_101_101, transform_hlds__float_regs__CallVars_26, &transform_hlds__float_regs__Arity_29);
    }
#line 1577 "float_regs.m"
    transform_hlds__float_regs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__OrigVarPredInstInfo_11, (MR_Integer) 0)));
#line 1577 "float_regs.m"
    transform_hlds__float_regs__ArgModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__OrigVarPredInstInfo_11, (MR_Integer) 1)));
#line 1577 "float_regs.m"
    transform_hlds__float_regs__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__OrigVarPredInstInfo_11, (MR_Integer) 2)));
#line 1577 "float_regs.m"
    transform_hlds__float_regs__Determinism_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__OrigVarPredInstInfo_11, (MR_Integer) 3)));
#line 1578 "float_regs.m"
    {
#line 1578 "float_regs.m"
      transform_hlds__float_regs__GenericCall_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_35, 0) = ((MR_Box) (transform_hlds__float_regs__OrigVar_10));
#line 1578 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_35, 1) = ((MR_Box) (transform_hlds__float_regs__Purity_22));
#line 1578 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_35, 2) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_23));
#line 1578 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_35, 3) = ((MR_Box) (transform_hlds__float_regs__Arity_29));
#line 1578 "float_regs.m"
    }
#line 1580 "float_regs.m"
    {
#line 1580 "float_regs.m"
      transform_hlds__float_regs__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_64_64, 0) = ((MR_Box) (transform_hlds__float_regs__InnerArgRegs_13));
#line 1580 "float_regs.m"
    }
#line 1579 "float_regs.m"
    {
#line 1579 "float_regs.m"
      transform_hlds__float_regs__CallGoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1579 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1579 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 1) = ((MR_Box) (transform_hlds__float_regs__GenericCall_35));
#line 1579 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 2) = ((MR_Box) (transform_hlds__float_regs__CallVars_26));
#line 1579 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 3) = ((MR_Box) (transform_hlds__float_regs__ArgModes_32));
#line 1579 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 4) = ((MR_Box) (transform_hlds__float_regs__V_64_64));
#line 1579 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__CallGoalExpr_36, 5) = ((MR_Box) (transform_hlds__float_regs__Determinism_34));
#line 1579 "float_regs.m"
    }
#line 2656 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_102_102 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1581 "float_regs.m"
    {
#line 1581 "float_regs.m"
      transform_hlds__float_regs__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_65_65, 0) = ((MR_Box) (transform_hlds__float_regs__OrigVar_10));
#line 1581 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_65_65, 1) = ((MR_Box) (transform_hlds__float_regs__CallVars_26));
#line 1581 "float_regs.m"
    }
#line 1581 "float_regs.m"
    {
#line 1581 "float_regs.m"
      transform_hlds__float_regs__CallNonLocals_37 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__float_regs__TypeCtorInfo_102_102, transform_hlds__float_regs__V_65_65);
    }
#line 1582 "float_regs.m"
    {
#line 1582 "float_regs.m"
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__float_regs__CallVars_26, transform_hlds__float_regs__ArgModes_32, transform_hlds__float_regs__ModuleInfo0_20, &transform_hlds__float_regs__CallInstMapDelta_38);
    }
#line 1584 "float_regs.m"
    {
#line 1584 "float_regs.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__float_regs__CallNonLocals_37, transform_hlds__float_regs__CallInstMapDelta_38, transform_hlds__float_regs__Determinism_34, transform_hlds__float_regs__Purity_22, transform_hlds__float_regs__Context_14, &transform_hlds__float_regs__CallGoalInfo_39);
    }
#line 1586 "float_regs.m"
    {
#line 1586 "float_regs.m"
      transform_hlds__float_regs__CallGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1586 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal_40, 0) = ((MR_Box) (transform_hlds__float_regs__CallGoalExpr_36));
#line 1586 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal_40, 1) = ((MR_Box) (transform_hlds__float_regs__CallGoalInfo_39));
#line 1586 "float_regs.m"
    }
#line 1589 "float_regs.m"
    {
#line 1589 "float_regs.m"
      mercury__varset__new_var_3_p_0(transform_hlds__float_regs__TypeCtorInfo_102_102, transform_hlds__float_regs__Var_15, transform_hlds__float_regs__VarSet1_27, &transform_hlds__float_regs__VarSet_41);
    }
#line 1590 "float_regs.m"
    {
#line 1590 "float_regs.m"
      parse_tree__prog_data__add_var_type_4_p_0(*transform_hlds__float_regs__Var_15, transform_hlds__float_regs__OrigVarType_21, transform_hlds__float_regs__VarTypes1_28, &transform_hlds__float_regs__VarTypes_42);
    }
#line 1591 "float_regs.m"
    {
#line 1591 "float_regs.m"
      transform_hlds__lambda__lambda_info_set_varset_3_p_0(transform_hlds__float_regs__VarSet_41, transform_hlds__float_regs__STATE_VARIABLE_Info_0_62, &transform_hlds__float_regs__STATE_VARIABLE_Info_66_66);
    }
#line 1592 "float_regs.m"
    {
#line 1592 "float_regs.m"
      transform_hlds__lambda__lambda_info_set_vartypes_3_p_0(transform_hlds__float_regs__VarTypes_42, transform_hlds__float_regs__STATE_VARIABLE_Info_66_66, &transform_hlds__float_regs__STATE_VARIABLE_Info_67_67);
    }
#line 1596 "float_regs.m"
    {
#line 1596 "float_regs.m"
      transform_hlds__float_regs__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1596 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_68_68, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[5]));
#line 1596 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_68_68, 1) = ((MR_Box) (transform_hlds__float_regs__create_reg_wrapper_9_p_0_1));
#line 1596 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1596 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_68_68, 3) = ((MR_Box) (transform_hlds__float_regs__VarTypes_42));
#line 1596 "float_regs.m"
    }
#line 1597 "float_regs.m"
    {
#line 1597 "float_regs.m"
      transform_hlds__float_regs__V_69_69 = parse_tree__set_of_var__init_0_f_0(transform_hlds__float_regs__TypeCtorInfo_102_102);
    }
#line 1596 "float_regs.m"
    {
#line 1596 "float_regs.m"
      mercury__list__foldl_corresponding_5_p_0(transform_hlds__float_regs__TypeInfo_101_101, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_1[3], transform_hlds__float_regs__V_68_68, transform_hlds__float_regs__CallVars_26, transform_hlds__float_regs__OuterArgRegs_12, ((MR_Box) (transform_hlds__float_regs__V_69_69)), &transform_hlds__float_regs__conv1_RegR_HeadVars_43);
    }
#line 1596 "float_regs.m"
    transform_hlds__float_regs__RegR_HeadVars_43 = ((MR_Word) transform_hlds__float_regs__conv1_RegR_HeadVars_43);
#line 1600 "float_regs.m"
    {
#line 1600 "float_regs.m"
      transform_hlds__float_regs__V_70_70 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1600 "float_regs.m"
    {
#line 1600 "float_regs.m"
      transform_hlds__float_regs__V_71_71 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    }
#line 1600 "float_regs.m"
    {
#line 1600 "float_regs.m"
      transform_hlds__float_regs__DummyPPId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1600 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__DummyPPId_44, 0) = ((MR_Box) (transform_hlds__float_regs__V_70_70));
#line 1600 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__DummyPPId_44, 1) = ((MR_Box) (transform_hlds__float_regs__V_71_71));
#line 1600 "float_regs.m"
    }
#line 1601 "float_regs.m"
    {
#line 1601 "float_regs.m"
      transform_hlds__float_regs__DummyShroudedPPId_45 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__float_regs__DummyPPId_44);
    }
#line 1602 "float_regs.m"
    {
#line 1602 "float_regs.m"
      transform_hlds__float_regs__ConsId_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1602 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1602 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_46, 1) = ((MR_Box) (transform_hlds__float_regs__DummyShroudedPPId_45));
#line 1602 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_46, 2) = NULL;
#line 1602 "float_regs.m"
    }
#line 1603 "float_regs.m"
    transform_hlds__float_regs__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__OrigVarPredInstInfo_11);
#line 1603 "float_regs.m"
    {
#line 1603 "float_regs.m"
      transform_hlds__float_regs__InInst_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1603 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__InInst_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1603 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__InInst_47, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1603 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__InInst_47, 2) = ((MR_Box) (transform_hlds__float_regs__V_73_73));
#line 1603 "float_regs.m"
    }
#line 1604 "float_regs.m"
    {
#line 1604 "float_regs.m"
      transform_hlds__float_regs__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1604 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_75_75, 0) = ((MR_Box) (transform_hlds__float_regs__InInst_47));
#line 1604 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_75_75, 1) = ((MR_Box) (transform_hlds__float_regs__InInst_47));
#line 1604 "float_regs.m"
    }
#line 1604 "float_regs.m"
    {
#line 1604 "float_regs.m"
      transform_hlds__float_regs__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1604 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_74_74, 0) = ((MR_Box) (transform_hlds__float_regs__V_75_75));
#line 1604 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_74_74, 1) = ((MR_Box) (transform_hlds__float_regs__V_75_75));
#line 1604 "float_regs.m"
    }
#line 1604 "float_regs.m"
    {
#line 1604 "float_regs.m"
      transform_hlds__float_regs__UniModes0_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UniModes0_48, 0) = ((MR_Box) (transform_hlds__float_regs__V_74_74));
#line 1604 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UniModes0_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1604 "float_regs.m"
    }
#line 1607 "float_regs.m"
    {
#line 1607 "float_regs.m"
      transform_hlds__float_regs__LambdaNonLocals_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__LambdaNonLocals_50, 0) = ((MR_Box) (transform_hlds__float_regs__OrigVar_10));
#line 1607 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__LambdaNonLocals_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1607 "float_regs.m"
    }
#line 1605 "float_regs.m"
    {
#line 1605 "float_regs.m"
      transform_hlds__float_regs__Unification0_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1605 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 0) = ((MR_Box) (*transform_hlds__float_regs__Var_15));
#line 1605 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 1) = ((MR_Box) (transform_hlds__float_regs__ConsId_46));
#line 1605 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 2) = ((MR_Box) (transform_hlds__float_regs__LambdaNonLocals_50));
#line 1605 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 3) = ((MR_Box) (transform_hlds__float_regs__UniModes0_48));
#line 1605 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1605 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1605 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_49, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1605 "float_regs.m"
    }
#line 1609 "float_regs.m"
    {
#line 1609 "float_regs.m"
      transform_hlds__float_regs__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_85_85, 0) = ((MR_Box) (transform_hlds__float_regs__RegR_HeadVars_43));
#line 1609 "float_regs.m"
    }
#line 1608 "float_regs.m"
    {
#line 1608 "float_regs.m"
      transform_hlds__lambda__expand_lambda_15_p_0(transform_hlds__float_regs__Purity_22, (MR_Integer) 0, transform_hlds__float_regs__PredOrFunc_23, transform_hlds__float_regs__V_85_85, transform_hlds__float_regs__CallVars_26, transform_hlds__float_regs__ArgModes_32, transform_hlds__float_regs__Determinism_34, transform_hlds__float_regs__LambdaNonLocals_50, transform_hlds__float_regs__CallGoal_40, transform_hlds__float_regs__Unification0_49, &transform_hlds__float_regs__Functor_51, &transform_hlds__float_regs__Unification_52, transform_hlds__float_regs__STATE_VARIABLE_Info_67_67, &transform_hlds__float_regs__STATE_VARIABLE_Info_86_86);
    }
#line 1613 "float_regs.m"
    {
#line 1613 "float_regs.m"
      transform_hlds__float_regs__V_87_87 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 1613 "float_regs.m"
    {
#line 1613 "float_regs.m"
      transform_hlds__float_regs__V_88_88 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 1613 "float_regs.m"
    {
#line 1613 "float_regs.m"
      transform_hlds__float_regs__UnifyMode_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1613 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyMode_53, 0) = ((MR_Box) (transform_hlds__float_regs__V_87_87));
#line 1613 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyMode_53, 1) = ((MR_Box) (transform_hlds__float_regs__V_88_88));
#line 1613 "float_regs.m"
    }
#line 1616 "float_regs.m"
    {
#line 1616 "float_regs.m"
      transform_hlds__float_regs__UnifyGoalExpr_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1616 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 0) = ((MR_Box) (*transform_hlds__float_regs__Var_15));
#line 1616 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 1) = ((MR_Box) (transform_hlds__float_regs__Functor_51));
#line 1616 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 2) = ((MR_Box) (transform_hlds__float_regs__UnifyMode_53));
#line 1616 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 3) = ((MR_Box) (transform_hlds__float_regs__Unification_52));
#line 1616 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__UnifyGoalExpr_56, 4) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_1[18]));
#line 1616 "float_regs.m"
    }
#line 1617 "float_regs.m"
    {
#line 1617 "float_regs.m"
      transform_hlds__float_regs__UnifyNonLocals_57 = parse_tree__set_of_var__make_singleton_1_f_0(transform_hlds__float_regs__TypeCtorInfo_102_102, *transform_hlds__float_regs__Var_15);
    }
#line 1619 "float_regs.m"
    {
#line 1619 "float_regs.m"
      transform_hlds__float_regs__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1619 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_91_91, 0) = ((MR_Box) (transform_hlds__float_regs__OuterArgRegs_12));
#line 1619 "float_regs.m"
    }
#line 1618 "float_regs.m"
    {
#line 1618 "float_regs.m"
      transform_hlds__float_regs__UnifyPredInstInfo_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1618 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyPredInstInfo_58, 0) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_23));
#line 1618 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyPredInstInfo_58, 1) = ((MR_Box) (transform_hlds__float_regs__ArgModes_32));
#line 1618 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyPredInstInfo_58, 2) = ((MR_Box) (transform_hlds__float_regs__V_91_91));
#line 1618 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UnifyPredInstInfo_58, 3) = ((MR_Box) (transform_hlds__float_regs__Determinism_34));
#line 1618 "float_regs.m"
    }
#line 1620 "float_regs.m"
    transform_hlds__float_regs__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__UnifyPredInstInfo_58);
#line 1620 "float_regs.m"
    {
#line 1620 "float_regs.m"
      transform_hlds__float_regs__UnifyPredVarInst_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1620 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__UnifyPredVarInst_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1620 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__UnifyPredVarInst_59, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1620 "float_regs.m"
      MR_hl_field(MR_mktag(3), transform_hlds__float_regs__UnifyPredVarInst_59, 2) = ((MR_Box) (transform_hlds__float_regs__V_93_93));
#line 1620 "float_regs.m"
    }
#line 1622 "float_regs.m"
    {
#line 1622 "float_regs.m"
      transform_hlds__float_regs__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1622 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_95_95, 0) = ((MR_Box) (*transform_hlds__float_regs__Var_15));
#line 1622 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_95_95, 1) = ((MR_Box) (transform_hlds__float_regs__UnifyPredVarInst_59));
#line 1622 "float_regs.m"
    }
#line 1622 "float_regs.m"
    {
#line 1622 "float_regs.m"
      transform_hlds__float_regs__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1622 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_94_94, 0) = ((MR_Box) (transform_hlds__float_regs__V_95_95));
#line 1622 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1622 "float_regs.m"
    }
#line 1621 "float_regs.m"
    {
#line 1621 "float_regs.m"
      transform_hlds__float_regs__UnifyInstMapDelta_60 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__float_regs__V_94_94);
    }
#line 1623 "float_regs.m"
    {
#line 1623 "float_regs.m"
      hlds__hlds_goal__goal_info_init_5_p_0(transform_hlds__float_regs__UnifyNonLocals_57, transform_hlds__float_regs__UnifyInstMapDelta_60, (MR_Integer) 0, (MR_Integer) 0, &transform_hlds__float_regs__UnifyGoalInfo_61);
    }
#line 1625 "float_regs.m"
    {
#line 1625 "float_regs.m"
      MR_Word base;
#line 1625 "float_regs.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1625 "float_regs.m"
      *transform_hlds__float_regs__UnifyGoal_16 = base;
#line 1625 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__UnifyGoalExpr_56));
#line 1625 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__UnifyGoalInfo_61));
#line 1625 "float_regs.m"
    }
#line 1627 "float_regs.m"
    {
#line 1627 "float_regs.m"
      transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0((MR_Integer) 1, transform_hlds__float_regs__STATE_VARIABLE_Info_86_86, transform_hlds__float_regs__STATE_VARIABLE_Info_63);
#line 1627 "float_regs.m"
      return;
    }
#line 1560 "float_regs.m"
  }
#line 1555 "float_regs.m"
}

#line 1510 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_vars_insts_11_p_0(
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarsExpectInsts_12,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_14,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22,
#line 1510 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Renaming_23,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24,
#line 1510 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_25,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_26,
#line 1510 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_27,
#line 1510 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28,
#line 1510 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_29)
#line 1510 "float_regs.m"
{
#line 1519 "float_regs.m"
  while (MR_TRUE)
#line 1519 "float_regs.m"
    {
#line 1519 "float_regs.m"
      /* tailcall optimized into a loop */
#line 1519 "float_regs.m"
      {
#line 1519 "float_regs.m"
        MR_bool transform_hlds__float_regs__succeeded;

#line 1519 "float_regs.m"
        if ((transform_hlds__float_regs__VarsExpectInsts_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1519 "float_regs.m"
          {
#line 1519 "float_regs.m"
            *transform_hlds__float_regs__STATE_VARIABLE_Renaming_23 = transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22;
#line 1519 "float_regs.m"
            *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_25 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24;
#line 1519 "float_regs.m"
            *transform_hlds__float_regs__STATE_VARIABLE_Info_27 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_26;
#line 1519 "float_regs.m"
            *transform_hlds__float_regs__STATE_VARIABLE_Specs_29 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28;
#line 1519 "float_regs.m"
          }
#line 1519 "float_regs.m"
        else
#line 1521 "float_regs.m"
          {
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__Var_19;
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__Inst_20;
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__Tail_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__VarsExpectInsts_12, (MR_Integer) 1)));
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__VarsExpectInsts_12, (MR_Integer) 0)));
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31;
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32;
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_33_33;
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_34_34;
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__ModuleInfo_55;
#line 1521 "float_regs.m"
            MR_Word transform_hlds__float_regs__VarTypes_56;

#line 1521 "float_regs.m"
            transform_hlds__float_regs__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_30_30, (MR_Integer) 0)));
#line 1521 "float_regs.m"
            transform_hlds__float_regs__Inst_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_30_30, (MR_Integer) 1)));
#line 1536 "float_regs.m"
            {
#line 1536 "float_regs.m"
              transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__ModuleInfo_55);
            }
#line 1537 "float_regs.m"
            {
#line 1537 "float_regs.m"
              transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__VarTypes_56);
            }
#line 1538 "float_regs.m"
            {
#line 1538 "float_regs.m"
              transform_hlds__float_regs__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__float_regs__ModuleInfo_55, transform_hlds__float_regs__Inst_20);
            }
#line 1540 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 1539 "float_regs.m"
              {
#line 1539 "float_regs.m"
                transform_hlds__float_regs__STATE_VARIABLE_Specs_34_34 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28;
#line 1539 "float_regs.m"
                transform_hlds__float_regs__STATE_VARIABLE_Info_33_33 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_26;
#line 1539 "float_regs.m"
                transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24;
#line 1539 "float_regs.m"
                transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31 = transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22;
#line 1539 "float_regs.m"
              }
#line 1540 "float_regs.m"
            else
#line 1541 "float_regs.m"
              {
#line 1541 "float_regs.m"
                MR_Word transform_hlds__float_regs__WrapGoals_52;
#line 1541 "float_regs.m"
                MR_Word transform_hlds__float_regs__VarType_57;
#line 1541 "float_regs.m"
                MR_Word transform_hlds__float_regs__SubstVar_58;

#line 1541 "float_regs.m"
                {
#line 1541 "float_regs.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_56, transform_hlds__float_regs__Var_19, &transform_hlds__float_regs__VarType_57);
                }
#line 1542 "float_regs.m"
                {
#line 1542 "float_regs.m"
                  transform_hlds__float_regs__match_arg_12_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__VarType_57, transform_hlds__float_regs__Inst_20, transform_hlds__float_regs__Var_19, &transform_hlds__float_regs__SubstVar_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__float_regs__WrapGoals_52, transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__STATE_VARIABLE_Info_33_33, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28, &transform_hlds__float_regs__STATE_VARIABLE_Specs_34_34);
                }
#line 1544 "float_regs.m"
                {
#line 1544 "float_regs.m"
                  transform_hlds__float_regs__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], ((MR_Box) (transform_hlds__float_regs__Var_19)), ((MR_Box) (transform_hlds__float_regs__SubstVar_58)));
                }
#line 1546 "float_regs.m"
                if (transform_hlds__float_regs__succeeded)
#line 1545 "float_regs.m"
                  {
#line 1545 "float_regs.m"
                    transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24;
#line 1545 "float_regs.m"
                    transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31 = transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22;
#line 1545 "float_regs.m"
                  }
#line 1546 "float_regs.m"
                else
#line 1547 "float_regs.m"
                  {
#line 1547 "float_regs.m"
                    MR_Word transform_hlds__float_regs__TypeInfo_39_65 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
#line 1547 "float_regs.m"
                    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Renaming_36_62;

#line 1547 "float_regs.m"
                    {
#line 1547 "float_regs.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__float_regs__TypeInfo_39_65, transform_hlds__float_regs__TypeInfo_39_65, ((MR_Box) (transform_hlds__float_regs__Var_19)), ((MR_Box) (transform_hlds__float_regs__SubstVar_58)), transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22, &transform_hlds__float_regs__STATE_VARIABLE_Renaming_36_62);
                    }
#line 1548 "float_regs.m"
                    {
#line 1548 "float_regs.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__float_regs__TypeInfo_39_65, transform_hlds__float_regs__TypeInfo_39_65, ((MR_Box) (transform_hlds__float_regs__SubstVar_58)), ((MR_Box) (transform_hlds__float_regs__Var_19)), transform_hlds__float_regs__STATE_VARIABLE_Renaming_36_62, &transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31);
                    }
#line 1549 "float_regs.m"
                    {
#line 1549 "float_regs.m"
                      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__float_regs__WrapGoals_52, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24, &transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32);
                    }
#line 1547 "float_regs.m"
                  }
#line 1541 "float_regs.m"
              }
#line 1524 "float_regs.m"
            /* direct tailcall eliminated */
#line 1524 "float_regs.m"
            {
#line 1524 "float_regs.m"
              MR_Word transform_hlds__float_regs__VarsExpectInsts__tmp_copy_12 = transform_hlds__float_regs__Tail_21;
#line 1524 "float_regs.m"
              MR_Word transform_hlds__float_regs__STATE_VARIABLE_Renaming_0__tmp_copy_22 = transform_hlds__float_regs__STATE_VARIABLE_Renaming_31_31;
#line 1524 "float_regs.m"
              MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0__tmp_copy_24 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_32_32;
#line 1524 "float_regs.m"
              MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0__tmp_copy_26 = transform_hlds__float_regs__STATE_VARIABLE_Info_33_33;
#line 1524 "float_regs.m"
              MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0__tmp_copy_28 = transform_hlds__float_regs__STATE_VARIABLE_Specs_34_34;

#line 1524 "float_regs.m"
              transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0__tmp_copy_28;
#line 1524 "float_regs.m"
              transform_hlds__float_regs__STATE_VARIABLE_Info_0_26 = transform_hlds__float_regs__STATE_VARIABLE_Info_0__tmp_copy_26;
#line 1524 "float_regs.m"
              transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_24 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0__tmp_copy_24;
#line 1524 "float_regs.m"
              transform_hlds__float_regs__STATE_VARIABLE_Renaming_0_22 = transform_hlds__float_regs__STATE_VARIABLE_Renaming_0__tmp_copy_22;
#line 1524 "float_regs.m"
              transform_hlds__float_regs__VarsExpectInsts_12 = transform_hlds__float_regs__VarsExpectInsts__tmp_copy_12;
#line 1524 "float_regs.m"
            }
#line 1524 "float_regs.m"
            continue;
#line 1521 "float_regs.m"
          }
#line 1519 "float_regs.m"
      }
#line 1519 "float_regs.m"
      break;
#line 1519 "float_regs.m"
    }
#line 1510 "float_regs.m"
}

#line 1500 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__fix_case_goal_8_p_0(
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarsExpectInsts_9,
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__Case0_10,
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalInstMap0_11,
#line 1500 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Case_12,
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_19,
#line 1500 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_20,
#line 1500 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_21,
#line 1500 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_22)
#line 1500 "float_regs.m"
{
#line 1504 "float_regs.m"
  {
#line 1504 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1504 "float_regs.m"
    MR_Word transform_hlds__float_regs__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_10, (MR_Integer) 0)));
#line 1504 "float_regs.m"
    MR_Word transform_hlds__float_regs__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_10, (MR_Integer) 1)));
#line 1504 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_10, (MR_Integer) 2)));
#line 1504 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goal_18;

#line 1506 "float_regs.m"
    {
#line 1506 "float_regs.m"
      transform_hlds__float_regs__fix_branching_goal_8_p_0(transform_hlds__float_regs__VarsExpectInsts_9, transform_hlds__float_regs__Goal0_17, transform_hlds__float_regs__GoalInstMap0_11, &transform_hlds__float_regs__Goal_18, transform_hlds__float_regs__STATE_VARIABLE_Info_0_19, transform_hlds__float_regs__STATE_VARIABLE_Info_20, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_21, transform_hlds__float_regs__STATE_VARIABLE_Specs_22);
    }
#line 1508 "float_regs.m"
    {
#line 1508 "float_regs.m"
      MR_Word base;
#line 1508 "float_regs.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "float_regs.m"
      *transform_hlds__float_regs__Case_12 = base;
#line 1508 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__MainConsId_15));
#line 1508 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__OtherConsIds_16));
#line 1508 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__float_regs__Goal_18));
#line 1508 "float_regs.m"
    }
#line 1504 "float_regs.m"
  }
#line 1500 "float_regs.m"
}

#line 1475 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__fix_branching_goal_8_p_0(
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarsExpectInsts_9,
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_10,
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalInstMap0_11,
#line 1475 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_12,
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_23,
#line 1475 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_24,
#line 1475 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25,
#line 1475 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_26)
#line 1475 "float_regs.m"
{
#line 1496 "float_regs.m"
  {
#line 1496 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 1482 "float_regs.m"
    {
#line 1482 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__GoalInstMap0_11);
    }
#line 1496 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1484 "float_regs.m"
      {
#line 1484 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeInfo_31_31;
#line 1484 "float_regs.m"
        MR_Word transform_hlds__float_regs__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal0_10, (MR_Integer) 1)));
#line 1484 "float_regs.m"
        MR_Word transform_hlds__float_regs__Context_17;
#line 1484 "float_regs.m"
        MR_Word transform_hlds__float_regs__Renaming_18;
#line 1484 "float_regs.m"
        MR_Word transform_hlds__float_regs__WrapGoals0_19;
#line 1484 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_27_27;
#line 1484 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal0_10, (MR_Integer) 0)));

#line 1485 "float_regs.m"
        {
#line 1485 "float_regs.m"
          transform_hlds__float_regs__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_16);
        }
#line 3325 "transform_hlds.float_regs.c"
        transform_hlds__float_regs__TypeInfo_31_31 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
#line 1487 "float_regs.m"
        {
#line 1487 "float_regs.m"
          transform_hlds__float_regs__V_27_27 = mercury__map__init_0_f_0(transform_hlds__float_regs__TypeInfo_31_31, transform_hlds__float_regs__TypeInfo_31_31);
        }
#line 1486 "float_regs.m"
        {
#line 1486 "float_regs.m"
          transform_hlds__float_regs__match_vars_insts_11_p_0(transform_hlds__float_regs__VarsExpectInsts_9, transform_hlds__float_regs__GoalInstMap0_11, transform_hlds__float_regs__Context_17, transform_hlds__float_regs__V_27_27, &transform_hlds__float_regs__Renaming_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__float_regs__WrapGoals0_19, transform_hlds__float_regs__STATE_VARIABLE_Info_0_23, transform_hlds__float_regs__STATE_VARIABLE_Info_24, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25, transform_hlds__float_regs__STATE_VARIABLE_Specs_26);
        }
#line 1491 "float_regs.m"
        if ((transform_hlds__float_regs__WrapGoals0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1490 "float_regs.m"
          *transform_hlds__float_regs__Goal_12 = transform_hlds__float_regs__Goal0_10;
#line 1491 "float_regs.m"
        else
#line 1492 "float_regs.m"
          {
#line 1492 "float_regs.m"
            MR_Word transform_hlds__float_regs__Goal1_22;

#line 1493 "float_regs.m"
            {
#line 1493 "float_regs.m"
              hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(transform_hlds__float_regs__Goal0_10, transform_hlds__float_regs__WrapGoals0_19, &transform_hlds__float_regs__Goal1_22);
            }
#line 1494 "float_regs.m"
            {
#line 1494 "float_regs.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__float_regs__Renaming_18, transform_hlds__float_regs__Goal1_22, transform_hlds__float_regs__Goal_12);
#line 1494 "float_regs.m"
              return;
            }
#line 1492 "float_regs.m"
          }
#line 1484 "float_regs.m"
      }
#line 1496 "float_regs.m"
    else
#line 1497 "float_regs.m"
      {
#line 1497 "float_regs.m"
        *transform_hlds__float_regs__Goal_12 = transform_hlds__float_regs__Goal0_10;
#line 1497 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_26 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25;
#line 1497 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_24 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_23;
#line 1497 "float_regs.m"
      }
#line 1496 "float_regs.m"
  }
#line 1475 "float_regs.m"
}

#line 1458 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0_1(
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1458 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 1458 "float_regs.m"
{
#line 1458 "float_regs.m"
  {
#line 1458 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1458 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1458 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_HeadVar__4_24;

#line 1458 "float_regs.m"
    {
#line 1458 "float_regs.m"
      transform_hlds__float_regs__succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1458__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_HeadVar__4_24);
    }
#line 1458 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1458 "float_regs.m"
      {
#line 1458 "float_regs.m"
        *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_HeadVar__4_24));
#line 1458 "float_regs.m"
        transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1458 "float_regs.m"
      }
#line 1458 "float_regs.m"
    return transform_hlds__float_regs__succeeded;
#line 1458 "float_regs.m"
  }
#line 1458 "float_regs.m"
}

#line 1453 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__common_instmap_delta_6_p_0(
#line 1453 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_7,
#line 1453 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_8,
#line 1453 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMaps_9,
#line 1453 "float_regs.m"
  MR_Word * transform_hlds__float_regs__CommonDelta_10,
#line 1453 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_20,
#line 1453 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_21)
#line 1453 "float_regs.m"
{
#line 1457 "float_regs.m"
  {
#line 1457 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1457 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMapDeltas_14;
#line 1457 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_22_22;

#line 1458 "float_regs.m"
    {
#line 1458 "float_regs.m"
      transform_hlds__float_regs__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_22_22, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_22_22, 1) = ((MR_Box) (transform_hlds__float_regs__common_instmap_delta_6_p_0_1));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_22_22, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap0_7));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_22_22, 4) = ((MR_Box) (transform_hlds__float_regs__NonLocals_8));
#line 1458 "float_regs.m"
    }
#line 1458 "float_regs.m"
    {
#line 1458 "float_regs.m"
      mercury__list__filter_map_3_p_0((MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, transform_hlds__float_regs__V_22_22, transform_hlds__float_regs__InstMaps_9, &transform_hlds__float_regs__InstMapDeltas_14);
    }
#line 1466 "float_regs.m"
    if ((transform_hlds__float_regs__InstMapDeltas_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1464 "float_regs.m"
      {
#line 1465 "float_regs.m"
        {
#line 1465 "float_regs.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(transform_hlds__float_regs__CommonDelta_10);
        }
#line 1465 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_21 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_20;
#line 1464 "float_regs.m"
      }
#line 1466 "float_regs.m"
    else
#line 1467 "float_regs.m"
      {
#line 1467 "float_regs.m"
        MR_Word transform_hlds__float_regs__VarTypes_17;
#line 1467 "float_regs.m"
        MR_Word transform_hlds__float_regs__ModuleInfo0_18;
#line 1467 "float_regs.m"
        MR_Word transform_hlds__float_regs__ModuleInfo_19;

#line 1468 "float_regs.m"
        {
#line 1468 "float_regs.m"
          transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_20, &transform_hlds__float_regs__VarTypes_17);
        }
#line 1469 "float_regs.m"
        {
#line 1469 "float_regs.m"
          transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_20, &transform_hlds__float_regs__ModuleInfo0_18);
        }
#line 1470 "float_regs.m"
        {
#line 1470 "float_regs.m"
          hlds__instmap__merge_instmap_deltas_7_p_0(transform_hlds__float_regs__InstMap0_7, transform_hlds__float_regs__NonLocals_8, transform_hlds__float_regs__VarTypes_17, transform_hlds__float_regs__InstMapDeltas_14, transform_hlds__float_regs__CommonDelta_10, transform_hlds__float_regs__ModuleInfo0_18, &transform_hlds__float_regs__ModuleInfo_19);
        }
#line 1472 "float_regs.m"
        {
#line 1472 "float_regs.m"
          transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_19, transform_hlds__float_regs__STATE_VARIABLE_Info_0_20, transform_hlds__float_regs__STATE_VARIABLE_Info_21);
#line 1472 "float_regs.m"
          return;
        }
#line 1467 "float_regs.m"
      }
#line 1457 "float_regs.m"
  }
#line 1453 "float_regs.m"
}

#line 1419 "float_regs.m"
static MR_Word MR_CALL 
transform_hlds__float_regs__report_missing_higher_order_inst_4_f_0(
#line 1419 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInfo_6,
#line 1419 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarSet_7,
#line 1419 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_8,
#line 1419 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_9)
#line 1419 "float_regs.m"
{
#line 1422 "float_regs.m"
  {
#line 1422 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__Spec_10;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredPieces_11;
#line 1422 "float_regs.m"
    MR_String transform_hlds__float_regs__VarName_12;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__InPieces_13;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__ErrorPieces_14;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__Msg_16;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_18_18;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_29_29;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_30_30;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_43_43;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_44_44;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_45_45;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_46_46;
#line 1422 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_52_52;

#line 1423 "float_regs.m"
    {
#line 1423 "float_regs.m"
      transform_hlds__float_regs__PredPieces_11 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, transform_hlds__float_regs__PredInfo_6);
    }
#line 1424 "float_regs.m"
    {
#line 1424 "float_regs.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__float_regs__VarSet_7, transform_hlds__float_regs__Var_8, &transform_hlds__float_regs__VarName_12);
    }
#line 1425 "float_regs.m"
    {
#line 1425 "float_regs.m"
      transform_hlds__float_regs__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[15])));
#line 1425 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_18_18, 1) = ((MR_Box) (transform_hlds__float_regs__PredPieces_11));
#line 1425 "float_regs.m"
    }
#line 1425 "float_regs.m"
    {
#line 1425 "float_regs.m"
      transform_hlds__float_regs__InPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, transform_hlds__float_regs__V_18_18, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[8]));
    }
#line 1427 "float_regs.m"
    {
#line 1427 "float_regs.m"
      transform_hlds__float_regs__V_30_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "float_regs.m"
      MR_hl_field(MR_mktag(2), transform_hlds__float_regs__V_30_30, 0) = ((MR_Box) (transform_hlds__float_regs__VarName_12));
#line 1427 "float_regs.m"
    }
#line 1427 "float_regs.m"
    {
#line 1427 "float_regs.m"
      transform_hlds__float_regs__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_29_29, 0) = ((MR_Box) (transform_hlds__float_regs__V_30_30));
#line 1427 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[10])));
#line 1427 "float_regs.m"
    }
#line 1427 "float_regs.m"
    {
#line 1427 "float_regs.m"
      transform_hlds__float_regs__ErrorPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ErrorPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__float_regs_scalar_common_1[16])));
#line 1427 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ErrorPieces_14, 1) = ((MR_Box) (transform_hlds__float_regs__V_29_29));
#line 1427 "float_regs.m"
    }
#line 1435 "float_regs.m"
    {
#line 1435 "float_regs.m"
      transform_hlds__float_regs__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1435 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_44_44, 0) = ((MR_Box) (transform_hlds__float_regs__InPieces_13));
#line 1435 "float_regs.m"
    }
#line 1436 "float_regs.m"
    {
#line 1436 "float_regs.m"
      transform_hlds__float_regs__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1436 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_46_46, 0) = ((MR_Box) (transform_hlds__float_regs__ErrorPieces_14));
#line 1436 "float_regs.m"
    }
#line 1436 "float_regs.m"
    {
#line 1436 "float_regs.m"
      transform_hlds__float_regs__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_45_45, 0) = ((MR_Box) (transform_hlds__float_regs__V_46_46));
#line 1436 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__float_regs_scalar_common_1[17])));
#line 1436 "float_regs.m"
    }
#line 1435 "float_regs.m"
    {
#line 1435 "float_regs.m"
      transform_hlds__float_regs__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_43_43, 0) = ((MR_Box) (transform_hlds__float_regs__V_44_44));
#line 1435 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_43_43, 1) = ((MR_Box) (transform_hlds__float_regs__V_45_45));
#line 1435 "float_regs.m"
    }
#line 1434 "float_regs.m"
    {
#line 1434 "float_regs.m"
      transform_hlds__float_regs__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1434 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Msg_16, 0) = ((MR_Box) (transform_hlds__float_regs__Context_9));
#line 1434 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Msg_16, 1) = ((MR_Box) (transform_hlds__float_regs__V_43_43));
#line 1434 "float_regs.m"
    }
#line 1439 "float_regs.m"
    {
#line 1439 "float_regs.m"
      transform_hlds__float_regs__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_52_52, 0) = ((MR_Box) (transform_hlds__float_regs__Msg_16));
#line 1439 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1439 "float_regs.m"
    }
#line 1439 "float_regs.m"
    {
#line 1439 "float_regs.m"
      transform_hlds__float_regs__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1439 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 1439 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Spec_10, 2) = ((MR_Box) (transform_hlds__float_regs__V_52_52));
#line 1439 "float_regs.m"
    }
#line 1422 "float_regs.m"
    return transform_hlds__float_regs__Spec_10;
#line 1422 "float_regs.m"
  }
#line 1419 "float_regs.m"
}

#line 1399 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInfo_9,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarSet_10,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_11,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_12,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypesA_13,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypesB_14,
#line 1399 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18,
#line 1399 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_19)
#line 1399 "float_regs.m"
{
#line 1415 "float_regs.m"
  {
#line 1415 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1410 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_27_27;
#line 1410 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_29_29;

#line 1406 "float_regs.m"
    {
#line 1406 "float_regs.m"
      MR_Word transform_hlds__float_regs__V_21_21;

#line 1406 "float_regs.m"
      {
#line 1406 "float_regs.m"
        transform_hlds__float_regs__V_21_21 = parse_tree__builtin_lib_types__float_type_0_f_0();
      }
#line 1406 "float_regs.m"
      {
#line 1406 "float_regs.m"
        transform_hlds__float_regs__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (transform_hlds__float_regs__V_21_21)), transform_hlds__float_regs__ArgTypesA_13);
      }
#line 1406 "float_regs.m"
    }
#line 1407 "float_regs.m"
    if (!(transform_hlds__float_regs__succeeded))
#line 1407 "float_regs.m"
      {
#line 1407 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_20_20;

#line 1407 "float_regs.m"
        {
#line 1407 "float_regs.m"
          transform_hlds__float_regs__V_20_20 = parse_tree__builtin_lib_types__float_type_0_f_0();
        }
#line 1407 "float_regs.m"
        {
#line 1407 "float_regs.m"
          transform_hlds__float_regs__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (transform_hlds__float_regs__V_20_20)), transform_hlds__float_regs__ArgTypesB_14);
        }
#line 1407 "float_regs.m"
      }
#line 1408 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1408 "float_regs.m"
      {
#line 1410 "float_regs.m"
        {
#line 1410 "float_regs.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__float_regs__PredInfo_9, &transform_hlds__float_regs__V_27_27);
        }
#line 1410 "float_regs.m"
        transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 1410 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1410 "float_regs.m"
          transform_hlds__float_regs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_27_27, (MR_Integer) 0)));
#line 1410 "float_regs.m"
        transform_hlds__float_regs__succeeded = !(transform_hlds__float_regs__succeeded);
#line 1408 "float_regs.m"
      }
#line 1415 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1413 "float_regs.m"
      {
#line 1413 "float_regs.m"
        MR_Word transform_hlds__float_regs__Spec_17;

#line 1412 "float_regs.m"
        {
#line 1412 "float_regs.m"
          transform_hlds__float_regs__Spec_17 = transform_hlds__float_regs__report_missing_higher_order_inst_4_f_0(transform_hlds__float_regs__PredInfo_9, transform_hlds__float_regs__VarSet_10, transform_hlds__float_regs__Var_11, transform_hlds__float_regs__Context_12);
        }
#line 1414 "float_regs.m"
        {
#line 1414 "float_regs.m"
          mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (transform_hlds__float_regs__Spec_17)), transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18, transform_hlds__float_regs__STATE_VARIABLE_Specs_19);
#line 1414 "float_regs.m"
          return;
        }
#line 1413 "float_regs.m"
      }
#line 1415 "float_regs.m"
    else
#line 1414 "float_regs.m"
      *transform_hlds__float_regs__STATE_VARIABLE_Specs_19 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18;
#line 1415 "float_regs.m"
  }
#line 1399 "float_regs.m"
}

#line 1389 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0_1(
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1389 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 1389 "float_regs.m"
{
#line 1389 "float_regs.m"
  {
#line 1389 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1389 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_RegType_4;

#line 1389 "float_regs.m"
    {
#line 1389 "float_regs.m"
      transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_RegType_4);
    }
#line 1389 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_RegType_4));
#line 1389 "float_regs.m"
  }
#line 1389 "float_regs.m"
}

#line 1380 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__get_ho_arg_regs_3_p_0(
#line 1380 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInstInfo_4,
#line 1380 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypes_5,
#line 1380 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgRegs_6)
#line 1380 "float_regs.m"
{
#line 1383 "float_regs.m"
  {
#line 1383 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1383 "float_regs.m"
    MR_Word transform_hlds__float_regs__MaybeArgRegs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_4, (MR_Integer) 2)));
#line 1384 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_4, (MR_Integer) 0)));
#line 1384 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_4, (MR_Integer) 1)));
#line 1384 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_4, (MR_Integer) 3)));

#line 1387 "float_regs.m"
    if ((transform_hlds__float_regs__MaybeArgRegs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1388 "float_regs.m"
      {
#line 1389 "float_regs.m"
        {
#line 1389 "float_regs.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[13], transform_hlds__float_regs__ArgTypes_5, transform_hlds__float_regs__ArgRegs_6);
#line 1389 "float_regs.m"
          return;
        }
#line 1388 "float_regs.m"
      }
#line 1387 "float_regs.m"
    else
#line 1386 "float_regs.m"
      *transform_hlds__float_regs__ArgRegs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__MaybeArgRegs_9, (MR_Integer) 0)));
#line 1383 "float_regs.m"
  }
#line 1380 "float_regs.m"
}

#line 1366 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(
#line 1366 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_4,
#line 1366 "float_regs.m"
  MR_Word transform_hlds__float_regs__Inst_5,
#line 1366 "float_regs.m"
  MR_Word * transform_hlds__float_regs__PredInstInfo_6)
#line 1366 "float_regs.m"
{
#line 1371 "float_regs.m"
  while (MR_TRUE)
#line 1371 "float_regs.m"
    {
#line 1371 "float_regs.m"
      /* tailcall optimized into a loop */
#line 1371 "float_regs.m"
      {
#line 1371 "float_regs.m"
        MR_bool transform_hlds__float_regs__succeeded;

#line 1371 "float_regs.m"
        if (((MR_tag((MR_Word) transform_hlds__float_regs__Inst_5)) == (MR_mktag((MR_Integer) 2))))
#line 1371 "float_regs.m"
          {
#line 1371 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst_5, (MR_Integer) 1)));
#line 1371 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst_5, (MR_Integer) 0)));

#line 1371 "float_regs.m"
            transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1371 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 1371 "float_regs.m"
              *transform_hlds__float_regs__PredInstInfo_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__V_12_12), (MR_Integer) 1);
#line 1371 "float_regs.m"
          }
#line 1371 "float_regs.m"
        else
#line 1371 "float_regs.m"
          if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1375 "float_regs.m"
            {
#line 1375 "float_regs.m"
              MR_Word transform_hlds__float_regs__InstName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst_5, (MR_Integer) 1)));
#line 1375 "float_regs.m"
              MR_Word transform_hlds__float_regs__InstB_10;

#line 1376 "float_regs.m"
              {
#line 1376 "float_regs.m"
                check_hlds__mode_util__inst_lookup_3_p_0(transform_hlds__float_regs__ModuleInfo_4, transform_hlds__float_regs__InstName_9, &transform_hlds__float_regs__InstB_10);
              }
#line 1377 "float_regs.m"
              /* direct tailcall eliminated */
#line 1377 "float_regs.m"
              {
#line 1377 "float_regs.m"
                MR_Word transform_hlds__float_regs__Inst__tmp_copy_5 = transform_hlds__float_regs__InstB_10;

#line 1377 "float_regs.m"
                transform_hlds__float_regs__Inst_5 = transform_hlds__float_regs__Inst__tmp_copy_5;
#line 1377 "float_regs.m"
              }
#line 1377 "float_regs.m"
              continue;
#line 1375 "float_regs.m"
            }
#line 1371 "float_regs.m"
          else
#line 1371 "float_regs.m"
            if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1373 "float_regs.m"
              {
#line 1373 "float_regs.m"
                MR_Word transform_hlds__float_regs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst_5, (MR_Integer) 2)));
#line 1373 "float_regs.m"
                MR_Word transform_hlds__float_regs__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst_5, (MR_Integer) 1)));

#line 1373 "float_regs.m"
                transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 1373 "float_regs.m"
                if (transform_hlds__float_regs__succeeded)
#line 1373 "float_regs.m"
                  *transform_hlds__float_regs__PredInstInfo_6 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__V_11_11), (MR_Integer) 1);
#line 1373 "float_regs.m"
              }
#line 1371 "float_regs.m"
            else
#line 1371 "float_regs.m"
              transform_hlds__float_regs__succeeded = MR_FALSE;
#line 1371 "float_regs.m"
        return transform_hlds__float_regs__succeeded;
#line 1371 "float_regs.m"
      }
#line 1371 "float_regs.m"
      break;
#line 1371 "float_regs.m"
    }
#line 1366 "float_regs.m"
}

#line 1389 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0_1(
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1389 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 1389 "float_regs.m"
{
#line 1389 "float_regs.m"
  {
#line 1389 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1389 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_RegType_4;

#line 1389 "float_regs.m"
    {
#line 1389 "float_regs.m"
      transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_RegType_4);
    }
#line 1389 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_RegType_4));
#line 1389 "float_regs.m"
  }
#line 1389 "float_regs.m"
}

#line 1294 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_arg_12_p_0(
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMapBefore_13,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_14,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgType_15,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__ExpectInst_16,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVar_17,
#line 1294 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Var_18,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44,
#line 1294 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_46,
#line 1294 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_47,
#line 1294 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48,
#line 1294 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_49)
#line 1294 "float_regs.m"
{
#line 1300 "float_regs.m"
  {
#line 1300 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1300 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_22;
#line 1300 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes_23;
#line 1338 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredOrFunc_25;
#line 1338 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgPredArgTypes_27;
#line 1305 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_24_24;
#line 1307 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_28_28;
#line 1307 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_29_29;

#line 1301 "float_regs.m"
    {
#line 1301 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, &transform_hlds__float_regs__ModuleInfo_22);
    }
#line 1302 "float_regs.m"
    {
#line 1302 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, &transform_hlds__float_regs__VarTypes_23);
    }
#line 1304 "float_regs.m"
    {
#line 1304 "float_regs.m"
      transform_hlds__float_regs__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__float_regs__ModuleInfo_22, transform_hlds__float_regs__ExpectInst_16);
    }
#line 1304 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1304 "float_regs.m"
      {
#line 1305 "float_regs.m"
        {
#line 1305 "float_regs.m"
          transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__ArgType_15, &transform_hlds__float_regs__V_24_24, &transform_hlds__float_regs__PredOrFunc_25, &transform_hlds__float_regs__ArgPredArgTypes_27);
        }
#line 1304 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1304 "float_regs.m"
          {
#line 1307 "float_regs.m"
            transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__ArgPredArgTypes_27)) == (MR_mktag((MR_Integer) 1)));
#line 1307 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 1307 "float_regs.m"
              {
#line 1307 "float_regs.m"
                transform_hlds__float_regs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgPredArgTypes_27, (MR_Integer) 0)));
#line 1307 "float_regs.m"
                transform_hlds__float_regs__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgPredArgTypes_27, (MR_Integer) 1)));
#line 1307 "float_regs.m"
              }
#line 1304 "float_regs.m"
          }
#line 1304 "float_regs.m"
      }
#line 1338 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1309 "float_regs.m"
      {
#line 1309 "float_regs.m"
        MR_Word transform_hlds__float_regs__OrigVarType_30;
#line 1309 "float_regs.m"
        MR_Word transform_hlds__float_regs__OrigPredArgTypes_34;
#line 1309 "float_regs.m"
        MR_Integer transform_hlds__float_regs__Arity_35;
#line 1310 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_31_31;
#line 1310 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_32_32;
#line 1331 "float_regs.m"
        MR_Word transform_hlds__float_regs__ExpectPredInstInfo_36;
#line 1361 "float_regs.m"
        MR_Word transform_hlds__float_regs__PredInstInfo0_61;

#line 1309 "float_regs.m"
        {
#line 1309 "float_regs.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_23, transform_hlds__float_regs__OrigVar_17, &transform_hlds__float_regs__OrigVarType_30);
        }
#line 1310 "float_regs.m"
        {
#line 1310 "float_regs.m"
          parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(transform_hlds__float_regs__OrigVarType_30, &transform_hlds__float_regs__V_31_31, &transform_hlds__float_regs__V_32_32, &transform_hlds__float_regs__OrigPredArgTypes_34);
        }
#line 1312 "float_regs.m"
        {
#line 1312 "float_regs.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__OrigPredArgTypes_34, &transform_hlds__float_regs__Arity_35);
        }
#line 1359 "float_regs.m"
        {
#line 1359 "float_regs.m"
          transform_hlds__float_regs__succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(transform_hlds__float_regs__ModuleInfo_22, transform_hlds__float_regs__ExpectInst_16, &transform_hlds__float_regs__PredInstInfo0_61);
        }
#line 1361 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1360 "float_regs.m"
          {
#line 1360 "float_regs.m"
            transform_hlds__float_regs__ExpectPredInstInfo_36 = transform_hlds__float_regs__PredInstInfo0_61;
#line 1360 "float_regs.m"
            transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1360 "float_regs.m"
          }
#line 1361 "float_regs.m"
        else
#line 1362 "float_regs.m"
          {
#line 1362 "float_regs.m"
            transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__PredOrFunc_25 == (MR_Integer) 1);
#line 1362 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 1362 "float_regs.m"
              {
#line 1363 "float_regs.m"
                {
#line 1363 "float_regs.m"
                  transform_hlds__float_regs__ExpectPredInstInfo_36 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(transform_hlds__float_regs__Arity_35);
                }
#line 1363 "float_regs.m"
                transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1362 "float_regs.m"
              }
#line 1362 "float_regs.m"
          }
#line 1331 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1317 "float_regs.m"
          {
#line 1317 "float_regs.m"
            MR_Word transform_hlds__float_regs__OrigVarInst_37;
#line 1317 "float_regs.m"
            MR_Word transform_hlds__float_regs__OrigPredInstInfo_38;
#line 1317 "float_regs.m"
            MR_Word transform_hlds__float_regs__ExpectArgRegs_39;
#line 1317 "float_regs.m"
            MR_Word transform_hlds__float_regs__OrigArgRegs_40;
#line 1317 "float_regs.m"
            MR_Word transform_hlds__float_regs__MaybeArgRegs_82;
#line 1351 "float_regs.m"
            MR_Word transform_hlds__float_regs__PredInstInfo0_67;
#line 1361 "float_regs.m"
            MR_Word transform_hlds__float_regs__PredInstInfo0_76;
#line 1384 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_80_80;
#line 1384 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_81_81;
#line 1384 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_83_83;

#line 1317 "float_regs.m"
            {
#line 1317 "float_regs.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__InstMapBefore_13, transform_hlds__float_regs__OrigVar_17, &transform_hlds__float_regs__OrigVarInst_37);
            }
#line 1359 "float_regs.m"
            {
#line 1359 "float_regs.m"
              transform_hlds__float_regs__succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(transform_hlds__float_regs__ModuleInfo_22, transform_hlds__float_regs__OrigVarInst_37, &transform_hlds__float_regs__PredInstInfo0_76);
            }
#line 1361 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 1360 "float_regs.m"
              {
#line 1360 "float_regs.m"
                transform_hlds__float_regs__PredInstInfo0_67 = transform_hlds__float_regs__PredInstInfo0_76;
#line 1360 "float_regs.m"
                transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1360 "float_regs.m"
              }
#line 1361 "float_regs.m"
            else
#line 1362 "float_regs.m"
              {
#line 1362 "float_regs.m"
                transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__PredOrFunc_25 == (MR_Integer) 1);
#line 1362 "float_regs.m"
                if (transform_hlds__float_regs__succeeded)
#line 1362 "float_regs.m"
                  {
#line 1363 "float_regs.m"
                    {
#line 1363 "float_regs.m"
                      transform_hlds__float_regs__PredInstInfo0_67 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(transform_hlds__float_regs__Arity_35);
                    }
#line 1363 "float_regs.m"
                    transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1362 "float_regs.m"
                  }
#line 1362 "float_regs.m"
              }
#line 1351 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 1350 "float_regs.m"
              transform_hlds__float_regs__OrigPredInstInfo_38 = transform_hlds__float_regs__PredInstInfo0_67;
#line 1351 "float_regs.m"
            else
#line 1352 "float_regs.m"
              {
#line 1352 "float_regs.m"
                {
#line 1352 "float_regs.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.lookup_pred_inst_info\'/5", (MR_String) "no higher order inst");
#line 1352 "float_regs.m"
                  return;
                }
#line 1352 "float_regs.m"
              }
#line 1384 "float_regs.m"
            transform_hlds__float_regs__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ExpectPredInstInfo_36, (MR_Integer) 0)));
#line 1384 "float_regs.m"
            transform_hlds__float_regs__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ExpectPredInstInfo_36, (MR_Integer) 1)));
#line 1384 "float_regs.m"
            transform_hlds__float_regs__MaybeArgRegs_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ExpectPredInstInfo_36, (MR_Integer) 2)));
#line 1384 "float_regs.m"
            transform_hlds__float_regs__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ExpectPredInstInfo_36, (MR_Integer) 3)));
#line 1387 "float_regs.m"
            if ((transform_hlds__float_regs__MaybeArgRegs_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1388 "float_regs.m"
              {
#line 1389 "float_regs.m"
                {
#line 1389 "float_regs.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[12], transform_hlds__float_regs__ArgPredArgTypes_27, &transform_hlds__float_regs__ExpectArgRegs_39);
                }
#line 1388 "float_regs.m"
              }
#line 1387 "float_regs.m"
            else
#line 1386 "float_regs.m"
              transform_hlds__float_regs__ExpectArgRegs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__MaybeArgRegs_82, (MR_Integer) 0)));
#line 1322 "float_regs.m"
            {
#line 1322 "float_regs.m"
              transform_hlds__float_regs__get_ho_arg_regs_3_p_0(transform_hlds__float_regs__OrigPredInstInfo_38, transform_hlds__float_regs__OrigPredArgTypes_34, &transform_hlds__float_regs__OrigArgRegs_40);
            }
#line 1324 "float_regs.m"
            {
#line 1324 "float_regs.m"
              transform_hlds__float_regs__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[5], ((MR_Box) (transform_hlds__float_regs__OrigArgRegs_40)), ((MR_Box) (transform_hlds__float_regs__ExpectArgRegs_39)));
            }
#line 1326 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 1325 "float_regs.m"
              {
#line 1325 "float_regs.m"
                *transform_hlds__float_regs__Var_18 = transform_hlds__float_regs__OrigVar_17;
#line 1325 "float_regs.m"
                *transform_hlds__float_regs__STATE_VARIABLE_Info_47 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_46;
#line 1325 "float_regs.m"
                *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44;
#line 1325 "float_regs.m"
              }
#line 1326 "float_regs.m"
            else
#line 1328 "float_regs.m"
              {
#line 1328 "float_regs.m"
                MR_Word transform_hlds__float_regs__UnifyGoal_41;

#line 1327 "float_regs.m"
                {
#line 1327 "float_regs.m"
                  transform_hlds__float_regs__create_reg_wrapper_9_p_0(transform_hlds__float_regs__OrigVar_17, transform_hlds__float_regs__OrigPredInstInfo_38, transform_hlds__float_regs__ExpectArgRegs_39, transform_hlds__float_regs__OrigArgRegs_40, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__Var_18, &transform_hlds__float_regs__UnifyGoal_41, transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, transform_hlds__float_regs__STATE_VARIABLE_Info_47);
                }
#line 1329 "float_regs.m"
                {
#line 1329 "float_regs.m"
                  mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ((MR_Box) (transform_hlds__float_regs__UnifyGoal_41)), transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45);
                }
#line 1328 "float_regs.m"
              }
#line 1329 "float_regs.m"
            *transform_hlds__float_regs__STATE_VARIABLE_Specs_49 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48;
#line 1317 "float_regs.m"
          }
#line 1331 "float_regs.m"
        else
#line 1332 "float_regs.m"
          {
#line 1332 "float_regs.m"
            MR_Word transform_hlds__float_regs__PredInfo_42;
#line 1332 "float_regs.m"
            MR_Word transform_hlds__float_regs__VarSet_43;

#line 1332 "float_regs.m"
            {
#line 1332 "float_regs.m"
              transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, &transform_hlds__float_regs__PredInfo_42);
            }
#line 1333 "float_regs.m"
            {
#line 1333 "float_regs.m"
              transform_hlds__lambda__lambda_info_get_varset_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_46, &transform_hlds__float_regs__VarSet_43);
            }
#line 1334 "float_regs.m"
            {
#line 1334 "float_regs.m"
              transform_hlds__float_regs__maybe_report_missing_pred_inst_8_p_0(transform_hlds__float_regs__PredInfo_42, transform_hlds__float_regs__VarSet_43, transform_hlds__float_regs__OrigVar_17, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__OrigPredArgTypes_34, transform_hlds__float_regs__ArgPredArgTypes_27, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48, transform_hlds__float_regs__STATE_VARIABLE_Specs_49);
            }
#line 1336 "float_regs.m"
            *transform_hlds__float_regs__Var_18 = transform_hlds__float_regs__OrigVar_17;
#line 1336 "float_regs.m"
            *transform_hlds__float_regs__STATE_VARIABLE_Info_47 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_46;
#line 1336 "float_regs.m"
            *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44;
#line 1332 "float_regs.m"
          }
#line 1309 "float_regs.m"
      }
#line 1338 "float_regs.m"
    else
#line 1339 "float_regs.m"
      {
#line 1339 "float_regs.m"
        *transform_hlds__float_regs__Var_18 = transform_hlds__float_regs__OrigVar_17;
#line 1339 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_49 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_48;
#line 1339 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_47 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_46;
#line 1339 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_45 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_44;
#line 1339 "float_regs.m"
      }
#line 1300 "float_regs.m"
  }
#line 1294 "float_regs.m"
}

#line 1267 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_args_12_p_0(
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_14,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypes_15,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__Insts_16,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVars_17,
#line 1267 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_18,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_30,
#line 1267 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_31,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_32,
#line 1267 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_33,
#line 1267 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_34,
#line 1267 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_35)
#line 1267 "float_regs.m"
{
#line 1281 "float_regs.m"
  {
#line 1281 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__ArgTypes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 1276 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1276 "float_regs.m"
      {
#line 1277 "float_regs.m"
        transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__Insts_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1278 "float_regs.m"
          transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__OrigVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1276 "float_regs.m"
      }
#line 1281 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1280 "float_regs.m"
      {
#line 1280 "float_regs.m"
        *transform_hlds__float_regs__Vars_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1280 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_35 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_34;
#line 1280 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_33 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_32;
#line 1280 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_31 = transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_30;
#line 1280 "float_regs.m"
      }
#line 1281 "float_regs.m"
    else
#line 1290 "float_regs.m"
      {
#line 1290 "float_regs.m"
        MR_Word transform_hlds__float_regs__AT_22;
#line 1290 "float_regs.m"
        MR_Word transform_hlds__float_regs__ATs_23;
#line 1290 "float_regs.m"
        MR_Word transform_hlds__float_regs__I_24;
#line 1290 "float_regs.m"
        MR_Word transform_hlds__float_regs__Is_25;
#line 1290 "float_regs.m"
        MR_Word transform_hlds__float_regs__OV_26;
#line 1290 "float_regs.m"
        MR_Word transform_hlds__float_regs__OVs_27;

#line 1282 "float_regs.m"
        transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__ArgTypes_15)) == (MR_mktag((MR_Integer) 1)));
#line 1282 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1282 "float_regs.m"
          {
#line 1282 "float_regs.m"
            transform_hlds__float_regs__AT_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgTypes_15, (MR_Integer) 0)));
#line 1282 "float_regs.m"
            transform_hlds__float_regs__ATs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__ArgTypes_15, (MR_Integer) 1)));
#line 1283 "float_regs.m"
            transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__Insts_16)) == (MR_mktag((MR_Integer) 1)));
#line 1283 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 1283 "float_regs.m"
              {
#line 1283 "float_regs.m"
                transform_hlds__float_regs__I_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Insts_16, (MR_Integer) 0)));
#line 1283 "float_regs.m"
                transform_hlds__float_regs__Is_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Insts_16, (MR_Integer) 1)));
#line 1284 "float_regs.m"
                transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__OrigVars_17)) == (MR_mktag((MR_Integer) 1)));
#line 1284 "float_regs.m"
                if (transform_hlds__float_regs__succeeded)
#line 1284 "float_regs.m"
                  {
#line 1284 "float_regs.m"
                    transform_hlds__float_regs__OV_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__OrigVars_17, (MR_Integer) 0)));
#line 1284 "float_regs.m"
                    transform_hlds__float_regs__OVs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__OrigVars_17, (MR_Integer) 1)));
#line 1284 "float_regs.m"
                  }
#line 1283 "float_regs.m"
              }
#line 1282 "float_regs.m"
          }
#line 1290 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1286 "float_regs.m"
          {
#line 1286 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_28;
#line 1286 "float_regs.m"
            MR_Word transform_hlds__float_regs__Vs_29;
#line 1286 "float_regs.m"
            MR_Word transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_36_36;
#line 1286 "float_regs.m"
            MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_37_37;
#line 1286 "float_regs.m"
            MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38;

#line 1286 "float_regs.m"
            {
#line 1286 "float_regs.m"
              transform_hlds__float_regs__match_arg_12_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__AT_22, transform_hlds__float_regs__I_24, transform_hlds__float_regs__OV_26, &transform_hlds__float_regs__V_28, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_0_30, &transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_36_36, transform_hlds__float_regs__STATE_VARIABLE_Info_0_32, &transform_hlds__float_regs__STATE_VARIABLE_Info_37_37, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_34, &transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38);
            }
#line 1287 "float_regs.m"
            {
#line 1287 "float_regs.m"
              transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__Context_14, transform_hlds__float_regs__ATs_23, transform_hlds__float_regs__Is_25, transform_hlds__float_regs__OVs_27, &transform_hlds__float_regs__Vs_29, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_36_36, transform_hlds__float_regs__STATE_VARIABLE_WrapGoals_31, transform_hlds__float_regs__STATE_VARIABLE_Info_37_37, transform_hlds__float_regs__STATE_VARIABLE_Info_33, transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38, transform_hlds__float_regs__STATE_VARIABLE_Specs_35);
            }
#line 1289 "float_regs.m"
            {
#line 1289 "float_regs.m"
              MR_Word base;
#line 1289 "float_regs.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "float_regs.m"
              *transform_hlds__float_regs__Vars_18 = base;
#line 1289 "float_regs.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__V_28));
#line 1289 "float_regs.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__float_regs__Vs_29));
#line 1289 "float_regs.m"
            }
#line 1286 "float_regs.m"
          }
#line 1290 "float_regs.m"
        else
#line 1291 "float_regs.m"
          {
#line 1291 "float_regs.m"
            {
#line 1291 "float_regs.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.match_args\'/12", (MR_String) "length mismatch");
#line 1291 "float_regs.m"
              return;
            }
#line 1291 "float_regs.m"
          }
#line 1290 "float_regs.m"
      }
#line 1281 "float_regs.m"
  }
#line 1267 "float_regs.m"
}

#line 1255 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__match_args_for_call_11_p_0(
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_12,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_13,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypes_14,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgModes_15,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVars_16,
#line 1255 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_17,
#line 1255 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_18,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_23,
#line 1255 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_24,
#line 1255 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25,
#line 1255 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_26)
#line 1255 "float_regs.m"
{
#line 1261 "float_regs.m"
  {
#line 1261 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1261 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_21;
#line 1261 "float_regs.m"
    MR_Word transform_hlds__float_regs__InitialInsts_22;

#line 1262 "float_regs.m"
    {
#line 1262 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_23, &transform_hlds__float_regs__ModuleInfo_21);
    }
#line 1263 "float_regs.m"
    {
#line 1263 "float_regs.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_21, transform_hlds__float_regs__ArgModes_15, &transform_hlds__float_regs__InitialInsts_22);
    }
#line 1264 "float_regs.m"
    {
#line 1264 "float_regs.m"
      transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_12, transform_hlds__float_regs__Context_13, transform_hlds__float_regs__ArgTypes_14, transform_hlds__float_regs__InitialInsts_22, transform_hlds__float_regs__OrigVars_16, transform_hlds__float_regs__Vars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__float_regs__WrapGoals_18, transform_hlds__float_regs__STATE_VARIABLE_Info_0_23, transform_hlds__float_regs__STATE_VARIABLE_Info_24, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_25, transform_hlds__float_regs__STATE_VARIABLE_Specs_26);
#line 1264 "float_regs.m"
      return;
    }
#line 1261 "float_regs.m"
  }
#line 1255 "float_regs.m"
}

#line 1247 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__set_foreign_arg_var_3_p_0(
#line 1247 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_4,
#line 1247 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6,
#line 1247 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_7)
#line 1247 "float_regs.m"
{
#line 1251 "float_regs.m"
  {
#line 1251 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1251 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 1)));
#line 1251 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 2)));
#line 1251 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 3)));
#line 1251 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_0_6, (MR_Integer) 0)));

#line 1251 "float_regs.m"
    {
#line 1251 "float_regs.m"
      MR_Word base;
#line 1251 "float_regs.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1251 "float_regs.m"
      *transform_hlds__float_regs__STATE_VARIABLE_ForeignArg_7 = base;
#line 1251 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__Var_4));
#line 1251 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__V_10_10));
#line 1251 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__float_regs__V_11_11));
#line 1251 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__float_regs__V_12_12));
#line 1251 "float_regs.m"
    }
#line 1251 "float_regs.m"
  }
#line 1247 "float_regs.m"
}

#line 1244 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_2(
#line 1244 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1244 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1244 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 1244 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 1244 "float_regs.m"
{
#line 1244 "float_regs.m"
  {
#line 1244 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1244 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv2_STATE_VARIABLE_ForeignArg_7;

#line 1244 "float_regs.m"
    {
#line 1244 "float_regs.m"
      transform_hlds__float_regs__set_foreign_arg_var_3_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv2_STATE_VARIABLE_ForeignArg_7);
    }
#line 1244 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv2_STATE_VARIABLE_ForeignArg_7));
#line 1244 "float_regs.m"
  }
#line 1244 "float_regs.m"
}

#line 1241 "float_regs.m"
static MR_Box MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0_1(
#line 1241 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1241 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1)
#line 1241 "float_regs.m"
{
#line 1241 "float_regs.m"
  {
#line 1241 "float_regs.m"
    MR_Box transform_hlds__float_regs__wrapper_arg_2;
#line 1241 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1241 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_HeadVar__2_2;

#line 1241 "float_regs.m"
    {
#line 1241 "float_regs.m"
      transform_hlds__float_regs__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1));
    }
#line 1241 "float_regs.m"
    transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_HeadVar__2_2));
#line 1241 "float_regs.m"
    return transform_hlds__float_regs__wrapper_arg_2;
#line 1241 "float_regs.m"
  }
#line 1241 "float_regs.m"
}

#line 1234 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_12,
#line 1234 "float_regs.m"
  MR_Integer transform_hlds__float_regs__ProcId_13,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__ForeignArgs0_14,
#line 1234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ForeignArgs_15,
#line 1234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_16,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_17,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_18,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_24,
#line 1234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_25,
#line 1234 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_26,
#line 1234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_27)
#line 1234 "float_regs.m"
{
#line 1240 "float_regs.m"
  {
#line 1240 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1240 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 1240 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeInfo_33_33 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
#line 1240 "float_regs.m"
    MR_Word transform_hlds__float_regs__Vars0_21;
#line 1240 "float_regs.m"
    MR_Word transform_hlds__float_regs__Vars_22;
#line 1240 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_53;
#line 1240 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInfo_54;
#line 1240 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcTable_55;
#line 1141 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcInfo_56;
#line 1135 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv1_ProcInfo_56;

#line 1241 "float_regs.m"
    {
#line 1241 "float_regs.m"
      transform_hlds__float_regs__Vars0_21 = mercury__list__map_2_f_0(transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__TypeInfo_33_33, (MR_Word) &transform_hlds__float_regs_scalar_common_3[10], transform_hlds__float_regs__ForeignArgs0_14);
    }
#line 1132 "float_regs.m"
    {
#line 1132 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_24, &transform_hlds__float_regs__ModuleInfo_53);
    }
#line 1133 "float_regs.m"
    {
#line 1133 "float_regs.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__ModuleInfo_53, transform_hlds__float_regs__PredId_12, &transform_hlds__float_regs__PredInfo_54);
    }
#line 1134 "float_regs.m"
    {
#line 1134 "float_regs.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__float_regs__PredInfo_54, &transform_hlds__float_regs__ProcTable_55);
    }
#line 1135 "float_regs.m"
    {
#line 1135 "float_regs.m"
      transform_hlds__float_regs__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__float_regs__ProcTable_55, ((MR_Box) (transform_hlds__float_regs__ProcId_13)), &transform_hlds__float_regs__conv1_ProcInfo_56);
    }
#line 1135 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1135 "float_regs.m"
      {
#line 1135 "float_regs.m"
        transform_hlds__float_regs__ProcInfo_56 = ((MR_Word) transform_hlds__float_regs__conv1_ProcInfo_56);
#line 1135 "float_regs.m"
        transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1135 "float_regs.m"
      }
#line 1141 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1136 "float_regs.m"
      {
#line 1136 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgTypes_57;
#line 1136 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgModes_58;
#line 1136 "float_regs.m"
        MR_Word transform_hlds__float_regs__ModuleInfo_80;
#line 1136 "float_regs.m"
        MR_Word transform_hlds__float_regs__InitialInsts_81;

#line 1136 "float_regs.m"
        {
#line 1136 "float_regs.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_54, &transform_hlds__float_regs__ArgTypes_57);
        }
#line 1137 "float_regs.m"
        {
#line 1137 "float_regs.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo_56, &transform_hlds__float_regs__ArgModes_58);
        }
#line 1262 "float_regs.m"
        {
#line 1262 "float_regs.m"
          transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_24, &transform_hlds__float_regs__ModuleInfo_80);
        }
#line 1263 "float_regs.m"
        {
#line 1263 "float_regs.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_80, transform_hlds__float_regs__ArgModes_58, &transform_hlds__float_regs__InitialInsts_81);
        }
#line 1264 "float_regs.m"
        {
#line 1264 "float_regs.m"
          transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_17, transform_hlds__float_regs__Context_18, transform_hlds__float_regs__ArgTypes_57, transform_hlds__float_regs__InitialInsts_81, transform_hlds__float_regs__Vars0_21, &transform_hlds__float_regs__Vars_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__float_regs__WrapGoals_16, transform_hlds__float_regs__STATE_VARIABLE_Info_0_24, transform_hlds__float_regs__STATE_VARIABLE_Info_25, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_26, transform_hlds__float_regs__STATE_VARIABLE_Specs_27);
        }
#line 1136 "float_regs.m"
      }
#line 1141 "float_regs.m"
    else
#line 1148 "float_regs.m"
      {
#line 1149 "float_regs.m"
        transform_hlds__float_regs__Vars_22 = transform_hlds__float_regs__Vars0_21;
#line 1150 "float_regs.m"
        *transform_hlds__float_regs__WrapGoals_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1151 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_27 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_26;
#line 1151 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_25 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_24;
#line 1148 "float_regs.m"
      }
#line 1244 "float_regs.m"
    {
#line 1244 "float_regs.m"
      mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeInfo_33_33, transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__TypeCtorInfo_32_32, (MR_Word) &transform_hlds__float_regs_scalar_common_3[11], transform_hlds__float_regs__Vars_22, transform_hlds__float_regs__ForeignArgs0_14, transform_hlds__float_regs__ForeignArgs_15);
#line 1244 "float_regs.m"
      return;
    }
#line 1240 "float_regs.m"
  }
#line 1234 "float_regs.m"
}

#line 1218 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(
#line 1218 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
#line 1218 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__2_2)
#line 1218 "float_regs.m"
{
#line 1221 "float_regs.m"
  {
#line 1221 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 1221 "float_regs.m"
    if ((transform_hlds__float_regs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "float_regs.m"
      *transform_hlds__float_regs__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1221 "float_regs.m"
    else
#line 1222 "float_regs.m"
      {
#line 1222 "float_regs.m"
        MR_Word transform_hlds__float_regs__Type_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 0)));
#line 1222 "float_regs.m"
        MR_Word transform_hlds__float_regs__Types0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 1)));
#line 1222 "float_regs.m"
        MR_Word transform_hlds__float_regs__Types1_6;

#line 1223 "float_regs.m"
        {
#line 1223 "float_regs.m"
          transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(transform_hlds__float_regs__Types0_4, &transform_hlds__float_regs__Types1_6);
        }
#line 1225 "float_regs.m"
        {
#line 1225 "float_regs.m"
          transform_hlds__float_regs__succeeded = check_hlds__polymorphism__type_is_typeclass_info_1_p_0(transform_hlds__float_regs__Type_3);
        }
#line 1226 "float_regs.m"
        if (!(transform_hlds__float_regs__succeeded))
#line 1226 "float_regs.m"
          {
#line 1226 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_7_7;

#line 1226 "float_regs.m"
            {
#line 1226 "float_regs.m"
              transform_hlds__float_regs__V_7_7 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
            }
#line 1226 "float_regs.m"
            {
#line 1226 "float_regs.m"
              transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__float_regs__Type_3, transform_hlds__float_regs__V_7_7);
            }
#line 1226 "float_regs.m"
          }
#line 1230 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1229 "float_regs.m"
          *transform_hlds__float_regs__HeadVar__2_2 = transform_hlds__float_regs__Types1_6;
#line 1230 "float_regs.m"
        else
#line 1231 "float_regs.m"
          {
#line 1231 "float_regs.m"
            MR_Word base;
#line 1231 "float_regs.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "float_regs.m"
            *transform_hlds__float_regs__HeadVar__2_2 = base;
#line 1231 "float_regs.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__Type_3));
#line 1231 "float_regs.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__float_regs__Types1_6));
#line 1231 "float_regs.m"
          }
#line 1222 "float_regs.m"
      }
#line 1221 "float_regs.m"
  }
#line 1218 "float_regs.m"
}

#line 1175 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__ClassId_14,
#line 1175 "float_regs.m"
  MR_Integer transform_hlds__float_regs__MethodNum_15,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__Vars0_16,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_17,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__Modes0_18,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Modes_19,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_20,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_21,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_22,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_45,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_46,
#line 1175 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47,
#line 1175 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_48)
#line 1175 "float_regs.m"
{
#line 1182 "float_regs.m"
  {
#line 1182 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeInfo_64_64;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_65_65;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_25;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__Classes_26;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__ClassDefn_27;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__ClassInterface_28;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__ClassProc_29;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredId_30;
#line 1182 "float_regs.m"
    MR_Integer transform_hlds__float_regs__ProcId_31;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInfo_32;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcInfo_33;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgTypes_34;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcArgModes_35;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__EndTypes_36;
#line 1182 "float_regs.m"
    MR_Integer transform_hlds__float_regs__N_37;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__StartVars_38;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__EndVars0_39;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__StartModes_40;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__EndProcArgModes_43;
#line 1182 "float_regs.m"
    MR_Word transform_hlds__float_regs__EndVars_44;
#line 1182 "float_regs.m"
    MR_Integer transform_hlds__float_regs__Len_70;
#line 1182 "float_regs.m"
    MR_Integer transform_hlds__float_regs__StartLen_71;
#line 1182 "float_regs.m"
    MR_Integer transform_hlds__float_regs__Len_80;
#line 1182 "float_regs.m"
    MR_Integer transform_hlds__float_regs__StartLen_81;
#line 1182 "float_regs.m"
    MR_Integer transform_hlds__float_regs__Len_90;
#line 1182 "float_regs.m"
    MR_Integer transform_hlds__float_regs__StartLen_91;
#line 1185 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv0_ClassDefn_27;
#line 1186 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_51_51;
#line 1186 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_52_52;
#line 1186 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_53_53;
#line 1186 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_54_54;
#line 1186 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_55_55;
#line 1186 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_56_56;
#line 1186 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_57_57;
#line 1186 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_58_58;
#line 1186 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_59_59;
#line 1187 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv1_ClassProc_29;

#line 1183 "float_regs.m"
    {
#line 1183 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, &transform_hlds__float_regs__ModuleInfo_25);
    }
#line 1184 "float_regs.m"
    {
#line 1184 "float_regs.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__float_regs__ModuleInfo_25, &transform_hlds__float_regs__Classes_26);
    }
#line 1185 "float_regs.m"
    {
#line 1185 "float_regs.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, transform_hlds__float_regs__Classes_26, ((MR_Box) (transform_hlds__float_regs__ClassId_14)), &transform_hlds__float_regs__conv0_ClassDefn_27);
    }
#line 1185 "float_regs.m"
    transform_hlds__float_regs__ClassDefn_27 = ((MR_Word) transform_hlds__float_regs__conv0_ClassDefn_27);
#line 1186 "float_regs.m"
    transform_hlds__float_regs__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 0)));
#line 1186 "float_regs.m"
    transform_hlds__float_regs__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 1)));
#line 1186 "float_regs.m"
    transform_hlds__float_regs__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 2)));
#line 1186 "float_regs.m"
    transform_hlds__float_regs__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 3)));
#line 1186 "float_regs.m"
    transform_hlds__float_regs__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 4)));
#line 1186 "float_regs.m"
    transform_hlds__float_regs__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 5)));
#line 1186 "float_regs.m"
    transform_hlds__float_regs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 6)));
#line 1186 "float_regs.m"
    transform_hlds__float_regs__ClassInterface_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 7)));
#line 1186 "float_regs.m"
    transform_hlds__float_regs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 8)));
#line 1186 "float_regs.m"
    transform_hlds__float_regs__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassDefn_27, (MR_Integer) 9)));
#line 1187 "float_regs.m"
    {
#line 1187 "float_regs.m"
      mercury__list__det_index1_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__float_regs__ClassInterface_28, transform_hlds__float_regs__MethodNum_15, &transform_hlds__float_regs__conv1_ClassProc_29);
    }
#line 1187 "float_regs.m"
    transform_hlds__float_regs__ClassProc_29 = ((MR_Word) transform_hlds__float_regs__conv1_ClassProc_29);
#line 1188 "float_regs.m"
    transform_hlds__float_regs__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassProc_29, (MR_Integer) 0)));
#line 1188 "float_regs.m"
    transform_hlds__float_regs__ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__ClassProc_29, (MR_Integer) 1)));
#line 1189 "float_regs.m"
    {
#line 1189 "float_regs.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__float_regs__ModuleInfo_25, transform_hlds__float_regs__PredId_30, transform_hlds__float_regs__ProcId_31, &transform_hlds__float_regs__PredInfo_32, &transform_hlds__float_regs__ProcInfo_33);
    }
#line 1190 "float_regs.m"
    {
#line 1190 "float_regs.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_32, &transform_hlds__float_regs__ArgTypes_34);
    }
#line 1191 "float_regs.m"
    {
#line 1191 "float_regs.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo_33, &transform_hlds__float_regs__ProcArgModes_35);
    }
#line 1206 "float_regs.m"
    {
#line 1206 "float_regs.m"
      transform_hlds__float_regs__take_non_rtti_types_from_tail_2_p_0(transform_hlds__float_regs__ArgTypes_34, &transform_hlds__float_regs__EndTypes_36);
    }
#line 1207 "float_regs.m"
    {
#line 1207 "float_regs.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__EndTypes_36, &transform_hlds__float_regs__N_37);
    }
#line 5150 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeInfo_64_64 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[1];
#line 1660 "float_regs.m"
    {
#line 1660 "float_regs.m"
      mercury__list__length_2_p_0(transform_hlds__float_regs__TypeInfo_64_64, transform_hlds__float_regs__Vars0_16, &transform_hlds__float_regs__Len_70);
    }
#line 1661 "float_regs.m"
    transform_hlds__float_regs__StartLen_71 = (transform_hlds__float_regs__Len_70 - transform_hlds__float_regs__N_37);
#line 1662 "float_regs.m"
    transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_71 == (MR_Integer) 0);
#line 1665 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1663 "float_regs.m"
      {
#line 1663 "float_regs.m"
        transform_hlds__float_regs__StartVars_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1664 "float_regs.m"
        transform_hlds__float_regs__EndVars0_39 = transform_hlds__float_regs__Vars0_16;
#line 1663 "float_regs.m"
      }
#line 1665 "float_regs.m"
    else
#line 1667 "float_regs.m"
      {
#line 1665 "float_regs.m"
        transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_71 > (MR_Integer) 0);
#line 1667 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1666 "float_regs.m"
          {
#line 1666 "float_regs.m"
            mercury__list__det_split_list_4_p_0(transform_hlds__float_regs__TypeInfo_64_64, transform_hlds__float_regs__StartLen_71, transform_hlds__float_regs__Vars0_16, &transform_hlds__float_regs__StartVars_38, &transform_hlds__float_regs__EndVars0_39);
          }
#line 1667 "float_regs.m"
        else
#line 1668 "float_regs.m"
          {
#line 1668 "float_regs.m"
            {
#line 1668 "float_regs.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
#line 1668 "float_regs.m"
              return;
            }
#line 1668 "float_regs.m"
          }
#line 1667 "float_regs.m"
      }
#line 5199 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1660 "float_regs.m"
    {
#line 1660 "float_regs.m"
      mercury__list__length_2_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__Modes0_18, &transform_hlds__float_regs__Len_80);
    }
#line 1661 "float_regs.m"
    transform_hlds__float_regs__StartLen_81 = (transform_hlds__float_regs__Len_80 - transform_hlds__float_regs__N_37);
#line 1662 "float_regs.m"
    transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_81 == (MR_Integer) 0);
#line 1665 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1663 "float_regs.m"
      transform_hlds__float_regs__StartModes_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1665 "float_regs.m"
    else
#line 1667 "float_regs.m"
      {
#line 1665 "float_regs.m"
        transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_81 > (MR_Integer) 0);
#line 1667 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1666 "float_regs.m"
          {
#line 1666 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_96_96;

#line 1666 "float_regs.m"
            {
#line 1666 "float_regs.m"
              mercury__list__det_split_list_4_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__StartLen_81, transform_hlds__float_regs__Modes0_18, &transform_hlds__float_regs__StartModes_40, &transform_hlds__float_regs__V_96_96);
            }
#line 1666 "float_regs.m"
          }
#line 1667 "float_regs.m"
        else
#line 1668 "float_regs.m"
          {
#line 1668 "float_regs.m"
            {
#line 1668 "float_regs.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
#line 1668 "float_regs.m"
              return;
            }
#line 1668 "float_regs.m"
          }
#line 1667 "float_regs.m"
      }
#line 1660 "float_regs.m"
    {
#line 1660 "float_regs.m"
      mercury__list__length_2_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__ProcArgModes_35, &transform_hlds__float_regs__Len_90);
    }
#line 1661 "float_regs.m"
    transform_hlds__float_regs__StartLen_91 = (transform_hlds__float_regs__Len_90 - transform_hlds__float_regs__N_37);
#line 1662 "float_regs.m"
    transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_91 == (MR_Integer) 0);
#line 1665 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1664 "float_regs.m"
      transform_hlds__float_regs__EndProcArgModes_43 = transform_hlds__float_regs__ProcArgModes_35;
#line 1665 "float_regs.m"
    else
#line 1667 "float_regs.m"
      {
#line 1665 "float_regs.m"
        transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_91 > (MR_Integer) 0);
#line 1667 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1666 "float_regs.m"
          {
#line 1666 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_98_98;

#line 1666 "float_regs.m"
            {
#line 1666 "float_regs.m"
              mercury__list__det_split_list_4_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__StartLen_91, transform_hlds__float_regs__ProcArgModes_35, &transform_hlds__float_regs__V_98_98, &transform_hlds__float_regs__EndProcArgModes_43);
            }
#line 1666 "float_regs.m"
          }
#line 1667 "float_regs.m"
        else
#line 1668 "float_regs.m"
          {
#line 1668 "float_regs.m"
            {
#line 1668 "float_regs.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
#line 1668 "float_regs.m"
              return;
            }
#line 1668 "float_regs.m"
          }
#line 1667 "float_regs.m"
      }
#line 1212 "float_regs.m"
    {
#line 1212 "float_regs.m"
      transform_hlds__float_regs__match_args_for_call_11_p_0(transform_hlds__float_regs__InstMap0_21, transform_hlds__float_regs__Context_22, transform_hlds__float_regs__EndTypes_36, transform_hlds__float_regs__EndProcArgModes_43, transform_hlds__float_regs__EndVars0_39, &transform_hlds__float_regs__EndVars_44, transform_hlds__float_regs__WrapGoals_20, transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, transform_hlds__float_regs__STATE_VARIABLE_Info_46, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47, transform_hlds__float_regs__STATE_VARIABLE_Specs_48);
    }
#line 1215 "float_regs.m"
    {
#line 1215 "float_regs.m"
      *transform_hlds__float_regs__Vars_17 = mercury__list__f_43_43_2_f_0(transform_hlds__float_regs__TypeInfo_64_64, transform_hlds__float_regs__StartVars_38, transform_hlds__float_regs__EndVars_44);
    }
#line 1216 "float_regs.m"
    {
#line 1216 "float_regs.m"
      *transform_hlds__float_regs__Modes_19 = mercury__list__f_43_43_2_f_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__StartModes_40, transform_hlds__float_regs__EndProcArgModes_43);
    }
#line 1182 "float_regs.m"
  }
#line 1175 "float_regs.m"
}

#line 1389 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0_1(
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1389 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1389 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 1389 "float_regs.m"
{
#line 1389 "float_regs.m"
  {
#line 1389 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1389 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_RegType_4;

#line 1389 "float_regs.m"
    {
#line 1389 "float_regs.m"
      transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_RegType_4);
    }
#line 1389 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_RegType_4));
#line 1389 "float_regs.m"
  }
#line 1389 "float_regs.m"
}

#line 1154 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__CallVar_13,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__Vars0_14,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_15,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgModes_16,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgRegs_17,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_18,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_19,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_20,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_36,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_37,
#line 1154 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_38,
#line 1154 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_39)
#line 1154 "float_regs.m"
{
#line 1161 "float_regs.m"
  {
#line 1161 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_23;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes_24;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallVarType_25;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallVarInst_26;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredOrFunc_28;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgTypes_30;
#line 1161 "float_regs.m"
    MR_Integer transform_hlds__float_regs__Arity_31;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallVarPredInstInfo_32;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__MaybeArgRegs_63;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_83;
#line 1161 "float_regs.m"
    MR_Word transform_hlds__float_regs__InitialInsts_84;
#line 1166 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_27_27;
#line 1351 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInstInfo0_48;
#line 1361 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInstInfo0_57;
#line 1170 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_33_33;
#line 1170 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_35_35;

#line 1162 "float_regs.m"
    {
#line 1162 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_36, &transform_hlds__float_regs__ModuleInfo_23);
    }
#line 1163 "float_regs.m"
    {
#line 1163 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_36, &transform_hlds__float_regs__VarTypes_24);
    }
#line 1164 "float_regs.m"
    {
#line 1164 "float_regs.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_24, transform_hlds__float_regs__CallVar_13, &transform_hlds__float_regs__CallVarType_25);
    }
#line 1165 "float_regs.m"
    {
#line 1165 "float_regs.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__InstMap0_19, transform_hlds__float_regs__CallVar_13, &transform_hlds__float_regs__CallVarInst_26);
    }
#line 1166 "float_regs.m"
    {
#line 1166 "float_regs.m"
      parse_tree__prog_type__type_is_higher_order_details_det_5_p_0(transform_hlds__float_regs__CallVarType_25, &transform_hlds__float_regs__V_27_27, &transform_hlds__float_regs__PredOrFunc_28, &transform_hlds__float_regs__ArgTypes_30);
    }
#line 1167 "float_regs.m"
    {
#line 1167 "float_regs.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__ArgTypes_30, &transform_hlds__float_regs__Arity_31);
    }
#line 1359 "float_regs.m"
    {
#line 1359 "float_regs.m"
      transform_hlds__float_regs__succeeded = transform_hlds__float_regs__search_pred_inst_info_2_3_p_0(transform_hlds__float_regs__ModuleInfo_23, transform_hlds__float_regs__CallVarInst_26, &transform_hlds__float_regs__PredInstInfo0_57);
    }
#line 1361 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1360 "float_regs.m"
      {
#line 1360 "float_regs.m"
        transform_hlds__float_regs__PredInstInfo0_48 = transform_hlds__float_regs__PredInstInfo0_57;
#line 1360 "float_regs.m"
        transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1360 "float_regs.m"
      }
#line 1361 "float_regs.m"
    else
#line 1362 "float_regs.m"
      {
#line 1362 "float_regs.m"
        transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__PredOrFunc_28 == (MR_Integer) 1);
#line 1362 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1362 "float_regs.m"
          {
#line 1363 "float_regs.m"
            {
#line 1363 "float_regs.m"
              transform_hlds__float_regs__PredInstInfo0_48 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(transform_hlds__float_regs__Arity_31);
            }
#line 1363 "float_regs.m"
            transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1362 "float_regs.m"
          }
#line 1362 "float_regs.m"
      }
#line 1351 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1350 "float_regs.m"
      transform_hlds__float_regs__CallVarPredInstInfo_32 = transform_hlds__float_regs__PredInstInfo0_48;
#line 1351 "float_regs.m"
    else
#line 1352 "float_regs.m"
      {
#line 1352 "float_regs.m"
        {
#line 1352 "float_regs.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.lookup_pred_inst_info\'/5", (MR_String) "no higher order inst");
#line 1352 "float_regs.m"
          return;
        }
#line 1352 "float_regs.m"
      }
#line 1170 "float_regs.m"
    transform_hlds__float_regs__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallVarPredInstInfo_32, (MR_Integer) 0)));
#line 1170 "float_regs.m"
    *transform_hlds__float_regs__ArgModes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallVarPredInstInfo_32, (MR_Integer) 1)));
#line 1170 "float_regs.m"
    transform_hlds__float_regs__MaybeArgRegs_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallVarPredInstInfo_32, (MR_Integer) 2)));
#line 1170 "float_regs.m"
    transform_hlds__float_regs__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallVarPredInstInfo_32, (MR_Integer) 3)));
#line 1387 "float_regs.m"
    if ((transform_hlds__float_regs__MaybeArgRegs_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1388 "float_regs.m"
      {
#line 1389 "float_regs.m"
        {
#line 1389 "float_regs.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[9], transform_hlds__float_regs__ArgTypes_30, transform_hlds__float_regs__ArgRegs_17);
        }
#line 1388 "float_regs.m"
      }
#line 1387 "float_regs.m"
    else
#line 1386 "float_regs.m"
      *transform_hlds__float_regs__ArgRegs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__MaybeArgRegs_63, (MR_Integer) 0)));
#line 1262 "float_regs.m"
    {
#line 1262 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_36, &transform_hlds__float_regs__ModuleInfo_83);
    }
#line 1263 "float_regs.m"
    {
#line 1263 "float_regs.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_83, *transform_hlds__float_regs__ArgModes_16, &transform_hlds__float_regs__InitialInsts_84);
    }
#line 1264 "float_regs.m"
    {
#line 1264 "float_regs.m"
      transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_19, transform_hlds__float_regs__Context_20, transform_hlds__float_regs__ArgTypes_30, transform_hlds__float_regs__InitialInsts_84, transform_hlds__float_regs__Vars0_14, transform_hlds__float_regs__Vars_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__float_regs__WrapGoals_18, transform_hlds__float_regs__STATE_VARIABLE_Info_0_36, transform_hlds__float_regs__STATE_VARIABLE_Info_37, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_38, transform_hlds__float_regs__STATE_VARIABLE_Specs_39);
#line 1264 "float_regs.m"
      return;
    }
#line 1161 "float_regs.m"
  }
#line 1154 "float_regs.m"
}

#line 1125 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_13,
#line 1125 "float_regs.m"
  MR_Integer transform_hlds__float_regs__ProcId_14,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__Vars0_15,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_16,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__WrapGoals_17,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__MissingProc_18,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_19,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_20,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_30,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_31,
#line 1125 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_32,
#line 1125 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_33)
#line 1125 "float_regs.m"
{
#line 1131 "float_regs.m"
  {
#line 1131 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1131 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_23;
#line 1131 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInfo_24;
#line 1131 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcTable_25;
#line 1141 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcInfo_26;
#line 1135 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv0_ProcInfo_26;

#line 1132 "float_regs.m"
    {
#line 1132 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_30, &transform_hlds__float_regs__ModuleInfo_23);
    }
#line 1133 "float_regs.m"
    {
#line 1133 "float_regs.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__ModuleInfo_23, transform_hlds__float_regs__PredId_13, &transform_hlds__float_regs__PredInfo_24);
    }
#line 1134 "float_regs.m"
    {
#line 1134 "float_regs.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__float_regs__PredInfo_24, &transform_hlds__float_regs__ProcTable_25);
    }
#line 1135 "float_regs.m"
    {
#line 1135 "float_regs.m"
      transform_hlds__float_regs__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__float_regs__ProcTable_25, ((MR_Box) (transform_hlds__float_regs__ProcId_14)), &transform_hlds__float_regs__conv0_ProcInfo_26);
    }
#line 1135 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1135 "float_regs.m"
      {
#line 1135 "float_regs.m"
        transform_hlds__float_regs__ProcInfo_26 = ((MR_Word) transform_hlds__float_regs__conv0_ProcInfo_26);
#line 1135 "float_regs.m"
        transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1135 "float_regs.m"
      }
#line 1141 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1136 "float_regs.m"
      {
#line 1136 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgTypes_27;
#line 1136 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgModes_28;
#line 1136 "float_regs.m"
        MR_Word transform_hlds__float_regs__ModuleInfo_54;
#line 1136 "float_regs.m"
        MR_Word transform_hlds__float_regs__InitialInsts_55;

#line 1136 "float_regs.m"
        {
#line 1136 "float_regs.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_24, &transform_hlds__float_regs__ArgTypes_27);
        }
#line 1137 "float_regs.m"
        {
#line 1137 "float_regs.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo_26, &transform_hlds__float_regs__ArgModes_28);
        }
#line 1262 "float_regs.m"
        {
#line 1262 "float_regs.m"
          transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_30, &transform_hlds__float_regs__ModuleInfo_54);
        }
#line 1263 "float_regs.m"
        {
#line 1263 "float_regs.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_54, transform_hlds__float_regs__ArgModes_28, &transform_hlds__float_regs__InitialInsts_55);
        }
#line 1264 "float_regs.m"
        {
#line 1264 "float_regs.m"
          transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_19, transform_hlds__float_regs__Context_20, transform_hlds__float_regs__ArgTypes_27, transform_hlds__float_regs__InitialInsts_55, transform_hlds__float_regs__Vars0_15, transform_hlds__float_regs__Vars_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__float_regs__WrapGoals_17, transform_hlds__float_regs__STATE_VARIABLE_Info_0_30, transform_hlds__float_regs__STATE_VARIABLE_Info_31, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_32, transform_hlds__float_regs__STATE_VARIABLE_Specs_33);
        }
#line 1140 "float_regs.m"
        *transform_hlds__float_regs__MissingProc_18 = (MR_Integer) 0;
#line 1136 "float_regs.m"
      }
#line 1141 "float_regs.m"
    else
#line 1148 "float_regs.m"
      {
#line 1149 "float_regs.m"
        *transform_hlds__float_regs__Vars_16 = transform_hlds__float_regs__Vars0_15;
#line 1150 "float_regs.m"
        *transform_hlds__float_regs__WrapGoals_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1151 "float_regs.m"
        *transform_hlds__float_regs__MissingProc_18 = (MR_Integer) 1;
#line 1151 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_33 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_32;
#line 1151 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_31 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_30;
#line 1148 "float_regs.m"
      }
#line 1131 "float_regs.m"
  }
#line 1125 "float_regs.m"
}

#line 1093 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_10,
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalExpr0_11,
#line 1093 "float_regs.m"
  MR_Word * transform_hlds__float_regs__GoalExpr_12,
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1093 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_14,
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_31,
#line 1093 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_32,
#line 1093 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_33,
#line 1093 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_34)
#line 1093 "float_regs.m"
{
#line 1099 "float_regs.m"
  {
#line 1099 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_11, (MR_Integer) 1)));
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__Cond0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_11, (MR_Integer) 2)));
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__Then0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_11, (MR_Integer) 3)));
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__Else0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_11, (MR_Integer) 4)));
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__Cond_21;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMapCond_22;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__Then1_23;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMapThen_24;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__Else1_25;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMapElse_26;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__CommonDelta_27;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__Then_29;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__Else_30;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_35_35;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_37_37;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_39_39;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_41_41;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_42_42;
#line 1099 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_43_43;

#line 560 "float_regs.m"
    {
#line 560 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap0_13);
    }
#line 562 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 561 "float_regs.m"
      {
#line 561 "float_regs.m"
        transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Cond0_18, &transform_hlds__float_regs__Cond_21, transform_hlds__float_regs__InstMap0_13, &transform_hlds__float_regs__InstMapCond_22, transform_hlds__float_regs__STATE_VARIABLE_Info_0_31, &transform_hlds__float_regs__STATE_VARIABLE_Info_35_35, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_33, &transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36);
      }
#line 562 "float_regs.m"
    else
#line 563 "float_regs.m"
      {
#line 563 "float_regs.m"
        transform_hlds__float_regs__Cond_21 = transform_hlds__float_regs__Cond0_18;
#line 563 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_33;
#line 563 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Info_35_35 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_31;
#line 563 "float_regs.m"
        transform_hlds__float_regs__InstMapCond_22 = transform_hlds__float_regs__InstMap0_13;
#line 563 "float_regs.m"
      }
#line 560 "float_regs.m"
    {
#line 560 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMapCond_22);
    }
#line 562 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 561 "float_regs.m"
      {
#line 561 "float_regs.m"
        transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Then0_19, &transform_hlds__float_regs__Then1_23, transform_hlds__float_regs__InstMapCond_22, &transform_hlds__float_regs__InstMapThen_24, transform_hlds__float_regs__STATE_VARIABLE_Info_35_35, &transform_hlds__float_regs__STATE_VARIABLE_Info_37_37, transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36, &transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38);
      }
#line 562 "float_regs.m"
    else
#line 563 "float_regs.m"
      {
#line 563 "float_regs.m"
        transform_hlds__float_regs__Then1_23 = transform_hlds__float_regs__Then0_19;
#line 563 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38 = transform_hlds__float_regs__STATE_VARIABLE_Specs_36_36;
#line 563 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Info_37_37 = transform_hlds__float_regs__STATE_VARIABLE_Info_35_35;
#line 563 "float_regs.m"
        transform_hlds__float_regs__InstMapThen_24 = transform_hlds__float_regs__InstMapCond_22;
#line 563 "float_regs.m"
      }
#line 560 "float_regs.m"
    {
#line 560 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap0_13);
    }
#line 562 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 561 "float_regs.m"
      {
#line 561 "float_regs.m"
        transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Else0_20, &transform_hlds__float_regs__Else1_25, transform_hlds__float_regs__InstMap0_13, &transform_hlds__float_regs__InstMapElse_26, transform_hlds__float_regs__STATE_VARIABLE_Info_37_37, &transform_hlds__float_regs__STATE_VARIABLE_Info_39_39, transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38, &transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40);
      }
#line 562 "float_regs.m"
    else
#line 563 "float_regs.m"
      {
#line 563 "float_regs.m"
        transform_hlds__float_regs__Else1_25 = transform_hlds__float_regs__Else0_20;
#line 563 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40 = transform_hlds__float_regs__STATE_VARIABLE_Specs_38_38;
#line 563 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Info_39_39 = transform_hlds__float_regs__STATE_VARIABLE_Info_37_37;
#line 563 "float_regs.m"
        transform_hlds__float_regs__InstMapElse_26 = transform_hlds__float_regs__InstMap0_13;
#line 563 "float_regs.m"
      }
#line 1108 "float_regs.m"
    {
#line 1108 "float_regs.m"
      transform_hlds__float_regs__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_43_43, 0) = ((MR_Box) (transform_hlds__float_regs__InstMapElse_26));
#line 1108 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1108 "float_regs.m"
    }
#line 1108 "float_regs.m"
    {
#line 1108 "float_regs.m"
      transform_hlds__float_regs__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_41_41, 0) = ((MR_Box) (transform_hlds__float_regs__InstMapThen_24));
#line 1108 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_41_41, 1) = ((MR_Box) (transform_hlds__float_regs__V_43_43));
#line 1108 "float_regs.m"
    }
#line 1108 "float_regs.m"
    {
#line 1108 "float_regs.m"
      transform_hlds__float_regs__common_instmap_delta_6_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__NonLocals_10, transform_hlds__float_regs__V_41_41, &transform_hlds__float_regs__CommonDelta_27, transform_hlds__float_regs__STATE_VARIABLE_Info_39_39, &transform_hlds__float_regs__STATE_VARIABLE_Info_42_42);
    }
#line 1110 "float_regs.m"
    {
#line 1110 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(transform_hlds__float_regs__CommonDelta_27);
    }
#line 1116 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1111 "float_regs.m"
      {
#line 1111 "float_regs.m"
        MR_Word transform_hlds__float_regs__VarsExpectInsts_28;
#line 1111 "float_regs.m"
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_45_45;
#line 1111 "float_regs.m"
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_46_46;

#line 1111 "float_regs.m"
        {
#line 1111 "float_regs.m"
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__float_regs__CommonDelta_27, &transform_hlds__float_regs__VarsExpectInsts_28);
        }
#line 1112 "float_regs.m"
        {
#line 1112 "float_regs.m"
          transform_hlds__float_regs__fix_branching_goal_8_p_0(transform_hlds__float_regs__VarsExpectInsts_28, transform_hlds__float_regs__Then1_23, transform_hlds__float_regs__InstMapThen_24, &transform_hlds__float_regs__Then_29, transform_hlds__float_regs__STATE_VARIABLE_Info_42_42, &transform_hlds__float_regs__STATE_VARIABLE_Info_45_45, transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40, &transform_hlds__float_regs__STATE_VARIABLE_Specs_46_46);
        }
#line 1114 "float_regs.m"
        {
#line 1114 "float_regs.m"
          transform_hlds__float_regs__fix_branching_goal_8_p_0(transform_hlds__float_regs__VarsExpectInsts_28, transform_hlds__float_regs__Else1_25, transform_hlds__float_regs__InstMapElse_26, &transform_hlds__float_regs__Else_30, transform_hlds__float_regs__STATE_VARIABLE_Info_45_45, transform_hlds__float_regs__STATE_VARIABLE_Info_32, transform_hlds__float_regs__STATE_VARIABLE_Specs_46_46, transform_hlds__float_regs__STATE_VARIABLE_Specs_34);
        }
#line 1111 "float_regs.m"
      }
#line 1116 "float_regs.m"
    else
#line 1117 "float_regs.m"
      {
#line 1117 "float_regs.m"
        transform_hlds__float_regs__Then_29 = transform_hlds__float_regs__Then1_23;
#line 1118 "float_regs.m"
        transform_hlds__float_regs__Else_30 = transform_hlds__float_regs__Else1_25;
#line 1118 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_34 = transform_hlds__float_regs__STATE_VARIABLE_Specs_40_40;
#line 1118 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_32 = transform_hlds__float_regs__STATE_VARIABLE_Info_42_42;
#line 1117 "float_regs.m"
      }
#line 1120 "float_regs.m"
    {
#line 1120 "float_regs.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__CommonDelta_27, transform_hlds__float_regs__InstMap_14);
    }
#line 1121 "float_regs.m"
    {
#line 1121 "float_regs.m"
      MR_Word base;
#line 1121 "float_regs.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "float_regs.m"
      *transform_hlds__float_regs__GoalExpr_12 = base;
#line 1121 "float_regs.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1121 "float_regs.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__Vars_17));
#line 1121 "float_regs.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__Cond_21));
#line 1121 "float_regs.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__float_regs__Then_29));
#line 1121 "float_regs.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__float_regs__Else_30));
#line 1121 "float_regs.m"
    }
#line 1099 "float_regs.m"
  }
#line 1093 "float_regs.m"
}

#line 1077 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_11,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type_12,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__Case0_14,
#line 1077 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Case_15,
#line 1077 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_16,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_26,
#line 1077 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_27,
#line 1077 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28,
#line 1077 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_29)
#line 1077 "float_regs.m"
{
#line 1082 "float_regs.m"
  {
#line 1082 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1082 "float_regs.m"
    MR_Word transform_hlds__float_regs__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_14, (MR_Integer) 0)));
#line 1082 "float_regs.m"
    MR_Word transform_hlds__float_regs__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_14, (MR_Integer) 1)));
#line 1082 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Case0_14, (MR_Integer) 2)));
#line 1082 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo0_22;
#line 1082 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMap1_23;
#line 1082 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo1_24;
#line 1082 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goal_25;
#line 1082 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_30_30;

#line 1084 "float_regs.m"
    {
#line 1084 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__ModuleInfo0_22);
    }
#line 1085 "float_regs.m"
    {
#line 1085 "float_regs.m"
      hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__float_regs__Var_11, transform_hlds__float_regs__Type_12, transform_hlds__float_regs__MainConsId_19, transform_hlds__float_regs__OtherConsIds_20, transform_hlds__float_regs__InstMap0_13, &transform_hlds__float_regs__InstMap1_23, transform_hlds__float_regs__ModuleInfo0_22, &transform_hlds__float_regs__ModuleInfo1_24);
    }
#line 1087 "float_regs.m"
    {
#line 1087 "float_regs.m"
      transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo1_24, transform_hlds__float_regs__STATE_VARIABLE_Info_0_26, &transform_hlds__float_regs__STATE_VARIABLE_Info_30_30);
    }
#line 560 "float_regs.m"
    {
#line 560 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap1_23);
    }
#line 562 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 561 "float_regs.m"
      {
#line 561 "float_regs.m"
        transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_21, &transform_hlds__float_regs__Goal_25, transform_hlds__float_regs__InstMap1_23, transform_hlds__float_regs__InstMap_16, transform_hlds__float_regs__STATE_VARIABLE_Info_30_30, transform_hlds__float_regs__STATE_VARIABLE_Info_27, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28, transform_hlds__float_regs__STATE_VARIABLE_Specs_29);
      }
#line 562 "float_regs.m"
    else
#line 563 "float_regs.m"
      {
#line 563 "float_regs.m"
        transform_hlds__float_regs__Goal_25 = transform_hlds__float_regs__Goal0_21;
#line 563 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_29 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_28;
#line 563 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_27 = transform_hlds__float_regs__STATE_VARIABLE_Info_30_30;
#line 563 "float_regs.m"
        *transform_hlds__float_regs__InstMap_16 = transform_hlds__float_regs__InstMap1_23;
#line 563 "float_regs.m"
      }
#line 1089 "float_regs.m"
    {
#line 1089 "float_regs.m"
      MR_Word base;
#line 1089 "float_regs.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "float_regs.m"
      *transform_hlds__float_regs__Case_15 = base;
#line 1089 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__MainConsId_19));
#line 1089 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__OtherConsIds_20));
#line 1089 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__float_regs__Goal_25));
#line 1089 "float_regs.m"
    }
#line 1082 "float_regs.m"
  }
#line 1077 "float_regs.m"
}

#line 1070 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3(
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 1070 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 1070 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
#line 1070 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
#line 1070 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_7)
#line 1070 "float_regs.m"
{
#line 1070 "float_regs.m"
  {
#line 1070 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1070 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv9_Case_12;
#line 1070 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_20;
#line 1070 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_22;

#line 1070 "float_regs.m"
    {
#line 1070 "float_regs.m"
      transform_hlds__float_regs__fix_case_goal_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv9_Case_12, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_20, ((MR_Word) transform_hlds__float_regs__wrapper_arg_6), &transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_22);
    }
#line 1070 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv9_Case_12));
#line 1070 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_20));
#line 1070 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_7 = ((MR_Box) (transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_22));
#line 1070 "float_regs.m"
  }
#line 1070 "float_regs.m"
}

#line 1458 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2(
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1458 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 1458 "float_regs.m"
{
#line 1458 "float_regs.m"
  {
#line 1458 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1458 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1458 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv6_HeadVar__4_24;

#line 1458 "float_regs.m"
    {
#line 1458 "float_regs.m"
      transform_hlds__float_regs__succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1458__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv6_HeadVar__4_24);
    }
#line 1458 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1458 "float_regs.m"
      {
#line 1458 "float_regs.m"
        *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv6_HeadVar__4_24));
#line 1458 "float_regs.m"
        transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1458 "float_regs.m"
      }
#line 1458 "float_regs.m"
    return transform_hlds__float_regs__succeeded;
#line 1458 "float_regs.m"
  }
#line 1458 "float_regs.m"
}

#line 1065 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1(
#line 1065 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1065 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1065 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 1065 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 1065 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 1065 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
#line 1065 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
#line 1065 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_7)
#line 1065 "float_regs.m"
{
#line 1065 "float_regs.m"
  {
#line 1065 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1065 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv3_Case_15;
#line 1065 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv2_InstMap_16;
#line 1065 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_27;
#line 1065 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_29;

#line 1065 "float_regs.m"
    {
#line 1065 "float_regs.m"
      transform_hlds__float_regs__insert_reg_wrappers_case_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv3_Case_15, &transform_hlds__float_regs__conv2_InstMap_16, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_27, ((MR_Word) transform_hlds__float_regs__wrapper_arg_6), &transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_29);
    }
#line 1065 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv3_Case_15));
#line 1065 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv2_InstMap_16));
#line 1065 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_27));
#line 1065 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_7 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_29));
#line 1065 "float_regs.m"
  }
#line 1065 "float_regs.m"
}

#line 1056 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_11,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__Cases0_12,
#line 1056 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Cases_13,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_14,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_15,
#line 1056 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_16,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_25,
#line 1056 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_26,
#line 1056 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_27,
#line 1056 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_28)
#line 1056 "float_regs.m"
{
#line 1062 "float_regs.m"
  {
#line 1062 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_43_43;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_44_44;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_45_45;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeInfo_46_46;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes_19;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__Type_20;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__Cases1_21;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMaps1_22;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__CommonDelta_23;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_29_29;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_30_30;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_31_31;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_32_32;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMapDeltas_63;
#line 1062 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_69_69;
#line 1065 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_30_30;
#line 1065 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_31_31;

#line 1063 "float_regs.m"
    {
#line 1063 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_25, &transform_hlds__float_regs__VarTypes_19);
    }
#line 1064 "float_regs.m"
    {
#line 1064 "float_regs.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_19, transform_hlds__float_regs__Var_11, &transform_hlds__float_regs__Type_20);
    }
#line 1065 "float_regs.m"
    {
#line 1065 "float_regs.m"
      transform_hlds__float_regs__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_10[0]));
#line 1065 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_1));
#line 1065 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1065 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 3) = ((MR_Box) (transform_hlds__float_regs__Var_11));
#line 1065 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 4) = ((MR_Box) (transform_hlds__float_regs__Type_20));
#line 1065 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 5) = ((MR_Box) (transform_hlds__float_regs__InstMap0_15));
#line 1065 "float_regs.m"
    }
#line 6272 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 6274 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_44_44 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
#line 6276 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_45_45 = (MR_Word) &transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0;
#line 6278 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeInfo_46_46 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[0];
#line 1065 "float_regs.m"
    {
#line 1065 "float_regs.m"
      mercury__list__map2_foldl2_8_p_1(transform_hlds__float_regs__TypeCtorInfo_43_43, transform_hlds__float_regs__TypeCtorInfo_43_43, transform_hlds__float_regs__TypeCtorInfo_44_44, transform_hlds__float_regs__TypeCtorInfo_45_45, transform_hlds__float_regs__TypeInfo_46_46, transform_hlds__float_regs__V_29_29, transform_hlds__float_regs__Cases0_12, &transform_hlds__float_regs__Cases1_21, &transform_hlds__float_regs__InstMaps1_22, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_0_25)), &transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_30_30, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_0_27)), &transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_31_31);
    }
#line 1065 "float_regs.m"
    transform_hlds__float_regs__STATE_VARIABLE_Info_30_30 = ((MR_Word) transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_30_30);
#line 1065 "float_regs.m"
    transform_hlds__float_regs__STATE_VARIABLE_Specs_31_31 = ((MR_Word) transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_31_31);
#line 1458 "float_regs.m"
    {
#line 1458 "float_regs.m"
      transform_hlds__float_regs__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_69_69, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_69_69, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_2));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_69_69, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap0_15));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_69_69, 4) = ((MR_Box) (transform_hlds__float_regs__NonLocals_14));
#line 1458 "float_regs.m"
    }
#line 1458 "float_regs.m"
    {
#line 1458 "float_regs.m"
      mercury__list__filter_map_3_p_0((MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, transform_hlds__float_regs__V_69_69, transform_hlds__float_regs__InstMaps1_22, &transform_hlds__float_regs__InstMapDeltas_63);
    }
#line 1466 "float_regs.m"
    if ((transform_hlds__float_regs__InstMapDeltas_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1464 "float_regs.m"
      {
#line 1465 "float_regs.m"
        {
#line 1465 "float_regs.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&transform_hlds__float_regs__CommonDelta_23);
        }
#line 1465 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Info_32_32 = transform_hlds__float_regs__STATE_VARIABLE_Info_30_30;
#line 1464 "float_regs.m"
      }
#line 1466 "float_regs.m"
    else
#line 1467 "float_regs.m"
      {
#line 1467 "float_regs.m"
        MR_Word transform_hlds__float_regs__VarTypes_66;
#line 1467 "float_regs.m"
        MR_Word transform_hlds__float_regs__ModuleInfo0_67;
#line 1467 "float_regs.m"
        MR_Word transform_hlds__float_regs__ModuleInfo_68;

#line 1468 "float_regs.m"
        {
#line 1468 "float_regs.m"
          transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_30_30, &transform_hlds__float_regs__VarTypes_66);
        }
#line 1469 "float_regs.m"
        {
#line 1469 "float_regs.m"
          transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_30_30, &transform_hlds__float_regs__ModuleInfo0_67);
        }
#line 1470 "float_regs.m"
        {
#line 1470 "float_regs.m"
          hlds__instmap__merge_instmap_deltas_7_p_0(transform_hlds__float_regs__InstMap0_15, transform_hlds__float_regs__NonLocals_14, transform_hlds__float_regs__VarTypes_66, transform_hlds__float_regs__InstMapDeltas_63, &transform_hlds__float_regs__CommonDelta_23, transform_hlds__float_regs__ModuleInfo0_67, &transform_hlds__float_regs__ModuleInfo_68);
        }
#line 1472 "float_regs.m"
        {
#line 1472 "float_regs.m"
          transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_68, transform_hlds__float_regs__STATE_VARIABLE_Info_30_30, &transform_hlds__float_regs__STATE_VARIABLE_Info_32_32);
        }
#line 1467 "float_regs.m"
      }
#line 1068 "float_regs.m"
    {
#line 1068 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(transform_hlds__float_regs__CommonDelta_23);
    }
#line 1072 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1069 "float_regs.m"
      {
#line 1069 "float_regs.m"
        MR_Word transform_hlds__float_regs__VarsExpectInsts_24;
#line 1069 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_33_33;
#line 1070 "float_regs.m"
        MR_Box transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_26;
#line 1070 "float_regs.m"
        MR_Box transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_28;

#line 1069 "float_regs.m"
        {
#line 1069 "float_regs.m"
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__float_regs__CommonDelta_23, &transform_hlds__float_regs__VarsExpectInsts_24);
        }
#line 1070 "float_regs.m"
        {
#line 1070 "float_regs.m"
          transform_hlds__float_regs__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_33_33, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_9[3]));
#line 1070 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_33_33, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0_3));
#line 1070 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1070 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_33_33, 3) = ((MR_Box) (transform_hlds__float_regs__VarsExpectInsts_24));
#line 1070 "float_regs.m"
        }
#line 1070 "float_regs.m"
        {
#line 1070 "float_regs.m"
          mercury__list__map_corresponding_foldl2_8_p_0(transform_hlds__float_regs__TypeCtorInfo_43_43, transform_hlds__float_regs__TypeCtorInfo_44_44, transform_hlds__float_regs__TypeCtorInfo_43_43, transform_hlds__float_regs__TypeCtorInfo_45_45, transform_hlds__float_regs__TypeInfo_46_46, transform_hlds__float_regs__V_33_33, transform_hlds__float_regs__Cases1_21, transform_hlds__float_regs__InstMaps1_22, transform_hlds__float_regs__Cases_13, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_32_32)), &transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_26, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_31_31)), &transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_28);
        }
#line 1070 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_26 = ((MR_Word) transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_26);
#line 1070 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_28 = ((MR_Word) transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_28);
#line 1069 "float_regs.m"
      }
#line 1072 "float_regs.m"
    else
#line 1073 "float_regs.m"
      {
#line 1073 "float_regs.m"
        *transform_hlds__float_regs__Cases_13 = transform_hlds__float_regs__Cases1_21;
#line 1073 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_28 = transform_hlds__float_regs__STATE_VARIABLE_Specs_31_31;
#line 1073 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_26 = transform_hlds__float_regs__STATE_VARIABLE_Info_32_32;
#line 1073 "float_regs.m"
      }
#line 1075 "float_regs.m"
    {
#line 1075 "float_regs.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__float_regs__InstMap0_15, transform_hlds__float_regs__CommonDelta_23, transform_hlds__float_regs__InstMap_16);
#line 1075 "float_regs.m"
      return;
    }
#line 1062 "float_regs.m"
  }
#line 1056 "float_regs.m"
}

#line 1046 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(
#line 1046 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_9,
#line 1046 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_10,
#line 1046 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_11,
#line 1046 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_12,
#line 1046 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_15,
#line 1046 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_16,
#line 1046 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_17,
#line 1046 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_18)
#line 1046 "float_regs.m"
{
#line 562 "float_regs.m"
  {
#line 562 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 560 "float_regs.m"
    {
#line 560 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap0_9);
    }
#line 562 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 561 "float_regs.m"
      {
#line 561 "float_regs.m"
        transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_10, transform_hlds__float_regs__Goal_11, transform_hlds__float_regs__InstMap0_9, transform_hlds__float_regs__InstMap_12, transform_hlds__float_regs__STATE_VARIABLE_Info_0_15, transform_hlds__float_regs__STATE_VARIABLE_Info_16, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_17, transform_hlds__float_regs__STATE_VARIABLE_Specs_18);
#line 561 "float_regs.m"
        return;
      }
#line 562 "float_regs.m"
    else
#line 563 "float_regs.m"
      {
#line 563 "float_regs.m"
        *transform_hlds__float_regs__Goal_11 = transform_hlds__float_regs__Goal0_10;
#line 563 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_18 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_17;
#line 563 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_16 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_15;
#line 563 "float_regs.m"
        *transform_hlds__float_regs__InstMap_12 = transform_hlds__float_regs__InstMap0_9;
#line 563 "float_regs.m"
      }
#line 562 "float_regs.m"
  }
#line 1046 "float_regs.m"
}

#line 1039 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3(
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 1039 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 1039 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
#line 1039 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
#line 1039 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_7)
#line 1039 "float_regs.m"
{
#line 1039 "float_regs.m"
  {
#line 1039 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1039 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv9_Goal_12;
#line 1039 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_24;
#line 1039 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_26;

#line 1039 "float_regs.m"
    {
#line 1039 "float_regs.m"
      transform_hlds__float_regs__fix_branching_goal_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv9_Goal_12, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_24, ((MR_Word) transform_hlds__float_regs__wrapper_arg_6), &transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_26);
    }
#line 1039 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv9_Goal_12));
#line 1039 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv8_STATE_VARIABLE_Info_24));
#line 1039 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_7 = ((MR_Box) (transform_hlds__float_regs__conv7_STATE_VARIABLE_Specs_26));
#line 1039 "float_regs.m"
  }
#line 1039 "float_regs.m"
}

#line 1458 "float_regs.m"
static MR_bool MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2(
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1458 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1458 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 1458 "float_regs.m"
{
#line 1458 "float_regs.m"
  {
#line 1458 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1458 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1458 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv6_HeadVar__4_24;

#line 1458 "float_regs.m"
    {
#line 1458 "float_regs.m"
      transform_hlds__float_regs__succeeded = transform_hlds__float_regs__IntroducedFrom__pred__common_instmap_delta__1458__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv6_HeadVar__4_24);
    }
#line 1458 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1458 "float_regs.m"
      {
#line 1458 "float_regs.m"
        *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv6_HeadVar__4_24));
#line 1458 "float_regs.m"
        transform_hlds__float_regs__succeeded = MR_TRUE;
#line 1458 "float_regs.m"
      }
#line 1458 "float_regs.m"
    return transform_hlds__float_regs__succeeded;
#line 1458 "float_regs.m"
  }
#line 1458 "float_regs.m"
}

#line 1034 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1(
#line 1034 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 1034 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 1034 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 1034 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 1034 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 1034 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5,
#line 1034 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_6,
#line 1034 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_7)
#line 1034 "float_regs.m"
{
#line 1034 "float_regs.m"
  {
#line 1034 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 1034 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv3_Goal_11;
#line 1034 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv2_InstMap_12;
#line 1034 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_16;
#line 1034 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_18;

#line 1034 "float_regs.m"
    {
#line 1034 "float_regs.m"
      transform_hlds__float_regs__insert_reg_wrappers_disjunct_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv3_Goal_11, &transform_hlds__float_regs__conv2_InstMap_12, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_16, ((MR_Word) transform_hlds__float_regs__wrapper_arg_6), &transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_18);
    }
#line 1034 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv3_Goal_11));
#line 1034 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv2_InstMap_12));
#line 1034 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_16));
#line 1034 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_7 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_18));
#line 1034 "float_regs.m"
  }
#line 1034 "float_regs.m"
}

#line 1027 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goals0_10,
#line 1027 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goals_11,
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__NonLocals_12,
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_13,
#line 1027 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_14,
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_21,
#line 1027 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_22,
#line 1027 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_23,
#line 1027 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_24)
#line 1027 "float_regs.m"
{
#line 1033 "float_regs.m"
  {
#line 1033 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_39_39;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_40_40;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_41_41;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeInfo_42_42;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goals1_17;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMaps1_18;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__CommonDelta_19;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_25_25;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_26_26;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_28_28;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMapDeltas_59;
#line 1033 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_65_65;
#line 1034 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_26_26;
#line 1034 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_27_27;

#line 1034 "float_regs.m"
    {
#line 1034 "float_regs.m"
      transform_hlds__float_regs__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_25_25, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_9[1]));
#line 1034 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_25_25, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_1));
#line 1034 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1034 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_25_25, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap0_13));
#line 1034 "float_regs.m"
    }
#line 6701 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 6703 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_40_40 = (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0;
#line 6705 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_41_41 = (MR_Word) &transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0;
#line 6707 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeInfo_42_42 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[0];
#line 1034 "float_regs.m"
    {
#line 1034 "float_regs.m"
      mercury__list__map2_foldl2_8_p_1(transform_hlds__float_regs__TypeCtorInfo_39_39, transform_hlds__float_regs__TypeCtorInfo_39_39, transform_hlds__float_regs__TypeCtorInfo_40_40, transform_hlds__float_regs__TypeCtorInfo_41_41, transform_hlds__float_regs__TypeInfo_42_42, transform_hlds__float_regs__V_25_25, transform_hlds__float_regs__Goals0_10, &transform_hlds__float_regs__Goals1_17, &transform_hlds__float_regs__InstMaps1_18, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_0_21)), &transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_26_26, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_0_23)), &transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_27_27);
    }
#line 1034 "float_regs.m"
    transform_hlds__float_regs__STATE_VARIABLE_Info_26_26 = ((MR_Word) transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_26_26);
#line 1034 "float_regs.m"
    transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27 = ((MR_Word) transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_27_27);
#line 1458 "float_regs.m"
    {
#line 1458 "float_regs.m"
      transform_hlds__float_regs__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_65_65, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[5]));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_65_65, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_2));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_65_65, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap0_13));
#line 1458 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_65_65, 4) = ((MR_Box) (transform_hlds__float_regs__NonLocals_12));
#line 1458 "float_regs.m"
    }
#line 1458 "float_regs.m"
    {
#line 1458 "float_regs.m"
      mercury__list__filter_map_3_p_0((MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0, transform_hlds__float_regs__V_65_65, transform_hlds__float_regs__InstMaps1_18, &transform_hlds__float_regs__InstMapDeltas_59);
    }
#line 1466 "float_regs.m"
    if ((transform_hlds__float_regs__InstMapDeltas_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1464 "float_regs.m"
      {
#line 1465 "float_regs.m"
        {
#line 1465 "float_regs.m"
          hlds__instmap__instmap_delta_init_unreachable_1_p_0(&transform_hlds__float_regs__CommonDelta_19);
        }
#line 1465 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Info_28_28 = transform_hlds__float_regs__STATE_VARIABLE_Info_26_26;
#line 1464 "float_regs.m"
      }
#line 1466 "float_regs.m"
    else
#line 1467 "float_regs.m"
      {
#line 1467 "float_regs.m"
        MR_Word transform_hlds__float_regs__VarTypes_62;
#line 1467 "float_regs.m"
        MR_Word transform_hlds__float_regs__ModuleInfo0_63;
#line 1467 "float_regs.m"
        MR_Word transform_hlds__float_regs__ModuleInfo_64;

#line 1468 "float_regs.m"
        {
#line 1468 "float_regs.m"
          transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, &transform_hlds__float_regs__VarTypes_62);
        }
#line 1469 "float_regs.m"
        {
#line 1469 "float_regs.m"
          transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, &transform_hlds__float_regs__ModuleInfo0_63);
        }
#line 1470 "float_regs.m"
        {
#line 1470 "float_regs.m"
          hlds__instmap__merge_instmap_deltas_7_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__NonLocals_12, transform_hlds__float_regs__VarTypes_62, transform_hlds__float_regs__InstMapDeltas_59, &transform_hlds__float_regs__CommonDelta_19, transform_hlds__float_regs__ModuleInfo0_63, &transform_hlds__float_regs__ModuleInfo_64);
        }
#line 1472 "float_regs.m"
        {
#line 1472 "float_regs.m"
          transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_64, transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, &transform_hlds__float_regs__STATE_VARIABLE_Info_28_28);
        }
#line 1467 "float_regs.m"
      }
#line 1037 "float_regs.m"
    {
#line 1037 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(transform_hlds__float_regs__CommonDelta_19);
    }
#line 1041 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1038 "float_regs.m"
      {
#line 1038 "float_regs.m"
        MR_Word transform_hlds__float_regs__VarsExpectInsts_20;
#line 1038 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_29_29;
#line 1039 "float_regs.m"
        MR_Box transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_22;
#line 1039 "float_regs.m"
        MR_Box transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_24;

#line 1038 "float_regs.m"
        {
#line 1038 "float_regs.m"
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(transform_hlds__float_regs__CommonDelta_19, &transform_hlds__float_regs__VarsExpectInsts_20);
        }
#line 1039 "float_regs.m"
        {
#line 1039 "float_regs.m"
          transform_hlds__float_regs__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_9[2]));
#line 1039 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0_3));
#line 1039 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1039 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_29_29, 3) = ((MR_Box) (transform_hlds__float_regs__VarsExpectInsts_20));
#line 1039 "float_regs.m"
        }
#line 1039 "float_regs.m"
        {
#line 1039 "float_regs.m"
          mercury__list__map_corresponding_foldl2_8_p_0(transform_hlds__float_regs__TypeCtorInfo_39_39, transform_hlds__float_regs__TypeCtorInfo_40_40, transform_hlds__float_regs__TypeCtorInfo_39_39, transform_hlds__float_regs__TypeCtorInfo_41_41, transform_hlds__float_regs__TypeInfo_42_42, transform_hlds__float_regs__V_29_29, transform_hlds__float_regs__Goals1_17, transform_hlds__float_regs__InstMaps1_18, transform_hlds__float_regs__Goals_11, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_28_28)), &transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_22, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27)), &transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_24);
        }
#line 1039 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_22 = ((MR_Word) transform_hlds__float_regs__conv11_STATE_VARIABLE_Info_22);
#line 1039 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_24 = ((MR_Word) transform_hlds__float_regs__conv10_STATE_VARIABLE_Specs_24);
#line 1038 "float_regs.m"
      }
#line 1041 "float_regs.m"
    else
#line 1042 "float_regs.m"
      {
#line 1042 "float_regs.m"
        *transform_hlds__float_regs__Goals_11 = transform_hlds__float_regs__Goals1_17;
#line 1042 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_24 = transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27;
#line 1042 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_22 = transform_hlds__float_regs__STATE_VARIABLE_Info_28_28;
#line 1042 "float_regs.m"
      }
#line 1044 "float_regs.m"
    {
#line 1044 "float_regs.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__float_regs__InstMap0_13, transform_hlds__float_regs__CommonDelta_19, transform_hlds__float_regs__InstMap_14);
#line 1044 "float_regs.m"
      return;
    }
#line 1033 "float_regs.m"
  }
#line 1027 "float_regs.m"
}

#line 1013 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(
#line 1013 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
#line 1013 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
#line 1013 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3,
#line 1013 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_4,
#line 1013 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_5,
#line 1013 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_6,
#line 1013 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7,
#line 1013 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_8)
#line 1013 "float_regs.m"
{
#line 1017 "float_regs.m"
  {
#line 1017 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 1017 "float_regs.m"
    if ((transform_hlds__float_regs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "float_regs.m"
      {
#line 1017 "float_regs.m"
        *transform_hlds__float_regs__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_8 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7;
#line 1017 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_6 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_5;
#line 1017 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_InstMap_4 = transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3;
#line 1017 "float_regs.m"
      }
#line 1017 "float_regs.m"
    else
#line 1018 "float_regs.m"
      {
#line 1018 "float_regs.m"
        MR_Word transform_hlds__float_regs__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 0)));
#line 1018 "float_regs.m"
        MR_Word transform_hlds__float_regs__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 1)));
#line 1018 "float_regs.m"
        MR_Word transform_hlds__float_regs__Goal1_24;
#line 1018 "float_regs.m"
        MR_Word transform_hlds__float_regs__Goal1List_25;
#line 1018 "float_regs.m"
        MR_Word transform_hlds__float_regs__Goals1_26;
#line 1018 "float_regs.m"
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_33_33;
#line 1018 "float_regs.m"
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_34_34;
#line 1018 "float_regs.m"
        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_35_35;

#line 560 "float_regs.m"
        {
#line 560 "float_regs.m"
          transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3);
        }
#line 562 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 561 "float_regs.m"
          {
#line 561 "float_regs.m"
            transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_18, &transform_hlds__float_regs__Goal1_24, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3, &transform_hlds__float_regs__STATE_VARIABLE_InstMap_33_33, transform_hlds__float_regs__STATE_VARIABLE_Info_0_5, &transform_hlds__float_regs__STATE_VARIABLE_Info_34_34, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7, &transform_hlds__float_regs__STATE_VARIABLE_Specs_35_35);
          }
#line 562 "float_regs.m"
        else
#line 563 "float_regs.m"
          {
#line 563 "float_regs.m"
            transform_hlds__float_regs__Goal1_24 = transform_hlds__float_regs__Goal0_18;
#line 563 "float_regs.m"
            transform_hlds__float_regs__STATE_VARIABLE_Specs_35_35 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_7;
#line 563 "float_regs.m"
            transform_hlds__float_regs__STATE_VARIABLE_Info_34_34 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_5;
#line 563 "float_regs.m"
            transform_hlds__float_regs__STATE_VARIABLE_InstMap_33_33 = transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_3;
#line 563 "float_regs.m"
          }
#line 1021 "float_regs.m"
        {
#line 1021 "float_regs.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__float_regs__Goal1_24, &transform_hlds__float_regs__Goal1List_25);
        }
#line 1022 "float_regs.m"
        {
#line 1022 "float_regs.m"
          transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(transform_hlds__float_regs__Goals0_19, &transform_hlds__float_regs__Goals1_26, transform_hlds__float_regs__STATE_VARIABLE_InstMap_33_33, transform_hlds__float_regs__STATE_VARIABLE_InstMap_4, transform_hlds__float_regs__STATE_VARIABLE_Info_34_34, transform_hlds__float_regs__STATE_VARIABLE_Info_6, transform_hlds__float_regs__STATE_VARIABLE_Specs_35_35, transform_hlds__float_regs__STATE_VARIABLE_Specs_8);
        }
#line 1023 "float_regs.m"
        {
#line 1023 "float_regs.m"
          mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__float_regs__Goal1List_25, transform_hlds__float_regs__Goals1_26, transform_hlds__float_regs__HeadVar__2_2);
#line 1023 "float_regs.m"
          return;
        }
#line 1018 "float_regs.m"
      }
#line 1017 "float_regs.m"
  }
#line 1013 "float_regs.m"
}

#line 996 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__uni_mode_set_rhs_final_inst_4_p_0(
#line 996 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
#line 996 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgInst_6,
#line 996 "float_regs.m"
  MR_Word transform_hlds__float_regs__UniMode0_7,
#line 996 "float_regs.m"
  MR_Word * transform_hlds__float_regs__UniMode_8)
#line 996 "float_regs.m"
{
#line 999 "float_regs.m"
  {
#line 999 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 999 "float_regs.m"
    MR_Word transform_hlds__float_regs__RI_10;
#line 999 "float_regs.m"
    MR_Word transform_hlds__float_regs__LF_11;
#line 999 "float_regs.m"
    MR_Word transform_hlds__float_regs__RF_12;
#line 999 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UniMode0_7, (MR_Integer) 0)));
#line 999 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UniMode0_7, (MR_Integer) 1)));
#line 1000 "float_regs.m"
    MR_Word transform_hlds__float_regs__LI_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_13_13, (MR_Integer) 0)));

#line 1000 "float_regs.m"
    transform_hlds__float_regs__RI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_13_13, (MR_Integer) 1)));
#line 1000 "float_regs.m"
    transform_hlds__float_regs__LF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_14_14, (MR_Integer) 0)));
#line 1000 "float_regs.m"
    transform_hlds__float_regs__RF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_14_14, (MR_Integer) 1)));
#line 1003 "float_regs.m"
    {
#line 1003 "float_regs.m"
      transform_hlds__float_regs__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(transform_hlds__float_regs__ModuleInfo_5, transform_hlds__float_regs__RI_10);
    }
#line 1003 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1004 "float_regs.m"
      {
#line 1004 "float_regs.m"
        transform_hlds__float_regs__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(transform_hlds__float_regs__ModuleInfo_5, transform_hlds__float_regs__RF_12);
      }
#line 1007 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 1006 "float_regs.m"
      {
#line 1006 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_16_16;

#line 1006 "float_regs.m"
        {
#line 1006 "float_regs.m"
          transform_hlds__float_regs__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_16_16, 0) = ((MR_Box) (transform_hlds__float_regs__LF_11));
#line 1006 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_16_16, 1) = ((MR_Box) (transform_hlds__float_regs__ArgInst_6));
#line 1006 "float_regs.m"
        }
#line 1006 "float_regs.m"
        {
#line 1006 "float_regs.m"
          MR_Word base;
#line 1006 "float_regs.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "float_regs.m"
          *transform_hlds__float_regs__UniMode_8 = base;
#line 1006 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__V_13_13));
#line 1006 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__V_16_16));
#line 1006 "float_regs.m"
        }
#line 1006 "float_regs.m"
      }
#line 1007 "float_regs.m"
    else
#line 1008 "float_regs.m"
      *transform_hlds__float_regs__UniMode_8 = transform_hlds__float_regs__UniMode0_7;
#line 999 "float_regs.m"
  }
#line 996 "float_regs.m"
}

#line 984 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_arg_4_p_0(
#line 984 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap_5,
#line 984 "float_regs.m"
  MR_Word transform_hlds__float_regs__Var_6,
#line 984 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgInst0_7,
#line 984 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgInst_8)
#line 984 "float_regs.m"
{
#line 987 "float_regs.m"
  {
#line 987 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 987 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarInst_9;
#line 990 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_10_10;

#line 988 "float_regs.m"
    {
#line 988 "float_regs.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__InstMap_5, transform_hlds__float_regs__Var_6, &transform_hlds__float_regs__VarInst_9);
    }
#line 990 "float_regs.m"
    {
#line 990 "float_regs.m"
      transform_hlds__float_regs__V_10_10 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 990 "float_regs.m"
    {
#line 990 "float_regs.m"
      transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__VarInst_9, transform_hlds__float_regs__V_10_10);
    }
#line 992 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 991 "float_regs.m"
      *transform_hlds__float_regs__ArgInst_8 = transform_hlds__float_regs__ArgInst0_7;
#line 992 "float_regs.m"
    else
#line 993 "float_regs.m"
      *transform_hlds__float_regs__ArgInst_8 = transform_hlds__float_regs__VarInst_9;
#line 987 "float_regs.m"
  }
#line 984 "float_regs.m"
}

#line 977 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0_1(
#line 977 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 977 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 977 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 977 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 977 "float_regs.m"
{
#line 977 "float_regs.m"
  {
#line 977 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 977 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_ArgInst_8;

#line 977 "float_regs.m"
    {
#line 977 "float_regs.m"
      transform_hlds__float_regs__rebuild_cell_bound_inst_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_ArgInst_8);
    }
#line 977 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_ArgInst_8));
#line 977 "float_regs.m"
  }
#line 977 "float_regs.m"
}

#line 971 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0(
#line 971 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap_6,
#line 971 "float_regs.m"
  MR_Word transform_hlds__float_regs__ConsId_7,
#line 971 "float_regs.m"
  MR_Word transform_hlds__float_regs__Args_8,
#line 971 "float_regs.m"
  MR_Word transform_hlds__float_regs__Inst0_9,
#line 971 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Inst_10)
#line 971 "float_regs.m"
{
#line 974 "float_regs.m"
  {
#line 974 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 974 "float_regs.m"
    MR_Word transform_hlds__float_regs__BoundConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)));
#line 974 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgInsts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));

#line 976 "float_regs.m"
    {
#line 976 "float_regs.m"
      transform_hlds__float_regs__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(transform_hlds__float_regs__ConsId_7, transform_hlds__float_regs__BoundConsId_11);
    }
#line 980 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 978 "float_regs.m"
      {
#line 978 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeCtorInfo_19_19;
#line 978 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgInsts_13;
#line 978 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_14_14;

#line 977 "float_regs.m"
        {
#line 977 "float_regs.m"
          transform_hlds__float_regs__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 977 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_14_14, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[4]));
#line 977 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_14_14, 1) = ((MR_Box) (transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0_1));
#line 977 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 977 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_14_14, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap_6));
#line 977 "float_regs.m"
        }
#line 7194 "transform_hlds.float_regs.c"
        transform_hlds__float_regs__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 977 "float_regs.m"
        {
#line 977 "float_regs.m"
          mercury__list__map_corresponding_4_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], transform_hlds__float_regs__TypeCtorInfo_19_19, transform_hlds__float_regs__TypeCtorInfo_19_19, transform_hlds__float_regs__V_14_14, transform_hlds__float_regs__Args_8, transform_hlds__float_regs__ArgInsts0_12, &transform_hlds__float_regs__ArgInsts_13);
        }
#line 979 "float_regs.m"
        {
#line 979 "float_regs.m"
          MR_Word base;
#line 979 "float_regs.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 979 "float_regs.m"
          *transform_hlds__float_regs__Inst_10 = base;
#line 979 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__BoundConsId_11));
#line 979 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__ArgInsts_13));
#line 979 "float_regs.m"
        }
#line 978 "float_regs.m"
      }
#line 980 "float_regs.m"
    else
#line 981 "float_regs.m"
      *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 974 "float_regs.m"
  }
#line 971 "float_regs.m"
}

#line 935 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_3(
#line 935 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 935 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 935 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 935 "float_regs.m"
{
#line 935 "float_regs.m"
  {
#line 935 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 935 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv2_RegType_4;

#line 935 "float_regs.m"
    {
#line 935 "float_regs.m"
      transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv2_RegType_4);
    }
#line 935 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv2_RegType_4));
#line 935 "float_regs.m"
  }
#line 935 "float_regs.m"
}

#line 919 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2(
#line 919 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 919 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 919 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 919 "float_regs.m"
{
#line 919 "float_regs.m"
  {
#line 919 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 919 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_Inst_10;

#line 919 "float_regs.m"
    {
#line 919 "float_regs.m"
      transform_hlds__float_regs__rebuild_cell_bound_inst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_Inst_10);
    }
#line 919 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_Inst_10));
#line 919 "float_regs.m"
  }
#line 919 "float_regs.m"
}

#line 935 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0_1(
#line 935 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 935 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 935 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 935 "float_regs.m"
{
#line 935 "float_regs.m"
  {
#line 935 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 935 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_RegType_4;

#line 935 "float_regs.m"
    {
#line 935 "float_regs.m"
      transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_RegType_4);
    }
#line 935 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_RegType_4));
#line 935 "float_regs.m"
  }
#line 935 "float_regs.m"
}

#line 913 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__rebuild_cell_inst_6_p_0(
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_7,
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap_8,
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__ConsId_9,
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__Args_10,
#line 913 "float_regs.m"
  MR_Word transform_hlds__float_regs__Inst0_11,
#line 913 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Inst_12)
#line 913 "float_regs.m"
{
#line 918 "float_regs.m"
  {
#line 918 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 918 "float_regs.m"
    if ((transform_hlds__float_regs__Inst0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 961 "float_regs.m"
      *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
#line 918 "float_regs.m"
    else
#line 918 "float_regs.m"
      if ((transform_hlds__float_regs__Inst0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 961 "float_regs.m"
        *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
#line 918 "float_regs.m"
      else
#line 918 "float_regs.m"
        if (((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_11)) == (MR_mktag((MR_Integer) 2))))
#line 918 "float_regs.m"
          {
#line 918 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst0_11, (MR_Integer) 1)));
#line 918 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst0_11, (MR_Integer) 0)));

#line 918 "float_regs.m"
            if ((transform_hlds__float_regs__V_150_150 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "float_regs.m"
              *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
#line 918 "float_regs.m"
            else
#line 927 "float_regs.m"
              {
#line 927 "float_regs.m"
                MR_Word transform_hlds__float_regs__PredInstInfo0_17 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__V_150_150), (MR_Integer) 1);
#line 927 "float_regs.m"
                MR_Word transform_hlds__float_regs__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_17, (MR_Integer) 0)));
#line 927 "float_regs.m"
                MR_Word transform_hlds__float_regs__Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_17, (MR_Integer) 1)));
#line 927 "float_regs.m"
                MR_Word transform_hlds__float_regs__Determinism_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_17, (MR_Integer) 3)));
#line 928 "float_regs.m"
                MR_Word transform_hlds__float_regs__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_17, (MR_Integer) 2)));
#line 945 "float_regs.m"
                MR_Word transform_hlds__float_regs__ShroudedPredProcId_22;

#line 929 "float_regs.m"
                transform_hlds__float_regs__succeeded = ((((MR_tag((MR_Word) transform_hlds__float_regs__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 929 "float_regs.m"
                if (transform_hlds__float_regs__succeeded)
#line 929 "float_regs.m"
                  {
#line 929 "float_regs.m"
                    transform_hlds__float_regs__ShroudedPredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_9, (MR_Integer) 1)));
#line 930 "float_regs.m"
                    {
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__TypeCtorInfo_67_67;
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__PredId_24;
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__PredInfo_26;
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__ArgTypes_27;
#line 930 "float_regs.m"
                      MR_Integer transform_hlds__float_regs__NumArgs_28;
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__MissingArgTypes_29;
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__ArgRegs_30;
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__PredInstInfo_31;
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__V_56_56;
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__V_58_58;
#line 930 "float_regs.m"
                      MR_Word transform_hlds__float_regs__V_59_59;
#line 930 "float_regs.m"
                      MR_Integer transform_hlds__float_regs__V_25_25;

#line 930 "float_regs.m"
                      {
#line 930 "float_regs.m"
                        transform_hlds__float_regs__V_56_56 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__float_regs__ShroudedPredProcId_22);
                      }
#line 930 "float_regs.m"
                      transform_hlds__float_regs__PredId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_56_56, (MR_Integer) 0)));
#line 930 "float_regs.m"
                      transform_hlds__float_regs__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_56_56, (MR_Integer) 1)));
#line 931 "float_regs.m"
                      {
#line 931 "float_regs.m"
                        hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__ModuleInfo_7, transform_hlds__float_regs__PredId_24, &transform_hlds__float_regs__PredInfo_26);
                      }
#line 932 "float_regs.m"
                      {
#line 932 "float_regs.m"
                        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_26, &transform_hlds__float_regs__ArgTypes_27);
                      }
#line 933 "float_regs.m"
                      {
#line 933 "float_regs.m"
                        mercury__list__length_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], transform_hlds__float_regs__Args_10, &transform_hlds__float_regs__NumArgs_28);
                      }
#line 7439 "transform_hlds.float_regs.c"
                      transform_hlds__float_regs__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 934 "float_regs.m"
                      {
#line 934 "float_regs.m"
                        mercury__list__det_drop_3_p_0(transform_hlds__float_regs__TypeCtorInfo_67_67, transform_hlds__float_regs__NumArgs_28, transform_hlds__float_regs__ArgTypes_27, &transform_hlds__float_regs__MissingArgTypes_29);
                      }
#line 935 "float_regs.m"
                      {
#line 935 "float_regs.m"
                        mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_67_67, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[7], transform_hlds__float_regs__MissingArgTypes_29, &transform_hlds__float_regs__ArgRegs_30);
                      }
#line 937 "float_regs.m"
                      {
#line 937 "float_regs.m"
                        transform_hlds__float_regs__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 937 "float_regs.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_58_58, 0) = ((MR_Box) (transform_hlds__float_regs__ArgRegs_30));
#line 937 "float_regs.m"
                      }
#line 936 "float_regs.m"
                      {
#line 936 "float_regs.m"
                        transform_hlds__float_regs__PredInstInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 936 "float_regs.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_31, 0) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_18));
#line 936 "float_regs.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_31, 1) = ((MR_Box) (transform_hlds__float_regs__Modes_19));
#line 936 "float_regs.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_31, 2) = ((MR_Box) (transform_hlds__float_regs__V_58_58));
#line 936 "float_regs.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_31, 3) = ((MR_Box) (transform_hlds__float_regs__Determinism_21));
#line 936 "float_regs.m"
                      }
#line 943 "float_regs.m"
                      transform_hlds__float_regs__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__PredInstInfo_31);
#line 943 "float_regs.m"
                      {
#line 943 "float_regs.m"
                        MR_Word base;
#line 943 "float_regs.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "float_regs.m"
                        *transform_hlds__float_regs__Inst_12 = base;
#line 943 "float_regs.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__float_regs__V_151_151));
#line 943 "float_regs.m"
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__float_regs__V_59_59));
#line 943 "float_regs.m"
                      }
#line 930 "float_regs.m"
                    }
#line 929 "float_regs.m"
                  }
#line 929 "float_regs.m"
                else
#line 946 "float_regs.m"
                  *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
#line 927 "float_regs.m"
              }
#line 918 "float_regs.m"
          }
#line 918 "float_regs.m"
        else
#line 918 "float_regs.m"
          if (((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_11)) == (MR_mktag((MR_Integer) 1))))
#line 962 "float_regs.m"
            *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
#line 918 "float_regs.m"
          else
#line 918 "float_regs.m"
            if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 964 "float_regs.m"
              {
#line 965 "float_regs.m"
                {
#line 965 "float_regs.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.rebuild_cell_inst\'/6", (MR_String) "abstract_inst");
#line 965 "float_regs.m"
                  return;
                }
#line 964 "float_regs.m"
              }
#line 918 "float_regs.m"
            else
#line 918 "float_regs.m"
              if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 918 "float_regs.m"
                {
#line 918 "float_regs.m"
                  MR_Word transform_hlds__float_regs__TypeCtorInfo_65_65;
#line 918 "float_regs.m"
                  MR_Word transform_hlds__float_regs__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 1)));
#line 918 "float_regs.m"
                  MR_Word transform_hlds__float_regs__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 2)));
#line 918 "float_regs.m"
                  MR_Word transform_hlds__float_regs__BoundInsts0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 3)));
#line 918 "float_regs.m"
                  MR_Word transform_hlds__float_regs__BoundInsts_16;
#line 918 "float_regs.m"
                  MR_Word transform_hlds__float_regs__V_61_61;

#line 919 "float_regs.m"
                  {
#line 919 "float_regs.m"
                    transform_hlds__float_regs__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 919 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_61_61, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[4]));
#line 919 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_61_61, 1) = ((MR_Box) (transform_hlds__float_regs__rebuild_cell_inst_6_p_0_2));
#line 919 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 919 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_61_61, 3) = ((MR_Box) (transform_hlds__float_regs__InstMap_8));
#line 919 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_61_61, 4) = ((MR_Box) (transform_hlds__float_regs__ConsId_9));
#line 919 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_61_61, 5) = ((MR_Box) (transform_hlds__float_regs__Args_10));
#line 919 "float_regs.m"
                  }
#line 7559 "transform_hlds.float_regs.c"
                  transform_hlds__float_regs__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 919 "float_regs.m"
                  {
#line 919 "float_regs.m"
                    mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__V_61_61, transform_hlds__float_regs__BoundInsts0_15, &transform_hlds__float_regs__BoundInsts_16);
                  }
#line 921 "float_regs.m"
                  {
#line 921 "float_regs.m"
                    MR_Word base;
#line 921 "float_regs.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 921 "float_regs.m"
                    *transform_hlds__float_regs__Inst_12 = base;
#line 921 "float_regs.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 921 "float_regs.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__Uniq_13));
#line 921 "float_regs.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__InstResults_14));
#line 921 "float_regs.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__float_regs__BoundInsts_16));
#line 921 "float_regs.m"
                  }
#line 918 "float_regs.m"
                }
#line 918 "float_regs.m"
              else
#line 918 "float_regs.m"
                if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 949 "float_regs.m"
                  {
#line 949 "float_regs.m"
                    MR_Word transform_hlds__float_regs__InstVarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 1)));
#line 949 "float_regs.m"
                    MR_Word transform_hlds__float_regs__SpecInst0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 2)));
#line 949 "float_regs.m"
                    MR_Word transform_hlds__float_regs__SpecInst_38;

#line 950 "float_regs.m"
                    {
#line 950 "float_regs.m"
                      transform_hlds__float_regs__rebuild_cell_inst_6_p_0(transform_hlds__float_regs__ModuleInfo_7, transform_hlds__float_regs__InstMap_8, transform_hlds__float_regs__ConsId_9, transform_hlds__float_regs__Args_10, transform_hlds__float_regs__SpecInst0_37, &transform_hlds__float_regs__SpecInst_38);
                    }
#line 952 "float_regs.m"
                    {
#line 952 "float_regs.m"
                      MR_Word base;
#line 952 "float_regs.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 952 "float_regs.m"
                      *transform_hlds__float_regs__Inst_12 = base;
#line 952 "float_regs.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 952 "float_regs.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__InstVarSet_36));
#line 952 "float_regs.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__SpecInst_38));
#line 952 "float_regs.m"
                    }
#line 949 "float_regs.m"
                  }
#line 918 "float_regs.m"
                else
#line 918 "float_regs.m"
                  if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 962 "float_regs.m"
                    *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
#line 918 "float_regs.m"
                  else
#line 918 "float_regs.m"
                    if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 918 "float_regs.m"
                      {
#line 918 "float_regs.m"
                        MR_Word transform_hlds__float_regs__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 2)));
#line 918 "float_regs.m"
                        MR_Word transform_hlds__float_regs__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_11, (MR_Integer) 1)));

#line 918 "float_regs.m"
                        if ((transform_hlds__float_regs__V_152_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "float_regs.m"
                          *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
#line 918 "float_regs.m"
                        else
#line 927 "float_regs.m"
                          {
#line 927 "float_regs.m"
                            MR_Word transform_hlds__float_regs__PredInstInfo0_106 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__V_152_152), (MR_Integer) 1);
#line 927 "float_regs.m"
                            MR_Word transform_hlds__float_regs__PredOrFunc_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_106, (MR_Integer) 0)));
#line 927 "float_regs.m"
                            MR_Word transform_hlds__float_regs__Modes_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_106, (MR_Integer) 1)));
#line 927 "float_regs.m"
                            MR_Word transform_hlds__float_regs__Determinism_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_106, (MR_Integer) 3)));
#line 928 "float_regs.m"
                            MR_Word transform_hlds__float_regs__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_106, (MR_Integer) 2)));
#line 945 "float_regs.m"
                            MR_Word transform_hlds__float_regs__ShroudedPredProcId_90;

#line 929 "float_regs.m"
                            transform_hlds__float_regs__succeeded = ((((MR_tag((MR_Word) transform_hlds__float_regs__ConsId_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 929 "float_regs.m"
                            if (transform_hlds__float_regs__succeeded)
#line 929 "float_regs.m"
                              {
#line 929 "float_regs.m"
                                transform_hlds__float_regs__ShroudedPredProcId_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__ConsId_9, (MR_Integer) 1)));
#line 930 "float_regs.m"
                                {
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__TypeCtorInfo_67_88;
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__V_60_60;
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__PredId_76;
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__PredInfo_78;
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__ArgTypes_79;
#line 930 "float_regs.m"
                                  MR_Integer transform_hlds__float_regs__NumArgs_80;
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__MissingArgTypes_81;
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__ArgRegs_82;
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__PredInstInfo_83;
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__V_84_84;
#line 930 "float_regs.m"
                                  MR_Word transform_hlds__float_regs__V_86_86;
#line 930 "float_regs.m"
                                  MR_Integer transform_hlds__float_regs__V_73_73;

#line 930 "float_regs.m"
                                  {
#line 930 "float_regs.m"
                                    transform_hlds__float_regs__V_84_84 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__float_regs__ShroudedPredProcId_90);
                                  }
#line 930 "float_regs.m"
                                  transform_hlds__float_regs__PredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_84_84, (MR_Integer) 0)));
#line 930 "float_regs.m"
                                  transform_hlds__float_regs__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_84_84, (MR_Integer) 1)));
#line 931 "float_regs.m"
                                  {
#line 931 "float_regs.m"
                                    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__ModuleInfo_7, transform_hlds__float_regs__PredId_76, &transform_hlds__float_regs__PredInfo_78);
                                  }
#line 932 "float_regs.m"
                                  {
#line 932 "float_regs.m"
                                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo_78, &transform_hlds__float_regs__ArgTypes_79);
                                  }
#line 933 "float_regs.m"
                                  {
#line 933 "float_regs.m"
                                    mercury__list__length_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], transform_hlds__float_regs__Args_10, &transform_hlds__float_regs__NumArgs_80);
                                  }
#line 7719 "transform_hlds.float_regs.c"
                                  transform_hlds__float_regs__TypeCtorInfo_67_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 934 "float_regs.m"
                                  {
#line 934 "float_regs.m"
                                    mercury__list__det_drop_3_p_0(transform_hlds__float_regs__TypeCtorInfo_67_88, transform_hlds__float_regs__NumArgs_80, transform_hlds__float_regs__ArgTypes_79, &transform_hlds__float_regs__MissingArgTypes_81);
                                  }
#line 935 "float_regs.m"
                                  {
#line 935 "float_regs.m"
                                    mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_67_88, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[8], transform_hlds__float_regs__MissingArgTypes_81, &transform_hlds__float_regs__ArgRegs_82);
                                  }
#line 937 "float_regs.m"
                                  {
#line 937 "float_regs.m"
                                    transform_hlds__float_regs__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 937 "float_regs.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_86_86, 0) = ((MR_Box) (transform_hlds__float_regs__ArgRegs_82));
#line 937 "float_regs.m"
                                  }
#line 936 "float_regs.m"
                                  {
#line 936 "float_regs.m"
                                    transform_hlds__float_regs__PredInstInfo_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 936 "float_regs.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_83, 0) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_107));
#line 936 "float_regs.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_83, 1) = ((MR_Box) (transform_hlds__float_regs__Modes_108));
#line 936 "float_regs.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_83, 2) = ((MR_Box) (transform_hlds__float_regs__V_86_86));
#line 936 "float_regs.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo_83, 3) = ((MR_Box) (transform_hlds__float_regs__Determinism_110));
#line 936 "float_regs.m"
                                  }
#line 940 "float_regs.m"
                                  transform_hlds__float_regs__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__PredInstInfo_83);
#line 940 "float_regs.m"
                                  {
#line 940 "float_regs.m"
                                    MR_Word base;
#line 940 "float_regs.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 940 "float_regs.m"
                                    *transform_hlds__float_regs__Inst_12 = base;
#line 940 "float_regs.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 940 "float_regs.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__V_153_153));
#line 940 "float_regs.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__V_60_60));
#line 940 "float_regs.m"
                                  }
#line 930 "float_regs.m"
                                }
#line 929 "float_regs.m"
                              }
#line 929 "float_regs.m"
                            else
#line 946 "float_regs.m"
                              *transform_hlds__float_regs__Inst_12 = transform_hlds__float_regs__Inst0_11;
#line 927 "float_regs.m"
                          }
#line 918 "float_regs.m"
                      }
#line 918 "float_regs.m"
                    else
#line 967 "float_regs.m"
                      {
#line 968 "float_regs.m"
                        {
#line 968 "float_regs.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.rebuild_cell_inst\'/6", (MR_String) "inst_var");
#line 968 "float_regs.m"
                          return;
                        }
#line 967 "float_regs.m"
                      }
#line 918 "float_regs.m"
  }
#line 913 "float_regs.m"
}

#line 895 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_9,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__CellVar_10,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__ConsId_11,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__Args_12,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalInfo0_13,
#line 895 "float_regs.m"
  MR_Word * transform_hlds__float_regs__GoalInfo_14,
#line 895 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20,
#line 895 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_21)
#line 895 "float_regs.m"
{
#line 900 "float_regs.m"
  {
#line 900 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 900 "float_regs.m"
    MR_Word transform_hlds__float_regs__Delta0_16;
#line 908 "float_regs.m"
    MR_Word transform_hlds__float_regs__CellInst0_17;

#line 901 "float_regs.m"
    {
#line 901 "float_regs.m"
      transform_hlds__float_regs__Delta0_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__float_regs__GoalInfo0_13);
    }
#line 902 "float_regs.m"
    {
#line 902 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__float_regs__Delta0_16, transform_hlds__float_regs__CellVar_10, &transform_hlds__float_regs__CellInst0_17);
    }
#line 908 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 904 "float_regs.m"
      {
#line 904 "float_regs.m"
        MR_Word transform_hlds__float_regs__CellInst_18;
#line 904 "float_regs.m"
        MR_Word transform_hlds__float_regs__Delta_19;

#line 903 "float_regs.m"
        {
#line 903 "float_regs.m"
          transform_hlds__float_regs__rebuild_cell_inst_6_p_0(transform_hlds__float_regs__ModuleInfo_9, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20, transform_hlds__float_regs__ConsId_11, transform_hlds__float_regs__Args_12, transform_hlds__float_regs__CellInst0_17, &transform_hlds__float_regs__CellInst_18);
        }
#line 905 "float_regs.m"
        {
#line 905 "float_regs.m"
          hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__float_regs__CellVar_10, transform_hlds__float_regs__CellInst_18, transform_hlds__float_regs__Delta0_16, &transform_hlds__float_regs__Delta_19);
        }
#line 906 "float_regs.m"
        {
#line 906 "float_regs.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__float_regs__Delta_19, transform_hlds__float_regs__GoalInfo0_13, transform_hlds__float_regs__GoalInfo_14);
        }
#line 907 "float_regs.m"
        {
#line 907 "float_regs.m"
          hlds__instmap__apply_instmap_delta_sv_3_p_0(transform_hlds__float_regs__Delta_19, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20, transform_hlds__float_regs__STATE_VARIABLE_InstMap_21);
#line 907 "float_regs.m"
          return;
        }
#line 904 "float_regs.m"
      }
#line 908 "float_regs.m"
    else
#line 909 "float_regs.m"
      {
#line 909 "float_regs.m"
        *transform_hlds__float_regs__GoalInfo_14 = transform_hlds__float_regs__GoalInfo0_13;
#line 910 "float_regs.m"
        {
#line 910 "float_regs.m"
          hlds__instmap__apply_instmap_delta_sv_3_p_0(transform_hlds__float_regs__Delta0_16, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_20, transform_hlds__float_regs__STATE_VARIABLE_InstMap_21);
#line 910 "float_regs.m"
          return;
        }
#line 909 "float_regs.m"
      }
#line 900 "float_regs.m"
  }
#line 895 "float_regs.m"
}

#line 885 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__uni_modes_to_modes_3_p_0(
#line 885 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVar__1_1,
#line 885 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__2_2,
#line 885 "float_regs.m"
  MR_Word * transform_hlds__float_regs__HeadVar__3_3)
#line 885 "float_regs.m"
{
#line 888 "float_regs.m"
  {
#line 888 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 888 "float_regs.m"
    if ((transform_hlds__float_regs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "float_regs.m"
      {
#line 888 "float_regs.m"
        *transform_hlds__float_regs__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "float_regs.m"
        *transform_hlds__float_regs__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "float_regs.m"
      }
#line 888 "float_regs.m"
    else
#line 889 "float_regs.m"
      {
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__UniMode_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 0)));
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__UniModes_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__HeadVar__1_1, (MR_Integer) 1)));
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__L_6;
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__Ls_7;
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__R_8;
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__Rs_9;
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__LI_10;
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__RI_11;
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__LF_12;
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__RF_13;
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UniMode_4, (MR_Integer) 0)));
#line 889 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__UniMode_4, (MR_Integer) 1)));

#line 890 "float_regs.m"
        transform_hlds__float_regs__LI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_14_14, (MR_Integer) 0)));
#line 890 "float_regs.m"
        transform_hlds__float_regs__RI_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_14_14, (MR_Integer) 1)));
#line 890 "float_regs.m"
        transform_hlds__float_regs__LF_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, (MR_Integer) 0)));
#line 890 "float_regs.m"
        transform_hlds__float_regs__RF_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, (MR_Integer) 1)));
#line 891 "float_regs.m"
        {
#line 891 "float_regs.m"
          transform_hlds__float_regs__L_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__L_6, 0) = ((MR_Box) (transform_hlds__float_regs__LI_10));
#line 891 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__L_6, 1) = ((MR_Box) (transform_hlds__float_regs__LF_12));
#line 891 "float_regs.m"
        }
#line 892 "float_regs.m"
        {
#line 892 "float_regs.m"
          transform_hlds__float_regs__R_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 892 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__R_8, 0) = ((MR_Box) (transform_hlds__float_regs__RI_11));
#line 892 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__R_8, 1) = ((MR_Box) (transform_hlds__float_regs__RF_13));
#line 892 "float_regs.m"
        }
#line 893 "float_regs.m"
        {
#line 893 "float_regs.m"
          transform_hlds__float_regs__uni_modes_to_modes_3_p_0(transform_hlds__float_regs__UniModes_5, &transform_hlds__float_regs__Ls_7, &transform_hlds__float_regs__Rs_9);
        }
#line 889 "float_regs.m"
        {
#line 889 "float_regs.m"
          MR_Word base;
#line 889 "float_regs.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "float_regs.m"
          *transform_hlds__float_regs__HeadVar__2_2 = base;
#line 889 "float_regs.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__L_6));
#line 889 "float_regs.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__float_regs__Ls_7));
#line 889 "float_regs.m"
        }
#line 889 "float_regs.m"
        {
#line 889 "float_regs.m"
          MR_Word base;
#line 889 "float_regs.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "float_regs.m"
          *transform_hlds__float_regs__HeadVar__3_3 = base;
#line 889 "float_regs.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__R_8));
#line 889 "float_regs.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__float_regs__Rs_9));
#line 889 "float_regs.m"
        }
#line 889 "float_regs.m"
      }
#line 888 "float_regs.m"
  }
#line 885 "float_regs.m"
}

#line 876 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0_1(
#line 876 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 876 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 876 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 876 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
#line 876 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_4)
#line 876 "float_regs.m"
{
#line 876 "float_regs.m"
  {
#line 876 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 876 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_Type_6;
#line 876 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15;

#line 876 "float_regs.m"
    {
#line 876 "float_regs.m"
      transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_Type_6, ((MR_Word) transform_hlds__float_regs__wrapper_arg_3), &transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15);
    }
#line 876 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_Type_6));
#line 876 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_4 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15));
#line 876 "float_regs.m"
  }
#line 876 "float_regs.m"
}

#line 868 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(
#line 868 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type0_5,
#line 868 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Type_6,
#line 868 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_TVarSet_0_14,
#line 868 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_TVarSet_15)
#line 868 "float_regs.m"
{
#line 880 "float_regs.m"
  {
#line 880 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 880 "float_regs.m"
    MR_Word transform_hlds__float_regs__Purity_8;
#line 880 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredOrFunc_9;
#line 880 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgTypes0_11;

#line 873 "float_regs.m"
    {
#line 873 "float_regs.m"
      transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__Type0_5, &transform_hlds__float_regs__Purity_8, &transform_hlds__float_regs__PredOrFunc_9, &transform_hlds__float_regs__ArgTypes0_11);
    }
#line 880 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 877 "float_regs.m"
      {
#line 877 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 877 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgTypes_12;
#line 876 "float_regs.m"
        MR_Box transform_hlds__float_regs__conv2_STATE_VARIABLE_TVarSet_15;

#line 876 "float_regs.m"
        {
#line 876 "float_regs.m"
          mercury__list__map_foldl_5_p_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__float_regs_scalar_common_1[2], (MR_Word) &transform_hlds__float_regs_scalar_common_3[6], transform_hlds__float_regs__ArgTypes0_11, &transform_hlds__float_regs__ArgTypes_12, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_TVarSet_0_14)), &transform_hlds__float_regs__conv2_STATE_VARIABLE_TVarSet_15);
        }
#line 876 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_TVarSet_15 = ((MR_Word) transform_hlds__float_regs__conv2_STATE_VARIABLE_TVarSet_15);
#line 878 "float_regs.m"
        {
#line 878 "float_regs.m"
          parse_tree__prog_type__construct_higher_order_type_5_p_0(transform_hlds__float_regs__Purity_8, transform_hlds__float_regs__PredOrFunc_9, transform_hlds__float_regs__ArgTypes_12, transform_hlds__float_regs__Type_6);
#line 878 "float_regs.m"
          return;
        }
#line 877 "float_regs.m"
      }
#line 880 "float_regs.m"
    else
#line 881 "float_regs.m"
      {
#line 881 "float_regs.m"
        MR_Word transform_hlds__float_regs__TVar_13;

#line 881 "float_regs.m"
        {
#line 881 "float_regs.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__float_regs__TVar_13, transform_hlds__float_regs__STATE_VARIABLE_TVarSet_0_14, transform_hlds__float_regs__STATE_VARIABLE_TVarSet_15);
        }
#line 882 "float_regs.m"
        {
#line 882 "float_regs.m"
          MR_Word base;
#line 882 "float_regs.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 882 "float_regs.m"
          *transform_hlds__float_regs__Type_6 = base;
#line 882 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__TVar_13));
#line 882 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "float_regs.m"
        }
#line 881 "float_regs.m"
      }
#line 880 "float_regs.m"
  }
#line 868 "float_regs.m"
}

#line 853 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2(
#line 853 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 853 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 853 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 853 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 853 "float_regs.m"
{
#line 853 "float_regs.m"
  {
#line 853 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 853 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv3_ArgMode_8;

#line 853 "float_regs.m"
    {
#line 853 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_mode_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv3_ArgMode_8);
    }
#line 853 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv3_ArgMode_8));
#line 853 "float_regs.m"
  }
#line 853 "float_regs.m"
}

#line 845 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_1(
#line 845 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 845 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 845 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 845 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
#line 845 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_4)
#line 845 "float_regs.m"
{
#line 845 "float_regs.m"
  {
#line 845 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 845 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_Type_6;
#line 845 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15;

#line 845 "float_regs.m"
    {
#line 845 "float_regs.m"
      transform_hlds__float_regs__replace_type_params_by_dummy_vars_4_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_Type_6, ((MR_Word) transform_hlds__float_regs__wrapper_arg_3), &transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15);
    }
#line 845 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_Type_6));
#line 845 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_4 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_TVarSet_15));
#line 845 "float_regs.m"
  }
#line 845 "float_regs.m"
}

#line 827 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__CellVar_14,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__ConsId_15,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__OrigVars_16,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Vars_17,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__UniModes0_18,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__UniModes_19,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__MaybeWrappedGoals_20,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_21,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__Context_22,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_45,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_46,
#line 827 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47,
#line 827 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_48)
#line 827 "float_regs.m"
{
#line 835 "float_regs.m"
  {
#line 835 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 835 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_25;
#line 835 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes_26;
#line 835 "float_regs.m"
    MR_Word transform_hlds__float_regs__CellType_27;
#line 862 "float_regs.m"
    MR_Word transform_hlds__float_regs__PhonyArgTypes_36;
#line 842 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_55_55;
#line 842 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_60_60;
#line 842 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeInfo_61_61;
#line 842 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtor_28;
#line 842 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeArgs_29;
#line 842 "float_regs.m"
    MR_Word transform_hlds__float_regs__TVarSet0_32;
#line 842 "float_regs.m"
    MR_Word transform_hlds__float_regs__PhonyTypeArgs_33;
#line 842 "float_regs.m"
    MR_Word transform_hlds__float_regs__PhonyCellType_35;
#line 842 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_49_49;
#line 843 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_30_30;
#line 843 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_31_31;
#line 845 "float_regs.m"
    MR_Word transform_hlds__float_regs___TVarSet_34;
#line 845 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv2__TVarSet_34;
#line 850 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_37_37;
#line 850 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_38_38;

#line 836 "float_regs.m"
    {
#line 836 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, &transform_hlds__float_regs__ModuleInfo_25);
    }
#line 837 "float_regs.m"
    {
#line 837 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, &transform_hlds__float_regs__VarTypes_26);
    }
#line 838 "float_regs.m"
    {
#line 838 "float_regs.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__float_regs__VarTypes_26, transform_hlds__float_regs__CellVar_14, &transform_hlds__float_regs__CellType_27);
    }
#line 842 "float_regs.m"
    {
#line 842 "float_regs.m"
      transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__float_regs__CellType_27, &transform_hlds__float_regs__TypeCtor_28, &transform_hlds__float_regs__TypeArgs_29);
    }
#line 842 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 842 "float_regs.m"
      {
#line 843 "float_regs.m"
        transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__TypeArgs_29)) == (MR_mktag((MR_Integer) 1)));
#line 843 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 843 "float_regs.m"
          {
#line 843 "float_regs.m"
            transform_hlds__float_regs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__TypeArgs_29, (MR_Integer) 0)));
#line 843 "float_regs.m"
            transform_hlds__float_regs__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__TypeArgs_29, (MR_Integer) 1)));
#line 8322 "transform_hlds.float_regs.c"
            transform_hlds__float_regs__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 844 "float_regs.m"
            {
#line 844 "float_regs.m"
              mercury__varset__init_1_p_0(transform_hlds__float_regs__TypeCtorInfo_55_55, &transform_hlds__float_regs__TVarSet0_32);
            }
#line 845 "float_regs.m"
            transform_hlds__float_regs__V_49_49 = (MR_Word) &transform_hlds__float_regs_scalar_common_3[5];
#line 8331 "transform_hlds.float_regs.c"
            transform_hlds__float_regs__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 8333 "transform_hlds.float_regs.c"
            transform_hlds__float_regs__TypeInfo_61_61 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[2];
#line 845 "float_regs.m"
            {
#line 845 "float_regs.m"
              mercury__list__map_foldl_5_p_0(transform_hlds__float_regs__TypeCtorInfo_60_60, transform_hlds__float_regs__TypeCtorInfo_60_60, transform_hlds__float_regs__TypeInfo_61_61, transform_hlds__float_regs__V_49_49, transform_hlds__float_regs__TypeArgs_29, &transform_hlds__float_regs__PhonyTypeArgs_33, ((MR_Box) (transform_hlds__float_regs__TVarSet0_32)), &transform_hlds__float_regs__conv2__TVarSet_34);
            }
#line 845 "float_regs.m"
            transform_hlds__float_regs___TVarSet_34 = ((MR_Word) transform_hlds__float_regs__conv2__TVarSet_34);
#line 847 "float_regs.m"
            {
#line 847 "float_regs.m"
              parse_tree__prog_type__construct_type_3_p_0(transform_hlds__float_regs__TypeCtor_28, transform_hlds__float_regs__PhonyTypeArgs_33, &transform_hlds__float_regs__PhonyCellType_35);
            }
#line 848 "float_regs.m"
            {
#line 848 "float_regs.m"
              transform_hlds__float_regs__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__float_regs__ModuleInfo_25, transform_hlds__float_regs__PhonyCellType_35, transform_hlds__float_regs__ConsId_15, &transform_hlds__float_regs__PhonyArgTypes_36);
            }
#line 842 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 842 "float_regs.m"
              {
#line 850 "float_regs.m"
                transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__PhonyArgTypes_36)) == (MR_mktag((MR_Integer) 1)));
#line 850 "float_regs.m"
                if (transform_hlds__float_regs__succeeded)
#line 850 "float_regs.m"
                  {
#line 850 "float_regs.m"
                    transform_hlds__float_regs__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__PhonyArgTypes_36, (MR_Integer) 0)));
#line 850 "float_regs.m"
                    transform_hlds__float_regs__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__PhonyArgTypes_36, (MR_Integer) 1)));
#line 850 "float_regs.m"
                  }
#line 842 "float_regs.m"
              }
#line 843 "float_regs.m"
          }
#line 842 "float_regs.m"
      }
#line 862 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 852 "float_regs.m"
      {
#line 852 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeCtorInfo_65_65;
#line 852 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeCtorInfo_66_66;
#line 852 "float_regs.m"
        MR_Word transform_hlds__float_regs__LhsModes0_39;
#line 852 "float_regs.m"
        MR_Word transform_hlds__float_regs__RhsModes0_40;
#line 852 "float_regs.m"
        MR_Word transform_hlds__float_regs__LhsModes_41;
#line 852 "float_regs.m"
        MR_Word transform_hlds__float_regs__RhsModes_42;
#line 852 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgInitialInsts_43;
#line 852 "float_regs.m"
        MR_Word transform_hlds__float_regs__WrapGoals_44;
#line 852 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_50_50;

#line 852 "float_regs.m"
        {
#line 852 "float_regs.m"
          transform_hlds__float_regs__uni_modes_to_modes_3_p_0(transform_hlds__float_regs__UniModes0_18, &transform_hlds__float_regs__LhsModes0_39, &transform_hlds__float_regs__RhsModes0_40);
        }
#line 853 "float_regs.m"
        {
#line 853 "float_regs.m"
          transform_hlds__float_regs__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 853 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_50_50, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[1]));
#line 853 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_50_50, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0_2));
#line 853 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 853 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_50_50, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_25));
#line 853 "float_regs.m"
        }
#line 8416 "transform_hlds.float_regs.c"
        transform_hlds__float_regs__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 8418 "transform_hlds.float_regs.c"
        transform_hlds__float_regs__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 853 "float_regs.m"
        {
#line 853 "float_regs.m"
          mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__TypeCtorInfo_66_66, transform_hlds__float_regs__TypeCtorInfo_66_66, transform_hlds__float_regs__V_50_50, transform_hlds__float_regs__PhonyArgTypes_36, transform_hlds__float_regs__LhsModes0_39, &transform_hlds__float_regs__LhsModes_41);
        }
#line 855 "float_regs.m"
        {
#line 855 "float_regs.m"
          mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_65_65, transform_hlds__float_regs__TypeCtorInfo_66_66, transform_hlds__float_regs__TypeCtorInfo_66_66, transform_hlds__float_regs__V_50_50, transform_hlds__float_regs__PhonyArgTypes_36, transform_hlds__float_regs__RhsModes0_40, &transform_hlds__float_regs__RhsModes_42);
        }
#line 857 "float_regs.m"
        {
#line 857 "float_regs.m"
          check_hlds__mode_util__modes_to_uni_modes_4_p_0(transform_hlds__float_regs__ModuleInfo_25, transform_hlds__float_regs__LhsModes_41, transform_hlds__float_regs__RhsModes_42, transform_hlds__float_regs__UniModes_19);
        }
#line 858 "float_regs.m"
        {
#line 858 "float_regs.m"
          check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_25, transform_hlds__float_regs__RhsModes_42, &transform_hlds__float_regs__ArgInitialInsts_43);
        }
#line 859 "float_regs.m"
        {
#line 859 "float_regs.m"
          transform_hlds__float_regs__match_args_12_p_0(transform_hlds__float_regs__InstMap0_21, transform_hlds__float_regs__Context_22, transform_hlds__float_regs__PhonyArgTypes_36, transform_hlds__float_regs__ArgInitialInsts_43, transform_hlds__float_regs__OrigVars_16, transform_hlds__float_regs__Vars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__float_regs__WrapGoals_44, transform_hlds__float_regs__STATE_VARIABLE_Info_0_45, transform_hlds__float_regs__STATE_VARIABLE_Info_46, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47, transform_hlds__float_regs__STATE_VARIABLE_Specs_48);
        }
#line 861 "float_regs.m"
        {
#line 861 "float_regs.m"
          MR_Word base;
#line 861 "float_regs.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "float_regs.m"
          *transform_hlds__float_regs__MaybeWrappedGoals_20 = base;
#line 861 "float_regs.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__float_regs__WrapGoals_44));
#line 861 "float_regs.m"
        }
#line 852 "float_regs.m"
      }
#line 862 "float_regs.m"
    else
#line 863 "float_regs.m"
      {
#line 863 "float_regs.m"
        *transform_hlds__float_regs__Vars_17 = transform_hlds__float_regs__OrigVars_16;
#line 864 "float_regs.m"
        *transform_hlds__float_regs__UniModes_19 = transform_hlds__float_regs__UniModes0_18;
#line 865 "float_regs.m"
        *transform_hlds__float_regs__MaybeWrappedGoals_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_48 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_47;
#line 865 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_46 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_45;
#line 863 "float_regs.m"
      }
#line 835 "float_regs.m"
  }
#line 827 "float_regs.m"
}

#line 797 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2(
#line 797 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 797 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 797 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 797 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 797 "float_regs.m"
{
#line 797 "float_regs.m"
  {
#line 797 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 797 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv2_UniMode_8;

#line 797 "float_regs.m"
    {
#line 797 "float_regs.m"
      transform_hlds__float_regs__uni_mode_set_rhs_final_inst_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv2_UniMode_8);
    }
#line 797 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv2_UniMode_8));
#line 797 "float_regs.m"
  }
#line 797 "float_regs.m"
}

#line 767 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_1(
#line 767 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 767 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 767 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 767 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 767 "float_regs.m"
{
#line 767 "float_regs.m"
  {
#line 767 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 767 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_HeadVar__3_3;

#line 767 "float_regs.m"
    {
#line 767 "float_regs.m"
      hlds__goal_util__update_instmap_3_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_HeadVar__3_3);
    }
#line 767 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_HeadVar__3_3));
#line 767 "float_regs.m"
  }
#line 767 "float_regs.m"
}

#line 733 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalExpr0_10,
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__GoalInfo0_11,
#line 733 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_12,
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71,
#line 733 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_72,
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_73,
#line 733 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_74,
#line 733 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75,
#line 733 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_76)
#line 733 "float_regs.m"
{
#line 739 "float_regs.m"
  {
#line 739 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 739 "float_regs.m"
    MR_Word transform_hlds__float_regs__LHS_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 0)));
#line 739 "float_regs.m"
    MR_Word transform_hlds__float_regs__RHS0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 1)));
#line 739 "float_regs.m"
    MR_Word transform_hlds__float_regs__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 2)));
#line 739 "float_regs.m"
    MR_Word transform_hlds__float_regs__Unification0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 3)));
#line 739 "float_regs.m"
    MR_Word transform_hlds__float_regs__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr0_10, (MR_Integer) 4)));

#line 785 "float_regs.m"
    if (((MR_tag((MR_Word) transform_hlds__float_regs__Unification0_19)) == (MR_mktag((MR_Integer) 2))))
#line 811 "float_regs.m"
      {
#line 811 "float_regs.m"
        MR_Word transform_hlds__float_regs__ToVar_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Unification0_19, (MR_Integer) 0)));
#line 811 "float_regs.m"
        MR_Word transform_hlds__float_regs__FromVar_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Unification0_19, (MR_Integer) 1)));
#line 811 "float_regs.m"
        MR_Word transform_hlds__float_regs__Delta0_63;
#line 811 "float_regs.m"
        MR_Word transform_hlds__float_regs__Inst_64;
#line 811 "float_regs.m"
        MR_Word transform_hlds__float_regs__Delta_65;
#line 811 "float_regs.m"
        MR_Word transform_hlds__float_regs__GoalInfo1_124;

#line 812 "float_regs.m"
        {
#line 812 "float_regs.m"
          transform_hlds__float_regs__Delta0_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__float_regs__GoalInfo0_11);
        }
#line 813 "float_regs.m"
        {
#line 813 "float_regs.m"
          hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__FromVar_62, &transform_hlds__float_regs__Inst_64);
        }
#line 814 "float_regs.m"
        {
#line 814 "float_regs.m"
          hlds__instmap__instmap_delta_set_var_4_p_0(transform_hlds__float_regs__ToVar_61, transform_hlds__float_regs__Inst_64, transform_hlds__float_regs__Delta0_63, &transform_hlds__float_regs__Delta_65);
        }
#line 815 "float_regs.m"
        {
#line 815 "float_regs.m"
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__float_regs__Delta_65, transform_hlds__float_regs__GoalInfo0_11, &transform_hlds__float_regs__GoalInfo1_124);
        }
#line 816 "float_regs.m"
        {
#line 816 "float_regs.m"
          MR_Word base;
#line 816 "float_regs.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "float_regs.m"
          *transform_hlds__float_regs__Goal_12 = base;
#line 816 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
#line 816 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo1_124));
#line 816 "float_regs.m"
        }
#line 817 "float_regs.m"
        {
#line 817 "float_regs.m"
          hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_12, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
        }
#line 817 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_74 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_73;
#line 817 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_76 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75;
#line 811 "float_regs.m"
      }
#line 785 "float_regs.m"
    else
#line 785 "float_regs.m"
      if (((MR_tag((MR_Word) transform_hlds__float_regs__Unification0_19)) == (MR_mktag((MR_Integer) 0))))
#line 743 "float_regs.m"
        {
#line 743 "float_regs.m"
          MR_Word transform_hlds__float_regs__CellVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 0)));
#line 743 "float_regs.m"
          MR_Word transform_hlds__float_regs__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 1)));
#line 743 "float_regs.m"
          MR_Word transform_hlds__float_regs__Args0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 2)));
#line 743 "float_regs.m"
          MR_Word transform_hlds__float_regs__UniModes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 3)));
#line 743 "float_regs.m"
          MR_Word transform_hlds__float_regs__HowToConstruct_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 4)));
#line 743 "float_regs.m"
          MR_Word transform_hlds__float_regs__IsUnique_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 5)));
#line 743 "float_regs.m"
          MR_Word transform_hlds__float_regs__SubInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification0_19, (MR_Integer) 6)));
#line 743 "float_regs.m"
          MR_Word transform_hlds__float_regs__IsExistConstruct_29;

#line 746 "float_regs.m"
          if (((MR_tag((MR_Word) transform_hlds__float_regs__RHS0_17)) == (MR_mktag((MR_Integer) 1))))
#line 745 "float_regs.m"
            {
#line 745 "float_regs.m"
              MR_Word transform_hlds__float_regs__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS0_17, (MR_Integer) 0)));
#line 745 "float_regs.m"
              MR_Word transform_hlds__float_regs__V_30_30;

#line 745 "float_regs.m"
              transform_hlds__float_regs__IsExistConstruct_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS0_17, (MR_Integer) 1)));
#line 745 "float_regs.m"
              transform_hlds__float_regs__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS0_17, (MR_Integer) 2)));
#line 745 "float_regs.m"
            }
#line 746 "float_regs.m"
          else
#line 746 "float_regs.m"
            if (((MR_tag((MR_Word) transform_hlds__float_regs__RHS0_17)) == (MR_mktag((MR_Integer) 2))))
#line 750 "float_regs.m"
              {
#line 751 "float_regs.m"
                {
#line 751 "float_regs.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_unify_goal\'/9", (MR_String) "construct rhs_lambda_goal");
#line 751 "float_regs.m"
                  return;
                }
#line 750 "float_regs.m"
              }
#line 746 "float_regs.m"
            else
#line 747 "float_regs.m"
              {
#line 748 "float_regs.m"
                {
#line 748 "float_regs.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_unify_goal\'/9", (MR_String) "construct rhs_var");
#line 748 "float_regs.m"
                  return;
                }
#line 747 "float_regs.m"
              }
#line 759 "float_regs.m"
          if ((transform_hlds__float_regs__Args0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 754 "float_regs.m"
            {
#line 754 "float_regs.m"
              MR_Word transform_hlds__float_regs__ModuleInfo_41;
#line 754 "float_regs.m"
              MR_Word transform_hlds__float_regs__GoalInfo_42;

#line 755 "float_regs.m"
              {
#line 755 "float_regs.m"
                transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_73, &transform_hlds__float_regs__ModuleInfo_41);
              }
#line 756 "float_regs.m"
              {
#line 756 "float_regs.m"
                transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(transform_hlds__float_regs__ModuleInfo_41, transform_hlds__float_regs__CellVar_21, transform_hlds__float_regs__ConsId_22, transform_hlds__float_regs__Args0_23, transform_hlds__float_regs__GoalInfo0_11, &transform_hlds__float_regs__GoalInfo_42, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
              }
#line 758 "float_regs.m"
              {
#line 758 "float_regs.m"
                MR_Word base;
#line 758 "float_regs.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 758 "float_regs.m"
                *transform_hlds__float_regs__Goal_12 = base;
#line 758 "float_regs.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
#line 758 "float_regs.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo_42));
#line 758 "float_regs.m"
              }
#line 758 "float_regs.m"
              *transform_hlds__float_regs__STATE_VARIABLE_Info_74 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_73;
#line 758 "float_regs.m"
              *transform_hlds__float_regs__STATE_VARIABLE_Specs_76 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75;
#line 754 "float_regs.m"
            }
#line 759 "float_regs.m"
          else
#line 760 "float_regs.m"
            {
#line 760 "float_regs.m"
              MR_Word transform_hlds__float_regs__GoalContext_45;
#line 760 "float_regs.m"
              MR_Word transform_hlds__float_regs__Args_46;
#line 760 "float_regs.m"
              MR_Word transform_hlds__float_regs__UniModes_47;
#line 760 "float_regs.m"
              MR_Word transform_hlds__float_regs__MaybeWrappedGoals_48;

#line 761 "float_regs.m"
              {
#line 761 "float_regs.m"
                transform_hlds__float_regs__GoalContext_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_11);
              }
#line 762 "float_regs.m"
              {
#line 762 "float_regs.m"
                transform_hlds__float_regs__insert_reg_wrappers_construct_13_p_0(transform_hlds__float_regs__CellVar_21, transform_hlds__float_regs__ConsId_22, transform_hlds__float_regs__Args0_23, &transform_hlds__float_regs__Args_46, transform_hlds__float_regs__UniModes0_24, &transform_hlds__float_regs__UniModes_47, &transform_hlds__float_regs__MaybeWrappedGoals_48, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__GoalContext_45, transform_hlds__float_regs__STATE_VARIABLE_Info_0_73, transform_hlds__float_regs__STATE_VARIABLE_Info_74, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75, transform_hlds__float_regs__STATE_VARIABLE_Specs_76);
              }
#line 777 "float_regs.m"
              if ((transform_hlds__float_regs__MaybeWrappedGoals_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "float_regs.m"
                {
#line 778 "float_regs.m"
                  MR_Word transform_hlds__float_regs__ModuleInfo_102;
#line 778 "float_regs.m"
                  MR_Word transform_hlds__float_regs__GoalInfo_103;

#line 779 "float_regs.m"
                  {
#line 779 "float_regs.m"
                    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(*transform_hlds__float_regs__STATE_VARIABLE_Info_74, &transform_hlds__float_regs__ModuleInfo_102);
                  }
#line 780 "float_regs.m"
                  {
#line 780 "float_regs.m"
                    transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(transform_hlds__float_regs__ModuleInfo_102, transform_hlds__float_regs__CellVar_21, transform_hlds__float_regs__ConsId_22, transform_hlds__float_regs__Args0_23, transform_hlds__float_regs__GoalInfo0_11, &transform_hlds__float_regs__GoalInfo_103, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
                  }
#line 782 "float_regs.m"
                  {
#line 782 "float_regs.m"
                    MR_Word base;
#line 782 "float_regs.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "float_regs.m"
                    *transform_hlds__float_regs__Goal_12 = base;
#line 782 "float_regs.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
#line 782 "float_regs.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo_103));
#line 782 "float_regs.m"
                  }
#line 778 "float_regs.m"
                }
#line 777 "float_regs.m"
              else
#line 766 "float_regs.m"
                {
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__WrapGoals_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__MaybeWrappedGoals_48, (MR_Integer) 0)));
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__GoalInfo1_50;
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__RHS_51;
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__Unification_52;
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__GoalExpr1_53;
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__Goal1_54;
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_95_95;
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__V_97_97;
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__V_98_98;
#line 766 "float_regs.m"
                  MR_Word transform_hlds__float_regs__ModuleInfo_101;
#line 767 "float_regs.m"
                  MR_Box transform_hlds__float_regs__conv1_STATE_VARIABLE_InstMap_95_95;

#line 767 "float_regs.m"
                  {
#line 767 "float_regs.m"
                    mercury__list__foldl_4_p_0(transform_hlds__float_regs__TypeCtorInfo_128_128, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[4], transform_hlds__float_regs__WrapGoals_49, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71)), &transform_hlds__float_regs__conv1_STATE_VARIABLE_InstMap_95_95);
                  }
#line 767 "float_regs.m"
                  transform_hlds__float_regs__STATE_VARIABLE_InstMap_95_95 = ((MR_Word) transform_hlds__float_regs__conv1_STATE_VARIABLE_InstMap_95_95);
#line 768 "float_regs.m"
                  {
#line 768 "float_regs.m"
                    transform_hlds__lambda__lambda_info_get_module_info_2_p_0(*transform_hlds__float_regs__STATE_VARIABLE_Info_74, &transform_hlds__float_regs__ModuleInfo_101);
                  }
#line 769 "float_regs.m"
                  {
#line 769 "float_regs.m"
                    transform_hlds__float_regs__update_construct_goal_instmap_delta_8_p_0(transform_hlds__float_regs__ModuleInfo_101, transform_hlds__float_regs__CellVar_21, transform_hlds__float_regs__ConsId_22, transform_hlds__float_regs__Args_46, transform_hlds__float_regs__GoalInfo0_11, &transform_hlds__float_regs__GoalInfo1_50, transform_hlds__float_regs__STATE_VARIABLE_InstMap_95_95, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
                  }
#line 771 "float_regs.m"
                  {
#line 771 "float_regs.m"
                    transform_hlds__float_regs__RHS_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 771 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS_51, 0) = ((MR_Box) (transform_hlds__float_regs__ConsId_22));
#line 771 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS_51, 1) = ((MR_Box) (transform_hlds__float_regs__IsExistConstruct_29));
#line 771 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__RHS_51, 2) = ((MR_Box) (transform_hlds__float_regs__Args_46));
#line 771 "float_regs.m"
                  }
#line 772 "float_regs.m"
                  {
#line 772 "float_regs.m"
                    transform_hlds__float_regs__Unification_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 772 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 0) = ((MR_Box) (transform_hlds__float_regs__CellVar_21));
#line 772 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 1) = ((MR_Box) (transform_hlds__float_regs__ConsId_22));
#line 772 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 2) = ((MR_Box) (transform_hlds__float_regs__Args_46));
#line 772 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 3) = ((MR_Box) (transform_hlds__float_regs__UniModes_47));
#line 772 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 4) = ((MR_Box) (transform_hlds__float_regs__HowToConstruct_25));
#line 772 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 5) = ((MR_Box) (transform_hlds__float_regs__IsUnique_26));
#line 772 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Unification_52, 6) = ((MR_Box) (transform_hlds__float_regs__SubInfo_27));
#line 772 "float_regs.m"
                  }
#line 774 "float_regs.m"
                  {
#line 774 "float_regs.m"
                    transform_hlds__float_regs__GoalExpr1_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 774 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 0) = ((MR_Box) (transform_hlds__float_regs__LHS_16));
#line 774 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 1) = ((MR_Box) (transform_hlds__float_regs__RHS_51));
#line 774 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 2) = ((MR_Box) (transform_hlds__float_regs__Mode_18));
#line 774 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 3) = ((MR_Box) (transform_hlds__float_regs__Unification_52));
#line 774 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_53, 4) = ((MR_Box) (transform_hlds__float_regs__Context_20));
#line 774 "float_regs.m"
                  }
#line 775 "float_regs.m"
                  {
#line 775 "float_regs.m"
                    transform_hlds__float_regs__Goal1_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal1_54, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr1_53));
#line 775 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal1_54, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo1_50));
#line 775 "float_regs.m"
                  }
#line 776 "float_regs.m"
                  {
#line 776 "float_regs.m"
                    transform_hlds__float_regs__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_98_98, 0) = ((MR_Box) (transform_hlds__float_regs__Goal1_54));
#line 776 "float_regs.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "float_regs.m"
                  }
#line 776 "float_regs.m"
                  {
#line 776 "float_regs.m"
                    transform_hlds__float_regs__V_97_97 = mercury__list__f_43_43_2_f_0(transform_hlds__float_regs__TypeCtorInfo_128_128, transform_hlds__float_regs__WrapGoals_49, transform_hlds__float_regs__V_98_98);
                  }
#line 776 "float_regs.m"
                  {
#line 776 "float_regs.m"
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__float_regs__V_97_97, transform_hlds__float_regs__GoalInfo1_50, transform_hlds__float_regs__Goal_12);
#line 776 "float_regs.m"
                    return;
                  }
#line 766 "float_regs.m"
                }
#line 760 "float_regs.m"
            }
#line 743 "float_regs.m"
        }
#line 785 "float_regs.m"
      else
#line 785 "float_regs.m"
        if (((MR_tag((MR_Word) transform_hlds__float_regs__Unification0_19)) == (MR_mktag((MR_Integer) 1))))
#line 787 "float_regs.m"
          {
#line 787 "float_regs.m"
            MR_Word transform_hlds__float_regs__CanFail_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 4)));
#line 787 "float_regs.m"
            MR_Word transform_hlds__float_regs__CanCGC_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 5)));
#line 787 "float_regs.m"
            MR_Integer transform_hlds__float_regs__Arity_57;
#line 787 "float_regs.m"
            MR_Word transform_hlds__float_regs__CellVarInst0_58;
#line 787 "float_regs.m"
            MR_Word transform_hlds__float_regs__CellVarInst_59;
#line 787 "float_regs.m"
            MR_Word transform_hlds__float_regs__CellVar_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 0)));
#line 787 "float_regs.m"
            MR_Word transform_hlds__float_regs__ConsId_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 1)));
#line 787 "float_regs.m"
            MR_Word transform_hlds__float_regs__UniModes0_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 3)));
#line 787 "float_regs.m"
            MR_Word transform_hlds__float_regs__ModuleInfo_118;
#line 787 "float_regs.m"
            MR_Word transform_hlds__float_regs__Args_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification0_19, (MR_Integer) 2)));
#line 806 "float_regs.m"
            MR_Word transform_hlds__float_regs__UniModes_111;
#line 796 "float_regs.m"
            MR_Word transform_hlds__float_regs__TypeCtorInfo_134_134;
#line 796 "float_regs.m"
            MR_Word transform_hlds__float_regs__TypeCtorInfo_135_135;
#line 796 "float_regs.m"
            MR_Word transform_hlds__float_regs__ArgInsts_60;
#line 796 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_82_82;
#line 799 "float_regs.m"
            MR_Word transform_hlds__float_regs__TypeInfo_136_136;

#line 791 "float_regs.m"
            {
#line 791 "float_regs.m"
              transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_73, &transform_hlds__float_regs__ModuleInfo_118);
            }
#line 792 "float_regs.m"
            {
#line 792 "float_regs.m"
              mercury__list__length_2_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], transform_hlds__float_regs__Args_119, &transform_hlds__float_regs__Arity_57);
            }
#line 793 "float_regs.m"
            {
#line 793 "float_regs.m"
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__CellVar_115, &transform_hlds__float_regs__CellVarInst0_58);
            }
#line 794 "float_regs.m"
            {
#line 794 "float_regs.m"
              check_hlds__inst_match__inst_expand_3_p_0(transform_hlds__float_regs__ModuleInfo_118, transform_hlds__float_regs__CellVarInst0_58, &transform_hlds__float_regs__CellVarInst_59);
            }
#line 796 "float_regs.m"
            {
#line 796 "float_regs.m"
              transform_hlds__float_regs__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(transform_hlds__float_regs__CellVarInst_59, transform_hlds__float_regs__ConsId_116, transform_hlds__float_regs__Arity_57, &transform_hlds__float_regs__ArgInsts_60);
            }
#line 796 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 796 "float_regs.m"
              {
#line 9007 "transform_hlds.float_regs.c"
                transform_hlds__float_regs__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 9009 "transform_hlds.float_regs.c"
                transform_hlds__float_regs__TypeCtorInfo_135_135 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0;
#line 797 "float_regs.m"
                {
#line 797 "float_regs.m"
                  transform_hlds__float_regs__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 797 "float_regs.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_82_82, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[2]));
#line 797 "float_regs.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_82_82, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0_2));
#line 797 "float_regs.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 797 "float_regs.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_82_82, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_118));
#line 797 "float_regs.m"
                }
#line 797 "float_regs.m"
                {
#line 797 "float_regs.m"
                  mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_134_134, transform_hlds__float_regs__TypeCtorInfo_135_135, transform_hlds__float_regs__TypeCtorInfo_135_135, transform_hlds__float_regs__V_82_82, transform_hlds__float_regs__ArgInsts_60, transform_hlds__float_regs__UniModes0_117, &transform_hlds__float_regs__UniModes_111);
                }
#line 9030 "transform_hlds.float_regs.c"
                transform_hlds__float_regs__TypeInfo_136_136 = (MR_Word) &transform_hlds__float_regs_scalar_common_1[4];
#line 799 "float_regs.m"
                {
#line 799 "float_regs.m"
                  transform_hlds__float_regs__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__float_regs__TypeInfo_136_136, ((MR_Box) (transform_hlds__float_regs__UniModes_111)), ((MR_Box) (transform_hlds__float_regs__UniModes0_117)));
                }
#line 799 "float_regs.m"
                transform_hlds__float_regs__succeeded = !(transform_hlds__float_regs__succeeded);
#line 796 "float_regs.m"
              }
#line 806 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 802 "float_regs.m"
              {
#line 802 "float_regs.m"
                MR_Word transform_hlds__float_regs__Unification_108;
#line 802 "float_regs.m"
                MR_Word transform_hlds__float_regs__GoalExpr1_109;
#line 802 "float_regs.m"
                MR_Word transform_hlds__float_regs__Goal1_110;

#line 801 "float_regs.m"
                {
#line 801 "float_regs.m"
                  transform_hlds__float_regs__Unification_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 801 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 0) = ((MR_Box) (transform_hlds__float_regs__CellVar_115));
#line 801 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 1) = ((MR_Box) (transform_hlds__float_regs__ConsId_116));
#line 801 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 2) = ((MR_Box) (transform_hlds__float_regs__Args_119));
#line 801 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 3) = ((MR_Box) (transform_hlds__float_regs__UniModes_111));
#line 801 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 4) = ((MR_Box) (transform_hlds__float_regs__CanFail_55));
#line 801 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__Unification_108, 5) = ((MR_Box) (transform_hlds__float_regs__CanCGC_56));
#line 801 "float_regs.m"
                }
#line 803 "float_regs.m"
                {
#line 803 "float_regs.m"
                  transform_hlds__float_regs__GoalExpr1_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 803 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 0) = ((MR_Box) (transform_hlds__float_regs__LHS_16));
#line 803 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 1) = ((MR_Box) (transform_hlds__float_regs__RHS0_17));
#line 803 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 2) = ((MR_Box) (transform_hlds__float_regs__Mode_18));
#line 803 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 3) = ((MR_Box) (transform_hlds__float_regs__Unification_108));
#line 803 "float_regs.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GoalExpr1_109, 4) = ((MR_Box) (transform_hlds__float_regs__Context_20));
#line 803 "float_regs.m"
                }
#line 804 "float_regs.m"
                {
#line 804 "float_regs.m"
                  transform_hlds__float_regs__Goal1_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "float_regs.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal1_110, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr1_109));
#line 804 "float_regs.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal1_110, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_11));
#line 804 "float_regs.m"
                }
#line 805 "float_regs.m"
                {
#line 805 "float_regs.m"
                  transform_hlds__float_regs__do_recompute_atomic_instmap_delta_5_p_0(transform_hlds__float_regs__Goal1_110, transform_hlds__float_regs__Goal_12, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_Info_0_73, transform_hlds__float_regs__STATE_VARIABLE_Info_74);
                }
#line 802 "float_regs.m"
              }
#line 806 "float_regs.m"
            else
#line 807 "float_regs.m"
              {
#line 807 "float_regs.m"
                {
#line 807 "float_regs.m"
                  MR_Word base;
#line 807 "float_regs.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 807 "float_regs.m"
                  *transform_hlds__float_regs__Goal_12 = base;
#line 807 "float_regs.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
#line 807 "float_regs.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_11));
#line 807 "float_regs.m"
                }
#line 807 "float_regs.m"
                *transform_hlds__float_regs__STATE_VARIABLE_Info_74 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_73;
#line 807 "float_regs.m"
              }
#line 809 "float_regs.m"
            {
#line 809 "float_regs.m"
              hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_12, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
            }
#line 809 "float_regs.m"
            *transform_hlds__float_regs__STATE_VARIABLE_Specs_76 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75;
#line 787 "float_regs.m"
          }
#line 785 "float_regs.m"
        else
#line 785 "float_regs.m"
          if (((((MR_tag((MR_Word) transform_hlds__float_regs__Unification0_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Unification0_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 823 "float_regs.m"
            {
#line 824 "float_regs.m"
              {
#line 824 "float_regs.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_unify_goal\'/9", (MR_String) "complicated_unify");
#line 824 "float_regs.m"
                return;
              }
#line 823 "float_regs.m"
            }
#line 785 "float_regs.m"
          else
#line 819 "float_regs.m"
            {
#line 820 "float_regs.m"
              {
#line 820 "float_regs.m"
                MR_Word base;
#line 820 "float_regs.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 820 "float_regs.m"
                *transform_hlds__float_regs__Goal_12 = base;
#line 820 "float_regs.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr0_10));
#line 820 "float_regs.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_11));
#line 820 "float_regs.m"
              }
#line 821 "float_regs.m"
              {
#line 821 "float_regs.m"
                hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_12, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_71, transform_hlds__float_regs__STATE_VARIABLE_InstMap_72);
              }
#line 821 "float_regs.m"
              *transform_hlds__float_regs__STATE_VARIABLE_Info_74 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_73;
#line 821 "float_regs.m"
              *transform_hlds__float_regs__STATE_VARIABLE_Specs_76 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_75;
#line 819 "float_regs.m"
            }
#line 739 "float_regs.m"
  }
#line 733 "float_regs.m"
}

#line 719 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(
#line 719 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal_4,
#line 719 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_5,
#line 719 "float_regs.m"
  MR_Word * transform_hlds__float_regs__InstMap_6)
#line 719 "float_regs.m"
{
#line 722 "float_regs.m"
  {
#line 722 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 722 "float_regs.m"
    MR_Word transform_hlds__float_regs__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal_4, (MR_Integer) 1)));
#line 722 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMapDelta_9;
#line 723 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal_4, (MR_Integer) 0)));

#line 724 "float_regs.m"
    {
#line 724 "float_regs.m"
      transform_hlds__float_regs__InstMapDelta_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__float_regs__GoalInfo_8);
    }
#line 725 "float_regs.m"
    {
#line 725 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(transform_hlds__float_regs__InstMapDelta_9);
    }
#line 727 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 726 "float_regs.m"
      {
#line 726 "float_regs.m"
        hlds__instmap__init_unreachable_1_p_0(transform_hlds__float_regs__InstMap_6);
#line 726 "float_regs.m"
        return;
      }
#line 727 "float_regs.m"
    else
#line 728 "float_regs.m"
      *transform_hlds__float_regs__InstMap_6 = transform_hlds__float_regs__InstMap0_5;
#line 722 "float_regs.m"
  }
#line 719 "float_regs.m"
}

#line 708 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__do_recompute_atomic_instmap_delta_5_p_0(
#line 708 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_6,
#line 708 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_7,
#line 708 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap_8,
#line 708 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_14,
#line 708 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_15)
#line 708 "float_regs.m"
{
#line 711 "float_regs.m"
  {
#line 711 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 711 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes_10;
#line 711 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstVarSet_11;
#line 711 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo0_12;
#line 711 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_13;

#line 712 "float_regs.m"
    {
#line 712 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_14, &transform_hlds__float_regs__VarTypes_10);
    }
#line 713 "float_regs.m"
    {
#line 713 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_14, &transform_hlds__float_regs__InstVarSet_11);
    }
#line 714 "float_regs.m"
    {
#line 714 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_14, &transform_hlds__float_regs__ModuleInfo0_12);
    }
#line 715 "float_regs.m"
    {
#line 715 "float_regs.m"
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__float_regs__Goal0_6, transform_hlds__float_regs__Goal_7, transform_hlds__float_regs__VarTypes_10, transform_hlds__float_regs__InstVarSet_11, transform_hlds__float_regs__InstMap_8, transform_hlds__float_regs__ModuleInfo0_12, &transform_hlds__float_regs__ModuleInfo_13);
    }
#line 717 "float_regs.m"
    {
#line 717 "float_regs.m"
      transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_13, transform_hlds__float_regs__STATE_VARIABLE_Info_0_14, transform_hlds__float_regs__STATE_VARIABLE_Info_15);
#line 717 "float_regs.m"
      return;
    }
#line 711 "float_regs.m"
  }
#line 708 "float_regs.m"
}

#line 694 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__finish_call_goal_8_p_0(
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__WrapGoals_9,
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__CallGoalExpr0_10,
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__CallGoalInfo0_11,
#line 694 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_12,
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_19,
#line 694 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_20,
#line 694 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_21,
#line 694 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_22)
#line 694 "float_regs.m"
{
#line 699 "float_regs.m"
  {
#line 699 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 699 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallGoal0_15;
#line 699 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallGoal_16;
#line 699 "float_regs.m"
    MR_Word transform_hlds__float_regs__CallGoalInfo_18;
#line 699 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_25_25;
#line 699 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_26_26;
#line 699 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes_35;
#line 699 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstVarSet_36;
#line 699 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo0_37;
#line 699 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_38;
#line 705 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_17_17;

#line 702 "float_regs.m"
    {
#line 702 "float_regs.m"
      transform_hlds__float_regs__CallGoal0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 702 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal0_15, 0) = ((MR_Box) (transform_hlds__float_regs__CallGoalExpr0_10));
#line 702 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal0_15, 1) = ((MR_Box) (transform_hlds__float_regs__CallGoalInfo0_11));
#line 702 "float_regs.m"
    }
#line 712 "float_regs.m"
    {
#line 712 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_21, &transform_hlds__float_regs__VarTypes_35);
    }
#line 713 "float_regs.m"
    {
#line 713 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_21, &transform_hlds__float_regs__InstVarSet_36);
    }
#line 714 "float_regs.m"
    {
#line 714 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_0_21, &transform_hlds__float_regs__ModuleInfo0_37);
    }
#line 715 "float_regs.m"
    {
#line 715 "float_regs.m"
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__float_regs__CallGoal0_15, &transform_hlds__float_regs__CallGoal_16, transform_hlds__float_regs__VarTypes_35, transform_hlds__float_regs__InstVarSet_36, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_19, transform_hlds__float_regs__ModuleInfo0_37, &transform_hlds__float_regs__ModuleInfo_38);
    }
#line 717 "float_regs.m"
    {
#line 717 "float_regs.m"
      transform_hlds__lambda__lambda_info_set_module_info_3_p_0(transform_hlds__float_regs__ModuleInfo_38, transform_hlds__float_regs__STATE_VARIABLE_Info_0_21, transform_hlds__float_regs__STATE_VARIABLE_Info_22);
    }
#line 704 "float_regs.m"
    {
#line 704 "float_regs.m"
      hlds__goal_util__update_instmap_3_p_0(transform_hlds__float_regs__CallGoal_16, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_19, transform_hlds__float_regs__STATE_VARIABLE_InstMap_20);
    }
#line 705 "float_regs.m"
    transform_hlds__float_regs__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal_16, (MR_Integer) 0)));
#line 705 "float_regs.m"
    transform_hlds__float_regs__CallGoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__CallGoal_16, (MR_Integer) 1)));
#line 706 "float_regs.m"
    {
#line 706 "float_regs.m"
      transform_hlds__float_regs__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_26_26, 0) = ((MR_Box) (transform_hlds__float_regs__CallGoal_16));
#line 706 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "float_regs.m"
    }
#line 706 "float_regs.m"
    {
#line 706 "float_regs.m"
      transform_hlds__float_regs__V_25_25 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__float_regs__WrapGoals_9, transform_hlds__float_regs__V_26_26);
    }
#line 706 "float_regs.m"
    {
#line 706 "float_regs.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__float_regs__V_25_25, transform_hlds__float_regs__CallGoalInfo_18, transform_hlds__float_regs__Goal_12);
#line 706 "float_regs.m"
      return;
    }
#line 699 "float_regs.m"
  }
#line 694 "float_regs.m"
}

#line 583 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0_1(
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 583 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2,
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_3,
#line 583 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_4,
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_5,
#line 583 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_6,
#line 583 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_7,
#line 583 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_8)
#line 583 "float_regs.m"
{
#line 583 "float_regs.m"
  {
#line 583 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 583 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv3_Goal_10;
#line 583 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv2_STATE_VARIABLE_InstMap_15;
#line 583 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_17;
#line 583 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_19;

#line 583 "float_regs.m"
    {
#line 583 "float_regs.m"
      transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv3_Goal_10, ((MR_Word) transform_hlds__float_regs__wrapper_arg_3), &transform_hlds__float_regs__conv2_STATE_VARIABLE_InstMap_15, ((MR_Word) transform_hlds__float_regs__wrapper_arg_5), &transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_17, ((MR_Word) transform_hlds__float_regs__wrapper_arg_7), &transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_19);
    }
#line 583 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv3_Goal_10));
#line 583 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_4 = ((MR_Box) (transform_hlds__float_regs__conv2_STATE_VARIABLE_InstMap_15));
#line 583 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_6 = ((MR_Box) (transform_hlds__float_regs__conv1_STATE_VARIABLE_Info_17));
#line 583 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_8 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_19));
#line 583 "float_regs.m"
  }
#line 583 "float_regs.m"
}

#line 566 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(
#line 566 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_9,
#line 566 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_10,
#line 566 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73,
#line 566 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_74,
#line 566 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_75,
#line 566 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_76,
#line 566 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77,
#line 566 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_78)
#line 566 "float_regs.m"
{
#line 570 "float_regs.m"
  {
#line 570 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 570 "float_regs.m"
    MR_Word transform_hlds__float_regs__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal0_9, (MR_Integer) 0)));
#line 570 "float_regs.m"
    MR_Word transform_hlds__float_regs__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__Goal0_9, (MR_Integer) 1)));

#line 576 "float_regs.m"
    if (((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 0))))
#line 608 "float_regs.m"
      {
#line 608 "float_regs.m"
        MR_Word transform_hlds__float_regs__SubGoal0_30 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__GoalExpr0_14), (MR_Integer) 0);
#line 608 "float_regs.m"
        MR_Word transform_hlds__float_regs__SubGoal_31;
#line 608 "float_regs.m"
        MR_Word transform_hlds__float_regs__GoalExpr_134;
#line 609 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_32_32;

#line 609 "float_regs.m"
        {
#line 609 "float_regs.m"
          transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(transform_hlds__float_regs__SubGoal0_30, &transform_hlds__float_regs__SubGoal_31, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, &transform_hlds__float_regs__V_32_32, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
        }
#line 611 "float_regs.m"
        transform_hlds__float_regs__GoalExpr_134 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__float_regs__SubGoal_31);
#line 612 "float_regs.m"
        {
#line 612 "float_regs.m"
          MR_Word base;
#line 612 "float_regs.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "float_regs.m"
          *transform_hlds__float_regs__Goal_10 = base;
#line 612 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_134));
#line 612 "float_regs.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
#line 612 "float_regs.m"
        }
#line 613 "float_regs.m"
        {
#line 613 "float_regs.m"
          transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(*transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74);
#line 613 "float_regs.m"
          return;
        }
#line 608 "float_regs.m"
      }
#line 576 "float_regs.m"
    else
#line 576 "float_regs.m"
      if (((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 2))))
#line 635 "float_regs.m"
        {
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__PredId_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)));
#line 635 "float_regs.m"
          MR_Integer transform_hlds__float_regs__ProcId_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__Args0_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__Builtin_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 3)));
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__MaybeUnifyContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 4)));
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__SymName_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 5)));
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__Context_45;
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__Args_46;
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__WrapGoals_47;
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__MissingProc_48;
#line 635 "float_regs.m"
          MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_97_97;

#line 636 "float_regs.m"
          {
#line 636 "float_regs.m"
            transform_hlds__float_regs__Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
          }
#line 637 "float_regs.m"
          {
#line 637 "float_regs.m"
            transform_hlds__float_regs__insert_reg_wrappers_plain_call_12_p_0(transform_hlds__float_regs__PredId_39, transform_hlds__float_regs__ProcId_40, transform_hlds__float_regs__Args0_41, &transform_hlds__float_regs__Args_46, &transform_hlds__float_regs__WrapGoals_47, &transform_hlds__float_regs__MissingProc_48, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__Context_45, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, &transform_hlds__float_regs__STATE_VARIABLE_Info_97_97, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
          }
#line 645 "float_regs.m"
          if ((transform_hlds__float_regs__MissingProc_48 == (MR_Integer) 0))
#line 640 "float_regs.m"
            {
#line 640 "float_regs.m"
              MR_Word transform_hlds__float_regs__GoalExpr1_49;

#line 641 "float_regs.m"
              {
#line 641 "float_regs.m"
                transform_hlds__float_regs__GoalExpr1_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 641 "float_regs.m"
                MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 0) = ((MR_Box) (transform_hlds__float_regs__PredId_39));
#line 641 "float_regs.m"
                MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 1) = ((MR_Box) (transform_hlds__float_regs__ProcId_40));
#line 641 "float_regs.m"
                MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 2) = ((MR_Box) (transform_hlds__float_regs__Args_46));
#line 641 "float_regs.m"
                MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 3) = ((MR_Box) (transform_hlds__float_regs__Builtin_42));
#line 641 "float_regs.m"
                MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 4) = ((MR_Box) (transform_hlds__float_regs__MaybeUnifyContext_43));
#line 641 "float_regs.m"
                MR_hl_field(MR_mktag(2), transform_hlds__float_regs__GoalExpr1_49, 5) = ((MR_Box) (transform_hlds__float_regs__SymName_44));
#line 641 "float_regs.m"
              }
#line 643 "float_regs.m"
              {
#line 643 "float_regs.m"
                transform_hlds__float_regs__finish_call_goal_8_p_0(transform_hlds__float_regs__WrapGoals_47, transform_hlds__float_regs__GoalExpr1_49, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_97_97, transform_hlds__float_regs__STATE_VARIABLE_Info_76);
#line 643 "float_regs.m"
                return;
              }
#line 640 "float_regs.m"
            }
#line 645 "float_regs.m"
          else
#line 646 "float_regs.m"
            {
#line 647 "float_regs.m"
              *transform_hlds__float_regs__Goal_10 = transform_hlds__float_regs__Goal0_9;
#line 647 "float_regs.m"
              *transform_hlds__float_regs__STATE_VARIABLE_InstMap_74 = transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73;
#line 647 "float_regs.m"
              *transform_hlds__float_regs__STATE_VARIABLE_Info_76 = transform_hlds__float_regs__STATE_VARIABLE_Info_97_97;
#line 646 "float_regs.m"
            }
#line 635 "float_regs.m"
        }
#line 576 "float_regs.m"
      else
#line 576 "float_regs.m"
        if (((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 1))))
#line 574 "float_regs.m"
          {
#line 574 "float_regs.m"
            transform_hlds__float_regs__insert_reg_wrappers_unify_goal_9_p_0(transform_hlds__float_regs__GoalExpr0_14, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
#line 574 "float_regs.m"
            return;
          }
#line 576 "float_regs.m"
        else
#line 576 "float_regs.m"
          if (((((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 680 "float_regs.m"
            {
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__Attributes_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__ForeignArgs0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 4)));
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__ExtraArgs_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 5)));
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__MaybeTraceRuntimeCond_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 6)));
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__PragmaImpl_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 7)));
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__ForeignArgs_71;
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_82_82;
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__PredId_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
#line 680 "float_regs.m"
              MR_Integer transform_hlds__float_regs__ProcId_164 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 3)));
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__Context_165;
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__WrapGoals_166;
#line 680 "float_regs.m"
              MR_Word transform_hlds__float_regs__GoalExpr1_167;

#line 681 "float_regs.m"
              {
#line 681 "float_regs.m"
                transform_hlds__float_regs__Context_165 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
              }
#line 682 "float_regs.m"
              {
#line 682 "float_regs.m"
                transform_hlds__float_regs__insert_reg_wrappers_foreign_call_11_p_0(transform_hlds__float_regs__PredId_163, transform_hlds__float_regs__ProcId_164, transform_hlds__float_regs__ForeignArgs0_67, &transform_hlds__float_regs__ForeignArgs_71, &transform_hlds__float_regs__WrapGoals_166, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__Context_165, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, &transform_hlds__float_regs__STATE_VARIABLE_Info_82_82, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
              }
#line 684 "float_regs.m"
              {
#line 684 "float_regs.m"
                transform_hlds__float_regs__GoalExpr1_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 684 "float_regs.m"
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 684 "float_regs.m"
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 1) = ((MR_Box) (transform_hlds__float_regs__Attributes_66));
#line 684 "float_regs.m"
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 2) = ((MR_Box) (transform_hlds__float_regs__PredId_163));
#line 684 "float_regs.m"
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 3) = ((MR_Box) (transform_hlds__float_regs__ProcId_164));
#line 684 "float_regs.m"
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 4) = ((MR_Box) (transform_hlds__float_regs__ForeignArgs_71));
#line 684 "float_regs.m"
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 5) = ((MR_Box) (transform_hlds__float_regs__ExtraArgs_68));
#line 684 "float_regs.m"
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 6) = ((MR_Box) (transform_hlds__float_regs__MaybeTraceRuntimeCond_69));
#line 684 "float_regs.m"
                MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_167, 7) = ((MR_Box) (transform_hlds__float_regs__PragmaImpl_70));
#line 684 "float_regs.m"
              }
#line 686 "float_regs.m"
              {
#line 686 "float_regs.m"
                transform_hlds__float_regs__finish_call_goal_8_p_0(transform_hlds__float_regs__WrapGoals_166, transform_hlds__float_regs__GoalExpr1_167, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_82_82, transform_hlds__float_regs__STATE_VARIABLE_Info_76);
#line 686 "float_regs.m"
                return;
              }
#line 680 "float_regs.m"
            }
#line 576 "float_regs.m"
          else
#line 576 "float_regs.m"
            if (((((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 577 "float_regs.m"
              {
#line 577 "float_regs.m"
                MR_Word transform_hlds__float_regs__ConjType_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
#line 577 "float_regs.m"
                MR_Word transform_hlds__float_regs__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
#line 577 "float_regs.m"
                MR_Word transform_hlds__float_regs__Goals_23;
#line 577 "float_regs.m"
                MR_Word transform_hlds__float_regs__GoalExpr_24;
#line 577 "float_regs.m"
                MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_122_122;

#line 581 "float_regs.m"
                if ((transform_hlds__float_regs__ConjType_21 == (MR_Integer) 1))
#line 582 "float_regs.m"
                  {
#line 582 "float_regs.m"
                    MR_Word transform_hlds__float_regs__TypeCtorInfo_176_176 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 583 "float_regs.m"
                    MR_Box transform_hlds__float_regs__conv6_STATE_VARIABLE_InstMap_122_122;
#line 583 "float_regs.m"
                    MR_Box transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_76;
#line 583 "float_regs.m"
                    MR_Box transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_78;

#line 583 "float_regs.m"
                    {
#line 583 "float_regs.m"
                      mercury__list__map_foldl3_9_p_1(transform_hlds__float_regs__TypeCtorInfo_176_176, transform_hlds__float_regs__TypeCtorInfo_176_176, (MR_Word) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0, (MR_Word) &transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0, (MR_Word) &transform_hlds__float_regs_scalar_common_1[0], (MR_Word) &transform_hlds__float_regs_scalar_common_3[3], transform_hlds__float_regs__Goals0_22, &transform_hlds__float_regs__Goals_23, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73)), &transform_hlds__float_regs__conv6_STATE_VARIABLE_InstMap_122_122, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Info_0_75)), &transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_76, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77)), &transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_78);
                    }
#line 583 "float_regs.m"
                    transform_hlds__float_regs__STATE_VARIABLE_InstMap_122_122 = ((MR_Word) transform_hlds__float_regs__conv6_STATE_VARIABLE_InstMap_122_122);
#line 583 "float_regs.m"
                    *transform_hlds__float_regs__STATE_VARIABLE_Info_76 = ((MR_Word) transform_hlds__float_regs__conv5_STATE_VARIABLE_Info_76);
#line 583 "float_regs.m"
                    *transform_hlds__float_regs__STATE_VARIABLE_Specs_78 = ((MR_Word) transform_hlds__float_regs__conv4_STATE_VARIABLE_Specs_78);
#line 582 "float_regs.m"
                  }
#line 581 "float_regs.m"
                else
#line 580 "float_regs.m"
                  {
#line 580 "float_regs.m"
                    transform_hlds__float_regs__insert_reg_wrappers_conj_8_p_0(transform_hlds__float_regs__Goals0_22, &transform_hlds__float_regs__Goals_23, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, &transform_hlds__float_regs__STATE_VARIABLE_InstMap_122_122, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                  }
#line 586 "float_regs.m"
                {
#line 586 "float_regs.m"
                  transform_hlds__float_regs__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 586 "float_regs.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 586 "float_regs.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_24, 1) = ((MR_Box) (transform_hlds__float_regs__ConjType_21));
#line 586 "float_regs.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_24, 2) = ((MR_Box) (transform_hlds__float_regs__Goals_23));
#line 586 "float_regs.m"
                }
#line 587 "float_regs.m"
                {
#line 587 "float_regs.m"
                  MR_Word base;
#line 587 "float_regs.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "float_regs.m"
                  *transform_hlds__float_regs__Goal_10 = base;
#line 587 "float_regs.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_24));
#line 587 "float_regs.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
#line 587 "float_regs.m"
                }
#line 592 "float_regs.m"
                {
#line 592 "float_regs.m"
                  transform_hlds__float_regs__update_instmap_if_unreachable_3_p_0(*transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_122_122, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74);
#line 592 "float_regs.m"
                  return;
                }
#line 577 "float_regs.m"
              }
#line 576 "float_regs.m"
            else
#line 576 "float_regs.m"
              if (((((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 594 "float_regs.m"
                {
#line 594 "float_regs.m"
                  MR_Word transform_hlds__float_regs__NonLocals_25;
#line 594 "float_regs.m"
                  MR_Word transform_hlds__float_regs__Goals0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
#line 594 "float_regs.m"
                  MR_Word transform_hlds__float_regs__Goals_130;
#line 594 "float_regs.m"
                  MR_Word transform_hlds__float_regs__GoalExpr_131;

#line 595 "float_regs.m"
                  {
#line 595 "float_regs.m"
                    transform_hlds__float_regs__NonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
                  }
#line 596 "float_regs.m"
                  {
#line 596 "float_regs.m"
                    transform_hlds__float_regs__insert_reg_wrappers_disj_9_p_0(transform_hlds__float_regs__Goals0_129, &transform_hlds__float_regs__Goals_130, transform_hlds__float_regs__NonLocals_25, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                  }
#line 598 "float_regs.m"
                  {
#line 598 "float_regs.m"
                    transform_hlds__float_regs__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "float_regs.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 598 "float_regs.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_131, 1) = ((MR_Box) (transform_hlds__float_regs__Goals_130));
#line 598 "float_regs.m"
                  }
#line 599 "float_regs.m"
                  {
#line 599 "float_regs.m"
                    MR_Word base;
#line 599 "float_regs.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 599 "float_regs.m"
                    *transform_hlds__float_regs__Goal_10 = base;
#line 599 "float_regs.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_131));
#line 599 "float_regs.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
#line 599 "float_regs.m"
                  }
#line 594 "float_regs.m"
                }
#line 576 "float_regs.m"
              else
#line 576 "float_regs.m"
                if (((((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 651 "float_regs.m"
                  {
#line 651 "float_regs.m"
                    MR_Word transform_hlds__float_regs__GenericCall_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
#line 651 "float_regs.m"
                    MR_Word transform_hlds__float_regs__Modes0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 3)));
#line 651 "float_regs.m"
                    MR_Word transform_hlds__float_regs__Determinism_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 5)));
#line 651 "float_regs.m"
                    MR_Word transform_hlds__float_regs__Args0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
#line 650 "float_regs.m"
                    MR_Word transform_hlds__float_regs___MaybeArgRegs0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 4)));

#line 661 "float_regs.m"
                    if (((MR_tag((MR_Word) transform_hlds__float_regs__GenericCall_50)) == (MR_mktag((MR_Integer) 1))))
#line 662 "float_regs.m"
                      {
#line 662 "float_regs.m"
                        MR_Integer transform_hlds__float_regs__MethodNum_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 1)));
#line 662 "float_regs.m"
                        MR_Word transform_hlds__float_regs__ClassId_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 2)));
#line 662 "float_regs.m"
                        MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_87_87;
#line 662 "float_regs.m"
                        MR_Word transform_hlds__float_regs__Context_149;
#line 662 "float_regs.m"
                        MR_Word transform_hlds__float_regs__Args_150;
#line 662 "float_regs.m"
                        MR_Word transform_hlds__float_regs__WrapGoals_151;
#line 662 "float_regs.m"
                        MR_Word transform_hlds__float_regs__GoalExpr1_152;
#line 662 "float_regs.m"
                        MR_Word transform_hlds__float_regs__Modes_153;
#line 662 "float_regs.m"
                        MR_Word transform_hlds__float_regs___TCIVar_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 0)));
#line 662 "float_regs.m"
                        MR_Word transform_hlds__float_regs__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 3)));

#line 663 "float_regs.m"
                        {
#line 663 "float_regs.m"
                          transform_hlds__float_regs__Context_149 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
                        }
#line 664 "float_regs.m"
                        {
#line 664 "float_regs.m"
                          transform_hlds__float_regs__insert_reg_wrappers_method_call_13_p_0(transform_hlds__float_regs__ClassId_62, transform_hlds__float_regs__MethodNum_61, transform_hlds__float_regs__Args0_158, &transform_hlds__float_regs__Args_150, transform_hlds__float_regs__Modes0_51, &transform_hlds__float_regs__Modes_153, &transform_hlds__float_regs__WrapGoals_151, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__Context_149, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, &transform_hlds__float_regs__STATE_VARIABLE_Info_87_87, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                        }
#line 667 "float_regs.m"
                        {
#line 667 "float_regs.m"
                          transform_hlds__float_regs__GoalExpr1_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 667 "float_regs.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 667 "float_regs.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 1) = ((MR_Box) (transform_hlds__float_regs__GenericCall_50));
#line 667 "float_regs.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 2) = ((MR_Box) (transform_hlds__float_regs__Args_150));
#line 667 "float_regs.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 3) = ((MR_Box) (transform_hlds__float_regs__Modes_153));
#line 667 "float_regs.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "float_regs.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_152, 5) = ((MR_Box) (transform_hlds__float_regs__Determinism_53));
#line 667 "float_regs.m"
                        }
#line 669 "float_regs.m"
                        {
#line 669 "float_regs.m"
                          transform_hlds__float_regs__finish_call_goal_8_p_0(transform_hlds__float_regs__WrapGoals_151, transform_hlds__float_regs__GoalExpr1_152, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_87_87, transform_hlds__float_regs__STATE_VARIABLE_Info_76);
#line 669 "float_regs.m"
                          return;
                        }
#line 662 "float_regs.m"
                      }
#line 661 "float_regs.m"
                    else
#line 661 "float_regs.m"
                      if (((MR_tag((MR_Word) transform_hlds__float_regs__GenericCall_50)) == (MR_mktag((MR_Integer) 0))))
#line 653 "float_regs.m"
                        {
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs__CallVar_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 0)));
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs__Modes_58;
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs__ArgsRegs_59;
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_92_92;
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs__V_94_94;
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs__Context_145;
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs__Args_146;
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs__WrapGoals_147;
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs__GoalExpr1_148;
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs___Purity_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 1)));
#line 653 "float_regs.m"
                          MR_Word transform_hlds__float_regs___PredOrFunc_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 2)));
#line 653 "float_regs.m"
                          MR_Integer transform_hlds__float_regs___Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__GenericCall_50, (MR_Integer) 3)));

#line 654 "float_regs.m"
                          {
#line 654 "float_regs.m"
                            transform_hlds__float_regs__Context_145 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
                          }
#line 655 "float_regs.m"
                          {
#line 655 "float_regs.m"
                            transform_hlds__float_regs__insert_reg_wrappers_higher_order_call_12_p_0(transform_hlds__float_regs__CallVar_54, transform_hlds__float_regs__Args0_158, &transform_hlds__float_regs__Args_146, &transform_hlds__float_regs__Modes_58, &transform_hlds__float_regs__ArgsRegs_59, &transform_hlds__float_regs__WrapGoals_147, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__Context_145, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, &transform_hlds__float_regs__STATE_VARIABLE_Info_92_92, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                          }
#line 658 "float_regs.m"
                          {
#line 658 "float_regs.m"
                            transform_hlds__float_regs__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "float_regs.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_94_94, 0) = ((MR_Box) (transform_hlds__float_regs__ArgsRegs_59));
#line 658 "float_regs.m"
                          }
#line 657 "float_regs.m"
                          {
#line 657 "float_regs.m"
                            transform_hlds__float_regs__GoalExpr1_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 657 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 657 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 1) = ((MR_Box) (transform_hlds__float_regs__GenericCall_50));
#line 657 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 2) = ((MR_Box) (transform_hlds__float_regs__Args_146));
#line 657 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 3) = ((MR_Box) (transform_hlds__float_regs__Modes_58));
#line 657 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 4) = ((MR_Box) (transform_hlds__float_regs__V_94_94));
#line 657 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr1_148, 5) = ((MR_Box) (transform_hlds__float_regs__Determinism_53));
#line 657 "float_regs.m"
                          }
#line 659 "float_regs.m"
                          {
#line 659 "float_regs.m"
                            transform_hlds__float_regs__finish_call_goal_8_p_0(transform_hlds__float_regs__WrapGoals_147, transform_hlds__float_regs__GoalExpr1_148, transform_hlds__float_regs__GoalInfo0_15, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_92_92, transform_hlds__float_regs__STATE_VARIABLE_Info_76);
#line 659 "float_regs.m"
                            return;
                          }
#line 653 "float_regs.m"
                        }
#line 661 "float_regs.m"
                      else
#line 674 "float_regs.m"
                        {
#line 675 "float_regs.m"
                          *transform_hlds__float_regs__Goal_10 = transform_hlds__float_regs__Goal0_9;
#line 676 "float_regs.m"
                          {
#line 676 "float_regs.m"
                            hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74);
                          }
#line 676 "float_regs.m"
                          *transform_hlds__float_regs__STATE_VARIABLE_Info_76 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_75;
#line 676 "float_regs.m"
                          *transform_hlds__float_regs__STATE_VARIABLE_Specs_78 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77;
#line 674 "float_regs.m"
                        }
#line 651 "float_regs.m"
                  }
#line 576 "float_regs.m"
                else
#line 576 "float_regs.m"
                  if (((((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 628 "float_regs.m"
                    {
#line 628 "float_regs.m"
                      MR_Word transform_hlds__float_regs__GoalExpr_143;
#line 628 "float_regs.m"
                      MR_Word transform_hlds__float_regs__NonLocals_144;

#line 629 "float_regs.m"
                      {
#line 629 "float_regs.m"
                        transform_hlds__float_regs__NonLocals_144 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
                      }
#line 630 "float_regs.m"
                      {
#line 630 "float_regs.m"
                        transform_hlds__float_regs__insert_reg_wrappers_ite_9_p_0(transform_hlds__float_regs__NonLocals_144, transform_hlds__float_regs__GoalExpr0_14, &transform_hlds__float_regs__GoalExpr_143, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                      }
#line 632 "float_regs.m"
                      {
#line 632 "float_regs.m"
                        MR_Word base;
#line 632 "float_regs.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "float_regs.m"
                        *transform_hlds__float_regs__Goal_10 = base;
#line 632 "float_regs.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_143));
#line 632 "float_regs.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
#line 632 "float_regs.m"
                      }
#line 628 "float_regs.m"
                    }
#line 576 "float_regs.m"
                  else
#line 576 "float_regs.m"
                    if (((((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 615 "float_regs.m"
                      {
#line 615 "float_regs.m"
                        MR_Word transform_hlds__float_regs__Reason_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
#line 615 "float_regs.m"
                        MR_Word transform_hlds__float_regs__SubGoal0_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
#line 616 "float_regs.m"
                        MR_Word transform_hlds__float_regs__V_104_104;
#line 616 "float_regs.m"
                        MR_Word transform_hlds__float_regs__V_34_34;

#line 616 "float_regs.m"
                        transform_hlds__float_regs__succeeded = ((((MR_tag((MR_Word) transform_hlds__float_regs__Reason_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Reason_33, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 616 "float_regs.m"
                        if (transform_hlds__float_regs__succeeded)
#line 616 "float_regs.m"
                          {
#line 616 "float_regs.m"
                            transform_hlds__float_regs__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Reason_33, (MR_Integer) 1)));
#line 616 "float_regs.m"
                            transform_hlds__float_regs__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Reason_33, (MR_Integer) 2)));
#line 616 "float_regs.m"
                            transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__V_104_104 == (MR_Integer) 1);
#line 616 "float_regs.m"
                          }
#line 621 "float_regs.m"
                        if (transform_hlds__float_regs__succeeded)
#line 618 "float_regs.m"
                          {
#line 619 "float_regs.m"
                            *transform_hlds__float_regs__Goal_10 = transform_hlds__float_regs__Goal0_9;
#line 620 "float_regs.m"
                            {
#line 620 "float_regs.m"
                              hlds__goal_util__update_instmap_3_p_0(*transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74);
                            }
#line 620 "float_regs.m"
                            *transform_hlds__float_regs__STATE_VARIABLE_Specs_78 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77;
#line 620 "float_regs.m"
                            *transform_hlds__float_regs__STATE_VARIABLE_Info_76 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_75;
#line 618 "float_regs.m"
                          }
#line 621 "float_regs.m"
                        else
#line 623 "float_regs.m"
                          {
#line 623 "float_regs.m"
                            MR_Word transform_hlds__float_regs__GoalExpr_136;
#line 623 "float_regs.m"
                            MR_Word transform_hlds__float_regs__SubGoal_137;

#line 622 "float_regs.m"
                            {
#line 622 "float_regs.m"
                              transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(transform_hlds__float_regs__SubGoal0_141, &transform_hlds__float_regs__SubGoal_137, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                            }
#line 624 "float_regs.m"
                            {
#line 624 "float_regs.m"
                              transform_hlds__float_regs__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 624 "float_regs.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 624 "float_regs.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__float_regs__Reason_33));
#line 624 "float_regs.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_136, 2) = ((MR_Box) (transform_hlds__float_regs__SubGoal_137));
#line 624 "float_regs.m"
                            }
#line 625 "float_regs.m"
                            {
#line 625 "float_regs.m"
                              MR_Word base;
#line 625 "float_regs.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 625 "float_regs.m"
                              *transform_hlds__float_regs__Goal_10 = base;
#line 625 "float_regs.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_136));
#line 625 "float_regs.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
#line 625 "float_regs.m"
                            }
#line 623 "float_regs.m"
                          }
#line 615 "float_regs.m"
                      }
#line 576 "float_regs.m"
                    else
#line 576 "float_regs.m"
                      if (((((MR_tag((MR_Word) transform_hlds__float_regs__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 689 "float_regs.m"
                        {
#line 691 "float_regs.m"
                          {
#line 691 "float_regs.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.insert_reg_wrappers_goal_2\'/8", (MR_String) "shorthand");
#line 691 "float_regs.m"
                            return;
                          }
#line 689 "float_regs.m"
                        }
#line 576 "float_regs.m"
                      else
#line 601 "float_regs.m"
                        {
#line 601 "float_regs.m"
                          MR_Word transform_hlds__float_regs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 1)));
#line 601 "float_regs.m"
                          MR_Word transform_hlds__float_regs__CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 2)));
#line 601 "float_regs.m"
                          MR_Word transform_hlds__float_regs__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr0_14, (MR_Integer) 3)));
#line 601 "float_regs.m"
                          MR_Word transform_hlds__float_regs__Cases_29;
#line 601 "float_regs.m"
                          MR_Word transform_hlds__float_regs__GoalExpr_132;
#line 601 "float_regs.m"
                          MR_Word transform_hlds__float_regs__NonLocals_133;

#line 602 "float_regs.m"
                          {
#line 602 "float_regs.m"
                            transform_hlds__float_regs__NonLocals_133 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__float_regs__GoalInfo0_15);
                          }
#line 603 "float_regs.m"
                          {
#line 603 "float_regs.m"
                            transform_hlds__float_regs__insert_reg_wrappers_switch_10_p_0(transform_hlds__float_regs__Var_26, transform_hlds__float_regs__Cases0_28, &transform_hlds__float_regs__Cases_29, transform_hlds__float_regs__NonLocals_133, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_73, transform_hlds__float_regs__STATE_VARIABLE_InstMap_74, transform_hlds__float_regs__STATE_VARIABLE_Info_0_75, transform_hlds__float_regs__STATE_VARIABLE_Info_76, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_77, transform_hlds__float_regs__STATE_VARIABLE_Specs_78);
                          }
#line 605 "float_regs.m"
                          {
#line 605 "float_regs.m"
                            transform_hlds__float_regs__GoalExpr_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 605 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 605 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_132, 1) = ((MR_Box) (transform_hlds__float_regs__Var_26));
#line 605 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_132, 2) = ((MR_Box) (transform_hlds__float_regs__CanFail_27));
#line 605 "float_regs.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__float_regs__GoalExpr_132, 3) = ((MR_Box) (transform_hlds__float_regs__Cases_29));
#line 605 "float_regs.m"
                          }
#line 606 "float_regs.m"
                          {
#line 606 "float_regs.m"
                            MR_Word base;
#line 606 "float_regs.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 606 "float_regs.m"
                            *transform_hlds__float_regs__Goal_10 = base;
#line 606 "float_regs.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__GoalExpr_132));
#line 606 "float_regs.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__GoalInfo0_15));
#line 606 "float_regs.m"
                          }
#line 601 "float_regs.m"
                        }
#line 570 "float_regs.m"
  }
#line 566 "float_regs.m"
}

#line 555 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_goal_8_p_0(
#line 555 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_9,
#line 555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_10,
#line 555 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14,
#line 555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_InstMap_15,
#line 555 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_16,
#line 555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_17,
#line 555 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18,
#line 555 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_19)
#line 555 "float_regs.m"
{
#line 562 "float_regs.m"
  {
#line 562 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 560 "float_regs.m"
    {
#line 560 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14);
    }
#line 562 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 561 "float_regs.m"
      {
#line 561 "float_regs.m"
        transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_9, transform_hlds__float_regs__Goal_10, transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14, transform_hlds__float_regs__STATE_VARIABLE_InstMap_15, transform_hlds__float_regs__STATE_VARIABLE_Info_0_16, transform_hlds__float_regs__STATE_VARIABLE_Info_17, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18, transform_hlds__float_regs__STATE_VARIABLE_Specs_19);
#line 561 "float_regs.m"
        return;
      }
#line 562 "float_regs.m"
    else
#line 563 "float_regs.m"
      {
#line 563 "float_regs.m"
        *transform_hlds__float_regs__Goal_10 = transform_hlds__float_regs__Goal0_9;
#line 563 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Specs_19 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_18;
#line 563 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_Info_17 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_16;
#line 563 "float_regs.m"
        *transform_hlds__float_regs__STATE_VARIABLE_InstMap_15 = transform_hlds__float_regs__STATE_VARIABLE_InstMap_0_14;
#line 563 "float_regs.m"
      }
#line 562 "float_regs.m"
  }
#line 555 "float_regs.m"
}

#line 537 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_body_9_p_0(
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__HeadVars_10,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgModes_11,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__Goal0_12,
#line 537 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Goal_13,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__InstMap0_14,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_0_22,
#line 537 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Info_23,
#line 537 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24,
#line 537 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_25)
#line 537 "float_regs.m"
{
#line 543 "float_regs.m"
  {
#line 543 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 543 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goal1_17;
#line 543 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMap1_18;
#line 543 "float_regs.m"
    MR_Word transform_hlds__float_regs__ModuleInfo_19;
#line 543 "float_regs.m"
    MR_Word transform_hlds__float_regs__FinalInsts_20;
#line 543 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarsExpectInsts_21;
#line 543 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Info_26_26;
#line 543 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27;

#line 560 "float_regs.m"
    {
#line 560 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(transform_hlds__float_regs__InstMap0_14);
    }
#line 562 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 561 "float_regs.m"
      {
#line 561 "float_regs.m"
        transform_hlds__float_regs__insert_reg_wrappers_goal_2_8_p_0(transform_hlds__float_regs__Goal0_12, &transform_hlds__float_regs__Goal1_17, transform_hlds__float_regs__InstMap0_14, &transform_hlds__float_regs__InstMap1_18, transform_hlds__float_regs__STATE_VARIABLE_Info_0_22, &transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24, &transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27);
      }
#line 562 "float_regs.m"
    else
#line 563 "float_regs.m"
      {
#line 563 "float_regs.m"
        transform_hlds__float_regs__Goal1_17 = transform_hlds__float_regs__Goal0_12;
#line 563 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27 = transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24;
#line 563 "float_regs.m"
        transform_hlds__float_regs__STATE_VARIABLE_Info_26_26 = transform_hlds__float_regs__STATE_VARIABLE_Info_0_22;
#line 563 "float_regs.m"
        transform_hlds__float_regs__InstMap1_18 = transform_hlds__float_regs__InstMap0_14;
#line 563 "float_regs.m"
      }
#line 546 "float_regs.m"
    {
#line 546 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, &transform_hlds__float_regs__ModuleInfo_19);
    }
#line 547 "float_regs.m"
    {
#line 547 "float_regs.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(transform_hlds__float_regs__ModuleInfo_19, transform_hlds__float_regs__ArgModes_11, &transform_hlds__float_regs__FinalInsts_20);
    }
#line 548 "float_regs.m"
    {
#line 548 "float_regs.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &transform_hlds__float_regs_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, transform_hlds__float_regs__HeadVars_10, transform_hlds__float_regs__FinalInsts_20, &transform_hlds__float_regs__VarsExpectInsts_21);
    }
#line 550 "float_regs.m"
    {
#line 550 "float_regs.m"
      transform_hlds__float_regs__fix_branching_goal_8_p_0(transform_hlds__float_regs__VarsExpectInsts_21, transform_hlds__float_regs__Goal1_17, transform_hlds__float_regs__InstMap1_18, transform_hlds__float_regs__Goal_13, transform_hlds__float_regs__STATE_VARIABLE_Info_26_26, transform_hlds__float_regs__STATE_VARIABLE_Info_23, transform_hlds__float_regs__STATE_VARIABLE_Specs_27_27, transform_hlds__float_regs__STATE_VARIABLE_Specs_25);
#line 550 "float_regs.m"
      return;
    }
#line 543 "float_regs.m"
  }
#line 537 "float_regs.m"
}

#line 456 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(
#line 456 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_7,
#line 456 "float_regs.m"
  MR_Integer transform_hlds__float_regs__ProcId_8,
#line 456 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22,
#line 456 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_23,
#line 456 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24,
#line 456 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_25)
#line 456 "float_regs.m"
{
#line 460 "float_regs.m"
  {
#line 460 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_29_29;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_30_30;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_31_31;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_32_32;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredTable0_11;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInfo0_12;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcTable0_13;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcInfo0_14;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcInfo_15;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInfo1_16;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcTable1_17;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcTable_18;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInfo_19;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredTable1_20;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredTable_21;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_26_26;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeVarSet0_45;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__HeadVars_46;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarSet0_47;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes0_48;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgModes_49;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goal0_50;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstMap0_51;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__RttiVarMaps0_52;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__InstVarSet0_53;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__HasParallelConj_54;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__Info0_55;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goal1_56;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__Info1_57;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarSet1_58;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes1_59;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeVarSet_60;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__RttiVarMaps1_61;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__MustRecomputeNonLocals_62;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goal2_64;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__Goal_68;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarSet_69;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__VarTypes_70;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__RttiVarMaps_71;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_49_73;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_53_77;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_54_78;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_55_79;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_56_80;
#line 460 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_57_81;
#line 462 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv0_PredInfo0_12;
#line 464 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv1_ProcInfo0_14;

#line 461 "float_regs.m"
    {
#line 461 "float_regs.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__float_regs__PredTable0_11);
    }
#line 10496 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 10498 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 462 "float_regs.m"
    {
#line 462 "float_regs.m"
      mercury__map__lookup_3_p_0(transform_hlds__float_regs__TypeCtorInfo_29_29, transform_hlds__float_regs__TypeCtorInfo_30_30, transform_hlds__float_regs__PredTable0_11, ((MR_Box) (transform_hlds__float_regs__PredId_7)), &transform_hlds__float_regs__conv0_PredInfo0_12);
    }
#line 462 "float_regs.m"
    transform_hlds__float_regs__PredInfo0_12 = ((MR_Word) transform_hlds__float_regs__conv0_PredInfo0_12);
#line 463 "float_regs.m"
    {
#line 463 "float_regs.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__float_regs__PredInfo0_12, &transform_hlds__float_regs__ProcTable0_13);
    }
#line 10512 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 10514 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 464 "float_regs.m"
    {
#line 464 "float_regs.m"
      mercury__map__lookup_3_p_0(transform_hlds__float_regs__TypeCtorInfo_31_31, transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__ProcTable0_13, ((MR_Box) (transform_hlds__float_regs__ProcId_8)), &transform_hlds__float_regs__conv1_ProcInfo0_14);
    }
#line 464 "float_regs.m"
    transform_hlds__float_regs__ProcInfo0_14 = ((MR_Word) transform_hlds__float_regs__conv1_ProcInfo0_14);
#line 482 "float_regs.m"
    {
#line 482 "float_regs.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__float_regs__PredInfo0_12, &transform_hlds__float_regs__TypeVarSet0_45);
    }
#line 483 "float_regs.m"
    {
#line 483 "float_regs.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__HeadVars_46);
    }
#line 484 "float_regs.m"
    {
#line 484 "float_regs.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__VarSet0_47);
    }
#line 485 "float_regs.m"
    {
#line 485 "float_regs.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__VarTypes0_48);
    }
#line 486 "float_regs.m"
    {
#line 486 "float_regs.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__ArgModes_49);
    }
#line 487 "float_regs.m"
    {
#line 487 "float_regs.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__Goal0_50);
    }
#line 488 "float_regs.m"
    {
#line 488 "float_regs.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__float_regs__ProcInfo0_14, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__float_regs__InstMap0_51);
    }
#line 489 "float_regs.m"
    {
#line 489 "float_regs.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__RttiVarMaps0_52);
    }
#line 490 "float_regs.m"
    {
#line 490 "float_regs.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__InstVarSet0_53);
    }
#line 491 "float_regs.m"
    {
#line 491 "float_regs.m"
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__HasParallelConj_54);
    }
#line 494 "float_regs.m"
    {
#line 494 "float_regs.m"
      transform_hlds__lambda__init_lambda_info_9_p_0(transform_hlds__float_regs__VarSet0_47, transform_hlds__float_regs__VarTypes0_48, transform_hlds__float_regs__TypeVarSet0_45, transform_hlds__float_regs__InstVarSet0_53, transform_hlds__float_regs__RttiVarMaps0_52, transform_hlds__float_regs__HasParallelConj_54, transform_hlds__float_regs__PredInfo0_12, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_22, &transform_hlds__float_regs__Info0_55);
    }
#line 496 "float_regs.m"
    {
#line 496 "float_regs.m"
      transform_hlds__float_regs__insert_reg_wrappers_proc_body_9_p_0(transform_hlds__float_regs__HeadVars_46, transform_hlds__float_regs__ArgModes_49, transform_hlds__float_regs__Goal0_50, &transform_hlds__float_regs__Goal1_56, transform_hlds__float_regs__InstMap0_51, transform_hlds__float_regs__Info0_55, &transform_hlds__float_regs__Info1_57, transform_hlds__float_regs__STATE_VARIABLE_Specs_0_24, transform_hlds__float_regs__STATE_VARIABLE_Specs_25);
    }
#line 498 "float_regs.m"
    {
#line 498 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_varset_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__VarSet1_58);
    }
#line 499 "float_regs.m"
    {
#line 499 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__VarTypes1_59);
    }
#line 500 "float_regs.m"
    {
#line 500 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__TypeVarSet_60);
    }
#line 501 "float_regs.m"
    {
#line 501 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__RttiVarMaps1_61);
    }
#line 502 "float_regs.m"
    {
#line 502 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_module_info_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_49_73);
    }
#line 503 "float_regs.m"
    {
#line 503 "float_regs.m"
      transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(transform_hlds__float_regs__Info1_57, &transform_hlds__float_regs__MustRecomputeNonLocals_62);
    }
#line 511 "float_regs.m"
    if ((transform_hlds__float_regs__MustRecomputeNonLocals_62 == (MR_Integer) 0))
#line 512 "float_regs.m"
      {
#line 513 "float_regs.m"
        transform_hlds__float_regs__Goal2_64 = transform_hlds__float_regs__Goal1_56;
#line 514 "float_regs.m"
        transform_hlds__float_regs__VarSet_69 = transform_hlds__float_regs__VarSet1_58;
#line 515 "float_regs.m"
        transform_hlds__float_regs__VarTypes_70 = transform_hlds__float_regs__VarTypes1_59;
#line 516 "float_regs.m"
        transform_hlds__float_regs__RttiVarMaps_71 = transform_hlds__float_regs__RttiVarMaps1_61;
#line 512 "float_regs.m"
      }
#line 511 "float_regs.m"
    else
#line 507 "float_regs.m"
      {
#line 508 "float_regs.m"
        MR_Word transform_hlds__float_regs___Warnings_63;

#line 508 "float_regs.m"
        {
#line 508 "float_regs.m"
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__float_regs__HeadVars_46, &transform_hlds__float_regs___Warnings_63, transform_hlds__float_regs__Goal1_56, &transform_hlds__float_regs__Goal2_64, transform_hlds__float_regs__VarSet1_58, &transform_hlds__float_regs__VarSet_69, transform_hlds__float_regs__VarTypes1_59, &transform_hlds__float_regs__VarTypes_70, transform_hlds__float_regs__RttiVarMaps1_61, &transform_hlds__float_regs__RttiVarMaps_71);
        }
#line 507 "float_regs.m"
      }
#line 521 "float_regs.m"
    {
#line 521 "float_regs.m"
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__float_regs__Goal2_64, &transform_hlds__float_regs__Goal_68, transform_hlds__float_regs__VarTypes_70, transform_hlds__float_regs__InstVarSet0_53, transform_hlds__float_regs__InstMap0_51, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_49_73, &transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_26_26);
    }
#line 529 "float_regs.m"
    {
#line 529 "float_regs.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__float_regs__Goal_68, transform_hlds__float_regs__ProcInfo0_14, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_53_77);
    }
#line 530 "float_regs.m"
    {
#line 530 "float_regs.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__float_regs__VarSet_69, transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_53_77, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_54_78);
    }
#line 531 "float_regs.m"
    {
#line 531 "float_regs.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__float_regs__VarTypes_70, transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_54_78, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_55_79);
    }
#line 532 "float_regs.m"
    {
#line 532 "float_regs.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__float_regs__RttiVarMaps_71, transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_55_79, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_56_80);
    }
#line 533 "float_regs.m"
    {
#line 533 "float_regs.m"
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__float_regs__HeadVars_46, transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_56_80, &transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_57_81);
    }
#line 534 "float_regs.m"
    {
#line 534 "float_regs.m"
      hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_ProcInfo_57_81, &transform_hlds__float_regs__ProcInfo_15);
    }
#line 535 "float_regs.m"
    {
#line 535 "float_regs.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__float_regs__TypeVarSet_60, transform_hlds__float_regs__PredInfo0_12, &transform_hlds__float_regs__PredInfo1_16);
    }
#line 469 "float_regs.m"
    {
#line 469 "float_regs.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__float_regs__PredInfo1_16, &transform_hlds__float_regs__ProcTable1_17);
    }
#line 470 "float_regs.m"
    {
#line 470 "float_regs.m"
      mercury__map__det_update_4_p_0(transform_hlds__float_regs__TypeCtorInfo_31_31, transform_hlds__float_regs__TypeCtorInfo_32_32, ((MR_Box) (transform_hlds__float_regs__ProcId_8)), ((MR_Box) (transform_hlds__float_regs__ProcInfo_15)), transform_hlds__float_regs__ProcTable1_17, &transform_hlds__float_regs__ProcTable_18);
    }
#line 471 "float_regs.m"
    {
#line 471 "float_regs.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__float_regs__ProcTable_18, transform_hlds__float_regs__PredInfo1_16, &transform_hlds__float_regs__PredInfo_19);
    }
#line 472 "float_regs.m"
    {
#line 472 "float_regs.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_26_26, &transform_hlds__float_regs__PredTable1_20);
    }
#line 473 "float_regs.m"
    {
#line 473 "float_regs.m"
      mercury__map__det_update_4_p_0(transform_hlds__float_regs__TypeCtorInfo_29_29, transform_hlds__float_regs__TypeCtorInfo_30_30, ((MR_Box) (transform_hlds__float_regs__PredId_7)), ((MR_Box) (transform_hlds__float_regs__PredInfo_19)), transform_hlds__float_regs__PredTable1_20, &transform_hlds__float_regs__PredTable_21);
    }
#line 474 "float_regs.m"
    {
#line 474 "float_regs.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__float_regs__PredTable_21, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_26_26, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_23);
#line 474 "float_regs.m"
      return;
    }
#line 460 "float_regs.m"
  }
#line 456 "float_regs.m"
}

#line 453 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1(
#line 453 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 453 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 453 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 453 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 453 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 453 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5)
#line 453 "float_regs.m"
{
#line 453 "float_regs.m"
  {
#line 453 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 453 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_23;
#line 453 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_25;

#line 453 "float_regs.m"
    {
#line 453 "float_regs.m"
      transform_hlds__float_regs__insert_reg_wrappers_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_25);
    }
#line 453 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_23));
#line 453 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_Specs_25));
#line 453 "float_regs.m"
  }
#line 453 "float_regs.m"
}

#line 446 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(
#line 446 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_6,
#line 446 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_11,
#line 446 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_12,
#line 446 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_Specs_0_13,
#line 446 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_Specs_14)
#line 446 "float_regs.m"
{
#line 450 "float_regs.m"
  {
#line 450 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 450 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInfo_9;
#line 450 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcIds_10;
#line 450 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_15_15;
#line 453 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 453 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14;

#line 451 "float_regs.m"
    {
#line 451 "float_regs.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__float_regs__PredId_6, &transform_hlds__float_regs__PredInfo_9);
    }
#line 452 "float_regs.m"
    {
#line 452 "float_regs.m"
      transform_hlds__float_regs__ProcIds_10 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__float_regs__PredInfo_9);
    }
#line 453 "float_regs.m"
    {
#line 453 "float_regs.m"
      transform_hlds__float_regs__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_8[0]));
#line 453 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, 1) = ((MR_Box) (transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0_1));
#line 453 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, 3) = ((MR_Box) (transform_hlds__float_regs__PredId_6));
#line 453 "float_regs.m"
    }
#line 453 "float_regs.m"
    {
#line 453 "float_regs.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__float_regs_scalar_common_1[0], transform_hlds__float_regs__V_15_15, transform_hlds__float_regs__ProcIds_10, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_11)), &transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_Specs_0_13)), &transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14);
    }
#line 453 "float_regs.m"
    *transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12);
#line 453 "float_regs.m"
    *transform_hlds__float_regs__STATE_VARIABLE_Specs_14 = ((MR_Word) transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14);
#line 450 "float_regs.m"
  }
#line 446 "float_regs.m"
}

#line 432 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(
#line 432 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type_3,
#line 432 "float_regs.m"
  MR_Word * transform_hlds__float_regs__RegType_4)
#line 432 "float_regs.m"
{
#line 437 "float_regs.m"
  {
#line 437 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 435 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_5_5;

#line 435 "float_regs.m"
    {
#line 435 "float_regs.m"
      transform_hlds__float_regs__V_5_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 435 "float_regs.m"
    {
#line 435 "float_regs.m"
      transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(transform_hlds__float_regs__Type_3, transform_hlds__float_regs__V_5_5);
    }
#line 437 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 436 "float_regs.m"
      *transform_hlds__float_regs__RegType_4 = (MR_Integer) 1;
#line 437 "float_regs.m"
    else
#line 438 "float_regs.m"
      *transform_hlds__float_regs__RegType_4 = (MR_Integer) 0;
#line 437 "float_regs.m"
  }
#line 432 "float_regs.m"
}

#line 420 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0_1(
#line 420 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 420 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 420 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 420 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 420 "float_regs.m"
{
#line 420 "float_regs.m"
  {
#line 420 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 420 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_Inst_10;

#line 420 "float_regs.m"
    {
#line 420 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_Inst_10);
    }
#line 420 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_Inst_10));
#line 420 "float_regs.m"
  }
#line 420 "float_regs.m"
}

#line 404 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0(
#line 404 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
#line 404 "float_regs.m"
  MR_Word transform_hlds__float_regs__Seen_7,
#line 404 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type_8,
#line 404 "float_regs.m"
  MR_Word transform_hlds__float_regs__BoundInst0_9,
#line 404 "float_regs.m"
  MR_Word * transform_hlds__float_regs__BoundInst_10)
#line 404 "float_regs.m"
{
#line 407 "float_regs.m"
  {
#line 407 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 407 "float_regs.m"
    MR_Word transform_hlds__float_regs__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__BoundInst0_9, (MR_Integer) 0)));
#line 407 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgInsts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__BoundInst0_9, (MR_Integer) 1)));
#line 407 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgInsts_14;
#line 423 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgTypes_13;

#line 410 "float_regs.m"
    {
#line 410 "float_regs.m"
      transform_hlds__float_regs__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Type_8, transform_hlds__float_regs__ConsId_11, &transform_hlds__float_regs__ArgTypes_13);
    }
#line 423 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 418 "float_regs.m"
      if ((transform_hlds__float_regs__ArgTypes_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "float_regs.m"
        transform_hlds__float_regs__ArgInsts_14 = transform_hlds__float_regs__ArgInsts0_12;
#line 418 "float_regs.m"
      else
#line 419 "float_regs.m"
        {
#line 419 "float_regs.m"
          MR_Word transform_hlds__float_regs__TypeCtorInfo_25_25;
#line 419 "float_regs.m"
          MR_Word transform_hlds__float_regs__V_17_17;

#line 420 "float_regs.m"
          {
#line 420 "float_regs.m"
            transform_hlds__float_regs__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 420 "float_regs.m"
            MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[3]));
#line 420 "float_regs.m"
            MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0_1));
#line 420 "float_regs.m"
            MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 420 "float_regs.m"
            MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_6));
#line 420 "float_regs.m"
            MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 4) = ((MR_Box) (transform_hlds__float_regs__Seen_7));
#line 420 "float_regs.m"
          }
#line 10961 "transform_hlds.float_regs.c"
          transform_hlds__float_regs__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 420 "float_regs.m"
          {
#line 420 "float_regs.m"
            mercury__list__map_corresponding_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__TypeCtorInfo_25_25, transform_hlds__float_regs__TypeCtorInfo_25_25, transform_hlds__float_regs__V_17_17, transform_hlds__float_regs__ArgTypes_13, transform_hlds__float_regs__ArgInsts0_12, &transform_hlds__float_regs__ArgInsts_14);
          }
#line 419 "float_regs.m"
        }
#line 423 "float_regs.m"
    else
#line 428 "float_regs.m"
      transform_hlds__float_regs__ArgInsts_14 = transform_hlds__float_regs__ArgInsts0_12;
#line 430 "float_regs.m"
    {
#line 430 "float_regs.m"
      MR_Word base;
#line 430 "float_regs.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 430 "float_regs.m"
      *transform_hlds__float_regs__BoundInst_10 = base;
#line 430 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__ConsId_11));
#line 430 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__ArgInsts_14));
#line 430 "float_regs.m"
    }
#line 407 "float_regs.m"
  }
#line 404 "float_regs.m"
}

#line 400 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_2(
#line 400 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 400 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 400 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 400 "float_regs.m"
{
#line 400 "float_regs.m"
  {
#line 400 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 400 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_RegType_4;

#line 400 "float_regs.m"
    {
#line 400 "float_regs.m"
      transform_hlds__float_regs__ho_arg_reg_for_type_2_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_RegType_4);
    }
#line 400 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_RegType_4));
#line 400 "float_regs.m"
  }
#line 400 "float_regs.m"
}

#line 398 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_1(
#line 398 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 398 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 398 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 398 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 398 "float_regs.m"
{
#line 398 "float_regs.m"
  {
#line 398 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 398 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_ArgMode_10;

#line 398 "float_regs.m"
    {
#line 398 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_mode_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_ArgMode_10);
    }
#line 398 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_ArgMode_10));
#line 398 "float_regs.m"
  }
#line 398 "float_regs.m"
}

#line 392 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(
#line 392 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
#line 392 "float_regs.m"
  MR_Word transform_hlds__float_regs__Seen_7,
#line 392 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgTypes_8,
#line 392 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInstInfo0_9,
#line 392 "float_regs.m"
  MR_Word * transform_hlds__float_regs__PredInstInfo_10)
#line 392 "float_regs.m"
{
#line 396 "float_regs.m"
  {
#line 396 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 396 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_23_23;
#line 396 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_24_24;
#line 396 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_9, (MR_Integer) 0)));
#line 396 "float_regs.m"
    MR_Word transform_hlds__float_regs__Modes0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_9, (MR_Integer) 1)));
#line 396 "float_regs.m"
    MR_Word transform_hlds__float_regs__Det_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_9, (MR_Integer) 3)));
#line 396 "float_regs.m"
    MR_Word transform_hlds__float_regs__Modes_15;
#line 396 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgRegs_16;
#line 396 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_17_17;
#line 396 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_19_19;
#line 397 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__PredInstInfo0_9, (MR_Integer) 2)));

#line 398 "float_regs.m"
    {
#line 398 "float_regs.m"
      transform_hlds__float_regs__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 398 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[2]));
#line 398 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0_1));
#line 398 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 398 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_6));
#line 398 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_17_17, 4) = ((MR_Box) (transform_hlds__float_regs__Seen_7));
#line 398 "float_regs.m"
    }
#line 11111 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 11113 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 398 "float_regs.m"
    {
#line 398 "float_regs.m"
      mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_23_23, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__V_17_17, transform_hlds__float_regs__ArgTypes_8, transform_hlds__float_regs__Modes0_12, &transform_hlds__float_regs__Modes_15);
    }
#line 400 "float_regs.m"
    {
#line 400 "float_regs.m"
      mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_23_23, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, (MR_Word) &transform_hlds__float_regs_scalar_common_3[2], transform_hlds__float_regs__ArgTypes_8, &transform_hlds__float_regs__ArgRegs_16);
    }
#line 401 "float_regs.m"
    {
#line 401 "float_regs.m"
      transform_hlds__float_regs__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "float_regs.m"
      MR_hl_field(MR_mktag(1), transform_hlds__float_regs__V_19_19, 0) = ((MR_Box) (transform_hlds__float_regs__ArgRegs_16));
#line 401 "float_regs.m"
    }
#line 401 "float_regs.m"
    {
#line 401 "float_regs.m"
      MR_Word base;
#line 401 "float_regs.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 401 "float_regs.m"
      *transform_hlds__float_regs__PredInstInfo_10 = base;
#line 401 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__PredOrFunc_11));
#line 401 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__Modes_15));
#line 401 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__float_regs__V_19_19));
#line 401 "float_regs.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__float_regs__Det_14));
#line 401 "float_regs.m"
    }
#line 396 "float_regs.m"
  }
#line 392 "float_regs.m"
}

#line 357 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1(
#line 357 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 357 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 357 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 357 "float_regs.m"
{
#line 357 "float_regs.m"
  {
#line 357 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 357 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_BoundInst_10;

#line 357 "float_regs.m"
    {
#line 357 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_bound_inst_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_BoundInst_10);
    }
#line 357 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_BoundInst_10));
#line 357 "float_regs.m"
  }
#line 357 "float_regs.m"
}

#line 333 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(
#line 333 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
#line 333 "float_regs.m"
  MR_Word transform_hlds__float_regs__Seen0_7,
#line 333 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type_8,
#line 333 "float_regs.m"
  MR_Word transform_hlds__float_regs__Inst0_9,
#line 333 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Inst_10)
#line 333 "float_regs.m"
{
#line 338 "float_regs.m"
  {
#line 338 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;

#line 338 "float_regs.m"
    if ((transform_hlds__float_regs__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "float_regs.m"
      *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 338 "float_regs.m"
    else
#line 338 "float_regs.m"
      if ((transform_hlds__float_regs__Inst0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 388 "float_regs.m"
        *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 338 "float_regs.m"
      else
#line 338 "float_regs.m"
        if (((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_9)) == (MR_mktag((MR_Integer) 2))))
#line 338 "float_regs.m"
          {
#line 338 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));
#line 338 "float_regs.m"
            MR_Word transform_hlds__float_regs__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)));

#line 338 "float_regs.m"
            if ((transform_hlds__float_regs__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "float_regs.m"
              *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 338 "float_regs.m"
            else
#line 347 "float_regs.m"
              {
#line 347 "float_regs.m"
                MR_Word transform_hlds__float_regs__V_41_41;
#line 347 "float_regs.m"
                MR_Word transform_hlds__float_regs__PredInstInfo0_46 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__V_55_55), (MR_Integer) 1);
#line 347 "float_regs.m"
                MR_Word transform_hlds__float_regs__PredInstInfo_48;
#line 351 "float_regs.m"
                MR_Word transform_hlds__float_regs__ArgTypes_44;
#line 348 "float_regs.m"
                MR_Word transform_hlds__float_regs__V_18_18;
#line 348 "float_regs.m"
                MR_Word transform_hlds__float_regs__V_19_19;

#line 348 "float_regs.m"
                {
#line 348 "float_regs.m"
                  transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__Type_8, &transform_hlds__float_regs__V_18_18, &transform_hlds__float_regs__V_19_19, &transform_hlds__float_regs__ArgTypes_44);
                }
#line 351 "float_regs.m"
                if (transform_hlds__float_regs__succeeded)
#line 349 "float_regs.m"
                  {
#line 349 "float_regs.m"
                    transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen0_7, transform_hlds__float_regs__ArgTypes_44, transform_hlds__float_regs__PredInstInfo0_46, &transform_hlds__float_regs__PredInstInfo_48);
                  }
#line 351 "float_regs.m"
                else
#line 352 "float_regs.m"
                  transform_hlds__float_regs__PredInstInfo_48 = transform_hlds__float_regs__PredInstInfo0_46;
#line 354 "float_regs.m"
                transform_hlds__float_regs__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__PredInstInfo_48);
#line 354 "float_regs.m"
                {
#line 354 "float_regs.m"
                  MR_Word base;
#line 354 "float_regs.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "float_regs.m"
                  *transform_hlds__float_regs__Inst_10 = base;
#line 354 "float_regs.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__float_regs__V_56_56));
#line 354 "float_regs.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__float_regs__V_41_41));
#line 354 "float_regs.m"
                }
#line 347 "float_regs.m"
              }
#line 338 "float_regs.m"
          }
#line 338 "float_regs.m"
        else
#line 338 "float_regs.m"
          if (((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_9)) == (MR_mktag((MR_Integer) 1))))
#line 389 "float_regs.m"
            *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 338 "float_regs.m"
          else
#line 338 "float_regs.m"
            if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 389 "float_regs.m"
              *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 338 "float_regs.m"
            else
#line 338 "float_regs.m"
              if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 356 "float_regs.m"
                {
#line 356 "float_regs.m"
                  MR_Word transform_hlds__float_regs__TypeCtorInfo_52_52;
#line 356 "float_regs.m"
                  MR_Word transform_hlds__float_regs__InstResults_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 2)));
#line 356 "float_regs.m"
                  MR_Word transform_hlds__float_regs__BoundInsts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 3)));
#line 356 "float_regs.m"
                  MR_Word transform_hlds__float_regs__BoundInsts_23;
#line 356 "float_regs.m"
                  MR_Word transform_hlds__float_regs__V_39_39;
#line 356 "float_regs.m"
                  MR_Word transform_hlds__float_regs__Uniq_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));

#line 357 "float_regs.m"
                  {
#line 357 "float_regs.m"
                    transform_hlds__float_regs__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 357 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_39_39, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_4[1]));
#line 357 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_39_39, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0_1));
#line 357 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 357 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_39_39, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_6));
#line 357 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_39_39, 4) = ((MR_Box) (transform_hlds__float_regs__Seen0_7));
#line 357 "float_regs.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_39_39, 5) = ((MR_Box) (transform_hlds__float_regs__Type_8));
#line 357 "float_regs.m"
                  }
#line 11333 "transform_hlds.float_regs.c"
                  transform_hlds__float_regs__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 357 "float_regs.m"
                  {
#line 357 "float_regs.m"
                    mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_52_52, transform_hlds__float_regs__TypeCtorInfo_52_52, transform_hlds__float_regs__V_39_39, transform_hlds__float_regs__BoundInsts0_22, &transform_hlds__float_regs__BoundInsts_23);
                  }
#line 359 "float_regs.m"
                  {
#line 359 "float_regs.m"
                    MR_Word base;
#line 359 "float_regs.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 359 "float_regs.m"
                    *transform_hlds__float_regs__Inst_10 = base;
#line 359 "float_regs.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 359 "float_regs.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__Uniq_49));
#line 359 "float_regs.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__InstResults_21));
#line 359 "float_regs.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__float_regs__BoundInsts_23));
#line 359 "float_regs.m"
                  }
#line 356 "float_regs.m"
                }
#line 338 "float_regs.m"
              else
#line 338 "float_regs.m"
                if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 361 "float_regs.m"
                  {
#line 361 "float_regs.m"
                    MR_Word transform_hlds__float_regs__InstVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));
#line 361 "float_regs.m"
                    MR_Word transform_hlds__float_regs__SpecInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 2)));
#line 361 "float_regs.m"
                    MR_Word transform_hlds__float_regs__SpecInst_26;

#line 362 "float_regs.m"
                    {
#line 362 "float_regs.m"
                      transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen0_7, transform_hlds__float_regs__Type_8, transform_hlds__float_regs__SpecInst0_25, &transform_hlds__float_regs__SpecInst_26);
                    }
#line 363 "float_regs.m"
                    {
#line 363 "float_regs.m"
                      MR_Word base;
#line 363 "float_regs.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 363 "float_regs.m"
                      *transform_hlds__float_regs__Inst_10 = base;
#line 363 "float_regs.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 363 "float_regs.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__InstVarSet_24));
#line 363 "float_regs.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__SpecInst_26));
#line 363 "float_regs.m"
                    }
#line 361 "float_regs.m"
                  }
#line 338 "float_regs.m"
                else
#line 338 "float_regs.m"
                  if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 365 "float_regs.m"
                    {
#line 365 "float_regs.m"
                      MR_Word transform_hlds__float_regs__InstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));

#line 367 "float_regs.m"
                      {
#line 367 "float_regs.m"
                        transform_hlds__float_regs__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, transform_hlds__float_regs__Seen0_7, ((MR_Box) (transform_hlds__float_regs__InstName_27)));
                      }
#line 369 "float_regs.m"
                      if (transform_hlds__float_regs__succeeded)
#line 368 "float_regs.m"
                        *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 369 "float_regs.m"
                      else
#line 370 "float_regs.m"
                        {
#line 370 "float_regs.m"
                          MR_Word transform_hlds__float_regs__Seen1_28;
#line 370 "float_regs.m"
                          MR_Word transform_hlds__float_regs__Inst1_29;
#line 370 "float_regs.m"
                          MR_Word transform_hlds__float_regs__Inst2_30;

#line 370 "float_regs.m"
                          {
#line 370 "float_regs.m"
                            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (transform_hlds__float_regs__InstName_27)), transform_hlds__float_regs__Seen0_7, &transform_hlds__float_regs__Seen1_28);
                          }
#line 371 "float_regs.m"
                          {
#line 371 "float_regs.m"
                            check_hlds__mode_util__inst_lookup_3_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__InstName_27, &transform_hlds__float_regs__Inst1_29);
                          }
#line 372 "float_regs.m"
                          {
#line 372 "float_regs.m"
                            transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen1_28, transform_hlds__float_regs__Type_8, transform_hlds__float_regs__Inst1_29, &transform_hlds__float_regs__Inst2_30);
                          }
#line 374 "float_regs.m"
                          {
#line 374 "float_regs.m"
                            transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__Inst1_29, transform_hlds__float_regs__Inst2_30);
                          }
#line 376 "float_regs.m"
                          if (transform_hlds__float_regs__succeeded)
#line 375 "float_regs.m"
                            *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 376 "float_regs.m"
                          else
#line 377 "float_regs.m"
                            *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst2_30;
#line 370 "float_regs.m"
                        }
#line 365 "float_regs.m"
                    }
#line 338 "float_regs.m"
                  else
#line 338 "float_regs.m"
                    if (((((MR_tag((MR_Word) transform_hlds__float_regs__Inst0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 338 "float_regs.m"
                      {
#line 338 "float_regs.m"
                        MR_Word transform_hlds__float_regs__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 2)));
#line 338 "float_regs.m"
                        MR_Word transform_hlds__float_regs__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__float_regs__Inst0_9, (MR_Integer) 1)));

#line 338 "float_regs.m"
                        if ((transform_hlds__float_regs__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "float_regs.m"
                          *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 338 "float_regs.m"
                        else
#line 338 "float_regs.m"
                          {
#line 338 "float_regs.m"
                            MR_Word transform_hlds__float_regs__PredInstInfo0_12 = (MR_Word) MR_body(((MR_Word) transform_hlds__float_regs__V_57_57), (MR_Integer) 1);
#line 338 "float_regs.m"
                            MR_Word transform_hlds__float_regs__PredInstInfo_17;
#line 338 "float_regs.m"
                            MR_Word transform_hlds__float_regs__V_43_43;
#line 342 "float_regs.m"
                            MR_Word transform_hlds__float_regs__ArgTypes_16;
#line 339 "float_regs.m"
                            MR_Word transform_hlds__float_regs__V_13_13;
#line 339 "float_regs.m"
                            MR_Word transform_hlds__float_regs__V_14_14;

#line 339 "float_regs.m"
                            {
#line 339 "float_regs.m"
                              transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__Type_8, &transform_hlds__float_regs__V_13_13, &transform_hlds__float_regs__V_14_14, &transform_hlds__float_regs__ArgTypes_16);
                            }
#line 342 "float_regs.m"
                            if (transform_hlds__float_regs__succeeded)
#line 340 "float_regs.m"
                              {
#line 340 "float_regs.m"
                                transform_hlds__float_regs__add_arg_regs_in_pred_inst_info_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen0_7, transform_hlds__float_regs__ArgTypes_16, transform_hlds__float_regs__PredInstInfo0_12, &transform_hlds__float_regs__PredInstInfo_17);
                              }
#line 342 "float_regs.m"
                            else
#line 343 "float_regs.m"
                              transform_hlds__float_regs__PredInstInfo_17 = transform_hlds__float_regs__PredInstInfo0_12;
#line 345 "float_regs.m"
                            transform_hlds__float_regs__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__float_regs__PredInstInfo_17);
#line 345 "float_regs.m"
                            {
#line 345 "float_regs.m"
                              MR_Word base;
#line 345 "float_regs.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 345 "float_regs.m"
                              *transform_hlds__float_regs__Inst_10 = base;
#line 345 "float_regs.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 345 "float_regs.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__float_regs__V_58_58));
#line 345 "float_regs.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__float_regs__V_43_43));
#line 345 "float_regs.m"
                            }
#line 338 "float_regs.m"
                          }
#line 338 "float_regs.m"
                      }
#line 338 "float_regs.m"
                    else
#line 389 "float_regs.m"
                      *transform_hlds__float_regs__Inst_10 = transform_hlds__float_regs__Inst0_9;
#line 338 "float_regs.m"
  }
#line 333 "float_regs.m"
}

#line 316 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_mode_2_5_p_0(
#line 316 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_6,
#line 316 "float_regs.m"
  MR_Word transform_hlds__float_regs__Seen_7,
#line 316 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarType_8,
#line 316 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgMode0_9,
#line 316 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgMode_10)
#line 316 "float_regs.m"
{
#line 319 "float_regs.m"
  {
#line 319 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 319 "float_regs.m"
    MR_Word transform_hlds__float_regs__InitialInst0_11;
#line 319 "float_regs.m"
    MR_Word transform_hlds__float_regs__FinalInst0_12;
#line 319 "float_regs.m"
    MR_Word transform_hlds__float_regs__InitialInst_13;
#line 319 "float_regs.m"
    MR_Word transform_hlds__float_regs__FinalInst_14;

#line 320 "float_regs.m"
    {
#line 320 "float_regs.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__ArgMode0_9, &transform_hlds__float_regs__InitialInst0_11, &transform_hlds__float_regs__FinalInst0_12);
    }
#line 321 "float_regs.m"
    {
#line 321 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen_7, transform_hlds__float_regs__VarType_8, transform_hlds__float_regs__InitialInst0_11, &transform_hlds__float_regs__InitialInst_13);
    }
#line 322 "float_regs.m"
    {
#line 322 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_inst_5_p_0(transform_hlds__float_regs__ModuleInfo_6, transform_hlds__float_regs__Seen_7, transform_hlds__float_regs__VarType_8, transform_hlds__float_regs__FinalInst0_12, &transform_hlds__float_regs__FinalInst_14);
    }
#line 325 "float_regs.m"
    {
#line 325 "float_regs.m"
      transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__InitialInst_13, transform_hlds__float_regs__InitialInst0_11);
    }
#line 325 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 326 "float_regs.m"
      {
#line 326 "float_regs.m"
        transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(transform_hlds__float_regs__FinalInst_14, transform_hlds__float_regs__FinalInst0_12);
      }
#line 329 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 328 "float_regs.m"
      *transform_hlds__float_regs__ArgMode_10 = transform_hlds__float_regs__ArgMode0_9;
#line 329 "float_regs.m"
    else
#line 330 "float_regs.m"
      {
#line 330 "float_regs.m"
        MR_Word base;
#line 330 "float_regs.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "float_regs.m"
        *transform_hlds__float_regs__ArgMode_10 = base;
#line 330 "float_regs.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__float_regs__InitialInst_13));
#line 330 "float_regs.m"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__float_regs__FinalInst_14));
#line 330 "float_regs.m"
      }
#line 319 "float_regs.m"
  }
#line 316 "float_regs.m"
}

#line 310 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_mode_4_p_0(
#line 310 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
#line 310 "float_regs.m"
  MR_Word transform_hlds__float_regs__VarType_6,
#line 310 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgMode0_7,
#line 310 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgMode_8)
#line 310 "float_regs.m"
{
#line 313 "float_regs.m"
  {
#line 313 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 313 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_9_9;

#line 314 "float_regs.m"
    {
#line 314 "float_regs.m"
      transform_hlds__float_regs__V_9_9 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
    }
#line 314 "float_regs.m"
    {
#line 314 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_mode_2_5_p_0(transform_hlds__float_regs__ModuleInfo_5, transform_hlds__float_regs__V_9_9, transform_hlds__float_regs__VarType_6, transform_hlds__float_regs__ArgMode0_7, transform_hlds__float_regs__ArgMode_8);
#line 314 "float_regs.m"
      return;
    }
#line 313 "float_regs.m"
  }
#line 310 "float_regs.m"
}

#line 303 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_2(
#line 303 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 303 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 303 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 303 "float_regs.m"
{
#line 303 "float_regs.m"
  {
#line 303 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 303 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_Type_6;

#line 303 "float_regs.m"
    {
#line 303 "float_regs.m"
      transform_hlds__float_regs__make_generic_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv1_Type_6);
    }
#line 303 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv1_Type_6));
#line 303 "float_regs.m"
  }
#line 303 "float_regs.m"
}

#line 282 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0_1(
#line 282 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 282 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 282 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_2)
#line 282 "float_regs.m"
{
#line 282 "float_regs.m"
  {
#line 282 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 282 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_Type_6;

#line 282 "float_regs.m"
    {
#line 282 "float_regs.m"
      transform_hlds__float_regs__make_generic_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), &transform_hlds__float_regs__conv0_Type_6);
    }
#line 282 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_2 = ((MR_Box) (transform_hlds__float_regs__conv0_Type_6));
#line 282 "float_regs.m"
  }
#line 282 "float_regs.m"
}

#line 275 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__make_generic_type_3_p_0(
#line 275 "float_regs.m"
  MR_Word transform_hlds__float_regs__PolymorphicContext_4,
#line 275 "float_regs.m"
  MR_Word transform_hlds__float_regs__Type0_5,
#line 275 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Type_6)
#line 275 "float_regs.m"
{
#line 285 "float_regs.m"
  {
#line 285 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 285 "float_regs.m"
    MR_Word transform_hlds__float_regs__Purity_7;
#line 285 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredOrFunc_8;
#line 285 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgTypes0_10;

#line 279 "float_regs.m"
    {
#line 279 "float_regs.m"
      transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(transform_hlds__float_regs__Type0_5, &transform_hlds__float_regs__Purity_7, &transform_hlds__float_regs__PredOrFunc_8, &transform_hlds__float_regs__ArgTypes0_10);
    }
#line 285 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 282 "float_regs.m"
      {
#line 282 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeCtorInfo_24_24;
#line 282 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgTypes_11;
#line 282 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_15_15;

#line 282 "float_regs.m"
        {
#line 282 "float_regs.m"
          transform_hlds__float_regs__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 282 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_2[1]));
#line 282 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, 1) = ((MR_Box) (transform_hlds__float_regs__make_generic_type_3_p_0_1));
#line 282 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 282 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_15_15, 3) = ((MR_Box) (transform_hlds__float_regs__PolymorphicContext_4));
#line 282 "float_regs.m"
        }
#line 11765 "transform_hlds.float_regs.c"
        transform_hlds__float_regs__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 282 "float_regs.m"
        {
#line 282 "float_regs.m"
          mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__V_15_15, transform_hlds__float_regs__ArgTypes0_10, &transform_hlds__float_regs__ArgTypes_11);
        }
#line 283 "float_regs.m"
        {
#line 283 "float_regs.m"
          parse_tree__prog_type__construct_higher_order_type_5_p_0(transform_hlds__float_regs__Purity_7, transform_hlds__float_regs__PredOrFunc_8, transform_hlds__float_regs__ArgTypes_11, transform_hlds__float_regs__Type_6);
#line 283 "float_regs.m"
          return;
        }
#line 282 "float_regs.m"
      }
#line 285 "float_regs.m"
    else
#line 306 "float_regs.m"
      {
#line 306 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeCtor_12;
#line 306 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgTypes0_20;

#line 286 "float_regs.m"
        {
#line 286 "float_regs.m"
          transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__float_regs__Type0_5, &transform_hlds__float_regs__TypeCtor_12, &transform_hlds__float_regs__ArgTypes0_20);
        }
#line 306 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 301 "float_regs.m"
          if ((transform_hlds__float_regs__ArgTypes0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "float_regs.m"
            {
#line 291 "float_regs.m"
              MR_Word transform_hlds__float_regs__V_28_28;

#line 291 "float_regs.m"
              transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__PolymorphicContext_4 == (MR_Integer) 1);
#line 291 "float_regs.m"
              if (transform_hlds__float_regs__succeeded)
#line 291 "float_regs.m"
                {
#line 292 "float_regs.m"
                  {
#line 292 "float_regs.m"
                    transform_hlds__float_regs__V_28_28 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
                  }
#line 292 "float_regs.m"
                  {
#line 292 "float_regs.m"
                    transform_hlds__float_regs__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(transform_hlds__float_regs__TypeCtor_12, transform_hlds__float_regs__V_28_28);
                  }
#line 291 "float_regs.m"
                }
#line 298 "float_regs.m"
              if (transform_hlds__float_regs__succeeded)
#line 297 "float_regs.m"
                {
#line 297 "float_regs.m"
                  *transform_hlds__float_regs__Type_6 = parse_tree__builtin_lib_types__heap_pointer_type_0_f_0();
                }
#line 298 "float_regs.m"
              else
#line 299 "float_regs.m"
                *transform_hlds__float_regs__Type_6 = transform_hlds__float_regs__Type0_5;
#line 298 "float_regs.m"
            }
#line 301 "float_regs.m"
          else
#line 302 "float_regs.m"
            {
#line 302 "float_regs.m"
              MR_Word transform_hlds__float_regs__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 302 "float_regs.m"
              MR_Word transform_hlds__float_regs__ArgTypes_18;

#line 303 "float_regs.m"
              {
#line 303 "float_regs.m"
                mercury__list__map_3_p_0(transform_hlds__float_regs__TypeCtorInfo_27_27, transform_hlds__float_regs__TypeCtorInfo_27_27, (MR_Word) &transform_hlds__float_regs_scalar_common_6[0], transform_hlds__float_regs__ArgTypes0_20, &transform_hlds__float_regs__ArgTypes_18);
              }
#line 304 "float_regs.m"
              {
#line 304 "float_regs.m"
                parse_tree__prog_type__construct_type_3_p_0(transform_hlds__float_regs__TypeCtor_12, transform_hlds__float_regs__ArgTypes_18, transform_hlds__float_regs__Type_6);
#line 304 "float_regs.m"
                return;
              }
#line 302 "float_regs.m"
            }
#line 306 "float_regs.m"
        else
#line 307 "float_regs.m"
          *transform_hlds__float_regs__Type_6 = transform_hlds__float_regs__Type0_5;
#line 306 "float_regs.m"
      }
#line 285 "float_regs.m"
  }
#line 275 "float_regs.m"
}

#line 234 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(
#line 234 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
#line 234 "float_regs.m"
  MR_Word transform_hlds__float_regs__RealVarType_6,
#line 234 "float_regs.m"
  MR_Word transform_hlds__float_regs__ArgMode0_7,
#line 234 "float_regs.m"
  MR_Word * transform_hlds__float_regs__ArgMode_8)
#line 234 "float_regs.m"
{
#line 271 "float_regs.m"
  {
#line 271 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 239 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeArgs_10;
#line 239 "float_regs.m"
    MR_Word transform_hlds__float_regs___TypeCtor_9;
#line 240 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_11_11;
#line 240 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_12_12;

#line 239 "float_regs.m"
    {
#line 239 "float_regs.m"
      transform_hlds__float_regs__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__float_regs__RealVarType_6, &transform_hlds__float_regs___TypeCtor_9, &transform_hlds__float_regs__TypeArgs_10);
    }
#line 239 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 239 "float_regs.m"
      {
#line 240 "float_regs.m"
        transform_hlds__float_regs__succeeded = ((MR_tag((MR_Word) transform_hlds__float_regs__TypeArgs_10)) == (MR_mktag((MR_Integer) 1)));
#line 240 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 240 "float_regs.m"
          {
#line 240 "float_regs.m"
            transform_hlds__float_regs__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__TypeArgs_10, (MR_Integer) 0)));
#line 240 "float_regs.m"
            transform_hlds__float_regs__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__float_regs__TypeArgs_10, (MR_Integer) 1)));
#line 240 "float_regs.m"
          }
#line 239 "float_regs.m"
      }
#line 271 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 268 "float_regs.m"
      {
#line 268 "float_regs.m"
        MR_Word transform_hlds__float_regs__AssumedType_14;
#line 268 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_19_19;

#line 269 "float_regs.m"
        {
#line 269 "float_regs.m"
          transform_hlds__float_regs__make_generic_type_3_p_0((MR_Integer) 0, transform_hlds__float_regs__RealVarType_6, &transform_hlds__float_regs__AssumedType_14);
        }
#line 314 "float_regs.m"
        {
#line 314 "float_regs.m"
          transform_hlds__float_regs__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
        }
#line 314 "float_regs.m"
        {
#line 314 "float_regs.m"
          transform_hlds__float_regs__add_arg_regs_in_mode_2_5_p_0(transform_hlds__float_regs__ModuleInfo_5, transform_hlds__float_regs__V_19_19, transform_hlds__float_regs__AssumedType_14, transform_hlds__float_regs__ArgMode0_7, transform_hlds__float_regs__ArgMode_8);
#line 314 "float_regs.m"
          return;
        }
#line 268 "float_regs.m"
      }
#line 271 "float_regs.m"
    else
#line 272 "float_regs.m"
      *transform_hlds__float_regs__ArgMode_8 = transform_hlds__float_regs__ArgMode0_7;
#line 271 "float_regs.m"
  }
#line 234 "float_regs.m"
}

#line 228 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2(
#line 228 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 228 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 228 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 228 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 228 "float_regs.m"
{
#line 228 "float_regs.m"
  {
#line 228 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 228 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv1_ArgMode_8;

#line 228 "float_regs.m"
    {
#line 228 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv1_ArgMode_8);
    }
#line 228 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv1_ArgMode_8));
#line 228 "float_regs.m"
  }
#line 228 "float_regs.m"
}

#line 223 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1(
#line 223 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 223 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 223 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 223 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 223 "float_regs.m"
{
#line 223 "float_regs.m"
  {
#line 223 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 223 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_ArgMode_8;

#line 223 "float_regs.m"
    {
#line 223 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_proc_arg_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_ArgMode_8);
    }
#line 223 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_ArgMode_8));
#line 223 "float_regs.m"
  }
#line 223 "float_regs.m"
}

#line 208 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(
#line 208 "float_regs.m"
  MR_Word transform_hlds__float_regs__ModuleInfo_5,
#line 208 "float_regs.m"
  MR_Integer transform_hlds__float_regs__ProcId_6,
#line 208 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredInfo0_7,
#line 208 "float_regs.m"
  MR_Word * transform_hlds__float_regs__PredInfo_8)
#line 208 "float_regs.m"
{
#line 211 "float_regs.m"
  {
#line 211 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 211 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredMarkers_9;
#line 211 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcInfo0_10;
#line 211 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgModes0_11;
#line 211 "float_regs.m"
    MR_Word transform_hlds__float_regs__ArgModes_17;
#line 211 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcInfo_19;

#line 212 "float_regs.m"
    {
#line 212 "float_regs.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__float_regs__PredInfo0_7, &transform_hlds__float_regs__PredMarkers_9);
    }
#line 213 "float_regs.m"
    {
#line 213 "float_regs.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__float_regs__PredInfo0_7, transform_hlds__float_regs__ProcId_6, &transform_hlds__float_regs__ProcInfo0_10);
    }
#line 214 "float_regs.m"
    {
#line 214 "float_regs.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__float_regs__ProcInfo0_10, &transform_hlds__float_regs__ArgModes0_11);
    }
#line 215 "float_regs.m"
    {
#line 215 "float_regs.m"
      transform_hlds__float_regs__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__float_regs__PredMarkers_9, (MR_Integer) 10);
    }
#line 226 "float_regs.m"
    if (transform_hlds__float_regs__succeeded)
#line 219 "float_regs.m"
      {
#line 219 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeCtorInfo_23_23;
#line 219 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeCtorInfo_24_24;
#line 219 "float_regs.m"
        MR_Word transform_hlds__float_regs__IM_ArgTypes_12;
#line 219 "float_regs.m"
        MR_Integer transform_hlds__float_regs__Num_IM_ArgTypes_13;
#line 219 "float_regs.m"
        MR_Word transform_hlds__float_regs__FrontModes_14;
#line 219 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgModes1_15;
#line 219 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgModes2_16;
#line 219 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_21_21;
#line 219 "float_regs.m"
        MR_Integer transform_hlds__float_regs__Len_37;
#line 219 "float_regs.m"
        MR_Integer transform_hlds__float_regs__StartLen_38;

#line 219 "float_regs.m"
        {
#line 219 "float_regs.m"
          hlds__hlds_pred__pred_info_get_instance_method_arg_types_2_p_0(transform_hlds__float_regs__PredInfo0_7, &transform_hlds__float_regs__IM_ArgTypes_12);
        }
#line 12097 "transform_hlds.float_regs.c"
        transform_hlds__float_regs__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 220 "float_regs.m"
        {
#line 220 "float_regs.m"
          mercury__list__length_2_p_0(transform_hlds__float_regs__TypeCtorInfo_23_23, transform_hlds__float_regs__IM_ArgTypes_12, &transform_hlds__float_regs__Num_IM_ArgTypes_13);
        }
#line 12104 "transform_hlds.float_regs.c"
        transform_hlds__float_regs__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1660 "float_regs.m"
        {
#line 1660 "float_regs.m"
          mercury__list__length_2_p_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__ArgModes0_11, &transform_hlds__float_regs__Len_37);
        }
#line 1661 "float_regs.m"
        transform_hlds__float_regs__StartLen_38 = (transform_hlds__float_regs__Len_37 - transform_hlds__float_regs__Num_IM_ArgTypes_13);
#line 1662 "float_regs.m"
        transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_38 == (MR_Integer) 0);
#line 1665 "float_regs.m"
        if (transform_hlds__float_regs__succeeded)
#line 1663 "float_regs.m"
          {
#line 1663 "float_regs.m"
            transform_hlds__float_regs__FrontModes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1664 "float_regs.m"
            transform_hlds__float_regs__ArgModes1_15 = transform_hlds__float_regs__ArgModes0_11;
#line 1663 "float_regs.m"
          }
#line 1665 "float_regs.m"
        else
#line 1667 "float_regs.m"
          {
#line 1665 "float_regs.m"
            transform_hlds__float_regs__succeeded = (transform_hlds__float_regs__StartLen_38 > (MR_Integer) 0);
#line 1667 "float_regs.m"
            if (transform_hlds__float_regs__succeeded)
#line 1666 "float_regs.m"
              {
#line 1666 "float_regs.m"
                mercury__list__det_split_list_4_p_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__StartLen_38, transform_hlds__float_regs__ArgModes0_11, &transform_hlds__float_regs__FrontModes_14, &transform_hlds__float_regs__ArgModes1_15);
              }
#line 1667 "float_regs.m"
            else
#line 1668 "float_regs.m"
              {
#line 1668 "float_regs.m"
                {
#line 1668 "float_regs.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.float_regs", (MR_String) "predicate \140transform_hlds.float_regs.split_list_from_end\'/4", (MR_String) "list too short");
#line 1668 "float_regs.m"
                  return;
                }
#line 1668 "float_regs.m"
              }
#line 1667 "float_regs.m"
          }
#line 223 "float_regs.m"
        {
#line 223 "float_regs.m"
          transform_hlds__float_regs__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 223 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_21_21, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[1]));
#line 223 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_21_21, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_1));
#line 223 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 223 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_21_21, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_5));
#line 223 "float_regs.m"
        }
#line 223 "float_regs.m"
        {
#line 223 "float_regs.m"
          mercury__list__map_corresponding_4_p_0(transform_hlds__float_regs__TypeCtorInfo_23_23, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__V_21_21, transform_hlds__float_regs__IM_ArgTypes_12, transform_hlds__float_regs__ArgModes1_15, &transform_hlds__float_regs__ArgModes2_16);
        }
#line 225 "float_regs.m"
        {
#line 225 "float_regs.m"
          transform_hlds__float_regs__ArgModes_17 = mercury__list__f_43_43_2_f_0(transform_hlds__float_regs__TypeCtorInfo_24_24, transform_hlds__float_regs__FrontModes_14, transform_hlds__float_regs__ArgModes2_16);
        }
#line 219 "float_regs.m"
      }
#line 226 "float_regs.m"
    else
#line 227 "float_regs.m"
      {
#line 227 "float_regs.m"
        MR_Word transform_hlds__float_regs__TypeCtorInfo_32_32;
#line 227 "float_regs.m"
        MR_Word transform_hlds__float_regs__ArgTypes_18;
#line 227 "float_regs.m"
        MR_Word transform_hlds__float_regs__V_22_22;

#line 227 "float_regs.m"
        {
#line 227 "float_regs.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__float_regs__PredInfo0_7, &transform_hlds__float_regs__ArgTypes_18);
        }
#line 228 "float_regs.m"
        {
#line 228 "float_regs.m"
          transform_hlds__float_regs__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 228 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_22_22, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[1]));
#line 228 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_22_22, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0_2));
#line 228 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 228 "float_regs.m"
          MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_22_22, 3) = ((MR_Box) (transform_hlds__float_regs__ModuleInfo_5));
#line 228 "float_regs.m"
        }
#line 12209 "transform_hlds.float_regs.c"
        transform_hlds__float_regs__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 228 "float_regs.m"
        {
#line 228 "float_regs.m"
          mercury__list__map_corresponding_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__TypeCtorInfo_32_32, transform_hlds__float_regs__V_22_22, transform_hlds__float_regs__ArgTypes_18, transform_hlds__float_regs__ArgModes0_11, &transform_hlds__float_regs__ArgModes_17);
        }
#line 227 "float_regs.m"
      }
#line 231 "float_regs.m"
    {
#line 231 "float_regs.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__float_regs__ArgModes_17, transform_hlds__float_regs__ProcInfo0_10, &transform_hlds__float_regs__ProcInfo_19);
    }
#line 232 "float_regs.m"
    {
#line 232 "float_regs.m"
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(transform_hlds__float_regs__ProcId_6, transform_hlds__float_regs__ProcInfo_19, transform_hlds__float_regs__PredInfo0_7, transform_hlds__float_regs__PredInfo_8);
#line 232 "float_regs.m"
      return;
    }
#line 211 "float_regs.m"
  }
#line 208 "float_regs.m"
}

#line 204 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1(
#line 204 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 204 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 204 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 204 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 204 "float_regs.m"
{
#line 204 "float_regs.m"
  {
#line 204 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 204 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_PredInfo_8;

#line 204 "float_regs.m"
    {
#line 204 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__float_regs__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_PredInfo_8);
    }
#line 204 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_PredInfo_8));
#line 204 "float_regs.m"
  }
#line 204 "float_regs.m"
}

#line 198 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(
#line 198 "float_regs.m"
  MR_Word transform_hlds__float_regs__PredId_4,
#line 198 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9,
#line 198 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_10)
#line 198 "float_regs.m"
{
#line 201 "float_regs.m"
  {
#line 201 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 201 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInfo0_6;
#line 201 "float_regs.m"
    MR_Word transform_hlds__float_regs__ProcIds_7;
#line 201 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredInfo_8;
#line 201 "float_regs.m"
    MR_Word transform_hlds__float_regs__V_11_11;
#line 204 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv1_PredInfo_8;

#line 202 "float_regs.m"
    {
#line 202 "float_regs.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__float_regs__PredId_4, &transform_hlds__float_regs__PredInfo0_6);
    }
#line 203 "float_regs.m"
    {
#line 203 "float_regs.m"
      transform_hlds__float_regs__ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__float_regs__PredInfo0_6);
    }
#line 204 "float_regs.m"
    {
#line 204 "float_regs.m"
      transform_hlds__float_regs__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 204 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_11_11, 0) = ((MR_Box) (&transform_hlds__float_regs_scalar_common_5[0]));
#line 204 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_11_11, 1) = ((MR_Box) (transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0_1));
#line 204 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 204 "float_regs.m"
      MR_hl_field(MR_mktag(0), transform_hlds__float_regs__V_11_11, 3) = ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9));
#line 204 "float_regs.m"
    }
#line 204 "float_regs.m"
    {
#line 204 "float_regs.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, transform_hlds__float_regs__V_11_11, transform_hlds__float_regs__ProcIds_7, ((MR_Box) (transform_hlds__float_regs__PredInfo0_6)), &transform_hlds__float_regs__conv1_PredInfo_8);
    }
#line 204 "float_regs.m"
    transform_hlds__float_regs__PredInfo_8 = ((MR_Word) transform_hlds__float_regs__conv1_PredInfo_8);
#line 206 "float_regs.m"
    {
#line 206 "float_regs.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__float_regs__PredId_4, transform_hlds__float_regs__PredInfo_8, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_10);
#line 206 "float_regs.m"
      return;
    }
#line 201 "float_regs.m"
  }
#line 198 "float_regs.m"
}

#line 190 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_2(
#line 190 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 190 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 190 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 190 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3,
#line 190 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_4,
#line 190 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_5)
#line 190 "float_regs.m"
{
#line 190 "float_regs.m"
  {
#line 190 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 190 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 190 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14;

#line 190 "float_regs.m"
    {
#line 190 "float_regs.m"
      transform_hlds__float_regs__insert_reg_wrappers_pred_5_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) transform_hlds__float_regs__wrapper_arg_4), &transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14);
    }
#line 190 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv3_STATE_VARIABLE_ModuleInfo_12));
#line 190 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_5 = ((MR_Box) (transform_hlds__float_regs__conv2_STATE_VARIABLE_Specs_14));
#line 190 "float_regs.m"
  }
#line 190 "float_regs.m"
}

#line 183 "float_regs.m"
static void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0_1(
#line 183 "float_regs.m"
  MR_Box transform_hlds__float_regs__closure_arg,
#line 183 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_1,
#line 183 "float_regs.m"
  MR_Box transform_hlds__float_regs__wrapper_arg_2,
#line 183 "float_regs.m"
  MR_Box * transform_hlds__float_regs__wrapper_arg_3)
#line 183 "float_regs.m"
{
#line 183 "float_regs.m"
  {
#line 183 "float_regs.m"
    MR_Box transform_hlds__float_regs__closure = transform_hlds__float_regs__closure_arg;
#line 183 "float_regs.m"
    MR_Word transform_hlds__float_regs__conv0_STATE_VARIABLE_ModuleInfo_10;

#line 183 "float_regs.m"
    {
#line 183 "float_regs.m"
      transform_hlds__float_regs__add_arg_regs_in_pred_3_p_0(((MR_Word) transform_hlds__float_regs__wrapper_arg_1), ((MR_Word) transform_hlds__float_regs__wrapper_arg_2), &transform_hlds__float_regs__conv0_STATE_VARIABLE_ModuleInfo_10);
    }
#line 183 "float_regs.m"
    *transform_hlds__float_regs__wrapper_arg_3 = ((MR_Box) (transform_hlds__float_regs__conv0_STATE_VARIABLE_ModuleInfo_10));
#line 183 "float_regs.m"
  }
#line 183 "float_regs.m"
}

#line 135 "float_regs.m"
void MR_CALL 
transform_hlds__float_regs__insert_reg_wrappers_3_p_0(
#line 135 "float_regs.m"
  MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_7,
#line 135 "float_regs.m"
  MR_Word * transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_8,
#line 135 "float_regs.m"
  MR_Word * transform_hlds__float_regs__Specs_5)
#line 135 "float_regs.m"
{
#line 178 "float_regs.m"
  {
#line 178 "float_regs.m"
    MR_bool transform_hlds__float_regs__succeeded;
#line 178 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_19_19;
#line 178 "float_regs.m"
    MR_Word transform_hlds__float_regs__TypeCtorInfo_20_20;
#line 178 "float_regs.m"
    MR_Word transform_hlds__float_regs__PredIds_6;
#line 178 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_9_9;
#line 178 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_11_11;
#line 178 "float_regs.m"
    MR_Word transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_13_13;
#line 183 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_11_11;
#line 190 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv5_STATE_VARIABLE_ModuleInfo_13_13;
#line 190 "float_regs.m"
    MR_Box transform_hlds__float_regs__conv4_Specs_5;

#line 182 "float_regs.m"
    {
#line 182 "float_regs.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__float_regs__PredIds_6, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_0_7, &transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_9_9);
    }
#line 12447 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 12449 "transform_hlds.float_regs.c"
    transform_hlds__float_regs__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 183 "float_regs.m"
    {
#line 183 "float_regs.m"
      mercury__list__foldl_4_p_0(transform_hlds__float_regs__TypeCtorInfo_19_19, transform_hlds__float_regs__TypeCtorInfo_20_20, (MR_Word) &transform_hlds__float_regs_scalar_common_3[0], transform_hlds__float_regs__PredIds_6, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_9_9)), &transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_11_11);
    }
#line 183 "float_regs.m"
    transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_11_11 = ((MR_Word) transform_hlds__float_regs__conv1_STATE_VARIABLE_ModuleInfo_11_11);
#line 190 "float_regs.m"
    {
#line 190 "float_regs.m"
      mercury__list__foldl2_6_p_0(transform_hlds__float_regs__TypeCtorInfo_19_19, transform_hlds__float_regs__TypeCtorInfo_20_20, (MR_Word) &transform_hlds__float_regs_scalar_common_1[0], (MR_Word) &transform_hlds__float_regs_scalar_common_3[1], transform_hlds__float_regs__PredIds_6, ((MR_Box) (transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_11_11)), &transform_hlds__float_regs__conv5_STATE_VARIABLE_ModuleInfo_13_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__float_regs__conv4_Specs_5);
    }
#line 190 "float_regs.m"
    transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_13_13 = ((MR_Word) transform_hlds__float_regs__conv5_STATE_VARIABLE_ModuleInfo_13_13);
#line 190 "float_regs.m"
    *transform_hlds__float_regs__Specs_5 = ((MR_Word) transform_hlds__float_regs__conv4_Specs_5);
#line 191 "float_regs.m"
    {
#line 191 "float_regs.m"
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_13_13, transform_hlds__float_regs__STATE_VARIABLE_ModuleInfo_8);
#line 191 "float_regs.m"
      return;
    }
#line 178 "float_regs.m"
  }
#line 135 "float_regs.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.float_regs. */
