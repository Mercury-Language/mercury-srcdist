/*
** Automatically generated from `ite_gen.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module ll_backend.ite_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__ite_gen__init
ENDINIT
*/

#include "ll_backend.ite_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.rbmm.points_to_graph.mih"
#include "transform_hlds.rbmm.points_to_info.mih"
#include "transform_hlds.rbmm.region_arguments.mih"
#include "transform_hlds.rbmm.region_instruction.mih"
#include "transform_hlds.rbmm.region_liveness_info.mih"
#include "transform_hlds.rbmm.region_resurrection_renaming.mih"
#include "transform_hlds.rbmm.region_transformation.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0;

static MR_bool MR_CALL 
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__389__1_2_p_0(
  MR_Word ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38,
  MR_Word ll_backend__ite_gen__HeadVar__2_78);

static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(
  MR_Word ll_backend__ite_gen__NumLval_1,
  MR_Word ll_backend__ite_gen__AddrLval_2,
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
  MR_Word ll_backend__ite_gen__RemovedVars_4,
  MR_Word ll_backend__ite_gen__HeadVar__5_5,
  MR_Word * ll_backend__ite_gen__HeadVar__6_6,
  MR_Word ll_backend__ite_gen__HeadVar__7_7,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_8,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_9);

static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_8_p_0(
  MR_Word ll_backend__ite_gen__NumLval_1,
  MR_Word ll_backend__ite_gen__AddrLval_2,
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
  MR_Word ll_backend__ite_gen__HeadVar__4_4,
  MR_Word * ll_backend__ite_gen__HeadVar__5_5,
  MR_Word ll_backend__ite_gen__HeadVar__6_6,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_8);

static void MR_CALL 
ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(
  MR_Word ll_backend__ite_gen__HeadVar__1_1,
  MR_Word ll_backend__ite_gen__ModuleInfo_2,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_Removed_4);

static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(
  MR_Word ll_backend__ite_gen__IteRegionOps_14,
  MR_Word ll_backend__ite_gen__CondGoalInfo_15,
  MR_Word ll_backend__ite_gen__CondGoals_16,
  MR_Word ll_backend__ite_gen__ElseGoals_17,
  MR_Word * ll_backend__ite_gen__CondCode_18,
  MR_Word * ll_backend__ite_gen__ThenCode_19,
  MR_Word * ll_backend__ite_gen__ElseCode_20,
  MR_Word * ll_backend__ite_gen__StackVars_21,
  MR_Word * ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_67,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_68,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_70);

static MR_String MR_CALL 
ll_backend__ite_gen__wrap_transient_1_f_0(
  MR_String ll_backend__ite_gen__Code_3);

static void MR_CALL 
ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(
  MR_Word ll_backend__ite_gen__Globals_6,
  MR_Word ll_backend__ite_gen__GoalInfo_7,
  MR_Word * ll_backend__ite_gen__PNegCondCode_8,
  MR_Word * ll_backend__ite_gen__PNegThenCode_9,
  MR_Word * ll_backend__ite_gen__PNegElseCode_10);

static void MR_CALL 
ll_backend__ite_gen__read_and_erase_resume_point_5_p_0(
  MR_String ll_backend__ite_gen__CondStr_6,
  MR_Word * ll_backend__ite_gen__ResumeVars_7,
  MR_Word * ll_backend__ite_gen__ResumeLocs_8,
  MR_Word ll_backend__ite_gen__CondInfo0_9,
  MR_Word * ll_backend__ite_gen__CondInfo_10);

static MR_bool MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0_1(
  MR_Box ll_backend__ite_gen__closure_arg);

static void MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0(
  MR_Word ll_backend__ite_gen__CodeModel_11,
  MR_Word ll_backend__ite_gen__Goal_12,
  MR_Word ll_backend__ite_gen__NotGoalInfo_13,
  MR_Word ll_backend__ite_gen__ResumeVars_14,
  MR_Word ll_backend__ite_gen__ResumeLocs_15,
  MR_Word * ll_backend__ite_gen__Code_16,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_60,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_61,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_62,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_63);


static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_2[1][5];

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_3[1][1];




static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\t\tMR_restore_transient_registers();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__ite_gen_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0)),
    ((MR_Box) (&ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0))
  },
};

static /* final */ const MR_Box ll_backend__ite_gen_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0
  }
};

static MR_bool MR_CALL 
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__389__1_2_p_0(
  MR_Word ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38,
  MR_Word ll_backend__ite_gen__HeadVar__2_78)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;

    {
      ll_backend__ite_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[1], ((MR_Box) (ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38)), ((MR_Box) (ll_backend__ite_gen__HeadVar__2_78)));
    }
    return ll_backend__ite_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(
  MR_Word ll_backend__ite_gen__NumLval_1,
  MR_Word ll_backend__ite_gen__AddrLval_2,
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
  MR_Word ll_backend__ite_gen__RemovedVars_4,
  MR_Word ll_backend__ite_gen__HeadVar__5_5,
  MR_Word * ll_backend__ite_gen__HeadVar__6_6,
  MR_Word ll_backend__ite_gen__HeadVar__7_7,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_8,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_9)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;

    if ((ll_backend__ite_gen__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__ite_gen__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__ite_gen__STATE_VARIABLE_CLD_9 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_8;
      }
    else
      {
        MR_Word ll_backend__ite_gen__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        MR_Word ll_backend__ite_gen__RegionVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word ll_backend__ite_gen__RegionVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word ll_backend__ite_gen__Code_24;
        MR_Word ll_backend__ite_gen__Codes_25;
        MR_Word ll_backend__ite_gen__ProduceVarCode_28;
        MR_Word ll_backend__ite_gen__RegionVarRval_29;
        MR_Word ll_backend__ite_gen__RemovedAtStartOfElse_30;
        MR_Word ll_backend__ite_gen__SaveCode_31;
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_34_34;
        MR_Word ll_backend__ite_gen__V_35_35;
        MR_Word ll_backend__ite_gen__V_36_36;
        MR_Word ll_backend__ite_gen__V_37_37;

        {
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__ite_gen__RegionVar_22, &ll_backend__ite_gen__ProduceVarCode_28, &ll_backend__ite_gen__RegionVarRval_29, ll_backend__ite_gen__HeadVar__7_7, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_8, &ll_backend__ite_gen__STATE_VARIABLE_CLD_34_34);
        }
        {
          ll_backend__ite_gen__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[0], ((MR_Box) (ll_backend__ite_gen__RegionVar_22)), ll_backend__ite_gen__RemovedVars_4);
        }
        if (ll_backend__ite_gen__succeeded)
          ll_backend__ite_gen__RemovedAtStartOfElse_30 = (MR_Integer) 0;
        else
          ll_backend__ite_gen__RemovedAtStartOfElse_30 = (MR_Integer) 1;
        {
          ll_backend__ite_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_37_37, 0) = ((MR_Box) (ll_backend__ite_gen__RemovedAtStartOfElse_30));
        }
        {
          ll_backend__ite_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 1) = ((MR_Box) (ll_backend__ite_gen__V_37_37));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_3));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 3) = ((MR_Box) (ll_backend__ite_gen__RegionVarRval_29));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 4) = ((MR_Box) (ll_backend__ite_gen__NumLval_1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 5) = ((MR_Box) (ll_backend__ite_gen__AddrLval_2));
        }
        {
          ll_backend__ite_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_35_35, 0) = ((MR_Box) (ll_backend__ite_gen__V_36_36));
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_35_35, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
        }
        {
          ll_backend__ite_gen__SaveCode_31 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_41_41, ((MR_Box) (ll_backend__ite_gen__V_35_35)));
        }
        {
          ll_backend__ite_gen__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_41_41, ll_backend__ite_gen__ProduceVarCode_28, ll_backend__ite_gen__SaveCode_31);
        }
        {
          ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(ll_backend__ite_gen__NumLval_1, ll_backend__ite_gen__AddrLval_2, ll_backend__ite_gen__EmbeddedStackFrameId_3, ll_backend__ite_gen__RemovedVars_4, ll_backend__ite_gen__RegionVars_23, &ll_backend__ite_gen__Codes_25, ll_backend__ite_gen__HeadVar__7_7, ll_backend__ite_gen__STATE_VARIABLE_CLD_34_34, ll_backend__ite_gen__STATE_VARIABLE_CLD_9);
        }
        {
          *ll_backend__ite_gen__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_41_41, ll_backend__ite_gen__Code_24, ll_backend__ite_gen__Codes_25);
        }
      }
  }
}

static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_8_p_0(
  MR_Word ll_backend__ite_gen__NumLval_1,
  MR_Word ll_backend__ite_gen__AddrLval_2,
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
  MR_Word ll_backend__ite_gen__HeadVar__4_4,
  MR_Word * ll_backend__ite_gen__HeadVar__5_5,
  MR_Word ll_backend__ite_gen__HeadVar__6_6,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_8)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;

    if ((ll_backend__ite_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__ite_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__ite_gen__STATE_VARIABLE_CLD_8 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_7;
      }
    else
      {
        MR_Word ll_backend__ite_gen__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        MR_Word ll_backend__ite_gen__RegionVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word ll_backend__ite_gen__RegionVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ll_backend__ite_gen__Code_21;
        MR_Word ll_backend__ite_gen__Codes_22;
        MR_Word ll_backend__ite_gen__ProduceVarCode_25;
        MR_Word ll_backend__ite_gen__RegionVarRval_26;
        MR_Word ll_backend__ite_gen__SaveCode_27;
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_30_30;
        MR_Word ll_backend__ite_gen__V_31_31;
        MR_Word ll_backend__ite_gen__V_32_32;

        {
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__ite_gen__RegionVar_19, &ll_backend__ite_gen__ProduceVarCode_25, &ll_backend__ite_gen__RegionVarRval_26, ll_backend__ite_gen__HeadVar__6_6, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__ite_gen__STATE_VARIABLE_CLD_30_30);
        }
        {
          ll_backend__ite_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_3));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 3) = ((MR_Box) (ll_backend__ite_gen__RegionVarRval_26));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 4) = ((MR_Box) (ll_backend__ite_gen__NumLval_1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 5) = ((MR_Box) (ll_backend__ite_gen__AddrLval_2));
        }
        {
          ll_backend__ite_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_31_31, 0) = ((MR_Box) (ll_backend__ite_gen__V_32_32));
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_31_31, 1) = ((MR_Box) ((MR_String) "ite protect the region if needed"));
        }
        {
          ll_backend__ite_gen__SaveCode_27 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__ite_gen__V_31_31)));
        }
        {
          ll_backend__ite_gen__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_37_37, ll_backend__ite_gen__ProduceVarCode_25, ll_backend__ite_gen__SaveCode_27);
        }
        {
          ll_backend__ite_gen__ite_protect_regions_8_p_0(ll_backend__ite_gen__NumLval_1, ll_backend__ite_gen__AddrLval_2, ll_backend__ite_gen__EmbeddedStackFrameId_3, ll_backend__ite_gen__RegionVars_20, &ll_backend__ite_gen__Codes_22, ll_backend__ite_gen__HeadVar__6_6, ll_backend__ite_gen__STATE_VARIABLE_CLD_30_30, ll_backend__ite_gen__STATE_VARIABLE_CLD_8);
        }
        {
          *ll_backend__ite_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_37_37, ll_backend__ite_gen__Code_21, ll_backend__ite_gen__Codes_22);
        }
      }
  }
}

