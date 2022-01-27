/*
** Automatically generated from `ite_gen.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "tree_bitset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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




#line 163 "ll_backend.ite_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0;

#line 396 "ite_gen.m"
static MR_bool MR_CALL 
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__396__1_2_p_0(
#line 396 "ite_gen.m"
  MR_Word ll_backend__ite_gen__MaybeRegionSuccRecordSlot_35,
#line 396 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__2_70);

#line 782 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_8_p_0(
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NumLval_1,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__AddrLval_2,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__RemovedVars_4,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__5_5,
#line 782 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__HeadVar__6_6,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_7,
#line 782 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_8);

#line 765 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_7_p_0(
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NumLval_1,
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__AddrLval_2,
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__4_4,
#line 765 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__HeadVar__5_5,
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_6,
#line 765 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_7);

#line 746 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(
#line 746 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__1_1,
#line 746 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ModuleInfo_2,
#line 746 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3,
#line 746 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_Removed_4);

#line 565 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_11_p_0(
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__IteRegionOps_12,
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoalInfo_13,
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoals_14,
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ElseGoals_15,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__CondCode_16,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ThenCode_17,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ElseCode_18,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__StackVars_19,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__MaybeEmbeddedStackFrameId_20,
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_64,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_65);

#line 555 "ite_gen.m"
static MR_String MR_CALL 
ll_backend__ite_gen__wrap_transient_1_f_0(
#line 555 "ite_gen.m"
  MR_String ll_backend__ite_gen__Code_3);

#line 498 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(
#line 498 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Globals_6,
#line 498 "ite_gen.m"
  MR_Word ll_backend__ite_gen__GoalInfo_7,
#line 498 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegCondCode_8,
#line 498 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegThenCode_9,
#line 498 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegElseCode_10);

#line 396 "ite_gen.m"
static MR_bool MR_CALL 
ll_backend__ite_gen__generate_negation_general_8_p_0_1(
#line 396 "ite_gen.m"
  MR_Box ll_backend__ite_gen__closure_arg);

#line 356 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__generate_negation_general_8_p_0(
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CodeModel_9,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Goal_10,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NotGoalInfo_11,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ResumeVars_12,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ResumeLocs_13,
#line 356 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__Code_14,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_57,
#line 356 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_58);


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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 364 "ll_backend.ite_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__ite_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0
  }
};

#line 396 "ite_gen.m"
static MR_bool MR_CALL 
ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__396__1_2_p_0(
#line 396 "ite_gen.m"
  MR_Word ll_backend__ite_gen__MaybeRegionSuccRecordSlot_35,
#line 396 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__2_70)
#line 396 "ite_gen.m"
{
#line 396 "ite_gen.m"
  {
#line 396 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;

#line 396 "ite_gen.m"
    {
#line 396 "ite_gen.m"
      return ll_backend__ite_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[1], ((MR_Box) (ll_backend__ite_gen__MaybeRegionSuccRecordSlot_35)), ((MR_Box) (ll_backend__ite_gen__HeadVar__2_70)));
    }
#line 396 "ite_gen.m"
    return ll_backend__ite_gen__succeeded;
#line 396 "ite_gen.m"
  }
#line 396 "ite_gen.m"
}

#line 782 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__ite_alloc_snapshot_regions_8_p_0(
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NumLval_1,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__AddrLval_2,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__RemovedVars_4,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__5_5,
#line 782 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__HeadVar__6_6,
#line 782 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_7,
#line 782 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_8)
#line 782 "ite_gen.m"
{
#line 786 "ite_gen.m"
  {
#line 786 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;

#line 786 "ite_gen.m"
    if ((ll_backend__ite_gen__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "ite_gen.m"
      {
#line 786 "ite_gen.m"
        {
#line 786 "ite_gen.m"
          *ll_backend__ite_gen__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 786 "ite_gen.m"
        *ll_backend__ite_gen__STATE_VARIABLE_CI_8 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_7;
#line 786 "ite_gen.m"
      }
#line 786 "ite_gen.m"
    else
#line 788 "ite_gen.m"
      {
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_38_38 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__5_5, (MR_Integer) 0)));
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__5_5, (MR_Integer) 1)));
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Code_22;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Codes_23;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__ProduceVarCode_25;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVarRval_26;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RemovedAtStartOfElse_27;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__SaveCode_28;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_31_31;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_32_32;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_33_33;
#line 788 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_34_34;

#line 789 "ite_gen.m"
        {
#line 789 "ite_gen.m"
          ll_backend__code_info__produce_variable_5_p_0(ll_backend__ite_gen__RegionVar_20, &ll_backend__ite_gen__ProduceVarCode_25, &ll_backend__ite_gen__RegionVarRval_26, ll_backend__ite_gen__STATE_VARIABLE_CI_0_7, &ll_backend__ite_gen__STATE_VARIABLE_CI_31_31);
        }
#line 790 "ite_gen.m"
        {
#line 790 "ite_gen.m"
          ll_backend__ite_gen__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[0], ((MR_Box) (ll_backend__ite_gen__RegionVar_20)), ll_backend__ite_gen__RemovedVars_4);
        }
#line 792 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 791 "ite_gen.m"
          ll_backend__ite_gen__RemovedAtStartOfElse_27 = (MR_Integer) 0;
#line 792 "ite_gen.m"
        else
#line 793 "ite_gen.m"
          ll_backend__ite_gen__RemovedAtStartOfElse_27 = (MR_Integer) 1;
#line 797 "ite_gen.m"
        {
#line 797 "ite_gen.m"
          ll_backend__ite_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_34_34, 0) = ((MR_Box) (ll_backend__ite_gen__RemovedAtStartOfElse_27));
#line 797 "ite_gen.m"
        }
#line 797 "ite_gen.m"
        {
#line 797 "ite_gen.m"
          ll_backend__ite_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 797 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 797 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_33_33, 1) = ((MR_Box) (ll_backend__ite_gen__V_34_34));
#line 797 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_33_33, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_3));
#line 797 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_33_33, 3) = ((MR_Box) (ll_backend__ite_gen__RegionVarRval_26));
#line 797 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_33_33, 4) = ((MR_Box) (ll_backend__ite_gen__NumLval_1));
#line 797 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_33_33, 5) = ((MR_Box) (ll_backend__ite_gen__AddrLval_2));
#line 797 "ite_gen.m"
        }
#line 796 "ite_gen.m"
        {
#line 796 "ite_gen.m"
          ll_backend__ite_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 796 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_32_32, 0) = ((MR_Box) (ll_backend__ite_gen__V_33_33));
#line 796 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_32_32, 1) = ((MR_Box) ((MR_String) "take alloc snapshot of the region"));
#line 796 "ite_gen.m"
        }
#line 795 "ite_gen.m"
        {
#line 795 "ite_gen.m"
          ll_backend__ite_gen__SaveCode_28 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_38_38, ((MR_Box) (ll_backend__ite_gen__V_32_32)));
        }
#line 801 "ite_gen.m"
        {
#line 801 "ite_gen.m"
          ll_backend__ite_gen__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_38_38, ll_backend__ite_gen__ProduceVarCode_25, ll_backend__ite_gen__SaveCode_28);
        }
#line 802 "ite_gen.m"
        {
#line 802 "ite_gen.m"
          ll_backend__ite_gen__ite_alloc_snapshot_regions_8_p_0(ll_backend__ite_gen__NumLval_1, ll_backend__ite_gen__AddrLval_2, ll_backend__ite_gen__EmbeddedStackFrameId_3, ll_backend__ite_gen__RemovedVars_4, ll_backend__ite_gen__RegionVars_21, &ll_backend__ite_gen__Codes_23, ll_backend__ite_gen__STATE_VARIABLE_CI_31_31, ll_backend__ite_gen__STATE_VARIABLE_CI_8);
        }
#line 788 "ite_gen.m"
        {
#line 788 "ite_gen.m"
          *ll_backend__ite_gen__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_38_38, ll_backend__ite_gen__Code_22, ll_backend__ite_gen__Codes_23);
        }
#line 788 "ite_gen.m"
      }
#line 786 "ite_gen.m"
  }
#line 782 "ite_gen.m"
}

#line 765 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__ite_protect_regions_7_p_0(
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NumLval_1,
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__AddrLval_2,
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_3,
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__4_4,
#line 765 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__HeadVar__5_5,
#line 765 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_6,
#line 765 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_7)
#line 765 "ite_gen.m"
{
#line 768 "ite_gen.m"
  {
#line 768 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;

#line 768 "ite_gen.m"
    if ((ll_backend__ite_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "ite_gen.m"
      {
#line 768 "ite_gen.m"
        {
#line 768 "ite_gen.m"
          *ll_backend__ite_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 768 "ite_gen.m"
        *ll_backend__ite_gen__STATE_VARIABLE_CI_7 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_6;
#line 768 "ite_gen.m"
      }
#line 768 "ite_gen.m"
    else
#line 770 "ite_gen.m"
      {
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Code_19;
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Codes_20;
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__ProduceVarCode_22;
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__RegionVarRval_23;
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__SaveCode_24;
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_27_27;
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_28_28;
#line 770 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_29_29;

#line 771 "ite_gen.m"
        {
#line 771 "ite_gen.m"
          ll_backend__code_info__produce_variable_5_p_0(ll_backend__ite_gen__RegionVar_17, &ll_backend__ite_gen__ProduceVarCode_22, &ll_backend__ite_gen__RegionVarRval_23, ll_backend__ite_gen__STATE_VARIABLE_CI_0_6, &ll_backend__ite_gen__STATE_VARIABLE_CI_27_27);
        }
#line 774 "ite_gen.m"
        {
#line 774 "ite_gen.m"
          ll_backend__ite_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 774 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 774 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_29_29, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_3));
#line 774 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_29_29, 3) = ((MR_Box) (ll_backend__ite_gen__RegionVarRval_23));
#line 774 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_29_29, 4) = ((MR_Box) (ll_backend__ite_gen__NumLval_1));
#line 774 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_29_29, 5) = ((MR_Box) (ll_backend__ite_gen__AddrLval_2));
#line 774 "ite_gen.m"
        }
#line 773 "ite_gen.m"
        {
#line 773 "ite_gen.m"
          ll_backend__ite_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 773 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_28_28, 0) = ((MR_Box) (ll_backend__ite_gen__V_29_29));
#line 773 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_28_28, 1) = ((MR_Box) ((MR_String) "ite protect the region if needed"));
#line 773 "ite_gen.m"
        }
#line 772 "ite_gen.m"
        {
#line 772 "ite_gen.m"
          ll_backend__ite_gen__SaveCode_24 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_34_34, ((MR_Box) (ll_backend__ite_gen__V_28_28)));
        }
#line 778 "ite_gen.m"
        {
#line 778 "ite_gen.m"
          ll_backend__ite_gen__Code_19 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_34_34, ll_backend__ite_gen__ProduceVarCode_22, ll_backend__ite_gen__SaveCode_24);
        }
#line 779 "ite_gen.m"
        {
#line 779 "ite_gen.m"
          ll_backend__ite_gen__ite_protect_regions_7_p_0(ll_backend__ite_gen__NumLval_1, ll_backend__ite_gen__AddrLval_2, ll_backend__ite_gen__EmbeddedStackFrameId_3, ll_backend__ite_gen__RegionVars_18, &ll_backend__ite_gen__Codes_20, ll_backend__ite_gen__STATE_VARIABLE_CI_27_27, ll_backend__ite_gen__STATE_VARIABLE_CI_7);
        }
#line 770 "ite_gen.m"
        {
#line 770 "ite_gen.m"
          *ll_backend__ite_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_34_34, ll_backend__ite_gen__Code_19, ll_backend__ite_gen__Codes_20);
        }
#line 770 "ite_gen.m"
      }
#line 768 "ite_gen.m"
  }
#line 765 "ite_gen.m"
}

#line 746 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(
#line 746 "ite_gen.m"
  MR_Word ll_backend__ite_gen__HeadVar__1_1,
#line 746 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ModuleInfo_2,
#line 746 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3,
#line 746 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_Removed_4)
#line 746 "ite_gen.m"
{
#line 749 "ite_gen.m"
  while (MR_TRUE)
#line 749 "ite_gen.m"
    {
#line 749 "ite_gen.m"
      /* tailcall optimized into a loop */
#line 749 "ite_gen.m"
      {
#line 749 "ite_gen.m"
        MR_bool ll_backend__ite_gen__succeeded;

#line 749 "ite_gen.m"
        if ((ll_backend__ite_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "ite_gen.m"
          *ll_backend__ite_gen__STATE_VARIABLE_Removed_4 = ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3;
#line 749 "ite_gen.m"
        else
#line 750 "ite_gen.m"
          {
#line 750 "ite_gen.m"
            MR_Word ll_backend__ite_gen__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 750 "ite_gen.m"
            MR_Word ll_backend__ite_gen__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 750 "ite_gen.m"
            MR_Word ll_backend__ite_gen__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_9, (MR_Integer) 0)));
#line 751 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_9, (MR_Integer) 1)));
#line 761 "ite_gen.m"
            MR_Word ll_backend__ite_gen__RegionVar_22;
#line 753 "ite_gen.m"
            MR_Word ll_backend__ite_gen__PredId_15;
#line 753 "ite_gen.m"
            MR_Word ll_backend__ite_gen__Args_17;
#line 753 "ite_gen.m"
            MR_Word ll_backend__ite_gen__PredInfo_21;
#line 753 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_25_25;
#line 753 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_26_26;
#line 753 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_27_27;
#line 753 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_31_31;
#line 753 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_32_32;
#line 753 "ite_gen.m"
            MR_Integer ll_backend__ite_gen___ProcId_16;
#line 753 "ite_gen.m"
            MR_Word ll_backend__ite_gen___Builtin_18;
#line 753 "ite_gen.m"
            MR_Word ll_backend__ite_gen___UC_19;
#line 753 "ite_gen.m"
            MR_Word ll_backend__ite_gen___SymName_20;

#line 753 "ite_gen.m"
            ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__GoalExpr_13)) == (MR_mktag((MR_Integer) 2)));
#line 753 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 753 "ite_gen.m"
              {
#line 753 "ite_gen.m"
                ll_backend__ite_gen__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 0)));
#line 753 "ite_gen.m"
                ll_backend__ite_gen___ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 1)));
#line 753 "ite_gen.m"
                ll_backend__ite_gen__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 2)));
#line 753 "ite_gen.m"
                ll_backend__ite_gen___Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 3)));
#line 753 "ite_gen.m"
                ll_backend__ite_gen___UC_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 4)));
#line 753 "ite_gen.m"
                ll_backend__ite_gen___SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__GoalExpr_13, (MR_Integer) 5)));
#line 754 "ite_gen.m"
                {
#line 754 "ite_gen.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__ite_gen__ModuleInfo_2, ll_backend__ite_gen__PredId_15, &ll_backend__ite_gen__PredInfo_21);
                }
#line 755 "ite_gen.m"
                {
#line 755 "ite_gen.m"
                  ll_backend__ite_gen__V_25_25 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__ite_gen__PredInfo_21);
                }
#line 755 "ite_gen.m"
                {
#line 755 "ite_gen.m"
                  ll_backend__ite_gen__V_31_31 = mdbcomp__builtin_modules__mercury_region_builtin_module_0_f_0();
                }
#line 755 "ite_gen.m"
                {
#line 755 "ite_gen.m"
                  ll_backend__ite_gen__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__ite_gen__V_25_25, ll_backend__ite_gen__V_31_31);
                }
#line 753 "ite_gen.m"
                if (ll_backend__ite_gen__succeeded)
#line 753 "ite_gen.m"
                  {
#line 756 "ite_gen.m"
                    {
#line 756 "ite_gen.m"
                      ll_backend__ite_gen__V_26_26 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__ite_gen__PredInfo_21);
                    }
#line 756 "ite_gen.m"
                    {
#line 756 "ite_gen.m"
                      ll_backend__ite_gen__V_32_32 = transform_hlds__rbmm__region_transformation__remove_region_pred_name_0_f_0();
                    }
#line 756 "ite_gen.m"
                    ll_backend__ite_gen__succeeded = (strcmp(ll_backend__ite_gen__V_26_26, ll_backend__ite_gen__V_32_32) == 0);
#line 753 "ite_gen.m"
                    if (ll_backend__ite_gen__succeeded)
#line 753 "ite_gen.m"
                      {
#line 757 "ite_gen.m"
                        ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 757 "ite_gen.m"
                        if (ll_backend__ite_gen__succeeded)
#line 757 "ite_gen.m"
                          {
#line 757 "ite_gen.m"
                            ll_backend__ite_gen__RegionVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Args_17, (MR_Integer) 0)));
#line 757 "ite_gen.m"
                            ll_backend__ite_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Args_17, (MR_Integer) 1)));
#line 757 "ite_gen.m"
                            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "ite_gen.m"
                          }
#line 753 "ite_gen.m"
                      }
#line 753 "ite_gen.m"
                  }
#line 753 "ite_gen.m"
              }
