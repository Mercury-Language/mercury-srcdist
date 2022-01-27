/*
** Automatically generated from `ite_gen.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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




#line 168 "ll_backend.ite_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0;

#line 385 "ite_gen.m"
static MR_bool MR_CALL 
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__385__1_2_p_0(
#line 385 "ite_gen.m"
  MR_Word ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38,
#line 385 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__2_78);

#line 799 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NumLval_1,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__AddrLval_2,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__RemovedVars_4,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__5_5,
#line 799 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__HeadVar__6_6,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__7_7,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_8,
#line 799 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_9);

#line 781 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_8_p_0(
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NumLval_1,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__AddrLval_2,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__4_4,
#line 781 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__HeadVar__5_5,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__6_6,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_7,
#line 781 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_8);

#line 762 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(
#line 762 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__1_1,
#line 762 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ModuleInfo_2,
#line 762 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3,
#line 762 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_Removed_4);

#line 577 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__IteRegionOps_14,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoalInfo_15,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoals_16,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ElseGoals_17,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__CondCode_18,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ThenCode_19,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ElseCode_20,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__StackVars_21,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_67,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_68,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_70);

#line 567 "ite_gen.m"
static MR_String MR_CALL 
ll_backend__ite_gen__wrap_transient_1_f_0(
#line 567 "ite_gen.m"
  MR_String ll_backend__ite_gen__Code_3);

#line 510 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(
#line 510 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Globals_6,
#line 510 "ite_gen.m"
  MR_Word ll_backend__ite_gen__GoalInfo_7,
#line 510 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegCondCode_8,
#line 510 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegThenCode_9,
#line 510 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegElseCode_10);

#line 477 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__read_and_erase_resume_point_5_p_0(
#line 477 "ite_gen.m"
  MR_String ll_backend__ite_gen__CondStr_6,
#line 477 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ResumeVars_7,
#line 477 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ResumeLocs_8,
#line 477 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondInfo0_9,
#line 477 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__CondInfo_10);

#line 385 "ite_gen.m"
static MR_bool MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0_1(
#line 385 "ite_gen.m"
  MR_Box ll_backend__ite_gen__closure_arg);

#line 343 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0(
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CodeModel_11,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Goal_12,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NotGoalInfo_13,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ResumeVars_14,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ResumeLocs_15,
#line 343 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__Code_16,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_60,
#line 343 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_61,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_62,
#line 343 "ite_gen.m"
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



#line 387 "ll_backend.ite_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0
  }
};

#line 385 "ite_gen.m"
static MR_bool MR_CALL 
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__385__1_2_p_0(
#line 385 "ite_gen.m"
  MR_Word ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38,
#line 385 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__2_78)
#line 385 "ite_gen.m"
{
#line 385 "ite_gen.m"
  {
#line 385 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;

#line 385 "ite_gen.m"
    {
#line 385 "ite_gen.m"
      return ll_backend__ite_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[1], ((MR_Box) (ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38)), ((MR_Box) (ll_backend__ite_gen__HeadVar__2_78)));
    }
#line 385 "ite_gen.m"
    return ll_backend__ite_gen__succeeded;
#line 385 "ite_gen.m"
  }
#line 385 "ite_gen.m"
}

#line 799 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NumLval_1,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__AddrLval_2,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__RemovedVars_4,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__5_5,
#line 799 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__HeadVar__6_6,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__7_7,
#line 799 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_8,
#line 799 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_9)
#line 799 "ite_gen.m"
{
#line 804 "ite_gen.m"
  {
#line 804 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;

#line 804 "ite_gen.m"
    if ((ll_backend__ite_gen__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "ite_gen.m"
      {
#line 804 "ite_gen.m"
        {
#line 804 "ite_gen.m"
          *ll_backend__ite_gen__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 804 "ite_gen.m"
        *ll_backend__ite_gen__STATE_VARIABLE_CLD_9 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_8;
#line 804 "ite_gen.m"
      }
#line 804 "ite_gen.m"
    else
#line 806 "ite_gen.m"
      {
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__5_5, (MR_Integer) 0)));
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__5_5, (MR_Integer) 1)));
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Code_24;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Codes_25;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__ProduceVarCode_28;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVarRval_29;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RemovedAtStartOfElse_30;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__SaveCode_31;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_34_34;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_35_35;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_36_36;
#line 806 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_37_37;

#line 807 "ite_gen.m"
        {
#line 807 "ite_gen.m"
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__ite_gen__RegionVar_22, &ll_backend__ite_gen__ProduceVarCode_28, &ll_backend__ite_gen__RegionVarRval_29, ll_backend__ite_gen__HeadVar__7_7, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_8, &ll_backend__ite_gen__STATE_VARIABLE_CLD_34_34);
        }
#line 808 "ite_gen.m"
        {
#line 808 "ite_gen.m"
          ll_backend__ite_gen__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[0], ((MR_Box) (ll_backend__ite_gen__RegionVar_22)), ll_backend__ite_gen__RemovedVars_4);
        }
#line 810 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 809 "ite_gen.m"
          ll_backend__ite_gen__RemovedAtStartOfElse_30 = (MR_Integer) 0;
#line 810 "ite_gen.m"
        else
#line 811 "ite_gen.m"
          ll_backend__ite_gen__RemovedAtStartOfElse_30 = (MR_Integer) 1;
#line 815 "ite_gen.m"
        {
#line 815 "ite_gen.m"
          ll_backend__ite_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 815 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_37_37, 0) = ((MR_Box) (ll_backend__ite_gen__RemovedAtStartOfElse_30));
#line 815 "ite_gen.m"
        }
#line 815 "ite_gen.m"
        {
#line 815 "ite_gen.m"
          ll_backend__ite_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 815 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 815 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 1) = ((MR_Box) (ll_backend__ite_gen__V_37_37));
#line 815 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_3));
#line 815 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 3) = ((MR_Box) (ll_backend__ite_gen__RegionVarRval_29));
#line 815 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 4) = ((MR_Box) (ll_backend__ite_gen__NumLval_1));
#line 815 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_36_36, 5) = ((MR_Box) (ll_backend__ite_gen__AddrLval_2));
#line 815 "ite_gen.m"
        }
#line 814 "ite_gen.m"
        {
#line 814 "ite_gen.m"
          ll_backend__ite_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 814 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_35_35, 0) = ((MR_Box) (ll_backend__ite_gen__V_36_36));
#line 814 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_35_35, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
#line 814 "ite_gen.m"
        }
#line 813 "ite_gen.m"
        {
#line 813 "ite_gen.m"
          ll_backend__ite_gen__SaveCode_31 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_41_41, ((MR_Box) (ll_backend__ite_gen__V_35_35)));
        }
#line 819 "ite_gen.m"
        {
#line 819 "ite_gen.m"
          ll_backend__ite_gen__Code_24 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_41_41, ll_backend__ite_gen__ProduceVarCode_28, ll_backend__ite_gen__SaveCode_31);
        }
#line 820 "ite_gen.m"
        {
#line 820 "ite_gen.m"
          ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(ll_backend__ite_gen__NumLval_1, ll_backend__ite_gen__AddrLval_2, ll_backend__ite_gen__EmbeddedStackFrameId_3, ll_backend__ite_gen__RemovedVars_4, ll_backend__ite_gen__RegionVars_23, &ll_backend__ite_gen__Codes_25, ll_backend__ite_gen__HeadVar__7_7, ll_backend__ite_gen__STATE_VARIABLE_CLD_34_34, ll_backend__ite_gen__STATE_VARIABLE_CLD_9);
        }
#line 806 "ite_gen.m"
        {
#line 806 "ite_gen.m"
          *ll_backend__ite_gen__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_41_41, ll_backend__ite_gen__Code_24, ll_backend__ite_gen__Codes_25);
        }
#line 806 "ite_gen.m"
      }
#line 804 "ite_gen.m"
  }
#line 799 "ite_gen.m"
}

#line 781 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_8_p_0(
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NumLval_1,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__AddrLval_2,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__4_4,
#line 781 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__HeadVar__5_5,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__6_6,
#line 781 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_7,
#line 781 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_8)
#line 781 "ite_gen.m"
{
#line 785 "ite_gen.m"
  {
#line 785 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;

#line 785 "ite_gen.m"
    if ((ll_backend__ite_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "ite_gen.m"
      {
#line 785 "ite_gen.m"
        {
#line 785 "ite_gen.m"
          *ll_backend__ite_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 785 "ite_gen.m"
        *ll_backend__ite_gen__STATE_VARIABLE_CLD_8 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_7;
#line 785 "ite_gen.m"
      }
#line 785 "ite_gen.m"
    else
#line 787 "ite_gen.m"
      {
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Code_21;
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Codes_22;
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__ProduceVarCode_25;
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVarRval_26;
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__SaveCode_27;
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_30_30;
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_31_31;
#line 787 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_32_32;

#line 788 "ite_gen.m"
        {
#line 788 "ite_gen.m"
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__ite_gen__RegionVar_19, &ll_backend__ite_gen__ProduceVarCode_25, &ll_backend__ite_gen__RegionVarRval_26, ll_backend__ite_gen__HeadVar__6_6, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__ite_gen__STATE_VARIABLE_CLD_30_30);
        }
#line 791 "ite_gen.m"
        {
#line 791 "ite_gen.m"
          ll_backend__ite_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 791 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 791 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_3));
#line 791 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 3) = ((MR_Box) (ll_backend__ite_gen__RegionVarRval_26));
#line 791 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 4) = ((MR_Box) (ll_backend__ite_gen__NumLval_1));
#line 791 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_32_32, 5) = ((MR_Box) (ll_backend__ite_gen__AddrLval_2));
#line 791 "ite_gen.m"
        }
#line 790 "ite_gen.m"
        {
#line 790 "ite_gen.m"
          ll_backend__ite_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_31_31, 0) = ((MR_Box) (ll_backend__ite_gen__V_32_32));
#line 790 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_31_31, 1) = ((MR_Box) ((MR_String) "ite protect the region if needed"));
#line 790 "ite_gen.m"
        }
#line 789 "ite_gen.m"
        {
#line 789 "ite_gen.m"
          ll_backend__ite_gen__SaveCode_27 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_37_37, ((MR_Box) (ll_backend__ite_gen__V_31_31)));
        }
#line 795 "ite_gen.m"
        {
#line 795 "ite_gen.m"
          ll_backend__ite_gen__Code_21 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_37_37, ll_backend__ite_gen__ProduceVarCode_25, ll_backend__ite_gen__SaveCode_27);
        }
#line 796 "ite_gen.m"
        {
#line 796 "ite_gen.m"
          ll_backend__ite_gen__ite_protect_regions_8_p_0(ll_backend__ite_gen__NumLval_1, ll_backend__ite_gen__AddrLval_2, ll_backend__ite_gen__EmbeddedStackFrameId_3, ll_backend__ite_gen__RegionVars_20, &ll_backend__ite_gen__Codes_22, ll_backend__ite_gen__HeadVar__6_6, ll_backend__ite_gen__STATE_VARIABLE_CLD_30_30, ll_backend__ite_gen__STATE_VARIABLE_CLD_8);
        }
#line 787 "ite_gen.m"
        {
#line 787 "ite_gen.m"
          *ll_backend__ite_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_37_37, ll_backend__ite_gen__Code_21, ll_backend__ite_gen__Codes_22);
        }
#line 787 "ite_gen.m"
      }
#line 785 "ite_gen.m"
  }
#line 781 "ite_gen.m"
}

#line 762 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(
#line 762 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__1_1,
#line 762 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ModuleInfo_2,
#line 762 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3,
#line 762 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_Removed_4)
#line 762 "ite_gen.m"
{
#line 765 "ite_gen.m"
  while (MR_TRUE)
#line 765 "ite_gen.m"
    {
#line 765 "ite_gen.m"
      /* tailcall optimized into a loop */
#line 765 "ite_gen.m"
      {
#line 765 "ite_gen.m"
        MR_bool ll_backend__ite_gen__succeeded;

#line 765 "ite_gen.m"
        if ((ll_backend__ite_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "ite_gen.m"
          *ll_backend__ite_gen__STATE_VARIABLE_Removed_4 = ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3;
#line 765 "ite_gen.m"
        else
#line 766 "ite_gen.m"
          {
#line 766 "ite_gen.m"
            MR_Word ll_backend__ite_gen__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 766 "ite_gen.m"
            MR_Word ll_backend__ite_gen__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 766 "ite_gen.m"
            MR_Word ll_backend__ite_gen__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_9, (MR_Integer) 0)));
#line 767 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_9, (MR_Integer) 1)));
#line 777 "ite_gen.m"
            MR_Word ll_backend__ite_gen__RegionVar_22;
#line 769 "ite_gen.m"
            MR_Word ll_backend__ite_gen__PredId_15;
#line 769 "ite_gen.m"
            MR_Word ll_backend__ite_gen__Args_17;
#line 769 "ite_gen.m"
            MR_Word ll_backend__ite_gen__PredInfo_21;
#line 769 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_25_25;
#line 769 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_26_26;
#line 769 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_27_27;
#line 769 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_31_31;
#line 769 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_32_32;
#line 769 "ite_gen.m"
            MR_Integer ll_backend__ite_gen___ProcId_16;
#line 769 "ite_gen.m"
            MR_Word ll_backend__ite_gen___Builtin_18;
#line 769 "ite_gen.m"
            MR_Word ll_backend__ite_gen___UC_19;
#line 769 "ite_gen.m"
            MR_Word ll_backend__ite_gen___SymName_20;

#line 769 "ite_gen.m"
            ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__GoalExpr_13)) == (MR_mktag((MR_Integer) 2)));
#line 769 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 769 "ite_gen.m"
              {
#line 769 "ite_gen.m"
                ll_backend__ite_gen__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 0)));
#line 769 "ite_gen.m"
                ll_backend__ite_gen___ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 1)));
#line 769 "ite_gen.m"
                ll_backend__ite_gen__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 2)));
#line 769 "ite_gen.m"
                ll_backend__ite_gen___Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 3)));
#line 769 "ite_gen.m"
                ll_backend__ite_gen___UC_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 4)));
#line 769 "ite_gen.m"
                ll_backend__ite_gen___SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 5)));
#line 770 "ite_gen.m"
                {
#line 770 "ite_gen.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__ite_gen__ModuleInfo_2, ll_backend__ite_gen__PredId_15, &ll_backend__ite_gen__PredInfo_21);
                }
#line 771 "ite_gen.m"
                {
#line 771 "ite_gen.m"
                  ll_backend__ite_gen__V_25_25 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__ite_gen__PredInfo_21);
                }
#line 771 "ite_gen.m"
                {
#line 771 "ite_gen.m"
                  ll_backend__ite_gen__V_31_31 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
                }
#line 771 "ite_gen.m"
                {
#line 771 "ite_gen.m"
                  ll_backend__ite_gen__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__ite_gen__V_25_25, ll_backend__ite_gen__V_31_31);
                }
#line 769 "ite_gen.m"
                if (ll_backend__ite_gen__succeeded)
#line 769 "ite_gen.m"
                  {
#line 772 "ite_gen.m"
                    {
#line 772 "ite_gen.m"
                      ll_backend__ite_gen__V_26_26 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__ite_gen__PredInfo_21);
                    }
#line 772 "ite_gen.m"
                    {
#line 772 "ite_gen.m"
                      ll_backend__ite_gen__V_32_32 = transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0();
                    }
#line 772 "ite_gen.m"
                    ll_backend__ite_gen__succeeded = (strcmp(ll_backend__ite_gen__V_26_26, ll_backend__ite_gen__V_32_32) == 0);
#line 769 "ite_gen.m"
                    if (ll_backend__ite_gen__succeeded)
#line 769 "ite_gen.m"
                      {
#line 773 "ite_gen.m"
                        ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 773 "ite_gen.m"
                        if (ll_backend__ite_gen__succeeded)
#line 773 "ite_gen.m"
                          {
#line 773 "ite_gen.m"
                            ll_backend__ite_gen__RegionVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Args_17, (MR_Integer) 0)));
#line 773 "ite_gen.m"
                            ll_backend__ite_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Args_17, (MR_Integer) 1)));
#line 773 "ite_gen.m"
                            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "ite_gen.m"
                          }
#line 769 "ite_gen.m"
                      }
#line 769 "ite_gen.m"
                  }
#line 769 "ite_gen.m"
              }
#line 777 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 775 "ite_gen.m"
              {
#line 775 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_28_28;

#line 775 "ite_gen.m"
                {
#line 775 "ite_gen.m"
                  mercury__set__insert_3_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[0], ((MR_Box) (ll_backend__ite_gen__RegionVar_22)), ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3, &ll_backend__ite_gen__STATE_VARIABLE_Removed_28_28);
                }
#line 776 "ite_gen.m"
                /* direct tailcall eliminated */