static void MR_CALL 
ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(
  MR_Word ll_backend__ite_gen__HeadVar__1_1,
  MR_Word ll_backend__ite_gen__ModuleInfo_2,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_Removed_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__ite_gen__succeeded;

        if ((ll_backend__ite_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__ite_gen__STATE_VARIABLE_Removed_4 = ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3;
        else
          {
            MR_Word ll_backend__ite_gen__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__ite_gen__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__ite_gen__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_9, (MR_Integer) 0)));
            MR_Word ll_backend__ite_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_9, (MR_Integer) 1)));
            MR_Word ll_backend__ite_gen__RegionVar_22;
            MR_Word ll_backend__ite_gen__PredId_15;
            MR_Word ll_backend__ite_gen__Args_17;
            MR_Word ll_backend__ite_gen__PredInfo_21;
            MR_Word ll_backend__ite_gen__V_25_25;
            MR_String ll_backend__ite_gen__V_26_26;
            MR_Word ll_backend__ite_gen__V_27_27;
            MR_Word ll_backend__ite_gen__V_31_31;
            MR_String ll_backend__ite_gen__V_32_32;
            MR_Integer ll_backend__ite_gen___ProcId_16;
            MR_Word ll_backend__ite_gen___Builtin_18;
            MR_Word ll_backend__ite_gen___UC_19;
            MR_Word ll_backend__ite_gen___SymName_20;

            ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__GoalExpr_13)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__ite_gen__succeeded)
              {
                ll_backend__ite_gen__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 0)));
                ll_backend__ite_gen___ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 1)));
                ll_backend__ite_gen__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 2)));
                ll_backend__ite_gen___Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 3)));
                ll_backend__ite_gen___UC_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 4)));
                ll_backend__ite_gen___SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 5)));
                {
                  hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__ite_gen__ModuleInfo_2, ll_backend__ite_gen__PredId_15, &ll_backend__ite_gen__PredInfo_21);
                }
                {
                  ll_backend__ite_gen__V_25_25 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__ite_gen__PredInfo_21);
                }
                {
                  ll_backend__ite_gen__V_31_31 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
                }
                {
                  ll_backend__ite_gen__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__ite_gen__V_25_25, ll_backend__ite_gen__V_31_31);
                }
                if (ll_backend__ite_gen__succeeded)
                  {
                    {
                      ll_backend__ite_gen__V_26_26 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__ite_gen__PredInfo_21);
                    }
                    {
                      ll_backend__ite_gen__V_32_32 = transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0();
                    }
                    ll_backend__ite_gen__succeeded = (strcmp(ll_backend__ite_gen__V_26_26, ll_backend__ite_gen__V_32_32) == 0);
                    if (ll_backend__ite_gen__succeeded)
                      {
                        ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__Args_17)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__ite_gen__succeeded)
                          {
                            ll_backend__ite_gen__RegionVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Args_17, (MR_Integer) 0)));
                            ll_backend__ite_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Args_17, (MR_Integer) 1)));
                            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
            if (ll_backend__ite_gen__succeeded)
              {
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_28_28;

                {
                  mercury__set__insert_3_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[0], ((MR_Box) (ll_backend__ite_gen__RegionVar_22)), ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3, &ll_backend__ite_gen__STATE_VARIABLE_Removed_28_28);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__ite_gen__HeadVar__1__tmp_copy_1 = ll_backend__ite_gen__Goals_10;
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_0__tmp_copy_3 = ll_backend__ite_gen__STATE_VARIABLE_Removed_28_28;

                  ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3 = ll_backend__ite_gen__STATE_VARIABLE_Removed_0__tmp_copy_3;
                  ll_backend__ite_gen__HeadVar__1_1 = ll_backend__ite_gen__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              *ll_backend__ite_gen__STATE_VARIABLE_Removed_4 = ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(
  MR_Word ll_backend__ite_gen__IteRegionOps_14,
  MR_Word ll_backend__ite_gen__CondGoalInfo_15,
  MR_Word ll_backend__ite_gen__CondGoals_16,
  MR_Word ll_backend__ite_gen__ElseGoals_17,
  MR_Word * ll_backend__ite_gen__CondCode_18,
  MR_Word * ll_backend__ite_gen__ThenCode_19,
  MR_Word * ll_backend__ite_gen__ElseCode_20,
  MR_Word * ll_backend__ite_gen__StackVars_21,
  MR_Word * ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_67,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_68,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_70)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;

    switch (ll_backend__ite_gen__IteRegionOps_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__ite_gen__ForwardLiveVars_25;
          MR_Word ll_backend__ite_gen__LiveRegionVars_26;
          MR_Word ll_backend__ite_gen__MaybeRbmmInfo_27;

          {
            ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__ite_gen__ForwardLiveVars_25);
          }
          {
            ll_backend__ite_gen__LiveRegionVars_26 = ll_backend__code_info__filter_region_vars_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_67, ll_backend__ite_gen__ForwardLiveVars_25);
          }
          {
            ll_backend__ite_gen__MaybeRbmmInfo_27 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(ll_backend__ite_gen__CondGoalInfo_15);
          }
          if ((ll_backend__ite_gen__MaybeRbmmInfo_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word ll_backend__ite_gen__TypeCtorInfo_150_150 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

              {
                *ll_backend__ite_gen__CondCode_18 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150);
              }
              {
                *ll_backend__ite_gen__ThenCode_19 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150);
              }
              {
                *ll_backend__ite_gen__ElseCode_20 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150);
              }
              *ll_backend__ite_gen__StackVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__ite_gen__STATE_VARIABLE_CI_68 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_67;
              *ll_backend__ite_gen__STATE_VARIABLE_CLD_70 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69;
            }
          else
            {
              MR_Word ll_backend__ite_gen__TypeInfo_152_152;
              MR_Word ll_backend__ite_gen__RbmmInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__MaybeRbmmInfo_27, (MR_Integer) 0)));
              MR_Word ll_backend__ite_gen__CondCreatedRegionVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 0)));
              MR_Word ll_backend__ite_gen__CondRemovedRegionVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 1)));
              MR_Word ll_backend__ite_gen__CondCarriedRegionVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 2)));
              MR_Word ll_backend__ite_gen__CondAllocRegionVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 3)));
              MR_Word ll_backend__ite_gen__ReversedCondGoals_34;
              MR_Word ll_backend__ite_gen__ModuleInfo_35;
              MR_Word ll_backend__ite_gen__RemovedAtEndOfThen_36;
              MR_Word ll_backend__ite_gen__NeedToBeProtectedRegionVars_37;
              MR_Word ll_backend__ite_gen__V_71_71;
              MR_Word ll_backend__ite_gen___CondUsedRegionVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 4)));

              {
                mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__ite_gen__CondGoals_16, &ll_backend__ite_gen__ReversedCondGoals_34);
              }
              {
                ll_backend__code_info__get_module_info_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_67, &ll_backend__ite_gen__ModuleInfo_35);
              }
              ll_backend__ite_gen__TypeInfo_152_152 = (MR_Word) &ll_backend__ite_gen_scalar_common_1[0];
              {
                ll_backend__ite_gen__V_71_71 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeInfo_152_152);
              }
              {
                ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ll_backend__ite_gen__ReversedCondGoals_34, ll_backend__ite_gen__ModuleInfo_35, ll_backend__ite_gen__V_71_71, &ll_backend__ite_gen__RemovedAtEndOfThen_36);
              }
              {
                mercury__set__difference_3_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__CondRemovedRegionVars_30, ll_backend__ite_gen__RemovedAtEndOfThen_36, &ll_backend__ite_gen__NeedToBeProtectedRegionVars_37);
              }
              {
                ll_backend__ite_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__CondCreatedRegionVars_29);
              }
              if (ll_backend__ite_gen__succeeded)
                {
                  {
                    ll_backend__ite_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__NeedToBeProtectedRegionVars_37);
                  }
                  if (ll_backend__ite_gen__succeeded)
                    {
                      ll_backend__ite_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__CondAllocRegionVars_32);
                    }
                }
              if (ll_backend__ite_gen__succeeded)
                {
                  MR_Word ll_backend__ite_gen__TypeCtorInfo_153_153 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

                  {
                    *ll_backend__ite_gen__CondCode_18 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_153_153);
                  }
                  {
                    *ll_backend__ite_gen__ThenCode_19 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_153_153);
                  }
                  {
                    *ll_backend__ite_gen__ElseCode_20 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_153_153);
                  }
                  *ll_backend__ite_gen__StackVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ll_backend__ite_gen__STATE_VARIABLE_CLD_70 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69;
                  *ll_backend__ite_gen__STATE_VARIABLE_CI_68 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_67;
                }
              else
                {
                  MR_Word ll_backend__ite_gen__TypeCtorInfo_154_154;
                  MR_Word ll_backend__ite_gen__TypeCtorInfo_156_156;
                  MR_Word ll_backend__ite_gen__RemovedAtStartOfElse_38;
                  MR_Word ll_backend__ite_gen__UnprotectedRemovedAtStartOfElse_39;
                  MR_Word ll_backend__ite_gen__ProtectRegionVars_40;
                  MR_Word ll_backend__ite_gen__SnapshotRegionVars0_41;
                  MR_Word ll_backend__ite_gen__SnapshotRegionVars_42;
                  MR_Word ll_backend__ite_gen__ProtectRegionVarList_43;
                  MR_Word ll_backend__ite_gen__SnapshotRegionVarList_44;
                  MR_Integer ll_backend__ite_gen__NumProtectRegionVars_45;
                  MR_Integer ll_backend__ite_gen__NumSnapshotRegionVars_46;
                  MR_Word ll_backend__ite_gen__Globals_47;
                  MR_Integer ll_backend__ite_gen__FixedSize_48;
                  MR_Integer ll_backend__ite_gen__ProtectSize_49;
                  MR_Integer ll_backend__ite_gen__SnapshotSize_50;
                  MR_Integer ll_backend__ite_gen__FrameSize_51;
                  MR_Word ll_backend__ite_gen__Items_52;
                  MR_Word ll_backend__ite_gen__MainStackId_53;
                  MR_Integer ll_backend__ite_gen__FirstSlotNum_54;
                  MR_Integer ll_backend__ite_gen__LastSlotNum_55;
                  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_56;
                  MR_Word ll_backend__ite_gen__FirstNonFixedAddr_57;
                  MR_Word ll_backend__ite_gen__ProtectNumRegLval_58;
                  MR_Word ll_backend__ite_gen__SnapshotNumRegLval_59;
                  MR_Word ll_backend__ite_gen__AddrRegLval_60;
                  MR_Word ll_backend__ite_gen__PushInitCode_61;
                  MR_Word ll_backend__ite_gen__ProtectRegionCode_62;
                  MR_Word ll_backend__ite_gen__SnapshotRegionCode_63;
                  MR_Word ll_backend__ite_gen__SetCode_64;
                  MR_Word ll_backend__ite_gen__CondCodeModel_65;
                  MR_Word ll_backend__ite_gen__CondKind_66;
                  MR_Word ll_backend__ite_gen__V_72_72;
                  MR_Word ll_backend__ite_gen__V_73_73;
                  MR_Word ll_backend__ite_gen__V_74_74;
                  MR_Word ll_backend__ite_gen__V_75_75;
                  MR_Integer ll_backend__ite_gen__V_79_79;
                  MR_Integer ll_backend__ite_gen__V_80_80;
                  MR_Integer ll_backend__ite_gen__V_81_81;
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85;
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_87_87;
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_89_89;
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91;
                  MR_Word ll_backend__ite_gen__V_92_92;
                  MR_Word ll_backend__ite_gen__V_93_93;
                  MR_Word ll_backend__ite_gen__V_94_94;
                  MR_Word ll_backend__ite_gen__V_97_97;
                  MR_Word ll_backend__ite_gen__V_98_98;
                  MR_Word ll_backend__ite_gen__V_99_99;
                  MR_Word ll_backend__ite_gen__V_100_100;
                  MR_Word ll_backend__ite_gen__V_104_104;
                  MR_Word ll_backend__ite_gen__V_105_105;
                  MR_Word ll_backend__ite_gen__V_106_106;
                  MR_Word ll_backend__ite_gen__V_111_111;
                  MR_Word ll_backend__ite_gen__V_112_112;
                  MR_Word ll_backend__ite_gen__V_113_113;
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_118_118;
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_119_119;
                  MR_Word ll_backend__ite_gen__V_120_120;
                  MR_Word ll_backend__ite_gen__V_121_121;
                  MR_Word ll_backend__ite_gen__V_122_122;
                  MR_Word ll_backend__ite_gen__V_124_124;
                  MR_Word ll_backend__ite_gen__V_126_126;
                  MR_Word ll_backend__ite_gen__V_127_127;
                  MR_Word ll_backend__ite_gen__V_128_128;
                  MR_Word ll_backend__ite_gen__V_130_130;
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_133_133;
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134;
                  MR_Word ll_backend__ite_gen__V_139_139;
                  MR_Word ll_backend__ite_gen__V_140_140;
                  MR_Word ll_backend__ite_gen__V_141_141;
                  MR_Word ll_backend__ite_gen__V_142_142;
                  MR_Word ll_backend__ite_gen__V_143_143;
                  MR_Word ll_backend__ite_gen__V_145_145;
                  MR_Word ll_backend__ite_gen__V_146_146;
                  MR_Word ll_backend__ite_gen__V_147_147;

                  {
                    ll_backend__ite_gen__V_72_72 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeInfo_152_152);
                  }
                  {
                    ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ll_backend__ite_gen__ElseGoals_17, ll_backend__ite_gen__ModuleInfo_35, ll_backend__ite_gen__V_72_72, &ll_backend__ite_gen__RemovedAtStartOfElse_38);
                  }
                  {
                    mercury__set__intersect_3_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__RemovedAtStartOfElse_38, ll_backend__ite_gen__CondCarriedRegionVars_31, &ll_backend__ite_gen__UnprotectedRemovedAtStartOfElse_39);
                  }
                  ll_backend__ite_gen__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  {
                    ll_backend__ite_gen__V_73_73 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__NeedToBeProtectedRegionVars_37);
                  }
                  {
                    parse_tree__set_of_var__intersect_3_p_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__LiveRegionVars_26, ll_backend__ite_gen__V_73_73, &ll_backend__ite_gen__ProtectRegionVars_40);
                  }
                  {
                    ll_backend__ite_gen__V_74_74 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__CondAllocRegionVars_32);
                  }
                  {
                    parse_tree__set_of_var__intersect_3_p_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__LiveRegionVars_26, ll_backend__ite_gen__V_74_74, &ll_backend__ite_gen__SnapshotRegionVars0_41);
                  }
                  {
                    ll_backend__ite_gen__V_75_75 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__UnprotectedRemovedAtStartOfElse_39);
                  }
                  {
                    parse_tree__set_of_var__difference_3_p_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__SnapshotRegionVars0_41, ll_backend__ite_gen__V_75_75, &ll_backend__ite_gen__SnapshotRegionVars_42);
                  }
                  {
                    ll_backend__ite_gen__ProtectRegionVarList_43 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__ProtectRegionVars_40);
                  }
                  {
                    ll_backend__ite_gen__SnapshotRegionVarList_44 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__SnapshotRegionVars_42);
                  }
                  {
                    mercury__list__length_2_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__ProtectRegionVarList_43, &ll_backend__ite_gen__NumProtectRegionVars_45);
                  }
                  {
                    mercury__list__length_2_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__SnapshotRegionVarList_44, &ll_backend__ite_gen__NumSnapshotRegionVars_46);
                  }
                  {
                    ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_67, &ll_backend__ite_gen__Globals_47);
                  }
                  {
                    libs__globals__lookup_int_option_3_p_0(ll_backend__ite_gen__Globals_47, (MR_Integer) 285, &ll_backend__ite_gen__FixedSize_48);
                  }
                  {
                    libs__globals__lookup_int_option_3_p_0(ll_backend__ite_gen__Globals_47, (MR_Integer) 289, &ll_backend__ite_gen__ProtectSize_49);
                  }
                  {
                    libs__globals__lookup_int_option_3_p_0(ll_backend__ite_gen__Globals_47, (MR_Integer) 290, &ll_backend__ite_gen__SnapshotSize_50);
                  }
                  ll_backend__ite_gen__V_80_80 = (ll_backend__ite_gen__ProtectSize_49 * ll_backend__ite_gen__NumProtectRegionVars_45);
                  ll_backend__ite_gen__V_79_79 = (ll_backend__ite_gen__FixedSize_48 + ll_backend__ite_gen__V_80_80);
                  ll_backend__ite_gen__V_81_81 = (ll_backend__ite_gen__SnapshotSize_50 * ll_backend__ite_gen__NumSnapshotRegionVars_46);
                  ll_backend__ite_gen__FrameSize_51 = (ll_backend__ite_gen__V_79_79 + ll_backend__ite_gen__V_81_81);
                  {
                    ll_backend__ite_gen__Items_52 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__ite_gen__FrameSize_51, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))));
                  }
                  {
                    ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__ite_gen__Items_52, (MR_Integer) 1, ll_backend__ite_gen__StackVars_21, &ll_backend__ite_gen__MainStackId_53, &ll_backend__ite_gen__FirstSlotNum_54, &ll_backend__ite_gen__LastSlotNum_55, ll_backend__ite_gen__STATE_VARIABLE_CI_0_67, ll_backend__ite_gen__STATE_VARIABLE_CI_68, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85);
                  }
                  {
                    ll_backend__ite_gen__EmbeddedStackFrameId_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__EmbeddedStackFrameId_56, 0) = ((MR_Box) (ll_backend__ite_gen__MainStackId_53));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__EmbeddedStackFrameId_56, 1) = ((MR_Box) (ll_backend__ite_gen__FirstSlotNum_54));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__EmbeddedStackFrameId_56, 2) = ((MR_Box) (ll_backend__ite_gen__LastSlotNum_55));
                  }
                  {
                    ll_backend__ite_gen__FirstNonFixedAddr_57 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(ll_backend__ite_gen__EmbeddedStackFrameId_56, ll_backend__ite_gen__FixedSize_48);
                  }
                  {
                    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__ite_gen__ProtectNumRegLval_58, ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85, &ll_backend__ite_gen__STATE_VARIABLE_CLD_87_87);
                  }
                  {
                    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__ite_gen__SnapshotNumRegLval_59, ll_backend__ite_gen__STATE_VARIABLE_CLD_87_87, &ll_backend__ite_gen__STATE_VARIABLE_CLD_89_89);
                  }
                  {
                    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__ite_gen__AddrRegLval_60, ll_backend__ite_gen__STATE_VARIABLE_CLD_89_89, &ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91);
                  }
                  ll_backend__ite_gen__TypeCtorInfo_156_156 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                  {
                    ll_backend__ite_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_94_94, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_94_94, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
                  }
                  {
                    ll_backend__ite_gen__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_93_93, 0) = ((MR_Box) (ll_backend__ite_gen__V_94_94));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_93_93, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region ite stack"));
                  }
                  ll_backend__ite_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__ite_gen_scalar_common_1[3]);
                  {
                    ll_backend__ite_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_99_99, 1) = ((MR_Box) (ll_backend__ite_gen__ProtectNumRegLval_58));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_99_99, 2) = ((MR_Box) (ll_backend__ite_gen__V_100_100));
                  }
                  {
                    ll_backend__ite_gen__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_98_98, 0) = ((MR_Box) (ll_backend__ite_gen__V_99_99));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_98_98, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
                  }
                  {
                    ll_backend__ite_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_106_106, 1) = ((MR_Box) (ll_backend__ite_gen__SnapshotNumRegLval_59));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_106_106, 2) = ((MR_Box) (ll_backend__ite_gen__V_100_100));
                  }
                  {
                    ll_backend__ite_gen__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_105_105, 0) = ((MR_Box) (ll_backend__ite_gen__V_106_106));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_105_105, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
                  }
                  {
                    ll_backend__ite_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_113_113, 1) = ((MR_Box) (ll_backend__ite_gen__AddrRegLval_60));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_113_113, 2) = ((MR_Box) (ll_backend__ite_gen__FirstNonFixedAddr_57));
                  }
                  {
                    ll_backend__ite_gen__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_112_112, 0) = ((MR_Box) (ll_backend__ite_gen__V_113_113));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_112_112, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
                  }
                  {
                    ll_backend__ite_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_111_111, 0) = ((MR_Box) (ll_backend__ite_gen__V_112_112));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__ite_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_104_104, 0) = ((MR_Box) (ll_backend__ite_gen__V_105_105));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_104_104, 1) = ((MR_Box) (ll_backend__ite_gen__V_111_111));
                  }
                  {
                    ll_backend__ite_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_97_97, 0) = ((MR_Box) (ll_backend__ite_gen__V_98_98));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_97_97, 1) = ((MR_Box) (ll_backend__ite_gen__V_104_104));
                  }
                  {
                    ll_backend__ite_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_92_92, 0) = ((MR_Box) (ll_backend__ite_gen__V_93_93));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_92_92, 1) = ((MR_Box) (ll_backend__ite_gen__V_97_97));
                  }
                  {
                    ll_backend__ite_gen__PushInitCode_61 = mercury__cord__from_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__V_92_92);
                  }
                  {
                    ll_backend__ite_gen__ite_protect_regions_8_p_0(ll_backend__ite_gen__ProtectNumRegLval_58, ll_backend__ite_gen__AddrRegLval_60, ll_backend__ite_gen__EmbeddedStackFrameId_56, ll_backend__ite_gen__ProtectRegionVarList_43, &ll_backend__ite_gen__ProtectRegionCode_62, *ll_backend__ite_gen__STATE_VARIABLE_CI_68, ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91, &ll_backend__ite_gen__STATE_VARIABLE_CLD_118_118);
                  }
                  {
                    ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(ll_backend__ite_gen__SnapshotNumRegLval_59, ll_backend__ite_gen__AddrRegLval_60, ll_backend__ite_gen__EmbeddedStackFrameId_56, ll_backend__ite_gen__RemovedAtStartOfElse_38, ll_backend__ite_gen__SnapshotRegionVarList_44, &ll_backend__ite_gen__SnapshotRegionCode_63, *ll_backend__ite_gen__STATE_VARIABLE_CI_68, ll_backend__ite_gen__STATE_VARIABLE_CLD_118_118, &ll_backend__ite_gen__STATE_VARIABLE_CLD_119_119);
                  }
                  {
                    ll_backend__ite_gen__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_124_124, 0) = ((MR_Box) (ll_backend__ite_gen__ProtectNumRegLval_58));
                  }
                  {
                    ll_backend__ite_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 3) = ((MR_Box) (ll_backend__ite_gen__V_124_124));
                  }
                  {
                    ll_backend__ite_gen__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_121_121, 0) = ((MR_Box) (ll_backend__ite_gen__V_122_122));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_121_121, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
                  }
                  {
                    ll_backend__ite_gen__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_130_130, 0) = ((MR_Box) (ll_backend__ite_gen__SnapshotNumRegLval_59));
                  }
                  {
                    ll_backend__ite_gen__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_128_128, 1) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_128_128, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_128_128, 3) = ((MR_Box) (ll_backend__ite_gen__V_130_130));
                  }
                  {
                    ll_backend__ite_gen__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_127_127, 0) = ((MR_Box) (ll_backend__ite_gen__V_128_128));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_127_127, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
                  }
                  {
                    ll_backend__ite_gen__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_126_126, 0) = ((MR_Box) (ll_backend__ite_gen__V_127_127));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__ite_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_120_120, 0) = ((MR_Box) (ll_backend__ite_gen__V_121_121));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_120_120, 1) = ((MR_Box) (ll_backend__ite_gen__V_126_126));
                  }
                  {
                    ll_backend__ite_gen__SetCode_64 = mercury__cord__from_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__V_120_120);
                  }
                  {
                    ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__ite_gen__ProtectNumRegLval_58, ll_backend__ite_gen__STATE_VARIABLE_CLD_119_119, &ll_backend__ite_gen__STATE_VARIABLE_CLD_133_133);
                  }
                  {
                    ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__ite_gen__SnapshotNumRegLval_59, ll_backend__ite_gen__STATE_VARIABLE_CLD_133_133, &ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134);
                  }
                  {
                    ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__ite_gen__AddrRegLval_60, ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134, ll_backend__ite_gen__STATE_VARIABLE_CLD_70);
                  }
                  {
                    ll_backend__ite_gen__CondCodeModel_65 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__ite_gen__CondGoalInfo_15);
                  }
                  switch (ll_backend__ite_gen__CondCodeModel_65) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.maybe_create_ite_region_frame\'/13", (MR_String) "det cond");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        ll_backend__ite_gen__CondKind_66 = (MR_Integer) 1;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ll_backend__ite_gen__CondKind_66 = (MR_Integer) 0;
                        *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                      break;
                  }
                  {
                    ll_backend__ite_gen__V_140_140 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__SnapshotRegionCode_63, ll_backend__ite_gen__SetCode_64);
                  }
                  {
                    ll_backend__ite_gen__V_139_139 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__ProtectRegionCode_62, ll_backend__ite_gen__V_140_140);
                  }
                  {
                    *ll_backend__ite_gen__CondCode_18 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__PushInitCode_61, ll_backend__ite_gen__V_139_139);
                  }
                  {
                    ll_backend__ite_gen__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_143_143, 0) = ((MR_Box) (ll_backend__ite_gen__CondKind_66));
                  }
                  {
                    ll_backend__ite_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_142_142, 1) = ((MR_Box) (ll_backend__ite_gen__V_143_143));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_142_142, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
                  }
                  {
                    ll_backend__ite_gen__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_141_141, 0) = ((MR_Box) (ll_backend__ite_gen__V_142_142));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_141_141, 1) = ((MR_Box) ((MR_String) "region enter then"));
                  }
                  {
                    *ll_backend__ite_gen__ThenCode_19 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ((MR_Box) (ll_backend__ite_gen__V_141_141)));
                  }
                  {
                    ll_backend__ite_gen__V_147_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__ite_gen__V_147_147, 0) = ((MR_Box) (ll_backend__ite_gen__CondKind_66));
                  }
                  {
                    ll_backend__ite_gen__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_146_146, 1) = ((MR_Box) (ll_backend__ite_gen__V_147_147));
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_146_146, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
                  }
                  {
                    ll_backend__ite_gen__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_145_145, 0) = ((MR_Box) (ll_backend__ite_gen__V_146_146));
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_145_145, 1) = ((MR_Box) ((MR_String) "region enter else"));
                  }
                  {
                    *ll_backend__ite_gen__ElseCode_20 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ((MR_Box) (ll_backend__ite_gen__V_145_145)));
                  }
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__ite_gen__TypeCtorInfo_149_149 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

          {
            *ll_backend__ite_gen__CondCode_18 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_149_149);
          }
          {
            *ll_backend__ite_gen__ThenCode_19 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_149_149);
          }
          {
            *ll_backend__ite_gen__ElseCode_20 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_149_149);
          }
          *ll_backend__ite_gen__StackVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__ite_gen__STATE_VARIABLE_CI_68 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_67;
          *ll_backend__ite_gen__STATE_VARIABLE_CLD_70 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69;
        }
        break;
    }
  }
}