#line 761 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 759 "ite_gen.m"
              {
#line 759 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_28_28;

#line 759 "ite_gen.m"
                {
#line 759 "ite_gen.m"
                  mercury__set__insert_3_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[0], ((MR_Box) (ll_backend__ite_gen__RegionVar_22)), ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3, &ll_backend__ite_gen__STATE_VARIABLE_Removed_28_28);
                }
#line 760 "ite_gen.m"
                /* direct tailcall eliminated */
#line 760 "ite_gen.m"
                {
#line 760 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__HeadVar__1__tmp_copy_1 = ll_backend__ite_gen__Goals_10;
#line 760 "ite_gen.m"
                  MR_Word ll_backend__ite_gen__STATE_VARIABLE_Removed_0__tmp_copy_3 = ll_backend__ite_gen__STATE_VARIABLE_Removed_28_28;

#line 760 "ite_gen.m"
                  ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3 = ll_backend__ite_gen__STATE_VARIABLE_Removed_0__tmp_copy_3;
#line 760 "ite_gen.m"
                  ll_backend__ite_gen__HeadVar__1_1 = ll_backend__ite_gen__HeadVar__1__tmp_copy_1;
#line 760 "ite_gen.m"
                }
#line 760 "ite_gen.m"
                continue;
#line 759 "ite_gen.m"
              }
#line 761 "ite_gen.m"
            else
#line 760 "ite_gen.m"
              *ll_backend__ite_gen__STATE_VARIABLE_Removed_4 = ll_backend__ite_gen__STATE_VARIABLE_Removed_0_3;
#line 750 "ite_gen.m"
          }
#line 749 "ite_gen.m"
      }
#line 749 "ite_gen.m"
      break;
#line 749 "ite_gen.m"
    }
#line 746 "ite_gen.m"
}

#line 565 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__maybe_create_ite_region_frame_11_p_0(
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__IteRegionOps_12,
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoalInfo_13,
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoals_14,
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ElseGoals_15,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__CondCode_16,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ThenCode_17,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__ElseCode_18,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__StackVars_19,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__MaybeEmbeddedStackFrameId_20,
#line 565 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_64,
#line 565 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_65)
#line 565 "ite_gen.m"
{
#line 574 "ite_gen.m"
  {
#line 574 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;

#line 574 "ite_gen.m"
    if ((ll_backend__ite_gen__IteRegionOps_12 == (MR_Integer) 0))
#line 581 "ite_gen.m"
      {
#line 581 "ite_gen.m"
        MR_Word ll_backend__ite_gen__ForwardLiveVars_22;
#line 581 "ite_gen.m"
        MR_Word ll_backend__ite_gen__LiveRegionVars_23;
#line 581 "ite_gen.m"
        MR_Word ll_backend__ite_gen__MaybeRbmmInfo_24;

#line 582 "ite_gen.m"
        {
#line 582 "ite_gen.m"
          ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_64, &ll_backend__ite_gen__ForwardLiveVars_22);
        }
#line 583 "ite_gen.m"
        {
#line 583 "ite_gen.m"
          ll_backend__ite_gen__LiveRegionVars_23 = ll_backend__code_info__filter_region_vars_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_64, ll_backend__ite_gen__ForwardLiveVars_22);
        }
#line 585 "ite_gen.m"
        {
#line 585 "ite_gen.m"
          ll_backend__ite_gen__MaybeRbmmInfo_24 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(ll_backend__ite_gen__CondGoalInfo_13);
        }
#line 593 "ite_gen.m"
        if ((ll_backend__ite_gen__MaybeRbmmInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "ite_gen.m"
          {
#line 587 "ite_gen.m"
            MR_Word ll_backend__ite_gen__TypeCtorInfo_144_144 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 588 "ite_gen.m"
            {
#line 588 "ite_gen.m"
              *ll_backend__ite_gen__CondCode_16 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_144_144);
            }
#line 589 "ite_gen.m"
            {
#line 589 "ite_gen.m"
              *ll_backend__ite_gen__ThenCode_17 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_144_144);
            }
#line 590 "ite_gen.m"
            {
#line 590 "ite_gen.m"
              *ll_backend__ite_gen__ElseCode_18 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_144_144);
            }
#line 591 "ite_gen.m"
            *ll_backend__ite_gen__StackVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "ite_gen.m"
            *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 592 "ite_gen.m"
            *ll_backend__ite_gen__STATE_VARIABLE_CI_65 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_64;
#line 587 "ite_gen.m"
          }
#line 593 "ite_gen.m"
        else
#line 594 "ite_gen.m"
          {
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__TypeInfo_146_146;
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__RbmmInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__MaybeRbmmInfo_24, (MR_Integer) 0)));
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__CondCreatedRegionVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_25, (MR_Integer) 0)));
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__CondRemovedRegionVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_25, (MR_Integer) 1)));
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__CondCarriedRegionVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_25, (MR_Integer) 2)));
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__CondAllocRegionVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_25, (MR_Integer) 3)));
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__ReversedCondGoals_31;
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__ModuleInfo_32;
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__RemovedAtEndOfThen_33;
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__NeedToBeProtectedRegionVars_34;
#line 594 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_66_66;
#line 595 "ite_gen.m"
            MR_Word ll_backend__ite_gen___CondUsedRegionVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__RbmmInfo_25, (MR_Integer) 4)));

#line 598 "ite_gen.m"
            {
#line 598 "ite_gen.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__ite_gen__CondGoals_14, &ll_backend__ite_gen__ReversedCondGoals_31);
            }
#line 599 "ite_gen.m"
            {
#line 599 "ite_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_64, &ll_backend__ite_gen__ModuleInfo_32);
            }
#line 991 "ll_backend.ite_gen.c"
            ll_backend__ite_gen__TypeInfo_146_146 = (MR_Word) &ll_backend__ite_gen_scalar_common_1[0];
#line 601 "ite_gen.m"
            {
#line 601 "ite_gen.m"
              ll_backend__ite_gen__V_66_66 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeInfo_146_146);
            }
#line 600 "ite_gen.m"
            {
#line 600 "ite_gen.m"
              ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ll_backend__ite_gen__ReversedCondGoals_31, ll_backend__ite_gen__ModuleInfo_32, ll_backend__ite_gen__V_66_66, &ll_backend__ite_gen__RemovedAtEndOfThen_33);
            }
#line 602 "ite_gen.m"
            {
#line 602 "ite_gen.m"
              mercury__set__difference_3_p_0(ll_backend__ite_gen__TypeInfo_146_146, ll_backend__ite_gen__CondRemovedRegionVars_27, ll_backend__ite_gen__RemovedAtEndOfThen_33, &ll_backend__ite_gen__NeedToBeProtectedRegionVars_34);
            }
#line 605 "ite_gen.m"
            {
#line 605 "ite_gen.m"
              ll_backend__ite_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__ite_gen__TypeInfo_146_146, ll_backend__ite_gen__CondCreatedRegionVars_26);
            }
#line 605 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 605 "ite_gen.m"
              {
#line 606 "ite_gen.m"
                {
#line 606 "ite_gen.m"
                  ll_backend__ite_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__ite_gen__TypeInfo_146_146, ll_backend__ite_gen__NeedToBeProtectedRegionVars_34);
                }
#line 605 "ite_gen.m"
                if (ll_backend__ite_gen__succeeded)
#line 607 "ite_gen.m"
                  {
#line 607 "ite_gen.m"
                    ll_backend__ite_gen__succeeded = mercury__set__is_empty_1_p_0(ll_backend__ite_gen__TypeInfo_146_146, ll_backend__ite_gen__CondAllocRegionVars_29);
                  }
#line 605 "ite_gen.m"
              }
#line 616 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 611 "ite_gen.m"
              {
#line 611 "ite_gen.m"
                MR_Word ll_backend__ite_gen__TypeCtorInfo_147_147 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 611 "ite_gen.m"
                {
#line 611 "ite_gen.m"
                  *ll_backend__ite_gen__CondCode_16 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_147_147);
                }
#line 612 "ite_gen.m"
                {
#line 612 "ite_gen.m"
                  *ll_backend__ite_gen__ThenCode_17 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_147_147);
                }
#line 613 "ite_gen.m"
                {
#line 613 "ite_gen.m"
                  *ll_backend__ite_gen__ElseCode_18 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_147_147);
                }
#line 614 "ite_gen.m"
                *ll_backend__ite_gen__StackVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "ite_gen.m"
                *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "ite_gen.m"
                *ll_backend__ite_gen__STATE_VARIABLE_CI_65 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_64;
#line 611 "ite_gen.m"
              }
#line 616 "ite_gen.m"
            else
#line 618 "ite_gen.m"
              {
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__TypeCtorInfo_148_148;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__TypeCtorInfo_150_150;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__RemovedAtStartOfElse_35;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__UnprotectedRemovedAtStartOfElse_36;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__ProtectRegionVars_37;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__SnapshotRegionVars0_38;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__SnapshotRegionVars_39;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__ProtectRegionVarList_40;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__SnapshotRegionVarList_41;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__NumProtectRegionVars_42;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__NumSnapshotRegionVars_43;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__Globals_44;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__FixedSize_45;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__ProtectSize_46;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__SnapshotSize_47;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__FrameSize_48;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__Items_49;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__MainStackId_50;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__FirstSlotNum_51;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__LastSlotNum_52;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__EmbeddedStackFrameId_53;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__FirstNonFixedAddr_54;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__ProtectNumRegLval_55;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__SnapshotNumRegLval_56;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__AddrRegLval_57;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__PushInitCode_58;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__ProtectRegionCode_59;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__SnapshotRegionCode_60;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__SetCode_61;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__CondCodeModel_62;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__CondKind_63;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_67_67;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_68_68;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_69_69;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_70_70;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__V_74_74;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__V_75_75;
#line 618 "ite_gen.m"
                MR_Integer ll_backend__ite_gen__V_76_76;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_79_79;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_81_81;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_83_83;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_85_85;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_86_86;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_87_87;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_88_88;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_91_91;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_92_92;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_93_93;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_94_94;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_98_98;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_99_99;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_100_100;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_105_105;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_106_106;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_107_107;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_112_112;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_113_113;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_114_114;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_115_115;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_116_116;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_118_118;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_120_120;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_121_121;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_122_122;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_124_124;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_127_127;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_128_128;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_133_133;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_134_134;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_135_135;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_136_136;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_137_137;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_139_139;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_140_140;
#line 618 "ite_gen.m"
                MR_Word ll_backend__ite_gen__V_141_141;

#line 618 "ite_gen.m"
                {
#line 618 "ite_gen.m"
                  ll_backend__ite_gen__V_67_67 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeInfo_146_146);
                }
#line 617 "ite_gen.m"
                {
#line 617 "ite_gen.m"
                  ll_backend__ite_gen__find_regions_removed_at_start_of_goals_4_p_0(ll_backend__ite_gen__ElseGoals_15, ll_backend__ite_gen__ModuleInfo_32, ll_backend__ite_gen__V_67_67, &ll_backend__ite_gen__RemovedAtStartOfElse_35);
                }
#line 626 "ite_gen.m"
                {
#line 626 "ite_gen.m"
                  ll_backend__ite_gen__UnprotectedRemovedAtStartOfElse_36 = mercury__set__intersect_2_f_0(ll_backend__ite_gen__TypeInfo_146_146, ll_backend__ite_gen__RemovedAtStartOfElse_35, ll_backend__ite_gen__CondCarriedRegionVars_28);
                }
#line 1231 "ll_backend.ite_gen.c"
                ll_backend__ite_gen__TypeCtorInfo_148_148 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 630 "ite_gen.m"
                {
#line 630 "ite_gen.m"
                  ll_backend__ite_gen__V_68_68 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__ite_gen__TypeCtorInfo_148_148, ll_backend__ite_gen__NeedToBeProtectedRegionVars_34);
                }
#line 629 "ite_gen.m"
                {
#line 629 "ite_gen.m"
                  ll_backend__ite_gen__ProtectRegionVars_37 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__ite_gen__TypeCtorInfo_148_148, ll_backend__ite_gen__LiveRegionVars_23, ll_backend__ite_gen__V_68_68);
                }
#line 632 "ite_gen.m"
                {
#line 632 "ite_gen.m"
                  ll_backend__ite_gen__V_69_69 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__ite_gen__TypeCtorInfo_148_148, ll_backend__ite_gen__CondAllocRegionVars_29);
                }
#line 631 "ite_gen.m"
                {
#line 631 "ite_gen.m"
                  ll_backend__ite_gen__SnapshotRegionVars0_38 = parse_tree__set_of_var__intersect_2_f_0(ll_backend__ite_gen__TypeCtorInfo_148_148, ll_backend__ite_gen__LiveRegionVars_23, ll_backend__ite_gen__V_69_69);
                }
#line 634 "ite_gen.m"
                {
#line 634 "ite_gen.m"
                  ll_backend__ite_gen__V_70_70 = parse_tree__set_of_var__set_to_bitset_1_f_0(ll_backend__ite_gen__TypeCtorInfo_148_148, ll_backend__ite_gen__UnprotectedRemovedAtStartOfElse_36);
                }
#line 633 "ite_gen.m"
                {
#line 633 "ite_gen.m"
                  ll_backend__ite_gen__SnapshotRegionVars_39 = parse_tree__set_of_var__difference_2_f_0(ll_backend__ite_gen__TypeCtorInfo_148_148, ll_backend__ite_gen__SnapshotRegionVars0_38, ll_backend__ite_gen__V_70_70);
                }
#line 636 "ite_gen.m"
                {
#line 636 "ite_gen.m"
                  ll_backend__ite_gen__ProtectRegionVarList_40 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_148_148, ll_backend__ite_gen__ProtectRegionVars_37);
                }
#line 638 "ite_gen.m"
                {
#line 638 "ite_gen.m"
                  ll_backend__ite_gen__SnapshotRegionVarList_41 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_148_148, ll_backend__ite_gen__SnapshotRegionVars_39);
                }
#line 641 "ite_gen.m"
                {
#line 641 "ite_gen.m"
                  mercury__list__length_2_p_0(ll_backend__ite_gen__TypeInfo_146_146, ll_backend__ite_gen__ProtectRegionVarList_40, &ll_backend__ite_gen__NumProtectRegionVars_42);
                }
#line 642 "ite_gen.m"
                {
#line 642 "ite_gen.m"
                  mercury__list__length_2_p_0(ll_backend__ite_gen__TypeInfo_146_146, ll_backend__ite_gen__SnapshotRegionVarList_41, &ll_backend__ite_gen__NumSnapshotRegionVars_43);
                }
#line 644 "ite_gen.m"
                {
#line 644 "ite_gen.m"
                  ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_64, &ll_backend__ite_gen__Globals_44);
                }
#line 645 "ite_gen.m"
                {
#line 645 "ite_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ll_backend__ite_gen__Globals_44, (MR_Integer) 288, &ll_backend__ite_gen__FixedSize_45);
                }
#line 647 "ite_gen.m"
                {
#line 647 "ite_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ll_backend__ite_gen__Globals_44, (MR_Integer) 292, &ll_backend__ite_gen__ProtectSize_46);
                }
#line 649 "ite_gen.m"
                {
#line 649 "ite_gen.m"
                  libs__globals__lookup_int_option_3_p_0(ll_backend__ite_gen__Globals_44, (MR_Integer) 293, &ll_backend__ite_gen__SnapshotSize_47);
                }
#line 652 "ite_gen.m"
                ll_backend__ite_gen__V_75_75 = (ll_backend__ite_gen__ProtectSize_46 * ll_backend__ite_gen__NumProtectRegionVars_42);
#line 652 "ite_gen.m"
                ll_backend__ite_gen__V_74_74 = (ll_backend__ite_gen__FixedSize_45 + ll_backend__ite_gen__V_75_75);
#line 653 "ite_gen.m"
                ll_backend__ite_gen__V_76_76 = (ll_backend__ite_gen__SnapshotSize_47 * ll_backend__ite_gen__NumSnapshotRegionVars_43);
#line 653 "ite_gen.m"
                ll_backend__ite_gen__FrameSize_48 = (ll_backend__ite_gen__V_74_74 + ll_backend__ite_gen__V_76_76);
#line 655 "ite_gen.m"
                {
#line 655 "ite_gen.m"
                  ll_backend__ite_gen__Items_49 = mercury__list__duplicate_2_f_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, ll_backend__ite_gen__FrameSize_48, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))));
                }
#line 656 "ite_gen.m"
                {
#line 656 "ite_gen.m"
                  ll_backend__code_info__acquire_several_temp_slots_8_p_0(ll_backend__ite_gen__Items_49, (MR_Integer) 1, ll_backend__ite_gen__StackVars_19, &ll_backend__ite_gen__MainStackId_50, &ll_backend__ite_gen__FirstSlotNum_51, &ll_backend__ite_gen__LastSlotNum_52, ll_backend__ite_gen__STATE_VARIABLE_CI_0_64, &ll_backend__ite_gen__STATE_VARIABLE_CI_79_79);
                }
#line 658 "ite_gen.m"
                {
#line 658 "ite_gen.m"
                  ll_backend__ite_gen__EmbeddedStackFrameId_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 658 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__EmbeddedStackFrameId_53, 0) = ((MR_Box) (ll_backend__ite_gen__MainStackId_50));