#line 776 "ite_gen.m"
                {
#line 776 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__HeadVar__1__tmp_copy_1 = ll_backend__ite_gen__Goals_10;
#line 776 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_0__tmp_copy_3 = ll_backend__ite_gen__STATE_VARIABLE_Removed_28_28;

#line 776 "ite_gen.m"
                  ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3 = ll_backend__ite_gen__STATE_VARIABLE_Removed_0__tmp_copy_3;
#line 776 "ite_gen.m"
                  ll_backend__ite_gen__HeadVar__1_1 = ll_backend__ite_gen__HeadVar__1__tmp_copy_1;
#line 776 "ite_gen.m"
                }
#line 776 "ite_gen.m"
                continue;
#line 775 "ite_gen.m"
              }
#line 777 "ite_gen.m"
            else
#line 777 "ite_gen.m"
              *ll_backend__ite_gen__STATE_VARIABLE_Removed_4 = ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3;
#line 766 "ite_gen.m"
          }
#line 765 "ite_gen.m"
      }
#line 765 "ite_gen.m"
      break;
#line 765 "ite_gen.m"
    }
#line 762 "ite_gen.m"
}

#line 577 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__IteRegionOps_14,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoalInfo_15,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoals_16,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ElseGoals_17,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__CondCode_18,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ThenCode_19,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ElseCode_20,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__StackVars_21,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_67,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_68,
#line 577 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69,
#line 577 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_70)
#line 577 "ite_gen.m"
{
#line 587 "ite_gen.m"
  {
#line 587 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;

#line 587 "ite_gen.m"
#line 587 "ite_gen.m"
    switch (ll_backend__ite_gen__IteRegionOps_14) {
#line 587 "ite_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 587 "ite_gen.m"
      case (MR_Integer) 0:
#line 594 "ite_gen.m"
        {
#line 594 "ite_gen.m"
          MR_Word ll_backend__ite_gen__ForwardLiveVars_25;
#line 594 "ite_gen.m"
          MR_Word ll_backend__ite_gen__LiveRegionVars_26;
#line 594 "ite_gen.m"
          MR_Word ll_backend__ite_gen__MaybeRbmmInfo_27;

#line 595 "ite_gen.m"
          {
#line 595 "ite_gen.m"
            ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__ite_gen__ForwardLiveVars_25);
          }
#line 596 "ite_gen.m"
          {
#line 596 "ite_gen.m"
            ll_backend__ite_gen__LiveRegionVars_26 = ll_backend__code_info__filter_region_vars_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_67, ll_backend__ite_gen__ForwardLiveVars_25);
          }
#line 598 "ite_gen.m"
          {
#line 598 "ite_gen.m"
            ll_backend__ite_gen__MaybeRbmmInfo_27 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(ll_backend__ite_gen__CondGoalInfo_15);
          }
#line 606 "ite_gen.m"
          if ((ll_backend__ite_gen__MaybeRbmmInfo_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "ite_gen.m"
            {
#line 600 "ite_gen.m"
              MR_Word ll_backend__ite_gen__TypeCtorInfo_150_150 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 601 "ite_gen.m"
              {
#line 601 "ite_gen.m"
                *ll_backend__ite_gen__CondCode_18 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150);
              }
#line 602 "ite_gen.m"
              {
#line 602 "ite_gen.m"
                *ll_backend__ite_gen__ThenCode_19 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150);
              }
#line 603 "ite_gen.m"
              {
#line 603 "ite_gen.m"
                *ll_backend__ite_gen__ElseCode_20 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150);
              }
#line 604 "ite_gen.m"
              *ll_backend__ite_gen__StackVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "ite_gen.m"
              *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "ite_gen.m"
              *ll_backend__ite_gen__STATE_VARIABLE_CI_68 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_67;
#line 600 "ite_gen.m"
              *ll_backend__ite_gen__STATE_VARIABLE_CLD_70 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69;
#line 600 "ite_gen.m"
            }
#line 606 "ite_gen.m"
          else
#line 607 "ite_gen.m"
            {
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__TypeInfo_152_152;
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__RbmmInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__MaybeRbmmInfo_27, (MR_Integer) 0)));
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__CondCreatedRegionVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 0)));
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__CondRemovedRegionVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 1)));
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__CondCarriedRegionVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 2)));
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__CondAllocRegionVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 3)));
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__ReversedCondGoals_34;
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__ModuleInfo_35;
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__RemovedAtEndOfThen_36;
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__NeedToBeProtectedRegionVars_37;
#line 607 "ite_gen.m"
              MR_Word ll_backend__ite_gen__V_71_71;
#line 608 "ite_gen.m"
              MR_Word ll_backend__ite_gen___CondUsedRegionVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_28, (MR_Integer) 4)));

#line 611 "ite_gen.m"
              {
#line 611 "ite_gen.m"
                mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__ite_gen__CondGoals_16, &ll_backend__ite_gen__ReversedCondGoals_34);
              }
#line 612 "ite_gen.m"
              {
#line 612 "ite_gen.m"
                ll_backend__code_info__get_module_info_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_67, &ll_backend__ite_gen__ModuleInfo_35);
              }
#line 1029 "ll_backend.ite_gen.c"
              ll_backend__ite_gen__TypeInfo_152_152 = (MR_Word) &ll_backend__ite_gen_scalar_common_1[0];
#line 614 "ite_gen.m"
              {
#line 614 "ite_gen.m"
                ll_backend__ite_gen__V_71_71 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeInfo_152_152);
              }
#line 613 "ite_gen.m"
              {
#line 613 "ite_gen.m"
                ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ll_backend__ite_gen__ReversedCondGoals_34, ll_backend__ite_gen__ModuleInfo_35, ll_backend__ite_gen__V_71_71, &ll_backend__ite_gen__RemovedAtEndOfThen_36);
              }
#line 615 "ite_gen.m"
              {
#line 615 "ite_gen.m"
                mercury__set__difference_3_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__CondRemovedRegionVars_30, ll_backend__ite_gen__RemovedAtEndOfThen_36, &ll_backend__ite_gen__NeedToBeProtectedRegionVars_37);
              }
#line 618 "ite_gen.m"
              {
#line 618 "ite_gen.m"
                ll_backend__ite_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__CondCreatedRegionVars_29);
              }
#line 618 "ite_gen.m"
              if (ll_backend__ite_gen__succeeded)
#line 618 "ite_gen.m"
                {
#line 619 "ite_gen.m"
                  {
#line 619 "ite_gen.m"
                    ll_backend__ite_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__NeedToBeProtectedRegionVars_37);
                  }
#line 618 "ite_gen.m"
                  if (ll_backend__ite_gen__succeeded)
#line 620 "ite_gen.m"
                    {
#line 620 "ite_gen.m"
                      ll_backend__ite_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__CondAllocRegionVars_32);
                    }
#line 618 "ite_gen.m"
                }
#line 629 "ite_gen.m"
              if (ll_backend__ite_gen__succeeded)
#line 624 "ite_gen.m"
                {
#line 624 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__TypeCtorInfo_153_153 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 624 "ite_gen.m"
                  {
#line 624 "ite_gen.m"
                    *ll_backend__ite_gen__CondCode_18 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_153_153);
                  }
#line 625 "ite_gen.m"
                  {
#line 625 "ite_gen.m"
                    *ll_backend__ite_gen__ThenCode_19 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_153_153);
                  }
#line 626 "ite_gen.m"
                  {
#line 626 "ite_gen.m"
                    *ll_backend__ite_gen__ElseCode_20 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_153_153);
                  }
#line 627 "ite_gen.m"
                  *ll_backend__ite_gen__StackVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "ite_gen.m"
                  *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "ite_gen.m"
                  *ll_backend__ite_gen__STATE_VARIABLE_CLD_70 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69;
#line 624 "ite_gen.m"
                  *ll_backend__ite_gen__STATE_VARIABLE_CI_68 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_67;
#line 624 "ite_gen.m"
                }
#line 629 "ite_gen.m"
              else
#line 631 "ite_gen.m"
                {
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__TypeCtorInfo_154_154;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__TypeCtorInfo_156_156;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__RemovedAtStartOfElse_38;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__UnprotectedRemovedAtStartOfElse_39;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__ProtectRegionVars_40;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__SnapshotRegionVars0_41;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__SnapshotRegionVars_42;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__ProtectRegionVarList_43;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__SnapshotRegionVarList_44;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__NumProtectRegionVars_45;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__NumSnapshotRegionVars_46;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__Globals_47;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__FixedSize_48;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__ProtectSize_49;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__SnapshotSize_50;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__FrameSize_51;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__Items_52;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__MainStackId_53;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__FirstSlotNum_54;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__LastSlotNum_55;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_56;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__FirstNonFixedAddr_57;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__ProtectNumRegLval_58;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__SnapshotNumRegLval_59;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__AddrRegLval_60;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__PushInitCode_61;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__ProtectRegionCode_62;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__SnapshotRegionCode_63;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__SetCode_64;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__CondCodeModel_65;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__CondKind_66;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_72_72;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_73_73;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_74_74;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_75_75;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__V_79_79;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__V_80_80;
#line 631 "ite_gen.m"
                  MR_Integer ll_backend__ite_gen__V_81_81;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_87_87;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_89_89;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_92_92;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_93_93;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_94_94;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_97_97;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_98_98;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_99_99;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_100_100;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_104_104;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_105_105;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_106_106;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_111_111;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_112_112;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_113_113;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_118_118;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_119_119;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_120_120;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_121_121;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_122_122;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_124_124;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_126_126;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_127_127;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_128_128;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_130_130;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_133_133;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_139_139;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_140_140;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_141_141;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_142_142;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_143_143;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_145_145;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_146_146;
#line 631 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__V_147_147;

#line 631 "ite_gen.m"
                  {
#line 631 "ite_gen.m"
                    ll_backend__ite_gen__V_72_72 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeInfo_152_152);
                  }
#line 630 "ite_gen.m"
                  {
#line 630 "ite_gen.m"
                    ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ll_backend__ite_gen__ElseGoals_17, ll_backend__ite_gen__ModuleInfo_35, ll_backend__ite_gen__V_72_72, &ll_backend__ite_gen__RemovedAtStartOfElse_38);
                  }
#line 639 "ite_gen.m"
                  {
#line 639 "ite_gen.m"
                    mercury__set__intersect_3_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__RemovedAtStartOfElse_38, ll_backend__ite_gen__CondCarriedRegionVars_31, &ll_backend__ite_gen__UnprotectedRemovedAtStartOfElse_39);
                  }
#line 1271 "ll_backend.ite_gen.c"
                  ll_backend__ite_gen__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 643 "ite_gen.m"
                  {
#line 643 "ite_gen.m"
                    ll_backend__ite_gen__V_73_73 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__NeedToBeProtectedRegionVars_37);
                  }
#line 642 "ite_gen.m"
                  {
#line 642 "ite_gen.m"
                    parse_tree__set_of_var__intersect_3_p_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__LiveRegionVars_26, ll_backend__ite_gen__V_73_73, &ll_backend__ite_gen__ProtectRegionVars_40);
                  }
#line 646 "ite_gen.m"
                  {
#line 646 "ite_gen.m"
                    ll_backend__ite_gen__V_74_74 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__CondAllocRegionVars_32);
                  }
#line 645 "ite_gen.m"
                  {
#line 645 "ite_gen.m"
                    parse_tree__set_of_var__intersect_3_p_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__LiveRegionVars_26, ll_backend__ite_gen__V_74_74, &ll_backend__ite_gen__SnapshotRegionVars0_41);
                  }
#line 649 "ite_gen.m"
                  {
#line 649 "ite_gen.m"
                    ll_backend__ite_gen__V_75_75 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__UnprotectedRemovedAtStartOfElse_39);
                  }
#line 648 "ite_gen.m"
                  {
#line 648 "ite_gen.m"
                    parse_tree__set_of_var__difference_3_p_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__SnapshotRegionVars0_41, ll_backend__ite_gen__V_75_75, &ll_backend__ite_gen__SnapshotRegionVars_42);
                  }
#line 652 "ite_gen.m"
                  {
#line 652 "ite_gen.m"
                    ll_backend__ite_gen__ProtectRegionVarList_43 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__ProtectRegionVars_40);
                  }
#line 654 "ite_gen.m"
                  {
#line 654 "ite_gen.m"
                    ll_backend__ite_gen__SnapshotRegionVarList_44 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_154_154, ll_backend__ite_gen__SnapshotRegionVars_42);
                  }
#line 657 "ite_gen.m"
                  {
#line 657 "ite_gen.m"
                    mercury__list__length_2_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__ProtectRegionVarList_43, &ll_backend__ite_gen__NumProtectRegionVars_45);
                  }
#line 658 "ite_gen.m"
                  {
#line 658 "ite_gen.m"
                    mercury__list__length_2_p_0(ll_backend__ite_gen__TypeInfo_152_152, ll_backend__ite_gen__SnapshotRegionVarList_44, &ll_backend__ite_gen__NumSnapshotRegionVars_46);
                  }
#line 660 "ite_gen.m"
                  {
#line 660 "ite_gen.m"
                    ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_67, &ll_backend__ite_gen__Globals_47);
                  }
#line 661 "ite_gen.m"
                  {
#line 661 "ite_gen.m"
                    libs__globals__lookup_int_option_3_p_0(ll_backend__ite_gen__Globals_47, (MR_Integer) 291, &ll_backend__ite_gen__FixedSize_48);
                  }
#line 663 "ite_gen.m"
                  {
#line 663 "ite_gen.m"
                    libs__globals__lookup_int_option_3_p_0(ll_backend__ite_gen__Globals_47, (MR_Integer) 295, &ll_backend__ite_gen__ProtectSize_49);
                  }
#line 665 "ite_gen.m"
                  {
#line 665 "ite_gen.m"
                    libs__globals__lookup_int_option_3_p_0(ll_backend__ite_gen__Globals_47, (MR_Integer) 296, &ll_backend__ite_gen__SnapshotSize_50);
                  }
#line 668 "ite_gen.m"
                  ll_backend__ite_gen__V_80_80 = (ll_backend__ite_gen__ProtectSize_49 * ll_backend__ite_gen__NumProtectRegionVars_45);
#line 668 "ite_gen.m"
                  ll_backend__ite_gen__V_79_79 = (ll_backend__ite_gen__FixedSize_48 + ll_backend__ite_gen__V_80_80);
#line 669 "ite_gen.m"
                  ll_backend__ite_gen__V_81_81 = (ll_backend__ite_gen__SnapshotSize_50 * ll_backend__ite_gen__NumSnapshotRegionVars_46);
#line 669 "ite_gen.m"
                  ll_backend__ite_gen__FrameSize_51 = (ll_backend__ite_gen__V_79_79 + ll_backend__ite_gen__V_81_81);
#line 671 "ite_gen.m"
                  {
#line 671 "ite_gen.m"
                    ll_backend__ite_gen__Items_52 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__ite_gen__FrameSize_51, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))));
                  }
#line 672 "ite_gen.m"
                  {
#line 672 "ite_gen.m"
                    ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(ll_backend__ite_gen__Items_52, (MR_Integer) 1, ll_backend__ite_gen__StackVars_21, &ll_backend__ite_gen__MainStackId_53, &ll_backend__ite_gen__FirstSlotNum_54, &ll_backend__ite_gen__LastSlotNum_55, ll_backend__ite_gen__STATE_VARIABLE_CI_0_67, ll_backend__ite_gen__STATE_VARIABLE_CI_68, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85);
                  }
#line 675 "ite_gen.m"
                  {
#line 675 "ite_gen.m"
                    ll_backend__ite_gen__EmbeddedStackFrameId_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 675 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__EmbeddedStackFrameId_56, 0) = ((MR_Box) (ll_backend__ite_gen__MainStackId_53));
#line 675 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__EmbeddedStackFrameId_56, 1) = ((MR_Box) (ll_backend__ite_gen__FirstSlotNum_54));
#line 675 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__EmbeddedStackFrameId_56, 2) = ((MR_Box) (ll_backend__ite_gen__LastSlotNum_55));
#line 675 "ite_gen.m"
                  }
#line 677 "ite_gen.m"
                  {
#line 677 "ite_gen.m"
                    ll_backend__ite_gen__FirstNonFixedAddr_57 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(ll_backend__ite_gen__EmbeddedStackFrameId_56, ll_backend__ite_gen__FixedSize_48);
                  }
#line 679 "ite_gen.m"
                  {
#line 679 "ite_gen.m"
                    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__ite_gen__ProtectNumRegLval_58, ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85, &ll_backend__ite_gen__STATE_VARIABLE_CLD_87_87);
                  }
#line 680 "ite_gen.m"
                  {
#line 680 "ite_gen.m"
                    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__ite_gen__SnapshotNumRegLval_59, ll_backend__ite_gen__STATE_VARIABLE_CLD_87_87, &ll_backend__ite_gen__STATE_VARIABLE_CLD_89_89);
                  }
#line 681 "ite_gen.m"
                  {
#line 681 "ite_gen.m"
                    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__ite_gen__AddrRegLval_60, ll_backend__ite_gen__STATE_VARIABLE_CLD_89_89, &ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91);
                  }
#line 1393 "ll_backend.ite_gen.c"
                  ll_backend__ite_gen__TypeCtorInfo_156_156 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 684 "ite_gen.m"
                  {
#line 684 "ite_gen.m"
                    ll_backend__ite_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 684 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 684 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_94_94, 1) = ((MR_Box) ((MR_Integer) 0));
