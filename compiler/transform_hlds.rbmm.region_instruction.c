/*
** Automatically generated from `rbmm.region_instruction.m'
** by the Mercury compiler,
** version rotd-2023-08-18
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


// :- module transform_hlds.rbmm.region_instruction.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__region_instruction__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_instruction.mih"


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
#include "hlds.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0[2];

static const MR_ConstString transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0[2];

static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0;

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0[1];

static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0[1];

static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0[1];

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0[1];

static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0;

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1[1];

static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1;

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2[2];

static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2;

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2[1];

static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0[3];

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0[3];

static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0[3];

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;

static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0;

static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1;

static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2;

static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_ordinal_ordered_region_instr_type_0[3];

static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0[3];

static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0[3];

static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(
  MR_Word RegionInstrType_7,
  MR_Word ProgPoint_8,
  MR_Word Graph_9,
  MR_Word Region_10,
  MR_Word STATE_VARIABLE_RegionInstructionProc_0_17,
  MR_Word * STATE_VARIABLE_RegionInstructionProc_18);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_p_0(
  MR_Word RegionInstType_7,
  MR_Word ProgPoint_8,
  MR_Word Graph_9,
  MR_Word Region_10,
  MR_Word STATE_VARIABLE_RegionInstructionProc_0_16,
  MR_Word * STATE_VARIABLE_RegionInstructionProc_17);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_p_0(
  MR_Word BecomeDead_7,
  MR_Word CalleeDeadR_8,
  MR_Word SourceRegion_9,
  MR_Word TargetRegion_10,
  MR_Word STATE_VARIABLE_RemovedAfterProgPoint_0_12,
  MR_Word * STATE_VARIABLE_RemovedAfterProgPoint_13);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_p_0(
  MR_Word BecomeLive_7,
  MR_Word CalleeBornR_8,
  MR_Word SourceRegion_9,
  MR_Word TargetRegion_10,
  MR_Word STATE_VARIABLE_CreatedBeforeProgPoint_0_12,
  MR_Word * STATE_VARIABLE_CreatedBeforeProgPoint_13);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_p_0(
  MR_Word ModuleInfo_20,
  MR_Word PredId_21,
  MR_Word RptaInfoTable_22,
  MR_Word ExecPathTable_23,
  MR_Word LRBeforeTable_24,
  MR_Word LRAfterTable_25,
  MR_Word VoidVarRegionTable_26,
  MR_Word BornRTable_27,
  MR_Word DeadRTable_28,
  MR_Word LocalRTable_29,
  MR_Integer ProcId_30,
  MR_Word STATE_VARIABLE_BecomeLiveTable_0_49,
  MR_Word * STATE_VARIABLE_BecomeLiveTable_50,
  MR_Word STATE_VARIABLE_BecomeDeadBeforeTable_0_51,
  MR_Word * STATE_VARIABLE_BecomeDeadBeforeTable_52,
  MR_Word STATE_VARIABLE_BecomeDeadAfterTable_0_53,
  MR_Word * STATE_VARIABLE_BecomeDeadAfterTable_54,
  MR_Word STATE_VARIABLE_RegionInstructionTable_0_55,
  MR_Word * STATE_VARIABLE_RegionInstructionTable_56);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_p_0(
  MR_Word HeadVar__1_1,
  MR_Word RptaInfo_2,
  MR_Word BornR_3,
  MR_Word DeadR_4,
  MR_Word LocalR_5,
  MR_Word ProcLRBefore_6,
  MR_Word ProcLRAfter_7,
  MR_Word ProcVoidVarRegion_8,
  MR_Word BornRTable_9,
  MR_Word DeadRTable_10,
  MR_Word ModuleInfo_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_BecomeLiveProc_0_13,
  MR_Word * STATE_VARIABLE_BecomeLiveProc_14,
  MR_Word STATE_VARIABLE_BecomeDeadBeforeProc_0_15,
  MR_Word * STATE_VARIABLE_BecomeDeadBeforeProc_16,
  MR_Word STATE_VARIABLE_BecomeDeadAfterProc_0_17,
  MR_Word * STATE_VARIABLE_BecomeDeadAfterProc_18,
  MR_Word STATE_VARIABLE_RegionInstructionProc_0_19,
  MR_Word * STATE_VARIABLE_RegionInstructionProc_20);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0(
  MR_Word HeadVar__1_1,
  MR_Word RptaInfo_2,
  MR_Word BornR_3,
  MR_Word DeadR_4,
  MR_Word LocalR_5,
  MR_Word ProcLRBefore_6,
  MR_Word ProcLRAfter_7,
  MR_Word ProcVoidVarRegion_8,
  MR_Word BornRTable_9,
  MR_Word DeadRTable_10,
  MR_Word ModuleInfo_11,
  MR_Word ProcInfo_12,
  MR_Word BecomeDeadBeforeProgPoint_13,
  MR_Word STATE_VARIABLE_BecomeLiveProc_0_14,
  MR_Word * STATE_VARIABLE_BecomeLiveProc_15,
  MR_Word STATE_VARIABLE_BecomeDeadBeforeProc_0_16,
  MR_Word * STATE_VARIABLE_BecomeDeadBeforeProc_17,
  MR_Word STATE_VARIABLE_BecomeDeadAfterProc_0_18,
  MR_Word * STATE_VARIABLE_BecomeDeadAfterProc_19,
  MR_Word STATE_VARIABLE_RegionInstructionProc_0_20,
  MR_Word * STATE_VARIABLE_RegionInstructionProc_21);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0(
  MR_Word Expr_12,
  MR_Word ProgPoint_13,
  MR_Word BecomeLive_14,
  MR_Word BecomeDead_15,
  MR_Word RptaInfo_16,
  MR_Word BornRTable_17,
  MR_Word DeadRTable_18,
  MR_Word ModuleInfo_19,
  MR_Word ProcInfo_20,
  MR_Word * CreatedBeforeProgPoint_21,
  MR_Word * RemovedAfterProgPoint_22);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0(
  MR_Word ModuleInfo_19,
  MR_Word RptaInfoTable_20,
  MR_Word ExecPathTable_21,
  MR_Word LRBeforeTable_22,
  MR_Word LRAfterTable_23,
  MR_Word VoidVarRegionTable_24,
  MR_Word BornRTable_25,
  MR_Word DeadRTable_26,
  MR_Word LocalRTable_27,
  MR_Word PredId_28,
  MR_Word STATE_VARIABLE_BecomeLiveTable_0_35,
  MR_Word * STATE_VARIABLE_BecomeLiveTable_36,
  MR_Word STATE_VARIABLE_BecomeDeadBeforeTable_0_37,
  MR_Word * STATE_VARIABLE_BecomeDeadBeforeTable_38,
  MR_Word STATE_VARIABLE_BecomeDeadAfterTable_0_39,
  MR_Word * STATE_VARIABLE_BecomeDeadAfterTable_40,
  MR_Word STATE_VARIABLE_RegionInstructionTable_0_41,
  MR_Word * STATE_VARIABLE_RegionInstructionTable_42);

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_2[6][3];

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_3[1][21];

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_4[1][22];

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_5[2][9];




static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_2[4]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_3[1][21] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_4[1][22] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_instruction_scalar_common_5[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0)),
    ((MR_Box) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__rbmm__region_instruction__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0),
    (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0) }
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0),
  (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0)
};

static const MR_ConstString transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0[2] = {
  (MR_String) "instrs_before",
  (MR_String) "instrs_after"
};

static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0 = {
  (MR_String) "instrs_before_after",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0,
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0[1] = { &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0 };

static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0[1] = { &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0 };

static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "instrs_before_after",
  { transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0 },
  { transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0,

};

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0 = {
  (MR_String) "create_region",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1 = {
  (MR_String) "remove_region",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2 = {
  (MR_String) "rename_region",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0[1] = { &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1[1] = { &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1 };

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2[1] = { &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2 };

static const MR_DuPtagLayout transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0[3] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2
};

static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr",
  { transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0 },
  { transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr_proc",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__rbmm__region_instruction__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0 = {
  (MR_String) "create_region_instr",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1 = {
  (MR_String) "remove_region_instr",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2 = {
  (MR_String) "renaming_region_instr",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_ordinal_ordered_region_instr_type_0[3] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2
};

static const MR_EnumFunctorDescPtr transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0[3] = {
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1,
  &transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2
};

static const MR_Integer transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0_10001)),
  ((MR_Box) (transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0_10001)),
  (MR_String) "transform_hlds.rbmm.region_instruction",
  (MR_String) "region_instr_type",
  { transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0 },
  { transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__enum_ordinal_ordered_region_instr_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0,

};

void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0(
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
transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_35 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_35, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_36 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_14 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_36, ArgY1_14);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_37 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_38 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgY1_25 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_String ArgY2_28 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_26;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_26, Var_38, ArgY1_25);
                succeeded = (SubResult1_26 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_26;
                else
                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_37, ArgY2_28);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;
          MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_9, ArgY2_10) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(
  MR_Word RegionInstrType_7,
  MR_Word ProgPoint_8,
  MR_Word Graph_9,
  MR_Word Region_10,
  MR_Word STATE_VARIABLE_RegionInstructionProc_0_17,
  MR_Word * STATE_VARIABLE_RegionInstructionProc_18)
{
  MR_bool succeeded;
  MR_String RegionName_12;
  MR_Word RegionInstruction_13;
  MR_Word InstrsBefore_14;
  MR_Word InstrsAfter_15;
  MR_Word Var_19;
  MR_Box conv0_Var_19;

  RegionName_12 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_9, Region_10);
  switch (RegionInstrType_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        RegionInstruction_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, RegionInstruction_13, 0) = ((MR_Box) (RegionName_12));
      }
      break;
    case (MR_Integer) 1:
      {
        RegionInstruction_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RegionInstruction_13, 0) = ((MR_Box) (RegionName_12));
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.make_create_or_remove_instruction\'/3", (MR_String) "unexpected region instruction type");
        return;
      }
      break;
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), STATE_VARIABLE_RegionInstructionProc_0_17, ((MR_Box) (ProgPoint_8)), &conv0_Var_19);
  if (succeeded)
  {
    Var_19 = ((MR_Word) (conv0_Var_19));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    InstrsBefore_14 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
    InstrsAfter_15 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), ((MR_Box) (RegionInstruction_13)), InstrsBefore_14);
    if (succeeded)
      *STATE_VARIABLE_RegionInstructionProc_18 = STATE_VARIABLE_RegionInstructionProc_0_17;
    else
    {
      MR_Word NewInstrsBefore_16;
      MR_Word Var_22;

      succeeded = (RegionInstrType_7 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (RegionInstruction_13));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        NewInstrsBefore_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), InstrsBefore_14, Var_20);
      }
      else
        {
          NewInstrsBefore_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NewInstrsBefore_16, 0) = ((MR_Box) (RegionInstruction_13));
          MR_hl_field(1, NewInstrsBefore_16, 1) = ((MR_Box) (InstrsBefore_14));
        }
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (NewInstrsBefore_16));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (InstrsAfter_15));
      }
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), ((MR_Box) (ProgPoint_8)), ((MR_Box) (Var_22)), STATE_VARIABLE_RegionInstructionProc_0_17, STATE_VARIABLE_RegionInstructionProc_18);
    }
  }
  else
  {
    MR_Word Var_24;
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (RegionInstruction_13));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (Var_26));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), ((MR_Box) (ProgPoint_8)), ((MR_Box) (Var_24)), STATE_VARIABLE_RegionInstructionProc_0_17, STATE_VARIABLE_RegionInstructionProc_18);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_p_0(
  MR_Word RegionInstType_7,
  MR_Word ProgPoint_8,
  MR_Word Graph_9,
  MR_Word Region_10,
  MR_Word STATE_VARIABLE_RegionInstructionProc_0_16,
  MR_Word * STATE_VARIABLE_RegionInstructionProc_17)
{
  MR_bool succeeded;
  MR_String RegionName_12;
  MR_Word RegionInstruction_13;
  MR_Word InstsBefore_14;
  MR_Word InstsAfter_15;
  MR_Word Var_18;
  MR_Box conv0_Var_18;

  RegionName_12 = transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_f_0(Graph_9, Region_10);
  switch (RegionInstType_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        RegionInstruction_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, RegionInstruction_13, 0) = ((MR_Box) (RegionName_12));
      }
      break;
    case (MR_Integer) 1:
      {
        RegionInstruction_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RegionInstruction_13, 0) = ((MR_Box) (RegionName_12));
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.make_create_or_remove_instruction\'/3", (MR_String) "unexpected region instruction type");
        return;
      }
      break;
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), STATE_VARIABLE_RegionInstructionProc_0_16, ((MR_Box) (ProgPoint_8)), &conv0_Var_18);
  if (succeeded)
  {
    Var_18 = ((MR_Word) (conv0_Var_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    InstsBefore_14 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
    InstsAfter_15 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 1))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0), ((MR_Box) (RegionInstruction_13)), InstsAfter_15);
    if (succeeded)
      *STATE_VARIABLE_RegionInstructionProc_17 = STATE_VARIABLE_RegionInstructionProc_0_16;
    else
    {
      MR_Word Var_19;
      MR_Word Var_21;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (RegionInstruction_13));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (InstsAfter_15));
      }
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (InstsBefore_14));
        MR_hl_field(0, Var_19, 1) = ((MR_Box) (Var_21));
      }
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), ((MR_Box) (ProgPoint_8)), ((MR_Box) (Var_19)), STATE_VARIABLE_RegionInstructionProc_0_16, STATE_VARIABLE_RegionInstructionProc_17);
    }
  }
  else
  {
    MR_Word Var_22;
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (RegionInstruction_13));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (Var_25));
    }
    mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0), ((MR_Box) (ProgPoint_8)), ((MR_Box) (Var_22)), STATE_VARIABLE_RegionInstructionProc_0_16, STATE_VARIABLE_RegionInstructionProc_17);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_p_0(
  MR_Word BecomeDead_7,
  MR_Word CalleeDeadR_8,
  MR_Word SourceRegion_9,
  MR_Word TargetRegion_10,
  MR_Word STATE_VARIABLE_RemovedAfterProgPoint_0_12,
  MR_Word * STATE_VARIABLE_RemovedAfterProgPoint_13)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), BecomeDead_7, ((MR_Box) (TargetRegion_10)));
  if (succeeded)
  {
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), CalleeDeadR_8, ((MR_Box) (SourceRegion_9)));
    succeeded = !(succeeded);
  }
  if (succeeded)
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (TargetRegion_10)), STATE_VARIABLE_RemovedAfterProgPoint_0_12, STATE_VARIABLE_RemovedAfterProgPoint_13);
  else
    *STATE_VARIABLE_RemovedAfterProgPoint_13 = STATE_VARIABLE_RemovedAfterProgPoint_0_12;
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_p_0(
  MR_Word BecomeLive_7,
  MR_Word CalleeBornR_8,
  MR_Word SourceRegion_9,
  MR_Word TargetRegion_10,
  MR_Word STATE_VARIABLE_CreatedBeforeProgPoint_0_12,
  MR_Word * STATE_VARIABLE_CreatedBeforeProgPoint_13)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), BecomeLive_7, ((MR_Box) (TargetRegion_10)));
  if (succeeded)
  {
    succeeded = mercury__set__contains_2_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), CalleeBornR_8, ((MR_Box) (SourceRegion_9)));
    succeeded = !(succeeded);
  }
  if (succeeded)
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), ((MR_Box) (TargetRegion_10)), STATE_VARIABLE_CreatedBeforeProgPoint_0_12, STATE_VARIABLE_CreatedBeforeProgPoint_13);
  else
    *STATE_VARIABLE_CreatedBeforeProgPoint_13 = STATE_VARIABLE_CreatedBeforeProgPoint_0_12;
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_p_0(
  MR_Word ModuleInfo_20,
  MR_Word PredId_21,
  MR_Word RptaInfoTable_22,
  MR_Word ExecPathTable_23,
  MR_Word LRBeforeTable_24,
  MR_Word LRAfterTable_25,
  MR_Word VoidVarRegionTable_26,
  MR_Word BornRTable_27,
  MR_Word DeadRTable_28,
  MR_Word LocalRTable_29,
  MR_Integer ProcId_30,
  MR_Word STATE_VARIABLE_BecomeLiveTable_0_49,
  MR_Word * STATE_VARIABLE_BecomeLiveTable_50,
  MR_Word STATE_VARIABLE_BecomeDeadBeforeTable_0_51,
  MR_Word * STATE_VARIABLE_BecomeDeadBeforeTable_52,
  MR_Word STATE_VARIABLE_BecomeDeadAfterTable_0_53,
  MR_Word * STATE_VARIABLE_BecomeDeadAfterTable_54,
  MR_Word STATE_VARIABLE_RegionInstructionTable_0_55,
  MR_Word * STATE_VARIABLE_RegionInstructionTable_56)
{
  MR_bool succeeded;
  MR_Word PPId_35;
  MR_Word Var_57;

  {
    PPId_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PPId_35, 0) = ((MR_Box) (PredId_21));
    MR_hl_field(0, PPId_35, 1) = ((MR_Box) (ProcId_30));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (PPId_35));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = transform_hlds__smm_common__some_are_special_preds_2_p_0(Var_57, ModuleInfo_20);
  if (succeeded)
  {
    *STATE_VARIABLE_RegionInstructionTable_56 = STATE_VARIABLE_RegionInstructionTable_0_55;
    *STATE_VARIABLE_BecomeDeadAfterTable_54 = STATE_VARIABLE_BecomeDeadAfterTable_0_53;
    *STATE_VARIABLE_BecomeDeadBeforeTable_52 = STATE_VARIABLE_BecomeDeadBeforeTable_0_51;
    *STATE_VARIABLE_BecomeLiveTable_50 = STATE_VARIABLE_BecomeLiveTable_0_49;
  }
  else
  {
    MR_Word ProcInfo_36;
    MR_Word RptaInfo_37;
    MR_Word BornR_38;
    MR_Word DeadR_39;
    MR_Word LocalR_40;
    MR_Word ProcLRBefore_41;
    MR_Word ProcLRAfter_42;
    MR_Word ProcVoidVarRegion_43;
    MR_Word ExecPaths_44;
    MR_Word BecomeLiveProc_45;
    MR_Word BecomeDeadBeforeProc_46;
    MR_Word BecomeDeadAfterProc_47;
    MR_Word RegionInstructionProc_48;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Box conv0_RptaInfo_37;
    MR_Box conv1_BornR_38;
    MR_Box conv2_DeadR_39;
    MR_Box conv3_LocalR_40;
    MR_Box conv4_ProcLRBefore_41;
    MR_Box conv5_ProcLRAfter_42;
    MR_Box conv6_ProcVoidVarRegion_43;
    MR_Box conv7_ExecPaths_44;

    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_20, PPId_35, &ProcInfo_36);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__points_to_info__transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0), RptaInfoTable_22, ((MR_Box) (PPId_35)), &conv0_RptaInfo_37);
    RptaInfo_37 = ((MR_Word) (conv0_RptaInfo_37));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), BornRTable_27, ((MR_Box) (PPId_35)), &conv1_BornR_38);
    BornR_38 = ((MR_Word) (conv1_BornR_38));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), DeadRTable_28, ((MR_Box) (PPId_35)), &conv2_DeadR_39);
    DeadR_39 = ((MR_Word) (conv2_DeadR_39));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), LocalRTable_29, ((MR_Box) (PPId_35)), &conv3_LocalR_40);
    LocalR_40 = ((MR_Word) (conv3_LocalR_40));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]), LRBeforeTable_24, ((MR_Box) (PPId_35)), &conv4_ProcLRBefore_41);
    ProcLRBefore_41 = ((MR_Word) (conv4_ProcLRBefore_41));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]), LRAfterTable_25, ((MR_Box) (PPId_35)), &conv5_ProcLRAfter_42);
    ProcLRAfter_42 = ((MR_Word) (conv5_ProcLRAfter_42));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]), VoidVarRegionTable_26, ((MR_Box) (PPId_35)), &conv6_ProcVoidVarRegion_43);
    ProcVoidVarRegion_43 = ((MR_Word) (conv6_ProcVoidVarRegion_43));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[2]), ExecPathTable_23, ((MR_Box) (PPId_35)), &conv7_ExecPaths_44);
    ExecPaths_44 = ((MR_Word) (conv7_ExecPaths_44));
    Var_59 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]));
    Var_60 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]));
    Var_61 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]));
    Var_62 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0));
    transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_p_0(ExecPaths_44, RptaInfo_37, BornR_38, DeadR_39, LocalR_40, ProcLRBefore_41, ProcLRAfter_42, ProcVoidVarRegion_43, BornRTable_27, DeadRTable_28, ModuleInfo_20, ProcInfo_36, Var_59, &BecomeLiveProc_45, Var_60, &BecomeDeadBeforeProc_46, Var_61, &BecomeDeadAfterProc_47, Var_62, &RegionInstructionProc_48);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]), ((MR_Box) (PPId_35)), ((MR_Box) (RegionInstructionProc_48)), STATE_VARIABLE_RegionInstructionTable_0_55, STATE_VARIABLE_RegionInstructionTable_56);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]), ((MR_Box) (PPId_35)), ((MR_Box) (BecomeLiveProc_45)), STATE_VARIABLE_BecomeLiveTable_0_49, STATE_VARIABLE_BecomeLiveTable_50);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]), ((MR_Box) (PPId_35)), ((MR_Box) (BecomeDeadBeforeProc_46)), STATE_VARIABLE_BecomeDeadBeforeTable_0_51, STATE_VARIABLE_BecomeDeadBeforeTable_52);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]), ((MR_Box) (PPId_35)), ((MR_Box) (BecomeDeadAfterProc_47)), STATE_VARIABLE_BecomeDeadAfterTable_0_53, STATE_VARIABLE_BecomeDeadAfterTable_54);
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_p_0(
  MR_Word HeadVar__1_1,
  MR_Word RptaInfo_2,
  MR_Word BornR_3,
  MR_Word DeadR_4,
  MR_Word LocalR_5,
  MR_Word ProcLRBefore_6,
  MR_Word ProcLRAfter_7,
  MR_Word ProcVoidVarRegion_8,
  MR_Word BornRTable_9,
  MR_Word DeadRTable_10,
  MR_Word ModuleInfo_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_BecomeLiveProc_0_13,
  MR_Word * STATE_VARIABLE_BecomeLiveProc_14,
  MR_Word STATE_VARIABLE_BecomeDeadBeforeProc_0_15,
  MR_Word * STATE_VARIABLE_BecomeDeadBeforeProc_16,
  MR_Word STATE_VARIABLE_BecomeDeadAfterProc_0_17,
  MR_Word * STATE_VARIABLE_BecomeDeadAfterProc_18,
  MR_Word STATE_VARIABLE_RegionInstructionProc_0_19,
  MR_Word * STATE_VARIABLE_RegionInstructionProc_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RegionInstructionProc_20 = STATE_VARIABLE_RegionInstructionProc_0_19;
      *STATE_VARIABLE_BecomeDeadAfterProc_18 = STATE_VARIABLE_BecomeDeadAfterProc_0_17;
      *STATE_VARIABLE_BecomeDeadBeforeProc_16 = STATE_VARIABLE_BecomeDeadBeforeProc_0_15;
      *STATE_VARIABLE_BecomeLiveProc_14 = STATE_VARIABLE_BecomeLiveProc_0_13;
    }
    else
    {
      MR_Word ExecPath_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ExecPaths_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_69;
      MR_Word STATE_VARIABLE_BecomeLiveProc_70_70;
      MR_Word STATE_VARIABLE_BecomeDeadBeforeProc_71_71;
      MR_Word STATE_VARIABLE_BecomeDeadAfterProc_72_72;
      MR_Word STATE_VARIABLE_RegionInstructionProc_73_73;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BecomeLiveProc_0_13;
      MR_Word next_value_of_STATE_VARIABLE_BecomeDeadBeforeProc_0_15;
      MR_Word next_value_of_STATE_VARIABLE_BecomeDeadAfterProc_0_17;
      MR_Word next_value_of_STATE_VARIABLE_RegionInstructionProc_0_19;

      Var_69 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
      transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0(ExecPath_44, RptaInfo_2, BornR_3, DeadR_4, LocalR_5, ProcLRBefore_6, ProcLRAfter_7, ProcVoidVarRegion_8, BornRTable_9, DeadRTable_10, ModuleInfo_11, ProcInfo_12, Var_69, STATE_VARIABLE_BecomeLiveProc_0_13, &STATE_VARIABLE_BecomeLiveProc_70_70, STATE_VARIABLE_BecomeDeadBeforeProc_0_15, &STATE_VARIABLE_BecomeDeadBeforeProc_71_71, STATE_VARIABLE_BecomeDeadAfterProc_0_17, &STATE_VARIABLE_BecomeDeadAfterProc_72_72, STATE_VARIABLE_RegionInstructionProc_0_19, &STATE_VARIABLE_RegionInstructionProc_73_73);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ExecPaths_45;
      next_value_of_STATE_VARIABLE_BecomeLiveProc_0_13 = STATE_VARIABLE_BecomeLiveProc_70_70;
      next_value_of_STATE_VARIABLE_BecomeDeadBeforeProc_0_15 = STATE_VARIABLE_BecomeDeadBeforeProc_71_71;
      next_value_of_STATE_VARIABLE_BecomeDeadAfterProc_0_17 = STATE_VARIABLE_BecomeDeadAfterProc_72_72;
      next_value_of_STATE_VARIABLE_RegionInstructionProc_0_19 = STATE_VARIABLE_RegionInstructionProc_73_73;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BecomeLiveProc_0_13 = next_value_of_STATE_VARIABLE_BecomeLiveProc_0_13;
      STATE_VARIABLE_BecomeDeadBeforeProc_0_15 = next_value_of_STATE_VARIABLE_BecomeDeadBeforeProc_0_15;
      STATE_VARIABLE_BecomeDeadAfterProc_0_17 = next_value_of_STATE_VARIABLE_BecomeDeadAfterProc_0_17;
      STATE_VARIABLE_RegionInstructionProc_0_19 = next_value_of_STATE_VARIABLE_RegionInstructionProc_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_RegionInstructionProc_17;

  transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_RegionInstructionProc_17);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_RegionInstructionProc_17));
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_RegionInstructionProc_18;

  transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_RegionInstructionProc_18);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_RegionInstructionProc_18));
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_RegionInstructionProc_18;

  transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_RegionInstructionProc_18);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_RegionInstructionProc_18));
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0(
  MR_Word HeadVar__1_1,
  MR_Word RptaInfo_2,
  MR_Word BornR_3,
  MR_Word DeadR_4,
  MR_Word LocalR_5,
  MR_Word ProcLRBefore_6,
  MR_Word ProcLRAfter_7,
  MR_Word ProcVoidVarRegion_8,
  MR_Word BornRTable_9,
  MR_Word DeadRTable_10,
  MR_Word ModuleInfo_11,
  MR_Word ProcInfo_12,
  MR_Word BecomeDeadBeforeProgPoint_13,
  MR_Word STATE_VARIABLE_BecomeLiveProc_0_14,
  MR_Word * STATE_VARIABLE_BecomeLiveProc_15,
  MR_Word STATE_VARIABLE_BecomeDeadBeforeProc_0_16,
  MR_Word * STATE_VARIABLE_BecomeDeadBeforeProc_17,
  MR_Word STATE_VARIABLE_BecomeDeadAfterProc_0_18,
  MR_Word * STATE_VARIABLE_BecomeDeadAfterProc_19,
  MR_Word STATE_VARIABLE_RegionInstructionProc_0_20,
  MR_Word * STATE_VARIABLE_RegionInstructionProc_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RegionInstructionProc_21 = STATE_VARIABLE_RegionInstructionProc_0_20;
      *STATE_VARIABLE_BecomeDeadAfterProc_19 = STATE_VARIABLE_BecomeDeadAfterProc_0_18;
      *STATE_VARIABLE_BecomeDeadBeforeProc_17 = STATE_VARIABLE_BecomeDeadBeforeProc_0_16;
      *STATE_VARIABLE_BecomeLiveProc_15 = STATE_VARIABLE_BecomeLiveProc_0_14;
    }
    else
    {
      MR_Word ProgPoint_46;
      MR_Word Goal_47;
      MR_Word ProgPoint_Goals_48 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word LRBefore_65;
      MR_Word LRAfter_66;
      MR_Word VoidVarRegions_67;
      MR_Word Allowed_68;
      MR_Word DeadVoidVarRegions0_69;
      MR_Word DeadVoidVarRegions_70;
      MR_Word CallerGraph_71;
      MR_Word BecomeDead_73;
      MR_Word BecomeLive_74;
      MR_Word Expr_75;
      MR_Word CreatedBeforeProgPoint_77;
      MR_Word RemovedAfterProgPoint_78;
      MR_Word Var_92 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word STATE_VARIABLE_BecomeLiveProc_96_96;
      MR_Word Var_97;
      MR_Word STATE_VARIABLE_RegionInstructionProc_98_98;
      MR_Word Var_100;
      MR_Word STATE_VARIABLE_RegionInstructionProc_101_101;
      MR_Word Var_103;
      MR_Word STATE_VARIABLE_RegionInstructionProc_104_104;
      MR_Word STATE_VARIABLE_RegionInstructionProc_107_107;
      MR_Word Var_109;
      MR_Word STATE_VARIABLE_BecomeDeadAfterProc_110_110;
      MR_Word STATE_VARIABLE_BecomeLiveProc_111_111;
      MR_Word STATE_VARIABLE_BecomeDeadBeforeProc_112_112;
      MR_Box conv0_LRBefore_65;
      MR_Box conv1_LRAfter_66;
      MR_Box conv2_VoidVarRegions_67;
      MR_Box conv4_STATE_VARIABLE_RegionInstructionProc_98_98;
      MR_Box conv6_STATE_VARIABLE_RegionInstructionProc_101_101;
      MR_Box conv8_STATE_VARIABLE_RegionInstructionProc_104_104;
      MR_Box conv9_STATE_VARIABLE_RegionInstructionProc_107_107;

      ProgPoint_46 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 0))));
      Goal_47 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), ProcLRBefore_6, ((MR_Box) (ProgPoint_46)), &conv0_LRBefore_65);
      LRBefore_65 = ((MR_Word) (conv0_LRBefore_65));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), ProcLRAfter_7, ((MR_Box) (ProgPoint_46)), &conv1_LRAfter_66);
      LRAfter_66 = ((MR_Word) (conv1_LRAfter_66));
      mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), ProcVoidVarRegion_8, ((MR_Box) (ProgPoint_46)), &conv2_VoidVarRegions_67);
      VoidVarRegions_67 = ((MR_Word) (conv2_VoidVarRegions_67));
      Var_93 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LocalR_5, BornR_3);
      mercury__set__union_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Var_93, DeadR_4, &Allowed_68);
      mercury__set__difference_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), VoidVarRegions_67, LRAfter_66, &DeadVoidVarRegions0_69);
      mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Allowed_68, DeadVoidVarRegions0_69, &DeadVoidVarRegions_70);
      CallerGraph_71 = ((MR_Word) ((MR_hl_field(0, RptaInfo_2, (MR_Integer) 0))));
      Var_94 = mercury__set__difference_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRBefore_65, LRAfter_66);
      mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Allowed_68, Var_94, &BecomeDead_73);
      Var_95 = mercury__set__difference_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRAfter_66, LRBefore_65);
      mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Allowed_68, Var_95, &BecomeLive_74);
      Expr_75 = ((MR_Word) ((MR_hl_field(0, Goal_47, (MR_Integer) 0))));
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), ((MR_Box) (ProgPoint_46)), ((MR_Box) (BecomeLive_74)), STATE_VARIABLE_BecomeLiveProc_0_14, &STATE_VARIABLE_BecomeLiveProc_96_96);
      transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0(Expr_75, ProgPoint_46, BecomeLive_74, BecomeDead_73, RptaInfo_2, BornRTable_9, DeadRTable_10, ModuleInfo_11, ProcInfo_12, &CreatedBeforeProgPoint_77, &RemovedAfterProgPoint_78);
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_97, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[1]));
        MR_hl_field(0, Var_97, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_1));
        MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_97, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_97, 4) = ((MR_Box) (ProgPoint_46));
        MR_hl_field(0, Var_97, 5) = ((MR_Box) (CallerGraph_71));
      }
      mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]), Var_97, CreatedBeforeProgPoint_77, ((MR_Box) (STATE_VARIABLE_RegionInstructionProc_0_20)), &conv4_STATE_VARIABLE_RegionInstructionProc_98_98);
      STATE_VARIABLE_RegionInstructionProc_98_98 = ((MR_Word) (conv4_STATE_VARIABLE_RegionInstructionProc_98_98));
      {
        Var_100 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_100, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[1]));
        MR_hl_field(0, Var_100, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_2));
        MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_100, 3) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_100, 4) = ((MR_Box) (ProgPoint_46));
        MR_hl_field(0, Var_100, 5) = ((MR_Box) (CallerGraph_71));
      }
      mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]), Var_100, BecomeDeadBeforeProgPoint_13, ((MR_Box) (STATE_VARIABLE_RegionInstructionProc_98_98)), &conv6_STATE_VARIABLE_RegionInstructionProc_101_101);
      STATE_VARIABLE_RegionInstructionProc_101_101 = ((MR_Word) (conv6_STATE_VARIABLE_RegionInstructionProc_101_101));
      {
        Var_103 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_103, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[1]));
        MR_hl_field(0, Var_103, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_p_0_3));
        MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_103, 3) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_103, 4) = ((MR_Box) (ProgPoint_46));
        MR_hl_field(0, Var_103, 5) = ((MR_Box) (CallerGraph_71));
      }
      mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]), Var_103, RemovedAfterProgPoint_78, ((MR_Box) (STATE_VARIABLE_RegionInstructionProc_101_101)), &conv8_STATE_VARIABLE_RegionInstructionProc_104_104);
      STATE_VARIABLE_RegionInstructionProc_104_104 = ((MR_Word) (conv8_STATE_VARIABLE_RegionInstructionProc_104_104));
      mercury__set__fold_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]), Var_103, DeadVoidVarRegions_70, ((MR_Box) (STATE_VARIABLE_RegionInstructionProc_104_104)), &conv9_STATE_VARIABLE_RegionInstructionProc_107_107);
      STATE_VARIABLE_RegionInstructionProc_107_107 = ((MR_Word) (conv9_STATE_VARIABLE_RegionInstructionProc_107_107));
      Var_109 = mercury__set__union_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), BecomeDead_73, DeadVoidVarRegions_70);
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), ((MR_Box) (ProgPoint_46)), ((MR_Box) (Var_109)), STATE_VARIABLE_BecomeDeadAfterProc_0_18, &STATE_VARIABLE_BecomeDeadAfterProc_110_110);
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), ((MR_Box) (ProgPoint_46)), ((MR_Box) (BecomeLive_74)), STATE_VARIABLE_BecomeLiveProc_96_96, &STATE_VARIABLE_BecomeLiveProc_111_111);
      mercury__map__set_4_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), ((MR_Box) (ProgPoint_46)), ((MR_Box) (BecomeDeadBeforeProgPoint_13)), STATE_VARIABLE_BecomeDeadBeforeProc_0_16, &STATE_VARIABLE_BecomeDeadBeforeProc_112_112);
      if ((ProgPoint_Goals_48 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_BecomeLiveProc_15 = STATE_VARIABLE_BecomeLiveProc_111_111;
        *STATE_VARIABLE_BecomeDeadBeforeProc_17 = STATE_VARIABLE_BecomeDeadBeforeProc_112_112;
        *STATE_VARIABLE_BecomeDeadAfterProc_19 = STATE_VARIABLE_BecomeDeadAfterProc_110_110;
        *STATE_VARIABLE_RegionInstructionProc_21 = STATE_VARIABLE_RegionInstructionProc_107_107;
      }
      else
      {
        MR_Word NextProgPoint_79;
        MR_Word LRBeforeNext_82;
        MR_Word BecomeDeadBeforeNextProgPoint_83;
        MR_Word Var_113 = ((MR_Word) ((MR_hl_field(1, ProgPoint_Goals_48, (MR_Integer) 0))));
        MR_Word Var_114;
        MR_Box conv10_LRBeforeNext_82;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_BecomeDeadBeforeProgPoint_13;
        MR_Word next_value_of_STATE_VARIABLE_BecomeLiveProc_0_14;
        MR_Word next_value_of_STATE_VARIABLE_BecomeDeadBeforeProc_0_16;
        MR_Word next_value_of_STATE_VARIABLE_BecomeDeadAfterProc_0_18;
        MR_Word next_value_of_STATE_VARIABLE_RegionInstructionProc_0_20;

        NextProgPoint_79 = ((MR_Word) ((MR_hl_field(0, Var_113, (MR_Integer) 0))));
        mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), ProcLRBefore_6, ((MR_Box) (NextProgPoint_79)), &conv10_LRBeforeNext_82);
        LRBeforeNext_82 = ((MR_Word) (conv10_LRBeforeNext_82));
        Var_114 = mercury__set__difference_2_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), LRAfter_66, LRBeforeNext_82);
        mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Allowed_68, Var_114, &BecomeDeadBeforeNextProgPoint_83);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = ProgPoint_Goals_48;
        next_value_of_BecomeDeadBeforeProgPoint_13 = BecomeDeadBeforeNextProgPoint_83;
        next_value_of_STATE_VARIABLE_BecomeLiveProc_0_14 = STATE_VARIABLE_BecomeLiveProc_111_111;
        next_value_of_STATE_VARIABLE_BecomeDeadBeforeProc_0_16 = STATE_VARIABLE_BecomeDeadBeforeProc_112_112;
        next_value_of_STATE_VARIABLE_BecomeDeadAfterProc_0_18 = STATE_VARIABLE_BecomeDeadAfterProc_110_110;
        next_value_of_STATE_VARIABLE_RegionInstructionProc_0_20 = STATE_VARIABLE_RegionInstructionProc_107_107;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        BecomeDeadBeforeProgPoint_13 = next_value_of_BecomeDeadBeforeProgPoint_13;
        STATE_VARIABLE_BecomeLiveProc_0_14 = next_value_of_STATE_VARIABLE_BecomeLiveProc_0_14;
        STATE_VARIABLE_BecomeDeadBeforeProc_0_16 = next_value_of_STATE_VARIABLE_BecomeDeadBeforeProc_0_16;
        STATE_VARIABLE_BecomeDeadAfterProc_0_18 = next_value_of_STATE_VARIABLE_BecomeDeadAfterProc_0_18;
        STATE_VARIABLE_RegionInstructionProc_0_20 = next_value_of_STATE_VARIABLE_RegionInstructionProc_0_20;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_RemovedAfterProgPoint_13;

  transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_RemovedAfterProgPoint_13);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_RemovedAfterProgPoint_13));
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_CreatedBeforeProgPoint_13;

  transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_CreatedBeforeProgPoint_13);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_CreatedBeforeProgPoint_13));
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0(
  MR_Word Expr_12,
  MR_Word ProgPoint_13,
  MR_Word BecomeLive_14,
  MR_Word BecomeDead_15,
  MR_Word RptaInfo_16,
  MR_Word BornRTable_17,
  MR_Word DeadRTable_18,
  MR_Word ModuleInfo_19,
  MR_Word ProcInfo_20,
  MR_Word * CreatedBeforeProgPoint_21,
  MR_Word * RemovedAfterProgPoint_22)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Expr_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "non-atomic goal");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word X_36 = ((MR_Word) ((MR_hl_field(1, Expr_12, (MR_Integer) 0))));
        MR_Word Kind_39 = ((MR_Word) ((MR_hl_field(1, Expr_12, (MR_Integer) 3))));
        MR_Word Graph_41 = ((MR_Word) ((MR_hl_field(0, RptaInfo_16, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) Kind_39)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Reach_X_50;
              MR_Word Var_97;

              Var_97 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
              transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_p_0(Graph_41, ModuleInfo_19, ProcInfo_20, X_36, Var_97, &Reach_X_50);
              mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), Reach_X_50, BecomeLive_14, CreatedBeforeProgPoint_21);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
            break;
          case (MR_Integer) 3:
            *CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
            break;
        }
        *RemovedAfterProgPoint_22 = BecomeDead_15;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CalleePredId_23 = ((MR_Word) ((MR_hl_field(2, Expr_12, (MR_Integer) 0))));
        MR_Integer CalleeProcId_24 = ((MR_Integer) ((MR_hl_field(2, Expr_12, (MR_Integer) 1))));
        MR_Word CalleePPId_29;
        MR_Word AlphaMapping_31;
        MR_Box conv0_Var_32;

        {
          CalleePPId_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CalleePPId_29, 0) = ((MR_Box) (CalleePredId_23));
          MR_hl_field(0, CalleePPId_29, 1) = ((MR_Box) (CalleeProcId_24));
        }
        AlphaMapping_31 = ((MR_Word) ((MR_hl_field(0, RptaInfo_16, (MR_Integer) 1))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), BornRTable_17, ((MR_Box) (CalleePPId_29)), &conv0_Var_32);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
        {
          MR_Word AlphaAtProgPoint_33;
          MR_Word CalleeBornR_34;
          MR_Word CalleeDeadR_35;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Box conv1_AlphaAtProgPoint_33;
          MR_Box conv2_CalleeBornR_34;
          MR_Box conv4_CreatedBeforeProgPoint_21;
          MR_Box conv5_CalleeDeadR_35;
          MR_Box conv7_RemovedAfterProgPoint_22;

          mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[5]), AlphaMapping_31, ((MR_Box) (ProgPoint_13)), &conv1_AlphaAtProgPoint_33);
          AlphaAtProgPoint_33 = ((MR_Word) (conv1_AlphaAtProgPoint_33));
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), BornRTable_17, ((MR_Box) (CalleePPId_29)), &conv2_CalleeBornR_34);
          CalleeBornR_34 = ((MR_Word) (conv2_CalleeBornR_34));
          {
            Var_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_93, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[0]));
            MR_hl_field(0, Var_93, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_1));
            MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_93, 3) = ((MR_Box) (BecomeLive_14));
            MR_hl_field(0, Var_93, 4) = ((MR_Box) (CalleeBornR_34));
          }
          Var_94 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
          mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), Var_93, AlphaAtProgPoint_33, ((MR_Box) (Var_94)), &conv4_CreatedBeforeProgPoint_21);
          *CreatedBeforeProgPoint_21 = ((MR_Word) (conv4_CreatedBeforeProgPoint_21));
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), DeadRTable_18, ((MR_Box) (CalleePPId_29)), &conv5_CalleeDeadR_35);
          CalleeDeadR_35 = ((MR_Word) (conv5_CalleeDeadR_35));
          {
            Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_95, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_5[0]));
            MR_hl_field(0, Var_95, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__annotate_expr_11_p_0_2));
            MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_95, 3) = ((MR_Box) (BecomeDead_15));
            MR_hl_field(0, Var_95, 4) = ((MR_Box) (CalleeDeadR_35));
          }
          Var_96 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
          mercury__map__foldl_4_p_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_1[0]), Var_95, AlphaAtProgPoint_33, ((MR_Box) (Var_96)), &conv7_RemovedAfterProgPoint_22);
          *RemovedAfterProgPoint_22 = ((MR_Word) (conv7_RemovedAfterProgPoint_22));
        }
        else
        {
          *CreatedBeforeProgPoint_21 = BecomeLive_14;
          *RemovedAfterProgPoint_22 = BecomeDead_15;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Expr_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "generic_call NYI");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "call_foreign_proc NYI");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_141 = ((MR_Word) ((MR_hl_field(3, Expr_12, (MR_Integer) 2))));

            if ((Var_141 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
              *RemovedAfterProgPoint_22 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "non-atomic goal");
                return;
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_143 = ((MR_Word) ((MR_hl_field(3, Expr_12, (MR_Integer) 1))));

            if ((Var_143 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
              *RemovedAfterProgPoint_22 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "non-atomic goal");
                return;
              }
          }
          break;
        case (MR_Integer) 4:
          {
            *CreatedBeforeProgPoint_21 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__rbmm__points_to_graph__transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0));
            *RemovedAfterProgPoint_22 = BecomeDead_15;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "non-atomic goal");
            return;
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "non-atomic goal");
            return;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_BecomeLiveTable_50;
  MR_Word conv2_STATE_VARIABLE_BecomeDeadBeforeTable_52;
  MR_Word conv1_STATE_VARIABLE_BecomeDeadAfterTable_54;
  MR_Word conv0_STATE_VARIABLE_RegionInstructionTable_56;

  transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 11)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 12)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_BecomeLiveTable_50, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_BecomeDeadBeforeTable_52, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_BecomeDeadAfterTable_54, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_RegionInstructionTable_56);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_BecomeLiveTable_50));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_BecomeDeadBeforeTable_52));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_BecomeDeadAfterTable_54));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_RegionInstructionTable_56));
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0(
  MR_Word ModuleInfo_19,
  MR_Word RptaInfoTable_20,
  MR_Word ExecPathTable_21,
  MR_Word LRBeforeTable_22,
  MR_Word LRAfterTable_23,
  MR_Word VoidVarRegionTable_24,
  MR_Word BornRTable_25,
  MR_Word DeadRTable_26,
  MR_Word LocalRTable_27,
  MR_Word PredId_28,
  MR_Word STATE_VARIABLE_BecomeLiveTable_0_35,
  MR_Word * STATE_VARIABLE_BecomeLiveTable_36,
  MR_Word STATE_VARIABLE_BecomeDeadBeforeTable_0_37,
  MR_Word * STATE_VARIABLE_BecomeDeadBeforeTable_38,
  MR_Word STATE_VARIABLE_BecomeDeadAfterTable_0_39,
  MR_Word * STATE_VARIABLE_BecomeDeadAfterTable_40,
  MR_Word STATE_VARIABLE_RegionInstructionTable_0_41,
  MR_Word * STATE_VARIABLE_RegionInstructionTable_42)
{
  MR_Word PredInfo_33;
  MR_Word ProcIds_34;
  MR_Word Var_43;
  MR_Box conv7_STATE_VARIABLE_BecomeLiveTable_36;
  MR_Box conv6_STATE_VARIABLE_BecomeDeadBeforeTable_38;
  MR_Box conv5_STATE_VARIABLE_BecomeDeadAfterTable_40;
  MR_Box conv4_STATE_VARIABLE_RegionInstructionTable_42;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_19, PredId_28, &PredInfo_33);
  ProcIds_34 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_33);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_4[0]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0_1));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 10));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (ModuleInfo_19));
    MR_hl_field(0, Var_43, 4) = ((MR_Box) (PredId_28));
    MR_hl_field(0, Var_43, 5) = ((MR_Box) (RptaInfoTable_20));
    MR_hl_field(0, Var_43, 6) = ((MR_Box) (ExecPathTable_21));
    MR_hl_field(0, Var_43, 7) = ((MR_Box) (LRBeforeTable_22));
    MR_hl_field(0, Var_43, 8) = ((MR_Box) (LRAfterTable_23));
    MR_hl_field(0, Var_43, 9) = ((MR_Box) (VoidVarRegionTable_24));
    MR_hl_field(0, Var_43, 10) = ((MR_Box) (BornRTable_25));
    MR_hl_field(0, Var_43, 11) = ((MR_Box) (DeadRTable_26));
    MR_hl_field(0, Var_43, 12) = ((MR_Box) (LocalRTable_27));
  }
  mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[3]), Var_43, ProcIds_34, ((MR_Box) (STATE_VARIABLE_BecomeLiveTable_0_35)), &conv7_STATE_VARIABLE_BecomeLiveTable_36, ((MR_Box) (STATE_VARIABLE_BecomeDeadBeforeTable_0_37)), &conv6_STATE_VARIABLE_BecomeDeadBeforeTable_38, ((MR_Box) (STATE_VARIABLE_BecomeDeadAfterTable_0_39)), &conv5_STATE_VARIABLE_BecomeDeadAfterTable_40, ((MR_Box) (STATE_VARIABLE_RegionInstructionTable_0_41)), &conv4_STATE_VARIABLE_RegionInstructionTable_42);
  *STATE_VARIABLE_BecomeLiveTable_36 = ((MR_Word) (conv7_STATE_VARIABLE_BecomeLiveTable_36));
  *STATE_VARIABLE_BecomeDeadBeforeTable_38 = ((MR_Word) (conv6_STATE_VARIABLE_BecomeDeadBeforeTable_38));
  *STATE_VARIABLE_BecomeDeadAfterTable_40 = ((MR_Word) (conv5_STATE_VARIABLE_BecomeDeadAfterTable_40));
  *STATE_VARIABLE_RegionInstructionTable_42 = ((MR_Word) (conv4_STATE_VARIABLE_RegionInstructionTable_42));
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_BecomeLiveTable_36;
  MR_Word conv2_STATE_VARIABLE_BecomeDeadBeforeTable_38;
  MR_Word conv1_STATE_VARIABLE_BecomeDeadAfterTable_40;
  MR_Word conv0_STATE_VARIABLE_RegionInstructionTable_42;

  transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 10)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 11)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_BecomeLiveTable_36, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_BecomeDeadBeforeTable_38, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_BecomeDeadAfterTable_40, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_RegionInstructionTable_42);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_BecomeLiveTable_36));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_BecomeDeadBeforeTable_38));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_BecomeDeadAfterTable_40));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_RegionInstructionTable_42));
}

void MR_CALL 
transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word RptaInfoTable_15,
  MR_Word ExecPathTable_16,
  MR_Word LRBeforeTable_17,
  MR_Word LRAfterTable_18,
  MR_Word VoidVarRegionTable_19,
  MR_Word BornRTable_20,
  MR_Word DeadRTable_21,
  MR_Word LocalRTable_22,
  MR_Word * BecomeLiveTable_23,
  MR_Word * BecomeDeadBeforeTable_24,
  MR_Word * BecomeDeadAfterTable_25,
  MR_Word * RegionInstructionTable_26)
{
  MR_Word PredIds_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Box conv7_BecomeLiveTable_23;
  MR_Box conv6_BecomeDeadBeforeTable_24;
  MR_Box conv5_BecomeDeadAfterTable_25;
  MR_Box conv4_RegionInstructionTable_26;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_14, &PredIds_27);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__rbmm__region_instruction_scalar_common_3[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 9));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (ModuleInfo_14));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (RptaInfoTable_15));
    MR_hl_field(0, Var_28, 5) = ((MR_Box) (ExecPathTable_16));
    MR_hl_field(0, Var_28, 6) = ((MR_Box) (LRBeforeTable_17));
    MR_hl_field(0, Var_28, 7) = ((MR_Box) (LRAfterTable_18));
    MR_hl_field(0, Var_28, 8) = ((MR_Box) (VoidVarRegionTable_19));
    MR_hl_field(0, Var_28, 9) = ((MR_Box) (BornRTable_20));
    MR_hl_field(0, Var_28, 10) = ((MR_Box) (DeadRTable_21));
    MR_hl_field(0, Var_28, 11) = ((MR_Box) (LocalRTable_22));
  }
  Var_29 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]));
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]));
  Var_31 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[0]));
  Var_32 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[1]));
  mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[2]), (MR_Word) (&transform_hlds__rbmm__region_instruction_scalar_common_2[3]), Var_28, PredIds_27, ((MR_Box) (Var_29)), &conv7_BecomeLiveTable_23, ((MR_Box) (Var_30)), &conv6_BecomeDeadBeforeTable_24, ((MR_Box) (Var_31)), &conv5_BecomeDeadAfterTable_25, ((MR_Box) (Var_32)), &conv4_RegionInstructionTable_26);
  *BecomeLiveTable_23 = ((MR_Word) (conv7_BecomeLiveTable_23));
  *BecomeDeadBeforeTable_24 = ((MR_Word) (conv6_BecomeDeadBeforeTable_24));
  *BecomeDeadAfterTable_25 = ((MR_Word) (conv5_BecomeDeadAfterTable_25));
  *RegionInstructionTable_26 = ((MR_Word) (conv4_RegionInstructionTable_26));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_instruction____Unify____instrs_before_after_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_instruction____Compare____instrs_before_after_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_instruction____Compare____region_instr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_instruction____Compare____region_instr_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_instruction____Compare____region_instr_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__rbmm__region_instruction____Unify____region_instr_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__rbmm__region_instruction____Compare____region_instr_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__rbmm__region_instruction__init(void)
{
}

void mercury__transform_hlds__rbmm__region_instruction__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0);
	MR_register_type_ctor_info(&transform_hlds__rbmm__region_instruction__transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0);
}

void mercury__transform_hlds__rbmm__region_instruction__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__region_instruction__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.region_instruction.
