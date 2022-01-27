/*
** Automatically generated from `pd_debug.m'
** by the Mercury compiler,
** version DEV
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


/* :- module transform_hlds.pd_debug. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__pd_debug__init
ENDINIT
*/

#include "transform_hlds.pd_debug.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_2_5_p_0(
  MR_Word transform_hlds__pd_debug__PDInfo_6,
  MR_String transform_hlds__pd_debug__Msg_7,
  MR_Word transform_hlds__pd_debug__Goal_8);

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0_1(
  MR_Box transform_hlds__pd_debug__closure_arg,
  MR_Box transform_hlds__pd_debug__wrapper_arg_1,
  MR_Box transform_hlds__pd_debug__wrapper_arg_2,
  MR_Box * transform_hlds__pd_debug__wrapper_arg_3);

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0(
  MR_Word transform_hlds__pd_debug__ModuleInfo_7,
  MR_Word transform_hlds__pd_debug__PredProcId_8,
  MR_Word transform_hlds__pd_debug__Version_9,
  MR_Word transform_hlds__pd_debug__WriteUnfoldedGoal_10);

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_2_4_p_0(
  MR_Word transform_hlds__pd_debug__ModuleInfo_5,
  MR_Word transform_hlds__pd_debug__MaybeVersion_6);

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0_1(
  MR_Box transform_hlds__pd_debug__closure_arg,
  MR_Box transform_hlds__pd_debug__wrapper_arg_1,
  MR_Box transform_hlds__pd_debug__wrapper_arg_2,
  MR_Box * transform_hlds__pd_debug__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_1[1][7];




static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_1[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_2_5_p_0(
  MR_Word transform_hlds__pd_debug__PDInfo_6,
  MR_String transform_hlds__pd_debug__Msg_7,
  MR_Word transform_hlds__pd_debug__Goal_8)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;
    MR_Word transform_hlds__pd_debug__ProcInfo_12;
    MR_Word transform_hlds__pd_debug__VarSet_13;
    MR_Word transform_hlds__pd_debug__InstMap_14;
    MR_Word transform_hlds__pd_debug__ModuleInfo_15;
    MR_Word transform_hlds__pd_debug__Vars_16;
    MR_Word transform_hlds__pd_debug__InstMap1_17;
    MR_Word transform_hlds__pd_debug__Globals_18;
    MR_Word transform_hlds__pd_debug__OutInfo_19;

    {
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__ProcInfo_12);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_debug__ProcInfo_12, &transform_hlds__pd_debug__VarSet_13);
    }
    {
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__InstMap_14);
    }
    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__ModuleInfo_15);
    }
    {
      mercury__io__write_string_3_p_0(transform_hlds__pd_debug__Msg_7);
    }
    {
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__pd_debug__Goal_8, &transform_hlds__pd_debug__Vars_16);
    }
    {
      hlds__instmap__instmap_restrict_3_p_0(transform_hlds__pd_debug__Vars_16, transform_hlds__pd_debug__InstMap_14, &transform_hlds__pd_debug__InstMap1_17);
    }
    {
      hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(transform_hlds__pd_debug__VarSet_13, (MR_Integer) 1, (MR_Integer) 1, transform_hlds__pd_debug__InstMap1_17);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_15, &transform_hlds__pd_debug__Globals_18);
    }
    {
      transform_hlds__pd_debug__OutInfo_19 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(transform_hlds__pd_debug__Globals_18, (MR_Integer) 1);
    }
    {
      hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(transform_hlds__pd_debug__OutInfo_19, transform_hlds__pd_debug__ModuleInfo_15, transform_hlds__pd_debug__VarSet_13, (MR_Integer) 1, (MR_Integer) 1, (MR_String) "\n", transform_hlds__pd_debug__Goal_8);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__flush_output_2_p_0();
    }
  }
}

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0_1(
  MR_Box transform_hlds__pd_debug__closure_arg,
  MR_Box transform_hlds__pd_debug__wrapper_arg_1,
  MR_Box transform_hlds__pd_debug__wrapper_arg_2,
  MR_Box * transform_hlds__pd_debug__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__pd_debug__closure = transform_hlds__pd_debug__closure_arg;

    {
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_debug__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0(
  MR_Word transform_hlds__pd_debug__ModuleInfo_7,
  MR_Word transform_hlds__pd_debug__PredProcId_8,
  MR_Word transform_hlds__pd_debug__Version_9,
  MR_Word transform_hlds__pd_debug__WriteUnfoldedGoal_10)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;
    MR_Word transform_hlds__pd_debug__TypeCtorInfo_86_86;
    MR_Word transform_hlds__pd_debug__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_debug__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 2)));
    MR_Word transform_hlds__pd_debug__InstMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 4)));
    MR_Integer transform_hlds__pd_debug__InitialCost_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 5)));
    MR_Integer transform_hlds__pd_debug__CostDelta_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 6)));
    MR_Word transform_hlds__pd_debug__Parents_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 7)));
    MR_Word transform_hlds__pd_debug__GoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Goal_12, (MR_Integer) 1)));
    MR_String transform_hlds__pd_debug__PredName_23;
    MR_Word transform_hlds__pd_debug__PredId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__PredProcId_8, (MR_Integer) 0)));
    MR_Integer transform_hlds__pd_debug__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__PredProcId_8, (MR_Integer) 1)));
    MR_Integer transform_hlds__pd_debug__PredInt_26;
    MR_Integer transform_hlds__pd_debug__ProcInt_27;
    MR_Word transform_hlds__pd_debug__NonLocals_28;
    MR_Word transform_hlds__pd_debug__ProcInfo_30;
    MR_Word transform_hlds__pd_debug__VarSet_31;
    MR_Word transform_hlds__pd_debug__InstMap1_32;
    MR_Word transform_hlds__pd_debug__Globals_33;
    MR_Word transform_hlds__pd_debug__OutInfo_34;
    MR_Word transform_hlds__pd_debug__ParentsList_35;
    MR_Word transform_hlds__pd_debug__V_75_75;
    MR_Word transform_hlds__pd_debug__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 1)));
    MR_Word transform_hlds__pd_debug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 3)));
    MR_Word transform_hlds__pd_debug__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 8)));
    MR_Word transform_hlds__pd_debug___GoalExpr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Goal_12, (MR_Integer) 0)));
    MR_Word transform_hlds__pd_debug__V_29_29;

    {
      transform_hlds__pd_debug__PredName_23 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__pd_debug__ModuleInfo_7, transform_hlds__pd_debug__PredId_24);
    }
    {
      mercury__io__write_string_3_p_0(transform_hlds__pd_debug__PredName_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": (PredProcId :");
    }
    {
      hlds__hlds_pred__pred_id_to_int_2_p_0(transform_hlds__pd_debug__PredId_24, &transform_hlds__pd_debug__PredInt_26);
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__pd_debug__ProcId_25, &transform_hlds__pd_debug__ProcInt_27);
    }
    {
      mercury__io__write_int_3_p_0(transform_hlds__pd_debug__PredInt_26);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "-");
    }
    {
      mercury__io__write_int_3_p_0(transform_hlds__pd_debug__ProcInt_27);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " initial cost: ");
    }
    {
      mercury__io__write_int_3_p_0(transform_hlds__pd_debug__InitialCost_17);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " cost delta: ");
    }
    {
      mercury__io__write_int_3_p_0(transform_hlds__pd_debug__CostDelta_18);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      transform_hlds__pd_debug__NonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_debug__GoalInfo_22);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__pd_debug__ModuleInfo_7, transform_hlds__pd_debug__PredId_24, transform_hlds__pd_debug__ProcId_25, &transform_hlds__pd_debug__V_29_29, &transform_hlds__pd_debug__ProcInfo_30);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_debug__ProcInfo_30, &transform_hlds__pd_debug__VarSet_31);
    }
    {
      hlds__instmap__instmap_restrict_3_p_0(transform_hlds__pd_debug__NonLocals_28, transform_hlds__pd_debug__InstMap_16, &transform_hlds__pd_debug__InstMap1_32);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " args: ");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_debug__VarSet_31, (MR_Integer) 1, transform_hlds__pd_debug__Args_14);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(transform_hlds__pd_debug__VarSet_31, (MR_Integer) 1, (MR_Integer) 1, transform_hlds__pd_debug__InstMap1_32);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_7, &transform_hlds__pd_debug__Globals_33);
    }
    {
      transform_hlds__pd_debug__OutInfo_34 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(transform_hlds__pd_debug__Globals_33, (MR_Integer) 1);
    }
    {
      hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(transform_hlds__pd_debug__OutInfo_34, transform_hlds__pd_debug__ModuleInfo_7, transform_hlds__pd_debug__VarSet_31, (MR_Integer) 1, (MR_Integer) 1, (MR_String) "\n", transform_hlds__pd_debug__Goal_12);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Parents: ");
    }
    transform_hlds__pd_debug__TypeCtorInfo_86_86 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      mercury__set__to_sorted_list_2_p_0(transform_hlds__pd_debug__TypeCtorInfo_86_86, transform_hlds__pd_debug__Parents_19, &transform_hlds__pd_debug__ParentsList_35);
    }
    {
      transform_hlds__pd_debug__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_75_75, 0) = ((MR_Box) (&transform_hlds__pd_debug_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_75_75, 1) = ((MR_Box) (transform_hlds__pd_debug__pd_debug_output_version_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_75_75, 3) = ((MR_Box) (transform_hlds__pd_debug__ModuleInfo_7));
    }
    {
      mercury__io__write_list_5_p_0(transform_hlds__pd_debug__TypeCtorInfo_86_86, transform_hlds__pd_debug__ParentsList_35, (MR_String) ", ", transform_hlds__pd_debug__V_75_75);
    }
    {
      mercury__io__nl_2_p_0();
    }
    switch (transform_hlds__pd_debug__WriteUnfoldedGoal_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__pd_debug__ProcGoal_36;

          {
            hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__pd_debug__ProcInfo_30, &transform_hlds__pd_debug__ProcGoal_36);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "Unfolded goal\n");
          }
          {
            hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(transform_hlds__pd_debug__OutInfo_34, transform_hlds__pd_debug__ModuleInfo_7, transform_hlds__pd_debug__VarSet_31, (MR_Integer) 1, (MR_Integer) 1, (MR_String) "\n", transform_hlds__pd_debug__ProcGoal_36);
          }
          {
            mercury__io__nl_2_p_0();
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_2_4_p_0(
  MR_Word transform_hlds__pd_debug__ModuleInfo_5,
  MR_Word transform_hlds__pd_debug__MaybeVersion_6)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;

    if ((transform_hlds__pd_debug__MaybeVersion_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "Specialised version not found.\n");
        }
      }
    else
      {
        MR_Word transform_hlds__pd_debug__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 2)));
        MR_Word transform_hlds__pd_debug__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 1)));
        MR_Word transform_hlds__pd_debug__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_debug__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 4)));
        MR_Word transform_hlds__pd_debug__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 3)));

        switch (transform_hlds__pd_debug__V_32_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "Exact match found.\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "More general version.\n");
              }
              {
                transform_hlds__pd_debug__pd_debug_output_version_6_p_0(transform_hlds__pd_debug__ModuleInfo_5, transform_hlds__pd_debug__V_31_31, transform_hlds__pd_debug__V_30_30, (MR_Integer) 0);
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0_1(
  MR_Box transform_hlds__pd_debug__closure_arg,
  MR_Box transform_hlds__pd_debug__wrapper_arg_1,
  MR_Box transform_hlds__pd_debug__wrapper_arg_2,
  MR_Box * transform_hlds__pd_debug__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__pd_debug__closure = transform_hlds__pd_debug__closure_arg;

    {
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_debug__wrapper_arg_1));
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0(
  MR_Word transform_hlds__pd_debug__PDInfo_5,
  MR_Word transform_hlds__pd_debug__PredProcIds_6)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;
    MR_Word transform_hlds__pd_debug__ModuleInfo_8;
    MR_Word transform_hlds__pd_debug__Globals_9;
    MR_Word transform_hlds__pd_debug__DebugPD_10;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_5, &transform_hlds__pd_debug__ModuleInfo_8);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_8, &transform_hlds__pd_debug__Globals_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_9, (MR_Integer) 75, &transform_hlds__pd_debug__DebugPD_10);
    }
    switch (transform_hlds__pd_debug__DebugPD_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__pd_debug__V_31_31;

          {
            transform_hlds__pd_debug__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_31_31, 0) = ((MR_Box) (&transform_hlds__pd_debug_scalar_common_1[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_31_31, 1) = ((MR_Box) (transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_31_31, 3) = ((MR_Box) (transform_hlds__pd_debug__ModuleInfo_8));
          }
          {
            mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__pd_debug__PredProcIds_6, (MR_String) ", ", transform_hlds__pd_debug__V_31_31);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_4_p_0(
  MR_Word transform_hlds__pd_debug__TypeInfo_for_T_12,
  MR_Word transform_hlds__pd_debug__DebugPD_5,
  MR_Box transform_hlds__pd_debug__Thing_6)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;

    switch (transform_hlds__pd_debug__DebugPD_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_3_p_0(transform_hlds__pd_debug__TypeInfo_for_T_12, transform_hlds__pd_debug__Thing_6);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_message_context_6_p_0(
  MR_Word transform_hlds__pd_debug__DebugPD_7,
  MR_Word transform_hlds__pd_debug__Context_8,
  MR_String transform_hlds__pd_debug__Fmt_9,
  MR_Word transform_hlds__pd_debug__Args_10)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;

    switch (transform_hlds__pd_debug__DebugPD_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            parse_tree__prog_out__write_context_3_p_0(transform_hlds__pd_debug__Context_8);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
          {
            mercury__io__format_4_p_0(transform_hlds__pd_debug__Fmt_9, transform_hlds__pd_debug__Args_10);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_message_5_p_0(
  MR_Word transform_hlds__pd_debug__DebugPD_6,
  MR_String transform_hlds__pd_debug__Fmt_7,
  MR_Word transform_hlds__pd_debug__Args_8)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;

    switch (transform_hlds__pd_debug__DebugPD_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__format_4_p_0(transform_hlds__pd_debug__Fmt_7, transform_hlds__pd_debug__Args_8);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_instmap_3_p_0(
  MR_Word transform_hlds__pd_debug__PDInfo_4)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;
    MR_Word transform_hlds__pd_debug__InstMap_6;
    MR_Word transform_hlds__pd_debug__ProcInfo_7;
    MR_Word transform_hlds__pd_debug__VarSet_8;
    MR_Word transform_hlds__pd_debug__ModuleInfo_9;
    MR_Word transform_hlds__pd_debug__Globals_10;
    MR_Word transform_hlds__pd_debug__DebugPD_11;

    {
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_debug__PDInfo_4, &transform_hlds__pd_debug__InstMap_6);
    }
    {
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_debug__PDInfo_4, &transform_hlds__pd_debug__ProcInfo_7);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_debug__ProcInfo_7, &transform_hlds__pd_debug__VarSet_8);
    }
    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_4, &transform_hlds__pd_debug__ModuleInfo_9);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_9, &transform_hlds__pd_debug__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_10, (MR_Integer) 75, &transform_hlds__pd_debug__DebugPD_11);
    }
    switch (transform_hlds__pd_debug__DebugPD_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(transform_hlds__pd_debug__VarSet_8, (MR_Integer) 1, (MR_Integer) 1, transform_hlds__pd_debug__InstMap_6);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_register_version_5_p_0(
  MR_Word transform_hlds__pd_debug__PDInfo_6,
  MR_Word transform_hlds__pd_debug__PredProcId_7,
  MR_Word transform_hlds__pd_debug__Version_8)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;
    MR_Word transform_hlds__pd_debug__ModuleInfo_10;
    MR_Word transform_hlds__pd_debug__Globals_11;
    MR_Word transform_hlds__pd_debug__DebugPD_12;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__ModuleInfo_10);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_10, &transform_hlds__pd_debug__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_11, (MR_Integer) 75, &transform_hlds__pd_debug__DebugPD_12);
    }
    switch (transform_hlds__pd_debug__DebugPD_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "Registering version:\n");
          }
          {
            transform_hlds__pd_debug__pd_debug_output_version_6_p_0(transform_hlds__pd_debug__ModuleInfo_10, transform_hlds__pd_debug__PredProcId_7, transform_hlds__pd_debug__Version_8, (MR_Integer) 0);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_4_p_0(
  MR_Word transform_hlds__pd_debug__PDInfo_5,
  MR_Word transform_hlds__pd_debug__MaybeVersion_6)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;
    MR_Word transform_hlds__pd_debug__ModuleInfo_8;
    MR_Word transform_hlds__pd_debug__Globals_9;
    MR_Word transform_hlds__pd_debug__DebugPD_10;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_5, &transform_hlds__pd_debug__ModuleInfo_8);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_8, &transform_hlds__pd_debug__Globals_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_9, (MR_Integer) 75, &transform_hlds__pd_debug__DebugPD_10);
    }
    switch (transform_hlds__pd_debug__DebugPD_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            transform_hlds__pd_debug__pd_debug_search_version_result_2_4_p_0(transform_hlds__pd_debug__ModuleInfo_8, transform_hlds__pd_debug__MaybeVersion_6);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(
  MR_Word transform_hlds__pd_debug__PDInfo_6,
  MR_String transform_hlds__pd_debug__Msg_7,
  MR_Word transform_hlds__pd_debug__Goal_8)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;
    MR_Word transform_hlds__pd_debug__ModuleInfo_10;
    MR_Word transform_hlds__pd_debug__Globals_11;
    MR_Word transform_hlds__pd_debug__DebugPD_12;

    {
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__ModuleInfo_10);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_10, &transform_hlds__pd_debug__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_11, (MR_Integer) 75, &transform_hlds__pd_debug__DebugPD_12);
    }
    switch (transform_hlds__pd_debug__DebugPD_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            transform_hlds__pd_debug__pd_debug_output_goal_2_5_p_0(transform_hlds__pd_debug__PDInfo_6, transform_hlds__pd_debug__Msg_7, transform_hlds__pd_debug__Goal_8);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_do_io_4_p_0(
  MR_Word transform_hlds__pd_debug__DebugPD_5,
  MR_Word transform_hlds__pd_debug__Pred_6)
{
  {
    MR_bool transform_hlds__pd_debug__succeeded;

    switch (transform_hlds__pd_debug__DebugPD_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* transform_hlds__pd_debug__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Pred_6, (MR_Integer) 1)));
          MR_Box transform_hlds__pd_debug__conv1_STATE_VARIABLE_IO_10_10;

          {
            transform_hlds__pd_debug__func_0(((MR_Box) transform_hlds__pd_debug__Pred_6), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__pd_debug__conv1_STATE_VARIABLE_IO_10_10);
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
  }
}

void mercury__transform_hlds__pd_debug__init(void)
{
}

void mercury__transform_hlds__pd_debug__init_type_tables(void)
{
}

void mercury__transform_hlds__pd_debug__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__pd_debug__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.pd_debug. */