#line 684 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_94_94, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
#line 684 "ite_gen.m"
                  }
#line 683 "ite_gen.m"
                  {
#line 683 "ite_gen.m"
                    ll_backend__ite_gen__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 683 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_93_93, 0) = ((MR_Box) (ll_backend__ite_gen__V_94_94));
#line 683 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_93_93, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region ite stack"));
#line 683 "ite_gen.m"
                  }
#line 688 "ite_gen.m"
                  ll_backend__ite_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__ite_gen_scalar_common_1[3]);
#line 688 "ite_gen.m"
                  {
#line 688 "ite_gen.m"
                    ll_backend__ite_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 688 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 688 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_99_99, 1) = ((MR_Box) (ll_backend__ite_gen__ProtectNumRegLval_58));
#line 688 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_99_99, 2) = ((MR_Box) (ll_backend__ite_gen__V_100_100));
#line 688 "ite_gen.m"
                  }
#line 687 "ite_gen.m"
                  {
#line 687 "ite_gen.m"
                    ll_backend__ite_gen__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_98_98, 0) = ((MR_Box) (ll_backend__ite_gen__V_99_99));
#line 687 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_98_98, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
#line 687 "ite_gen.m"
                  }
#line 691 "ite_gen.m"
                  {
#line 691 "ite_gen.m"
                    ll_backend__ite_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 691 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 691 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_106_106, 1) = ((MR_Box) (ll_backend__ite_gen__SnapshotNumRegLval_59));
#line 691 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_106_106, 2) = ((MR_Box) (ll_backend__ite_gen__V_100_100));
#line 691 "ite_gen.m"
                  }
#line 690 "ite_gen.m"
                  {
#line 690 "ite_gen.m"
                    ll_backend__ite_gen__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 690 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_105_105, 0) = ((MR_Box) (ll_backend__ite_gen__V_106_106));
#line 690 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_105_105, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
#line 690 "ite_gen.m"
                  }
#line 694 "ite_gen.m"
                  {
#line 694 "ite_gen.m"
                    ll_backend__ite_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 694 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 694 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_113_113, 1) = ((MR_Box) (ll_backend__ite_gen__AddrRegLval_60));
#line 694 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_113_113, 2) = ((MR_Box) (ll_backend__ite_gen__FirstNonFixedAddr_57));
#line 694 "ite_gen.m"
                  }
#line 693 "ite_gen.m"
                  {
#line 693 "ite_gen.m"
                    ll_backend__ite_gen__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_112_112, 0) = ((MR_Box) (ll_backend__ite_gen__V_113_113));
#line 693 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_112_112, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
#line 693 "ite_gen.m"
                  }
#line 697 "ite_gen.m"
                  {
#line 697 "ite_gen.m"
                    ll_backend__ite_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_111_111, 0) = ((MR_Box) (ll_backend__ite_gen__V_112_112));
#line 697 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "ite_gen.m"
                  }
#line 692 "ite_gen.m"
                  {
#line 692 "ite_gen.m"
                    ll_backend__ite_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_104_104, 0) = ((MR_Box) (ll_backend__ite_gen__V_105_105));
#line 692 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_104_104, 1) = ((MR_Box) (ll_backend__ite_gen__V_111_111));
#line 692 "ite_gen.m"
                  }
#line 689 "ite_gen.m"
                  {
#line 689 "ite_gen.m"
                    ll_backend__ite_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_97_97, 0) = ((MR_Box) (ll_backend__ite_gen__V_98_98));
#line 689 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_97_97, 1) = ((MR_Box) (ll_backend__ite_gen__V_104_104));
#line 689 "ite_gen.m"
                  }
#line 686 "ite_gen.m"
                  {
#line 686 "ite_gen.m"
                    ll_backend__ite_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_92_92, 0) = ((MR_Box) (ll_backend__ite_gen__V_93_93));
#line 686 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_92_92, 1) = ((MR_Box) (ll_backend__ite_gen__V_97_97));
#line 686 "ite_gen.m"
                  }
#line 682 "ite_gen.m"
                  {
#line 682 "ite_gen.m"
                    ll_backend__ite_gen__PushInitCode_61 = mercury__cord__from_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__V_92_92);
                  }
#line 698 "ite_gen.m"
                  {
#line 698 "ite_gen.m"
                    ll_backend__ite_gen__ite_protect_regions_8_p_0(ll_backend__ite_gen__ProtectNumRegLval_58, ll_backend__ite_gen__AddrRegLval_60, ll_backend__ite_gen__EmbeddedStackFrameId_56, ll_backend__ite_gen__ProtectRegionVarList_43, &ll_backend__ite_gen__ProtectRegionCode_62, *ll_backend__ite_gen__STATE_VARIABLE_CI_68, ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91, &ll_backend__ite_gen__STATE_VARIABLE_CLD_118_118);
                  }
#line 701 "ite_gen.m"
                  {
#line 701 "ite_gen.m"
                    ll_backend__ite_gen__ite_alloc_snapshot_regions_9_p_0(ll_backend__ite_gen__SnapshotNumRegLval_59, ll_backend__ite_gen__AddrRegLval_60, ll_backend__ite_gen__EmbeddedStackFrameId_56, ll_backend__ite_gen__RemovedAtStartOfElse_38, ll_backend__ite_gen__SnapshotRegionVarList_44, &ll_backend__ite_gen__SnapshotRegionCode_63, *ll_backend__ite_gen__STATE_VARIABLE_CI_68, ll_backend__ite_gen__STATE_VARIABLE_CLD_118_118, &ll_backend__ite_gen__STATE_VARIABLE_CLD_119_119);
                  }
#line 707 "ite_gen.m"
                  {
#line 707 "ite_gen.m"
                    ll_backend__ite_gen__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_124_124, 0) = ((MR_Box) (ll_backend__ite_gen__ProtectNumRegLval_58));
#line 707 "ite_gen.m"
                  }
#line 706 "ite_gen.m"
                  {
#line 706 "ite_gen.m"
                    ll_backend__ite_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 706 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 706 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 1) = ((MR_Box) ((MR_Integer) 0));
#line 706 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
#line 706 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 3) = ((MR_Box) (ll_backend__ite_gen__V_124_124));
#line 706 "ite_gen.m"
                  }
#line 705 "ite_gen.m"
                  {
#line 705 "ite_gen.m"
                    ll_backend__ite_gen__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_121_121, 0) = ((MR_Box) (ll_backend__ite_gen__V_122_122));
#line 705 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_121_121, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
#line 705 "ite_gen.m"
                  }
#line 711 "ite_gen.m"
                  {
#line 711 "ite_gen.m"
                    ll_backend__ite_gen__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 711 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_130_130, 0) = ((MR_Box) (ll_backend__ite_gen__SnapshotNumRegLval_59));
#line 711 "ite_gen.m"
                  }
#line 710 "ite_gen.m"
                  {
#line 710 "ite_gen.m"
                    ll_backend__ite_gen__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 710 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 710 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_128_128, 1) = ((MR_Box) ((MR_Integer) 1));
#line 710 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_128_128, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
#line 710 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_128_128, 3) = ((MR_Box) (ll_backend__ite_gen__V_130_130));
#line 710 "ite_gen.m"
                  }
#line 709 "ite_gen.m"
                  {
#line 709 "ite_gen.m"
                    ll_backend__ite_gen__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 709 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_127_127, 0) = ((MR_Box) (ll_backend__ite_gen__V_128_128));
#line 709 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_127_127, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
#line 709 "ite_gen.m"
                  }
#line 713 "ite_gen.m"
                  {
#line 713 "ite_gen.m"
                    ll_backend__ite_gen__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_126_126, 0) = ((MR_Box) (ll_backend__ite_gen__V_127_127));
#line 713 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "ite_gen.m"
                  }
#line 708 "ite_gen.m"
                  {
#line 708 "ite_gen.m"
                    ll_backend__ite_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_120_120, 0) = ((MR_Box) (ll_backend__ite_gen__V_121_121));
#line 708 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_120_120, 1) = ((MR_Box) (ll_backend__ite_gen__V_126_126));
#line 708 "ite_gen.m"
                  }
#line 704 "ite_gen.m"
                  {
#line 704 "ite_gen.m"
                    ll_backend__ite_gen__SetCode_64 = mercury__cord__from_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__V_120_120);
                  }
#line 714 "ite_gen.m"
                  {
#line 714 "ite_gen.m"
                    ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__ite_gen__ProtectNumRegLval_58, ll_backend__ite_gen__STATE_VARIABLE_CLD_119_119, &ll_backend__ite_gen__STATE_VARIABLE_CLD_133_133);
                  }
#line 715 "ite_gen.m"
                  {
#line 715 "ite_gen.m"
                    ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__ite_gen__SnapshotNumRegLval_59, ll_backend__ite_gen__STATE_VARIABLE_CLD_133_133, &ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134);
                  }
#line 716 "ite_gen.m"
                  {
#line 716 "ite_gen.m"
                    ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__ite_gen__AddrRegLval_60, ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134, ll_backend__ite_gen__STATE_VARIABLE_CLD_70);
                  }
#line 718 "ite_gen.m"
                  {
#line 718 "ite_gen.m"
                    ll_backend__ite_gen__CondCodeModel_65 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__ite_gen__CondGoalInfo_15);
                  }
#line 723 "ite_gen.m"
#line 723 "ite_gen.m"
                  switch (ll_backend__ite_gen__CondCodeModel_65) {
#line 723 "ite_gen.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 723 "ite_gen.m"
                    case (MR_Integer) 0:
#line 728 "ite_gen.m"
                      {
#line 729 "ite_gen.m"
                        {
#line 729 "ite_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.maybe_create_ite_region_frame\'/13", (MR_String) "det cond");
#line 729 "ite_gen.m"
                          return;
                        }
#line 728 "ite_gen.m"
                      }
#line 723 "ite_gen.m"
                      break;
#line 723 "ite_gen.m"
                    case (MR_Integer) 2:
#line 720 "ite_gen.m"
                      {
#line 721 "ite_gen.m"
                        ll_backend__ite_gen__CondKind_66 = (MR_Integer) 1;
#line 722 "ite_gen.m"
                        {
#line 722 "ite_gen.m"
                          MR_Word base;
#line 722 "ite_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 722 "ite_gen.m"
                          *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = base;
#line 722 "ite_gen.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
#line 722 "ite_gen.m"
                        }
#line 720 "ite_gen.m"
                      }
#line 723 "ite_gen.m"
                      break;
#line 723 "ite_gen.m"
                    case (MR_Integer) 1:
#line 724 "ite_gen.m"
                      {
#line 725 "ite_gen.m"
                        ll_backend__ite_gen__CondKind_66 = (MR_Integer) 0;
#line 726 "ite_gen.m"
                        *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 724 "ite_gen.m"
                      }
#line 723 "ite_gen.m"
                      break;
#line 723 "ite_gen.m"
                  }
#line 733 "ite_gen.m"
                  {
#line 733 "ite_gen.m"
                    ll_backend__ite_gen__V_140_140 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__SnapshotRegionCode_63, ll_backend__ite_gen__SetCode_64);
                  }
#line 732 "ite_gen.m"
                  {
#line 732 "ite_gen.m"
                    ll_backend__ite_gen__V_139_139 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__ProtectRegionCode_62, ll_backend__ite_gen__V_140_140);
                  }
#line 732 "ite_gen.m"
                  {
#line 732 "ite_gen.m"
                    *ll_backend__ite_gen__CondCode_18 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ll_backend__ite_gen__PushInitCode_61, ll_backend__ite_gen__V_139_139);
                  }
#line 737 "ite_gen.m"
                  {
#line 737 "ite_gen.m"
                    ll_backend__ite_gen__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "ite_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_143_143, 0) = ((MR_Box) (ll_backend__ite_gen__CondKind_66));
#line 737 "ite_gen.m"
                  }
#line 736 "ite_gen.m"
                  {
#line 736 "ite_gen.m"
                    ll_backend__ite_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 736 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 736 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_142_142, 1) = ((MR_Box) (ll_backend__ite_gen__V_143_143));
#line 736 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_142_142, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
#line 736 "ite_gen.m"
                  }
#line 735 "ite_gen.m"
                  {
#line 735 "ite_gen.m"
                    ll_backend__ite_gen__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 735 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_141_141, 0) = ((MR_Box) (ll_backend__ite_gen__V_142_142));
#line 735 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_141_141, 1) = ((MR_Box) ((MR_String) "region enter then"));
#line 735 "ite_gen.m"
                  }
#line 734 "ite_gen.m"
                  {
#line 734 "ite_gen.m"
                    *ll_backend__ite_gen__ThenCode_19 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ((MR_Box) (ll_backend__ite_gen__V_141_141)));
                  }
#line 744 "ite_gen.m"
                  {
#line 744 "ite_gen.m"
                    ll_backend__ite_gen__V_147_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 744 "ite_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__ite_gen__V_147_147, 0) = ((MR_Box) (ll_backend__ite_gen__CondKind_66));
#line 744 "ite_gen.m"
                  }
#line 743 "ite_gen.m"
                  {
#line 743 "ite_gen.m"
                    ll_backend__ite_gen__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 743 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 743 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_146_146, 1) = ((MR_Box) (ll_backend__ite_gen__V_147_147));
#line 743 "ite_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_146_146, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_56));
#line 743 "ite_gen.m"
                  }
#line 742 "ite_gen.m"
                  {
#line 742 "ite_gen.m"
                    ll_backend__ite_gen__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 742 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_145_145, 0) = ((MR_Box) (ll_backend__ite_gen__V_146_146));
#line 742 "ite_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_145_145, 1) = ((MR_Box) ((MR_String) "region enter else"));
#line 742 "ite_gen.m"
                  }
#line 741 "ite_gen.m"
                  {
#line 741 "ite_gen.m"
                    *ll_backend__ite_gen__ElseCode_20 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_156_156, ((MR_Box) (ll_backend__ite_gen__V_145_145)));
                  }
#line 631 "ite_gen.m"
                }
#line 607 "ite_gen.m"
            }
#line 594 "ite_gen.m"
        }
#line 587 "ite_gen.m"
        break;
#line 587 "ite_gen.m"
      case (MR_Integer) 1:
#line 587 "ite_gen.m"
        {
#line 587 "ite_gen.m"
          MR_Word ll_backend__ite_gen__TypeCtorInfo_149_149 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 588 "ite_gen.m"
          {
#line 588 "ite_gen.m"
            *ll_backend__ite_gen__CondCode_18 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_149_149);
          }
#line 589 "ite_gen.m"
          {
#line 589 "ite_gen.m"
            *ll_backend__ite_gen__ThenCode_19 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_149_149);
          }
#line 590 "ite_gen.m"
          {
#line 590 "ite_gen.m"
            *ll_backend__ite_gen__ElseCode_20 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_149_149);
          }
#line 591 "ite_gen.m"
          *ll_backend__ite_gen__StackVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "ite_gen.m"
          *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "ite_gen.m"
          *ll_backend__ite_gen__STATE_VARIABLE_CI_68 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_67;
#line 587 "ite_gen.m"
          *ll_backend__ite_gen__STATE_VARIABLE_CLD_70 = ll_backend__ite_gen__STATE_VARIABLE_CLD_0_69;
#line 587 "ite_gen.m"
        }
#line 587 "ite_gen.m"
        break;
#line 587 "ite_gen.m"
    }
#line 587 "ite_gen.m"
  }
#line 577 "ite_gen.m"
}

#line 567 "ite_gen.m"
static MR_String MR_CALL 
ll_backend__ite_gen__wrap_transient_1_f_0(
#line 567 "ite_gen.m"
  MR_String ll_backend__ite_gen__Code_3)
#line 567 "ite_gen.m"
{
#line 569 "ite_gen.m"
  {
#line 569 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 569 "ite_gen.m"
    MR_String ll_backend__ite_gen__HeadVar__2_2;
#line 569 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_4_4;
#line 569 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_6_6;

#line 572 "ite_gen.m"
    {
#line 572 "ite_gen.m"
      ll_backend__ite_gen__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_6_6, 0) = ((MR_Box) (ll_backend__ite_gen__Code_3));
#line 572 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__ite_gen_scalar_common_1[2])));
#line 572 "ite_gen.m"
    }
#line 571 "ite_gen.m"
    {
#line 571 "ite_gen.m"
      ll_backend__ite_gen__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_4_4, 0) = ((MR_Box) ((MR_String) "\t\tMR_save_transient_registers();\n"));
#line 571 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_4_4, 1) = ((MR_Box) (ll_backend__ite_gen__V_6_6));
#line 571 "ite_gen.m"
    }
#line 570 "ite_gen.m"
    {
#line 570 "ite_gen.m"
      return ll_backend__ite_gen__HeadVar__2_2 = mercury__string__append_list_1_f_0(ll_backend__ite_gen__V_4_4);
    }
#line 569 "ite_gen.m"
    return ll_backend__ite_gen__HeadVar__2_2;