#line 658 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__EmbeddedStackFrameId_53, 1) = ((MR_Box) (ll_backend__ite_gen__FirstSlotNum_51));
#line 658 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__EmbeddedStackFrameId_53, 2) = ((MR_Box) (ll_backend__ite_gen__LastSlotNum_52));
#line 658 "ite_gen.m"
                }
#line 660 "ite_gen.m"
                {
#line 660 "ite_gen.m"
                  ll_backend__ite_gen__FirstNonFixedAddr_54 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(ll_backend__ite_gen__EmbeddedStackFrameId_53, ll_backend__ite_gen__FixedSize_45);
                }
#line 662 "ite_gen.m"
                {
#line 662 "ite_gen.m"
                  ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__ite_gen__ProtectNumRegLval_55, ll_backend__ite_gen__STATE_VARIABLE_CI_79_79, &ll_backend__ite_gen__STATE_VARIABLE_CI_81_81);
                }
#line 663 "ite_gen.m"
                {
#line 663 "ite_gen.m"
                  ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__ite_gen__SnapshotNumRegLval_56, ll_backend__ite_gen__STATE_VARIABLE_CI_81_81, &ll_backend__ite_gen__STATE_VARIABLE_CI_83_83);
                }
#line 664 "ite_gen.m"
                {
#line 664 "ite_gen.m"
                  ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__ite_gen__AddrRegLval_57, ll_backend__ite_gen__STATE_VARIABLE_CI_83_83, &ll_backend__ite_gen__STATE_VARIABLE_CI_85_85);
                }
#line 1353 "ll_backend.ite_gen.c"
                ll_backend__ite_gen__TypeCtorInfo_150_150 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 667 "ite_gen.m"
                {
#line 667 "ite_gen.m"
                  ll_backend__ite_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 667 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 667 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_88_88, 1) = ((MR_Box) ((MR_Integer) 0));
#line 667 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_88_88, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_53));
#line 667 "ite_gen.m"
                }
#line 666 "ite_gen.m"
                {
#line 666 "ite_gen.m"
                  ll_backend__ite_gen__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_87_87, 0) = ((MR_Box) (ll_backend__ite_gen__V_88_88));
#line 666 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_87_87, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region ite stack"));
#line 666 "ite_gen.m"
                }
#line 671 "ite_gen.m"
                ll_backend__ite_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__ite_gen_scalar_common_1[3]);
#line 671 "ite_gen.m"
                {
#line 671 "ite_gen.m"
                  ll_backend__ite_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 671 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 671 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_93_93, 1) = ((MR_Box) (ll_backend__ite_gen__ProtectNumRegLval_55));
#line 671 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_93_93, 2) = ((MR_Box) (ll_backend__ite_gen__V_94_94));
#line 671 "ite_gen.m"
                }
#line 670 "ite_gen.m"
                {
#line 670 "ite_gen.m"
                  ll_backend__ite_gen__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 670 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_92_92, 0) = ((MR_Box) (ll_backend__ite_gen__V_93_93));
#line 670 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_92_92, 1) = ((MR_Box) ((MR_String) "Initialize number of protect_infos"));
#line 670 "ite_gen.m"
                }
#line 674 "ite_gen.m"
                {
#line 674 "ite_gen.m"
                  ll_backend__ite_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 674 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 674 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_100_100, 1) = ((MR_Box) (ll_backend__ite_gen__SnapshotNumRegLval_56));
#line 674 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_100_100, 2) = ((MR_Box) (ll_backend__ite_gen__V_94_94));
#line 674 "ite_gen.m"
                }
#line 673 "ite_gen.m"
                {
#line 673 "ite_gen.m"
                  ll_backend__ite_gen__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_99_99, 0) = ((MR_Box) (ll_backend__ite_gen__V_100_100));
#line 673 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_99_99, 1) = ((MR_Box) ((MR_String) "Initialize number of snapshot_infos"));
#line 673 "ite_gen.m"
                }
#line 677 "ite_gen.m"
                {
#line 677 "ite_gen.m"
                  ll_backend__ite_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 677 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 677 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_107_107, 1) = ((MR_Box) (ll_backend__ite_gen__AddrRegLval_57));
#line 677 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_107_107, 2) = ((MR_Box) (ll_backend__ite_gen__FirstNonFixedAddr_54));
#line 677 "ite_gen.m"
                }
#line 676 "ite_gen.m"
                {
#line 676 "ite_gen.m"
                  ll_backend__ite_gen__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 676 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_106_106, 0) = ((MR_Box) (ll_backend__ite_gen__V_107_107));
#line 676 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_106_106, 1) = ((MR_Box) ((MR_String) "Initialize pointer to nonfixed part of embedded frame"));
#line 676 "ite_gen.m"
                }
#line 680 "ite_gen.m"
                {
#line 680 "ite_gen.m"
                  ll_backend__ite_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_105_105, 0) = ((MR_Box) (ll_backend__ite_gen__V_106_106));
#line 680 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "ite_gen.m"
                }
#line 675 "ite_gen.m"
                {
#line 675 "ite_gen.m"
                  ll_backend__ite_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_98_98, 0) = ((MR_Box) (ll_backend__ite_gen__V_99_99));
#line 675 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_98_98, 1) = ((MR_Box) (ll_backend__ite_gen__V_105_105));
#line 675 "ite_gen.m"
                }
#line 672 "ite_gen.m"
                {
#line 672 "ite_gen.m"
                  ll_backend__ite_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_91_91, 0) = ((MR_Box) (ll_backend__ite_gen__V_92_92));
#line 672 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_91_91, 1) = ((MR_Box) (ll_backend__ite_gen__V_98_98));
#line 672 "ite_gen.m"
                }
#line 669 "ite_gen.m"
                {
#line 669 "ite_gen.m"
                  ll_backend__ite_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_86_86, 0) = ((MR_Box) (ll_backend__ite_gen__V_87_87));
#line 669 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_86_86, 1) = ((MR_Box) (ll_backend__ite_gen__V_91_91));
#line 669 "ite_gen.m"
                }
#line 665 "ite_gen.m"
                {
#line 665 "ite_gen.m"
                  ll_backend__ite_gen__PushInitCode_58 = mercury__cord__from_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150, ll_backend__ite_gen__V_86_86);
                }
#line 681 "ite_gen.m"
                {
#line 681 "ite_gen.m"
                  ll_backend__ite_gen__ite_protect_regions_7_p_0(ll_backend__ite_gen__ProtectNumRegLval_55, ll_backend__ite_gen__AddrRegLval_57, ll_backend__ite_gen__EmbeddedStackFrameId_53, ll_backend__ite_gen__ProtectRegionVarList_40, &ll_backend__ite_gen__ProtectRegionCode_59, ll_backend__ite_gen__STATE_VARIABLE_CI_85_85, &ll_backend__ite_gen__STATE_VARIABLE_CI_112_112);
                }
#line 684 "ite_gen.m"
                {
#line 684 "ite_gen.m"
                  ll_backend__ite_gen__ite_alloc_snapshot_regions_8_p_0(ll_backend__ite_gen__SnapshotNumRegLval_56, ll_backend__ite_gen__AddrRegLval_57, ll_backend__ite_gen__EmbeddedStackFrameId_53, ll_backend__ite_gen__RemovedAtStartOfElse_35, ll_backend__ite_gen__SnapshotRegionVarList_41, &ll_backend__ite_gen__SnapshotRegionCode_60, ll_backend__ite_gen__STATE_VARIABLE_CI_112_112, &ll_backend__ite_gen__STATE_VARIABLE_CI_113_113);
                }
#line 690 "ite_gen.m"
                {
#line 690 "ite_gen.m"
                  ll_backend__ite_gen__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 690 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_118_118, 0) = ((MR_Box) (ll_backend__ite_gen__ProtectNumRegLval_55));
#line 690 "ite_gen.m"
                }
#line 689 "ite_gen.m"
                {
#line 689 "ite_gen.m"
                  ll_backend__ite_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 689 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 689 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_116_116, 1) = ((MR_Box) ((MR_Integer) 0));
#line 689 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_116_116, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_53));
#line 689 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_116_116, 3) = ((MR_Box) (ll_backend__ite_gen__V_118_118));
#line 689 "ite_gen.m"
                }
#line 688 "ite_gen.m"
                {
#line 688 "ite_gen.m"
                  ll_backend__ite_gen__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_115_115, 0) = ((MR_Box) (ll_backend__ite_gen__V_116_116));
#line 688 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_115_115, 1) = ((MR_Box) ((MR_String) "Store the number of protect_infos"));
#line 688 "ite_gen.m"
                }
#line 694 "ite_gen.m"
                {
#line 694 "ite_gen.m"
                  ll_backend__ite_gen__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 694 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_124_124, 0) = ((MR_Box) (ll_backend__ite_gen__SnapshotNumRegLval_56));
#line 694 "ite_gen.m"
                }
#line 693 "ite_gen.m"
                {
#line 693 "ite_gen.m"
                  ll_backend__ite_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 693 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 693 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 1) = ((MR_Box) ((MR_Integer) 1));
#line 693 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_53));
#line 693 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_122_122, 3) = ((MR_Box) (ll_backend__ite_gen__V_124_124));
#line 693 "ite_gen.m"
                }
#line 692 "ite_gen.m"
                {
#line 692 "ite_gen.m"
                  ll_backend__ite_gen__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_121_121, 0) = ((MR_Box) (ll_backend__ite_gen__V_122_122));
#line 692 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_121_121, 1) = ((MR_Box) ((MR_String) "Store the number of snapshot_infos"));
#line 692 "ite_gen.m"
                }
#line 696 "ite_gen.m"
                {
#line 696 "ite_gen.m"
                  ll_backend__ite_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_120_120, 0) = ((MR_Box) (ll_backend__ite_gen__V_121_121));
#line 696 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "ite_gen.m"
                }
#line 691 "ite_gen.m"
                {
#line 691 "ite_gen.m"
                  ll_backend__ite_gen__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_114_114, 0) = ((MR_Box) (ll_backend__ite_gen__V_115_115));
#line 691 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_114_114, 1) = ((MR_Box) (ll_backend__ite_gen__V_120_120));
#line 691 "ite_gen.m"
                }
#line 687 "ite_gen.m"
                {
#line 687 "ite_gen.m"
                  ll_backend__ite_gen__SetCode_61 = mercury__cord__from_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150, ll_backend__ite_gen__V_114_114);
                }
#line 697 "ite_gen.m"
                {
#line 697 "ite_gen.m"
                  ll_backend__code_info__release_reg_3_p_0(ll_backend__ite_gen__ProtectNumRegLval_55, ll_backend__ite_gen__STATE_VARIABLE_CI_113_113, &ll_backend__ite_gen__STATE_VARIABLE_CI_127_127);
                }
#line 698 "ite_gen.m"
                {
#line 698 "ite_gen.m"
                  ll_backend__code_info__release_reg_3_p_0(ll_backend__ite_gen__SnapshotNumRegLval_56, ll_backend__ite_gen__STATE_VARIABLE_CI_127_127, &ll_backend__ite_gen__STATE_VARIABLE_CI_128_128);
                }
#line 699 "ite_gen.m"
                {
#line 699 "ite_gen.m"
                  ll_backend__code_info__release_reg_3_p_0(ll_backend__ite_gen__AddrRegLval_57, ll_backend__ite_gen__STATE_VARIABLE_CI_128_128, ll_backend__ite_gen__STATE_VARIABLE_CI_65);
                }
#line 701 "ite_gen.m"
                {
#line 701 "ite_gen.m"
                  ll_backend__ite_gen__CondCodeModel_62 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__ite_gen__CondGoalInfo_13);
                }
#line 706 "ite_gen.m"
                if ((ll_backend__ite_gen__CondCodeModel_62 == (MR_Integer) 0))
#line 711 "ite_gen.m"
                  {
#line 712 "ite_gen.m"
                    {
#line 712 "ite_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.maybe_create_ite_region_frame\'/11", (MR_String) "det cond");
#line 712 "ite_gen.m"
                      return;
                    }
#line 711 "ite_gen.m"
                  }
#line 706 "ite_gen.m"
                else
#line 706 "ite_gen.m"
                  if ((ll_backend__ite_gen__CondCodeModel_62 == (MR_Integer) 2))
#line 703 "ite_gen.m"
                    {
#line 704 "ite_gen.m"
                      ll_backend__ite_gen__CondKind_63 = (MR_Integer) 1;
#line 705 "ite_gen.m"
                      {
#line 705 "ite_gen.m"
                        MR_Word base;
#line 705 "ite_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 705 "ite_gen.m"
                        *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_20 = base;
#line 705 "ite_gen.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_53));
#line 705 "ite_gen.m"
                      }
#line 703 "ite_gen.m"
                    }
#line 706 "ite_gen.m"
                  else
#line 707 "ite_gen.m"
                    {
#line 708 "ite_gen.m"
                      ll_backend__ite_gen__CondKind_63 = (MR_Integer) 0;
#line 709 "ite_gen.m"
                      *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "ite_gen.m"
                    }
#line 716 "ite_gen.m"
                {
#line 716 "ite_gen.m"
                  ll_backend__ite_gen__V_134_134 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150, ll_backend__ite_gen__SnapshotRegionCode_60, ll_backend__ite_gen__SetCode_61);
                }
#line 715 "ite_gen.m"
                {
#line 715 "ite_gen.m"
                  ll_backend__ite_gen__V_133_133 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150, ll_backend__ite_gen__ProtectRegionCode_59, ll_backend__ite_gen__V_134_134);
                }
#line 715 "ite_gen.m"
                {
#line 715 "ite_gen.m"
                  *ll_backend__ite_gen__CondCode_16 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150, ll_backend__ite_gen__PushInitCode_58, ll_backend__ite_gen__V_133_133);
                }
#line 720 "ite_gen.m"
                {
#line 720 "ite_gen.m"
                  ll_backend__ite_gen__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 720 "ite_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_137_137, 0) = ((MR_Box) (ll_backend__ite_gen__CondKind_63));
#line 720 "ite_gen.m"
                }
#line 719 "ite_gen.m"
                {
#line 719 "ite_gen.m"
                  ll_backend__ite_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 719 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 719 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_136_136, 1) = ((MR_Box) (ll_backend__ite_gen__V_137_137));
#line 719 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_136_136, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_53));
#line 719 "ite_gen.m"
                }
#line 718 "ite_gen.m"
                {
#line 718 "ite_gen.m"
                  ll_backend__ite_gen__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 718 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_135_135, 0) = ((MR_Box) (ll_backend__ite_gen__V_136_136));
#line 718 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_135_135, 1) = ((MR_Box) ((MR_String) "region enter then"));
#line 718 "ite_gen.m"
                }
#line 717 "ite_gen.m"
                {
#line 717 "ite_gen.m"
                  *ll_backend__ite_gen__ThenCode_17 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150, ((MR_Box) (ll_backend__ite_gen__V_135_135)));
                }
#line 727 "ite_gen.m"
                {
#line 727 "ite_gen.m"
                  ll_backend__ite_gen__V_141_141 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 727 "ite_gen.m"
                  MR_hl_field(MR_mktag(2), ll_backend__ite_gen__V_141_141, 0) = ((MR_Box) (ll_backend__ite_gen__CondKind_63));
#line 727 "ite_gen.m"
                }
#line 726 "ite_gen.m"
                {
#line 726 "ite_gen.m"
                  ll_backend__ite_gen__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 726 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 726 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_140_140, 1) = ((MR_Box) (ll_backend__ite_gen__V_141_141));
#line 726 "ite_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_140_140, 2) = ((MR_Box) (ll_backend__ite_gen__EmbeddedStackFrameId_53));
#line 726 "ite_gen.m"
                }
#line 725 "ite_gen.m"
                {
#line 725 "ite_gen.m"
                  ll_backend__ite_gen__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 725 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_139_139, 0) = ((MR_Box) (ll_backend__ite_gen__V_140_140));
#line 725 "ite_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_139_139, 1) = ((MR_Box) ((MR_String) "region enter else"));
#line 725 "ite_gen.m"
                }
#line 724 "ite_gen.m"
                {
#line 724 "ite_gen.m"
                  *ll_backend__ite_gen__ElseCode_18 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_150_150, ((MR_Box) (ll_backend__ite_gen__V_139_139)));
                }
#line 618 "ite_gen.m"
              }
#line 594 "ite_gen.m"
          }
#line 581 "ite_gen.m"
      }
#line 574 "ite_gen.m"
    else
#line 574 "ite_gen.m"
      {
#line 574 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_143_143 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 575 "ite_gen.m"
        {
#line 575 "ite_gen.m"
          *ll_backend__ite_gen__CondCode_16 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_143_143);
        }
#line 576 "ite_gen.m"
        {
#line 576 "ite_gen.m"
          *ll_backend__ite_gen__ThenCode_17 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_143_143);
        }
#line 577 "ite_gen.m"
        {
#line 577 "ite_gen.m"
          *ll_backend__ite_gen__ElseCode_18 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_143_143);
        }
