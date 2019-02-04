/*
** Automatically generated from `rbmm.m'
** by the Mercury compiler,
** version rotd-2019-01-29
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


// :- module transform_hlds.rbmm.
// :- implementation.

/*
INIT mercury__transform_hlds__rbmm__init
ENDINIT
*/

#include "transform_hlds.rbmm.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "hlds.pred_table.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
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





static /* final */ const MR_Box transform_hlds__rbmm_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__rbmm_scalar_common_2[1][3];




static /* final */ const MR_Box transform_hlds__rbmm_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__rbmm_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__rbmm_scalar_common_1[0]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
transform_hlds__rbmm__do_region_analysis_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50)
{
  {
    MR_Word RptaInfoTable_7;
    MR_Word ExecPathTable_8;
    MR_Word LVBeforeTable_9;
    MR_Word LVAfterTable_10;
    MR_Word VoidVarTable_11;
    MR_Word LRBeforeTable0_12;
    MR_Word LRAfterTable0_13;
    MR_Word VoidVarRegionTable0_14;
    MR_Word InputRTable_15;
    MR_Word OutputRTable_16;
    MR_Word BornRTable0_17;
    MR_Word DeadRTable0_18;
    MR_Word LocalRTable0_19;
    MR_Word ConstantRTable0_20;
    MR_Word BornRTable1_21;
    MR_Word DeadRTable1_22;
    MR_Word BornRTable_23;
    MR_Word DeadRTable_24;
    MR_Word ConstantRTable_25;
    MR_Word LocalRTable_26;
    MR_Word LRBeforeTable_27;
    MR_Word LRAfterTable_28;
    MR_Word VoidVarRegionTable_29;
    MR_Word BecomeLiveTable_30;
    MR_Word BecomeDeadBeforeTable_31;
    MR_Word BecomeDeadAfterTable_32;
    MR_Word RegionInstructionTable_33;
    MR_Word FormalRegionArgTable_34;
    MR_Word ActualRegionArgTable_35;
    MR_Word ResurrectionPathTable0_36;
    MR_Word JoinPointTable_37;
    MR_Word ResurrectionPathTable_38;
    MR_Word ResurrectionRenameTable_39;
    MR_Word ResurRenamingAnnoTable_40;
    MR_Word ResurRenamingTable_41;
    MR_Word LocalRegionsTable_42;
    MR_Word InCondRegionsTable_43;
    MR_Word RenamedRegionsTable_44;
    MR_Word IteRenamingTable0_45;
    MR_Word IteRenamingTable_46;
    MR_Word IteRenamingAnnoTable_47;
    MR_Word NameToVarTable_48;
    MR_Word STATE_VARIABLE_ModuleInfo_53_53;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_ModuleInfo_55_55;

    transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0(&RptaInfoTable_7, STATE_VARIABLE_ModuleInfo_0_49, &STATE_VARIABLE_ModuleInfo_53_53);
    transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0(STATE_VARIABLE_ModuleInfo_53_53, &ExecPathTable_8);
    transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0(STATE_VARIABLE_ModuleInfo_53_53, ExecPathTable_8, &LVBeforeTable_9, &LVAfterTable_10, &VoidVarTable_11);
    transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0(STATE_VARIABLE_ModuleInfo_53_53, RptaInfoTable_7, LVBeforeTable_9, LVAfterTable_10, VoidVarTable_11, &LRBeforeTable0_12, &LRAfterTable0_13, &VoidVarRegionTable0_14, &InputRTable_15, &OutputRTable_16, &BornRTable0_17, &DeadRTable0_18, &LocalRTable0_19);
    transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0(STATE_VARIABLE_ModuleInfo_53_53, RptaInfoTable_7, ExecPathTable_8, LRBeforeTable0_12, LRAfterTable0_13, InputRTable_15, OutputRTable_16, &ConstantRTable0_20, BornRTable0_17, &BornRTable1_21, DeadRTable0_18, &DeadRTable1_22);
    transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0(STATE_VARIABLE_ModuleInfo_53_53, RptaInfoTable_7, BornRTable1_21, &BornRTable_23, DeadRTable1_22, &DeadRTable_24, ConstantRTable0_20, &ConstantRTable_25, LocalRTable0_19, &LocalRTable_26, LRBeforeTable0_12, &LRBeforeTable_27, LRAfterTable0_13, &LRAfterTable_28, VoidVarRegionTable0_14, &VoidVarRegionTable_29);
    transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0(STATE_VARIABLE_ModuleInfo_53_53, RptaInfoTable_7, ExecPathTable_8, LRBeforeTable_27, LRAfterTable_28, VoidVarRegionTable_29, BornRTable_23, DeadRTable_24, LocalRTable_26, &BecomeLiveTable_30, &BecomeDeadBeforeTable_31, &BecomeDeadAfterTable_32, &RegionInstructionTable_33);
    transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0(STATE_VARIABLE_ModuleInfo_53_53, RptaInfoTable_7, ConstantRTable_25, DeadRTable_24, BornRTable_23, &FormalRegionArgTable_34, &ActualRegionArgTable_35);
    transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_10_p_0(ExecPathTable_8, LRBeforeTable_27, LRAfterTable_28, BornRTable_23, DeadRTable_24, LocalRTable_26, BecomeLiveTable_30, BecomeDeadBeforeTable_31, BecomeDeadAfterTable_32, &ResurrectionPathTable0_36);
    transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_p_0(ResurrectionPathTable0_36, ExecPathTable_8, &JoinPointTable_37);
    transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_4_p_0(ExecPathTable_8, JoinPointTable_37, ResurrectionPathTable0_36, &ResurrectionPathTable_38);
    transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_p_0(BecomeLiveTable_30, LocalRTable_26, RptaInfoTable_7, ResurrectionPathTable_38, &ResurrectionRenameTable_39);
    transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_10_p_0(ResurrectionRenameTable_39, JoinPointTable_37, LRBeforeTable_27, LRAfterTable_28, BornRTable_23, RptaInfoTable_7, ResurrectionPathTable_38, ExecPathTable_8, &ResurRenamingAnnoTable_40, &ResurRenamingTable_41);
    transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0(STATE_VARIABLE_ModuleInfo_53_53, RptaInfoTable_7, LRBeforeTable_27, LRAfterTable_28, ResurRenamingTable_41, ResurRenamingAnnoTable_40, &LocalRegionsTable_42, &InCondRegionsTable_43);
    transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0(LocalRegionsTable_42, InCondRegionsTable_43, &RenamedRegionsTable_44);
    transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_53_53, RptaInfoTable_7, RenamedRegionsTable_44, &IteRenamingTable0_45);
    transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0(RenamedRegionsTable_44, ExecPathTable_8, RptaInfoTable_7, IteRenamingTable0_45, &IteRenamingTable_46, &IteRenamingAnnoTable_47);
    Var_54 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__rbmm_scalar_common_2[0]));
    transform_hlds__rbmm__region_transformation__region_transform_12_p_0(RptaInfoTable_7, FormalRegionArgTable_34, ActualRegionArgTable_35, ResurRenamingTable_41, IteRenamingTable_46, RegionInstructionTable_33, ResurRenamingAnnoTable_40, IteRenamingAnnoTable_47, Var_54, &NameToVarTable_48, STATE_VARIABLE_ModuleInfo_53_53, &STATE_VARIABLE_ModuleInfo_55_55);
    transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0(RptaInfoTable_7, ActualRegionArgTable_35, ResurRenamingTable_41, IteRenamingTable_46, NameToVarTable_48, STATE_VARIABLE_ModuleInfo_55_55, STATE_VARIABLE_ModuleInfo_50);
  }
}

void mercury__transform_hlds__rbmm__init(void)
{
}

void mercury__transform_hlds__rbmm__init_type_tables(void)
{
}

void mercury__transform_hlds__rbmm__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__rbmm__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.rbmm.