#line 569 "ite_gen.m"
  }
#line 567 "ite_gen.m"
}

#line 510 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(
#line 510 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Globals_6,
#line 510 "ite_gen.m"
  MR_Word ll_backend__ite_gen__GoalInfo_7,
#line 510 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegCondCode_8,
#line 510 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegThenCode_9,
#line 510 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegElseCode_10)
#line 510 "ite_gen.m"
{
#line 514 "ite_gen.m"
  {
#line 514 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 514 "ite_gen.m"
    MR_Word ll_backend__ite_gen__UseMinimalModelStackCopyPNeg_11;
#line 519 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_21_21;

#line 515 "ite_gen.m"
    {
#line 515 "ite_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__ite_gen__Globals_6, (MR_Integer) 288, &ll_backend__ite_gen__UseMinimalModelStackCopyPNeg_11);
    }
#line 518 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__UseMinimalModelStackCopyPNeg_11 == (MR_Integer) 1);
#line 518 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 518 "ite_gen.m"
      {
#line 519 "ite_gen.m"
        ll_backend__ite_gen__V_21_21 = (MR_Integer) 16;
#line 519 "ite_gen.m"
        {
#line 519 "ite_gen.m"
          ll_backend__ite_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__ite_gen__GoalInfo_7, ll_backend__ite_gen__V_21_21);
        }
#line 519 "ite_gen.m"
        ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
#line 518 "ite_gen.m"
      }
#line 561 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 521 "ite_gen.m"
      {
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_90_90;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_91_91;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Context_12;
#line 521 "ite_gen.m"
        MR_String ll_backend__ite_gen__File_13;
#line 521 "ite_gen.m"
        MR_Integer ll_backend__ite_gen__Line_14;
#line 521 "ite_gen.m"
        MR_String ll_backend__ite_gen__CtxtStr_15;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__PNegCondComponents_16;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__PNegThenComponents_17;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__PNegElseComponents_18;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_30_30;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_33_33;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_34_34;
#line 521 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_35_35;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_38_38;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_41_41;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_42_42;
#line 521 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_43_43;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_46_46;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_49_49;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_50_50;
#line 521 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_51_51;
#line 521 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_52_52;
#line 521 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_54_54;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_57_57;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_58_58;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_68_68;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_69_69;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_79_79;
#line 521 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_80_80;
#line 525 "ite_gen.m"
        MR_Integer ll_backend__ite_gen__V_22_22;

#line 521 "ite_gen.m"
        {
#line 521 "ite_gen.m"
          ll_backend__ite_gen__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__ite_gen__GoalInfo_7);
        }
#line 522 "ite_gen.m"
        {
#line 522 "ite_gen.m"
          mercury__term__context_file_2_p_0(ll_backend__ite_gen__Context_12, &ll_backend__ite_gen__File_13);
        }
#line 523 "ite_gen.m"
        {
#line 523 "ite_gen.m"
          mercury__term__context_line_2_p_0(ll_backend__ite_gen__Context_12, &ll_backend__ite_gen__Line_14);
        }
#line 525 "ite_gen.m"
        ll_backend__ite_gen__succeeded = (strcmp(ll_backend__ite_gen__File_13, (MR_String) "") == 0);
#line 525 "ite_gen.m"
        ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
#line 525 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 525 "ite_gen.m"
          {
#line 526 "ite_gen.m"
            ll_backend__ite_gen__V_22_22 = (MR_Integer) 0;
#line 526 "ite_gen.m"
            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__Line_14 > ll_backend__ite_gen__V_22_22);
#line 525 "ite_gen.m"
          }
#line 529 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 528 "ite_gen.m"
          {
#line 528 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_24_24;
#line 528 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_25_25;
#line 528 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_27_27;
#line 528 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_28_28;

#line 528 "ite_gen.m"
            {
#line 528 "ite_gen.m"
              ll_backend__ite_gen__V_28_28 = mercury__string__int_to_string_1_f_0(ll_backend__ite_gen__Line_14);
            }
#line 528 "ite_gen.m"
            {
#line 528 "ite_gen.m"
              ll_backend__ite_gen__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__V_28_28, (MR_String) "\"");
            }
#line 528 "ite_gen.m"
            {
#line 528 "ite_gen.m"
              ll_backend__ite_gen__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) ":", ll_backend__ite_gen__V_27_27);
            }
#line 528 "ite_gen.m"
            {
#line 528 "ite_gen.m"
              ll_backend__ite_gen__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__File_13, ll_backend__ite_gen__V_25_25);
            }
#line 528 "ite_gen.m"
            {
#line 528 "ite_gen.m"
              ll_backend__ite_gen__CtxtStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__ite_gen__V_24_24);
            }
#line 528 "ite_gen.m"
          }
#line 529 "ite_gen.m"
        else
#line 530 "ite_gen.m"
          ll_backend__ite_gen__CtxtStr_15 = (MR_String) "NULL";
#line 2073 "ll_backend.ite_gen.c"
        ll_backend__ite_gen__TypeCtorInfo_90_90 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 535 "ite_gen.m"
        {
#line 535 "ite_gen.m"
          ll_backend__ite_gen__V_34_34 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeCtorInfo_90_90);
        }
#line 535 "ite_gen.m"
        {
#line 535 "ite_gen.m"
          ll_backend__ite_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 535 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_33_33, 0) = ((MR_Box) (ll_backend__ite_gen__V_34_34));
#line 535 "ite_gen.m"
        }
#line 536 "ite_gen.m"
        {
#line 536 "ite_gen.m"
          ll_backend__ite_gen__V_35_35 = ll_backend__ite_gen__wrap_transient_1_f_0((MR_String) "\t\tMR_pneg_enter_cond();\n");
        }
#line 534 "ite_gen.m"
        {
#line 534 "ite_gen.m"
          ll_backend__ite_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 534 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 1) = ((MR_Box) ((MR_Integer) 1));
#line 534 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 2) = ((MR_Box) ((MR_Integer) 1));
#line 534 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 3) = ((MR_Box) (ll_backend__ite_gen__V_33_33));
#line 534 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 4) = ((MR_Box) (ll_backend__ite_gen__V_35_35));
#line 534 "ite_gen.m"
        }
#line 537 "ite_gen.m"
        {
#line 537 "ite_gen.m"
          ll_backend__ite_gen__PNegCondComponents_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegCondComponents_16, 0) = ((MR_Box) (ll_backend__ite_gen__V_30_30));
#line 537 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegCondComponents_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "ite_gen.m"
        }
#line 540 "ite_gen.m"
        {
#line 540 "ite_gen.m"
          ll_backend__ite_gen__V_42_42 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeCtorInfo_90_90);
        }
#line 540 "ite_gen.m"
        {
#line 540 "ite_gen.m"
          ll_backend__ite_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_41_41, 0) = ((MR_Box) (ll_backend__ite_gen__V_42_42));
#line 540 "ite_gen.m"
        }
#line 541 "ite_gen.m"
        {
#line 541 "ite_gen.m"
          ll_backend__ite_gen__V_43_43 = ll_backend__ite_gen__wrap_transient_1_f_0((MR_String) "\t\tMR_pneg_enter_then();\n");
        }
#line 539 "ite_gen.m"
        {
#line 539 "ite_gen.m"
          ll_backend__ite_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 539 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 539 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 1) = ((MR_Box) ((MR_Integer) 1));
#line 539 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 2) = ((MR_Box) ((MR_Integer) 1));
#line 539 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 3) = ((MR_Box) (ll_backend__ite_gen__V_41_41));
#line 539 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 4) = ((MR_Box) (ll_backend__ite_gen__V_43_43));
#line 539 "ite_gen.m"
        }
#line 542 "ite_gen.m"
        {
#line 542 "ite_gen.m"
          ll_backend__ite_gen__PNegThenComponents_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegThenComponents_17, 0) = ((MR_Box) (ll_backend__ite_gen__V_38_38));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegThenComponents_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ite_gen.m"
        }
#line 545 "ite_gen.m"
        {
#line 545 "ite_gen.m"
          ll_backend__ite_gen__V_50_50 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeCtorInfo_90_90);
        }
#line 545 "ite_gen.m"
        {
#line 545 "ite_gen.m"
          ll_backend__ite_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_49_49, 0) = ((MR_Box) (ll_backend__ite_gen__V_50_50));
#line 545 "ite_gen.m"
        }
#line 546 "ite_gen.m"
        {
#line 546 "ite_gen.m"
          ll_backend__ite_gen__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__CtxtStr_15, (MR_String) ");\n");
        }
#line 546 "ite_gen.m"
        {
#line 546 "ite_gen.m"
          ll_backend__ite_gen__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_pneg_enter_else(", ll_backend__ite_gen__V_54_54);
        }
#line 546 "ite_gen.m"
        {
#line 546 "ite_gen.m"
          ll_backend__ite_gen__V_51_51 = ll_backend__ite_gen__wrap_transient_1_f_0(ll_backend__ite_gen__V_52_52);
        }
#line 544 "ite_gen.m"
        {
#line 544 "ite_gen.m"
          ll_backend__ite_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 544 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 544 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 1) = ((MR_Box) ((MR_Integer) 1));
#line 544 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 2) = ((MR_Box) ((MR_Integer) 1));
#line 544 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 3) = ((MR_Box) (ll_backend__ite_gen__V_49_49));
#line 544 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 4) = ((MR_Box) (ll_backend__ite_gen__V_51_51));
#line 544 "ite_gen.m"
        }
#line 547 "ite_gen.m"
        {
#line 547 "ite_gen.m"
          ll_backend__ite_gen__PNegElseComponents_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegElseComponents_18, 0) = ((MR_Box) (ll_backend__ite_gen__V_46_46));
#line 547 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegElseComponents_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "ite_gen.m"
        }
#line 2217 "ll_backend.ite_gen.c"
        ll_backend__ite_gen__TypeCtorInfo_91_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 550 "ite_gen.m"
        {
#line 550 "ite_gen.m"
          ll_backend__ite_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 2) = ((MR_Box) (ll_backend__ite_gen__PNegCondComponents_16));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 3) = ((MR_Box) ((MR_Integer) 1));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 9) = ((MR_Box) ((MR_Integer) 1));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 10) = ((MR_Box) ((MR_Integer) 0));
#line 550 "ite_gen.m"
        }
#line 550 "ite_gen.m"
        {
#line 550 "ite_gen.m"
          ll_backend__ite_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_57_57, 0) = ((MR_Box) (ll_backend__ite_gen__V_58_58));
#line 550 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_57_57, 1) = ((MR_Box) ((MR_String) ""));
#line 550 "ite_gen.m"
        }
#line 549 "ite_gen.m"
        {
#line 549 "ite_gen.m"
          *ll_backend__ite_gen__PNegCondCode_8 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__ite_gen__V_57_57)));
        }
#line 554 "ite_gen.m"
        {
#line 554 "ite_gen.m"
          ll_backend__ite_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 2) = ((MR_Box) (ll_backend__ite_gen__PNegThenComponents_17));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 3) = ((MR_Box) ((MR_Integer) 1));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 9) = ((MR_Box) ((MR_Integer) 1));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 10) = ((MR_Box) ((MR_Integer) 0));
#line 554 "ite_gen.m"
        }
#line 554 "ite_gen.m"
        {
#line 554 "ite_gen.m"
          ll_backend__ite_gen__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_68_68, 0) = ((MR_Box) (ll_backend__ite_gen__V_69_69));
#line 554 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_68_68, 1) = ((MR_Box) ((MR_String) ""));
#line 554 "ite_gen.m"
        }
#line 553 "ite_gen.m"
        {
#line 553 "ite_gen.m"
          *ll_backend__ite_gen__PNegThenCode_9 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__ite_gen__V_68_68)));
        }
#line 558 "ite_gen.m"
        {
#line 558 "ite_gen.m"
          ll_backend__ite_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 2) = ((MR_Box) (ll_backend__ite_gen__PNegElseComponents_18));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 3) = ((MR_Box) ((MR_Integer) 1));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 9) = ((MR_Box) ((MR_Integer) 1));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 10) = ((MR_Box) ((MR_Integer) 0));
#line 558 "ite_gen.m"
        }
#line 558 "ite_gen.m"
        {
#line 558 "ite_gen.m"
          ll_backend__ite_gen__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_79_79, 0) = ((MR_Box) (ll_backend__ite_gen__V_80_80));
#line 558 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_79_79, 1) = ((MR_Box) ((MR_String) ""));
#line 558 "ite_gen.m"
        }
#line 557 "ite_gen.m"
        {
#line 557 "ite_gen.m"
          *ll_backend__ite_gen__PNegElseCode_10 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__ite_gen__V_79_79)));
        }
#line 521 "ite_gen.m"
      }
#line 561 "ite_gen.m"
    else
#line 562 "ite_gen.m"
      {
#line 562 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_92_92 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 562 "ite_gen.m"
        {
#line 562 "ite_gen.m"
          *ll_backend__ite_gen__PNegCondCode_8 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_92_92);
        }
#line 563 "ite_gen.m"
        {
#line 563 "ite_gen.m"
          *ll_backend__ite_gen__PNegThenCode_9 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_92_92);
        }
#line 564 "ite_gen.m"
        {
#line 564 "ite_gen.m"
          *ll_backend__ite_gen__PNegElseCode_10 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_92_92);
        }
#line 562 "ite_gen.m"
      }
#line 514 "ite_gen.m"
  }
#line 510 "ite_gen.m"
}

#line 477 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__read_and_erase_resume_point_5_p_0(
#line 477 "ite_gen.m"
  MR_String ll_backend__ite_gen__CondStr_6,
#line 477 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ResumeVars_7,
#line 477 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ResumeLocs_8,
#line 477 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondInfo0_9,
#line 477 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__CondInfo_10)
#line 477 "ite_gen.m"
{
#line 482 "ite_gen.m"
  {
#line 482 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 482 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Resume_11;

#line 483 "ite_gen.m"
    {
#line 483 "ite_gen.m"
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__ite_gen__CondInfo0_9, &ll_backend__ite_gen__Resume_11);
    }
#line 490 "ite_gen.m"
    if ((ll_backend__ite_gen__Resume_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "ite_gen.m"
      {
#line 491 "ite_gen.m"
        MR_String ll_backend__ite_gen__Msg_12;

#line 492 "ite_gen.m"
        {
#line 492 "ite_gen.m"
          ll_backend__ite_gen__Msg_12 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__CondStr_6, (MR_String) " has no resume point");
        }
#line 493 "ite_gen.m"
        {
#line 493 "ite_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.read_and_erase_resume_point\'/5", ll_backend__ite_gen__Msg_12);
#line 493 "ite_gen.m"
          return;
        }
#line 491 "ite_gen.m"
      }
#line 490 "ite_gen.m"
    else
#line 485 "ite_gen.m"
      {
#line 485 "ite_gen.m"
        *ll_backend__ite_gen__ResumeVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_11, (MR_Integer) 0)));
#line 485 "ite_gen.m"
        *ll_backend__ite_gen__ResumeLocs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_11, (MR_Integer) 1)));
#line 489 "ite_gen.m"
        {
#line 489 "ite_gen.m"
          hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ite_gen__CondInfo0_9, ll_backend__ite_gen__CondInfo_10);
#line 489 "ite_gen.m"
          return;
        }
#line 485 "ite_gen.m"
      }
#line 482 "ite_gen.m"
  }
#line 477 "ite_gen.m"
}

#line 385 "ite_gen.m"
static MR_bool MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0_1(
#line 385 "ite_gen.m"
  MR_Box ll_backend__ite_gen__closure_arg)
#line 385 "ite_gen.m"
{
#line 385 "ite_gen.m"
  {
#line 385 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 385 "ite_gen.m"
    MR_Box ll_backend__ite_gen__closure = ll_backend__ite_gen__closure_arg;

#line 385 "ite_gen.m"
    {
#line 385 "ite_gen.m"
      return ll_backend__ite_gen__succeeded = ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__385__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__closure, (MR_Integer) 4))));
    }
#line 385 "ite_gen.m"
    return ll_backend__ite_gen__succeeded;
#line 385 "ite_gen.m"
  }
#line 385 "ite_gen.m"
}