#line 578 "ite_gen.m"
        *ll_backend__ite_gen__StackVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 579 "ite_gen.m"
        *ll_backend__ite_gen__MaybeEmbeddedStackFrameId_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 579 "ite_gen.m"
        *ll_backend__ite_gen__STATE_VARIABLE_CI_65 = ll_backend__ite_gen__STATE_VARIABLE_CI_0_64;
#line 574 "ite_gen.m"
      }
#line 574 "ite_gen.m"
  }
#line 565 "ite_gen.m"
}

#line 555 "ite_gen.m"
static MR_String MR_CALL 
ll_backend__ite_gen__wrap_transient_1_f_0(
#line 555 "ite_gen.m"
  MR_String ll_backend__ite_gen__Code_3)
#line 555 "ite_gen.m"
{
#line 557 "ite_gen.m"
  {
#line 557 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 557 "ite_gen.m"
    MR_String ll_backend__ite_gen__HeadVar__2_2;
#line 557 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_4_4;
#line 557 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_6_6;

#line 560 "ite_gen.m"
    {
#line 560 "ite_gen.m"
      ll_backend__ite_gen__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_6_6, 0) = ((MR_Box) (ll_backend__ite_gen__Code_3));
#line 560 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__ite_gen_scalar_common_1[2])));
#line 560 "ite_gen.m"
    }
#line 559 "ite_gen.m"
    {
#line 559 "ite_gen.m"
      ll_backend__ite_gen__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_4_4, 0) = ((MR_Box) ((MR_String) "\t\tMR_save_transient_registers();\n"));
#line 559 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_4_4, 1) = ((MR_Box) (ll_backend__ite_gen__V_6_6));
#line 559 "ite_gen.m"
    }
#line 558 "ite_gen.m"
    {
#line 558 "ite_gen.m"
      return ll_backend__ite_gen__HeadVar__2_2 = mercury__string__append_list_1_f_0(ll_backend__ite_gen__V_4_4);
    }
#line 557 "ite_gen.m"
    return ll_backend__ite_gen__HeadVar__2_2;
#line 557 "ite_gen.m"
  }
#line 555 "ite_gen.m"
}

#line 498 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(
#line 498 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Globals_6,
#line 498 "ite_gen.m"
  MR_Word ll_backend__ite_gen__GoalInfo_7,
#line 498 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegCondCode_8,
#line 498 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegThenCode_9,
#line 498 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__PNegElseCode_10)
#line 498 "ite_gen.m"
{
#line 502 "ite_gen.m"
  {
#line 502 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 502 "ite_gen.m"
    MR_Word ll_backend__ite_gen__UseMinimalModelStackCopyPNeg_11;
#line 507 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_21_21;

#line 503 "ite_gen.m"
    {
#line 503 "ite_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__ite_gen__Globals_6, (MR_Integer) 285, &ll_backend__ite_gen__UseMinimalModelStackCopyPNeg_11);
    }
#line 506 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__UseMinimalModelStackCopyPNeg_11 == (MR_Integer) 1);
#line 506 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 506 "ite_gen.m"
      {
#line 507 "ite_gen.m"
        ll_backend__ite_gen__V_21_21 = (MR_Integer) 16;
#line 507 "ite_gen.m"
        {
#line 507 "ite_gen.m"
          ll_backend__ite_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__ite_gen__GoalInfo_7, ll_backend__ite_gen__V_21_21);
        }
#line 507 "ite_gen.m"
        ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
#line 506 "ite_gen.m"
      }
#line 549 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 509 "ite_gen.m"
      {
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_90_90;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_91_91;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Context_12;
#line 509 "ite_gen.m"
        MR_String ll_backend__ite_gen__File_13;
#line 509 "ite_gen.m"
        MR_Integer ll_backend__ite_gen__Line_14;
#line 509 "ite_gen.m"
        MR_String ll_backend__ite_gen__CtxtStr_15;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__PNegCondComponents_16;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__PNegThenComponents_17;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__PNegElseComponents_18;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_30_30;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_33_33;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_34_34;
#line 509 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_35_35;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_38_38;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_41_41;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_42_42;
#line 509 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_43_43;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_46_46;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_49_49;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_50_50;
#line 509 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_51_51;
#line 509 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_52_52;
#line 509 "ite_gen.m"
        MR_String ll_backend__ite_gen__V_54_54;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_57_57;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_58_58;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_68_68;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_69_69;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_79_79;
#line 509 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_80_80;
#line 513 "ite_gen.m"
        MR_Integer ll_backend__ite_gen__V_22_22;

#line 509 "ite_gen.m"
        {
#line 509 "ite_gen.m"
          ll_backend__ite_gen__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__ite_gen__GoalInfo_7);
        }
#line 510 "ite_gen.m"
        {
#line 510 "ite_gen.m"
          mercury__term__context_file_2_p_0(ll_backend__ite_gen__Context_12, &ll_backend__ite_gen__File_13);
        }
#line 511 "ite_gen.m"
        {
#line 511 "ite_gen.m"
          mercury__term__context_line_2_p_0(ll_backend__ite_gen__Context_12, &ll_backend__ite_gen__Line_14);
        }
#line 513 "ite_gen.m"
        ll_backend__ite_gen__succeeded = (strcmp(ll_backend__ite_gen__File_13, (MR_String) "") == 0);
#line 513 "ite_gen.m"
        ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
#line 513 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 513 "ite_gen.m"
          {
#line 514 "ite_gen.m"
            ll_backend__ite_gen__V_22_22 = (MR_Integer) 0;
#line 514 "ite_gen.m"
            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__Line_14 > ll_backend__ite_gen__V_22_22);
#line 513 "ite_gen.m"
          }
#line 517 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 516 "ite_gen.m"
          {
#line 516 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_24_24;
#line 516 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_25_25;
#line 516 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_27_27;
#line 516 "ite_gen.m"
            MR_String ll_backend__ite_gen__V_28_28;

#line 516 "ite_gen.m"
            {
#line 516 "ite_gen.m"
              ll_backend__ite_gen__V_28_28 = mercury__string__int_to_string_1_f_0(ll_backend__ite_gen__Line_14);
            }
#line 516 "ite_gen.m"
            {
#line 516 "ite_gen.m"
              ll_backend__ite_gen__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__V_28_28, (MR_String) "\"");
            }
#line 516 "ite_gen.m"
            {
#line 516 "ite_gen.m"
              ll_backend__ite_gen__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) ":", ll_backend__ite_gen__V_27_27);
            }
#line 516 "ite_gen.m"
            {
#line 516 "ite_gen.m"
              ll_backend__ite_gen__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__File_13, ll_backend__ite_gen__V_25_25);
            }
#line 516 "ite_gen.m"
            {
#line 516 "ite_gen.m"
              ll_backend__ite_gen__CtxtStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__ite_gen__V_24_24);
            }
#line 516 "ite_gen.m"
          }
#line 517 "ite_gen.m"
        else
#line 518 "ite_gen.m"
          ll_backend__ite_gen__CtxtStr_15 = (MR_String) "NULL";
#line 2014 "ll_backend.ite_gen.c"
        ll_backend__ite_gen__TypeCtorInfo_90_90 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 523 "ite_gen.m"
        {
#line 523 "ite_gen.m"
          ll_backend__ite_gen__V_34_34 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeCtorInfo_90_90);
        }
#line 523 "ite_gen.m"
        {
#line 523 "ite_gen.m"
          ll_backend__ite_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_33_33, 0) = ((MR_Box) (ll_backend__ite_gen__V_34_34));
#line 523 "ite_gen.m"
        }
#line 524 "ite_gen.m"
        {
#line 524 "ite_gen.m"
          ll_backend__ite_gen__V_35_35 = ll_backend__ite_gen__wrap_transient_1_f_0((MR_String) "\t\tMR_pneg_enter_cond();\n");
        }
#line 522 "ite_gen.m"
        {
#line 522 "ite_gen.m"
          ll_backend__ite_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 522 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 522 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 1) = ((MR_Box) ((MR_Integer) 1));
#line 522 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 2) = ((MR_Box) ((MR_Integer) 1));
#line 522 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 3) = ((MR_Box) (ll_backend__ite_gen__V_33_33));
#line 522 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_30_30, 4) = ((MR_Box) (ll_backend__ite_gen__V_35_35));
#line 522 "ite_gen.m"
        }
#line 525 "ite_gen.m"
        {
#line 525 "ite_gen.m"
          ll_backend__ite_gen__PNegCondComponents_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegCondComponents_16, 0) = ((MR_Box) (ll_backend__ite_gen__V_30_30));
#line 525 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegCondComponents_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "ite_gen.m"
        }
#line 528 "ite_gen.m"
        {
#line 528 "ite_gen.m"
          ll_backend__ite_gen__V_42_42 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeCtorInfo_90_90);
        }
#line 528 "ite_gen.m"
        {
#line 528 "ite_gen.m"
          ll_backend__ite_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_41_41, 0) = ((MR_Box) (ll_backend__ite_gen__V_42_42));
#line 528 "ite_gen.m"
        }
#line 529 "ite_gen.m"
        {
#line 529 "ite_gen.m"
          ll_backend__ite_gen__V_43_43 = ll_backend__ite_gen__wrap_transient_1_f_0((MR_String) "\t\tMR_pneg_enter_then();\n");
        }
#line 527 "ite_gen.m"
        {
#line 527 "ite_gen.m"
          ll_backend__ite_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 527 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 527 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 1) = ((MR_Box) ((MR_Integer) 1));
#line 527 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 2) = ((MR_Box) ((MR_Integer) 1));
#line 527 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 3) = ((MR_Box) (ll_backend__ite_gen__V_41_41));
#line 527 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_38_38, 4) = ((MR_Box) (ll_backend__ite_gen__V_43_43));
#line 527 "ite_gen.m"
        }
#line 530 "ite_gen.m"
        {
#line 530 "ite_gen.m"
          ll_backend__ite_gen__PNegThenComponents_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegThenComponents_17, 0) = ((MR_Box) (ll_backend__ite_gen__V_38_38));
#line 530 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegThenComponents_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "ite_gen.m"
        }
#line 533 "ite_gen.m"
        {
#line 533 "ite_gen.m"
          ll_backend__ite_gen__V_50_50 = mercury__set__init_0_f_0(ll_backend__ite_gen__TypeCtorInfo_90_90);
        }
#line 533 "ite_gen.m"
        {
#line 533 "ite_gen.m"
          ll_backend__ite_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 533 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_49_49, 0) = ((MR_Box) (ll_backend__ite_gen__V_50_50));
#line 533 "ite_gen.m"
        }
#line 534 "ite_gen.m"
        {
#line 534 "ite_gen.m"
          ll_backend__ite_gen__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__ite_gen__CtxtStr_15, (MR_String) ");\n");
        }
#line 534 "ite_gen.m"
        {
#line 534 "ite_gen.m"
          ll_backend__ite_gen__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_pneg_enter_else(", ll_backend__ite_gen__V_54_54);
        }
#line 534 "ite_gen.m"
        {
#line 534 "ite_gen.m"
          ll_backend__ite_gen__V_51_51 = ll_backend__ite_gen__wrap_transient_1_f_0(ll_backend__ite_gen__V_52_52);
        }
#line 532 "ite_gen.m"
        {
#line 532 "ite_gen.m"
          ll_backend__ite_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 532 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 532 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 1) = ((MR_Box) ((MR_Integer) 1));
#line 532 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 2) = ((MR_Box) ((MR_Integer) 1));
#line 532 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 3) = ((MR_Box) (ll_backend__ite_gen__V_49_49));
#line 532 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, 4) = ((MR_Box) (ll_backend__ite_gen__V_51_51));
#line 532 "ite_gen.m"
        }
#line 535 "ite_gen.m"
        {
#line 535 "ite_gen.m"
          ll_backend__ite_gen__PNegElseComponents_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegElseComponents_18, 0) = ((MR_Box) (ll_backend__ite_gen__V_46_46));
#line 535 "ite_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__ite_gen__PNegElseComponents_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "ite_gen.m"
        }
#line 2158 "ll_backend.ite_gen.c"
        ll_backend__ite_gen__TypeCtorInfo_91_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 538 "ite_gen.m"
        {
#line 538 "ite_gen.m"
          ll_backend__ite_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 2) = ((MR_Box) (ll_backend__ite_gen__PNegCondComponents_16));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 3) = ((MR_Box) ((MR_Integer) 1));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 9) = ((MR_Box) ((MR_Integer) 1));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_58_58, 10) = ((MR_Box) ((MR_Integer) 0));
#line 538 "ite_gen.m"
        }
#line 538 "ite_gen.m"
        {
#line 538 "ite_gen.m"
          ll_backend__ite_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_57_57, 0) = ((MR_Box) (ll_backend__ite_gen__V_58_58));
#line 538 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_57_57, 1) = ((MR_Box) ((MR_String) ""));
#line 538 "ite_gen.m"
        }
#line 537 "ite_gen.m"
        {
#line 537 "ite_gen.m"
          *ll_backend__ite_gen__PNegCondCode_8 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__ite_gen__V_57_57)));
        }
#line 542 "ite_gen.m"
        {
#line 542 "ite_gen.m"
          ll_backend__ite_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 2) = ((MR_Box) (ll_backend__ite_gen__PNegThenComponents_17));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 3) = ((MR_Box) ((MR_Integer) 1));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 9) = ((MR_Box) ((MR_Integer) 1));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_69_69, 10) = ((MR_Box) ((MR_Integer) 0));
#line 542 "ite_gen.m"
        }
#line 542 "ite_gen.m"
        {
#line 542 "ite_gen.m"
          ll_backend__ite_gen__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_68_68, 0) = ((MR_Box) (ll_backend__ite_gen__V_69_69));
#line 542 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_68_68, 1) = ((MR_Box) ((MR_String) ""));
#line 542 "ite_gen.m"
        }
#line 541 "ite_gen.m"
        {
#line 541 "ite_gen.m"
          *ll_backend__ite_gen__PNegThenCode_9 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__ite_gen__V_68_68)));
        }
#line 546 "ite_gen.m"
        {
#line 546 "ite_gen.m"
          ll_backend__ite_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 2) = ((MR_Box) (ll_backend__ite_gen__PNegElseComponents_18));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 3) = ((MR_Box) ((MR_Integer) 1));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 9) = ((MR_Box) ((MR_Integer) 1));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_80_80, 10) = ((MR_Box) ((MR_Integer) 0));
#line 546 "ite_gen.m"
        }
#line 546 "ite_gen.m"
        {
#line 546 "ite_gen.m"
          ll_backend__ite_gen__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_79_79, 0) = ((MR_Box) (ll_backend__ite_gen__V_80_80));
#line 546 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_79_79, 1) = ((MR_Box) ((MR_String) ""));
#line 546 "ite_gen.m"
        }
#line 545 "ite_gen.m"
        {
#line 545 "ite_gen.m"
          *ll_backend__ite_gen__PNegElseCode_10 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_91_91, ((MR_Box) (ll_backend__ite_gen__V_79_79)));
        }
#line 509 "ite_gen.m"
      }
#line 549 "ite_gen.m"
    else
#line 550 "ite_gen.m"
      {
#line 550 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_92_92 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 550 "ite_gen.m"
        {
#line 550 "ite_gen.m"
          *ll_backend__ite_gen__PNegCondCode_8 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_92_92);
        }
#line 551 "ite_gen.m"
        {
#line 551 "ite_gen.m"
          *ll_backend__ite_gen__PNegThenCode_9 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_92_92);
        }
#line 552 "ite_gen.m"
        {
#line 552 "ite_gen.m"
          *ll_backend__ite_gen__PNegElseCode_10 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_92_92);
        }
#line 550 "ite_gen.m"
      }
#line 502 "ite_gen.m"
  }
#line 498 "ite_gen.m"
}

#line 396 "ite_gen.m"
static MR_bool MR_CALL 
ll_backend__ite_gen__generate_negation_general_8_p_0_1(
#line 396 "ite_gen.m"
  MR_Box ll_backend__ite_gen__closure_arg)
#line 396 "ite_gen.m"
{
#line 396 "ite_gen.m"
  {
#line 396 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 396 "ite_gen.m"
    MR_Box ll_backend__ite_gen__closure = ll_backend__ite_gen__closure_arg;

#line 396 "ite_gen.m"
    {
#line 396 "ite_gen.m"
      return ll_backend__ite_gen__succeeded = ll_backend__ite_gen__IntroducedFrom__pred__generate_negation_general__396__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__closure, (MR_Integer) 4))));
    }
#line 396 "ite_gen.m"
    return ll_backend__ite_gen__succeeded;
#line 396 "ite_gen.m"
  }
#line 396 "ite_gen.m"
}