static MR_String MR_CALL 
ll_backend__ite_gen__wrap_transient_1_f_0(
  MR_String ll_backend__ite_gen__Code_3)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;
    MR_String ll_backend__ite_gen__HeadVar__2_2;
    MR_Word ll_backend__ite_gen__V_4_4;
    MR_Word ll_backend__ite_gen__V_6_6;

    {
      ll_backend__ite_gen__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_6_6, 0) = ((MR_Box) (ll_backend__ite_gen__Code_3));
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__ite_gen_scalar_common_1[2])));
    }
    {
      ll_backend__ite_gen__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_4_4, 0) = ((MR_Box) ((MR_String) "\t\tMR_save_transient_registers();\n"));
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_4_4, 1) = ((MR_Box) (ll_backend__ite_gen__V_6_6));
    }
    {
      ll_backend__ite_gen__HeadVar__2_2 = mercury__string__append_list_1_f_0(ll_backend__ite_gen__V_4_4);
    }
    return ll_backend__ite_gen__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(
  MR_Word ll_backend__ite_gen__Globals_6,
  MR_Word ll_backend__ite_gen__GoalInfo_7,
  MR_Word * ll_backend__ite_gen__PNegCondCode_8,
  MR_Word * ll_backend__ite_gen__PNegThenCode_9,
  MR_Word * ll_backend__ite_gen__PNegElseCode_10)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;
    MR_Word ll_backend__ite_gen__UseMinimalModelStackCopyPNeg_11;
    MR_Word ll_backend__ite_gen__V_21_21;

    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__ite_gen__Globals_6, (MR_Integer) 282, &ll_backend__ite_gen__UseMinimalModelStackCopyPNeg_11);
    }
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__UseMinimalModelStackCopyPNeg_11 == (MR_Integer) 1);
    if (ll_backend__ite_gen__succeeded)
      {
        ll_backend__ite_gen__V_21_21 = (MR_Integer) 16;
        {
          ll_backend__ite_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__ite_gen__GoalInfo_7, ll_backend__ite_gen__V_21_21);
        }
        ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
      }
    if (ll_backend__ite_gen__succeeded)
      {
        MR_Word ll_backend__ite_gen__TypeCtorInfo_90_90;
        MR_Word ll_backend__ite_gen__TypeCtorInfo_91_91;
        MR_Word ll_backend__ite_gen__Context_12;
        MR_String ll_backend__ite_gen__File_13;
        MR_Integer ll_backend__ite_gen__Line_14;
        MR_String ll_backend__ite_gen__CtxtStr_15;
        MR_Word ll_backend__ite_gen__PNegCondComponents_16;
        MR_Word ll_backend__ite_gen__PNegThenComponents_17;
        MR_Word ll_backend__ite_gen__PNegElseComponents_18;
        MR_Word ll_backend__ite_gen__V_30_30;
        MR_Word ll_backend__ite_gen__V_33_33;
        MR_Word ll_backend__ite_gen__V_34_34;
        MR_String ll_backend__ite_gen__V_35_35;
        MR_Word ll_backend__ite_gen__V_38_38;
        MR_Word ll_backend__ite_gen__V_41_41;
        MR_Word ll_backend__ite_gen__V_42_42;
        MR_String ll_backend__ite_gen__V_43_43;
        MR_Word ll_backend__ite_gen__V_46_46;
        MR_Word ll_backend__ite_gen__V_49_49;
        MR_Word ll_backend__ite_gen__V_50_50;
        MR_String ll_backend__ite_gen__V_51_51;
        MR_String ll_backend__ite_gen__V_52_52;
        MR_String ll_backend__ite_gen__V_54_54;
        MR_Word ll_backend__ite_gen__V_57_57;
        MR_Word ll_backend__ite_gen__V_58_58;
        MR_Word ll_backend__ite_gen__V_68_68;
        MR_Word ll_backend__ite_gen__V_69_69;
        MR_Word ll_backend__ite_gen__V_79_79;
        MR_Word ll_backend__ite_gen__V_80_80;
        MR_Integer ll_backend__ite_gen__V_22_22;

        {
          ll_backend__ite_gen__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__ite_gen__GoalInfo_7);
        }
        {
          mercury__term__context_file_2_p_0(ll_backend__ite_gen__Context_12, &ll_backend__ite_gen__File_13);
        }
        {
          mercury__term__context_line_2_p_0(ll_backend__ite_gen__Context_12, &ll_backend__ite_gen__Line_14);
        }
        ll_backend__ite_gen__succeeded = (strcmp(ll_backend__ite_gen__File_13, (MR_String) "") == 0);
        ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
        if (ll_backend__ite_gen__succeeded)
          {
            ll_backend__ite_gen__V_22_22 = (MR_Integer) 0;
            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__Line_14 > ll_backend__ite_gen__V_22_22);
          }
        if (ll_backend__ite_gen__succeeded)
          {
            MR_String ll_backend__ite_gen__V_24_24;
            MR_String ll_backend__ite_gen__V_25_25;
            MR_String ll_backend__ite_gen__V_27_27;
            MR_String ll_backend__ite_gen__V_28_28;

            {
              ll_backend__ite_gen__V_28_28 = mercury__string__int_to_string_1_f_0(ll_backend__ite_gen__Line_14);
            }
            {
              ll_backend__ite_gen__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__V_28_28, (MR_String) "\"");
            }
            {
              ll_backend__ite_gen__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) ":", ll_backend__ite_gen__V_27_27);
            }
            {
              ll_backend__ite_gen__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__File_13, ll_backend__ite_gen__V_25_25);
            }
            {
              ll_backend__ite_gen__CtxtStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__ite_gen__V_24_24);
            }
          }
        else
          ll_backend__ite_gen__CtxtStr_15 = (MR_String) "NULL";
        ll_backend__ite_gen__TypeCtorInfo_90_90 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
        {
          ll_backend__ite_gen__V_34_34 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeCtorInfo_90_90);
        }
        {
          ll_backend__ite_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_33_33, 0) = ((MR_Box) (ll_backend__ite_gen__V_34_34));
        }
        {
          ll_backend__ite_gen__V_35_35 = ll_backend__ite_gen__wrap_transient_1_f_0((MR_String) "\t\tMR_pneg_enter_cond();\n");
        }
        {
          ll_backend__ite_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 3) = ((MR_Box) (ll_backend__ite_gen__V_33_33));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 4) = ((MR_Box) (ll_backend__ite_gen__V_35_35));
        }
        {
          ll_backend__ite_gen__PNegCondComponents_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegCondComponents_16, 0) = ((MR_Box) (ll_backend__ite_gen__V_30_30));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegCondComponents_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__ite_gen__V_42_42 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeCtorInfo_90_90);
        }
        {
          ll_backend__ite_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_41_41, 0) = ((MR_Box) (ll_backend__ite_gen__V_42_42));
        }
        {
          ll_backend__ite_gen__V_43_43 = ll_backend__ite_gen__wrap_transient_1_f_0((MR_String) "\t\tMR_pneg_enter_then();\n");
        }
        {
          ll_backend__ite_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 3) = ((MR_Box) (ll_backend__ite_gen__V_41_41));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 4) = ((MR_Box) (ll_backend__ite_gen__V_43_43));
        }
        {
          ll_backend__ite_gen__PNegThenComponents_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegThenComponents_17, 0) = ((MR_Box) (ll_backend__ite_gen__V_38_38));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegThenComponents_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__ite_gen__V_50_50 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeCtorInfo_90_90);
        }
        {
          ll_backend__ite_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_49_49, 0) = ((MR_Box) (ll_backend__ite_gen__V_50_50));
        }
        {
          ll_backend__ite_gen__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__CtxtStr_15, (MR_String) ");\n");
        }
        {
          ll_backend__ite_gen__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_pneg_enter_else(", ll_backend__ite_gen__V_54_54);
        }
        {
          ll_backend__ite_gen__V_51_51 = ll_backend__ite_gen__wrap_transient_1_f_0(ll_backend__ite_gen__V_52_52);
        }
        {
          ll_backend__ite_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 3) = ((MR_Box) (ll_backend__ite_gen__V_49_49));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 4) = ((MR_Box) (ll_backend__ite_gen__V_51_51));
        }
        {
          ll_backend__ite_gen__PNegElseComponents_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegElseComponents_18, 0) = ((MR_Box) (ll_backend__ite_gen__V_46_46));
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegElseComponents_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ll_backend__ite_gen__TypeCtorInfo_91_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__ite_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 2) = ((MR_Box) (ll_backend__ite_gen__PNegCondComponents_16));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 3) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 9) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 10) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ll_backend__ite_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_57_57, 0) = ((MR_Box) (ll_backend__ite_gen__V_58_58));
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_57_57, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          *ll_backend__ite_gen__PNegCondCode_8 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__ite_gen__V_57_57)));
        }
        {
          ll_backend__ite_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 2) = ((MR_Box) (ll_backend__ite_gen__PNegThenComponents_17));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 3) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 9) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 10) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ll_backend__ite_gen__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_68_68, 0) = ((MR_Box) (ll_backend__ite_gen__V_69_69));
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_68_68, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          *ll_backend__ite_gen__PNegThenCode_9 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__ite_gen__V_68_68)));
        }
        {
          ll_backend__ite_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 2) = ((MR_Box) (ll_backend__ite_gen__PNegElseComponents_18));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 3) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 9) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 10) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ll_backend__ite_gen__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_79_79, 0) = ((MR_Box) (ll_backend__ite_gen__V_80_80));
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_79_79, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          *ll_backend__ite_gen__PNegElseCode_10 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__ite_gen__V_79_79)));
        }
      }
    else
      {
        MR_Word ll_backend__ite_gen__TypeCtorInfo_92_92 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

        {
          *ll_backend__ite_gen__PNegCondCode_8 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_92_92);
        }
        {
          *ll_backend__ite_gen__PNegThenCode_9 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_92_92);
        }
        {
          *ll_backend__ite_gen__PNegElseCode_10 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_92_92);
        }
      }
  }
}

