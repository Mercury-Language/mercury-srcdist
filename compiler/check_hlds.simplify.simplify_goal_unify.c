/*
** Automatically generated from `simplify_goal_unify.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module check_hlds.simplify.simplify_goal_unify. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal_unify__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_unify.mih"


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
#include "check_hlds.polymorphism.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 244 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9,
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_10,
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_11,
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_12,
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_15,
#line 244 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__Call_16);

#line 152 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_15,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_16,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__UniMode_17,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__CanFail_18,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__Context_20,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_21,
#line 152 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__Goal_22,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__NestedContext0_23,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__InstMap0_24,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52,
#line 152 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54,
#line 152 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);

#line 342 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__type_info_locn_6_p_0(
#line 342 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeVar_7,
#line 342 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__Kind_8,
#line 342 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9,
#line 342 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__Goals_10,
#line 342 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_16,
#line 342 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_17);

#line 292 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(
#line 292 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__Types_6,
#line 292 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoVars_7,
#line 292 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoGoals_8,
#line 292 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_25,
#line 292 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_26);

#line 280 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_builtin_compound_eq_5_p_0(
#line 280 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_6,
#line 280 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_7,
#line 280 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_8,
#line 280 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_9,
#line 280 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__Call_10);

#line 256 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeCtor_11,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_12,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_13,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_14,
#line 256 "simplify_goal_unify.m"
  MR_Integer check_hlds__simplify__simplify_goal_unify__ProcId_15,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_16,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__Context_17,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_18,
#line 256 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__CallExpr_19,
#line 256 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__CallGoalInfo_20);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_3[1][1];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_3[1][1] = {
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 244 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9,
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_10,
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_11,
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_12,
#line 244 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_15,
#line 244 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__Call_16)
#line 244 "simplify_goal_unify.m"
{
#line 249 "simplify_goal_unify.m"
  {
#line 249 "simplify_goal_unify.m"
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
#line 249 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__ArgVars_17;
#line 249 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__Context_18;
#line 249 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_19_19;
#line 249 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_20_20;
#line 249 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_22_22;
#line 249 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_29_29;

#line 250 "simplify_goal_unify.m"
    {
#line 250 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_20_20, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_11));
#line 250 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "simplify_goal_unify.m"
    }
#line 250 "simplify_goal_unify.m"
    {
#line 250 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_19_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_10));
#line 250 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_19_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_20_20));
#line 250 "simplify_goal_unify.m"
    }
#line 250 "simplify_goal_unify.m"
    {
#line 250 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__ArgVars_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__ArgVars_17, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9));
#line 250 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__ArgVars_17, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_19_19));
#line 250 "simplify_goal_unify.m"
    }
#line 251 "simplify_goal_unify.m"
    {
#line 251 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo_15);
    }
#line 252 "simplify_goal_unify.m"
    {
#line 252 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_22_22 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 254 "simplify_goal_unify.m"
    {
#line 254 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_29_29 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 252 "simplify_goal_unify.m"
    {
#line 252 "simplify_goal_unify.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_unify__V_22_22, (MR_String) "unify", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_unify_scalar_common_3[0]), (MR_Integer) 1, (MR_Integer) 0, check_hlds__simplify__simplify_goal_unify__ArgVars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_unify__V_29_29, check_hlds__simplify__simplify_goal_unify__ModuleInfo_12, check_hlds__simplify__simplify_goal_unify__Context_18, check_hlds__simplify__simplify_goal_unify__Call_16);
#line 252 "simplify_goal_unify.m"
      return;
    }
#line 249 "simplify_goal_unify.m"
  }
#line 244 "simplify_goal_unify.m"
}

#line 152 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_15,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_16,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__UniMode_17,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__CanFail_18,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__Context_20,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_21,
#line 152 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__Goal_22,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__NestedContext0_23,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__InstMap0_24,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52,
#line 152 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53,
#line 152 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54,
#line 152 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55)
#line 152 "simplify_goal_unify.m"
{
#line 159 "simplify_goal_unify.m"
  {
#line 159 "simplify_goal_unify.m"
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
#line 159 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_27;
#line 159 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes_28;
#line 159 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__Type_29;
#line 159 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__ExtraGoals_33;
#line 159 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__Call_34;
#line 159 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__Conjuncts_51;
#line 159 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_85_85;
#line 173 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__TypeVar_30;
#line 173 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__Kind_31;

#line 160 "simplify_goal_unify.m"
    {
#line 160 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, &check_hlds__simplify__simplify_goal_unify__ModuleInfo_27);
    }
#line 161 "simplify_goal_unify.m"
    {
#line 161 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, &check_hlds__simplify__simplify_goal_unify__VarTypes_28);
    }
#line 162 "simplify_goal_unify.m"
    {
#line 162 "simplify_goal_unify.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_unify__VarTypes_28, check_hlds__simplify__simplify_goal_unify__XVar_15, &check_hlds__simplify__simplify_goal_unify__Type_29);
    }
#line 163 "simplify_goal_unify.m"
    check_hlds__simplify__simplify_goal_unify__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__Type_29)) == (MR_mktag((MR_Integer) 0)));
#line 163 "simplify_goal_unify.m"
    if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 163 "simplify_goal_unify.m"
      {
#line 163 "simplify_goal_unify.m"
        check_hlds__simplify__simplify_goal_unify__TypeVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Type_29, (MR_Integer) 0)));
#line 163 "simplify_goal_unify.m"
        check_hlds__simplify__simplify_goal_unify__Kind_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Type_29, (MR_Integer) 1)));
#line 170 "simplify_goal_unify.m"
        {
#line 170 "simplify_goal_unify.m"
          MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVar_32;

#line 170 "simplify_goal_unify.m"
          {
#line 170 "simplify_goal_unify.m"
            check_hlds__simplify__simplify_goal_unify__type_info_locn_6_p_0(check_hlds__simplify__simplify_goal_unify__TypeVar_30, check_hlds__simplify__simplify_goal_unify__Kind_31, &check_hlds__simplify__simplify_goal_unify__TypeInfoVar_32, &check_hlds__simplify__simplify_goal_unify__ExtraGoals_33, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);
          }
#line 171 "simplify_goal_unify.m"
          {
#line 171 "simplify_goal_unify.m"
            check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(check_hlds__simplify__simplify_goal_unify__TypeInfoVar_32, check_hlds__simplify__simplify_goal_unify__XVar_15, check_hlds__simplify__simplify_goal_unify__YVar_16, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__Call_34);
          }
#line 171 "simplify_goal_unify.m"
          *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52;
#line 170 "simplify_goal_unify.m"
        }
#line 163 "simplify_goal_unify.m"
      }
#line 163 "simplify_goal_unify.m"
    else
#line 185 "simplify_goal_unify.m"
      {
#line 173 "simplify_goal_unify.m"
        {
#line 173 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_goal_unify__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(check_hlds__simplify__simplify_goal_unify__Type_29);
        }
#line 185 "simplify_goal_unify.m"
        if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 176 "simplify_goal_unify.m"
          {
#line 176 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__GContext_35;
#line 176 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__Call0_36;
#line 176 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__Call1_38;
#line 176 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_39;
#line 176 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__V_57_57;
#line 176 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__V_63_63;
#line 176 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__V_65_65;
#line 176 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__V_66_66;
#line 176 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__V_68_68;
#line 180 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__V_37_37;

#line 176 "simplify_goal_unify.m"
            {
#line 176 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__GContext_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo0_21);
            }
#line 177 "simplify_goal_unify.m"
            {
#line 177 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__V_57_57 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
            }
#line 179 "simplify_goal_unify.m"
            {
#line 179 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "simplify_goal_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_16));
#line 179 "simplify_goal_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "simplify_goal_unify.m"
            }
#line 179 "simplify_goal_unify.m"
            {
#line 179 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "simplify_goal_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_15));
#line 179 "simplify_goal_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_68_68));
#line 179 "simplify_goal_unify.m"
            }
#line 179 "simplify_goal_unify.m"
            {
#line 179 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__V_65_65 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
            }
#line 177 "simplify_goal_unify.m"
            {
#line 177 "simplify_goal_unify.m"
              hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_unify__V_57_57, (MR_String) "builtin_unify_pred", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_unify_scalar_common_3[0]), (MR_Integer) 1, (MR_Integer) 0, check_hlds__simplify__simplify_goal_unify__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_unify__V_65_65, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__GContext_35, &check_hlds__simplify__simplify_goal_unify__V_66_66);
            }
#line 180 "simplify_goal_unify.m"
            check_hlds__simplify__simplify_goal_unify__Call0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_66_66, (MR_Integer) 0)));
#line 180 "simplify_goal_unify.m"
            check_hlds__simplify__simplify_goal_unify__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_66_66, (MR_Integer) 1)));
#line 181 "simplify_goal_unify.m"
            {
#line 181 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(check_hlds__simplify__simplify_goal_unify__Call0_36, &check_hlds__simplify__simplify_goal_unify__Call1_38, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__GoalInfo_39, check_hlds__simplify__simplify_goal_unify__NestedContext0_23, check_hlds__simplify__simplify_goal_unify__InstMap0_24, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);
            }
#line 183 "simplify_goal_unify.m"
            {
#line 183 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__Call_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "simplify_goal_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Call_34, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Call1_38));
#line 183 "simplify_goal_unify.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Call_34, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__GoalInfo_39));
#line 183 "simplify_goal_unify.m"
            }
#line 184 "simplify_goal_unify.m"
            check_hlds__simplify__simplify_goal_unify__ExtraGoals_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "simplify_goal_unify.m"
          }
#line 185 "simplify_goal_unify.m"
        else
#line 186 "simplify_goal_unify.m"
          {
#line 186 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__TypeCtor_40;
#line 186 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__TypeArgs_41;
#line 186 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__Det_42;
#line 186 "simplify_goal_unify.m"
            MR_Integer check_hlds__simplify__simplify_goal_unify__ProcId_43;
#line 186 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__Globals_44;
#line 186 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__SpecialPreds_45;
#line 186 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__CanCompareCompoundValues_46;
#line 199 "simplify_goal_unify.m"
            MR_Integer check_hlds__simplify__simplify_goal_unify__V_102_102;

#line 186 "simplify_goal_unify.m"
            {
#line 186 "simplify_goal_unify.m"
              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__simplify__simplify_goal_unify__Type_29, &check_hlds__simplify__simplify_goal_unify__TypeCtor_40, &check_hlds__simplify__simplify_goal_unify__TypeArgs_41);
            }
#line 187 "simplify_goal_unify.m"
            {
#line 187 "simplify_goal_unify.m"
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal_unify__Det_42, check_hlds__simplify__simplify_goal_unify__CanFail_18, (MR_Integer) 1);
            }
#line 188 "simplify_goal_unify.m"
            {
#line 188 "simplify_goal_unify.m"
              check_hlds__unify_proc__lookup_mode_num_5_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__TypeCtor_40, check_hlds__simplify__simplify_goal_unify__UniMode_17, check_hlds__simplify__simplify_goal_unify__Det_42, &check_hlds__simplify__simplify_goal_unify__ProcId_43);
            }
#line 189 "simplify_goal_unify.m"
            {
#line 189 "simplify_goal_unify.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, &check_hlds__simplify__simplify_goal_unify__Globals_44);
            }
#line 190 "simplify_goal_unify.m"
            {
#line 190 "simplify_goal_unify.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_unify__Globals_44, (MR_Integer) 273, &check_hlds__simplify__simplify_goal_unify__SpecialPreds_45);
            }
#line 191 "simplify_goal_unify.m"
            {
#line 191 "simplify_goal_unify.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_unify__Globals_44, (MR_Integer) 268, &check_hlds__simplify__simplify_goal_unify__CanCompareCompoundValues_46);
            }
#line 199 "simplify_goal_unify.m"
            {
#line 199 "simplify_goal_unify.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__simplify__simplify_goal_unify__V_102_102);
            }
#line 199 "simplify_goal_unify.m"
            check_hlds__simplify__simplify_goal_unify__succeeded = (check_hlds__simplify__simplify_goal_unify__ProcId_43 == check_hlds__simplify__simplify_goal_unify__V_102_102);
#line 199 "simplify_goal_unify.m"
            if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 199 "simplify_goal_unify.m"
              {
#line 200 "simplify_goal_unify.m"
                check_hlds__simplify__simplify_goal_unify__succeeded = (check_hlds__simplify__simplify_goal_unify__CanCompareCompoundValues_46 == (MR_Integer) 1);
#line 199 "simplify_goal_unify.m"
                if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 201 "simplify_goal_unify.m"
                  {
#line 201 "simplify_goal_unify.m"
                    check_hlds__simplify__simplify_goal_unify__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__Type_29);
                  }
#line 199 "simplify_goal_unify.m"
              }
#line 205 "simplify_goal_unify.m"
            if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 203 "simplify_goal_unify.m"
              {
#line 203 "simplify_goal_unify.m"
                check_hlds__simplify__simplify_goal_unify__ExtraGoals_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 204 "simplify_goal_unify.m"
                {
#line 204 "simplify_goal_unify.m"
                  check_hlds__simplify__simplify_goal_unify__call_builtin_compound_eq_5_p_0(check_hlds__simplify__simplify_goal_unify__XVar_15, check_hlds__simplify__simplify_goal_unify__YVar_16, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__Call_34);
                }
#line 204 "simplify_goal_unify.m"
                *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54;
#line 204 "simplify_goal_unify.m"
                *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52;
#line 203 "simplify_goal_unify.m"
              }
#line 205 "simplify_goal_unify.m"
            else
#line 229 "simplify_goal_unify.m"
              {
#line 206 "simplify_goal_unify.m"
                MR_Integer check_hlds__simplify__simplify_goal_unify__V_103_103;

#line 206 "simplify_goal_unify.m"
                {
#line 206 "simplify_goal_unify.m"
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__simplify__simplify_goal_unify__V_103_103);
                }
#line 206 "simplify_goal_unify.m"
                check_hlds__simplify__simplify_goal_unify__succeeded = (check_hlds__simplify__simplify_goal_unify__ProcId_43 == check_hlds__simplify__simplify_goal_unify__V_103_103);
#line 206 "simplify_goal_unify.m"
                if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 209 "simplify_goal_unify.m"
                  {
#line 209 "simplify_goal_unify.m"
                    if ((check_hlds__simplify__simplify_goal_unify__SpecialPreds_45 == (MR_Integer) 0))
#line 208 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__succeeded = MR_TRUE;
#line 209 "simplify_goal_unify.m"
                    else
#line 217 "simplify_goal_unify.m"
                      {
#line 217 "simplify_goal_unify.m"
                        check_hlds__simplify__simplify_goal_unify__succeeded = hlds__special_pred__special_pred_is_generated_lazily_2_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__TypeCtor_40);
                      }
#line 209 "simplify_goal_unify.m"
                  }
#line 229 "simplify_goal_unify.m"
                if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 220 "simplify_goal_unify.m"
                  {
#line 220 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47;
#line 220 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__V_75_75;
#line 220 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVar_87;
#line 223 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVarPrime_48;
#line 221 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__V_78_78;

#line 220 "simplify_goal_unify.m"
                    {
#line 220 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "simplify_goal_unify.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_75_75, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Type_29));
#line 220 "simplify_goal_unify.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "simplify_goal_unify.m"
                    }
#line 220 "simplify_goal_unify.m"
                    {
#line 220 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(check_hlds__simplify__simplify_goal_unify__V_75_75, &check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47, &check_hlds__simplify__simplify_goal_unify__ExtraGoals_33, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);
                    }
#line 221 "simplify_goal_unify.m"
                    check_hlds__simplify__simplify_goal_unify__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47)) == (MR_mktag((MR_Integer) 1)));
#line 221 "simplify_goal_unify.m"
                    if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 221 "simplify_goal_unify.m"
                      {
#line 221 "simplify_goal_unify.m"
                        check_hlds__simplify__simplify_goal_unify__TypeInfoVarPrime_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47, (MR_Integer) 0)));
#line 221 "simplify_goal_unify.m"
                        check_hlds__simplify__simplify_goal_unify__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47, (MR_Integer) 1)));
#line 221 "simplify_goal_unify.m"
                        check_hlds__simplify__simplify_goal_unify__succeeded = (check_hlds__simplify__simplify_goal_unify__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "simplify_goal_unify.m"
                      }
#line 223 "simplify_goal_unify.m"
                    if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 222 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__TypeInfoVar_87 = check_hlds__simplify__simplify_goal_unify__TypeInfoVarPrime_48;
#line 223 "simplify_goal_unify.m"
                    else
#line 224 "simplify_goal_unify.m"
                      {
#line 224 "simplify_goal_unify.m"
                        {
#line 224 "simplify_goal_unify.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_unify", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.process_compl_unify\'/14", (MR_String) "more than one typeinfo for one type var");
#line 224 "simplify_goal_unify.m"
                          return;
                        }
#line 224 "simplify_goal_unify.m"
                      }
#line 227 "simplify_goal_unify.m"
                    {
#line 227 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(check_hlds__simplify__simplify_goal_unify__TypeInfoVar_87, check_hlds__simplify__simplify_goal_unify__XVar_15, check_hlds__simplify__simplify_goal_unify__YVar_16, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__Call_34);
                    }
#line 227 "simplify_goal_unify.m"
                    *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52;
#line 220 "simplify_goal_unify.m"
                  }
#line 229 "simplify_goal_unify.m"
                else
#line 233 "simplify_goal_unify.m"
                  {
#line 233 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__CallGoalInfo0_49;
#line 233 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__CallGoalInfo1_50;
#line 233 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_82_82;
#line 233 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__Call0_88;
#line 233 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__Call1_89;
#line 233 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_90;

#line 233 "simplify_goal_unify.m"
                    {
#line 233 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(check_hlds__simplify__simplify_goal_unify__TypeArgs_41, &check_hlds__simplify__simplify_goal_unify__TypeInfoVars_90, &check_hlds__simplify__simplify_goal_unify__ExtraGoals_33, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_82_82);
                    }
#line 234 "simplify_goal_unify.m"
                    {
#line 234 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(check_hlds__simplify__simplify_goal_unify__TypeCtor_40, check_hlds__simplify__simplify_goal_unify__TypeInfoVars_90, check_hlds__simplify__simplify_goal_unify__XVar_15, check_hlds__simplify__simplify_goal_unify__YVar_16, check_hlds__simplify__simplify_goal_unify__ProcId_43, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__Context_20, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__Call0_88, &check_hlds__simplify__simplify_goal_unify__CallGoalInfo0_49);
                    }
#line 236 "simplify_goal_unify.m"
                    {
#line 236 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(check_hlds__simplify__simplify_goal_unify__Call0_88, &check_hlds__simplify__simplify_goal_unify__Call1_89, check_hlds__simplify__simplify_goal_unify__CallGoalInfo0_49, &check_hlds__simplify__simplify_goal_unify__CallGoalInfo1_50, check_hlds__simplify__simplify_goal_unify__NestedContext0_23, check_hlds__simplify__simplify_goal_unify__InstMap0_24, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_82_82, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);
                    }
#line 238 "simplify_goal_unify.m"
                    {
#line 238 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__Call_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 238 "simplify_goal_unify.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Call_34, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Call1_89));
#line 238 "simplify_goal_unify.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Call_34, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__CallGoalInfo1_50));
#line 238 "simplify_goal_unify.m"
                    }
#line 233 "simplify_goal_unify.m"
                  }
#line 229 "simplify_goal_unify.m"
              }
#line 186 "simplify_goal_unify.m"
          }
#line 185 "simplify_goal_unify.m"
      }
#line 241 "simplify_goal_unify.m"
    {
#line 241 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_85_85, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Call_34));
#line 241 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "simplify_goal_unify.m"
    }
#line 241 "simplify_goal_unify.m"
    {
#line 241 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__Conjuncts_51 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_unify__ExtraGoals_33, check_hlds__simplify__simplify_goal_unify__V_85_85);
    }
#line 242 "simplify_goal_unify.m"
    {
#line 242 "simplify_goal_unify.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__simplify_goal_unify__Conjuncts_51, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, check_hlds__simplify__simplify_goal_unify__Goal_22);
#line 242 "simplify_goal_unify.m"
      return;
    }
#line 159 "simplify_goal_unify.m"
  }
#line 152 "simplify_goal_unify.m"
}

#line 342 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__type_info_locn_6_p_0(
#line 342 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeVar_7,
#line 342 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__Kind_8,
#line 342 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9,
#line 342 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__Goals_10,
#line 342 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_16,
#line 342 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_17)
#line 342 "simplify_goal_unify.m"
{
#line 345 "simplify_goal_unify.m"
  {
#line 345 "simplify_goal_unify.m"
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
#line 345 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps_12;
#line 345 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_13;

#line 346 "simplify_goal_unify.m"
    {
#line 346 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_16, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps_12);
    }
#line 347 "simplify_goal_unify.m"
    {
#line 347 "simplify_goal_unify.m"
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__simplify__simplify_goal_unify__RttiVarMaps_12, check_hlds__simplify__simplify_goal_unify__TypeVar_7, &check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_13);
    }
#line 352 "simplify_goal_unify.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_13)) == (MR_mktag((MR_Integer) 0))))
#line 350 "simplify_goal_unify.m"
      {
#line 350 "simplify_goal_unify.m"
        *check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_13, (MR_Integer) 0)));
#line 351 "simplify_goal_unify.m"
        *check_hlds__simplify__simplify_goal_unify__Goals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 351 "simplify_goal_unify.m"
        *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_17 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_16;
#line 350 "simplify_goal_unify.m"
      }
#line 352 "simplify_goal_unify.m"
    else
#line 354 "simplify_goal_unify.m"
      {
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__TypeClassInfoVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_13, (MR_Integer) 0)));
#line 354 "simplify_goal_unify.m"
        MR_Integer check_hlds__simplify__simplify_goal_unify__Index_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_13, (MR_Integer) 1)));
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_28;
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__VarSet0_29;
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes0_30;
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_31;
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__VarSet_32;
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes_33;
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps_34;
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__V_35_35;
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_26_36;
#line 354 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_27_37;

#line 365 "simplify_goal_unify.m"
        {
#line 365 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_16, &check_hlds__simplify__simplify_goal_unify__ModuleInfo_28);
        }
#line 366 "simplify_goal_unify.m"
        {
#line 366 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_16, &check_hlds__simplify__simplify_goal_unify__VarSet0_29);
        }
#line 367 "simplify_goal_unify.m"
        {
#line 367 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_16, &check_hlds__simplify__simplify_goal_unify__VarTypes0_30);
        }
#line 368 "simplify_goal_unify.m"
        {
#line 368 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_16, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_31);
        }
#line 371 "simplify_goal_unify.m"
        {
#line 371 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_goal_unify__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_35_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Index_15));
#line 371 "simplify_goal_unify.m"
        }
#line 370 "simplify_goal_unify.m"
        {
#line 370 "simplify_goal_unify.m"
          check_hlds__polymorphism__gen_extract_type_info_13_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_28, check_hlds__simplify__simplify_goal_unify__TypeVar_7, check_hlds__simplify__simplify_goal_unify__Kind_8, check_hlds__simplify__simplify_goal_unify__TypeClassInfoVar_14, check_hlds__simplify__simplify_goal_unify__V_35_35, check_hlds__simplify__simplify_goal_unify__Goals_10, check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9, check_hlds__simplify__simplify_goal_unify__VarSet0_29, &check_hlds__simplify__simplify_goal_unify__VarSet_32, check_hlds__simplify__simplify_goal_unify__VarTypes0_30, &check_hlds__simplify__simplify_goal_unify__VarTypes_33, check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_31, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps_34);
        }
#line 374 "simplify_goal_unify.m"
        {
#line 374 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_unify__VarTypes_33, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_16, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_26_36);
        }
#line 375 "simplify_goal_unify.m"
        {
#line 375 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_unify__VarSet_32, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_26_36, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_27_37);
        }
#line 376 "simplify_goal_unify.m"
        {
#line 376 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_unify__RttiVarMaps_34, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_27_37, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_17);
#line 376 "simplify_goal_unify.m"
          return;
        }
#line 354 "simplify_goal_unify.m"
      }
#line 345 "simplify_goal_unify.m"
  }
#line 342 "simplify_goal_unify.m"
}

#line 292 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(
#line 292 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__Types_6,
#line 292 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoVars_7,
#line 292 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoGoals_8,
#line 292 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_25,
#line 292 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_26)
#line 292 "simplify_goal_unify.m"
{
#line 295 "simplify_goal_unify.m"
  {
#line 295 "simplify_goal_unify.m"
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__VarSet0_10;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes0_11;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_12;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo0_13;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__PredId_14;
#line 295 "simplify_goal_unify.m"
    MR_Integer check_hlds__simplify__simplify_goal_unify__ProcId_15;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__Context_19;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo1_20;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes_21;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__VarSet_22;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps_23;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_24;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_27_27;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_28_28;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_29_29;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_30_30;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_31_31;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_32_32;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_33_33;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_34_34;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_35_35;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_36_36;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_37_37;
#line 295 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_38_38;

#line 297 "simplify_goal_unify.m"
    {
#line 297 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_25, &check_hlds__simplify__simplify_goal_unify__VarSet0_10);
    }
#line 298 "simplify_goal_unify.m"
    {
#line 298 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_25, &check_hlds__simplify__simplify_goal_unify__VarTypes0_11);
    }
#line 299 "simplify_goal_unify.m"
    {
#line 299 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_25, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_12);
    }
#line 300 "simplify_goal_unify.m"
    {
#line 300 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_25, &check_hlds__simplify__simplify_goal_unify__ModuleInfo0_13);
    }
#line 301 "simplify_goal_unify.m"
    {
#line 301 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_25, &check_hlds__simplify__simplify_goal_unify__PredId_14, &check_hlds__simplify__simplify_goal_unify__ProcId_15);
    }
#line 315 "simplify_goal_unify.m"
    {
#line 315 "simplify_goal_unify.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo0_13, check_hlds__simplify__simplify_goal_unify__PredId_14, check_hlds__simplify__simplify_goal_unify__ProcId_15, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_27_27, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_28_28);
    }
#line 317 "simplify_goal_unify.m"
    {
#line 317 "simplify_goal_unify.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_goal_unify__VarTypes0_11, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_28_28, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_29_29);
    }
#line 318 "simplify_goal_unify.m"
    {
#line 318 "simplify_goal_unify.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_unify__VarSet0_10, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_29_29, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_30_30);
    }
#line 319 "simplify_goal_unify.m"
    {
#line 319 "simplify_goal_unify.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_12, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_30_30, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_31_31);
    }
#line 322 "simplify_goal_unify.m"
    {
#line 322 "simplify_goal_unify.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo0_13, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_27_27, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_31_31, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_32_32);
    }
#line 323 "simplify_goal_unify.m"
    {
#line 323 "simplify_goal_unify.m"
      mercury__term__context_init_1_p_0(&check_hlds__simplify__simplify_goal_unify__Context_19);
    }
#line 324 "simplify_goal_unify.m"
    {
#line 324 "simplify_goal_unify.m"
      check_hlds__polymorphism__polymorphism_make_type_info_vars_6_p_0(check_hlds__simplify__simplify_goal_unify__Types_6, check_hlds__simplify__simplify_goal_unify__Context_19, check_hlds__simplify__simplify_goal_unify__TypeInfoVars_7, check_hlds__simplify__simplify_goal_unify__TypeInfoGoals_8, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_32_32, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_33_33);
    }
#line 326 "simplify_goal_unify.m"
    {
#line 326 "simplify_goal_unify.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_33_33, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_27_27, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_34_34, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_31_31, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_35_35, &check_hlds__simplify__simplify_goal_unify__ModuleInfo1_20);
    }
#line 328 "simplify_goal_unify.m"
    {
#line 328 "simplify_goal_unify.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_35_35, &check_hlds__simplify__simplify_goal_unify__VarTypes_21);
    }
#line 329 "simplify_goal_unify.m"
    {
#line 329 "simplify_goal_unify.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_35_35, &check_hlds__simplify__simplify_goal_unify__VarSet_22);
    }
#line 330 "simplify_goal_unify.m"
    {
#line 330 "simplify_goal_unify.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_35_35, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps_23);
    }
#line 331 "simplify_goal_unify.m"
    {
#line 331 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_unify__VarTypes_21, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_25, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_36_36);
    }
#line 332 "simplify_goal_unify.m"
    {
#line 332 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_unify__VarSet_22, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_36_36, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_37_37);
    }
#line 333 "simplify_goal_unify.m"
    {
#line 333 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_unify__RttiVarMaps_23, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_37_37, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_38_38);
    }
#line 337 "simplify_goal_unify.m"
    {
#line 337 "simplify_goal_unify.m"
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__simplify__simplify_goal_unify__PredId_14, check_hlds__simplify__simplify_goal_unify__ProcId_15, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_34_34, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_35_35, check_hlds__simplify__simplify_goal_unify__ModuleInfo1_20, &check_hlds__simplify__simplify_goal_unify__ModuleInfo_24);
    }
#line 340 "simplify_goal_unify.m"
    {
#line 340 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_24, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_38_38, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_26);
#line 340 "simplify_goal_unify.m"
      return;
    }
#line 295 "simplify_goal_unify.m"
  }
#line 292 "simplify_goal_unify.m"
}

#line 280 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_builtin_compound_eq_5_p_0(
#line 280 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_6,
#line 280 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_7,
#line 280 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_8,
#line 280 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_9,
#line 280 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__Call_10)
#line 280 "simplify_goal_unify.m"
{
#line 283 "simplify_goal_unify.m"
  {
#line 283 "simplify_goal_unify.m"
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
#line 283 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__Context_11;
#line 283 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_12_12;
#line 283 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_18_18;
#line 283 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_20_20;
#line 283 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_21_21;

#line 284 "simplify_goal_unify.m"
    {
#line 284 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__Context_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo_9);
    }
#line 285 "simplify_goal_unify.m"
    {
#line 285 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_12_12 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 287 "simplify_goal_unify.m"
    {
#line 287 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_21_21, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_7));
#line 287 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "simplify_goal_unify.m"
    }
#line 287 "simplify_goal_unify.m"
    {
#line 287 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_18_18, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_6));
#line 287 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_18_18, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_21_21));
#line 287 "simplify_goal_unify.m"
    }
#line 287 "simplify_goal_unify.m"
    {
#line 287 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_20_20 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 285 "simplify_goal_unify.m"
    {
#line 285 "simplify_goal_unify.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_unify__V_12_12, (MR_String) "builtin_compound_eq", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 0, check_hlds__simplify__simplify_goal_unify__V_18_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_unify__V_20_20, check_hlds__simplify__simplify_goal_unify__ModuleInfo_8, check_hlds__simplify__simplify_goal_unify__Context_11, check_hlds__simplify__simplify_goal_unify__Call_10);
#line 285 "simplify_goal_unify.m"
      return;
    }
#line 283 "simplify_goal_unify.m"
  }
#line 280 "simplify_goal_unify.m"
}

#line 256 "simplify_goal_unify.m"
static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeCtor_11,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_12,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_13,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_14,
#line 256 "simplify_goal_unify.m"
  MR_Integer check_hlds__simplify__simplify_goal_unify__ProcId_15,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_16,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__Context_17,
#line 256 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_18,
#line 256 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__CallExpr_19,
#line 256 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__CallGoalInfo_20)
#line 256 "simplify_goal_unify.m"
{
#line 262 "simplify_goal_unify.m"
  {
#line 262 "simplify_goal_unify.m"
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__ArgVars_21;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__SpecialPredMap_22;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__PredId_23;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__PredInfo_24;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleName_25;
#line 262 "simplify_goal_unify.m"
    MR_String check_hlds__simplify__simplify_goal_unify__PredName_26;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__SymName_27;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__CallContext_28;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__NonLocals0_29;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__NonLocals_30;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_31_31;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_32_32;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_34_34;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_36_36;
#line 262 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__V_38_38;
#line 266 "simplify_goal_unify.m"
    MR_Box check_hlds__simplify__simplify_goal_unify__conv0_PredId_23;

#line 264 "simplify_goal_unify.m"
    {
#line 264 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_32_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_14));
#line 264 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "simplify_goal_unify.m"
    }
#line 264 "simplify_goal_unify.m"
    {
#line 264 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_31_31, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_13));
#line 264 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_31_31, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_32_32));
#line 264 "simplify_goal_unify.m"
    }
#line 264 "simplify_goal_unify.m"
    {
#line 264 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__ArgVars_21 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__simplify_goal_unify_scalar_common_1[0], check_hlds__simplify__simplify_goal_unify__TypeInfoVars_12, check_hlds__simplify__simplify_goal_unify__V_31_31);
    }
#line 265 "simplify_goal_unify.m"
    {
#line 265 "simplify_goal_unify.m"
      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_16, &check_hlds__simplify__simplify_goal_unify__SpecialPredMap_22);
    }
#line 266 "simplify_goal_unify.m"
    {
#line 266 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_34_34, 0) = ((MR_Box) ((MR_Integer) 0));
#line 266 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_34_34, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__TypeCtor_11));
#line 266 "simplify_goal_unify.m"
    }
#line 266 "simplify_goal_unify.m"
    {
#line 266 "simplify_goal_unify.m"
      mercury__map__lookup_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_unify_scalar_common_2[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__simplify__simplify_goal_unify__SpecialPredMap_22, ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_34_34)), &check_hlds__simplify__simplify_goal_unify__conv0_PredId_23);
    }
#line 266 "simplify_goal_unify.m"
    check_hlds__simplify__simplify_goal_unify__PredId_23 = ((MR_Word) check_hlds__simplify__simplify_goal_unify__conv0_PredId_23);
#line 267 "simplify_goal_unify.m"
    {
#line 267 "simplify_goal_unify.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_16, check_hlds__simplify__simplify_goal_unify__PredId_23, &check_hlds__simplify__simplify_goal_unify__PredInfo_24);
    }
#line 268 "simplify_goal_unify.m"
    {
#line 268 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__ModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_unify__PredInfo_24);
    }
#line 269 "simplify_goal_unify.m"
    {
#line 269 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__PredName_26 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_unify__PredInfo_24);
    }
#line 270 "simplify_goal_unify.m"
    {
#line 270 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__SymName_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__SymName_27, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__ModuleName_25));
#line 270 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__SymName_27, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__PredName_26));
#line 270 "simplify_goal_unify.m"
    }
#line 271 "simplify_goal_unify.m"
    {
#line 271 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 271 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_36_36, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_14));
#line 271 "simplify_goal_unify.m"
    }
#line 271 "simplify_goal_unify.m"
    {
#line 271 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__CallContext_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 271 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__CallContext_28, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_13));
#line 271 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__CallContext_28, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_36_36));
#line 271 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__CallContext_28, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Context_17));
#line 271 "simplify_goal_unify.m"
    }
#line 273 "simplify_goal_unify.m"
    {
#line 273 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 273 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__CallContext_28));
#line 273 "simplify_goal_unify.m"
    }
#line 272 "simplify_goal_unify.m"
    {
#line 272 "simplify_goal_unify.m"
      MR_Word base;
#line 272 "simplify_goal_unify.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 272 "simplify_goal_unify.m"
      *check_hlds__simplify__simplify_goal_unify__CallExpr_19 = base;
#line 272 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__PredId_23));
#line 272 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__ProcId_15));
#line 272 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__ArgVars_21));
#line 272 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) ((MR_Integer) 2));
#line 272 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_38_38));
#line 272 "simplify_goal_unify.m"
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__SymName_27));
#line 272 "simplify_goal_unify.m"
    }
#line 276 "simplify_goal_unify.m"
    {
#line 276 "simplify_goal_unify.m"
      check_hlds__simplify__simplify_goal_unify__NonLocals0_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo0_18);
    }
#line 277 "simplify_goal_unify.m"
    {
#line 277 "simplify_goal_unify.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_unify__TypeInfoVars_12, check_hlds__simplify__simplify_goal_unify__NonLocals0_29, &check_hlds__simplify__simplify_goal_unify__NonLocals_30);
    }
#line 278 "simplify_goal_unify.m"
    {
#line 278 "simplify_goal_unify.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_unify__NonLocals_30, check_hlds__simplify__simplify_goal_unify__GoalInfo0_18, check_hlds__simplify__simplify_goal_unify__CallGoalInfo_20);
#line 278 "simplify_goal_unify.m"
      return;
    }
#line 262 "simplify_goal_unify.m"
  }
#line 256 "simplify_goal_unify.m"
}

#line 24 "simplify_goal_unify.m"
void MR_CALL 
check_hlds__simplify__simplify_goal_unify__simplify_goal_unify_10_p_0(
#line 24 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalExpr0_11,
#line 24 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__GoalExpr_12,
#line 24 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_13,
#line 24 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__GoalInfo_14,
#line 24 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__NestedContext0_15,
#line 24 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__InstMap0_16,
#line 24 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60,
#line 24 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61,
#line 24 "simplify_goal_unify.m"
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62,
#line 24 "simplify_goal_unify.m"
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63)
#line 24 "simplify_goal_unify.m"
{
#line 67 "simplify_goal_unify.m"
  {
#line 67 "simplify_goal_unify.m"
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
#line 67 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__LT0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 0)));
#line 67 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__RT0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 1)));
#line 67 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__M_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 2)));
#line 67 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__U0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 3)));
#line 67 "simplify_goal_unify.m"
    MR_Word check_hlds__simplify__simplify_goal_unify__C_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 4)));

#line 105 "simplify_goal_unify.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__RT0_20)) == (MR_mktag((MR_Integer) 2))))
#line 71 "simplify_goal_unify.m"
      {
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__Purity_24 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__Groundness_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__PredOrFunc_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__NonLocals_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 2)));
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 3)));
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__Modes_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 4)));
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__LambdaDeclaredDet_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 5)));
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__LambdaGoal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 6)));
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__LambdaCodeModel_33;
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34;
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__InsideDuplForSwitch_36;
#line 71 "simplify_goal_unify.m"
        MR_Integer check_hlds__simplify__simplify_goal_unify__NumEnclosingLambdas0_37;
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39;
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_40;
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__LambdaInstMap0_41;
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__LambdaCommon0_42;
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__LambdaGoal_43;
#line 71 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__RT_45;
#line 71 "simplify_goal_unify.m"
        MR_Integer check_hlds__simplify__simplify_goal_unify__V_75_75;
#line 83 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify___ProcModelNon_38;
#line 98 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__V_44_44;

#line 72 "simplify_goal_unify.m"
        {
#line 72 "simplify_goal_unify.m"
          hlds__code_model__determinism_to_code_model_2_p_0(check_hlds__simplify__simplify_goal_unify__LambdaDeclaredDet_31, &check_hlds__simplify__simplify_goal_unify__LambdaCodeModel_33);
        }
#line 78 "simplify_goal_unify.m"
        if ((check_hlds__simplify__simplify_goal_unify__LambdaCodeModel_33 == (MR_Integer) 2))
#line 79 "simplify_goal_unify.m"
          {
#line 79 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__Context_35;
#line 79 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__V_74_74;

#line 80 "simplify_goal_unify.m"
            {
#line 80 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo0_13);
            }
#line 81 "simplify_goal_unify.m"
            {
#line 81 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 81 "simplify_goal_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_74_74, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Context_35));
#line 81 "simplify_goal_unify.m"
            }
#line 81 "simplify_goal_unify.m"
            {
#line 81 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 81 "simplify_goal_unify.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_74_74));
#line 81 "simplify_goal_unify.m"
            }
#line 79 "simplify_goal_unify.m"
          }
#line 78 "simplify_goal_unify.m"
        else
#line 77 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 83 "simplify_goal_unify.m"
        check_hlds__simplify__simplify_goal_unify__InsideDuplForSwitch_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__NestedContext0_15, (MR_Integer) 0)));
#line 83 "simplify_goal_unify.m"
        check_hlds__simplify__simplify_goal_unify__NumEnclosingLambdas0_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__NestedContext0_15, (MR_Integer) 1)));
#line 83 "simplify_goal_unify.m"
        check_hlds__simplify__simplify_goal_unify___ProcModelNon_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__NestedContext0_15, (MR_Integer) 2)));
#line 86 "simplify_goal_unify.m"
        check_hlds__simplify__simplify_goal_unify__V_75_75 = (check_hlds__simplify__simplify_goal_unify__NumEnclosingLambdas0_37 + (MR_Integer) 1);
#line 85 "simplify_goal_unify.m"
        {
#line 85 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 85 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__InsideDuplForSwitch_36));
#line 85 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_75_75));
#line 85 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34));
#line 85 "simplify_goal_unify.m"
        }
#line 88 "simplify_goal_unify.m"
        {
#line 88 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, &check_hlds__simplify__simplify_goal_unify__ModuleInfo_40);
        }
#line 89 "simplify_goal_unify.m"
        {
#line 89 "simplify_goal_unify.m"
          hlds__instmap__pre_lambda_update_5_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_40, check_hlds__simplify__simplify_goal_unify__Vars_29, check_hlds__simplify__simplify_goal_unify__Modes_30, check_hlds__simplify__simplify_goal_unify__InstMap0_16, &check_hlds__simplify__simplify_goal_unify__LambdaInstMap0_41);
        }
#line 95 "simplify_goal_unify.m"
        {
#line 95 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_goal_unify__LambdaCommon0_42 = check_hlds__simplify__common__common_info_init_0_f_0();
        }
#line 98 "simplify_goal_unify.m"
        {
#line 98 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_unify__LambdaGoal0_32, &check_hlds__simplify__simplify_goal_unify__LambdaGoal_43, check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39, check_hlds__simplify__simplify_goal_unify__LambdaInstMap0_41, check_hlds__simplify__simplify_goal_unify__LambdaCommon0_42, &check_hlds__simplify__simplify_goal_unify__V_44_44, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63);
        }
#line 101 "simplify_goal_unify.m"
        {
#line 101 "simplify_goal_unify.m"
          check_hlds__simplify__simplify_goal_unify__RT_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 101 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT_45, 0) = ((MR_Box) ((check_hlds__simplify__simplify_goal_unify__Purity_24 | ((((check_hlds__simplify__simplify_goal_unify__Groundness_25 << (MR_Integer) 2)) | ((check_hlds__simplify__simplify_goal_unify__PredOrFunc_26 << (MR_Integer) 3)))))));
#line 101 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT_45, 1) = (MR_Integer) 0;
#line 101 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT_45, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__NonLocals_28));
#line 101 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT_45, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Vars_29));
#line 101 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT_45, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Modes_30));
#line 101 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT_45, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__LambdaDeclaredDet_31));
#line 101 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RT_45, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__LambdaGoal_43));
#line 101 "simplify_goal_unify.m"
        }
#line 103 "simplify_goal_unify.m"
        {
#line 103 "simplify_goal_unify.m"
          MR_Word base;
#line 103 "simplify_goal_unify.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 103 "simplify_goal_unify.m"
          *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = base;
#line 103 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__LT0_19));
#line 103 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__RT_45));
#line 103 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__M_21));
#line 103 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__U0_22));
#line 103 "simplify_goal_unify.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__C_23));
#line 103 "simplify_goal_unify.m"
        }
#line 104 "simplify_goal_unify.m"
        *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = check_hlds__simplify__simplify_goal_unify__GoalInfo0_13;
#line 104 "simplify_goal_unify.m"
        *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60;
#line 71 "simplify_goal_unify.m"
      }
#line 105 "simplify_goal_unify.m"
    else
#line 115 "simplify_goal_unify.m"
      {
#line 111 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfo_82_82;
#line 111 "simplify_goal_unify.m"
        MR_Word check_hlds__simplify__simplify_goal_unify__V_81_81;

#line 111 "simplify_goal_unify.m"
        check_hlds__simplify__simplify_goal_unify__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__RT0_20)) == (MR_mktag((MR_Integer) 0)));
#line 111 "simplify_goal_unify.m"
        if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 111 "simplify_goal_unify.m"
          {
#line 111 "simplify_goal_unify.m"
            check_hlds__simplify__simplify_goal_unify__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 0)));
#line 1691 "check_hlds.simplify.simplify_goal_unify.c"
            check_hlds__simplify__simplify_goal_unify__TypeInfo_82_82 = (MR_Word) &check_hlds__simplify__simplify_goal_unify_scalar_common_1[0];
#line 111 "simplify_goal_unify.m"
            {
#line 111 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_goal_unify__TypeInfo_82_82, ((MR_Box) (check_hlds__simplify__simplify_goal_unify__LT0_19)), ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_81_81)));
            }
#line 111 "simplify_goal_unify.m"
          }
#line 115 "simplify_goal_unify.m"
        if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 113 "simplify_goal_unify.m"
          {
#line 113 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__V_64_64;
#line 113 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__Context_78;

#line 113 "simplify_goal_unify.m"
            {
#line 113 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__Context_78 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo0_13);
            }
#line 114 "simplify_goal_unify.m"
            {
#line 114 "simplify_goal_unify.m"
              check_hlds__simplify__simplify_goal_unify__V_64_64 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_unify__Context_78);
            }
#line 114 "simplify_goal_unify.m"
            *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_64_64, (MR_Integer) 0)));
#line 114 "simplify_goal_unify.m"
            *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_64_64, (MR_Integer) 1)));
#line 114 "simplify_goal_unify.m"
            *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62;
#line 114 "simplify_goal_unify.m"
            *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60;
#line 113 "simplify_goal_unify.m"
          }
#line 115 "simplify_goal_unify.m"
        else
#line 128 "simplify_goal_unify.m"
          {
#line 128 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__UniMode_50;
#line 128 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__CanFail_51;
#line 116 "simplify_goal_unify.m"
            MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_52;

#line 116 "simplify_goal_unify.m"
            check_hlds__simplify__simplify_goal_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__U0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_unify__U0_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 116 "simplify_goal_unify.m"
            if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 116 "simplify_goal_unify.m"
              {
#line 116 "simplify_goal_unify.m"
                check_hlds__simplify__simplify_goal_unify__UniMode_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_unify__U0_22, (MR_Integer) 1)));
#line 116 "simplify_goal_unify.m"
                check_hlds__simplify__simplify_goal_unify__CanFail_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_unify__U0_22, (MR_Integer) 2)));
#line 116 "simplify_goal_unify.m"
                check_hlds__simplify__simplify_goal_unify__TypeInfoVars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_unify__U0_22, (MR_Integer) 3)));
#line 124 "simplify_goal_unify.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__RT0_20)) == (MR_mktag((MR_Integer) 1))))
#line 125 "simplify_goal_unify.m"
                  {
#line 126 "simplify_goal_unify.m"
                    {
#line 126 "simplify_goal_unify.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_unify", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.simplify_goal_unify\'/10", (MR_String) "invalid RHS for complicated unify");
#line 126 "simplify_goal_unify.m"
                      return;
                    }
#line 125 "simplify_goal_unify.m"
                  }
#line 124 "simplify_goal_unify.m"
                else
#line 119 "simplify_goal_unify.m"
                  {
#line 119 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__V_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__RT0_20, (MR_Integer) 0)));
#line 119 "simplify_goal_unify.m"
                    MR_Word check_hlds__simplify__simplify_goal_unify__GoalExpr1_54;

#line 120 "simplify_goal_unify.m"
                    {
#line 120 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(check_hlds__simplify__simplify_goal_unify__LT0_19, check_hlds__simplify__simplify_goal_unify__V_53, check_hlds__simplify__simplify_goal_unify__UniMode_50, check_hlds__simplify__simplify_goal_unify__CanFail_51, check_hlds__simplify__simplify_goal_unify__C_23, check_hlds__simplify__simplify_goal_unify__GoalInfo0_13, &check_hlds__simplify__simplify_goal_unify__GoalExpr1_54, check_hlds__simplify__simplify_goal_unify__NestedContext0_15, check_hlds__simplify__simplify_goal_unify__InstMap0_16, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63);
                    }
#line 123 "simplify_goal_unify.m"
                    *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__GoalExpr1_54, (MR_Integer) 0)));
#line 123 "simplify_goal_unify.m"
                    *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__GoalExpr1_54, (MR_Integer) 1)));
#line 119 "simplify_goal_unify.m"
                  }
#line 116 "simplify_goal_unify.m"
              }
#line 116 "simplify_goal_unify.m"
            else
#line 133 "simplify_goal_unify.m"
              {
#line 129 "simplify_goal_unify.m"
                {
#line 129 "simplify_goal_unify.m"
                  check_hlds__simplify__simplify_goal_unify__succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62);
                }
#line 133 "simplify_goal_unify.m"
                if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 131 "simplify_goal_unify.m"
                  {
#line 131 "simplify_goal_unify.m"
                    check_hlds__simplify__common__common_optimise_unification_10_p_0(check_hlds__simplify__simplify_goal_unify__U0_22, check_hlds__simplify__simplify_goal_unify__M_21, check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, check_hlds__simplify__simplify_goal_unify__GoalExpr_12, check_hlds__simplify__simplify_goal_unify__GoalInfo0_13, check_hlds__simplify__simplify_goal_unify__GoalInfo_14, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63);
#line 131 "simplify_goal_unify.m"
                    return;
                  }
#line 133 "simplify_goal_unify.m"
                else
#line 146 "simplify_goal_unify.m"
                  {
#line 134 "simplify_goal_unify.m"
                    {
#line 134 "simplify_goal_unify.m"
                      check_hlds__simplify__simplify_goal_unify__succeeded = check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62);
                    }
#line 135 "simplify_goal_unify.m"
                    if (!(check_hlds__simplify__simplify_goal_unify__succeeded))
#line 135 "simplify_goal_unify.m"
                      {
#line 135 "simplify_goal_unify.m"
                        check_hlds__simplify__simplify_goal_unify__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62);
                      }
#line 146 "simplify_goal_unify.m"
                    if (check_hlds__simplify__simplify_goal_unify__succeeded)
#line 143 "simplify_goal_unify.m"
                      {
#line 142 "simplify_goal_unify.m"
                        MR_Word check_hlds__simplify__simplify_goal_unify___GoalExpr1_58;
#line 142 "simplify_goal_unify.m"
                        MR_Word check_hlds__simplify__simplify_goal_unify___GoalInfo1_59;

#line 142 "simplify_goal_unify.m"
                        {
#line 142 "simplify_goal_unify.m"
                          check_hlds__simplify__common__common_optimise_unification_10_p_0(check_hlds__simplify__simplify_goal_unify__U0_22, check_hlds__simplify__simplify_goal_unify__M_21, check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, &check_hlds__simplify__simplify_goal_unify___GoalExpr1_58, check_hlds__simplify__simplify_goal_unify__GoalInfo0_13, &check_hlds__simplify__simplify_goal_unify___GoalInfo1_59, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63);
                        }
#line 144 "simplify_goal_unify.m"
                        *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = check_hlds__simplify__simplify_goal_unify__GoalExpr0_11;
#line 145 "simplify_goal_unify.m"
                        *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = check_hlds__simplify__simplify_goal_unify__GoalInfo0_13;
#line 143 "simplify_goal_unify.m"
                      }
#line 146 "simplify_goal_unify.m"
                    else
#line 147 "simplify_goal_unify.m"
                      {
#line 147 "simplify_goal_unify.m"
                        *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = check_hlds__simplify__simplify_goal_unify__GoalExpr0_11;
#line 148 "simplify_goal_unify.m"
                        *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = check_hlds__simplify__simplify_goal_unify__GoalInfo0_13;
#line 148 "simplify_goal_unify.m"
                        *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62;
#line 148 "simplify_goal_unify.m"
                        *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60;
#line 147 "simplify_goal_unify.m"
                      }
#line 146 "simplify_goal_unify.m"
                  }
#line 133 "simplify_goal_unify.m"
              }
#line 128 "simplify_goal_unify.m"
          }
#line 115 "simplify_goal_unify.m"
      }
#line 67 "simplify_goal_unify.m"
  }
#line 24 "simplify_goal_unify.m"
}

void mercury__check_hlds__simplify__simplify_goal_unify__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_unify__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_unify__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_goal_unify. */