#line 356 "ite_gen.m"
static void MR_CALL 
ll_backend__ite_gen__generate_negation_general_8_p_0(
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CodeModel_9,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Goal_10,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NotGoalInfo_11,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ResumeVars_12,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ResumeLocs_13,
#line 356 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__Code_14,
#line 356 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_57,
#line 356 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_58)
#line 356 "ite_gen.m"
{
#line 361 "ite_gen.m"
  {
#line 361 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__TypeCtorInfo_120_120;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeMap_16;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__FlushCode_17;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Globals_18;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ReclaimHeapOnFailure_19;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ReclaimHeap_20;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SaveHpCode_21;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeHpSlot_22;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__AddTrailOps_23;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SaveTicketCode_24;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeTicketSlot_25;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__IteRegionOps_27;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalInfo_29;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondGoals_30;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionCondCode_31;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionThenCode_32;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionElseCode_33;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionStackVars_34;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeRegionSuccRecordSlot_35;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__HijackInfo_36;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PrepareHijackCode_37;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumePoint_38;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EffectResumeCode_39;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EnterTraceCode_40;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalCode_41;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenNeckCode_42;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseNeckCode_43;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Zombies_44;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__LiveVars_45;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PruneTicketCode_46;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__FailTraceCode_47;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__FailCode_48;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeCode_50;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RestoreHpCode_51;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RestoreTicketCode_52;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SuccessTraceCode_53;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegCondCode_54;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegThenCode_55;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegElseCode_56;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_59_59;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_60_60;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_62_62;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_63_63;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_65_65;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_66_66;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_71_71;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_72_72;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_73_73;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_74_74;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_75_75;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_77_77;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_78_78;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_79_79;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_80_80;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_87_87;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_88_88;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_89_89;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_90_90;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_92_92;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_94_94;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_97_97;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_98_98;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_99_99;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_100_100;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_101_101;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_102_102;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_103_103;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_104_104;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_105_105;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_106_106;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_107_107;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_108_108;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_109_109;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_110_110;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_111_111;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_112_112;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_113_113;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_114_114;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_115_115;
#line 361 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_116_116;
#line 389 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_28_28;

#line 362 "ite_gen.m"
    {
#line 362 "ite_gen.m"
      ll_backend__ite_gen__V_59_59 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_117_117, ll_backend__ite_gen__ResumeVars_12);
    }
#line 362 "ite_gen.m"
    {
#line 362 "ite_gen.m"
      ll_backend__code_info__produce_vars_5_p_0(ll_backend__ite_gen__V_59_59, &ll_backend__ite_gen__ResumeMap_16, &ll_backend__ite_gen__FlushCode_17, ll_backend__ite_gen__STATE_VARIABLE_CI_0_57, &ll_backend__ite_gen__STATE_VARIABLE_CI_60_60);
    }
#line 369 "ite_gen.m"
    {
#line 369 "ite_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_60_60, &ll_backend__ite_gen__Globals_18);
    }
#line 370 "ite_gen.m"
    {
#line 370 "ite_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__ite_gen__Globals_18, (MR_Integer) 307, &ll_backend__ite_gen__ReclaimHeapOnFailure_19);
    }
#line 373 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__ReclaimHeapOnFailure_19 == (MR_Integer) 1);
#line 373 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 374 "ite_gen.m"
      {
#line 374 "ite_gen.m"
        ll_backend__ite_gen__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ll_backend__ite_gen__Goal_10);
      }
#line 377 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 376 "ite_gen.m"
      ll_backend__ite_gen__ReclaimHeap_20 = (MR_Integer) 1;
#line 377 "ite_gen.m"
    else
#line 378 "ite_gen.m"
      ll_backend__ite_gen__ReclaimHeap_20 = (MR_Integer) 0;
#line 380 "ite_gen.m"
    {
#line 380 "ite_gen.m"
      ll_backend__code_info__maybe_save_hp_5_p_0(ll_backend__ite_gen__ReclaimHeap_20, &ll_backend__ite_gen__SaveHpCode_21, &ll_backend__ite_gen__MaybeHpSlot_22, ll_backend__ite_gen__STATE_VARIABLE_CI_60_60, &ll_backend__ite_gen__STATE_VARIABLE_CI_62_62);
    }
#line 383 "ite_gen.m"
    {
#line 383 "ite_gen.m"
      ll_backend__ite_gen__AddTrailOps_23 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_62_62, ll_backend__ite_gen__NotGoalInfo_11);
    }
#line 384 "ite_gen.m"
    {
#line 384 "ite_gen.m"
      ll_backend__code_info__maybe_save_ticket_5_p_0(ll_backend__ite_gen__AddTrailOps_23, &ll_backend__ite_gen__SaveTicketCode_24, &ll_backend__ite_gen__MaybeTicketSlot_25, ll_backend__ite_gen__STATE_VARIABLE_CI_62_62, &ll_backend__ite_gen__STATE_VARIABLE_CI_63_63);
    }
#line 387 "ite_gen.m"
    {
#line 387 "ite_gen.m"
      ll_backend__ite_gen__IteRegionOps_27 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_63_63, ll_backend__ite_gen__NotGoalInfo_11);
    }
#line 389 "ite_gen.m"
    ll_backend__ite_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_10, (MR_Integer) 0)));
#line 389 "ite_gen.m"
    ll_backend__ite_gen__GoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_10, (MR_Integer) 1)));
#line 390 "ite_gen.m"
    {
#line 390 "ite_gen.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__ite_gen__Goal_10, &ll_backend__ite_gen__CondGoals_30);
    }
#line 391 "ite_gen.m"
    {
#line 391 "ite_gen.m"
      ll_backend__ite_gen__maybe_create_ite_region_frame_11_p_0(ll_backend__ite_gen__IteRegionOps_27, ll_backend__ite_gen__GoalInfo_29, ll_backend__ite_gen__CondGoals_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__ite_gen__RegionCondCode_31, &ll_backend__ite_gen__RegionThenCode_32, &ll_backend__ite_gen__RegionElseCode_33, &ll_backend__ite_gen__RegionStackVars_34, &ll_backend__ite_gen__MaybeRegionSuccRecordSlot_35, ll_backend__ite_gen__STATE_VARIABLE_CI_63_63, &ll_backend__ite_gen__STATE_VARIABLE_CI_65_65);
    }
#line 396 "ite_gen.m"
    {
#line 396 "ite_gen.m"
      ll_backend__ite_gen__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 396 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_66_66, 0) = ((MR_Box) (&ll_backend__ite_gen_scalar_common_2[0]));
#line 396 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_66_66, 1) = ((MR_Box) (ll_backend__ite_gen__generate_negation_general_8_p_0_1));
#line 396 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 396 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_66_66, 3) = ((MR_Box) (ll_backend__ite_gen__MaybeRegionSuccRecordSlot_35));
#line 396 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_66_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "ite_gen.m"
    }
#line 396 "ite_gen.m"
    {
#line 396 "ite_gen.m"
      mercury__require__expect_4_p_0(ll_backend__ite_gen__V_66_66, (MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.generate_negation_general\'/8", (MR_String) "MaybeRegionSuccRecordSlot = yes(_)");
    }
#line 399 "ite_gen.m"
    {
#line 399 "ite_gen.m"
      ll_backend__code_info__prepare_for_ite_hijack_6_p_0(ll_backend__ite_gen__CodeModel_9, ll_backend__ite_gen__MaybeRegionSuccRecordSlot_35, &ll_backend__ite_gen__HijackInfo_36, &ll_backend__ite_gen__PrepareHijackCode_37, ll_backend__ite_gen__STATE_VARIABLE_CI_65_65, &ll_backend__ite_gen__STATE_VARIABLE_CI_71_71);
    }
#line 402 "ite_gen.m"
    {
#line 402 "ite_gen.m"
      ll_backend__ite_gen__V_72_72 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_117_117, ll_backend__ite_gen__ResumeVars_12);
    }
#line 402 "ite_gen.m"
    {
#line 402 "ite_gen.m"
      ll_backend__code_info__make_resume_point_6_p_0(ll_backend__ite_gen__V_72_72, ll_backend__ite_gen__ResumeLocs_13, ll_backend__ite_gen__ResumeMap_16, &ll_backend__ite_gen__ResumePoint_38, ll_backend__ite_gen__STATE_VARIABLE_CI_71_71, &ll_backend__ite_gen__STATE_VARIABLE_CI_73_73);
    }
#line 404 "ite_gen.m"
    {
#line 404 "ite_gen.m"
      ll_backend__code_info__effect_resume_point_5_p_0(ll_backend__ite_gen__ResumePoint_38, ll_backend__ite_gen__CodeModel_9, &ll_backend__ite_gen__EffectResumeCode_39, ll_backend__ite_gen__STATE_VARIABLE_CI_73_73, &ll_backend__ite_gen__STATE_VARIABLE_CI_74_74);
    }
#line 408 "ite_gen.m"
    {
#line 408 "ite_gen.m"
      ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(ll_backend__ite_gen__Goal_10, ll_backend__ite_gen__NotGoalInfo_11, &ll_backend__ite_gen__EnterTraceCode_40, ll_backend__ite_gen__STATE_VARIABLE_CI_74_74, &ll_backend__ite_gen__STATE_VARIABLE_CI_75_75);
    }
#line 409 "ite_gen.m"
    {
#line 409 "ite_gen.m"
      ll_backend__code_gen__generate_goal_5_p_0((MR_Integer) 1, ll_backend__ite_gen__Goal_10, &ll_backend__ite_gen__GoalCode_41, ll_backend__ite_gen__STATE_VARIABLE_CI_75_75, &ll_backend__ite_gen__STATE_VARIABLE_CI_77_77);
    }
#line 411 "ite_gen.m"
    {
#line 411 "ite_gen.m"
      ll_backend__code_info__ite_enter_then_6_p_0(ll_backend__ite_gen__HijackInfo_36, ll_backend__ite_gen__ResumePoint_38, &ll_backend__ite_gen__ThenNeckCode_42, &ll_backend__ite_gen__ElseNeckCode_43, ll_backend__ite_gen__STATE_VARIABLE_CI_77_77, &ll_backend__ite_gen__STATE_VARIABLE_CI_78_78);
    }
#line 414 "ite_gen.m"
    {
#line 414 "ite_gen.m"
      ll_backend__code_info__pickup_zombies_3_p_0(&ll_backend__ite_gen__Zombies_44, ll_backend__ite_gen__STATE_VARIABLE_CI_78_78, &ll_backend__ite_gen__STATE_VARIABLE_CI_79_79);
    }
#line 415 "ite_gen.m"
    {
#line 415 "ite_gen.m"
      ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__ite_gen__Zombies_44, ll_backend__ite_gen__STATE_VARIABLE_CI_79_79, &ll_backend__ite_gen__STATE_VARIABLE_CI_80_80);
    }
#line 417 "ite_gen.m"
    {
#line 417 "ite_gen.m"
      ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_80_80, &ll_backend__ite_gen__LiveVars_45);
    }
#line 425 "ite_gen.m"
    if ((ll_backend__ite_gen__CodeModel_9 == (MR_Integer) 0))
#line 420 "ite_gen.m"
      {
#line 420 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_119_119 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;

#line 422 "ite_gen.m"
        {
#line 422 "ite_gen.m"
          ll_backend__ite_gen__PruneTicketCode_46 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_119_119);
        }
#line 423 "ite_gen.m"
        {
#line 423 "ite_gen.m"
          ll_backend__ite_gen__FailTraceCode_47 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_119_119);
        }
#line 424 "ite_gen.m"
        {
#line 424 "ite_gen.m"
          ll_backend__ite_gen__FailCode_48 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_119_119);
        }
#line 424 "ite_gen.m"
        ll_backend__ite_gen__STATE_VARIABLE_CI_87_87 = ll_backend__ite_gen__STATE_VARIABLE_CI_80_80;
#line 420 "ite_gen.m"
      }
#line 425 "ite_gen.m"
    else
#line 428 "ite_gen.m"
      {
#line 428 "ite_gen.m"
        MR_Word ll_backend__ite_gen__AfterNegatedGoal_49;
#line 428 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_81_81;
#line 428 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_83_83;
#line 428 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_85_85;
#line 428 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_86_86;

#line 429 "ite_gen.m"
        {
#line 429 "ite_gen.m"
          ll_backend__code_info__remember_position_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_80_80, &ll_backend__ite_gen__AfterNegatedGoal_49);
        }
#line 432 "ite_gen.m"
        {
#line 432 "ite_gen.m"
          ll_backend__code_info__maybe_release_hp_3_p_0(ll_backend__ite_gen__MaybeHpSlot_22, ll_backend__ite_gen__STATE_VARIABLE_CI_80_80, &ll_backend__ite_gen__STATE_VARIABLE_CI_81_81);
        }
#line 433 "ite_gen.m"
        {
#line 433 "ite_gen.m"
          ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_p_0(ll_backend__ite_gen__MaybeTicketSlot_25, (MR_Integer) 1, &ll_backend__ite_gen__PruneTicketCode_46, ll_backend__ite_gen__STATE_VARIABLE_CI_81_81, &ll_backend__ite_gen__STATE_VARIABLE_CI_83_83);
        }
#line 435 "ite_gen.m"
        {
#line 435 "ite_gen.m"
          ll_backend__trace_gen__maybe_generate_negated_event_code_6_p_0(ll_backend__ite_gen__Goal_10, ll_backend__ite_gen__NotGoalInfo_11, (MR_Integer) 1, &ll_backend__ite_gen__FailTraceCode_47, ll_backend__ite_gen__STATE_VARIABLE_CI_83_83, &ll_backend__ite_gen__STATE_VARIABLE_CI_85_85);
        }
#line 437 "ite_gen.m"
        {
#line 437 "ite_gen.m"
          ll_backend__code_info__generate_failure_3_p_0(&ll_backend__ite_gen__FailCode_48, ll_backend__ite_gen__STATE_VARIABLE_CI_85_85, &ll_backend__ite_gen__STATE_VARIABLE_CI_86_86);
        }
#line 441 "ite_gen.m"
        {
#line 441 "ite_gen.m"
          ll_backend__code_info__reset_to_position_3_p_0(ll_backend__ite_gen__AfterNegatedGoal_49, ll_backend__ite_gen__STATE_VARIABLE_CI_86_86, &ll_backend__ite_gen__STATE_VARIABLE_CI_87_87);
        }
#line 428 "ite_gen.m"
      }
#line 445 "ite_gen.m"
    {
#line 445 "ite_gen.m"
      ll_backend__code_info__generate_resume_point_4_p_0(ll_backend__ite_gen__ResumePoint_38, &ll_backend__ite_gen__ResumeCode_50, ll_backend__ite_gen__STATE_VARIABLE_CI_87_87, &ll_backend__ite_gen__STATE_VARIABLE_CI_88_88);
    }
#line 447 "ite_gen.m"
    {
#line 447 "ite_gen.m"
      ll_backend__code_info__set_forward_live_vars_3_p_0(ll_backend__ite_gen__LiveVars_45, ll_backend__ite_gen__STATE_VARIABLE_CI_88_88, &ll_backend__ite_gen__STATE_VARIABLE_CI_89_89);
    }
#line 450 "ite_gen.m"
    {
#line 450 "ite_gen.m"
      ll_backend__code_info__maybe_restore_and_release_hp_4_p_0(ll_backend__ite_gen__MaybeHpSlot_22, &ll_backend__ite_gen__RestoreHpCode_51, ll_backend__ite_gen__STATE_VARIABLE_CI_89_89, &ll_backend__ite_gen__STATE_VARIABLE_CI_90_90);
    }
#line 451 "ite_gen.m"
    {
#line 451 "ite_gen.m"
      ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_p_0(ll_backend__ite_gen__MaybeTicketSlot_25, (MR_Integer) 0, &ll_backend__ite_gen__RestoreTicketCode_52, ll_backend__ite_gen__STATE_VARIABLE_CI_90_90, &ll_backend__ite_gen__STATE_VARIABLE_CI_92_92);
    }
#line 453 "ite_gen.m"
    {
#line 453 "ite_gen.m"
      ll_backend__code_info__release_several_temp_slots_4_p_0(ll_backend__ite_gen__RegionStackVars_34, (MR_Integer) 1, ll_backend__ite_gen__STATE_VARIABLE_CI_92_92, &ll_backend__ite_gen__STATE_VARIABLE_CI_94_94);
    }
#line 455 "ite_gen.m"
    {
#line 455 "ite_gen.m"
      ll_backend__trace_gen__maybe_generate_negated_event_code_6_p_0(ll_backend__ite_gen__Goal_10, ll_backend__ite_gen__NotGoalInfo_11, (MR_Integer) 0, &ll_backend__ite_gen__SuccessTraceCode_53, ll_backend__ite_gen__STATE_VARIABLE_CI_94_94, ll_backend__ite_gen__STATE_VARIABLE_CI_58);
    }
#line 458 "ite_gen.m"
    {
#line 458 "ite_gen.m"
      ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(ll_backend__ite_gen__Globals_18, ll_backend__ite_gen__NotGoalInfo_11, &ll_backend__ite_gen__PNegCondCode_54, &ll_backend__ite_gen__PNegThenCode_55, &ll_backend__ite_gen__PNegElseCode_56);
    }
#line 2786 "ll_backend.ite_gen.c"
    ll_backend__ite_gen__TypeCtorInfo_120_120 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 481 "ite_gen.m"
    {
#line 481 "ite_gen.m"
      ll_backend__ite_gen__V_116_116 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__SuccessTraceCode_53, ll_backend__ite_gen__PNegElseCode_56);
    }
#line 480 "ite_gen.m"
    {
#line 480 "ite_gen.m"
      ll_backend__ite_gen__V_115_115 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__RegionElseCode_33, ll_backend__ite_gen__V_116_116);
    }
