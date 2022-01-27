/*
** Automatically generated from `pd_debug.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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
#include "counter.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 218 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_2_5_p_0(
#line 218 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PDInfo_6,
#line 218 "pd_debug.m"
  MR_String transform_hlds__pd_debug__Msg_7,
#line 218 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Goal_8);

#line 171 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0_1(
#line 171 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__closure_arg,
#line 171 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__wrapper_arg_1,
#line 171 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__wrapper_arg_2,
#line 171 "pd_debug.m"
  MR_Box * transform_hlds__pd_debug__wrapper_arg_3);

#line 131 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0(
#line 131 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__ModuleInfo_7,
#line 131 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PredProcId_8,
#line 131 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Version_9,
#line 131 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__WriteUnfoldedGoal_10);

#line 97 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_2_4_p_0(
#line 97 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__ModuleInfo_5,
#line 97 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__MaybeVersion_6);

#line 208 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0_1(
#line 208 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__closure_arg,
#line 208 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__wrapper_arg_1,
#line 208 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__wrapper_arg_2,
#line 208 "pd_debug.m"
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



#line 218 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_2_5_p_0(
#line 218 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PDInfo_6,
#line 218 "pd_debug.m"
  MR_String transform_hlds__pd_debug__Msg_7,
#line 218 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Goal_8)
#line 218 "pd_debug.m"
{
#line 221 "pd_debug.m"
  {
#line 221 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;
#line 221 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ProcInfo_12;
#line 221 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__VarSet_13;
#line 221 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__InstMap_14;
#line 221 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ModuleInfo_15;
#line 221 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Vars_16;
#line 221 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__InstMap1_17;
#line 221 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Globals_18;
#line 221 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__OutInfo_19;

#line 223 "pd_debug.m"
    {
#line 223 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__ProcInfo_12);
    }
#line 224 "pd_debug.m"
    {
#line 224 "pd_debug.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_debug__ProcInfo_12, &transform_hlds__pd_debug__VarSet_13);
    }
#line 225 "pd_debug.m"
    {
#line 225 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__InstMap_14);
    }
#line 226 "pd_debug.m"
    {
#line 226 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__ModuleInfo_15);
    }
#line 227 "pd_debug.m"
    {
#line 227 "pd_debug.m"
      mercury__io__write_string_3_p_0(transform_hlds__pd_debug__Msg_7);
    }
#line 228 "pd_debug.m"
    {
#line 228 "pd_debug.m"
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__pd_debug__Goal_8, &transform_hlds__pd_debug__Vars_16);
    }
#line 229 "pd_debug.m"
    {
#line 229 "pd_debug.m"
      hlds__instmap__instmap_restrict_3_p_0(transform_hlds__pd_debug__Vars_16, transform_hlds__pd_debug__InstMap_14, &transform_hlds__pd_debug__InstMap1_17);
    }
#line 230 "pd_debug.m"
    {
#line 230 "pd_debug.m"
      hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(transform_hlds__pd_debug__InstMap1_17, transform_hlds__pd_debug__VarSet_13, (MR_Integer) 1, (MR_Integer) 1);
    }
#line 231 "pd_debug.m"
    {
#line 231 "pd_debug.m"
      mercury__io__nl_2_p_0();
    }
#line 232 "pd_debug.m"
    {
#line 232 "pd_debug.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_15, &transform_hlds__pd_debug__Globals_18);
    }
#line 233 "pd_debug.m"
    {
#line 233 "pd_debug.m"
      transform_hlds__pd_debug__OutInfo_19 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(transform_hlds__pd_debug__Globals_18);
    }
#line 234 "pd_debug.m"
    {
#line 234 "pd_debug.m"
      hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(transform_hlds__pd_debug__OutInfo_19, transform_hlds__pd_debug__Goal_8, transform_hlds__pd_debug__ModuleInfo_15, transform_hlds__pd_debug__VarSet_13, (MR_Integer) 1, (MR_Integer) 1, (MR_String) "\n");
    }
#line 235 "pd_debug.m"
    {
#line 235 "pd_debug.m"
      mercury__io__nl_2_p_0();
    }
#line 236 "pd_debug.m"
    {
#line 236 "pd_debug.m"
      mercury__io__flush_output_2_p_0();
#line 236 "pd_debug.m"
      return;
    }
#line 221 "pd_debug.m"
  }
#line 218 "pd_debug.m"
}

#line 171 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0_1(
#line 171 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__closure_arg,
#line 171 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__wrapper_arg_1,
#line 171 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__wrapper_arg_2,
#line 171 "pd_debug.m"
  MR_Box * transform_hlds__pd_debug__wrapper_arg_3)
#line 171 "pd_debug.m"
{
#line 171 "pd_debug.m"
  {
#line 171 "pd_debug.m"
    MR_Box transform_hlds__pd_debug__closure = transform_hlds__pd_debug__closure_arg;

#line 171 "pd_debug.m"
    {
#line 171 "pd_debug.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_debug__wrapper_arg_1));
#line 171 "pd_debug.m"
      return;
    }
#line 171 "pd_debug.m"
  }
#line 171 "pd_debug.m"
}

#line 131 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0(
#line 131 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__ModuleInfo_7,
#line 131 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PredProcId_8,
#line 131 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Version_9,
#line 131 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__WriteUnfoldedGoal_10)
#line 131 "pd_debug.m"
{
#line 135 "pd_debug.m"
  {
#line 135 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__TypeCtorInfo_85_85;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 0)));
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 2)));
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__InstMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 4)));
#line 135 "pd_debug.m"
    MR_Integer transform_hlds__pd_debug__InitialCost_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 5)));
#line 135 "pd_debug.m"
    MR_Integer transform_hlds__pd_debug__CostDelta_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 6)));
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Parents_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 7)));
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__GoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Goal_12, (MR_Integer) 1)));
#line 135 "pd_debug.m"
    MR_String transform_hlds__pd_debug__PredName_23;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__PredId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__PredProcId_8, (MR_Integer) 0)));
#line 135 "pd_debug.m"
    MR_Integer transform_hlds__pd_debug__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__PredProcId_8, (MR_Integer) 1)));
#line 135 "pd_debug.m"
    MR_Integer transform_hlds__pd_debug__PredInt_26;
#line 135 "pd_debug.m"
    MR_Integer transform_hlds__pd_debug__ProcInt_27;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__NonLocals_28;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ProcInfo_30;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__VarSet_31;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__InstMap1_32;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Globals_33;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__OutInfo_34;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ParentsList_35;
#line 135 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__V_74_74;
#line 136 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 1)));
#line 136 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 3)));
#line 136 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Version_9, (MR_Integer) 8)));
#line 138 "pd_debug.m"
    MR_Word transform_hlds__pd_debug___GoalExpr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Goal_12, (MR_Integer) 0)));
#line 157 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__V_29_29;

#line 139 "pd_debug.m"
    {
#line 139 "pd_debug.m"
      transform_hlds__pd_debug__PredName_23 = hlds__hlds_module__predicate_name_2_f_0(transform_hlds__pd_debug__ModuleInfo_7, transform_hlds__pd_debug__PredId_24);
    }
#line 140 "pd_debug.m"
    {
#line 140 "pd_debug.m"
      mercury__io__write_string_3_p_0(transform_hlds__pd_debug__PredName_23);
    }
#line 141 "pd_debug.m"
    {
#line 141 "pd_debug.m"
      mercury__io__write_string_3_p_0((MR_String) ": (PredProcId :");
    }
#line 143 "pd_debug.m"
    {
#line 143 "pd_debug.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(transform_hlds__pd_debug__PredId_24, &transform_hlds__pd_debug__PredInt_26);
    }
#line 144 "pd_debug.m"
    {
#line 144 "pd_debug.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__pd_debug__ProcId_25, &transform_hlds__pd_debug__ProcInt_27);
    }
#line 145 "pd_debug.m"
    {
#line 145 "pd_debug.m"
      mercury__io__write_int_3_p_0(transform_hlds__pd_debug__PredInt_26);
    }
#line 146 "pd_debug.m"
    {
#line 146 "pd_debug.m"
      mercury__io__write_string_3_p_0((MR_String) "-");
    }
#line 147 "pd_debug.m"
    {
#line 147 "pd_debug.m"
      mercury__io__write_int_3_p_0(transform_hlds__pd_debug__ProcInt_27);
    }
#line 148 "pd_debug.m"
    {
#line 148 "pd_debug.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 149 "pd_debug.m"
    {
#line 149 "pd_debug.m"
      mercury__io__nl_2_p_0();
    }
#line 150 "pd_debug.m"
    {
#line 150 "pd_debug.m"
      mercury__io__write_string_3_p_0((MR_String) " initial cost: ");
    }
#line 151 "pd_debug.m"
    {
#line 151 "pd_debug.m"
      mercury__io__write_int_3_p_0(transform_hlds__pd_debug__InitialCost_17);
    }
#line 152 "pd_debug.m"
    {
#line 152 "pd_debug.m"
      mercury__io__nl_2_p_0();
    }
#line 153 "pd_debug.m"
    {
#line 153 "pd_debug.m"
      mercury__io__write_string_3_p_0((MR_String) " cost delta: ");
    }
#line 154 "pd_debug.m"
    {
#line 154 "pd_debug.m"
      mercury__io__write_int_3_p_0(transform_hlds__pd_debug__CostDelta_18);
    }
#line 155 "pd_debug.m"
    {
#line 155 "pd_debug.m"
      mercury__io__nl_2_p_0();
    }
#line 156 "pd_debug.m"
    {
#line 156 "pd_debug.m"
      transform_hlds__pd_debug__NonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_debug__GoalInfo_22);
    }
#line 157 "pd_debug.m"
    {
#line 157 "pd_debug.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__pd_debug__ModuleInfo_7, transform_hlds__pd_debug__PredId_24, transform_hlds__pd_debug__ProcId_25, &transform_hlds__pd_debug__V_29_29, &transform_hlds__pd_debug__ProcInfo_30);
    }
#line 158 "pd_debug.m"
    {
#line 158 "pd_debug.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_debug__ProcInfo_30, &transform_hlds__pd_debug__VarSet_31);
    }
#line 159 "pd_debug.m"
    {
#line 159 "pd_debug.m"
      hlds__instmap__instmap_restrict_3_p_0(transform_hlds__pd_debug__NonLocals_28, transform_hlds__pd_debug__InstMap_16, &transform_hlds__pd_debug__InstMap1_32);
    }
#line 160 "pd_debug.m"
    {
#line 160 "pd_debug.m"
      mercury__io__write_string_3_p_0((MR_String) " args: ");
    }
#line 161 "pd_debug.m"
    {
#line 161 "pd_debug.m"
      parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_debug__VarSet_31, (MR_Integer) 1, transform_hlds__pd_debug__Args_14);
    }
#line 162 "pd_debug.m"
    {
#line 162 "pd_debug.m"
      mercury__io__nl_2_p_0();
    }
#line 163 "pd_debug.m"
    {
#line 163 "pd_debug.m"
      hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(transform_hlds__pd_debug__InstMap1_32, transform_hlds__pd_debug__VarSet_31, (MR_Integer) 1, (MR_Integer) 1);
    }
#line 164 "pd_debug.m"
    {
#line 164 "pd_debug.m"
      mercury__io__nl_2_p_0();
    }
#line 165 "pd_debug.m"
    {
#line 165 "pd_debug.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_7, &transform_hlds__pd_debug__Globals_33);
    }
#line 166 "pd_debug.m"
    {
#line 166 "pd_debug.m"
      transform_hlds__pd_debug__OutInfo_34 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(transform_hlds__pd_debug__Globals_33);
    }
#line 167 "pd_debug.m"
    {
#line 167 "pd_debug.m"
      hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(transform_hlds__pd_debug__OutInfo_34, transform_hlds__pd_debug__Goal_12, transform_hlds__pd_debug__ModuleInfo_7, transform_hlds__pd_debug__VarSet_31, (MR_Integer) 1, (MR_Integer) 1, (MR_String) "\n");
    }
#line 168 "pd_debug.m"
    {
#line 168 "pd_debug.m"
      mercury__io__nl_2_p_0();
    }
#line 169 "pd_debug.m"
    {
#line 169 "pd_debug.m"
      mercury__io__write_string_3_p_0((MR_String) "Parents: ");
    }
#line 588 "transform_hlds.pd_debug.c"
    transform_hlds__pd_debug__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 170 "pd_debug.m"
    {
#line 170 "pd_debug.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__pd_debug__TypeCtorInfo_85_85, transform_hlds__pd_debug__Parents_19, &transform_hlds__pd_debug__ParentsList_35);
    }
#line 171 "pd_debug.m"
    {
#line 171 "pd_debug.m"
      transform_hlds__pd_debug__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 171 "pd_debug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_74_74, 0) = ((MR_Box) (&transform_hlds__pd_debug_scalar_common_1[0]));
#line 171 "pd_debug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_74_74, 1) = ((MR_Box) (transform_hlds__pd_debug__pd_debug_output_version_6_p_0_1));
#line 171 "pd_debug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 171 "pd_debug.m"
      MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_74_74, 3) = ((MR_Box) (transform_hlds__pd_debug__ModuleInfo_7));
#line 171 "pd_debug.m"
    }
#line 171 "pd_debug.m"
    {
#line 171 "pd_debug.m"
      mercury__io__write_list_5_p_0(transform_hlds__pd_debug__TypeCtorInfo_85_85, transform_hlds__pd_debug__ParentsList_35, (MR_String) ", ", transform_hlds__pd_debug__V_74_74);
    }
#line 172 "pd_debug.m"
    {
#line 172 "pd_debug.m"
      mercury__io__nl_2_p_0();
    }
#line 179 "pd_debug.m"
    if ((transform_hlds__pd_debug__WriteUnfoldedGoal_10 == (MR_Integer) 0))
#line 180 "pd_debug.m"
      {
#line 180 "pd_debug.m"
      }
#line 179 "pd_debug.m"
    else
#line 174 "pd_debug.m"
      {
#line 174 "pd_debug.m"
        MR_Word transform_hlds__pd_debug__ProcGoal_36;

#line 175 "pd_debug.m"
        {
#line 175 "pd_debug.m"
          hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__pd_debug__ProcInfo_30, &transform_hlds__pd_debug__ProcGoal_36);
        }
#line 176 "pd_debug.m"
        {
#line 176 "pd_debug.m"
          mercury__io__write_string_3_p_0((MR_String) "Unfolded goal\n");
        }
#line 177 "pd_debug.m"
        {
#line 177 "pd_debug.m"
          hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(transform_hlds__pd_debug__OutInfo_34, transform_hlds__pd_debug__ProcGoal_36, transform_hlds__pd_debug__ModuleInfo_7, transform_hlds__pd_debug__VarSet_31, (MR_Integer) 1, (MR_Integer) 1, (MR_String) "\n");
        }
#line 178 "pd_debug.m"
        {
#line 178 "pd_debug.m"
          mercury__io__nl_2_p_0();
#line 178 "pd_debug.m"
          return;
        }
#line 174 "pd_debug.m"
      }
#line 135 "pd_debug.m"
  }
#line 131 "pd_debug.m"
}

#line 97 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_2_4_p_0(
#line 97 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__ModuleInfo_5,
#line 97 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__MaybeVersion_6)
#line 97 "pd_debug.m"
{
#line 102 "pd_debug.m"
  {
#line 102 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;

#line 102 "pd_debug.m"
    if ((transform_hlds__pd_debug__MaybeVersion_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 102 "pd_debug.m"
      {
#line 103 "pd_debug.m"
        {
#line 103 "pd_debug.m"
          mercury__io__write_string_3_p_0((MR_String) "Specialised version not found.\n");
#line 103 "pd_debug.m"
          return;
        }
#line 102 "pd_debug.m"
      }
#line 102 "pd_debug.m"
    else
#line 102 "pd_debug.m"
      {
#line 102 "pd_debug.m"
        MR_Word transform_hlds__pd_debug__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 2)));
#line 102 "pd_debug.m"
        MR_Word transform_hlds__pd_debug__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 1)));
#line 102 "pd_debug.m"
        MR_Word transform_hlds__pd_debug__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 0)));
#line 105 "pd_debug.m"
        MR_Word transform_hlds__pd_debug__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 4)));
#line 105 "pd_debug.m"
        MR_Word transform_hlds__pd_debug__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_debug__MaybeVersion_6, (MR_Integer) 3)));

#line 102 "pd_debug.m"
        if ((transform_hlds__pd_debug__V_32_32 == (MR_Integer) 0))
#line 105 "pd_debug.m"
          {
#line 106 "pd_debug.m"
            {
#line 106 "pd_debug.m"
              mercury__io__write_string_3_p_0((MR_String) "Exact match found.\n");
#line 106 "pd_debug.m"
              return;
            }
#line 105 "pd_debug.m"
          }
#line 102 "pd_debug.m"
        else
#line 108 "pd_debug.m"
          {
#line 109 "pd_debug.m"
            {
#line 109 "pd_debug.m"
              mercury__io__write_string_3_p_0((MR_String) "More general version.\n");
            }
#line 110 "pd_debug.m"
            {
#line 110 "pd_debug.m"
              transform_hlds__pd_debug__pd_debug_output_version_6_p_0(transform_hlds__pd_debug__ModuleInfo_5, transform_hlds__pd_debug__V_31_31, transform_hlds__pd_debug__V_30_30, (MR_Integer) 0);
#line 110 "pd_debug.m"
              return;
            }
#line 108 "pd_debug.m"
          }
#line 102 "pd_debug.m"
      }
#line 102 "pd_debug.m"
  }
#line 97 "pd_debug.m"
}

#line 208 "pd_debug.m"
static void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0_1(
#line 208 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__closure_arg,
#line 208 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__wrapper_arg_1,
#line 208 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__wrapper_arg_2,
#line 208 "pd_debug.m"
  MR_Box * transform_hlds__pd_debug__wrapper_arg_3)
#line 208 "pd_debug.m"
{
#line 208 "pd_debug.m"
  {
#line 208 "pd_debug.m"
    MR_Box transform_hlds__pd_debug__closure = transform_hlds__pd_debug__closure_arg;

#line 208 "pd_debug.m"
    {
#line 208 "pd_debug.m"
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_debug__wrapper_arg_1));
#line 208 "pd_debug.m"
      return;
    }
#line 208 "pd_debug.m"
  }
#line 208 "pd_debug.m"
}

#line 53 "pd_debug.m"
void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0(
#line 53 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PDInfo_5,
#line 53 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PredProcIds_6)
#line 53 "pd_debug.m"
{
#line 196 "pd_debug.m"
  {
#line 196 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;
#line 196 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ModuleInfo_8;
#line 196 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Globals_9;
#line 196 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__DebugPD_10;

#line 197 "pd_debug.m"
    {
#line 197 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_5, &transform_hlds__pd_debug__ModuleInfo_8);
    }
#line 198 "pd_debug.m"
    {
#line 198 "pd_debug.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_8, &transform_hlds__pd_debug__Globals_9);
    }
#line 199 "pd_debug.m"
    {
#line 199 "pd_debug.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_9, (MR_Integer) 70, &transform_hlds__pd_debug__DebugPD_10);
    }
#line 81 "pd_debug.m"
    if ((transform_hlds__pd_debug__DebugPD_10 == (MR_Integer) 0))
#line 85 "pd_debug.m"
      {
#line 85 "pd_debug.m"
      }
#line 81 "pd_debug.m"
    else
#line 81 "pd_debug.m"
      {
#line 81 "pd_debug.m"
        MR_Word transform_hlds__pd_debug__V_31_31;

#line 208 "pd_debug.m"
        {
#line 208 "pd_debug.m"
          transform_hlds__pd_debug__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 208 "pd_debug.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_31_31, 0) = ((MR_Box) (&transform_hlds__pd_debug_scalar_common_1[0]));
#line 208 "pd_debug.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_31_31, 1) = ((MR_Box) (transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0_1));
#line 208 "pd_debug.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 208 "pd_debug.m"
          MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__V_31_31, 3) = ((MR_Box) (transform_hlds__pd_debug__ModuleInfo_8));
#line 208 "pd_debug.m"
        }
#line 208 "pd_debug.m"
        {
#line 208 "pd_debug.m"
          mercury__io__write_list_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__pd_debug__PredProcIds_6, (MR_String) ", ", transform_hlds__pd_debug__V_31_31);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
#line 83 "pd_debug.m"
          return;
        }
#line 81 "pd_debug.m"
      }
#line 196 "pd_debug.m"
  }
#line 53 "pd_debug.m"
}

#line 51 "pd_debug.m"
void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_4_p_0(
#line 51 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__TypeInfo_for_T_12,
#line 51 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__DebugPD_5,
#line 51 "pd_debug.m"
  MR_Box transform_hlds__pd_debug__Thing_6)
#line 51 "pd_debug.m"
{
#line 81 "pd_debug.m"
  {
#line 81 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;

#line 81 "pd_debug.m"
    if ((transform_hlds__pd_debug__DebugPD_5 == (MR_Integer) 0))
#line 85 "pd_debug.m"
      {
#line 85 "pd_debug.m"
      }
#line 81 "pd_debug.m"
    else
#line 81 "pd_debug.m"
      {
#line 82 "pd_debug.m"
        {
#line 82 "pd_debug.m"
          mercury__io__write_3_p_0(transform_hlds__pd_debug__TypeInfo_for_T_12, transform_hlds__pd_debug__Thing_6);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
#line 83 "pd_debug.m"
          return;
        }
#line 81 "pd_debug.m"
      }
#line 81 "pd_debug.m"
  }
#line 51 "pd_debug.m"
}

#line 48 "pd_debug.m"
void MR_CALL 
transform_hlds__pd_debug__pd_debug_message_context_6_p_0(
#line 48 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__DebugPD_7,
#line 48 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Context_8,
#line 48 "pd_debug.m"
  MR_String transform_hlds__pd_debug__Fmt_9,
#line 48 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Args_10)
#line 48 "pd_debug.m"
{
#line 910 "transform_hlds.pd_debug.c"
  {
#line 912 "transform_hlds.pd_debug.c"
    MR_bool transform_hlds__pd_debug__succeeded;

#line 915 "transform_hlds.pd_debug.c"
    if ((transform_hlds__pd_debug__DebugPD_7 == (MR_Integer) 0))
#line 85 "pd_debug.m"
      {
#line 85 "pd_debug.m"
      }
#line 921 "transform_hlds.pd_debug.c"
    else
#line 923 "transform_hlds.pd_debug.c"
      {
#line 82 "pd_debug.m"
        {
#line 82 "pd_debug.m"
          parse_tree__prog_out__write_context_3_p_0(transform_hlds__pd_debug__Context_8);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
        }
#line 82 "pd_debug.m"
        {
#line 82 "pd_debug.m"
          mercury__io__format_4_p_0(transform_hlds__pd_debug__Fmt_9, transform_hlds__pd_debug__Args_10);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
#line 83 "pd_debug.m"
          return;
        }
#line 947 "transform_hlds.pd_debug.c"
      }
#line 949 "transform_hlds.pd_debug.c"
  }
#line 48 "pd_debug.m"
}

#line 45 "pd_debug.m"
void MR_CALL 
transform_hlds__pd_debug__pd_debug_message_5_p_0(
#line 45 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__DebugPD_6,
#line 45 "pd_debug.m"
  MR_String transform_hlds__pd_debug__Fmt_7,
#line 45 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Args_8)
#line 45 "pd_debug.m"
{
#line 81 "pd_debug.m"
  {
#line 81 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;

#line 81 "pd_debug.m"
    if ((transform_hlds__pd_debug__DebugPD_6 == (MR_Integer) 0))
#line 85 "pd_debug.m"
      {
#line 85 "pd_debug.m"
      }
#line 81 "pd_debug.m"
    else
#line 81 "pd_debug.m"
      {
#line 82 "pd_debug.m"
        {
#line 82 "pd_debug.m"
          mercury__io__format_4_p_0(transform_hlds__pd_debug__Fmt_7, transform_hlds__pd_debug__Args_8);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
#line 83 "pd_debug.m"
          return;
        }
#line 81 "pd_debug.m"
      }
#line 81 "pd_debug.m"
  }
#line 45 "pd_debug.m"
}

#line 43 "pd_debug.m"
void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_instmap_3_p_0(
#line 43 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PDInfo_4)
#line 43 "pd_debug.m"
{
#line 185 "pd_debug.m"
  {
#line 185 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;
#line 185 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__InstMap_6;
#line 185 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ProcInfo_7;
#line 185 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__VarSet_8;
#line 185 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ModuleInfo_9;
#line 185 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Globals_10;
#line 185 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__DebugPD_11;

#line 186 "pd_debug.m"
    {
#line 186 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_instmap_2_p_0(transform_hlds__pd_debug__PDInfo_4, &transform_hlds__pd_debug__InstMap_6);
    }
#line 187 "pd_debug.m"
    {
#line 187 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(transform_hlds__pd_debug__PDInfo_4, &transform_hlds__pd_debug__ProcInfo_7);
    }
#line 188 "pd_debug.m"
    {
#line 188 "pd_debug.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__pd_debug__ProcInfo_7, &transform_hlds__pd_debug__VarSet_8);
    }
#line 189 "pd_debug.m"
    {
#line 189 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_4, &transform_hlds__pd_debug__ModuleInfo_9);
    }
#line 190 "pd_debug.m"
    {
#line 190 "pd_debug.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_9, &transform_hlds__pd_debug__Globals_10);
    }
#line 191 "pd_debug.m"
    {
#line 191 "pd_debug.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_10, (MR_Integer) 70, &transform_hlds__pd_debug__DebugPD_11);
    }
#line 81 "pd_debug.m"
    if ((transform_hlds__pd_debug__DebugPD_11 == (MR_Integer) 0))
#line 85 "pd_debug.m"
      {
#line 85 "pd_debug.m"
      }
#line 81 "pd_debug.m"
    else
#line 81 "pd_debug.m"
      {
#line 82 "pd_debug.m"
        {
#line 82 "pd_debug.m"
          hlds__hlds_out__hlds_out_mode__write_instmap_6_p_0(transform_hlds__pd_debug__InstMap_6, transform_hlds__pd_debug__VarSet_8, (MR_Integer) 1, (MR_Integer) 1);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
#line 83 "pd_debug.m"
          return;
        }
#line 81 "pd_debug.m"
      }
#line 185 "pd_debug.m"
  }
#line 43 "pd_debug.m"
}

#line 40 "pd_debug.m"
void MR_CALL 
transform_hlds__pd_debug__pd_debug_register_version_5_p_0(
#line 40 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PDInfo_6,
#line 40 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PredProcId_7,
#line 40 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Version_8)
#line 40 "pd_debug.m"
{
#line 115 "pd_debug.m"
  {
#line 115 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;
#line 115 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ModuleInfo_10;
#line 115 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Globals_11;
#line 115 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__DebugPD_12;

#line 116 "pd_debug.m"
    {
#line 116 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__ModuleInfo_10);
    }
#line 117 "pd_debug.m"
    {
#line 117 "pd_debug.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_10, &transform_hlds__pd_debug__Globals_11);
    }
#line 118 "pd_debug.m"
    {
#line 118 "pd_debug.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_11, (MR_Integer) 70, &transform_hlds__pd_debug__DebugPD_12);
    }
#line 81 "pd_debug.m"
    if ((transform_hlds__pd_debug__DebugPD_12 == (MR_Integer) 0))
#line 85 "pd_debug.m"
      {
#line 85 "pd_debug.m"
      }
#line 81 "pd_debug.m"
    else
#line 81 "pd_debug.m"
      {
#line 126 "pd_debug.m"
        {
#line 126 "pd_debug.m"
          mercury__io__write_string_3_p_0((MR_String) "Registering version:\n");
        }
#line 127 "pd_debug.m"
        {
#line 127 "pd_debug.m"
          transform_hlds__pd_debug__pd_debug_output_version_6_p_0(transform_hlds__pd_debug__ModuleInfo_10, transform_hlds__pd_debug__PredProcId_7, transform_hlds__pd_debug__Version_8, (MR_Integer) 0);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
#line 83 "pd_debug.m"
          return;
        }
#line 81 "pd_debug.m"
      }
#line 115 "pd_debug.m"
  }
#line 40 "pd_debug.m"
}

#line 37 "pd_debug.m"
void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_4_p_0(
#line 37 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PDInfo_5,
#line 37 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__MaybeVersion_6)
#line 37 "pd_debug.m"
{
#line 90 "pd_debug.m"
  {
#line 90 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;
#line 90 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ModuleInfo_8;
#line 90 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Globals_9;
#line 90 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__DebugPD_10;

#line 91 "pd_debug.m"
    {
#line 91 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_5, &transform_hlds__pd_debug__ModuleInfo_8);
    }
#line 92 "pd_debug.m"
    {
#line 92 "pd_debug.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_8, &transform_hlds__pd_debug__Globals_9);
    }
#line 93 "pd_debug.m"
    {
#line 93 "pd_debug.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_9, (MR_Integer) 70, &transform_hlds__pd_debug__DebugPD_10);
    }
#line 81 "pd_debug.m"
    if ((transform_hlds__pd_debug__DebugPD_10 == (MR_Integer) 0))
#line 85 "pd_debug.m"
      {
#line 85 "pd_debug.m"
      }
#line 81 "pd_debug.m"
    else
#line 81 "pd_debug.m"
      {
#line 82 "pd_debug.m"
        {
#line 82 "pd_debug.m"
          transform_hlds__pd_debug__pd_debug_search_version_result_2_4_p_0(transform_hlds__pd_debug__ModuleInfo_8, transform_hlds__pd_debug__MaybeVersion_6);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
#line 83 "pd_debug.m"
          return;
        }
#line 81 "pd_debug.m"
      }
#line 90 "pd_debug.m"
  }
#line 37 "pd_debug.m"
}

#line 34 "pd_debug.m"
void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(
#line 34 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__PDInfo_6,
#line 34 "pd_debug.m"
  MR_String transform_hlds__pd_debug__Msg_7,
#line 34 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Goal_8)
#line 34 "pd_debug.m"
{
#line 212 "pd_debug.m"
  {
#line 212 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;
#line 212 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__ModuleInfo_10;
#line 212 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__Globals_11;
#line 212 "pd_debug.m"
    MR_Word transform_hlds__pd_debug__DebugPD_12;

#line 213 "pd_debug.m"
    {
#line 213 "pd_debug.m"
      transform_hlds__pd_info__pd_info_get_module_info_2_p_0(transform_hlds__pd_debug__PDInfo_6, &transform_hlds__pd_debug__ModuleInfo_10);
    }
#line 214 "pd_debug.m"
    {
#line 214 "pd_debug.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__pd_debug__ModuleInfo_10, &transform_hlds__pd_debug__Globals_11);
    }
#line 215 "pd_debug.m"
    {
#line 215 "pd_debug.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__pd_debug__Globals_11, (MR_Integer) 70, &transform_hlds__pd_debug__DebugPD_12);
    }
#line 81 "pd_debug.m"
    if ((transform_hlds__pd_debug__DebugPD_12 == (MR_Integer) 0))
#line 85 "pd_debug.m"
      {
#line 85 "pd_debug.m"
      }
#line 81 "pd_debug.m"
    else
#line 81 "pd_debug.m"
      {
#line 82 "pd_debug.m"
        {
#line 82 "pd_debug.m"
          transform_hlds__pd_debug__pd_debug_output_goal_2_5_p_0(transform_hlds__pd_debug__PDInfo_6, transform_hlds__pd_debug__Msg_7, transform_hlds__pd_debug__Goal_8);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
#line 83 "pd_debug.m"
          return;
        }
#line 81 "pd_debug.m"
      }
#line 212 "pd_debug.m"
  }
#line 34 "pd_debug.m"
}

#line 31 "pd_debug.m"
void MR_CALL 
transform_hlds__pd_debug__pd_debug_do_io_4_p_0(
#line 31 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__DebugPD_5,
#line 31 "pd_debug.m"
  MR_Word transform_hlds__pd_debug__Pred_6)
#line 31 "pd_debug.m"
{
#line 81 "pd_debug.m"
  {
#line 81 "pd_debug.m"
    MR_bool transform_hlds__pd_debug__succeeded;

#line 81 "pd_debug.m"
    if ((transform_hlds__pd_debug__DebugPD_5 == (MR_Integer) 0))
#line 85 "pd_debug.m"
      {
#line 85 "pd_debug.m"
      }
#line 81 "pd_debug.m"
    else
#line 81 "pd_debug.m"
      {
#line 82 "pd_debug.m"
        void MR_CALL (* transform_hlds__pd_debug__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), transform_hlds__pd_debug__Pred_6, (MR_Integer) 1)));
#line 82 "pd_debug.m"
        MR_Box transform_hlds__pd_debug__conv1_STATE_VARIABLE_IO_10_10;

#line 82 "pd_debug.m"
        {
#line 82 "pd_debug.m"
          transform_hlds__pd_debug__func_0(((MR_Box) transform_hlds__pd_debug__Pred_6), ((MR_Box) ((MR_Integer) 0)), &transform_hlds__pd_debug__conv1_STATE_VARIABLE_IO_10_10);
        }
#line 83 "pd_debug.m"
        {
#line 83 "pd_debug.m"
          mercury__io__flush_output_2_p_0();
#line 83 "pd_debug.m"
          return;
        }
#line 81 "pd_debug.m"
      }
#line 81 "pd_debug.m"
  }
#line 31 "pd_debug.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.pd_debug. */