static void MR_CALL 
ll_backend__ite_gen__read_and_erase_resume_point_5_p_0(
  MR_String ll_backend__ite_gen__CondStr_6,
  MR_Word * ll_backend__ite_gen__ResumeVars_7,
  MR_Word * ll_backend__ite_gen__ResumeLocs_8,
  MR_Word ll_backend__ite_gen__CondInfo0_9,
  MR_Word * ll_backend__ite_gen__CondInfo_10)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;
    MR_Word ll_backend__ite_gen__Resume_11;

    {
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__ite_gen__CondInfo0_9, &ll_backend__ite_gen__Resume_11);
    }
    if ((ll_backend__ite_gen__Resume_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String ll_backend__ite_gen__Msg_12;

        {
          ll_backend__ite_gen__Msg_12 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__CondStr_6, (MR_String) " has no resume point");
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.read_and_erase_resume_point\'/5", ll_backend__ite_gen__Msg_12);
          return;
        }
      }
    else
      {
        *ll_backend__ite_gen__ResumeVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_11, (MR_Integer) 0)));
        *ll_backend__ite_gen__ResumeLocs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_11, (MR_Integer) 1)));
        {
          hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ite_gen__CondInfo0_9, ll_backend__ite_gen__CondInfo_10);
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0_1(
  MR_Box ll_backend__ite_gen__closure_arg)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;
    MR_Box ll_backend__ite_gen__closure = ll_backend__ite_gen__closure_arg;

    {
      ll_backend__ite_gen__succeeded = ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__389__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__ite_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0(
  MR_Word ll_backend__ite_gen__CodeModel_11,
  MR_Word ll_backend__ite_gen__Goal_12,
  MR_Word ll_backend__ite_gen__NotGoalInfo_13,
  MR_Word ll_backend__ite_gen__ResumeVars_14,
  MR_Word ll_backend__ite_gen__ResumeLocs_15,
  MR_Word * ll_backend__ite_gen__Code_16,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_60,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_61,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_62,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_63)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;
    MR_Word ll_backend__ite_gen__TypeCtorInfo_137_137 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word ll_backend__ite_gen__TypeCtorInfo_140_140;
    MR_Word ll_backend__ite_gen__ResumeMap_19;
    MR_Word ll_backend__ite_gen__FlushCode_20;
    MR_Word ll_backend__ite_gen__Globals_21;
    MR_Word ll_backend__ite_gen__ReclaimHeapOnFailure_22;
    MR_Word ll_backend__ite_gen__ReclaimHeap_23;
    MR_Word ll_backend__ite_gen__SaveHpCode_24;
    MR_Word ll_backend__ite_gen__MaybeHpSlot_25;
    MR_Word ll_backend__ite_gen__AddTrailOps_26;
    MR_Word ll_backend__ite_gen__SaveTicketCode_27;
    MR_Word ll_backend__ite_gen__MaybeTicketSlot_28;
    MR_Word ll_backend__ite_gen__IteRegionOps_30;
    MR_Word ll_backend__ite_gen__GoalInfo_32;
    MR_Word ll_backend__ite_gen__CondGoals_33;
    MR_Word ll_backend__ite_gen__RegionCondCode_34;
    MR_Word ll_backend__ite_gen__RegionThenCode_35;
    MR_Word ll_backend__ite_gen__RegionElseCode_36;
    MR_Word ll_backend__ite_gen__RegionStackVars_37;
    MR_Word ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38;
    MR_Word ll_backend__ite_gen__HijackInfo_39;
    MR_Word ll_backend__ite_gen__PrepareHijackCode_40;
    MR_Word ll_backend__ite_gen__ResumePoint_41;
    MR_Word ll_backend__ite_gen__EffectResumeCode_42;
    MR_Word ll_backend__ite_gen__EnterTraceCode_43;
    MR_Word ll_backend__ite_gen__GoalCode_44;
    MR_Word ll_backend__ite_gen__ThenNeckCode_45;
    MR_Word ll_backend__ite_gen__ElseNeckCode_46;
    MR_Word ll_backend__ite_gen__Zombies_47;
    MR_Word ll_backend__ite_gen__LiveVars_48;
    MR_Word ll_backend__ite_gen__PruneTicketCode_49;
    MR_Word ll_backend__ite_gen__FailTraceCode_50;
    MR_Word ll_backend__ite_gen__FailCode_51;
    MR_Word ll_backend__ite_gen__ResumeCode_53;
    MR_Word ll_backend__ite_gen__RestoreHpCode_54;
    MR_Word ll_backend__ite_gen__RestoreTicketCode_55;
    MR_Word ll_backend__ite_gen__SuccessTraceCode_56;
    MR_Word ll_backend__ite_gen__PNegCondCode_57;
    MR_Word ll_backend__ite_gen__PNegThenCode_58;
    MR_Word ll_backend__ite_gen__PNegElseCode_59;
    MR_Word ll_backend__ite_gen__V_64_64;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_65_65;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_67_67;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_68_68;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_69_69;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_70_70;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_72_72;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_73_73;
    MR_Word ll_backend__ite_gen__V_74_74;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_79_79;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_80_80;
    MR_Word ll_backend__ite_gen__V_81_81;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_82_82;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_83_83;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_84_84;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_87_87;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_89_89;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_90_90;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_101_101;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_102_102;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_103_103;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_104_104;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_106_106;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_109_109;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_110_110;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_112_112;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_113_113;
    MR_Word ll_backend__ite_gen__V_117_117;
    MR_Word ll_backend__ite_gen__V_118_118;
    MR_Word ll_backend__ite_gen__V_119_119;
    MR_Word ll_backend__ite_gen__V_120_120;
    MR_Word ll_backend__ite_gen__V_121_121;
    MR_Word ll_backend__ite_gen__V_122_122;
    MR_Word ll_backend__ite_gen__V_123_123;
    MR_Word ll_backend__ite_gen__V_124_124;
    MR_Word ll_backend__ite_gen__V_125_125;
    MR_Word ll_backend__ite_gen__V_126_126;
    MR_Word ll_backend__ite_gen__V_127_127;
    MR_Word ll_backend__ite_gen__V_128_128;
    MR_Word ll_backend__ite_gen__V_129_129;
    MR_Word ll_backend__ite_gen__V_130_130;
    MR_Word ll_backend__ite_gen__V_131_131;
    MR_Word ll_backend__ite_gen__V_132_132;
    MR_Word ll_backend__ite_gen__V_133_133;
    MR_Word ll_backend__ite_gen__V_134_134;
    MR_Word ll_backend__ite_gen__V_135_135;
    MR_Word ll_backend__ite_gen__V_136_136;
    MR_Word ll_backend__ite_gen__V_31_31;

    {
      ll_backend__ite_gen__V_64_64 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_137_137, ll_backend__ite_gen__ResumeVars_14);
    }
    {
      ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__ite_gen__V_64_64, &ll_backend__ite_gen__ResumeMap_19, &ll_backend__ite_gen__FlushCode_20, ll_backend__ite_gen__STATE_VARIABLE_CI_0_60, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__ite_gen__STATE_VARIABLE_CLD_65_65);
    }
    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_60, &ll_backend__ite_gen__Globals_21);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__ite_gen__Globals_21, (MR_Integer) 302, &ll_backend__ite_gen__ReclaimHeapOnFailure_22);
    }
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__ReclaimHeapOnFailure_22 == (MR_Integer) 1);
    if (ll_backend__ite_gen__succeeded)
      {
        ll_backend__ite_gen__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ll_backend__ite_gen__Goal_12);
      }
    if (ll_backend__ite_gen__succeeded)
      ll_backend__ite_gen__ReclaimHeap_23 = (MR_Integer) 1;
    else
      ll_backend__ite_gen__ReclaimHeap_23 = (MR_Integer) 0;
    {
      ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__ite_gen__ReclaimHeap_23, &ll_backend__ite_gen__SaveHpCode_24, &ll_backend__ite_gen__MaybeHpSlot_25, ll_backend__ite_gen__STATE_VARIABLE_CI_0_60, &ll_backend__ite_gen__STATE_VARIABLE_CI_67_67, ll_backend__ite_gen__STATE_VARIABLE_CLD_65_65, &ll_backend__ite_gen__STATE_VARIABLE_CLD_68_68);
    }
    {
      ll_backend__ite_gen__AddTrailOps_26 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_67_67, ll_backend__ite_gen__NotGoalInfo_13);
    }
    {
      ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__ite_gen__AddTrailOps_26, &ll_backend__ite_gen__SaveTicketCode_27, &ll_backend__ite_gen__MaybeTicketSlot_28, ll_backend__ite_gen__STATE_VARIABLE_CI_67_67, &ll_backend__ite_gen__STATE_VARIABLE_CI_69_69, ll_backend__ite_gen__STATE_VARIABLE_CLD_68_68, &ll_backend__ite_gen__STATE_VARIABLE_CLD_70_70);
    }
    {
      ll_backend__ite_gen__IteRegionOps_30 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_69_69, ll_backend__ite_gen__NotGoalInfo_13);
    }
    ll_backend__ite_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_12, (MR_Integer) 0)));
    ll_backend__ite_gen__GoalInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_12, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__ite_gen__Goal_12, &ll_backend__ite_gen__CondGoals_33);
    }
    {
      ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(ll_backend__ite_gen__IteRegionOps_30, ll_backend__ite_gen__GoalInfo_32, ll_backend__ite_gen__CondGoals_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__ite_gen__RegionCondCode_34, &ll_backend__ite_gen__RegionThenCode_35, &ll_backend__ite_gen__RegionElseCode_36, &ll_backend__ite_gen__RegionStackVars_37, &ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38, ll_backend__ite_gen__STATE_VARIABLE_CI_69_69, &ll_backend__ite_gen__STATE_VARIABLE_CI_72_72, ll_backend__ite_gen__STATE_VARIABLE_CLD_70_70, &ll_backend__ite_gen__STATE_VARIABLE_CLD_73_73);
    }
    {
      ll_backend__ite_gen__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 0) = ((MR_Box) (&ll_backend__ite_gen_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 1) = ((MR_Box) (ll_backend__ite_gen__generate_negation_general_10_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 3) = ((MR_Box) (ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38));
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__ite_gen__V_74_74, (MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.generate_negation_general\'/10", (MR_String) "MaybeRegionSuccRecordSlot = yes(_)");
    }
    {
      ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0(ll_backend__ite_gen__CodeModel_11, ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38, &ll_backend__ite_gen__HijackInfo_39, &ll_backend__ite_gen__PrepareHijackCode_40, ll_backend__ite_gen__STATE_VARIABLE_CI_72_72, &ll_backend__ite_gen__STATE_VARIABLE_CI_79_79, ll_backend__ite_gen__STATE_VARIABLE_CLD_73_73, &ll_backend__ite_gen__STATE_VARIABLE_CLD_80_80);
    }
    {
      ll_backend__ite_gen__V_81_81 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_137_137, ll_backend__ite_gen__ResumeVars_14);
    }
    {
      ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__ite_gen__V_81_81, ll_backend__ite_gen__ResumeLocs_15, ll_backend__ite_gen__ResumeMap_19, &ll_backend__ite_gen__ResumePoint_41, ll_backend__ite_gen__STATE_VARIABLE_CI_79_79, &ll_backend__ite_gen__STATE_VARIABLE_CI_82_82);
    }
    {
      ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__ite_gen__ResumePoint_41, ll_backend__ite_gen__CodeModel_11, &ll_backend__ite_gen__EffectResumeCode_42, ll_backend__ite_gen__STATE_VARIABLE_CLD_80_80, &ll_backend__ite_gen__STATE_VARIABLE_CLD_83_83);
    }
    {
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__ite_gen__Goal_12, ll_backend__ite_gen__NotGoalInfo_13, &ll_backend__ite_gen__EnterTraceCode_43, ll_backend__ite_gen__STATE_VARIABLE_CI_82_82, &ll_backend__ite_gen__STATE_VARIABLE_CI_84_84, ll_backend__ite_gen__STATE_VARIABLE_CLD_83_83, &ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, ll_backend__ite_gen__Goal_12, &ll_backend__ite_gen__GoalCode_44, ll_backend__ite_gen__STATE_VARIABLE_CI_84_84, &ll_backend__ite_gen__STATE_VARIABLE_CI_87_87, ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85, &ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88);
    }
    {
      ll_backend__code_loc_dep__ite_enter_then_8_p_0(ll_backend__ite_gen__HijackInfo_39, ll_backend__ite_gen__ResumePoint_41, &ll_backend__ite_gen__ThenNeckCode_45, &ll_backend__ite_gen__ElseNeckCode_46, ll_backend__ite_gen__STATE_VARIABLE_CI_87_87, &ll_backend__ite_gen__STATE_VARIABLE_CI_89_89, ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88, &ll_backend__ite_gen__STATE_VARIABLE_CLD_90_90);
    }
    {
      ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__ite_gen__Zombies_47, ll_backend__ite_gen__STATE_VARIABLE_CLD_90_90, &ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91);
    }
    {
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__ite_gen__Zombies_47, ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91, &ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92);
    }
    {
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__ite_gen__LiveVars_48);
    }
    switch (ll_backend__ite_gen__CodeModel_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__ite_gen__TypeCtorInfo_139_139 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

          {
            ll_backend__ite_gen__PruneTicketCode_49 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_139_139);
          }
          {
            ll_backend__ite_gen__FailTraceCode_50 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_139_139);
          }
          {
            ll_backend__ite_gen__FailCode_51 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_139_139);
          }
          ll_backend__ite_gen__STATE_VARIABLE_CI_101_101 = ll_backend__ite_gen__STATE_VARIABLE_CI_89_89;
          ll_backend__ite_gen__STATE_VARIABLE_CLD_102_102 = ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__ite_gen__AfterNegatedGoal_52;
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_93_93;
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94;
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_96_96;
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_97_97;
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_99_99;
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_100_100;

          {
            ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__ite_gen__AfterNegatedGoal_52);
          }
          {
            ll_backend__code_loc_dep__maybe_release_hp_5_p_0(ll_backend__ite_gen__MaybeHpSlot_25, ll_backend__ite_gen__STATE_VARIABLE_CI_89_89, &ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94);
          }
          {
            ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(ll_backend__ite_gen__MaybeTicketSlot_28, (MR_Integer) 1, &ll_backend__ite_gen__PruneTicketCode_49, ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, &ll_backend__ite_gen__STATE_VARIABLE_CI_96_96, ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__ite_gen__STATE_VARIABLE_CLD_97_97);
          }
          {
            ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(ll_backend__ite_gen__Goal_12, ll_backend__ite_gen__NotGoalInfo_13, (MR_Integer) 1, &ll_backend__ite_gen__FailTraceCode_50, ll_backend__ite_gen__STATE_VARIABLE_CI_96_96, &ll_backend__ite_gen__STATE_VARIABLE_CI_99_99, ll_backend__ite_gen__STATE_VARIABLE_CLD_97_97, &ll_backend__ite_gen__STATE_VARIABLE_CLD_100_100);
          }
          {
            ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__ite_gen__FailCode_51, ll_backend__ite_gen__STATE_VARIABLE_CI_99_99, &ll_backend__ite_gen__STATE_VARIABLE_CI_101_101, ll_backend__ite_gen__STATE_VARIABLE_CLD_100_100);
          }
          {
            ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__ite_gen__AfterNegatedGoal_52, ll_backend__ite_gen__STATE_VARIABLE_CI_101_101, &ll_backend__ite_gen__STATE_VARIABLE_CLD_102_102);
          }
        }
        break;
    }
    {
      ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__ite_gen__ResumePoint_41, &ll_backend__ite_gen__ResumeCode_53, ll_backend__ite_gen__STATE_VARIABLE_CI_101_101, &ll_backend__ite_gen__STATE_VARIABLE_CI_103_103, ll_backend__ite_gen__STATE_VARIABLE_CLD_102_102, &ll_backend__ite_gen__STATE_VARIABLE_CLD_104_104);
    }
    {
      ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__ite_gen__LiveVars_48, ll_backend__ite_gen__STATE_VARIABLE_CLD_104_104, &ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105);
    }
    {
      ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(ll_backend__ite_gen__MaybeHpSlot_25, &ll_backend__ite_gen__RestoreHpCode_54, ll_backend__ite_gen__STATE_VARIABLE_CI_103_103, &ll_backend__ite_gen__STATE_VARIABLE_CI_106_106, ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105, &ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107);
    }
    {
      ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(ll_backend__ite_gen__MaybeTicketSlot_28, (MR_Integer) 0, &ll_backend__ite_gen__RestoreTicketCode_55, ll_backend__ite_gen__STATE_VARIABLE_CI_106_106, &ll_backend__ite_gen__STATE_VARIABLE_CI_109_109, ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107, &ll_backend__ite_gen__STATE_VARIABLE_CLD_110_110);
    }
    {
      ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__ite_gen__RegionStackVars_37, (MR_Integer) 1, ll_backend__ite_gen__STATE_VARIABLE_CI_109_109, &ll_backend__ite_gen__STATE_VARIABLE_CI_112_112, ll_backend__ite_gen__STATE_VARIABLE_CLD_110_110, &ll_backend__ite_gen__STATE_VARIABLE_CLD_113_113);
    }
    {
      ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(ll_backend__ite_gen__Goal_12, ll_backend__ite_gen__NotGoalInfo_13, (MR_Integer) 0, &ll_backend__ite_gen__SuccessTraceCode_56, ll_backend__ite_gen__STATE_VARIABLE_CI_112_112, ll_backend__ite_gen__STATE_VARIABLE_CI_61, ll_backend__ite_gen__STATE_VARIABLE_CLD_113_113, ll_backend__ite_gen__STATE_VARIABLE_CLD_63);
    }
    {
      ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(ll_backend__ite_gen__Globals_21, ll_backend__ite_gen__NotGoalInfo_13, &ll_backend__ite_gen__PNegCondCode_57, &ll_backend__ite_gen__PNegThenCode_58, &ll_backend__ite_gen__PNegElseCode_59);
    }
    ll_backend__ite_gen__TypeCtorInfo_140_140 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__ite_gen__V_136_136 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__SuccessTraceCode_56, ll_backend__ite_gen__PNegElseCode_59);
    }
    {
      ll_backend__ite_gen__V_135_135 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RegionElseCode_36, ll_backend__ite_gen__V_136_136);
    }
    {
      ll_backend__ite_gen__V_134_134 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RestoreHpCode_54, ll_backend__ite_gen__V_135_135);
    }
    {
      ll_backend__ite_gen__V_133_133 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RestoreTicketCode_55, ll_backend__ite_gen__V_134_134);
    }
    {
      ll_backend__ite_gen__V_132_132 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__ElseNeckCode_46, ll_backend__ite_gen__V_133_133);
    }
    {
      ll_backend__ite_gen__V_131_131 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__ResumeCode_53, ll_backend__ite_gen__V_132_132);
    }
    {
      ll_backend__ite_gen__V_130_130 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__FailCode_51, ll_backend__ite_gen__V_131_131);
    }
    {
      ll_backend__ite_gen__V_129_129 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__PNegThenCode_58, ll_backend__ite_gen__V_130_130);
    }
    {
      ll_backend__ite_gen__V_128_128 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__FailTraceCode_50, ll_backend__ite_gen__V_129_129);
    }
    {
      ll_backend__ite_gen__V_127_127 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RegionThenCode_35, ll_backend__ite_gen__V_128_128);
    }
    {
      ll_backend__ite_gen__V_126_126 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__PruneTicketCode_49, ll_backend__ite_gen__V_127_127);
    }
    {
      ll_backend__ite_gen__V_125_125 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__ThenNeckCode_45, ll_backend__ite_gen__V_126_126);
    }
    {
      ll_backend__ite_gen__V_124_124 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__GoalCode_44, ll_backend__ite_gen__V_125_125);
    }
    {
      ll_backend__ite_gen__V_123_123 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__PNegCondCode_57, ll_backend__ite_gen__V_124_124);
    }
    {
      ll_backend__ite_gen__V_122_122 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__EnterTraceCode_43, ll_backend__ite_gen__V_123_123);
    }
    {
      ll_backend__ite_gen__V_121_121 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RegionCondCode_34, ll_backend__ite_gen__V_122_122);
    }
    {
      ll_backend__ite_gen__V_120_120 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__SaveTicketCode_27, ll_backend__ite_gen__V_121_121);
    }
    {
      ll_backend__ite_gen__V_119_119 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__SaveHpCode_24, ll_backend__ite_gen__V_120_120);
    }
    {
      ll_backend__ite_gen__V_118_118 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__EffectResumeCode_42, ll_backend__ite_gen__V_119_119);
    }
    {
      ll_backend__ite_gen__V_117_117 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__PrepareHijackCode_40, ll_backend__ite_gen__V_118_118);
    }
    {
      *ll_backend__ite_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__FlushCode_20, ll_backend__ite_gen__V_117_117);
    }
  }
}