#line 479 "ite_gen.m"
    {
#line 479 "ite_gen.m"
      ll_backend__ite_gen__V_114_114 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__RestoreHpCode_51, ll_backend__ite_gen__V_115_115);
    }
#line 478 "ite_gen.m"
    {
#line 478 "ite_gen.m"
      ll_backend__ite_gen__V_113_113 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__RestoreTicketCode_52, ll_backend__ite_gen__V_114_114);
    }
#line 477 "ite_gen.m"
    {
#line 477 "ite_gen.m"
      ll_backend__ite_gen__V_112_112 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__ElseNeckCode_43, ll_backend__ite_gen__V_113_113);
    }
#line 476 "ite_gen.m"
    {
#line 476 "ite_gen.m"
      ll_backend__ite_gen__V_111_111 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__ResumeCode_50, ll_backend__ite_gen__V_112_112);
    }
#line 475 "ite_gen.m"
    {
#line 475 "ite_gen.m"
      ll_backend__ite_gen__V_110_110 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__FailCode_48, ll_backend__ite_gen__V_111_111);
    }
#line 474 "ite_gen.m"
    {
#line 474 "ite_gen.m"
      ll_backend__ite_gen__V_109_109 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__PNegThenCode_55, ll_backend__ite_gen__V_110_110);
    }
#line 473 "ite_gen.m"
    {
#line 473 "ite_gen.m"
      ll_backend__ite_gen__V_108_108 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__FailTraceCode_47, ll_backend__ite_gen__V_109_109);
    }
#line 472 "ite_gen.m"
    {
#line 472 "ite_gen.m"
      ll_backend__ite_gen__V_107_107 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__RegionThenCode_32, ll_backend__ite_gen__V_108_108);
    }
#line 471 "ite_gen.m"
    {
#line 471 "ite_gen.m"
      ll_backend__ite_gen__V_106_106 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__PruneTicketCode_46, ll_backend__ite_gen__V_107_107);
    }
#line 470 "ite_gen.m"
    {
#line 470 "ite_gen.m"
      ll_backend__ite_gen__V_105_105 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__ThenNeckCode_42, ll_backend__ite_gen__V_106_106);
    }
#line 469 "ite_gen.m"
    {
#line 469 "ite_gen.m"
      ll_backend__ite_gen__V_104_104 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__GoalCode_41, ll_backend__ite_gen__V_105_105);
    }
#line 468 "ite_gen.m"
    {
#line 468 "ite_gen.m"
      ll_backend__ite_gen__V_103_103 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__PNegCondCode_54, ll_backend__ite_gen__V_104_104);
    }
#line 467 "ite_gen.m"
    {
#line 467 "ite_gen.m"
      ll_backend__ite_gen__V_102_102 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__EnterTraceCode_40, ll_backend__ite_gen__V_103_103);
    }
#line 466 "ite_gen.m"
    {
#line 466 "ite_gen.m"
      ll_backend__ite_gen__V_101_101 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__RegionCondCode_31, ll_backend__ite_gen__V_102_102);
    }
#line 465 "ite_gen.m"
    {
#line 465 "ite_gen.m"
      ll_backend__ite_gen__V_100_100 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__SaveTicketCode_24, ll_backend__ite_gen__V_101_101);
    }
#line 464 "ite_gen.m"
    {
#line 464 "ite_gen.m"
      ll_backend__ite_gen__V_99_99 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__SaveHpCode_21, ll_backend__ite_gen__V_100_100);
    }
#line 463 "ite_gen.m"
    {
#line 463 "ite_gen.m"
      ll_backend__ite_gen__V_98_98 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__EffectResumeCode_39, ll_backend__ite_gen__V_99_99);
    }
#line 462 "ite_gen.m"
    {
#line 462 "ite_gen.m"
      ll_backend__ite_gen__V_97_97 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__PrepareHijackCode_37, ll_backend__ite_gen__V_98_98);
    }
#line 461 "ite_gen.m"
    {
#line 461 "ite_gen.m"
      *ll_backend__ite_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_120_120, ll_backend__ite_gen__FlushCode_17, ll_backend__ite_gen__V_97_97);
    }
#line 361 "ite_gen.m"
  }
#line 356 "ite_gen.m"
}

#line 32 "ite_gen.m"
void MR_CALL 
ll_backend__ite_gen__generate_negation_6_p_0(
#line 32 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CodeModel_7,
#line 32 "ite_gen.m"
  MR_Word ll_backend__ite_gen__Goal0_8,
#line 32 "ite_gen.m"
  MR_Word ll_backend__ite_gen__NotGoalInfo_9,
#line 32 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__Code_10,
#line 32 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_37,
#line 32 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_38)
#line 32 "ite_gen.m"
{
#line 294 "ite_gen.m"
  {
#line 294 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 294 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalExpr_12;
#line 294 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalInfo0_13;
#line 294 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Resume_14;
#line 294 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeVars_17;
#line 294 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeLocs_18;
#line 294 "ite_gen.m"
    MR_Word ll_backend__ite_gen__GoalInfo_19;
#line 294 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Goal_20;
#line 348 "ite_gen.m"
    MR_Word ll_backend__ite_gen__L_24;
#line 348 "ite_gen.m"
    MR_Word ll_backend__ite_gen__R_25;
#line 348 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CodeAddr_27;
#line 320 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Globals_28;
#line 320 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_46_46;
#line 320 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_47_47;
#line 320 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_48_48;
#line 321 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_21_21;
#line 321 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_22_22;
#line 321 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_23_23;
#line 321 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_26_26;

#line 298 "ite_gen.m"
    if ((ll_backend__ite_gen__CodeModel_7 == (MR_Integer) 0))
#line 299 "ite_gen.m"
      {
#line 299 "ite_gen.m"
      }
#line 298 "ite_gen.m"
    else
#line 298 "ite_gen.m"
      if ((ll_backend__ite_gen__CodeModel_7 == (MR_Integer) 2))
#line 296 "ite_gen.m"
        {
#line 297 "ite_gen.m"
          {
#line 297 "ite_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.generate_negation\'/6", (MR_String) "nondet negation");
#line 297 "ite_gen.m"
            return;
          }
#line 296 "ite_gen.m"
        }
#line 298 "ite_gen.m"
      else
#line 300 "ite_gen.m"
        {
#line 300 "ite_gen.m"
        }
#line 304 "ite_gen.m"
    ll_backend__ite_gen__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal0_8, (MR_Integer) 0)));
#line 304 "ite_gen.m"
    ll_backend__ite_gen__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal0_8, (MR_Integer) 1)));
#line 305 "ite_gen.m"
    {
#line 305 "ite_gen.m"
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__ite_gen__GoalInfo0_13, &ll_backend__ite_gen__Resume_14);
    }
#line 312 "ite_gen.m"
    if ((ll_backend__ite_gen__Resume_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "ite_gen.m"
      {
#line 314 "ite_gen.m"
        {
#line 314 "ite_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.generate_negation\'/6", (MR_String) "negated goal has no resume point");
#line 314 "ite_gen.m"
          return;
        }
#line 313 "ite_gen.m"
      }
#line 312 "ite_gen.m"
    else
#line 307 "ite_gen.m"
      {
#line 307 "ite_gen.m"
        ll_backend__ite_gen__ResumeVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_14, (MR_Integer) 0)));
#line 307 "ite_gen.m"
        ll_backend__ite_gen__ResumeLocs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_14, (MR_Integer) 1)));
#line 310 "ite_gen.m"
        {
#line 310 "ite_gen.m"
          hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ite_gen__GoalInfo0_13, &ll_backend__ite_gen__GoalInfo_19);
        }
#line 311 "ite_gen.m"
        {
#line 311 "ite_gen.m"
          ll_backend__ite_gen__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_20, 0) = ((MR_Box) (ll_backend__ite_gen__GoalExpr_12));
#line 311 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__Goal_20, 1) = ((MR_Box) (ll_backend__ite_gen__GoalInfo_19));
#line 311 "ite_gen.m"
        }
#line 307 "ite_gen.m"
      }
#line 320 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CodeModel_7 == (MR_Integer) 1);
#line 320 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 320 "ite_gen.m"
      {
#line 321 "ite_gen.m"
        ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__GoalExpr_12)) == (MR_mktag((MR_Integer) 1)));
#line 321 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 321 "ite_gen.m"
          {
#line 321 "ite_gen.m"
            ll_backend__ite_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_12, (MR_Integer) 0)));
#line 321 "ite_gen.m"
            ll_backend__ite_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_12, (MR_Integer) 1)));
#line 321 "ite_gen.m"
            ll_backend__ite_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_12, (MR_Integer) 2)));
#line 321 "ite_gen.m"
            ll_backend__ite_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_12, (MR_Integer) 3)));
#line 321 "ite_gen.m"
            ll_backend__ite_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__GoalExpr_12, (MR_Integer) 4)));
#line 321 "ite_gen.m"
            ll_backend__ite_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__ite_gen__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 321 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 321 "ite_gen.m"
              {
#line 321 "ite_gen.m"
                ll_backend__ite_gen__L_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, (MR_Integer) 1)));
#line 321 "ite_gen.m"
                ll_backend__ite_gen__R_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_46_46, (MR_Integer) 2)));
#line 322 "ite_gen.m"
                {
#line 322 "ite_gen.m"
                  ll_backend__ite_gen__succeeded = ll_backend__code_info__failure_is_direct_branch_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, &ll_backend__ite_gen__CodeAddr_27);
                }
#line 320 "ite_gen.m"
                if (ll_backend__ite_gen__succeeded)
#line 320 "ite_gen.m"
                  {
#line 323 "ite_gen.m"
                    {
#line 323 "ite_gen.m"
                      ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, &ll_backend__ite_gen__Globals_28);
                    }
#line 324 "ite_gen.m"
                    ll_backend__ite_gen__V_47_47 = (MR_Integer) 453;
#line 324 "ite_gen.m"
                    ll_backend__ite_gen__V_48_48 = (MR_Integer) 1;
#line 324 "ite_gen.m"
                    {
#line 324 "ite_gen.m"
                      ll_backend__ite_gen__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__ite_gen__Globals_28, ll_backend__ite_gen__V_47_47, ll_backend__ite_gen__V_48_48);
                    }
#line 320 "ite_gen.m"
                  }
#line 321 "ite_gen.m"
              }
#line 321 "ite_gen.m"
          }
#line 320 "ite_gen.m"
      }
#line 348 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 331 "ite_gen.m"
      {
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_63_63;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__SimpleNeg_29;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__CodeL_30;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__ValL_31;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__CodeR_32;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__ValR_33;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Type_34;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__Op_35;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TestCode_36;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_49_49;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_50_50;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_51_51;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_52_52;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_55_55;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_56_56;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_57_57;
#line 331 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_60_60;
#line 335 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_53_53;

#line 330 "ite_gen.m"
        {
#line 330 "ite_gen.m"
          ll_backend__ite_gen__V_49_49 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__ite_gen__ResumeVars_17);
        }
#line 330 "ite_gen.m"
        {
#line 330 "ite_gen.m"
          ll_backend__code_info__enter_simple_neg_5_p_0(ll_backend__ite_gen__V_49_49, ll_backend__ite_gen__GoalInfo_19, &ll_backend__ite_gen__SimpleNeg_29, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, &ll_backend__ite_gen__STATE_VARIABLE_CI_50_50);
        }
#line 332 "ite_gen.m"
        {
#line 332 "ite_gen.m"
          ll_backend__code_info__produce_variable_5_p_0(ll_backend__ite_gen__L_24, &ll_backend__ite_gen__CodeL_30, &ll_backend__ite_gen__ValL_31, ll_backend__ite_gen__STATE_VARIABLE_CI_50_50, &ll_backend__ite_gen__STATE_VARIABLE_CI_51_51);
        }
#line 333 "ite_gen.m"
        {
#line 333 "ite_gen.m"
          ll_backend__code_info__produce_variable_5_p_0(ll_backend__ite_gen__R_25, &ll_backend__ite_gen__CodeR_32, &ll_backend__ite_gen__ValR_33, ll_backend__ite_gen__STATE_VARIABLE_CI_51_51, &ll_backend__ite_gen__STATE_VARIABLE_CI_52_52);
        }
#line 334 "ite_gen.m"
        {
#line 334 "ite_gen.m"
          ll_backend__ite_gen__Type_34 = ll_backend__code_info__variable_type_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_52_52, ll_backend__ite_gen__L_24);
        }
#line 335 "ite_gen.m"
        ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__Type_34)) == (MR_mktag((MR_Integer) 2)));
#line 335 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 335 "ite_gen.m"
          {
#line 335 "ite_gen.m"
            ll_backend__ite_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__Type_34, (MR_Integer) 0)));
#line 335 "ite_gen.m"
            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_53_53 == (MR_Integer) 2);
#line 335 "ite_gen.m"
          }
#line 337 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 336 "ite_gen.m"
          ll_backend__ite_gen__Op_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15));
#line 337 "ite_gen.m"
        else
#line 339 "ite_gen.m"
          {
#line 337 "ite_gen.m"
            MR_Word ll_backend__ite_gen__V_54_54;

#line 337 "ite_gen.m"
            ll_backend__ite_gen__succeeded = ((MR_tag((MR_Word) ll_backend__ite_gen__Type_34)) == (MR_mktag((MR_Integer) 2)));
#line 337 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 337 "ite_gen.m"
              {
#line 337 "ite_gen.m"
                ll_backend__ite_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__ite_gen__Type_34, (MR_Integer) 0)));
#line 337 "ite_gen.m"
                ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_54_54 == (MR_Integer) 1);
#line 337 "ite_gen.m"
              }
#line 339 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 338 "ite_gen.m"
              ll_backend__ite_gen__Op_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31));
#line 339 "ite_gen.m"
            else
#line 340 "ite_gen.m"
              ll_backend__ite_gen__Op_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 339 "ite_gen.m"
          }
#line 3204 "ll_backend.ite_gen.c"
        ll_backend__ite_gen__TypeCtorInfo_63_63 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 343 "ite_gen.m"
        {
#line 343 "ite_gen.m"
          ll_backend__ite_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 343 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 343 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_57_57, 1) = ((MR_Box) (ll_backend__ite_gen__Op_35));
#line 343 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_57_57, 2) = ((MR_Box) (ll_backend__ite_gen__ValL_31));
#line 343 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_57_57, 3) = ((MR_Box) (ll_backend__ite_gen__ValR_33));
#line 343 "ite_gen.m"
        }
#line 343 "ite_gen.m"
        {
#line 343 "ite_gen.m"
          ll_backend__ite_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 343 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 343 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 1) = ((MR_Box) (ll_backend__ite_gen__V_57_57));
#line 343 "ite_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_56_56, 2) = ((MR_Box) (ll_backend__ite_gen__CodeAddr_27));
#line 343 "ite_gen.m"
        }
#line 343 "ite_gen.m"
        {
#line 343 "ite_gen.m"
          ll_backend__ite_gen__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_55_55, 0) = ((MR_Box) (ll_backend__ite_gen__V_56_56));
#line 343 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_55_55, 1) = ((MR_Box) ((MR_String) "test inequality"));
#line 343 "ite_gen.m"
        }
#line 342 "ite_gen.m"
        {
#line 342 "ite_gen.m"
          ll_backend__ite_gen__TestCode_36 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_63_63, ((MR_Box) (ll_backend__ite_gen__V_55_55)));
        }
#line 346 "ite_gen.m"
        {
#line 346 "ite_gen.m"
          ll_backend__code_info__leave_simple_neg_4_p_0(ll_backend__ite_gen__GoalInfo_19, ll_backend__ite_gen__SimpleNeg_29, ll_backend__ite_gen__STATE_VARIABLE_CI_52_52, ll_backend__ite_gen__STATE_VARIABLE_CI_38);
        }
#line 347 "ite_gen.m"
        {
#line 347 "ite_gen.m"
          ll_backend__ite_gen__V_60_60 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_63_63, ll_backend__ite_gen__CodeR_32, ll_backend__ite_gen__TestCode_36);
        }
#line 347 "ite_gen.m"
        {
#line 347 "ite_gen.m"
          *ll_backend__ite_gen__Code_10 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_63_63, ll_backend__ite_gen__CodeL_30, ll_backend__ite_gen__V_60_60);
        }
#line 331 "ite_gen.m"
      }
#line 348 "ite_gen.m"
    else
#line 349 "ite_gen.m"
      {
#line 349 "ite_gen.m"
        ll_backend__ite_gen__generate_negation_general_8_p_0(ll_backend__ite_gen__CodeModel_7, ll_backend__ite_gen__Goal_20, ll_backend__ite_gen__NotGoalInfo_9, ll_backend__ite_gen__ResumeVars_17, ll_backend__ite_gen__ResumeLocs_18, ll_backend__ite_gen__Code_10, ll_backend__ite_gen__STATE_VARIABLE_CI_0_37, ll_backend__ite_gen__STATE_VARIABLE_CI_38);
#line 349 "ite_gen.m"
        return;
      }
#line 294 "ite_gen.m"
  }