#line 343 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__generate_negation_general_10_p_0(
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CodeModel_11,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Goal_12,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NotGoalInfo_13,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ResumeVars_14,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ResumeLocs_15,
#line 343 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__Code_16,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_60,
#line 343 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_61,
#line 343 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_62,
#line 343 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_63)
#line 343 "ite_gen.m"
{
#line 349 "ite_gen.m"
  {
#line 349 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__TypeCtorInfo_137_137 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__TypeCtorInfo_140_140;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeMap_19;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__FlushCode_20;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Globals_21;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ReclaimHeapOnFailure_22;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ReclaimHeap_23;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SaveHpCode_24;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeHpSlot_25;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__AddTrailOps_26;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SaveTicketCode_27;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeTicketSlot_28;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__IteRegionOps_30;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalInfo_32;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondGoals_33;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionCondCode_34;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionThenCode_35;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionElseCode_36;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionStackVars_37;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__HijackInfo_39;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PrepareHijackCode_40;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumePoint_41;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EffectResumeCode_42;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EnterTraceCode_43;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalCode_44;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenNeckCode_45;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseNeckCode_46;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Zombies_47;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__LiveVars_48;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PruneTicketCode_49;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__FailTraceCode_50;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__FailCode_51;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeCode_53;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RestoreHpCode_54;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RestoreTicketCode_55;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SuccessTraceCode_56;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegCondCode_57;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegThenCode_58;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegElseCode_59;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_64_64;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_65_65;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_67_67;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_68_68;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_69_69;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_70_70;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_72_72;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_73_73;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_74_74;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_79_79;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_80_80;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_81_81;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_82_82;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_83_83;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_84_84;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_87_87;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_89_89;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_90_90;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_101_101;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_102_102;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_103_103;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_104_104;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_106_106;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_109_109;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_110_110;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_112_112;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_113_113;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_117_117;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_118_118;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_119_119;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_120_120;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_121_121;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_122_122;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_123_123;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_124_124;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_125_125;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_126_126;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_127_127;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_128_128;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_129_129;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_130_130;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_131_131;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_132_132;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_133_133;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_134_134;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_135_135;
#line 349 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_136_136;
#line 378 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_31_31;

#line 350 "ite_gen.m"
    {
#line 350 "ite_gen.m"
      ll_backend__ite_gen__V_64_64 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_137_137, ll_backend__ite_gen__ResumeVars_14);
    }
#line 350 "ite_gen.m"
    {
#line 350 "ite_gen.m"
      ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__ite_gen__V_64_64, &ll_backend__ite_gen__ResumeMap_19, &ll_backend__ite_gen__FlushCode_20, ll_backend__ite_gen__STATE_VARIABLE_CI_0_60, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_62, &ll_backend__ite_gen__STATE_VARIABLE_CLD_65_65);
    }
#line 357 "ite_gen.m"
    {
#line 357 "ite_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_60, &ll_backend__ite_gen__Globals_21);
    }
#line 358 "ite_gen.m"
    {
#line 358 "ite_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__ite_gen__Globals_21, (MR_Integer) 310, &ll_backend__ite_gen__ReclaimHeapOnFailure_22);
    }
#line 361 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__ReclaimHeapOnFailure_22 == (MR_Integer) 1);
#line 361 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 362 "ite_gen.m"
      {
#line 362 "ite_gen.m"
        ll_backend__ite_gen__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ll_backend__ite_gen__Goal_12);
      }
#line 365 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 364 "ite_gen.m"
      ll_backend__ite_gen__ReclaimHeap_23 = (MR_Integer) 1;
#line 365 "ite_gen.m"
    else
#line 366 "ite_gen.m"
      ll_backend__ite_gen__ReclaimHeap_23 = (MR_Integer) 0;
#line 368 "ite_gen.m"
    {
#line 368 "ite_gen.m"
      ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__ite_gen__ReclaimHeap_23, &ll_backend__ite_gen__SaveHpCode_24, &ll_backend__ite_gen__MaybeHpSlot_25, ll_backend__ite_gen__STATE_VARIABLE_CI_0_60, &ll_backend__ite_gen__STATE_VARIABLE_CI_67_67, ll_backend__ite_gen__STATE_VARIABLE_CLD_65_65, &ll_backend__ite_gen__STATE_VARIABLE_CLD_68_68);
    }
#line 371 "ite_gen.m"
    {
#line 371 "ite_gen.m"
      ll_backend__ite_gen__AddTrailOps_26 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_67_67, ll_backend__ite_gen__NotGoalInfo_13);
    }
#line 372 "ite_gen.m"
    {
#line 372 "ite_gen.m"
      ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__ite_gen__AddTrailOps_26, &ll_backend__ite_gen__SaveTicketCode_27, &ll_backend__ite_gen__MaybeTicketSlot_28, ll_backend__ite_gen__STATE_VARIABLE_CI_67_67, &ll_backend__ite_gen__STATE_VARIABLE_CI_69_69, ll_backend__ite_gen__STATE_VARIABLE_CLD_68_68, &ll_backend__ite_gen__STATE_VARIABLE_CLD_70_70);
    }
#line 376 "ite_gen.m"
    {
#line 376 "ite_gen.m"
      ll_backend__ite_gen__IteRegionOps_30 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_69_69, ll_backend__ite_gen__NotGoalInfo_13);
    }
#line 378 "ite_gen.m"
    ll_backend__ite_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_12, (MR_Integer) 0)));
#line 378 "ite_gen.m"
    ll_backend__ite_gen__GoalInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_12, (MR_Integer) 1)));
#line 379 "ite_gen.m"
    {
#line 379 "ite_gen.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__ite_gen__Goal_12, &ll_backend__ite_gen__CondGoals_33);
    }
#line 380 "ite_gen.m"
    {
#line 380 "ite_gen.m"
      ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(ll_backend__ite_gen__IteRegionOps_30, ll_backend__ite_gen__GoalInfo_32, ll_backend__ite_gen__CondGoals_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__ite_gen__RegionCondCode_34, &ll_backend__ite_gen__RegionThenCode_35, &ll_backend__ite_gen__RegionElseCode_36, &ll_backend__ite_gen__RegionStackVars_37, &ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38, ll_backend__ite_gen__STATE_VARIABLE_CI_69_69, &ll_backend__ite_gen__STATE_VARIABLE_CI_72_72, ll_backend__ite_gen__STATE_VARIABLE_CLD_70_70, &ll_backend__ite_gen__STATE_VARIABLE_CLD_73_73);
    }
#line 385 "ite_gen.m"
    {
#line 385 "ite_gen.m"
      ll_backend__ite_gen__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 385 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 0) = ((MR_Box) (&ll_backend__ite_gen_scalar_common_2[0]));
#line 385 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 1) = ((MR_Box) (ll_backend__ite_gen__generate_negation_general_10_p_0_1));
#line 385 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 385 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 3) = ((MR_Box) (ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38));
#line 385 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_74_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "ite_gen.m"
    }
#line 385 "ite_gen.m"
    {
#line 385 "ite_gen.m"
      mercury__require__expect_4_p_0(ll_backend__ite_gen__V_74_74, (MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.generate_negation_general\'/10", (MR_String) "MaybeRegionSuccRecordSlot = yes(_)");
    }
#line 388 "ite_gen.m"
    {
#line 388 "ite_gen.m"
      ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0(ll_backend__ite_gen__CodeModel_11, ll_backend__ite_gen__MaybeRegionSuccRecordSlot_38, &ll_backend__ite_gen__HijackInfo_39, &ll_backend__ite_gen__PrepareHijackCode_40, ll_backend__ite_gen__STATE_VARIABLE_CI_72_72, &ll_backend__ite_gen__STATE_VARIABLE_CI_79_79, ll_backend__ite_gen__STATE_VARIABLE_CLD_73_73, &ll_backend__ite_gen__STATE_VARIABLE_CLD_80_80);
    }
#line 391 "ite_gen.m"
    {
#line 391 "ite_gen.m"
      ll_backend__ite_gen__V_81_81 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_137_137, ll_backend__ite_gen__ResumeVars_14);
    }
#line 391 "ite_gen.m"
    {
#line 391 "ite_gen.m"
      ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__ite_gen__V_81_81, ll_backend__ite_gen__ResumeLocs_15, ll_backend__ite_gen__ResumeMap_19, &ll_backend__ite_gen__ResumePoint_41, ll_backend__ite_gen__STATE_VARIABLE_CI_79_79, &ll_backend__ite_gen__STATE_VARIABLE_CI_82_82);
    }
#line 393 "ite_gen.m"
    {
#line 393 "ite_gen.m"
      ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__ite_gen__ResumePoint_41, ll_backend__ite_gen__CodeModel_11, &ll_backend__ite_gen__EffectResumeCode_42, ll_backend__ite_gen__STATE_VARIABLE_CLD_80_80, &ll_backend__ite_gen__STATE_VARIABLE_CLD_83_83);
    }
#line 397 "ite_gen.m"
    {
#line 397 "ite_gen.m"
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__ite_gen__Goal_12, ll_backend__ite_gen__NotGoalInfo_13, &ll_backend__ite_gen__EnterTraceCode_43, ll_backend__ite_gen__STATE_VARIABLE_CI_82_82, &ll_backend__ite_gen__STATE_VARIABLE_CI_84_84, ll_backend__ite_gen__STATE_VARIABLE_CLD_83_83, &ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85);
    }
#line 399 "ite_gen.m"
    {
#line 399 "ite_gen.m"
      ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 1, ll_backend__ite_gen__Goal_12, &ll_backend__ite_gen__GoalCode_44, ll_backend__ite_gen__STATE_VARIABLE_CI_84_84, &ll_backend__ite_gen__STATE_VARIABLE_CI_87_87, ll_backend__ite_gen__STATE_VARIABLE_CLD_85_85, &ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88);
    }
#line 401 "ite_gen.m"
    {
#line 401 "ite_gen.m"
      ll_backend__code_loc_dep__ite_enter_then_8_p_0(ll_backend__ite_gen__HijackInfo_39, ll_backend__ite_gen__ResumePoint_41, &ll_backend__ite_gen__ThenNeckCode_45, &ll_backend__ite_gen__ElseNeckCode_46, ll_backend__ite_gen__STATE_VARIABLE_CI_87_87, &ll_backend__ite_gen__STATE_VARIABLE_CI_89_89, ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88, &ll_backend__ite_gen__STATE_VARIABLE_CLD_90_90);
    }
#line 405 "ite_gen.m"
    {
#line 405 "ite_gen.m"
      ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__ite_gen__Zombies_47, ll_backend__ite_gen__STATE_VARIABLE_CLD_90_90, &ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91);
    }
#line 406 "ite_gen.m"
    {
#line 406 "ite_gen.m"
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__ite_gen__Zombies_47, ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91, &ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92);
    }
#line 408 "ite_gen.m"
    {
#line 408 "ite_gen.m"
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__ite_gen__LiveVars_48);
    }
#line 416 "ite_gen.m"
#line 416 "ite_gen.m"
    switch (ll_backend__ite_gen__CodeModel_11) {
#line 416 "ite_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 416 "ite_gen.m"
      case (MR_Integer) 0:
#line 411 "ite_gen.m"
        {
#line 411 "ite_gen.m"
          MR_Word ll_backend__ite_gen__TypeCtorInfo_139_139 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 413 "ite_gen.m"
          {
#line 413 "ite_gen.m"
            ll_backend__ite_gen__PruneTicketCode_49 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_139_139);
          }
#line 414 "ite_gen.m"
          {
#line 414 "ite_gen.m"
            ll_backend__ite_gen__FailTraceCode_50 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_139_139);
          }
#line 415 "ite_gen.m"
          {
#line 415 "ite_gen.m"
            ll_backend__ite_gen__FailCode_51 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_139_139);
          }
#line 411 "ite_gen.m"
          ll_backend__ite_gen__STATE_VARIABLE_CI_101_101 = ll_backend__ite_gen__STATE_VARIABLE_CI_89_89;
#line 411 "ite_gen.m"
          ll_backend__ite_gen__STATE_VARIABLE_CLD_102_102 = ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92;
#line 411 "ite_gen.m"
        }
#line 416 "ite_gen.m"
        break;
#line 416 "ite_gen.m"
      case (MR_Integer) 2:
#line 416 "ite_gen.m"
      case (MR_Integer) 1:
#line 419 "ite_gen.m"
        {
#line 419 "ite_gen.m"
          MR_Word ll_backend__ite_gen__AfterNegatedGoal_52;
#line 419 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_93_93;
#line 419 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94;
#line 419 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_96_96;
#line 419 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_97_97;
#line 419 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_99_99;
#line 419 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_100_100;

#line 420 "ite_gen.m"
          {
#line 420 "ite_gen.m"
            ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__ite_gen__AfterNegatedGoal_52);
          }
#line 423 "ite_gen.m"
          {
#line 423 "ite_gen.m"
            ll_backend__code_loc_dep__maybe_release_hp_5_p_0(ll_backend__ite_gen__MaybeHpSlot_25, ll_backend__ite_gen__STATE_VARIABLE_CI_89_89, &ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, ll_backend__ite_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94);
          }
#line 424 "ite_gen.m"
          {
#line 424 "ite_gen.m"
            ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(ll_backend__ite_gen__MaybeTicketSlot_28, (MR_Integer) 1, &ll_backend__ite_gen__PruneTicketCode_49, ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, &ll_backend__ite_gen__STATE_VARIABLE_CI_96_96, ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__ite_gen__STATE_VARIABLE_CLD_97_97);
          }
#line 426 "ite_gen.m"
          {
#line 426 "ite_gen.m"
            ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(ll_backend__ite_gen__Goal_12, ll_backend__ite_gen__NotGoalInfo_13, (MR_Integer) 1, &ll_backend__ite_gen__FailTraceCode_50, ll_backend__ite_gen__STATE_VARIABLE_CI_96_96, &ll_backend__ite_gen__STATE_VARIABLE_CI_99_99, ll_backend__ite_gen__STATE_VARIABLE_CLD_97_97, &ll_backend__ite_gen__STATE_VARIABLE_CLD_100_100);
          }
#line 428 "ite_gen.m"
          {
#line 428 "ite_gen.m"
            ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__ite_gen__FailCode_51, ll_backend__ite_gen__STATE_VARIABLE_CI_99_99, &ll_backend__ite_gen__STATE_VARIABLE_CI_101_101, ll_backend__ite_gen__STATE_VARIABLE_CLD_100_100);
          }
#line 432 "ite_gen.m"
          {
#line 432 "ite_gen.m"
            ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__ite_gen__AfterNegatedGoal_52, ll_backend__ite_gen__STATE_VARIABLE_CI_101_101, &ll_backend__ite_gen__STATE_VARIABLE_CLD_102_102);
          }
#line 419 "ite_gen.m"
        }
#line 416 "ite_gen.m"
        break;
#line 416 "ite_gen.m"
    }
#line 436 "ite_gen.m"
    {
#line 436 "ite_gen.m"
      ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__ite_gen__ResumePoint_41, &ll_backend__ite_gen__ResumeCode_53, ll_backend__ite_gen__STATE_VARIABLE_CI_101_101, &ll_backend__ite_gen__STATE_VARIABLE_CI_103_103, ll_backend__ite_gen__STATE_VARIABLE_CLD_102_102, &ll_backend__ite_gen__STATE_VARIABLE_CLD_104_104);
    }
#line 438 "ite_gen.m"
    {
#line 438 "ite_gen.m"
      ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__ite_gen__LiveVars_48, ll_backend__ite_gen__STATE_VARIABLE_CLD_104_104, &ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105);
    }
#line 441 "ite_gen.m"
    {
#line 441 "ite_gen.m"
      ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(ll_backend__ite_gen__MaybeHpSlot_25, &ll_backend__ite_gen__RestoreHpCode_54, ll_backend__ite_gen__STATE_VARIABLE_CI_103_103, &ll_backend__ite_gen__STATE_VARIABLE_CI_106_106, ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105, &ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107);
    }
#line 442 "ite_gen.m"
    {
#line 442 "ite_gen.m"
      ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(ll_backend__ite_gen__MaybeTicketSlot_28, (MR_Integer) 0, &ll_backend__ite_gen__RestoreTicketCode_55, ll_backend__ite_gen__STATE_VARIABLE_CI_106_106, &ll_backend__ite_gen__STATE_VARIABLE_CI_109_109, ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107, &ll_backend__ite_gen__STATE_VARIABLE_CLD_110_110);
    }
#line 444 "ite_gen.m"
    {
#line 444 "ite_gen.m"
      ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__ite_gen__RegionStackVars_37, (MR_Integer) 1, ll_backend__ite_gen__STATE_VARIABLE_CI_109_109, &ll_backend__ite_gen__STATE_VARIABLE_CI_112_112, ll_backend__ite_gen__STATE_VARIABLE_CLD_110_110, &ll_backend__ite_gen__STATE_VARIABLE_CLD_113_113);
    }
#line 446 "ite_gen.m"
    {
#line 446 "ite_gen.m"
      ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(ll_backend__ite_gen__Goal_12, ll_backend__ite_gen__NotGoalInfo_13, (MR_Integer) 0, &ll_backend__ite_gen__SuccessTraceCode_56, ll_backend__ite_gen__STATE_VARIABLE_CI_112_112, ll_backend__ite_gen__STATE_VARIABLE_CI_61, ll_backend__ite_gen__STATE_VARIABLE_CLD_113_113, ll_backend__ite_gen__STATE_VARIABLE_CLD_63);
    }
#line 449 "ite_gen.m"
    {
#line 449 "ite_gen.m"
      ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(ll_backend__ite_gen__Globals_21, ll_backend__ite_gen__NotGoalInfo_13, &ll_backend__ite_gen__PNegCondCode_57, &ll_backend__ite_gen__PNegThenCode_58, &ll_backend__ite_gen__PNegElseCode_59);
    }