void MR_CALL 
ll_backend__ite_gen__generate_negation_8_p_0(
  MR_Word ll_backend__ite_gen__CodeModel_9,
  MR_Word ll_backend__ite_gen__Goal0_10,
  MR_Word ll_backend__ite_gen__NotGoalInfo_11,
  MR_Word * ll_backend__ite_gen__Code_12,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_37,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_38,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_39,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_40)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;
    MR_Word ll_backend__ite_gen__GoalExpr_15;
    MR_Word ll_backend__ite_gen__GoalInfo0_16;
    MR_Word ll_backend__ite_gen__ResumeVars_17;
    MR_Word ll_backend__ite_gen__ResumeLocs_18;
    MR_Word ll_backend__ite_gen__GoalInfo_19;
    MR_Word ll_backend__ite_gen__Goal_20;
    MR_Word ll_backend__ite_gen__Resume_69;
    MR_Word ll_backend__ite_gen__L_24;
    MR_Word ll_backend__ite_gen__R_25;
    MR_Word ll_backend__ite_gen__CodeAddr_27;
    MR_Word ll_backend__ite_gen__Globals_28;
    MR_Word ll_backend__ite_gen__V_45_45;
    MR_Word ll_backend__ite_gen__V_46_46;
    MR_Word ll_backend__ite_gen__V_47_47;
    MR_Word ll_backend__ite_gen__V_21_21;
    MR_Word ll_backend__ite_gen__V_22_22;
    MR_Word ll_backend__ite_gen__V_23_23;
    MR_Word ll_backend__ite_gen__V_26_26;

    switch (ll_backend__ite_gen__CodeModel_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.generate_negation\'/8", (MR_String) "nondet negation");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    ll_backend__ite_gen__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal0_10, (MR_Integer) 0)));
    ll_backend__ite_gen__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal0_10, (MR_Integer) 1)));
    {
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__ite_gen__GoalInfo0_16, &ll_backend__ite_gen__Resume_69);
    }
    if ((ll_backend__ite_gen__Resume_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.read_and_erase_resume_point\'/5", (MR_String) "negated goal has no resume point");
          return;
        }
      }
    else
      {
        ll_backend__ite_gen__ResumeVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_69, (MR_Integer) 0)));
        ll_backend__ite_gen__ResumeLocs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_69, (MR_Integer) 1)));
        {
          hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ite_gen__GoalInfo0_16, &ll_backend__ite_gen__GoalInfo_19);
        }
      }
    {
      ll_backend__ite_gen__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_20, 0) = ((MR_Box) (ll_backend__ite_gen__GoalExpr_15));
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_20, 1) = ((MR_Box) (ll_backend__ite_gen__GoalInfo_19));
    }
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CodeModel_9 == (MR_Integer) 1);
    if (ll_backend__ite_gen__succeeded)
      {
        ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__GoalExpr_15)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__ite_gen__succeeded)
          {
            ll_backend__ite_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 0)));
            ll_backend__ite_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 1)));
            ll_backend__ite_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 2)));
            ll_backend__ite_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 3)));
            ll_backend__ite_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 4)));
            ll_backend__ite_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__ite_gen__V_45_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_45_45, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ll_backend__ite_gen__succeeded)
              {
                ll_backend__ite_gen__L_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_45_45, (MR_Integer) 1)));
                ll_backend__ite_gen__R_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_45_45, (MR_Integer) 2)));
                {
                  ll_backend__ite_gen__succeeded = ll_backend__code_loc_dep__failure_is_direct_branch_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_0_39, &ll_backend__ite_gen__CodeAddr_27);
                }
                if (ll_backend__ite_gen__succeeded)
                  {
                    {
                      ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, &ll_backend__ite_gen__Globals_28);
                    }
                    ll_backend__ite_gen__V_46_46 = (MR_Integer) 449;
                    ll_backend__ite_gen__V_47_47 = (MR_Integer) 1;
                    {
                      ll_backend__ite_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__ite_gen__Globals_28, ll_backend__ite_gen__V_46_46, ll_backend__ite_gen__V_47_47);
                    }
                  }
              }
          }
      }
    if (ll_backend__ite_gen__succeeded)
      {
        MR_Word ll_backend__ite_gen__TypeCtorInfo_63_63;
        MR_Word ll_backend__ite_gen__SimpleNeg_29;
        MR_Word ll_backend__ite_gen__CodeL_30;
        MR_Word ll_backend__ite_gen__ValL_31;
        MR_Word ll_backend__ite_gen__CodeR_32;
        MR_Word ll_backend__ite_gen__ValR_33;
        MR_Word ll_backend__ite_gen__Type_34;
        MR_Word ll_backend__ite_gen__Op_35;
        MR_Word ll_backend__ite_gen__TestCode_36;
        MR_Word ll_backend__ite_gen__V_48_48;
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_49_49;
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_50_50;
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_51_51;
        MR_Word ll_backend__ite_gen__V_54_54;
        MR_Word ll_backend__ite_gen__V_55_55;
        MR_Word ll_backend__ite_gen__V_56_56;
        MR_Word ll_backend__ite_gen__V_59_59;
        MR_Word ll_backend__ite_gen__V_52_52;

        {
          ll_backend__ite_gen__V_48_48 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__ite_gen__ResumeVars_17);
        }
        {
          ll_backend__code_loc_dep__enter_simple_neg_5_p_0(ll_backend__ite_gen__V_48_48, ll_backend__ite_gen__GoalInfo_19, &ll_backend__ite_gen__SimpleNeg_29, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_39, &ll_backend__ite_gen__STATE_VARIABLE_CLD_49_49);
        }
        {
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__ite_gen__L_24, &ll_backend__ite_gen__CodeL_30, &ll_backend__ite_gen__ValL_31, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__STATE_VARIABLE_CLD_49_49, &ll_backend__ite_gen__STATE_VARIABLE_CLD_50_50);
        }
        {
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__ite_gen__R_25, &ll_backend__ite_gen__CodeR_32, &ll_backend__ite_gen__ValR_33, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__STATE_VARIABLE_CLD_50_50, &ll_backend__ite_gen__STATE_VARIABLE_CLD_51_51);
        }
        {
          ll_backend__ite_gen__Type_34 = ll_backend__code_info__variable_type_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__L_24);
        }
        ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__Type_34)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__ite_gen__succeeded)
          {
            ll_backend__ite_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__Type_34, (MR_Integer) 0)));
            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_52_52 == (MR_Integer) 2);
          }
        if (ll_backend__ite_gen__succeeded)
          ll_backend__ite_gen__Op_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
        else
          {
            MR_Word ll_backend__ite_gen__V_53_53;

            ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__Type_34)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__ite_gen__succeeded)
              {
                ll_backend__ite_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__Type_34, (MR_Integer) 0)));
                ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_53_53 == (MR_Integer) 1);
              }
            if (ll_backend__ite_gen__succeeded)
              ll_backend__ite_gen__Op_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32));
            else
              ll_backend__ite_gen__Op_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
          }
        ll_backend__ite_gen__TypeCtorInfo_63_63 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__ite_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 1) = ((MR_Box) (ll_backend__ite_gen__Op_35));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 2) = ((MR_Box) (ll_backend__ite_gen__ValL_31));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 3) = ((MR_Box) (ll_backend__ite_gen__ValR_33));
        }
        {
          ll_backend__ite_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_55_55, 1) = ((MR_Box) (ll_backend__ite_gen__V_56_56));
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_55_55, 2) = ((MR_Box) (ll_backend__ite_gen__CodeAddr_27));
        }
        {
          ll_backend__ite_gen__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_54_54, 0) = ((MR_Box) (ll_backend__ite_gen__V_55_55));
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_54_54, 1) = ((MR_Box) ((MR_String) "test inequality"));
        }
        {
          ll_backend__ite_gen__TestCode_36 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_63_63, ((MR_Box) (ll_backend__ite_gen__V_54_54)));
        }
        {
          ll_backend__code_loc_dep__leave_simple_neg_5_p_0(ll_backend__ite_gen__GoalInfo_19, ll_backend__ite_gen__SimpleNeg_29, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__STATE_VARIABLE_CLD_51_51, ll_backend__ite_gen__STATE_VARIABLE_CLD_40);
        }
        {
          ll_backend__ite_gen__V_59_59 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_63_63, ll_backend__ite_gen__CodeR_32, ll_backend__ite_gen__TestCode_36);
        }
        {
          *ll_backend__ite_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_63_63, ll_backend__ite_gen__CodeL_30, ll_backend__ite_gen__V_59_59);
        }
        *ll_backend__ite_gen__STATE_VARIABLE_CI_38 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_37;
      }
    else
      {
        ll_backend__ite_gen__generate_negation_general_10_p_0(ll_backend__ite_gen__CodeModel_9, ll_backend__ite_gen__Goal_20, ll_backend__ite_gen__NotGoalInfo_11, ll_backend__ite_gen__ResumeVars_17, ll_backend__ite_gen__ResumeLocs_18, ll_backend__ite_gen__Code_12, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__STATE_VARIABLE_CI_38, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_39, ll_backend__ite_gen__STATE_VARIABLE_CLD_40);
      }
  }
}