#line 32 "ite_gen.m"
}

#line 28 "ite_gen.m"
void MR_CALL 
ll_backend__ite_gen__generate_ite_8_p_0(
#line 28 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CodeModel_9,
#line 28 "ite_gen.m"
  MR_Word ll_backend__ite_gen__CondGoal0_10,
#line 28 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ThenGoal_11,
#line 28 "ite_gen.m"
  MR_Word ll_backend__ite_gen__ElseGoal_12,
#line 28 "ite_gen.m"
  MR_Word ll_backend__ite_gen__IteGoalInfo_13,
#line 28 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__Code_14,
#line 28 "ite_gen.m"
  MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_0_82,
#line 28 "ite_gen.m"
  MR_Word * ll_backend__ite_gen__STATE_VARIABLE_CI_83)
#line 28 "ite_gen.m"
{
#line 74 "ite_gen.m"
  {
#line 74 "ite_gen.m"
    MR_bool ll_backend__ite_gen__succeeded;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__TypeCtorInfo_170_170;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__TypeCtorInfo_176_176;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal0_10, (MR_Integer) 0)));
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal0_10, (MR_Integer) 1)));
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondCodeModel_18;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EffCodeModel_19;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Resume_20;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeVars_23;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeLocs_24;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondInfo_25;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondGoal_26;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeMap_27;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__FlushCode_28;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Globals_29;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ReclaimOption_30;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ReclaimHeap_31;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SaveHpCode_32;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeHpSlot_33;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__AddTrailOps_34;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__IteTrailOps_35;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__SaveTicketCode_37;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeTicketSlot_38;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__IteRegionOps_40;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseGoals_41;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondGoals_42;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionCondCode_43;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionThenCode_44;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionElseCode_45;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RegionStackVars_46;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeEmbeddedStackFrameId_47;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__BranchStart_48;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__HijackInfo_49;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PrepareHijackCode_50;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumePoint_51;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EffectResumeCode_52;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondTraceCode_53;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__CondCode_54;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenNeckCode_55;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseNeckCode_56;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__Zombies_57;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResetTicketCode_58;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__StoreMap_59;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EndCondInstMap_60;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenTraceCode_61;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenCode_62;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeEnd0_64;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ThenSaveCode_65;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ResumeCode_66;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RestoreHpCode_69;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__RestoreTicketCode_70;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseTraceCode_71;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseCode_72;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__MaybeEnd_73;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__ElseSaveCode_74;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EndLabel_76;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__JumpToEndCode_77;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__EndLabelCode_78;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegCondCode_79;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegThenCode_80;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__PNegElseCode_81;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_88_88;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_89_89;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_91_91;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_93_93;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_94_94;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_95_95;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_96_96;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_97_97;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_98_98;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_99_99;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_100_100;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_101_101;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_102_102;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_103_103;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_108_108;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_111_111;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_116_116;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_117_117;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_124_124;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_126_126;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_127_127;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_128_128;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_129_129;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_136_136;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_137_137;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_138_138;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_139_139;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_141_141;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_142_142;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_144_144;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_145_145;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_146_146;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_147_147;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_148_148;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_149_149;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_150_150;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_151_151;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_152_152;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_153_153;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_154_154;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_155_155;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_156_156;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_157_157;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_158_158;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_159_159;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_160_160;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_161_161;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_162_162;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_163_163;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_164_164;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_165_165;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_166_166;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_167_167;
#line 74 "ite_gen.m"
    MR_Word ll_backend__ite_gen__V_168_168;

#line 76 "ite_gen.m"
    {
#line 76 "ite_gen.m"
      ll_backend__ite_gen__CondCodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__ite_gen__CondInfo0_17);
    }
#line 78 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CodeModel_9 == (MR_Integer) 2);
#line 78 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 78 "ite_gen.m"
      {
#line 79 "ite_gen.m"
        ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CondCodeModel_18 == (MR_Integer) 2);
#line 79 "ite_gen.m"
        ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
#line 78 "ite_gen.m"
      }
#line 82 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 81 "ite_gen.m"
      ll_backend__ite_gen__EffCodeModel_19 = (MR_Integer) 1;
#line 82 "ite_gen.m"
    else
#line 83 "ite_gen.m"
      ll_backend__ite_gen__EffCodeModel_19 = ll_backend__ite_gen__CodeModel_9;
#line 86 "ite_gen.m"
    {
#line 86 "ite_gen.m"
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__ite_gen__CondInfo0_17, &ll_backend__ite_gen__Resume_20);
    }
#line 96 "ite_gen.m"
    if ((ll_backend__ite_gen__Resume_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 97 "ite_gen.m"
      {
#line 98 "ite_gen.m"
        {
#line 98 "ite_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.ite_gen", (MR_String) "predicate \140ll_backend.ite_gen.generate_ite\'/8", (MR_String) "condition of an if-then-else has no resume point");
#line 98 "ite_gen.m"
          return;
        }
#line 97 "ite_gen.m"
      }
#line 96 "ite_gen.m"
    else
#line 88 "ite_gen.m"
      {
#line 88 "ite_gen.m"
        ll_backend__ite_gen__ResumeVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_20, (MR_Integer) 0)));
#line 88 "ite_gen.m"
        ll_backend__ite_gen__ResumeLocs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__ite_gen__Resume_20, (MR_Integer) 1)));
#line 94 "ite_gen.m"
        {
#line 94 "ite_gen.m"
          hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__ite_gen__CondInfo0_17, &ll_backend__ite_gen__CondInfo_25);
        }
#line 95 "ite_gen.m"
        {
#line 95 "ite_gen.m"
          ll_backend__ite_gen__CondGoal_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 95 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal_26, 0) = ((MR_Box) (ll_backend__ite_gen__CondExpr_16));
#line 95 "ite_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__ite_gen__CondGoal_26, 1) = ((MR_Box) (ll_backend__ite_gen__CondInfo_25));
#line 95 "ite_gen.m"
        }
#line 88 "ite_gen.m"
      }
#line 3600 "ll_backend.ite_gen.c"
    ll_backend__ite_gen__TypeCtorInfo_170_170 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 105 "ite_gen.m"
    {
#line 105 "ite_gen.m"
      ll_backend__ite_gen__V_88_88 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_170_170, ll_backend__ite_gen__ResumeVars_23);
    }
#line 105 "ite_gen.m"
    {
#line 105 "ite_gen.m"
      ll_backend__code_info__produce_vars_5_p_0(ll_backend__ite_gen__V_88_88, &ll_backend__ite_gen__ResumeMap_27, &ll_backend__ite_gen__FlushCode_28, ll_backend__ite_gen__STATE_VARIABLE_CI_0_82, &ll_backend__ite_gen__STATE_VARIABLE_CI_89_89);
    }
#line 111 "ite_gen.m"
    {
#line 111 "ite_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_89_89, &ll_backend__ite_gen__Globals_29);
    }
#line 112 "ite_gen.m"
    {
#line 112 "ite_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__ite_gen__Globals_29, (MR_Integer) 307, &ll_backend__ite_gen__ReclaimOption_30);
    }
#line 115 "ite_gen.m"
    ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__ReclaimOption_30 == (MR_Integer) 1);
#line 115 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 116 "ite_gen.m"
      {
#line 116 "ite_gen.m"
        ll_backend__ite_gen__succeeded = hlds__goal_form__goal_may_allocate_heap_1_p_0(ll_backend__ite_gen__CondGoal_26);
      }
#line 119 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 118 "ite_gen.m"
      ll_backend__ite_gen__ReclaimHeap_31 = (MR_Integer) 1;
#line 119 "ite_gen.m"
    else
#line 120 "ite_gen.m"
      ll_backend__ite_gen__ReclaimHeap_31 = (MR_Integer) 0;
#line 122 "ite_gen.m"
    {
#line 122 "ite_gen.m"
      ll_backend__code_info__maybe_save_hp_5_p_0(ll_backend__ite_gen__ReclaimHeap_31, &ll_backend__ite_gen__SaveHpCode_32, &ll_backend__ite_gen__MaybeHpSlot_33, ll_backend__ite_gen__STATE_VARIABLE_CI_89_89, &ll_backend__ite_gen__STATE_VARIABLE_CI_91_91);
    }
#line 127 "ite_gen.m"
    {
#line 127 "ite_gen.m"
      ll_backend__ite_gen__AddTrailOps_34 = ll_backend__code_info__should_add_trail_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_91_91, ll_backend__ite_gen__IteGoalInfo_13);
    }
#line 131 "ite_gen.m"
    if ((ll_backend__ite_gen__AddTrailOps_34 == (MR_Integer) 0))
#line 132 "ite_gen.m"
      {
#line 132 "ite_gen.m"
        MR_Word ll_backend__ite_gen__OptTrailOps_36;
#line 135 "ite_gen.m"
        MR_Word ll_backend__ite_gen__V_92_92;

#line 133 "ite_gen.m"
        {
#line 133 "ite_gen.m"
          ll_backend__code_info__get_opt_trail_ops_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_91_91, &ll_backend__ite_gen__OptTrailOps_36);
        }
#line 135 "ite_gen.m"
        ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__OptTrailOps_36 == (MR_Integer) 1);
#line 135 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 135 "ite_gen.m"
          {
#line 136 "ite_gen.m"
            {
#line 136 "ite_gen.m"
              ll_backend__ite_gen__V_92_92 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(ll_backend__ite_gen__CondInfo0_17);
            }
#line 136 "ite_gen.m"
            ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__V_92_92 == (MR_Integer) 1);
#line 135 "ite_gen.m"
            if (ll_backend__ite_gen__succeeded)
#line 135 "ite_gen.m"
              {
#line 137 "ite_gen.m"
                ll_backend__ite_gen__succeeded = (ll_backend__ite_gen__CondCodeModel_18 == (MR_Integer) 2);
#line 137 "ite_gen.m"
                ll_backend__ite_gen__succeeded = !(ll_backend__ite_gen__succeeded);
#line 135 "ite_gen.m"
              }
#line 135 "ite_gen.m"
          }
#line 140 "ite_gen.m"
        if (ll_backend__ite_gen__succeeded)
#line 139 "ite_gen.m"
          ll_backend__ite_gen__IteTrailOps_35 = (MR_Integer) 1;
#line 140 "ite_gen.m"
        else
#line 141 "ite_gen.m"
          ll_backend__ite_gen__IteTrailOps_35 = (MR_Integer) 0;
#line 132 "ite_gen.m"
      }
#line 131 "ite_gen.m"
    else
#line 130 "ite_gen.m"
      ll_backend__ite_gen__IteTrailOps_35 = (MR_Integer) 1;
#line 144 "ite_gen.m"
    {
#line 144 "ite_gen.m"
      ll_backend__code_info__maybe_save_ticket_5_p_0(ll_backend__ite_gen__IteTrailOps_35, &ll_backend__ite_gen__SaveTicketCode_37, &ll_backend__ite_gen__MaybeTicketSlot_38, ll_backend__ite_gen__STATE_VARIABLE_CI_91_91, &ll_backend__ite_gen__STATE_VARIABLE_CI_93_93);
    }
#line 147 "ite_gen.m"
    {
#line 147 "ite_gen.m"
      ll_backend__ite_gen__IteRegionOps_40 = ll_backend__code_info__should_add_region_ops_2_f_0(ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, ll_backend__ite_gen__IteGoalInfo_13);
    }
#line 149 "ite_gen.m"
    {
#line 149 "ite_gen.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__ite_gen__ElseGoal_12, &ll_backend__ite_gen__ElseGoals_41);
    }
#line 150 "ite_gen.m"
    {
#line 150 "ite_gen.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__ite_gen__CondGoal_26, &ll_backend__ite_gen__CondGoals_42);
    }
#line 151 "ite_gen.m"
    {
#line 151 "ite_gen.m"
      ll_backend__ite_gen__maybe_create_ite_region_frame_11_p_0(ll_backend__ite_gen__IteRegionOps_40, ll_backend__ite_gen__CondInfo_25, ll_backend__ite_gen__CondGoals_42, ll_backend__ite_gen__ElseGoals_41, &ll_backend__ite_gen__RegionCondCode_43, &ll_backend__ite_gen__RegionThenCode_44, &ll_backend__ite_gen__RegionElseCode_45, &ll_backend__ite_gen__RegionStackVars_46, &ll_backend__ite_gen__MaybeEmbeddedStackFrameId_47, ll_backend__ite_gen__STATE_VARIABLE_CI_93_93, &ll_backend__ite_gen__STATE_VARIABLE_CI_94_94);
    }
#line 155 "ite_gen.m"
    {
#line 155 "ite_gen.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_94_94, &ll_backend__ite_gen__BranchStart_48);
    }
#line 157 "ite_gen.m"
    {
#line 157 "ite_gen.m"
      ll_backend__code_info__prepare_for_ite_hijack_6_p_0(ll_backend__ite_gen__CondCodeModel_18, ll_backend__ite_gen__MaybeEmbeddedStackFrameId_47, &ll_backend__ite_gen__HijackInfo_49, &ll_backend__ite_gen__PrepareHijackCode_50, ll_backend__ite_gen__STATE_VARIABLE_CI_94_94, &ll_backend__ite_gen__STATE_VARIABLE_CI_95_95);
    }
#line 160 "ite_gen.m"
    {
#line 160 "ite_gen.m"
      ll_backend__ite_gen__V_96_96 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__ite_gen__TypeCtorInfo_170_170, ll_backend__ite_gen__ResumeVars_23);
    }
#line 160 "ite_gen.m"
    {
#line 160 "ite_gen.m"
      ll_backend__code_info__make_resume_point_6_p_0(ll_backend__ite_gen__V_96_96, ll_backend__ite_gen__ResumeLocs_24, ll_backend__ite_gen__ResumeMap_27, &ll_backend__ite_gen__ResumePoint_51, ll_backend__ite_gen__STATE_VARIABLE_CI_95_95, &ll_backend__ite_gen__STATE_VARIABLE_CI_97_97);
    }
#line 162 "ite_gen.m"
    {
#line 162 "ite_gen.m"
      ll_backend__code_info__effect_resume_point_5_p_0(ll_backend__ite_gen__ResumePoint_51, ll_backend__ite_gen__EffCodeModel_19, &ll_backend__ite_gen__EffectResumeCode_52, ll_backend__ite_gen__STATE_VARIABLE_CI_97_97, &ll_backend__ite_gen__STATE_VARIABLE_CI_98_98);
    }
#line 165 "ite_gen.m"
    {
#line 165 "ite_gen.m"
      ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(ll_backend__ite_gen__CondGoal_26, ll_backend__ite_gen__IteGoalInfo_13, &ll_backend__ite_gen__CondTraceCode_53, ll_backend__ite_gen__STATE_VARIABLE_CI_98_98, &ll_backend__ite_gen__STATE_VARIABLE_CI_99_99);
    }
#line 167 "ite_gen.m"
    {
#line 167 "ite_gen.m"
      ll_backend__code_gen__generate_goal_5_p_0(ll_backend__ite_gen__CondCodeModel_18, ll_backend__ite_gen__CondGoal_26, &ll_backend__ite_gen__CondCode_54, ll_backend__ite_gen__STATE_VARIABLE_CI_99_99, &ll_backend__ite_gen__STATE_VARIABLE_CI_100_100);
    }
#line 169 "ite_gen.m"
    {
#line 169 "ite_gen.m"
      ll_backend__code_info__ite_enter_then_6_p_0(ll_backend__ite_gen__HijackInfo_49, ll_backend__ite_gen__ResumePoint_51, &ll_backend__ite_gen__ThenNeckCode_55, &ll_backend__ite_gen__ElseNeckCode_56, ll_backend__ite_gen__STATE_VARIABLE_CI_100_100, &ll_backend__ite_gen__STATE_VARIABLE_CI_101_101);
    }
#line 172 "ite_gen.m"
    {
#line 172 "ite_gen.m"
      ll_backend__code_info__pickup_zombies_3_p_0(&ll_backend__ite_gen__Zombies_57, ll_backend__ite_gen__STATE_VARIABLE_CI_101_101, &ll_backend__ite_gen__STATE_VARIABLE_CI_102_102);
    }
#line 173 "ite_gen.m"
    {
#line 173 "ite_gen.m"
      ll_backend__code_info__make_vars_forward_dead_3_p_0(ll_backend__ite_gen__Zombies_57, ll_backend__ite_gen__STATE_VARIABLE_CI_102_102, &ll_backend__ite_gen__STATE_VARIABLE_CI_103_103);
    }
#line 187 "ite_gen.m"
    if ((ll_backend__ite_gen__CondCodeModel_18 == (MR_Integer) 2))
#line 177 "ite_gen.m"
      {
#line 185 "ite_gen.m"
        {
#line 185 "ite_gen.m"
          ll_backend__code_info__maybe_reset_ticket_3_p_0(ll_backend__ite_gen__MaybeTicketSlot_38, (MR_Integer) 2, &ll_backend__ite_gen__ResetTicketCode_58);
        }
#line 185 "ite_gen.m"
        ll_backend__ite_gen__STATE_VARIABLE_CI_108_108 = ll_backend__ite_gen__STATE_VARIABLE_CI_103_103;
#line 177 "ite_gen.m"
      }