#line 2962 "ll_backend.ite_gen.c"
    ll_backend__ite_gen__TypeCtorInfo_140_140 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 472 "ite_gen.m"
    {
#line 472 "ite_gen.m"
      ll_backend__ite_gen__V_136_136 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__SuccessTraceCode_56, ll_backend__ite_gen__PNegElseCode_59);
    }
#line 471 "ite_gen.m"
    {
#line 471 "ite_gen.m"
      ll_backend__ite_gen__V_135_135 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RegionElseCode_36, ll_backend__ite_gen__V_136_136);
    }
#line 470 "ite_gen.m"
    {
#line 470 "ite_gen.m"
      ll_backend__ite_gen__V_134_134 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RestoreHpCode_54, ll_backend__ite_gen__V_135_135);
    }
#line 469 "ite_gen.m"
    {
#line 469 "ite_gen.m"
      ll_backend__ite_gen__V_133_133 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RestoreTicketCode_55, ll_backend__ite_gen__V_134_134);
    }
#line 468 "ite_gen.m"
    {
#line 468 "ite_gen.m"
      ll_backend__ite_gen__V_132_132 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__ElseNeckCode_46, ll_backend__ite_gen__V_133_133);
    }
#line 467 "ite_gen.m"
    {
#line 467 "ite_gen.m"
      ll_backend__ite_gen__V_131_131 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__ResumeCode_53, ll_backend__ite_gen__V_132_132);
    }
#line 466 "ite_gen.m"
    {
#line 466 "ite_gen.m"
      ll_backend__ite_gen__V_130_130 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__FailCode_51, ll_backend__ite_gen__V_131_131);
    }
#line 465 "ite_gen.m"
    {
#line 465 "ite_gen.m"
      ll_backend__ite_gen__V_129_129 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__PNegThenCode_58, ll_backend__ite_gen__V_130_130);
    }
#line 464 "ite_gen.m"
    {
#line 464 "ite_gen.m"
      ll_backend__ite_gen__V_128_128 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__FailTraceCode_50, ll_backend__ite_gen__V_129_129);
    }
#line 463 "ite_gen.m"
    {
#line 463 "ite_gen.m"
      ll_backend__ite_gen__V_127_127 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RegionThenCode_35, ll_backend__ite_gen__V_128_128);
    }
#line 462 "ite_gen.m"
    {
#line 462 "ite_gen.m"
      ll_backend__ite_gen__V_126_126 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__PruneTicketCode_49, ll_backend__ite_gen__V_127_127);
    }
#line 461 "ite_gen.m"
    {
#line 461 "ite_gen.m"
      ll_backend__ite_gen__V_125_125 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__ThenNeckCode_45, ll_backend__ite_gen__V_126_126);
    }
#line 460 "ite_gen.m"
    {
#line 460 "ite_gen.m"
      ll_backend__ite_gen__V_124_124 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__GoalCode_44, ll_backend__ite_gen__V_125_125);
    }
#line 459 "ite_gen.m"
    {
#line 459 "ite_gen.m"
      ll_backend__ite_gen__V_123_123 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__PNegCondCode_57, ll_backend__ite_gen__V_124_124);
    }
#line 458 "ite_gen.m"
    {
#line 458 "ite_gen.m"
      ll_backend__ite_gen__V_122_122 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__EnterTraceCode_43, ll_backend__ite_gen__V_123_123);
    }
#line 457 "ite_gen.m"
    {
#line 457 "ite_gen.m"
      ll_backend__ite_gen__V_121_121 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__RegionCondCode_34, ll_backend__ite_gen__V_122_122);
    }
#line 456 "ite_gen.m"
    {
#line 456 "ite_gen.m"
      ll_backend__ite_gen__V_120_120 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__SaveTicketCode_27, ll_backend__ite_gen__V_121_121);
    }
#line 455 "ite_gen.m"
    {
#line 455 "ite_gen.m"
      ll_backend__ite_gen__V_119_119 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__SaveHpCode_24, ll_backend__ite_gen__V_120_120);
    }
#line 454 "ite_gen.m"
    {
#line 454 "ite_gen.m"
      ll_backend__ite_gen__V_118_118 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__EffectResumeCode_42, ll_backend__ite_gen__V_119_119);
    }
#line 453 "ite_gen.m"
    {
#line 453 "ite_gen.m"
      ll_backend__ite_gen__V_117_117 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__PrepareHijackCode_40, ll_backend__ite_gen__V_118_118);
    }
#line 452 "ite_gen.m"
    {
#line 452 "ite_gen.m"
      *ll_backend__ite_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_140_140, ll_backend__ite_gen__FlushCode_20, ll_backend__ite_gen__V_117_117);
    }
#line 349 "ite_gen.m"
  }
#line 343 "ite_gen.m"
}

#line 34 "ite_gen.m"
void MR_CALL 
ll_backend__ite_gen__generate_negation_8_p_0(
#line 34 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CodeModel_9,
#line 34 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Goal0_10,
#line 34 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NotGoalInfo_11,
#line 34 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__Code_12,
#line 34 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_37,
#line 34 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_38,
#line 34 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_39,
#line 34 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_40)
#line 34 "ite_gen.m"
{
#line 289 "ite_gen.m"
  {
#line 289 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 289 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalExpr_15;
#line 289 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalInfo0_16;
#line 289 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeVars_17;
#line 289 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeLocs_18;
#line 289 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalInfo_19;
#line 289 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Goal_20;
#line 289 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Resume_69;
#line 335 "ite_gen.m"
    MR_Word ll_backend__ite_gen__L_24;
#line 335 "ite_gen.m"
    MR_Word ll_backend__ite_gen__R_25;
#line 335 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CodeAddr_27;
#line 307 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Globals_28;
#line 307 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_45_45;
#line 307 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_46_46;
#line 307 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_47_47;
#line 308 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_21_21;
#line 308 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_22_22;
#line 308 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_23_23;
#line 308 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_26_26;

#line 293 "ite_gen.m"
#line 293 "ite_gen.m"
    switch (ll_backend__ite_gen__CodeModel_9) {
#line 293 "ite_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 293 "ite_gen.m"
      case (MR_Integer) 0:
#line 294 "ite_gen.m"
        {
#line 294 "ite_gen.m"
        }
#line 293 "ite_gen.m"
        break;
#line 293 "ite_gen.m"
      case (MR_Integer) 2:
#line 291 "ite_gen.m"
        {
#line 292 "ite_gen.m"
          {
#line 292 "ite_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.generate_negation\'/8", (MR_String) "nondet negation");
#line 292 "ite_gen.m"
            return;
          }
#line 291 "ite_gen.m"
        }
#line 293 "ite_gen.m"
        break;
#line 293 "ite_gen.m"
      case (MR_Integer) 1:
#line 295 "ite_gen.m"
        {
#line 295 "ite_gen.m"
        }
#line 293 "ite_gen.m"
        break;
#line 293 "ite_gen.m"
    }
#line 299 "ite_gen.m"
    ll_backend__ite_gen__GoalExpr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal0_10, (MR_Integer) 0)));
#line 299 "ite_gen.m"
    ll_backend__ite_gen__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal0_10, (MR_Integer) 1)));
#line 483 "ite_gen.m"
    {
#line 483 "ite_gen.m"
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__ite_gen__GoalInfo0_16, &ll_backend__ite_gen__Resume_69);
    }
#line 490 "ite_gen.m"
    if ((ll_backend__ite_gen__Resume_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "ite_gen.m"
      {
#line 493 "ite_gen.m"
        {
#line 493 "ite_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.read_and_erase_resume_point\'/5", (MR_String) "negated goal has no resume point");
#line 493 "ite_gen.m"
          return;
        }
#line 491 "ite_gen.m"
      }
#line 490 "ite_gen.m"
    else
#line 485 "ite_gen.m"
      {
#line 485 "ite_gen.m"
        ll_backend__ite_gen__ResumeVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_69, (MR_Integer) 0)));
#line 485 "ite_gen.m"
        ll_backend__ite_gen__ResumeLocs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_69, (MR_Integer) 1)));
#line 489 "ite_gen.m"
        {
#line 489 "ite_gen.m"
          hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ite_gen__GoalInfo0_16, &ll_backend__ite_gen__GoalInfo_19);
        }
#line 485 "ite_gen.m"
      }
#line 302 "ite_gen.m"
    {
#line 302 "ite_gen.m"
      ll_backend__ite_gen__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_20, 0) = ((MR_Box) (ll_backend__ite_gen__GoalExpr_15));
#line 302 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_20, 1) = ((MR_Box) (ll_backend__ite_gen__GoalInfo_19));
#line 302 "ite_gen.m"
    }
#line 307 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CodeModel_9 == (MR_Integer) 1);
#line 307 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 307 "ite_gen.m"
      {
#line 308 "ite_gen.m"
        ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__GoalExpr_15)) == (MR_mktag((MR_Integer) 1)));
#line 308 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 308 "ite_gen.m"
          {
#line 308 "ite_gen.m"
            ll_backend__ite_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 0)));
#line 308 "ite_gen.m"
            ll_backend__ite_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 1)));
#line 308 "ite_gen.m"
            ll_backend__ite_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 2)));
#line 308 "ite_gen.m"
            ll_backend__ite_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 3)));
#line 308 "ite_gen.m"
            ll_backend__ite_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_15, (MR_Integer) 4)));
#line 308 "ite_gen.m"
            ll_backend__ite_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__ite_gen__V_45_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_45_45, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 308 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 308 "ite_gen.m"
              {
#line 308 "ite_gen.m"
                ll_backend__ite_gen__L_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_45_45, (MR_Integer) 1)));
#line 308 "ite_gen.m"
                ll_backend__ite_gen__R_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_45_45, (MR_Integer) 2)));
#line 309 "ite_gen.m"
                {
#line 309 "ite_gen.m"
                  ll_backend__ite_gen__succeeded = ll_backend__code_loc_dep__failure_is_direct_branch_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_0_39, &ll_backend__ite_gen__CodeAddr_27);
                }
#line 307 "ite_gen.m"
                if (ll_backend__ite_gen__succeeded)
#line 307 "ite_gen.m"
                  {
#line 310 "ite_gen.m"
                    {
#line 310 "ite_gen.m"
                      ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, &ll_backend__ite_gen__Globals_28);
                    }
#line 311 "ite_gen.m"
                    ll_backend__ite_gen__V_46_46 = (MR_Integer) 457;
#line 311 "ite_gen.m"
                    ll_backend__ite_gen__V_47_47 = (MR_Integer) 1;
#line 311 "ite_gen.m"
                    {
#line 311 "ite_gen.m"
                      ll_backend__ite_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__ite_gen__Globals_28, ll_backend__ite_gen__V_46_46, ll_backend__ite_gen__V_47_47);
                    }
#line 307 "ite_gen.m"
                  }
#line 308 "ite_gen.m"
              }
#line 308 "ite_gen.m"
          }
#line 307 "ite_gen.m"
      }
#line 335 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 318 "ite_gen.m"
      {
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_63_63;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__SimpleNeg_29;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__CodeL_30;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__ValL_31;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__CodeR_32;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__ValR_33;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Type_34;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Op_35;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TestCode_36;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_48_48;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_49_49;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_50_50;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_51_51;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_54_54;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_55_55;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_56_56;
#line 318 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_59_59;
#line 322 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_52_52;

#line 317 "ite_gen.m"
        {
#line 317 "ite_gen.m"
          ll_backend__ite_gen__V_48_48 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__ite_gen__ResumeVars_17);
        }
#line 317 "ite_gen.m"
        {
#line 317 "ite_gen.m"
          ll_backend__code_loc_dep__enter_simple_neg_5_p_0(ll_backend__ite_gen__V_48_48, ll_backend__ite_gen__GoalInfo_19, &ll_backend__ite_gen__SimpleNeg_29, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_39, &ll_backend__ite_gen__STATE_VARIABLE_CLD_49_49);
        }
#line 319 "ite_gen.m"
        {
#line 319 "ite_gen.m"
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__ite_gen__L_24, &ll_backend__ite_gen__CodeL_30, &ll_backend__ite_gen__ValL_31, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__STATE_VARIABLE_CLD_49_49, &ll_backend__ite_gen__STATE_VARIABLE_CLD_50_50);
        }
#line 320 "ite_gen.m"
        {
#line 320 "ite_gen.m"
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__ite_gen__R_25, &ll_backend__ite_gen__CodeR_32, &ll_backend__ite_gen__ValR_33, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__STATE_VARIABLE_CLD_50_50, &ll_backend__ite_gen__STATE_VARIABLE_CLD_51_51);
        }
#line 321 "ite_gen.m"
        {
#line 321 "ite_gen.m"
          ll_backend__ite_gen__Type_34 = ll_backend__code_info__variable_type_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__L_24);
        }
#line 322 "ite_gen.m"
        ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__Type_34)) == (MR_mktag((MR_Integer) 2)));
#line 322 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 322 "ite_gen.m"
          {
#line 322 "ite_gen.m"
            ll_backend__ite_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__Type_34, (MR_Integer) 0)));
#line 322 "ite_gen.m"
            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_52_52 == (MR_Integer) 2);
#line 322 "ite_gen.m"
          }
#line 324 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 323 "ite_gen.m"
          ll_backend__ite_gen__Op_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
#line 324 "ite_gen.m"
        else
#line 326 "ite_gen.m"
          {
#line 324 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_53_53;

#line 324 "ite_gen.m"
            ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__Type_34)) == (MR_mktag((MR_Integer) 2)));
#line 324 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 324 "ite_gen.m"
              {
#line 324 "ite_gen.m"
                ll_backend__ite_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__Type_34, (MR_Integer) 0)));
#line 324 "ite_gen.m"
                ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_53_53 == (MR_Integer) 1);
#line 324 "ite_gen.m"
              }
#line 326 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 325 "ite_gen.m"
              ll_backend__ite_gen__Op_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32));
#line 326 "ite_gen.m"
            else
#line 327 "ite_gen.m"
              ll_backend__ite_gen__Op_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 326 "ite_gen.m"
          }
#line 3395 "ll_backend.ite_gen.c"
        ll_backend__ite_gen__TypeCtorInfo_63_63 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 330 "ite_gen.m"
        {
#line 330 "ite_gen.m"
          ll_backend__ite_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 330 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 330 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 1) = ((MR_Box) (ll_backend__ite_gen__Op_35));
#line 330 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 2) = ((MR_Box) (ll_backend__ite_gen__ValL_31));
#line 330 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 3) = ((MR_Box) (ll_backend__ite_gen__ValR_33));
#line 330 "ite_gen.m"
        }
#line 330 "ite_gen.m"
        {
#line 330 "ite_gen.m"
          ll_backend__ite_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 330 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 330 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_55_55, 1) = ((MR_Box) (ll_backend__ite_gen__V_56_56));
#line 330 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_55_55, 2) = ((MR_Box) (ll_backend__ite_gen__CodeAddr_27));
#line 330 "ite_gen.m"
        }
#line 330 "ite_gen.m"
        {
#line 330 "ite_gen.m"
          ll_backend__ite_gen__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_54_54, 0) = ((MR_Box) (ll_backend__ite_gen__V_55_55));
#line 330 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_54_54, 1) = ((MR_Box) ((MR_String) "test inequality"));
#line 330 "ite_gen.m"
        }
#line 329 "ite_gen.m"
        {
#line 329 "ite_gen.m"
          ll_backend__ite_gen__TestCode_36 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_63_63, ((MR_Box) (ll_backend__ite_gen__V_54_54)));
        }
#line 333 "ite_gen.m"
        {
#line 333 "ite_gen.m"
          ll_backend__code_loc_dep__leave_simple_neg_5_p_0(ll_backend__ite_gen__GoalInfo_19, ll_backend__ite_gen__SimpleNeg_29, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__STATE_VARIABLE_CLD_51_51, ll_backend__ite_gen__STATE_VARIABLE_CLD_40);
        }
#line 334 "ite_gen.m"
        {
#line 334 "ite_gen.m"
          ll_backend__ite_gen__V_59_59 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_63_63, ll_backend__ite_gen__CodeR_32, ll_backend__ite_gen__TestCode_36);
        }
#line 334 "ite_gen.m"
        {
#line 334 "ite_gen.m"
          *ll_backend__ite_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_63_63, ll_backend__ite_gen__CodeL_30, ll_backend__ite_gen__V_59_59);
        }
#line 318 "ite_gen.m"
        *ll_backend__ite_gen__STATE_VARIABLE_CI_38 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_37;
#line 318 "ite_gen.m"
      }
#line 335 "ite_gen.m"
    else
#line 336 "ite_gen.m"
      {
#line 336 "ite_gen.m"
        ll_backend__ite_gen__generate_negation_general_10_p_0(ll_backend__ite_gen__CodeModel_9, ll_backend__ite_gen__Goal_20, ll_backend__ite_gen__NotGoalInfo_11, ll_backend__ite_gen__ResumeVars_17, ll_backend__ite_gen__ResumeLocs_18, ll_backend__ite_gen__Code_12, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__STATE_VARIABLE_CI_38, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_39, ll_backend__ite_gen__STATE_VARIABLE_CLD_40);
#line 336 "ite_gen.m"
        return;
      }
