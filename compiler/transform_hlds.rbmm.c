/*
** Automatically generated from `rbmm.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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


/* :- module transform_hlds.rbmm. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__rbmm__init
ENDINIT
*/

#include "transform_hlds.rbmm.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 40 "rbmm.m"
void MR_CALL 
transform_hlds__rbmm__do_region_analysis_4_p_0(
#line 40 "rbmm.m"
  MR_Word transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_0_49,
#line 40 "rbmm.m"
  MR_Word * transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_50)
#line 40 "rbmm.m"
{
#line 63 "rbmm.m"
  {
#line 63 "rbmm.m"
    MR_bool transform_hlds__rbmm__succeeded;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__RptaInfoTable_7;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__ExecPathTable_8;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__LVBeforeTable_9;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__LVAfterTable_10;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__VoidVarTable_11;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__LRBeforeTable0_12;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__LRAfterTable0_13;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__VoidVarRegionTable0_14;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__InputRTable_15;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__OutputRTable_16;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__BornRTable0_17;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__DeadRTable0_18;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__LocalRTable0_19;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__ConstantRTable0_20;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__BornRTable1_21;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__DeadRTable1_22;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__BornRTable_23;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__DeadRTable_24;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__ConstantRTable_25;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__LocalRTable_26;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__LRBeforeTable_27;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__LRAfterTable_28;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__VoidVarRegionTable_29;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__BecomeLiveTable_30;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__BecomeDeadBeforeTable_31;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__BecomeDeadAfterTable_32;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__RegionInstructionTable_33;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__FormalRegionArgTable_34;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__ActualRegionArgTable_35;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__ResurrectionPathTable0_36;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__JoinPointTable_37;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__ResurrectionPathTable_38;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__ResurrectionRenameTable_39;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__ResurRenamingAnnoTable_40;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__ResurRenamingTable_41;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__LocalRegionsTable_42;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__InCondRegionsTable_43;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__RenamedRegionsTable_44;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__IteRenamingTable0_45;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__IteRenamingTable_46;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__IteRenamingAnnoTable_47;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__NameToVarTable_48;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__V_54_54;
#line 63 "rbmm.m"
    MR_Word transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_55_55;

#line 64 "rbmm.m"
    {
#line 64 "rbmm.m"
      transform_hlds__rbmm__points_to_analysis__region_points_to_analysis_3_p_0(&transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_0_49, &transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53);
    }
#line 65 "rbmm.m"
    {
#line 65 "rbmm.m"
      transform_hlds__rbmm__execution_path__execution_path_analysis_2_p_0(transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__rbmm__ExecPathTable_8);
    }
#line 66 "rbmm.m"
    {
#line 66 "rbmm.m"
      transform_hlds__rbmm__live_variable_analysis__live_variable_analysis_5_p_0(transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__rbmm__ExecPathTable_8, &transform_hlds__rbmm__LVBeforeTable_9, &transform_hlds__rbmm__LVAfterTable_10, &transform_hlds__rbmm__VoidVarTable_11);
    }
#line 68 "rbmm.m"
    {
#line 68 "rbmm.m"
      transform_hlds__rbmm__live_region_analysis__live_region_analysis_13_p_0(transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__LVBeforeTable_9, transform_hlds__rbmm__LVAfterTable_10, transform_hlds__rbmm__VoidVarTable_11, &transform_hlds__rbmm__LRBeforeTable0_12, &transform_hlds__rbmm__LRAfterTable0_13, &transform_hlds__rbmm__VoidVarRegionTable0_14, &transform_hlds__rbmm__InputRTable_15, &transform_hlds__rbmm__OutputRTable_16, &transform_hlds__rbmm__BornRTable0_17, &transform_hlds__rbmm__DeadRTable0_18, &transform_hlds__rbmm__LocalRTable0_19);
    }
#line 72 "rbmm.m"
    {
#line 72 "rbmm.m"
      transform_hlds__rbmm__interproc_region_lifetime__compute_interproc_region_lifetime_12_p_0(transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__ExecPathTable_8, transform_hlds__rbmm__LRBeforeTable0_12, transform_hlds__rbmm__LRAfterTable0_13, transform_hlds__rbmm__InputRTable_15, transform_hlds__rbmm__OutputRTable_16, &transform_hlds__rbmm__ConstantRTable0_20, transform_hlds__rbmm__BornRTable0_17, &transform_hlds__rbmm__BornRTable1_21, transform_hlds__rbmm__DeadRTable0_18, &transform_hlds__rbmm__DeadRTable1_22);
    }
#line 76 "rbmm.m"
    {
#line 76 "rbmm.m"
      transform_hlds__rbmm__interproc_region_lifetime__ignore_primitive_regions_16_p_0(transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__BornRTable1_21, &transform_hlds__rbmm__BornRTable_23, transform_hlds__rbmm__DeadRTable1_22, &transform_hlds__rbmm__DeadRTable_24, transform_hlds__rbmm__ConstantRTable0_20, &transform_hlds__rbmm__ConstantRTable_25, transform_hlds__rbmm__LocalRTable0_19, &transform_hlds__rbmm__LocalRTable_26, transform_hlds__rbmm__LRBeforeTable0_12, &transform_hlds__rbmm__LRBeforeTable_27, transform_hlds__rbmm__LRAfterTable0_13, &transform_hlds__rbmm__LRAfterTable_28, transform_hlds__rbmm__VoidVarRegionTable0_14, &transform_hlds__rbmm__VoidVarRegionTable_29);
    }
#line 81 "rbmm.m"
    {
#line 81 "rbmm.m"
      transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_p_0(transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__ExecPathTable_8, transform_hlds__rbmm__LRBeforeTable_27, transform_hlds__rbmm__LRAfterTable_28, transform_hlds__rbmm__VoidVarRegionTable_29, transform_hlds__rbmm__BornRTable_23, transform_hlds__rbmm__DeadRTable_24, transform_hlds__rbmm__LocalRTable_26, &transform_hlds__rbmm__BecomeLiveTable_30, &transform_hlds__rbmm__BecomeDeadBeforeTable_31, &transform_hlds__rbmm__BecomeDeadAfterTable_32, &transform_hlds__rbmm__RegionInstructionTable_33);
    }
#line 87 "rbmm.m"
    {
#line 87 "rbmm.m"
      transform_hlds__rbmm__region_arguments__record_region_arguments_7_p_0(transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__ConstantRTable_25, transform_hlds__rbmm__DeadRTable_24, transform_hlds__rbmm__BornRTable_23, &transform_hlds__rbmm__FormalRegionArgTable_34, &transform_hlds__rbmm__ActualRegionArgTable_35);
    }
#line 97 "rbmm.m"
    {
#line 97 "rbmm.m"
      transform_hlds__rbmm__region_resurrection_renaming__compute_resurrection_paths_10_p_0(transform_hlds__rbmm__ExecPathTable_8, transform_hlds__rbmm__LRBeforeTable_27, transform_hlds__rbmm__LRAfterTable_28, transform_hlds__rbmm__BornRTable_23, transform_hlds__rbmm__DeadRTable_24, transform_hlds__rbmm__LocalRTable_26, transform_hlds__rbmm__BecomeLiveTable_30, transform_hlds__rbmm__BecomeDeadBeforeTable_31, transform_hlds__rbmm__BecomeDeadAfterTable_32, &transform_hlds__rbmm__ResurrectionPathTable0_36);
    }
#line 101 "rbmm.m"
    {
#line 101 "rbmm.m"
      transform_hlds__rbmm__region_resurrection_renaming__collect_join_points_3_p_0(transform_hlds__rbmm__ResurrectionPathTable0_36, transform_hlds__rbmm__ExecPathTable_8, &transform_hlds__rbmm__JoinPointTable_37);
    }
#line 103 "rbmm.m"
    {
#line 103 "rbmm.m"
      transform_hlds__rbmm__region_resurrection_renaming__collect_paths_containing_join_points_4_p_0(transform_hlds__rbmm__ExecPathTable_8, transform_hlds__rbmm__JoinPointTable_37, transform_hlds__rbmm__ResurrectionPathTable0_36, &transform_hlds__rbmm__ResurrectionPathTable_38);
    }
#line 105 "rbmm.m"
    {
#line 105 "rbmm.m"
      transform_hlds__rbmm__region_resurrection_renaming__collect_region_resurrection_renaming_5_p_0(transform_hlds__rbmm__BecomeLiveTable_30, transform_hlds__rbmm__LocalRTable_26, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__ResurrectionPathTable_38, &transform_hlds__rbmm__ResurrectionRenameTable_39);
    }
#line 107 "rbmm.m"
    {
#line 107 "rbmm.m"
      transform_hlds__rbmm__region_resurrection_renaming__collect_renaming_and_annotation_10_p_0(transform_hlds__rbmm__ResurrectionRenameTable_39, transform_hlds__rbmm__JoinPointTable_37, transform_hlds__rbmm__LRBeforeTable_27, transform_hlds__rbmm__LRAfterTable_28, transform_hlds__rbmm__BornRTable_23, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__ResurrectionPathTable_38, transform_hlds__rbmm__ExecPathTable_8, &transform_hlds__rbmm__ResurRenamingAnnoTable_40, &transform_hlds__rbmm__ResurRenamingTable_41);
    }
#line 111 "rbmm.m"
    {
#line 111 "rbmm.m"
      transform_hlds__rbmm__condition_renaming__collect_non_local_and_in_cond_regions_8_p_0(transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__LRBeforeTable_27, transform_hlds__rbmm__LRAfterTable_28, transform_hlds__rbmm__ResurRenamingTable_41, transform_hlds__rbmm__ResurRenamingAnnoTable_40, &transform_hlds__rbmm__LocalRegionsTable_42, &transform_hlds__rbmm__InCondRegionsTable_43);
    }
#line 114 "rbmm.m"
    {
#line 114 "rbmm.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renamed_regions_3_p_0(transform_hlds__rbmm__LocalRegionsTable_42, transform_hlds__rbmm__InCondRegionsTable_43, &transform_hlds__rbmm__RenamedRegionsTable_44);
    }
#line 116 "rbmm.m"
    {
#line 116 "rbmm.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_renaming_4_p_0(transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__RenamedRegionsTable_44, &transform_hlds__rbmm__IteRenamingTable0_45);
    }
#line 118 "rbmm.m"
    {
#line 118 "rbmm.m"
      transform_hlds__rbmm__condition_renaming__collect_ite_annotation_6_p_0(transform_hlds__rbmm__RenamedRegionsTable_44, transform_hlds__rbmm__ExecPathTable_8, transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__IteRenamingTable0_45, &transform_hlds__rbmm__IteRenamingTable_46, &transform_hlds__rbmm__IteRenamingAnnoTable_47);
    }
#line 124 "rbmm.m"
    {
#line 124 "rbmm.m"
      transform_hlds__rbmm__V_54_54 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__rbmm_scalar_common_2[0]);
    }
#line 121 "rbmm.m"
    {
#line 121 "rbmm.m"
      transform_hlds__rbmm__region_transformation__region_transform_12_p_0(transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__FormalRegionArgTable_34, transform_hlds__rbmm__ActualRegionArgTable_35, transform_hlds__rbmm__ResurRenamingTable_41, transform_hlds__rbmm__IteRenamingTable_46, transform_hlds__rbmm__RegionInstructionTable_33, transform_hlds__rbmm__ResurRenamingAnnoTable_40, transform_hlds__rbmm__IteRenamingAnnoTable_47, transform_hlds__rbmm__V_54_54, &transform_hlds__rbmm__NameToVarTable_48, transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_53_53, &transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_55_55);
    }
#line 126 "rbmm.m"
    {
#line 126 "rbmm.m"
      transform_hlds__rbmm__add_rbmm_goal_infos__collect_rbmm_goal_info_7_p_0(transform_hlds__rbmm__RptaInfoTable_7, transform_hlds__rbmm__ActualRegionArgTable_35, transform_hlds__rbmm__ResurRenamingTable_41, transform_hlds__rbmm__IteRenamingTable_46, transform_hlds__rbmm__NameToVarTable_48, transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_55_55, transform_hlds__rbmm__STATE_VARIABLE_ModuleInfo_50);
#line 126 "rbmm.m"
      return;
    }
#line 63 "rbmm.m"
  }
#line 40 "rbmm.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.rbmm. */