#line 187 "ite_gen.m"
    else
#line 190 "ite_gen.m"
      {
#line 190 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_104_104;
#line 190 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_106_106;

#line 191 "ite_gen.m"
        {
#line 191 "ite_gen.m"
          ll_backend__code_info__maybe_release_hp_3_p_0(ll_backend__ite_gen__MaybeHpSlot_33, ll_backend__ite_gen__STATE_VARIABLE_CI_103_103, &ll_backend__ite_gen__STATE_VARIABLE_CI_104_104);
        }
#line 192 "ite_gen.m"
        {
#line 192 "ite_gen.m"
          ll_backend__code_info__maybe_reset_prune_and_release_ticket_5_p_0(ll_backend__ite_gen__MaybeTicketSlot_38, (MR_Integer) 1, &ll_backend__ite_gen__ResetTicketCode_58, ll_backend__ite_gen__STATE_VARIABLE_CI_104_104, &ll_backend__ite_gen__STATE_VARIABLE_CI_106_106);
        }
#line 195 "ite_gen.m"
        {
#line 195 "ite_gen.m"
          ll_backend__code_info__release_several_temp_slots_4_p_0(ll_backend__ite_gen__RegionStackVars_46, (MR_Integer) 1, ll_backend__ite_gen__STATE_VARIABLE_CI_106_106, &ll_backend__ite_gen__STATE_VARIABLE_CI_108_108);
        }
#line 190 "ite_gen.m"
      }
#line 199 "ite_gen.m"
    {
#line 199 "ite_gen.m"
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(ll_backend__ite_gen__IteGoalInfo_13, &ll_backend__ite_gen__StoreMap_59);
    }
#line 200 "ite_gen.m"
    {
#line 200 "ite_gen.m"
      ll_backend__code_info__get_instmap_2_p_0(ll_backend__ite_gen__STATE_VARIABLE_CI_108_108, &ll_backend__ite_gen__EndCondInstMap_60);
    }
#line 201 "ite_gen.m"
    {
#line 201 "ite_gen.m"
      ll_backend__ite_gen__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(ll_backend__ite_gen__EndCondInstMap_60);
    }
#line 208 "ite_gen.m"
    if (ll_backend__ite_gen__succeeded)
#line 204 "ite_gen.m"
      {
#line 204 "ite_gen.m"
        MR_Word ll_backend__ite_gen__TypeCtorInfo_171_171 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 204 "ite_gen.m"
        MR_Word ll_backend__ite_gen__EmptyStoreMap_63;

#line 204 "ite_gen.m"
        {
#line 204 "ite_gen.m"
          ll_backend__ite_gen__ThenTraceCode_61 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_171_171);
        }
#line 205 "ite_gen.m"
        {
#line 205 "ite_gen.m"
          ll_backend__ite_gen__ThenCode_62 = mercury__cord__empty_0_f_0(ll_backend__ite_gen__TypeCtorInfo_171_171);
        }
#line 206 "ite_gen.m"
        {
#line 206 "ite_gen.m"
          mercury__map__init_1_p_0((MR_Word) &ll_backend__ite_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, &ll_backend__ite_gen__EmptyStoreMap_63);
        }
#line 207 "ite_gen.m"
        {
#line 207 "ite_gen.m"
          ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__ite_gen__EmptyStoreMap_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__ite_gen__MaybeEnd0_64, &ll_backend__ite_gen__ThenSaveCode_65, ll_backend__ite_gen__STATE_VARIABLE_CI_108_108, &ll_backend__ite_gen__STATE_VARIABLE_CI_111_111);
        }
#line 204 "ite_gen.m"
      }
#line 208 "ite_gen.m"
    else
#line 211 "ite_gen.m"
      {
#line 211 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_112_112;
#line 211 "ite_gen.m"
        MR_Word ll_backend__ite_gen__STATE_VARIABLE_CI_113_113;

#line 210 "ite_gen.m"
        {
#line 210 "ite_gen.m"
          ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(ll_backend__ite_gen__ThenGoal_11, ll_backend__ite_gen__IteGoalInfo_13, &ll_backend__ite_gen__ThenTraceCode_61, ll_backend__ite_gen__STATE_VARIABLE_CI_108_108, &ll_backend__ite_gen__STATE_VARIABLE_CI_112_112);
        }
#line 212 "ite_gen.m"
        {
#line 212 "ite_gen.m"
          ll_backend__code_gen__generate_goal_5_p_0(ll_backend__ite_gen__CodeModel_9, ll_backend__ite_gen__ThenGoal_11, &ll_backend__ite_gen__ThenCode_62, ll_backend__ite_gen__STATE_VARIABLE_CI_112_112, &ll_backend__ite_gen__STATE_VARIABLE_CI_113_113);
        }
#line 213 "ite_gen.m"
        {
#line 213 "ite_gen.m"
          ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__ite_gen__StoreMap_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__ite_gen__MaybeEnd0_64, &ll_backend__ite_gen__ThenSaveCode_65, ll_backend__ite_gen__STATE_VARIABLE_CI_113_113, &ll_backend__ite_gen__STATE_VARIABLE_CI_111_111);
        }
#line 211 "ite_gen.m"
      }
#line 217 "ite_gen.m"
    {
#line 217 "ite_gen.m"
      ll_backend__code_info__reset_to_position_3_p_0(ll_backend__ite_gen__BranchStart_48, ll_backend__ite_gen__STATE_VARIABLE_CI_111_111, &ll_backend__ite_gen__STATE_VARIABLE_CI_116_116);
    }
#line 218 "ite_gen.m"
    {
#line 218 "ite_gen.m"
      ll_backend__code_info__generate_resume_point_4_p_0(ll_backend__ite_gen__ResumePoint_51, &ll_backend__ite_gen__ResumeCode_66, ll_backend__ite_gen__STATE_VARIABLE_CI_116_116, &ll_backend__ite_gen__STATE_VARIABLE_CI_117_117);
    }
#line 231 "ite_gen.m"
    {
#line 231 "ite_gen.m"
      ll_backend__code_info__maybe_restore_and_release_hp_4_p_0(ll_backend__ite_gen__MaybeHpSlot_33, &ll_backend__ite_gen__RestoreHpCode_69, ll_backend__ite_gen__STATE_VARIABLE_CI_117_117, &ll_backend__ite_gen__STATE_VARIABLE_CI_124_124);
    }
#line 232 "ite_gen.m"
    {
#line 232 "ite_gen.m"
      ll_backend__code_info__maybe_reset_discard_and_release_ticket_5_p_0(ll_backend__ite_gen__MaybeTicketSlot_38, (MR_Integer) 0, &ll_backend__ite_gen__RestoreTicketCode_70, ll_backend__ite_gen__STATE_VARIABLE_CI_124_124, &ll_backend__ite_gen__STATE_VARIABLE_CI_126_126);
    }
#line 236 "ite_gen.m"
    {
#line 236 "ite_gen.m"
      ll_backend__trace_gen__maybe_generate_internal_event_code_5_p_0(ll_backend__ite_gen__ElseGoal_12, ll_backend__ite_gen__IteGoalInfo_13, &ll_backend__ite_gen__ElseTraceCode_71, ll_backend__ite_gen__STATE_VARIABLE_CI_126_126, &ll_backend__ite_gen__STATE_VARIABLE_CI_127_127);
    }
#line 238 "ite_gen.m"
    {
#line 238 "ite_gen.m"
      ll_backend__code_gen__generate_goal_5_p_0(ll_backend__ite_gen__CodeModel_9, ll_backend__ite_gen__ElseGoal_12, &ll_backend__ite_gen__ElseCode_72, ll_backend__ite_gen__STATE_VARIABLE_CI_127_127, &ll_backend__ite_gen__STATE_VARIABLE_CI_128_128);
    }
#line 239 "ite_gen.m"
    {
#line 239 "ite_gen.m"
      ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__ite_gen__StoreMap_59, ll_backend__ite_gen__MaybeEnd0_64, &ll_backend__ite_gen__MaybeEnd_73, &ll_backend__ite_gen__ElseSaveCode_74, ll_backend__ite_gen__STATE_VARIABLE_CI_128_128, &ll_backend__ite_gen__STATE_VARIABLE_CI_129_129);
    }
#line 251 "ite_gen.m"
    {
#line 251 "ite_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__ite_gen__EndLabel_76, ll_backend__ite_gen__STATE_VARIABLE_CI_129_129, &ll_backend__ite_gen__STATE_VARIABLE_CI_136_136);
    }
#line 3928 "ll_backend.ite_gen.c"
    ll_backend__ite_gen__TypeCtorInfo_176_176 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 253 "ite_gen.m"
    {
#line 253 "ite_gen.m"
      ll_backend__ite_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 253 "ite_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__ite_gen__V_139_139, 0) = ((MR_Box) (ll_backend__ite_gen__EndLabel_76));
#line 253 "ite_gen.m"
    }
#line 253 "ite_gen.m"
    {
#line 253 "ite_gen.m"
      ll_backend__ite_gen__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "ite_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 253 "ite_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_138_138, 1) = ((MR_Box) (ll_backend__ite_gen__V_139_139));
#line 253 "ite_gen.m"
    }
#line 253 "ite_gen.m"
    {
#line 253 "ite_gen.m"
      ll_backend__ite_gen__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_137_137, 0) = ((MR_Box) (ll_backend__ite_gen__V_138_138));
#line 253 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_137_137, 1) = ((MR_Box) ((MR_String) "Jump to the end of if-then-else"));
#line 253 "ite_gen.m"
    }
#line 252 "ite_gen.m"
    {
#line 252 "ite_gen.m"
      ll_backend__ite_gen__JumpToEndCode_77 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ((MR_Box) (ll_backend__ite_gen__V_137_137)));
    }
#line 257 "ite_gen.m"
    {
#line 257 "ite_gen.m"
      ll_backend__ite_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "ite_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 257 "ite_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__ite_gen__V_142_142, 1) = ((MR_Box) (ll_backend__ite_gen__EndLabel_76));
#line 257 "ite_gen.m"
    }
#line 257 "ite_gen.m"
    {
#line 257 "ite_gen.m"
      ll_backend__ite_gen__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_141_141, 0) = ((MR_Box) (ll_backend__ite_gen__V_142_142));
#line 257 "ite_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__ite_gen__V_141_141, 1) = ((MR_Box) ((MR_String) "end of if-then-else"));
#line 257 "ite_gen.m"
    }
#line 256 "ite_gen.m"
    {
#line 256 "ite_gen.m"
      ll_backend__ite_gen__EndLabelCode_78 = mercury__cord__singleton_1_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ((MR_Box) (ll_backend__ite_gen__V_141_141)));
    }
#line 259 "ite_gen.m"
    {
#line 259 "ite_gen.m"
      ll_backend__ite_gen__make_pneg_context_wrappers_5_p_0(ll_backend__ite_gen__Globals_29, ll_backend__ite_gen__CondInfo_25, &ll_backend__ite_gen__PNegCondCode_79, &ll_backend__ite_gen__PNegThenCode_80, &ll_backend__ite_gen__PNegElseCode_81);
    }
#line 287 "ite_gen.m"
    {
#line 287 "ite_gen.m"
      ll_backend__ite_gen__V_168_168 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ElseSaveCode_74, ll_backend__ite_gen__EndLabelCode_78);
    }
#line 286 "ite_gen.m"
    {
#line 286 "ite_gen.m"
      ll_backend__ite_gen__V_167_167 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ElseCode_72, ll_backend__ite_gen__V_168_168);
    }
#line 285 "ite_gen.m"
    {
#line 285 "ite_gen.m"
      ll_backend__ite_gen__V_166_166 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__PNegElseCode_81, ll_backend__ite_gen__V_167_167);
    }
#line 284 "ite_gen.m"
    {
#line 284 "ite_gen.m"
      ll_backend__ite_gen__V_165_165 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ElseTraceCode_71, ll_backend__ite_gen__V_166_166);
    }
#line 283 "ite_gen.m"
    {
#line 283 "ite_gen.m"
      ll_backend__ite_gen__V_164_164 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__RegionElseCode_45, ll_backend__ite_gen__V_165_165);
    }
#line 282 "ite_gen.m"
    {
#line 282 "ite_gen.m"
      ll_backend__ite_gen__V_163_163 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__RestoreTicketCode_70, ll_backend__ite_gen__V_164_164);
    }
#line 281 "ite_gen.m"
    {
#line 281 "ite_gen.m"
      ll_backend__ite_gen__V_162_162 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__RestoreHpCode_69, ll_backend__ite_gen__V_163_163);
    }
#line 280 "ite_gen.m"
    {
#line 280 "ite_gen.m"
      ll_backend__ite_gen__V_161_161 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ElseNeckCode_56, ll_backend__ite_gen__V_162_162);
    }
#line 279 "ite_gen.m"
    {
#line 279 "ite_gen.m"
      ll_backend__ite_gen__V_160_160 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ResumeCode_66, ll_backend__ite_gen__V_161_161);
    }
#line 278 "ite_gen.m"
    {
#line 278 "ite_gen.m"
      ll_backend__ite_gen__V_159_159 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__JumpToEndCode_77, ll_backend__ite_gen__V_160_160);
    }
#line 277 "ite_gen.m"
    {
#line 277 "ite_gen.m"
      ll_backend__ite_gen__V_158_158 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ThenSaveCode_65, ll_backend__ite_gen__V_159_159);
    }
#line 276 "ite_gen.m"
    {
#line 276 "ite_gen.m"
      ll_backend__ite_gen__V_157_157 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ThenCode_62, ll_backend__ite_gen__V_158_158);
    }
#line 275 "ite_gen.m"
    {
#line 275 "ite_gen.m"
      ll_backend__ite_gen__V_156_156 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__PNegThenCode_80, ll_backend__ite_gen__V_157_157);
    }
#line 274 "ite_gen.m"
    {
#line 274 "ite_gen.m"
      ll_backend__ite_gen__V_155_155 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ThenTraceCode_61, ll_backend__ite_gen__V_156_156);
    }
#line 273 "ite_gen.m"
    {
#line 273 "ite_gen.m"
      ll_backend__ite_gen__V_154_154 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__RegionThenCode_44, ll_backend__ite_gen__V_155_155);
    }
#line 272 "ite_gen.m"
    {
#line 272 "ite_gen.m"
      ll_backend__ite_gen__V_153_153 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ResetTicketCode_58, ll_backend__ite_gen__V_154_154);
    }
#line 271 "ite_gen.m"
    {
#line 271 "ite_gen.m"
      ll_backend__ite_gen__V_152_152 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__ThenNeckCode_55, ll_backend__ite_gen__V_153_153);
    }
#line 270 "ite_gen.m"
    {
#line 270 "ite_gen.m"
      ll_backend__ite_gen__V_151_151 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__CondCode_54, ll_backend__ite_gen__V_152_152);
    }
#line 269 "ite_gen.m"
    {
#line 269 "ite_gen.m"
      ll_backend__ite_gen__V_150_150 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__PNegCondCode_79, ll_backend__ite_gen__V_151_151);
    }
#line 268 "ite_gen.m"
    {
#line 268 "ite_gen.m"
      ll_backend__ite_gen__V_149_149 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__CondTraceCode_53, ll_backend__ite_gen__V_150_150);
    }
#line 267 "ite_gen.m"
    {
#line 267 "ite_gen.m"
      ll_backend__ite_gen__V_148_148 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__EffectResumeCode_52, ll_backend__ite_gen__V_149_149);
    }
#line 266 "ite_gen.m"
    {
#line 266 "ite_gen.m"
      ll_backend__ite_gen__V_147_147 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__PrepareHijackCode_50, ll_backend__ite_gen__V_148_148);
    }
#line 265 "ite_gen.m"
    {
#line 265 "ite_gen.m"
      ll_backend__ite_gen__V_146_146 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__RegionCondCode_43, ll_backend__ite_gen__V_147_147);
    }
#line 264 "ite_gen.m"
    {
#line 264 "ite_gen.m"
      ll_backend__ite_gen__V_145_145 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__SaveTicketCode_37, ll_backend__ite_gen__V_146_146);
    }
#line 263 "ite_gen.m"
    {
#line 263 "ite_gen.m"
      ll_backend__ite_gen__V_144_144 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__SaveHpCode_32, ll_backend__ite_gen__V_145_145);
    }
#line 262 "ite_gen.m"
    {
#line 262 "ite_gen.m"
      *ll_backend__ite_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__ite_gen__TypeCtorInfo_176_176, ll_backend__ite_gen__FlushCode_28, ll_backend__ite_gen__V_144_144);
    }
#line 289 "ite_gen.m"
    {
#line 289 "ite_gen.m"
      ll_backend__code_info__after_all_branches_4_p_0(ll_backend__ite_gen__StoreMap_59, ll_backend__ite_gen__MaybeEnd_73, ll_backend__ite_gen__STATE_VARIABLE_CI_136_136, ll_backend__ite_gen__STATE_VARIABLE_CI_83);
#line 289 "ite_gen.m"
      return;
    }
#line 74 "ite_gen.m"
  }
#line 28 "ite_gen.m"
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