#line 289 "ite_gen.m"
  }
#line 34 "ite_gen.m"
}

#line 29 "ite_gen.m"
void MR_CALL 
ll_backend__ite_gen__generate_ite_10_p_0(
#line 29 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CodeModel_11,
#line 29 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoal0_12,
#line 29 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ThenGoal_13,
#line 29 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ElseGoal_14,
#line 29 "ite_gen.m"
  MR_Word ll_backend__ite_gen__IteGoalInfo_15,
#line 29 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__Code_16,
#line 29 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_82,
#line 29 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_83,
#line 29 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_0_84,
#line 29 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CLD_85)
#line 29 "ite_gen.m"
{
#line 77 "ite_gen.m"
  {
#line 77 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__TypeCtorInfo_182_182;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__TypeCtorInfo_188_188;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondExpr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal0_12, (MR_Integer) 0)));
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal0_12, (MR_Integer) 1)));
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondCodeModel_21;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EffCodeModel_22;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeVars_23;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeLocs_24;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondInfo_25;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondGoal_26;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeMap_27;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__FlushCode_28;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Globals_29;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ReclaimOption_30;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ReclaimHeap_31;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SaveHpCode_32;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeHpSlot_33;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__AddTrailOps_34;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__IteTrailOps_35;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SaveTicketCode_37;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeTicketSlot_38;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__IteRegionOps_40;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseGoals_41;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondGoals_42;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionCondCode_43;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionThenCode_44;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionElseCode_45;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionStackVars_46;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeEmbeddedStackFrameId_47;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__BranchStart_48;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__HijackInfo_49;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PrepareHijackCode_50;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumePoint_51;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EffectResumeCode_52;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondTraceCode_53;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondCode_54;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenNeckCode_55;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseNeckCode_56;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Zombies_57;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResetTicketCode_58;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__StoreMap_59;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EndCondInstMap_60;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenTraceCode_61;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenCode_62;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__BranchEndStoreMap_63;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeEnd0_64;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenSaveCode_65;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeCode_66;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RestoreHpCode_69;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RestoreTicketCode_70;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseTraceCode_71;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseCode_72;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeEnd_73;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseSaveCode_74;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EndLabel_76;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__JumpToEndCode_77;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EndLabelCode_78;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegCondCode_79;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegThenCode_80;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegElseCode_81;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_87_87;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_90_90;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_93_93;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_95_95;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_96_96;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_97_97;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_98_98;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_99_99;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_100_100;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_101_101;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_102_102;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_103_103;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_104_104;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_106_106;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_108_108;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_109_109;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_116_116;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_121_121;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_122_122;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_124_124;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_125_125;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_126_126;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_133_133;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_136_136;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_137_137;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_138_138;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_139_139;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_140_140;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_141_141;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_149_149;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_150_150;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_151_151;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_153_153;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_154_154;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_156_156;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_157_157;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_158_158;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_159_159;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_160_160;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_161_161;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_162_162;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_163_163;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_164_164;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_165_165;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_166_166;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_167_167;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_168_168;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_169_169;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_170_170;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_171_171;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_172_172;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_173_173;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_174_174;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_175_175;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_176_176;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_177_177;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_178_178;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_179_179;
#line 77 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_180_180;

#line 79 "ite_gen.m"
    {
#line 79 "ite_gen.m"
      ll_backend__ite_gen__CondCodeModel_21 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__ite_gen__CondInfo0_20);
    }
#line 81 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CodeModel_11 == (MR_Integer) 2);
#line 81 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 81 "ite_gen.m"
      {
#line 82 "ite_gen.m"
        ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CondCodeModel_21 == (MR_Integer) 2);
#line 82 "ite_gen.m"
        ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
#line 81 "ite_gen.m"
      }
#line 85 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 84 "ite_gen.m"
      ll_backend__ite_gen__EffCodeModel_22 = (MR_Integer) 1;
#line 85 "ite_gen.m"
    else
#line 86 "ite_gen.m"
      ll_backend__ite_gen__EffCodeModel_22 = ll_backend__ite_gen__CodeModel_11;
#line 89 "ite_gen.m"
    {
#line 89 "ite_gen.m"
      ll_backend__ite_gen__read_and_erase_resume_point_5_p_0((MR_String) "condition of an if-then-else", &ll_backend__ite_gen__ResumeVars_23, &ll_backend__ite_gen__ResumeLocs_24, ll_backend__ite_gen__CondInfo0_20, &ll_backend__ite_gen__CondInfo_25);
    }
#line 91 "ite_gen.m"
    {
#line 91 "ite_gen.m"
      ll_backend__ite_gen__CondGoal_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 91 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal_26, 0) = ((MR_Box) (ll_backend__ite_gen__CondExpr_19));
#line 91 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal_26, 1) = ((MR_Box) (ll_backend__ite_gen__CondInfo_25));
#line 91 "ite_gen.m"
    }
#line 3793 "ll_backend.ite_gen.c"
    ll_backend__ite_gen__TypeCtorInfo_182_182 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 96 "ite_gen.m"
    {
#line 96 "ite_gen.m"
      ll_backend__ite_gen__V_87_87 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_182_182, ll_backend__ite_gen__ResumeVars_23);
    }
#line 96 "ite_gen.m"
    {
#line 96 "ite_gen.m"
      ll_backend__code_loc_dep__produce_vars_6_p_0(ll_backend__ite_gen__V_87_87, &ll_backend__ite_gen__ResumeMap_27, &ll_backend__ite_gen__FlushCode_28, ll_backend__ite_gen__STATE_VARIABLE_CI_0_82, ll_backend__ite_gen__STATE_VARIABLE_CLD_0_84, &ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88);
    }
#line 102 "ite_gen.m"
    {
#line 102 "ite_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_82, &ll_backend__ite_gen__Globals_29);
    }
#line 103 "ite_gen.m"
    {
#line 103 "ite_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__ite_gen__Globals_29, (MR_Integer) 310, &ll_backend__ite_gen__ReclaimOption_30);
    }
#line 106 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__ReclaimOption_30 == (MR_Integer) 1);
#line 106 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 107 "ite_gen.m"
      {
#line 107 "ite_gen.m"
        ll_backend__ite_gen__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ll_backend__ite_gen__CondGoal_26);
      }
#line 110 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 109 "ite_gen.m"
      ll_backend__ite_gen__ReclaimHeap_31 = (MR_Integer) 1;
#line 110 "ite_gen.m"
    else
#line 111 "ite_gen.m"
      ll_backend__ite_gen__ReclaimHeap_31 = (MR_Integer) 0;
#line 113 "ite_gen.m"
    {
#line 113 "ite_gen.m"
      ll_backend__code_loc_dep__maybe_save_hp_7_p_0(ll_backend__ite_gen__ReclaimHeap_31, &ll_backend__ite_gen__SaveHpCode_32, &ll_backend__ite_gen__MaybeHpSlot_33, ll_backend__ite_gen__STATE_VARIABLE_CI_0_82, &ll_backend__ite_gen__STATE_VARIABLE_CI_90_90, ll_backend__ite_gen__STATE_VARIABLE_CLD_88_88, &ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91);
    }
#line 118 "ite_gen.m"
    {
#line 118 "ite_gen.m"
      ll_backend__ite_gen__AddTrailOps_34 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_90_90, ll_backend__ite_gen__IteGoalInfo_15);
    }
#line 122 "ite_gen.m"
#line 122 "ite_gen.m"
    switch (ll_backend__ite_gen__AddTrailOps_34) {
#line 122 "ite_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 122 "ite_gen.m"
      case (MR_Integer) 0:
#line 123 "ite_gen.m"
        {
#line 123 "ite_gen.m"
          MR_Word ll_backend__ite_gen__OptTrailOps_36;
#line 126 "ite_gen.m"
          MR_Word ll_backend__ite_gen__V_92_92;

#line 124 "ite_gen.m"
          {
#line 124 "ite_gen.m"
            ll_backend__code_info__get_opt_trail_ops_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_90_90, &ll_backend__ite_gen__OptTrailOps_36);
          }
#line 126 "ite_gen.m"
          ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__OptTrailOps_36 == (MR_Integer) 1);
#line 126 "ite_gen.m"
          if (ll_backend__ite_gen__succeeded)
#line 126 "ite_gen.m"
            {
#line 127 "ite_gen.m"
              {
#line 127 "ite_gen.m"
                ll_backend__ite_gen__V_92_92 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(ll_backend__ite_gen__CondInfo0_20);
              }
#line 127 "ite_gen.m"
              ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_92_92 == (MR_Integer) 1);
#line 126 "ite_gen.m"
              if (ll_backend__ite_gen__succeeded)
#line 126 "ite_gen.m"
                {
#line 128 "ite_gen.m"
                  ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CondCodeModel_21 == (MR_Integer) 2);
#line 128 "ite_gen.m"
                  ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
#line 126 "ite_gen.m"
                }
#line 126 "ite_gen.m"
            }
#line 131 "ite_gen.m"
          if (ll_backend__ite_gen__succeeded)
#line 130 "ite_gen.m"
            ll_backend__ite_gen__IteTrailOps_35 = (MR_Integer) 1;
#line 131 "ite_gen.m"
          else
#line 132 "ite_gen.m"
            ll_backend__ite_gen__IteTrailOps_35 = (MR_Integer) 0;
#line 123 "ite_gen.m"
        }
#line 122 "ite_gen.m"
        break;
#line 122 "ite_gen.m"
      case (MR_Integer) 1:
#line 121 "ite_gen.m"
        ll_backend__ite_gen__IteTrailOps_35 = (MR_Integer) 1;
#line 122 "ite_gen.m"
        break;
#line 122 "ite_gen.m"
    }
#line 135 "ite_gen.m"
    {
#line 135 "ite_gen.m"
      ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(ll_backend__ite_gen__IteTrailOps_35, &ll_backend__ite_gen__SaveTicketCode_37, &ll_backend__ite_gen__MaybeTicketSlot_38, ll_backend__ite_gen__STATE_VARIABLE_CI_90_90, &ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, ll_backend__ite_gen__STATE_VARIABLE_CLD_91_91, &ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94);
    }
#line 139 "ite_gen.m"
    {
#line 139 "ite_gen.m"
      ll_backend__ite_gen__IteRegionOps_40 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, ll_backend__ite_gen__IteGoalInfo_15);
    }
#line 141 "ite_gen.m"
    {
#line 141 "ite_gen.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__ite_gen__ElseGoal_14, &ll_backend__ite_gen__ElseGoals_41);
    }
#line 142 "ite_gen.m"
    {
#line 142 "ite_gen.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__ite_gen__CondGoal_26, &ll_backend__ite_gen__CondGoals_42);
    }
#line 143 "ite_gen.m"
    {
#line 143 "ite_gen.m"
      ll_backend__ite_gen__maybe_create_ite_region_frame_13_p_0(ll_backend__ite_gen__IteRegionOps_40, ll_backend__ite_gen__CondInfo_25, ll_backend__ite_gen__CondGoals_42, ll_backend__ite_gen__ElseGoals_41, &ll_backend__ite_gen__RegionCondCode_43, &ll_backend__ite_gen__RegionThenCode_44, &ll_backend__ite_gen__RegionElseCode_45, &ll_backend__ite_gen__RegionStackVars_46, &ll_backend__ite_gen__MaybeEmbeddedStackFrameId_47, ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, &ll_backend__ite_gen__STATE_VARIABLE_CI_95_95, ll_backend__ite_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__ite_gen__STATE_VARIABLE_CLD_96_96);
    }
#line 147 "ite_gen.m"
    {
#line 147 "ite_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_96_96, &ll_backend__ite_gen__BranchStart_48);
    }
#line 149 "ite_gen.m"
    {
#line 149 "ite_gen.m"
      ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0(ll_backend__ite_gen__CondCodeModel_21, ll_backend__ite_gen__MaybeEmbeddedStackFrameId_47, &ll_backend__ite_gen__HijackInfo_49, &ll_backend__ite_gen__PrepareHijackCode_50, ll_backend__ite_gen__STATE_VARIABLE_CI_95_95, &ll_backend__ite_gen__STATE_VARIABLE_CI_97_97, ll_backend__ite_gen__STATE_VARIABLE_CLD_96_96, &ll_backend__ite_gen__STATE_VARIABLE_CLD_98_98);
    }
#line 152 "ite_gen.m"
    {
#line 152 "ite_gen.m"
      ll_backend__ite_gen__V_99_99 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_182_182, ll_backend__ite_gen__ResumeVars_23);
    }
#line 152 "ite_gen.m"
    {
#line 152 "ite_gen.m"
      ll_backend__code_loc_dep__make_resume_point_6_p_0(ll_backend__ite_gen__V_99_99, ll_backend__ite_gen__ResumeLocs_24, ll_backend__ite_gen__ResumeMap_27, &ll_backend__ite_gen__ResumePoint_51, ll_backend__ite_gen__STATE_VARIABLE_CI_97_97, &ll_backend__ite_gen__STATE_VARIABLE_CI_100_100);
    }
#line 154 "ite_gen.m"
    {
#line 154 "ite_gen.m"
      ll_backend__code_loc_dep__effect_resume_point_5_p_0(ll_backend__ite_gen__ResumePoint_51, ll_backend__ite_gen__EffCodeModel_22, &ll_backend__ite_gen__EffectResumeCode_52, ll_backend__ite_gen__STATE_VARIABLE_CLD_98_98, &ll_backend__ite_gen__STATE_VARIABLE_CLD_101_101);
    }
#line 157 "ite_gen.m"
    {
#line 157 "ite_gen.m"
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__ite_gen__CondGoal_26, ll_backend__ite_gen__IteGoalInfo_15, &ll_backend__ite_gen__CondTraceCode_53, ll_backend__ite_gen__STATE_VARIABLE_CI_100_100, &ll_backend__ite_gen__STATE_VARIABLE_CI_102_102, ll_backend__ite_gen__STATE_VARIABLE_CLD_101_101, &ll_backend__ite_gen__STATE_VARIABLE_CLD_103_103);
    }
#line 159 "ite_gen.m"
    {
#line 159 "ite_gen.m"
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__ite_gen__CondCodeModel_21, ll_backend__ite_gen__CondGoal_26, &ll_backend__ite_gen__CondCode_54, ll_backend__ite_gen__STATE_VARIABLE_CI_102_102, &ll_backend__ite_gen__STATE_VARIABLE_CI_104_104, ll_backend__ite_gen__STATE_VARIABLE_CLD_103_103, &ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105);
    }
#line 161 "ite_gen.m"
    {
#line 161 "ite_gen.m"
      ll_backend__code_loc_dep__ite_enter_then_8_p_0(ll_backend__ite_gen__HijackInfo_49, ll_backend__ite_gen__ResumePoint_51, &ll_backend__ite_gen__ThenNeckCode_55, &ll_backend__ite_gen__ElseNeckCode_56, ll_backend__ite_gen__STATE_VARIABLE_CI_104_104, &ll_backend__ite_gen__STATE_VARIABLE_CI_106_106, ll_backend__ite_gen__STATE_VARIABLE_CLD_105_105, &ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107);
    }
#line 165 "ite_gen.m"
    {
#line 165 "ite_gen.m"
      ll_backend__code_loc_dep__pickup_zombies_3_p_0(&ll_backend__ite_gen__Zombies_57, ll_backend__ite_gen__STATE_VARIABLE_CLD_107_107, &ll_backend__ite_gen__STATE_VARIABLE_CLD_108_108);
    }
#line 166 "ite_gen.m"
    {
#line 166 "ite_gen.m"
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__ite_gen__Zombies_57, ll_backend__ite_gen__STATE_VARIABLE_CLD_108_108, &ll_backend__ite_gen__STATE_VARIABLE_CLD_109_109);
    }
