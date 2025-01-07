/*
** Automatically generated from `rbmm.region_analysis.m'
** by the Mercury compiler,
** version rotd-2025-01-07
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


// :- module transform_hlds.rbmm.region_analysis.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__region_analysis__init
ENDINIT
*/

#include "transform_hlds.rbmm.region_analysis.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.rbmm.add_rbmm_goal_infos.mih"
#include "transform_hlds.rbmm.condition_renaming.mih"
#include "transform_hlds.rbmm.execution_path.mih"
#include "transform_hlds.rbmm.interproc_region_lifetime.mih"
#include "transform_hlds.rbmm.live_region_analysis.mih"
#include "transform_hlds.rbmm.live_variable_analysis.mih"
#include "transform_hlds.rbmm.points_to_analysis.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"





static /* final */ const MR_Box transform_hlds__rbmm__region_analysis_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__rbmm__region_analysis_scalar_common_2[1][3];




static /* final */ const MR_Box transform_hlds__rbmm__region_analysis_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm__region_analysis_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm__region_analysis_scalar_common_1[0]))
  },
};



#include "array.mh"


void MR_CALL 
transform_hlds__rbmm__region_analysis__do_region_analysis_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47)
{
  MR_Word RptaInfoTable_4;
  MR_Word ExecPathTable_5;
  MR_Word LVBeforeTable_6;
  MR_Word LVAfterTable_7;
  MR_Word VoidVarTable_8;
  MR_Word LRBeforeTable0_9;
  MR_Word LRAfterTable0_10;
  MR_Word VoidVarRegionTable0_11;
  MR_Word InputRTable_12;
  MR_Word OutputRTable_13;
  MR_Word BornRTable0_14;
  MR_Word DeadRTable0_15;
  MR_Word LocalRTable0_16;
  MR_Word ConstantRTable0_17;
  MR_Word BornRTable1_18;
  MR_Word DeadRTable1_19;
  MR_Word BornRTable_20;
  MR_Word DeadRTable_21;
  MR_Word ConstantRTable_22;
  MR_Word LocalRTable_23;
  MR_Word LRBeforeTable_24;
  MR_Word LRAfterTable_25;
  MR_Word VoidVarRegionTable_26;
  MR_Word BecomeLiveTable_27;
  MR_Word BecomeDeadBeforeTable_28;
  MR_Word BecomeDeadAfterTable_29;
  MR_Word RegionInstructionTable_30;
  MR_Word FormalRegionArgTable_31;
  MR_Word ActualRegionArgTable_32;
  MR_Word ResurrectionPathTable0_33;
  MR_Word JoinPointTable_34;
  MR_Word ResurrectionPathTable_35;
  MR_Word ResurrectionRenameTable_36;
  MR_Word ResurRenamingAnnoTable_37;
  MR_Word ResurRenamingTable_38;
  MR_Word LocalRegionsTable_39;
  MR_Word InCondRegionsTable_40;
  MR_Word RenamedRegionsTable_41;
  MR_Word IteRenamingTable0_42;
  MR_Word IteRenamingTable_43;
  MR_Word IteRenamingAnnoTable_44;
  MR_Word NameToVarTable_45;
  MR_Word STATE_VARIABLE_ModuleInfo_48_48;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_ModuleInfo_50_50;

  transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0(&RptaInfoTable_4, STATE_VARIABLE_ModuleInfo_0_46, &STATE_VARIABLE_ModuleInfo_48_48);
  transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0(STATE_VARIABLE_ModuleInfo_48_48, &ExecPathTable_5);
  transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0(STATE_VARIABLE_ModuleInfo_48_48, ExecPathTable_5, &LVBeforeTable_6, &LVAfterTable_7, &VoidVarTable_8);
  transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0(STATE_VARIABLE_ModuleInfo_48_48, RptaInfoTable_4, LVBeforeTable_6, LVAfterTable_7, VoidVarTable_8, &LRBeforeTable0_9, &LRAfterTable0_10, &VoidVarRegionTable0_11, &InputRTable_12, &OutputRTable_13, &BornRTable0_14, &DeadRTable0_15, &LocalRTable0_16);
  transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0(STATE_VARIABLE_ModuleInfo_48_48, RptaInfoTable_4, ExecPathTable_5, LRBeforeTable0_9, LRAfterTable0_10, InputRTable_12, OutputRTable_13, &ConstantRTable0_17, BornRTable0_14, &BornRTable1_18, DeadRTable0_15, &DeadRTable1_19);
  transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0(STATE_VARIABLE_ModuleInfo_48_48, RptaInfoTable_4, BornRTable1_18, &BornRTable_20, DeadRTable1_19, &DeadRTable_21, ConstantRTable0_17, &ConstantRTable_22, LocalRTable0_16, &LocalRTable_23, LRBeforeTable0_9, &LRBeforeTable_24, LRAfterTable0_10, &LRAfterTable_25, VoidVarRegionTable0_11, &VoidVarRegionTable_26);
  transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0(STATE_VARIABLE_ModuleInfo_48_48, RptaInfoTable_4, ExecPathTable_5, LRBeforeTable_24, LRAfterTable_25, VoidVarRegionTable_26, BornRTable_20, DeadRTable_21, LocalRTable_23, &BecomeLiveTable_27, &BecomeDeadBeforeTable_28, &BecomeDeadAfterTable_29, &RegionInstructionTable_30);
  transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0(STATE_VARIABLE_ModuleInfo_48_48, RptaInfoTable_4, ConstantRTable_22, DeadRTable_21, BornRTable_20, &FormalRegionArgTable_31, &ActualRegionArgTable_32);
  transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_10_p_0(ExecPathTable_5, LRBeforeTable_24, LRAfterTable_25, BornRTable_20, DeadRTable_21, LocalRTable_23, BecomeLiveTable_27, BecomeDeadBeforeTable_28, BecomeDeadAfterTable_29, &ResurrectionPathTable0_33);
  transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_p_0(ResurrectionPathTable0_33, ExecPathTable_5, &JoinPointTable_34);
  transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_4_p_0(ExecPathTable_5, JoinPointTable_34, ResurrectionPathTable0_33, &ResurrectionPathTable_35);
  transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_p_0(BecomeLiveTable_27, LocalRTable_23, RptaInfoTable_4, ResurrectionPathTable_35, &ResurrectionRenameTable_36);
  transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_10_p_0(ResurrectionRenameTable_36, JoinPointTable_34, LRBeforeTable_24, LRAfterTable_25, BornRTable_20, RptaInfoTable_4, ResurrectionPathTable_35, ExecPathTable_5, &ResurRenamingAnnoTable_37, &ResurRenamingTable_38);
  transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0(STATE_VARIABLE_ModuleInfo_48_48, RptaInfoTable_4, LRBeforeTable_24, LRAfterTable_25, ResurRenamingTable_38, ResurRenamingAnnoTable_37, &LocalRegionsTable_39, &InCondRegionsTable_40);
  transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0(LocalRegionsTable_39, InCondRegionsTable_40, &RenamedRegionsTable_41);
  transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_48_48, RptaInfoTable_4, RenamedRegionsTable_41, &IteRenamingTable0_42);
  transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0(RenamedRegionsTable_41, ExecPathTable_5, RptaInfoTable_4, IteRenamingTable0_42, &IteRenamingTable_43, &IteRenamingAnnoTable_44);
  Var_49 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm__region_analysis_scalar_common_2[0]));
  transform_hlds__rbmm__region_transformation__region_transform_12_p_0(RptaInfoTable_4, FormalRegionArgTable_31, ActualRegionArgTable_32, ResurRenamingTable_38, IteRenamingTable_43, RegionInstructionTable_30, ResurRenamingAnnoTable_37, IteRenamingAnnoTable_44, Var_49, &NameToVarTable_45, STATE_VARIABLE_ModuleInfo_48_48, &STATE_VARIABLE_ModuleInfo_50_50);
  transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0(RptaInfoTable_4, ActualRegionArgTable_32, ResurRenamingTable_38, IteRenamingTable_43, NameToVarTable_45, STATE_VARIABLE_ModuleInfo_50_50, STATE_VARIABLE_ModuleInfo_47);
}

void mercury__transform_hlds__rbmm__region_analysis__init(void)
{
}

void mercury__transform_hlds__rbmm__region_analysis__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__region_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__region_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.region_analysis.