void MR_CALL 
ll_backend__ite_gen__generate_ite_10_p_0(
  MR_Word ll_backend__ite_gen__CodeModel_11,
  MR_Word ll_backend__ite_gen__CondGoal0_12,
  MR_Word ll_backend__ite_gen__ThenGoal_13,
  MR_Word ll_backend__ite_gen__ElseGoal_14,
  MR_Word ll_backend__ite_gen__IteGoalInfo_15,
  MR_Word * ll_backend__ite_gen__Code_16,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_82,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_83,
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_84,
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_85)
{
  {
    MR_bool ll_backend__ite_gen__succeeded;
    MR_Word ll_backend__ite_gen__TypeCtorInfo_182_182;
    MR_Word ll_backend__ite_gen__TypeCtorInfo_188_188;
    MR_Word ll_backend__ite_gen__CondExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal0_12, (MR_Integer) 0)));
    MR_Word ll_backend__ite_gen__CondInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal0_12, (MR_Integer) 1)));
    MR_Word ll_backend__ite_gen__CondCodeModel_21;
    MR_Word ll_backend__ite_gen__EffCodeModel_22;
    MR_Word ll_backend__ite_gen__ResumeVars_23;
    MR_Word ll_backend__ite_gen__ResumeLocs_24;
    MR_Word ll_backend__ite_gen__CondInfo_25;
    MR_Word ll_backend__ite_gen__CondGoal_26;
    MR_Word ll_backend__ite_gen__ResumeMap_27;
    MR_Word ll_backend__ite_gen__FlushCode_28;
    MR_Word ll_backend__ite_gen__Globals_29;
    MR_Word ll_backend__ite_gen__ReclaimOption_30;
    MR_Word ll_backend__ite_gen__ReclaimHeap_31;
    MR_Word ll_backend__ite_gen__SaveHpCode_32;
    MR_Word ll_backend__ite_gen__MaybeHpSlot_33;
    MR_Word ll_backend__ite_gen__AddTrailOps_34;
    MR_Word ll_backend__ite_gen__IteTrailOps_35;
    MR_Word ll_backend__ite_gen__SaveTicketCode_37;
    MR_Word ll_backend__ite_gen__MaybeTicketSlot_38;
    MR_Word ll_backend__ite_gen__IteRegionOps_40;
    MR_Word ll_backend__ite_gen__ElseGoals_41;
    MR_Word ll_backend__ite_gen__CondGoals_42;
    MR_Word ll_backend__ite_gen__RegionCondCode_43;
    MR_Word ll_backend__ite_gen__RegionThenCode_44;
    MR_Word ll_backend__ite_gen__RegionElseCode_45;
    MR_Word ll_backend__ite_gen__RegionStackVars_46;
    MR_Word ll_backend__ite_gen__MaybeEmbeddedStackFrameId_47;
    MR_Word ll_backend__ite_gen__BranchStart_48;
    MR_Word ll_backend__ite_gen__HijackInfo_49;
    MR_Word ll_backend__ite_gen__PrepareHijackCode_50;
    MR_Word ll_backend__ite_gen__ResumePoint_51;
    MR_Word ll_backend__ite_gen__EffectResumeCode_52;
    MR_Word ll_backend__ite_gen__CondTraceCode_53;
    MR_Word ll_backend__ite_gen__CondCode_54;
    MR_Word ll_backend__ite_gen__ThenNeckCode_55;
    MR_Word ll_backend__ite_gen__ElseNeckCode_56;
    MR_Word ll_backend__ite_gen__Zombies_57;
    MR_Word ll_backend__ite_gen__ResetTicketCode_58;
    MR_Word ll_backend__ite_gen__StoreMap_59;
    MR_Word ll_backend__ite_gen__EndCondInstMap_60;
    MR_Word ll_backend__ite_gen__ThenTraceCode_61;
    MR_Word ll_backend__ite_gen__ThenCode_62;
    MR_Word ll_backend__ite_gen__BranchEndStoreMap_63;
    MR_Word ll_backend__ite_gen__MaybeEnd0_64;
    MR_Word ll_backend__ite_gen__ThenSaveCode_65;
    MR_Word ll_backend__ite_gen__ResumeCode_66;
    MR_Word ll_backend__ite_gen__RestoreHpCode_69;
    MR_Word ll_backend__ite_gen__RestoreTicketCode_70;
    MR_Word ll_backend__ite_gen__ElseTraceCode_71;
    MR_Word ll_backend__ite_gen__ElseCode_72;
    MR_Word ll_backend__ite_gen__MaybeEnd_73;
    MR_Word ll_backend__ite_gen__ElseSaveCode_74;
    MR_Word ll_backend__ite_gen__EndLabel_76;
    MR_Word ll_backend__ite_gen__JumpToEndCode_77;
    MR_Word ll_backend__ite_gen__EndLabelCode_78;
    MR_Word ll_backend__ite_gen__PNegCondCode_79;
    MR_Word ll_backend__ite_gen__PNegThenCode_80;
    MR_Word ll_backend__ite_gen__PNegElseCode_81;
    MR_Word ll_backend__ite_gen__V_87_87;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_90_90;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_93_93;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_95_95;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_96_96;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_97_97;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_98_98;
    MR_Word ll_backend__ite_gen__V_99_99;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_100_100;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_101_101;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_102_102;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_103_103;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_104_104;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_106_106;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_108_108;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_109_109;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_116_116;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_121_121;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_122_122;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_124_124;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_125_125;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_126_126;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_133_133;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_136_136;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_137_137;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_138_138;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_139_139;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_140_140;
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_141_141;
    MR_Word ll_backend__ite_gen__V_149_149;
    MR_Word ll_backend__ite_gen__V_150_150;
    MR_Word ll_backend__ite_gen__V_151_151;
    MR_Word ll_backend__ite_gen__V_153_153;
    MR_Word ll_backend__ite_gen__V_154_154;
    MR_Word ll_backend__ite_gen__V_156_156;
    MR_Word ll_backend__ite_gen__V_157_157;
    MR_Word ll_backend__ite_gen__V_158_158;
    MR_Word ll_backend__ite_gen__V_159_159;
    MR_Word ll_backend__ite_gen__V_160_160;
    MR_Word ll_backend__ite_gen__V_161_161;
    MR_Word ll_backend__ite_gen__V_162_162;
    MR_Word ll_backend__ite_gen__V_163_163;
    MR_Word ll_backend__ite_gen__V_164_164;
    MR_Word ll_backend__ite_gen__V_165_165;
    MR_Word ll_backend__ite_gen__V_166_166;
    MR_Word ll_backend__ite_gen__V_167_167;
    MR_Word ll_backend__ite_gen__V_168_168;
    MR_Word ll_backend__ite_gen__V_169_169;
    MR_Word ll_backend__ite_gen__V_170_170;
    MR_Word ll_backend__ite_gen__V_171_171;
    MR_Word ll_backend__ite_gen__V_172_172;
    MR_Word ll_backend__ite_gen__V_173_173;
    MR_Word ll_backend__ite_gen__V_174_174;
    MR_Word ll_backend__ite_gen__V_175_175;
    MR_Word ll_backend__ite_gen__V_176_176;
    MR_Word ll_backend__ite_gen__V_177_177;
    MR_Word ll_backend__ite_gen__V_178_178;
    MR_Word ll_backend__ite_gen__V_179_179;
    MR_Word ll_backend__ite_gen__V_180_180;

    {
      ll_backend__ite_gen__CondCodeModel_21 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__ite_gen__CondInfo0_20);
    }
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CodeModel_11 == (MR_Integer) 2);
    if (ll_backend__ite_gen__succeeded)
      {
        ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CondCodeModel_21 == (MR_Integer) 2);
        ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
      }
    if (ll_backend__ite_gen__succeeded)
      ll_backend__ite_gen__EffCodeModel_22 = (MR_Integer) 1;
    else
      ll_backend__ite_gen__EffCodeModel_22 = ll_backend__ite_gen__CodeModel_11;
    {
      ll_backend__ite_gen__read_and_erase_resume_point_5_p_0((MR_String) "condition of an if-then-else", &ll_backend__ite_gen__ResumeVars_23, &ll_backend__ite_gen__ResumeLocs_24, ll_backend__ite_gen__CondInfo0_20, &ll_backend__ite_gen__CondInfo_25);
    }
    {
      ll_backend__ite_gen__CondGoal_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal_26, 0) = ((MR_Box) (ll_backend__ite_gen__CondExpr_19));
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal_26, 1) = ((MR_Box) (ll_backend__ite_gen__CondInfo_25));
    }
    ll_backend__ite_gen__TypeCtorInfo_182_182 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      ll_backend__ite_gen__V_87_87 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_182_182, ll_backend__ite_gen__ResumeVars_23);
    }
    {
      ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__ite_gen__V_87_87, &ll_backend__ite_gen__ResumeMap_27, &ll_backend__ite_gen__FlushCode_28, ll_backend__ite_gen__STATE_VARIABLE_CI_0_82, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_84, &ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88);
    }
    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_82, &ll_backend__ite_gen__Globals_29);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__ite_gen__Globals_29, (MR_Integer) 302, &ll_backend__ite_gen__ReclaimOption_30);
    }
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__ReclaimOption_30 == (MR_Integer) 1);
    if (ll_backend__ite_gen__succeeded)
      {
        ll_backend__ite_gen__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ll_backend__ite_gen__CondGoal_26);
      }
    if (ll_backend__ite_gen__succeeded)
      ll_backend__ite_gen__ReclaimHeap_31 = (MR_Integer) 1;
    else
      ll_backend__ite_gen__ReclaimHeap_31 = (MR_Integer) 0;
    {
      ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__ite_gen__ReclaimHeap_31, &ll_backend__ite_gen__SaveHpCode_32, &ll_backend__ite_gen__MaybeHpSlot_33, ll_backend__ite_gen__STATE_VARIABLE_CI_0_82, &ll_backend__ite_gen__STATE_VARIABLE_CI_90_90, ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88, &ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91);
    }
    {
      ll_backend__ite_gen__AddTrailOps_34 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_90_90, ll_backend__ite_gen__IteGoalInfo_15);
    }
    switch (ll_backend__ite_gen__AddTrailOps_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__ite_gen__OptTrailOps_36;
          MR_Word ll_backend__ite_gen__V_92_92;

          {
            ll_backend__code_info__get_opt_trail_ops_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_90_90, &ll_backend__ite_gen__OptTrailOps_36);
          }
          ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__OptTrailOps_36 == (MR_Integer) 1);
          if (ll_backend__ite_gen__succeeded)
            {
              {
                ll_backend__ite_gen__V_92_92 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(ll_backend__ite_gen__CondInfo0_20);
              }
              ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_92_92 == (MR_Integer) 1);
              if (ll_backend__ite_gen__succeeded)
                {
                  ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CondCodeModel_21 == (MR_Integer) 2);
                  ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
                }
            }
          if (ll_backend__ite_gen__succeeded)
            ll_backend__ite_gen__IteTrailOps_35 = (MR_Integer) 1;
          else
            ll_backend__ite_gen__IteTrailOps_35 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__ite_gen__IteTrailOps_35 = (MR_Integer) 1;
        break;
    }
    {
      ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__ite_gen__IteTrailOps_35, &ll_backend__ite_gen__SaveTicketCode_37, &ll_backend__ite_gen__MaybeTicketSlot_38, ll_backend__ite_gen__STATE_VARIABLE_CI_90_90, &ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91, &ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94);
    }
    {
      ll_backend__ite_gen__IteRegionOps_40 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, ll_backend__ite_gen__IteGoalInfo_15);
    }
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__ite_gen__ElseGoal_14, &ll_backend__ite_gen__ElseGoals_41);
    }
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__ite_gen__CondGoal_26, &ll_backend__ite_gen__CondGoals_42);
    }
    {
      ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(ll_backend__ite_gen__IteRegionOps_40, ll_backend__ite_gen__CondInfo_25, ll_backend__ite_gen__CondGoals_42, ll_backend__ite_gen__ElseGoals_41, &ll_backend__ite_gen__RegionCondCode_43, &ll_backend__ite_gen__RegionThenCode_44, &ll_backend__ite_gen__RegionElseCode_45, &ll_backend__ite_gen__RegionStackVars_46, &ll_backend__ite_gen__MaybeEmbeddedStackFrameId_47, ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, &ll_backend__ite_gen__STATE_VARIABLE_CI_95_95, ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__ite_gen__STATE_VARIABLE_CLD_96_96);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_96_96, &ll_backend__ite_gen__BranchStart_48);
    }
    {
      ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0(ll_backend__ite_gen__CondCodeModel_21, ll_backend__ite_gen__MaybeEmbeddedStackFrameId_47, &ll_backend__ite_gen__HijackInfo_49, &ll_backend__ite_gen__PrepareHijackCode_50, ll_backend__ite_gen__STATE_VARIABLE_CI_95_95, &ll_backend__ite_gen__STATE_VARIABLE_CI_97_97, ll_backend__ite_gen__STATE_VARIABLE_CLD_96_96, &ll_backend__ite_gen__STATE_VARIABLE_CLD_98_98);
    }
    {
      ll_backend__ite_gen__V_99_99 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_182_182, ll_backend__ite_gen__ResumeVars_23);
    }
    {
      ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__ite_gen__V_99_99, ll_backend__ite_gen__ResumeLocs_24, ll_backend__ite_gen__ResumeMap_27, &ll_backend__ite_gen__ResumePoint_51, ll_backend__ite_gen__STATE_VARIABLE_CI_97_97, &ll_backend__ite_gen__STATE_VARIABLE_CI_100_100);
    }
    {
      ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__ite_gen__ResumePoint_51, ll_backend__ite_gen__EffCodeModel_22, &ll_backend__ite_gen__EffectResumeCode_52, ll_backend__ite_gen__STATE_VARIABLE_CLD_98_98, &ll_backend__ite_gen__STATE_VARIABLE_CLD_101_101);
    }
    {
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__ite_gen__CondGoal_26, ll_backend__ite_gen__IteGoalInfo_15, &ll_backend__ite_gen__CondTraceCode_53, ll_backend__ite_gen__STATE_VARIABLE_CI_100_100, &ll_backend__ite_gen__STATE_VARIABLE_CI_102_102, ll_backend__ite_gen__STATE_VARIABLE_CLD_101_101, &ll_backend__ite_gen__STATE_VARIABLE_CLD_103_103);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__ite_gen__CondCodeModel_21, ll_backend__ite_gen__CondGoal_26, &ll_backend__ite_gen__CondCode_54, ll_backend__ite_gen__STATE_VARIABLE_CI_102_102, &ll_backend__ite_gen__STATE_VARIABLE_CI_104_104, ll_backend__ite_gen__STATE_VARIABLE_CLD_103_103, &ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105);
    }
    {
      ll_backend__code_loc_dep__ite_enter_then_8_p_0(ll_backend__ite_gen__HijackInfo_49, ll_backend__ite_gen__ResumePoint_51, &ll_backend__ite_gen__ThenNeckCode_55, &ll_backend__ite_gen__ElseNeckCode_56, ll_backend__ite_gen__STATE_VARIABLE_CI_104_104, &ll_backend__ite_gen__STATE_VARIABLE_CI_106_106, ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105, &ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107);
    }
    {
      ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__ite_gen__Zombies_57, ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107, &ll_backend__ite_gen__STATE_VARIABLE_CLD_108_108);
    }
    {
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__ite_gen__Zombies_57, ll_backend__ite_gen__STATE_VARIABLE_CLD_108_108, &ll_backend__ite_gen__STATE_VARIABLE_CLD_109_109);
    }
    switch (ll_backend__ite_gen__CondCodeModel_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_110_110;
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_111_111;
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_113_113;
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_114_114;

          {
            ll_backend__code_loc_dep__maybe_release_hp_5_p_0(ll_backend__ite_gen__MaybeHpSlot_33, ll_backend__ite_gen__STATE_VARIABLE_CI_106_106, &ll_backend__ite_gen__STATE_VARIABLE_CI_110_110, ll_backend__ite_gen__STATE_VARIABLE_CLD_109_109, &ll_backend__ite_gen__STATE_VARIABLE_CLD_111_111);
          }
          {
            ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(ll_backend__ite_gen__MaybeTicketSlot_38, (MR_Integer) 1, &ll_backend__ite_gen__ResetTicketCode_58, ll_backend__ite_gen__STATE_VARIABLE_CI_110_110, &ll_backend__ite_gen__STATE_VARIABLE_CI_113_113, ll_backend__ite_gen__STATE_VARIABLE_CLD_111_111, &ll_backend__ite_gen__STATE_VARIABLE_CLD_114_114);
          }
          {
            ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__ite_gen__RegionStackVars_46, (MR_Integer) 1, ll_backend__ite_gen__STATE_VARIABLE_CI_113_113, &ll_backend__ite_gen__STATE_VARIABLE_CI_116_116, ll_backend__ite_gen__STATE_VARIABLE_CLD_114_114, &ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(ll_backend__ite_gen__MaybeTicketSlot_38, (MR_Integer) 2, &ll_backend__ite_gen__ResetTicketCode_58);
          }
          ll_backend__ite_gen__STATE_VARIABLE_CI_116_116 = ll_backend__ite_gen__STATE_VARIABLE_CI_106_106;
          ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117 = ll_backend__ite_gen__STATE_VARIABLE_CLD_109_109;
        }
        break;
    }
    {
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__ite_gen__IteGoalInfo_15, &ll_backend__ite_gen__StoreMap_59);
    }
    {
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117, &ll_backend__ite_gen__EndCondInstMap_60);
    }
    {
      ll_backend__ite_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__ite_gen__EndCondInstMap_60);
    }
    if (ll_backend__ite_gen__succeeded)
      {
        MR_Word ll_backend__ite_gen__TypeCtorInfo_183_183 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

        {
          ll_backend__ite_gen__ThenTraceCode_61 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_183_183);
        }
        {
          ll_backend__ite_gen__ThenCode_62 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_183_183);
        }
        {
          mercury__map__init_1_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, &ll_backend__ite_gen__BranchEndStoreMap_63);
        }
        ll_backend__ite_gen__STATE_VARIABLE_CLD_122_122 = ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117;
        ll_backend__ite_gen__STATE_VARIABLE_CI_121_121 = ll_backend__ite_gen__STATE_VARIABLE_CI_116_116;
      }
    else
      {
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_119_119;
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_120_120;

        {
          ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__ite_gen__ThenGoal_13, ll_backend__ite_gen__IteGoalInfo_15, &ll_backend__ite_gen__ThenTraceCode_61, ll_backend__ite_gen__STATE_VARIABLE_CI_116_116, &ll_backend__ite_gen__STATE_VARIABLE_CI_119_119, ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117, &ll_backend__ite_gen__STATE_VARIABLE_CLD_120_120);
        }
        {
          ll_backend__code_gen__generate_goal_7_p_0(ll_backend__ite_gen__CodeModel_11, ll_backend__ite_gen__ThenGoal_13, &ll_backend__ite_gen__ThenCode_62, ll_backend__ite_gen__STATE_VARIABLE_CI_119_119, &ll_backend__ite_gen__STATE_VARIABLE_CI_121_121, ll_backend__ite_gen__STATE_VARIABLE_CLD_120_120, &ll_backend__ite_gen__STATE_VARIABLE_CLD_122_122);
        }
        ll_backend__ite_gen__BranchEndStoreMap_63 = ll_backend__ite_gen__StoreMap_59;
      }
    {
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__ite_gen__BranchEndStoreMap_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__ite_gen__MaybeEnd0_64, &ll_backend__ite_gen__ThenSaveCode_65, ll_backend__ite_gen__STATE_VARIABLE_CI_121_121, ll_backend__ite_gen__STATE_VARIABLE_CLD_122_122);
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__ite_gen__BranchStart_48, ll_backend__ite_gen__STATE_VARIABLE_CI_121_121, &ll_backend__ite_gen__STATE_VARIABLE_CLD_124_124);
    }
    {
      ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__ite_gen__ResumePoint_51, &ll_backend__ite_gen__ResumeCode_66, ll_backend__ite_gen__STATE_VARIABLE_CI_121_121, &ll_backend__ite_gen__STATE_VARIABLE_CI_125_125, ll_backend__ite_gen__STATE_VARIABLE_CLD_124_124, &ll_backend__ite_gen__STATE_VARIABLE_CLD_126_126);
    }
    {
      ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(ll_backend__ite_gen__MaybeHpSlot_33, &ll_backend__ite_gen__RestoreHpCode_69, ll_backend__ite_gen__STATE_VARIABLE_CI_125_125, &ll_backend__ite_gen__STATE_VARIABLE_CI_133_133, ll_backend__ite_gen__STATE_VARIABLE_CLD_126_126, &ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134);
    }
    {
      ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(ll_backend__ite_gen__MaybeTicketSlot_38, (MR_Integer) 0, &ll_backend__ite_gen__RestoreTicketCode_70, ll_backend__ite_gen__STATE_VARIABLE_CI_133_133, &ll_backend__ite_gen__STATE_VARIABLE_CI_136_136, ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134, &ll_backend__ite_gen__STATE_VARIABLE_CLD_137_137);
    }
    {
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__ite_gen__ElseGoal_14, ll_backend__ite_gen__IteGoalInfo_15, &ll_backend__ite_gen__ElseTraceCode_71, ll_backend__ite_gen__STATE_VARIABLE_CI_136_136, &ll_backend__ite_gen__STATE_VARIABLE_CI_138_138, ll_backend__ite_gen__STATE_VARIABLE_CLD_137_137, &ll_backend__ite_gen__STATE_VARIABLE_CLD_139_139);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__ite_gen__CodeModel_11, ll_backend__ite_gen__ElseGoal_14, &ll_backend__ite_gen__ElseCode_72, ll_backend__ite_gen__STATE_VARIABLE_CI_138_138, &ll_backend__ite_gen__STATE_VARIABLE_CI_140_140, ll_backend__ite_gen__STATE_VARIABLE_CLD_139_139, &ll_backend__ite_gen__STATE_VARIABLE_CLD_141_141);
    }
    {
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__ite_gen__StoreMap_59, ll_backend__ite_gen__MaybeEnd0_64, &ll_backend__ite_gen__MaybeEnd_73, &ll_backend__ite_gen__ElseSaveCode_74, ll_backend__ite_gen__STATE_VARIABLE_CI_140_140, ll_backend__ite_gen__STATE_VARIABLE_CLD_141_141);
    }
    {
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__ite_gen__EndLabel_76, ll_backend__ite_gen__STATE_VARIABLE_CI_140_140, ll_backend__ite_gen__STATE_VARIABLE_CI_83);
    }
    ll_backend__ite_gen__TypeCtorInfo_188_188 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__ite_gen__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_151_151, 0) = ((MR_Box) (ll_backend__ite_gen__EndLabel_76));
    }
    {
      ll_backend__ite_gen__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_150_150, 1) = ((MR_Box) (ll_backend__ite_gen__V_151_151));
    }
    {
      ll_backend__ite_gen__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_149_149, 0) = ((MR_Box) (ll_backend__ite_gen__V_150_150));
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_149_149, 1) = ((MR_Box) ((MR_String) "Jump to the end of if-then-else"));
    }
    {
      ll_backend__ite_gen__JumpToEndCode_77 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ((MR_Box) (ll_backend__ite_gen__V_149_149)));
    }
    {
      ll_backend__ite_gen__V_154_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_154_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_154_154, 1) = ((MR_Box) (ll_backend__ite_gen__EndLabel_76));
    }
    {
      ll_backend__ite_gen__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_153_153, 0) = ((MR_Box) (ll_backend__ite_gen__V_154_154));
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_153_153, 1) = ((MR_Box) ((MR_String) "end of if-then-else"));
    }
    {
      ll_backend__ite_gen__EndLabelCode_78 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ((MR_Box) (ll_backend__ite_gen__V_153_153)));
    }
    {
      ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(ll_backend__ite_gen__Globals_29, ll_backend__ite_gen__CondInfo_25, &ll_backend__ite_gen__PNegCondCode_79, &ll_backend__ite_gen__PNegThenCode_80, &ll_backend__ite_gen__PNegElseCode_81);
    }
    {
      ll_backend__ite_gen__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ElseSaveCode_74, ll_backend__ite_gen__EndLabelCode_78);
    }
    {
      ll_backend__ite_gen__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ElseCode_72, ll_backend__ite_gen__V_180_180);
    }
    {
      ll_backend__ite_gen__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__PNegElseCode_81, ll_backend__ite_gen__V_179_179);
    }
    {
      ll_backend__ite_gen__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ElseTraceCode_71, ll_backend__ite_gen__V_178_178);
    }
    {
      ll_backend__ite_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RegionElseCode_45, ll_backend__ite_gen__V_177_177);
    }
    {
      ll_backend__ite_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RestoreTicketCode_70, ll_backend__ite_gen__V_176_176);
    }
    {
      ll_backend__ite_gen__V_174_174 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RestoreHpCode_69, ll_backend__ite_gen__V_175_175);
    }
    {
      ll_backend__ite_gen__V_173_173 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ElseNeckCode_56, ll_backend__ite_gen__V_174_174);
    }
    {
      ll_backend__ite_gen__V_172_172 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ResumeCode_66, ll_backend__ite_gen__V_173_173);
    }
    {
      ll_backend__ite_gen__V_171_171 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__JumpToEndCode_77, ll_backend__ite_gen__V_172_172);
    }
    {
      ll_backend__ite_gen__V_170_170 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ThenSaveCode_65, ll_backend__ite_gen__V_171_171);
    }
    {
      ll_backend__ite_gen__V_169_169 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ThenCode_62, ll_backend__ite_gen__V_170_170);
    }
    {
      ll_backend__ite_gen__V_168_168 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__PNegThenCode_80, ll_backend__ite_gen__V_169_169);
    }
    {
      ll_backend__ite_gen__V_167_167 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ThenTraceCode_61, ll_backend__ite_gen__V_168_168);
    }
    {
      ll_backend__ite_gen__V_166_166 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RegionThenCode_44, ll_backend__ite_gen__V_167_167);
    }
    {
      ll_backend__ite_gen__V_165_165 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ResetTicketCode_58, ll_backend__ite_gen__V_166_166);
    }
    {
      ll_backend__ite_gen__V_164_164 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ThenNeckCode_55, ll_backend__ite_gen__V_165_165);
    }
    {
      ll_backend__ite_gen__V_163_163 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__CondCode_54, ll_backend__ite_gen__V_164_164);
    }
    {
      ll_backend__ite_gen__V_162_162 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__PNegCondCode_79, ll_backend__ite_gen__V_163_163);
    }
    {
      ll_backend__ite_gen__V_161_161 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__CondTraceCode_53, ll_backend__ite_gen__V_162_162);
    }
    {
      ll_backend__ite_gen__V_160_160 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__EffectResumeCode_52, ll_backend__ite_gen__V_161_161);
    }
    {
      ll_backend__ite_gen__V_159_159 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__PrepareHijackCode_50, ll_backend__ite_gen__V_160_160);
    }
    {
      ll_backend__ite_gen__V_158_158 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RegionCondCode_43, ll_backend__ite_gen__V_159_159);
    }
    {
      ll_backend__ite_gen__V_157_157 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__SaveTicketCode_37, ll_backend__ite_gen__V_158_158);
    }
    {
      ll_backend__ite_gen__V_156_156 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__SaveHpCode_32, ll_backend__ite_gen__V_157_157);
    }
    {
      *ll_backend__ite_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__FlushCode_28, ll_backend__ite_gen__V_156_156);
    }
    {
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__ite_gen__StoreMap_59, ll_backend__ite_gen__MaybeEnd_73, *ll_backend__ite_gen__STATE_VARIABLE_CI_83, ll_backend__ite_gen__STATE_VARIABLE_CLD_85);
    }
  }
}

void mercury__ll_backend__ite_gen__init(void)
{
}

void mercury__ll_backend__ite_gen__init_type_tables(void)
{
}

void mercury__ll_backend__ite_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.ite_gen. */