#line 180 "ite_gen.m"
#line 180 "ite_gen.m"
    switch (ll_backend__ite_gen__CondCodeModel_21) {
#line 180 "ite_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 180 "ite_gen.m"
      case (MR_Integer) 0:
#line 180 "ite_gen.m"
      case (MR_Integer) 1:
#line 183 "ite_gen.m"
        {
#line 183 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_110_110;
#line 183 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_111_111;
#line 183 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_113_113;
#line 183 "ite_gen.m"
          MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_114_114;

#line 184 "ite_gen.m"
          {
#line 184 "ite_gen.m"
            ll_backend__code_loc_dep__maybe_release_hp_5_p_0(ll_backend__ite_gen__MaybeHpSlot_33, ll_backend__ite_gen__STATE_VARIABLE_CI_106_106, &ll_backend__ite_gen__STATE_VARIABLE_CI_110_110, ll_backend__ite_gen__STATE_VARIABLE_CLD_109_109, &ll_backend__ite_gen__STATE_VARIABLE_CLD_111_111);
          }
#line 185 "ite_gen.m"
          {
#line 185 "ite_gen.m"
            ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(ll_backend__ite_gen__MaybeTicketSlot_38, (MR_Integer) 1, &ll_backend__ite_gen__ResetTicketCode_58, ll_backend__ite_gen__STATE_VARIABLE_CI_110_110, &ll_backend__ite_gen__STATE_VARIABLE_CI_113_113, ll_backend__ite_gen__STATE_VARIABLE_CLD_111_111, &ll_backend__ite_gen__STATE_VARIABLE_CLD_114_114);
          }
#line 188 "ite_gen.m"
          {
#line 188 "ite_gen.m"
            ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(ll_backend__ite_gen__RegionStackVars_46, (MR_Integer) 1, ll_backend__ite_gen__STATE_VARIABLE_CI_113_113, &ll_backend__ite_gen__STATE_VARIABLE_CI_116_116, ll_backend__ite_gen__STATE_VARIABLE_CLD_114_114, &ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117);
          }
#line 183 "ite_gen.m"
        }
#line 180 "ite_gen.m"
        break;
#line 180 "ite_gen.m"
      case (MR_Integer) 2:
#line 170 "ite_gen.m"
        {
#line 178 "ite_gen.m"
          {
#line 178 "ite_gen.m"
            ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(ll_backend__ite_gen__MaybeTicketSlot_38, (MR_Integer) 2, &ll_backend__ite_gen__ResetTicketCode_58);
          }
#line 170 "ite_gen.m"
          ll_backend__ite_gen__STATE_VARIABLE_CI_116_116 = ll_backend__ite_gen__STATE_VARIABLE_CI_106_106;
#line 170 "ite_gen.m"
          ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117 = ll_backend__ite_gen__STATE_VARIABLE_CLD_109_109;
#line 170 "ite_gen.m"
        }
#line 180 "ite_gen.m"
        break;
#line 180 "ite_gen.m"
    }
#line 192 "ite_gen.m"
    {
#line 192 "ite_gen.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__ite_gen__IteGoalInfo_15, &ll_backend__ite_gen__StoreMap_59);
    }
#line 193 "ite_gen.m"
    {
#line 193 "ite_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117, &ll_backend__ite_gen__EndCondInstMap_60);
    }
#line 194 "ite_gen.m"
    {
#line 194 "ite_gen.m"
      ll_backend__ite_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__ite_gen__EndCondInstMap_60);
    }
#line 200 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 197 "ite_gen.m"
      {
#line 197 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_183_183 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 197 "ite_gen.m"
        {
#line 197 "ite_gen.m"
          ll_backend__ite_gen__ThenTraceCode_61 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_183_183);
        }
#line 198 "ite_gen.m"
        {
#line 198 "ite_gen.m"
          ll_backend__ite_gen__ThenCode_62 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_183_183);
        }
#line 199 "ite_gen.m"
        {
#line 199 "ite_gen.m"
          mercury__map__init_1_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, &ll_backend__ite_gen__BranchEndStoreMap_63);
        }
#line 197 "ite_gen.m"
        ll_backend__ite_gen__STATE_VARIABLE_CLD_122_122 = ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117;
#line 197 "ite_gen.m"
        ll_backend__ite_gen__STATE_VARIABLE_CI_121_121 = ll_backend__ite_gen__STATE_VARIABLE_CI_116_116;
#line 197 "ite_gen.m"
      }
#line 200 "ite_gen.m"
    else
#line 203 "ite_gen.m"
      {
#line 203 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_119_119;
#line 203 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CLD_120_120;

#line 202 "ite_gen.m"
        {
#line 202 "ite_gen.m"
          ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__ite_gen__ThenGoal_13, ll_backend__ite_gen__IteGoalInfo_15, &ll_backend__ite_gen__ThenTraceCode_61, ll_backend__ite_gen__STATE_VARIABLE_CI_116_116, &ll_backend__ite_gen__STATE_VARIABLE_CI_119_119, ll_backend__ite_gen__STATE_VARIABLE_CLD_117_117, &ll_backend__ite_gen__STATE_VARIABLE_CLD_120_120);
        }
#line 204 "ite_gen.m"
        {
#line 204 "ite_gen.m"
          ll_backend__code_gen__generate_goal_7_p_0(ll_backend__ite_gen__CodeModel_11, ll_backend__ite_gen__ThenGoal_13, &ll_backend__ite_gen__ThenCode_62, ll_backend__ite_gen__STATE_VARIABLE_CI_119_119, &ll_backend__ite_gen__STATE_VARIABLE_CI_121_121, ll_backend__ite_gen__STATE_VARIABLE_CLD_120_120, &ll_backend__ite_gen__STATE_VARIABLE_CLD_122_122);
        }
#line 205 "ite_gen.m"
        ll_backend__ite_gen__BranchEndStoreMap_63 = ll_backend__ite_gen__StoreMap_59;
#line 203 "ite_gen.m"
      }
#line 207 "ite_gen.m"
    {
#line 207 "ite_gen.m"
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__ite_gen__BranchEndStoreMap_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__ite_gen__MaybeEnd0_64, &ll_backend__ite_gen__ThenSaveCode_65, ll_backend__ite_gen__STATE_VARIABLE_CI_121_121, ll_backend__ite_gen__STATE_VARIABLE_CLD_122_122);
    }
#line 211 "ite_gen.m"
    {
#line 211 "ite_gen.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__ite_gen__BranchStart_48, ll_backend__ite_gen__STATE_VARIABLE_CI_121_121, &ll_backend__ite_gen__STATE_VARIABLE_CLD_124_124);
    }
#line 212 "ite_gen.m"
    {
#line 212 "ite_gen.m"
      ll_backend__code_loc_dep__generate_resume_point_6_p_0(ll_backend__ite_gen__ResumePoint_51, &ll_backend__ite_gen__ResumeCode_66, ll_backend__ite_gen__STATE_VARIABLE_CI_121_121, &ll_backend__ite_gen__STATE_VARIABLE_CI_125_125, ll_backend__ite_gen__STATE_VARIABLE_CLD_124_124, &ll_backend__ite_gen__STATE_VARIABLE_CLD_126_126);
    }
#line 225 "ite_gen.m"
    {
#line 225 "ite_gen.m"
      ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(ll_backend__ite_gen__MaybeHpSlot_33, &ll_backend__ite_gen__RestoreHpCode_69, ll_backend__ite_gen__STATE_VARIABLE_CI_125_125, &ll_backend__ite_gen__STATE_VARIABLE_CI_133_133, ll_backend__ite_gen__STATE_VARIABLE_CLD_126_126, &ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134);
    }
#line 226 "ite_gen.m"
    {
#line 226 "ite_gen.m"
      ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(ll_backend__ite_gen__MaybeTicketSlot_38, (MR_Integer) 0, &ll_backend__ite_gen__RestoreTicketCode_70, ll_backend__ite_gen__STATE_VARIABLE_CI_133_133, &ll_backend__ite_gen__STATE_VARIABLE_CI_136_136, ll_backend__ite_gen__STATE_VARIABLE_CLD_134_134, &ll_backend__ite_gen__STATE_VARIABLE_CLD_137_137);
    }
#line 230 "ite_gen.m"
    {
#line 230 "ite_gen.m"
      ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(ll_backend__ite_gen__ElseGoal_14, ll_backend__ite_gen__IteGoalInfo_15, &ll_backend__ite_gen__ElseTraceCode_71, ll_backend__ite_gen__STATE_VARIABLE_CI_136_136, &ll_backend__ite_gen__STATE_VARIABLE_CI_138_138, ll_backend__ite_gen__STATE_VARIABLE_CLD_137_137, &ll_backend__ite_gen__STATE_VARIABLE_CLD_139_139);
    }
#line 232 "ite_gen.m"
    {
#line 232 "ite_gen.m"
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__ite_gen__CodeModel_11, ll_backend__ite_gen__ElseGoal_14, &ll_backend__ite_gen__ElseCode_72, ll_backend__ite_gen__STATE_VARIABLE_CI_138_138, &ll_backend__ite_gen__STATE_VARIABLE_CI_140_140, ll_backend__ite_gen__STATE_VARIABLE_CLD_139_139, &ll_backend__ite_gen__STATE_VARIABLE_CLD_141_141);
    }
#line 233 "ite_gen.m"
    {
#line 233 "ite_gen.m"
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__ite_gen__StoreMap_59, ll_backend__ite_gen__MaybeEnd0_64, &ll_backend__ite_gen__MaybeEnd_73, &ll_backend__ite_gen__ElseSaveCode_74, ll_backend__ite_gen__STATE_VARIABLE_CI_140_140, ll_backend__ite_gen__STATE_VARIABLE_CLD_141_141);
    }
#line 246 "ite_gen.m"
    {
#line 246 "ite_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__ite_gen__EndLabel_76, ll_backend__ite_gen__STATE_VARIABLE_CI_140_140, ll_backend__ite_gen__STATE_VARIABLE_CI_83);
    }
#line 4150 "ll_backend.ite_gen.c"
    ll_backend__ite_gen__TypeCtorInfo_188_188 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 248 "ite_gen.m"
    {
#line 248 "ite_gen.m"
      ll_backend__ite_gen__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 248 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_151_151, 0) = ((MR_Box) (ll_backend__ite_gen__EndLabel_76));
#line 248 "ite_gen.m"
    }
#line 248 "ite_gen.m"
    {
#line 248 "ite_gen.m"
      ll_backend__ite_gen__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "ite_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 248 "ite_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_150_150, 1) = ((MR_Box) (ll_backend__ite_gen__V_151_151));
#line 248 "ite_gen.m"
    }
#line 248 "ite_gen.m"
    {
#line 248 "ite_gen.m"
      ll_backend__ite_gen__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_149_149, 0) = ((MR_Box) (ll_backend__ite_gen__V_150_150));
#line 248 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_149_149, 1) = ((MR_Box) ((MR_String) "Jump to the end of if-then-else"));
#line 248 "ite_gen.m"
    }
#line 247 "ite_gen.m"
    {
#line 247 "ite_gen.m"
      ll_backend__ite_gen__JumpToEndCode_77 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ((MR_Box) (ll_backend__ite_gen__V_149_149)));
    }
#line 252 "ite_gen.m"
    {
#line 252 "ite_gen.m"
      ll_backend__ite_gen__V_154_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "ite_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_154_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 252 "ite_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_154_154, 1) = ((MR_Box) (ll_backend__ite_gen__EndLabel_76));
#line 252 "ite_gen.m"
    }
#line 252 "ite_gen.m"
    {
#line 252 "ite_gen.m"
      ll_backend__ite_gen__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_153_153, 0) = ((MR_Box) (ll_backend__ite_gen__V_154_154));
#line 252 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_153_153, 1) = ((MR_Box) ((MR_String) "end of if-then-else"));
#line 252 "ite_gen.m"
    }
#line 251 "ite_gen.m"
    {
#line 251 "ite_gen.m"
      ll_backend__ite_gen__EndLabelCode_78 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ((MR_Box) (ll_backend__ite_gen__V_153_153)));
    }
#line 254 "ite_gen.m"
    {
#line 254 "ite_gen.m"
      ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(ll_backend__ite_gen__Globals_29, ll_backend__ite_gen__CondInfo_25, &ll_backend__ite_gen__PNegCondCode_79, &ll_backend__ite_gen__PNegThenCode_80, &ll_backend__ite_gen__PNegElseCode_81);
    }
#line 282 "ite_gen.m"
    {
#line 282 "ite_gen.m"
      ll_backend__ite_gen__V_180_180 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ElseSaveCode_74, ll_backend__ite_gen__EndLabelCode_78);
    }
#line 281 "ite_gen.m"
    {
#line 281 "ite_gen.m"
      ll_backend__ite_gen__V_179_179 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ElseCode_72, ll_backend__ite_gen__V_180_180);
    }
#line 280 "ite_gen.m"
    {
#line 280 "ite_gen.m"
      ll_backend__ite_gen__V_178_178 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__PNegElseCode_81, ll_backend__ite_gen__V_179_179);
    }
#line 279 "ite_gen.m"
    {
#line 279 "ite_gen.m"
      ll_backend__ite_gen__V_177_177 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ElseTraceCode_71, ll_backend__ite_gen__V_178_178);
    }
#line 278 "ite_gen.m"
    {
#line 278 "ite_gen.m"
      ll_backend__ite_gen__V_176_176 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RegionElseCode_45, ll_backend__ite_gen__V_177_177);
    }
#line 277 "ite_gen.m"
    {
#line 277 "ite_gen.m"
      ll_backend__ite_gen__V_175_175 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RestoreTicketCode_70, ll_backend__ite_gen__V_176_176);
    }
#line 276 "ite_gen.m"
    {
#line 276 "ite_gen.m"
      ll_backend__ite_gen__V_174_174 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RestoreHpCode_69, ll_backend__ite_gen__V_175_175);
    }
#line 275 "ite_gen.m"
    {
#line 275 "ite_gen.m"
      ll_backend__ite_gen__V_173_173 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ElseNeckCode_56, ll_backend__ite_gen__V_174_174);
    }
#line 274 "ite_gen.m"
    {
#line 274 "ite_gen.m"
      ll_backend__ite_gen__V_172_172 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ResumeCode_66, ll_backend__ite_gen__V_173_173);
    }
#line 273 "ite_gen.m"
    {
#line 273 "ite_gen.m"
      ll_backend__ite_gen__V_171_171 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__JumpToEndCode_77, ll_backend__ite_gen__V_172_172);
    }
#line 272 "ite_gen.m"
    {
#line 272 "ite_gen.m"
      ll_backend__ite_gen__V_170_170 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ThenSaveCode_65, ll_backend__ite_gen__V_171_171);
    }
#line 271 "ite_gen.m"
    {
#line 271 "ite_gen.m"
      ll_backend__ite_gen__V_169_169 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ThenCode_62, ll_backend__ite_gen__V_170_170);
    }
#line 270 "ite_gen.m"
    {
#line 270 "ite_gen.m"
      ll_backend__ite_gen__V_168_168 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__PNegThenCode_80, ll_backend__ite_gen__V_169_169);
    }
#line 269 "ite_gen.m"
    {
#line 269 "ite_gen.m"
      ll_backend__ite_gen__V_167_167 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ThenTraceCode_61, ll_backend__ite_gen__V_168_168);
    }
#line 268 "ite_gen.m"
    {
#line 268 "ite_gen.m"
      ll_backend__ite_gen__V_166_166 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RegionThenCode_44, ll_backend__ite_gen__V_167_167);
    }
#line 267 "ite_gen.m"
    {
#line 267 "ite_gen.m"
      ll_backend__ite_gen__V_165_165 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ResetTicketCode_58, ll_backend__ite_gen__V_166_166);
    }
#line 266 "ite_gen.m"
    {
#line 266 "ite_gen.m"
      ll_backend__ite_gen__V_164_164 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__ThenNeckCode_55, ll_backend__ite_gen__V_165_165);
    }
#line 265 "ite_gen.m"
    {
#line 265 "ite_gen.m"
      ll_backend__ite_gen__V_163_163 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__CondCode_54, ll_backend__ite_gen__V_164_164);
    }
#line 264 "ite_gen.m"
    {
#line 264 "ite_gen.m"
      ll_backend__ite_gen__V_162_162 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__PNegCondCode_79, ll_backend__ite_gen__V_163_163);
    }
#line 263 "ite_gen.m"
    {
#line 263 "ite_gen.m"
      ll_backend__ite_gen__V_161_161 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__CondTraceCode_53, ll_backend__ite_gen__V_162_162);
    }
#line 262 "ite_gen.m"
    {
#line 262 "ite_gen.m"
      ll_backend__ite_gen__V_160_160 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__EffectResumeCode_52, ll_backend__ite_gen__V_161_161);
    }
#line 261 "ite_gen.m"
    {
#line 261 "ite_gen.m"
      ll_backend__ite_gen__V_159_159 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__PrepareHijackCode_50, ll_backend__ite_gen__V_160_160);
    }
#line 260 "ite_gen.m"
    {
#line 260 "ite_gen.m"
      ll_backend__ite_gen__V_158_158 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__RegionCondCode_43, ll_backend__ite_gen__V_159_159);
    }
#line 259 "ite_gen.m"
    {
#line 259 "ite_gen.m"
      ll_backend__ite_gen__V_157_157 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__SaveTicketCode_37, ll_backend__ite_gen__V_158_158);
    }
#line 258 "ite_gen.m"
    {
#line 258 "ite_gen.m"
      ll_backend__ite_gen__V_156_156 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__SaveHpCode_32, ll_backend__ite_gen__V_157_157);
    }
#line 257 "ite_gen.m"
    {
#line 257 "ite_gen.m"
      *ll_backend__ite_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_188_188, ll_backend__ite_gen__FlushCode_28, ll_backend__ite_gen__V_156_156);
    }
#line 284 "ite_gen.m"
    {
#line 284 "ite_gen.m"
      ll_backend__code_loc_dep__after_all_branches_4_p_0(ll_backend__ite_gen__StoreMap_59, ll_backend__ite_gen__MaybeEnd_73, *ll_backend__ite_gen__STATE_VARIABLE_CI_83, ll_backend__ite_gen__STATE_VARIABLE_CLD_85);
#line 284 "ite_gen.m"
      return;
    }
#line 77 "ite_gen.m"
  }
#line 29 "ite_gen.m"
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
