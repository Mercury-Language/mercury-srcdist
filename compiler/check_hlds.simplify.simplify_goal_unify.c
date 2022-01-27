/*
** Automatically generated from `simplify_goal_unify.m'
** by the Mercury compiler,
** version rotd-2016-06-09
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


/* :- module check_hlds.simplify.simplify_goal_unify. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal_unify__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_unify.mih"


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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_unify__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9,
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_10,
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_11,
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_12,
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_15,
  MR_Word * check_hlds__simplify__simplify_goal_unify__Call_16);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_15,
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_16,
  MR_Word check_hlds__simplify__simplify_goal_unify__UnifyMode_17,
  MR_Word check_hlds__simplify__simplify_goal_unify__CanFail_18,
  MR_Word check_hlds__simplify__simplify_goal_unify__UnifyContext_20,
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_21,
  MR_Word * check_hlds__simplify__simplify_goal_unify__Goal_22,
  MR_Word check_hlds__simplify__simplify_goal_unify__NestedContext0_23,
  MR_Word check_hlds__simplify__simplify_goal_unify__InstMap0_24,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__IntroducedFrom__pred__make_type_info_vars__335__1_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__PolySpecs_20,
  MR_Word check_hlds__simplify__simplify_goal_unify__HeadVar__2_41);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__get_type_info_locn_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeVar_8,
  MR_Word check_hlds__simplify__simplify_goal_unify__Kind_9,
  MR_Word check_hlds__simplify__simplify_goal_unify__Context_10,
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoVar_11,
  MR_Word * check_hlds__simplify__simplify_goal_unify__Goals_12,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_18,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_19);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_unify__closure_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__Types_6,
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoVars_7,
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoGoals_8,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_builtin_compound_eq_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_6,
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_7,
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_8,
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_9,
  MR_Word * check_hlds__simplify__simplify_goal_unify__Call_10);

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeCtor_11,
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_12,
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_13,
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_14,
  MR_Integer check_hlds__simplify__simplify_goal_unify__ProcId_15,
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_16,
  MR_Word check_hlds__simplify__simplify_goal_unify__Context_17,
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_18,
  MR_Word * check_hlds__simplify__simplify_goal_unify__CallExpr_19,
  MR_Word * check_hlds__simplify__simplify_goal_unify__CallGoalInfo_20);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_3[1][1];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_unify__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_unify__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_unify_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_unify__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9,
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_10,
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_11,
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_12,
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_15,
  MR_Word * check_hlds__simplify__simplify_goal_unify__Call_16)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_unify__ArgVars_17;
    MR_Word check_hlds__simplify__simplify_goal_unify__Context_18;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_19_19;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_20_20;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_22_22;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_29_29;

    {
      check_hlds__simplify__simplify_goal_unify__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_20_20, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_11));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_19_19, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_10));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_19_19, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_20_20));
    }
    {
      check_hlds__simplify__simplify_goal_unify__ArgVars_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__ArgVars_17, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__TypeInfoVar_9));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__ArgVars_17, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_19_19));
    }
    {
      check_hlds__simplify__simplify_goal_unify__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo_15);
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_22_22 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_29_29 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_unify__V_22_22, (MR_String) "unify", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_unify_scalar_common_3[0]), (MR_Integer) 1, (MR_Integer) 0, check_hlds__simplify__simplify_goal_unify__ArgVars_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_unify__V_29_29, check_hlds__simplify__simplify_goal_unify__ModuleInfo_12, check_hlds__simplify__simplify_goal_unify__Context_18, check_hlds__simplify__simplify_goal_unify__Call_16);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_15,
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_16,
  MR_Word check_hlds__simplify__simplify_goal_unify__UnifyMode_17,
  MR_Word check_hlds__simplify__simplify_goal_unify__CanFail_18,
  MR_Word check_hlds__simplify__simplify_goal_unify__UnifyContext_20,
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_21,
  MR_Word * check_hlds__simplify__simplify_goal_unify__Goal_22,
  MR_Word check_hlds__simplify__simplify_goal_unify__NestedContext0_23,
  MR_Word check_hlds__simplify__simplify_goal_unify__InstMap0_24,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_27;
    MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes_28;
    MR_Word check_hlds__simplify__simplify_goal_unify__Type_29;
    MR_Word check_hlds__simplify__simplify_goal_unify__ExtraGoals_34;
    MR_Word check_hlds__simplify__simplify_goal_unify__Call_35;
    MR_Word check_hlds__simplify__simplify_goal_unify__Conjuncts_51;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_85_85;
    MR_Word check_hlds__simplify__simplify_goal_unify__TypeVar_30;
    MR_Word check_hlds__simplify__simplify_goal_unify__Kind_31;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, &check_hlds__simplify__simplify_goal_unify__ModuleInfo_27);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, &check_hlds__simplify__simplify_goal_unify__VarTypes_28);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_unify__VarTypes_28, check_hlds__simplify__simplify_goal_unify__XVar_15, &check_hlds__simplify__simplify_goal_unify__Type_29);
    }
    check_hlds__simplify__simplify_goal_unify__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__Type_29)) == (MR_mktag((MR_Integer) 0)));
    if (check_hlds__simplify__simplify_goal_unify__succeeded)
      {
        check_hlds__simplify__simplify_goal_unify__TypeVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Type_29, (MR_Integer) 0)));
        check_hlds__simplify__simplify_goal_unify__Kind_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Type_29, (MR_Integer) 1)));
        {
          MR_Word check_hlds__simplify__simplify_goal_unify__Context_32;
          MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVar_33;

          {
            check_hlds__simplify__simplify_goal_unify__Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo0_21);
          }
          {
            check_hlds__simplify__simplify_goal_unify__get_type_info_locn_7_p_0(check_hlds__simplify__simplify_goal_unify__TypeVar_30, check_hlds__simplify__simplify_goal_unify__Kind_31, check_hlds__simplify__simplify_goal_unify__Context_32, &check_hlds__simplify__simplify_goal_unify__TypeInfoVar_33, &check_hlds__simplify__simplify_goal_unify__ExtraGoals_34, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);
          }
          {
            check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(check_hlds__simplify__simplify_goal_unify__TypeInfoVar_33, check_hlds__simplify__simplify_goal_unify__XVar_15, check_hlds__simplify__simplify_goal_unify__YVar_16, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__Call_35);
          }
          *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52;
        }
      }
    else
      {
        {
          check_hlds__simplify__simplify_goal_unify__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(check_hlds__simplify__simplify_goal_unify__Type_29);
        }
        if (check_hlds__simplify__simplify_goal_unify__succeeded)
          {
            MR_Word check_hlds__simplify__simplify_goal_unify__Call0_36;
            MR_Word check_hlds__simplify__simplify_goal_unify__Call1_38;
            MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_39;
            MR_Word check_hlds__simplify__simplify_goal_unify__V_57_57;
            MR_Word check_hlds__simplify__simplify_goal_unify__V_63_63;
            MR_Word check_hlds__simplify__simplify_goal_unify__V_65_65;
            MR_Word check_hlds__simplify__simplify_goal_unify__V_66_66;
            MR_Word check_hlds__simplify__simplify_goal_unify__V_68_68;
            MR_Word check_hlds__simplify__simplify_goal_unify__Context_87;
            MR_Word check_hlds__simplify__simplify_goal_unify__V_37_37;

            {
              check_hlds__simplify__simplify_goal_unify__Context_87 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo0_21);
            }
            {
              check_hlds__simplify__simplify_goal_unify__V_57_57 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            }
            {
              check_hlds__simplify__simplify_goal_unify__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_68_68, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_16));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__simplify__simplify_goal_unify__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_63_63, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_15));
              MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_63_63, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_68_68));
            }
            {
              check_hlds__simplify__simplify_goal_unify__V_65_65 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
            }
            {
              hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_unify__V_57_57, (MR_String) "builtin_unify_pred", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_unify_scalar_common_3[0]), (MR_Integer) 1, (MR_Integer) 0, check_hlds__simplify__simplify_goal_unify__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_unify__V_65_65, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__Context_87, &check_hlds__simplify__simplify_goal_unify__V_66_66);
            }
            check_hlds__simplify__simplify_goal_unify__Call0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_66_66, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_unify__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_66_66, (MR_Integer) 1)));
            {
              check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(check_hlds__simplify__simplify_goal_unify__Call0_36, &check_hlds__simplify__simplify_goal_unify__Call1_38, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__GoalInfo_39, check_hlds__simplify__simplify_goal_unify__NestedContext0_23, check_hlds__simplify__simplify_goal_unify__InstMap0_24, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);
            }
            {
              check_hlds__simplify__simplify_goal_unify__Call_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Call_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Call1_38));
              MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Call_35, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__GoalInfo_39));
            }
            check_hlds__simplify__simplify_goal_unify__ExtraGoals_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_unify__TypeCtor_40;
            MR_Word check_hlds__simplify__simplify_goal_unify__TypeArgs_41;
            MR_Word check_hlds__simplify__simplify_goal_unify__Detism_42;
            MR_Integer check_hlds__simplify__simplify_goal_unify__ProcId_43;
            MR_Word check_hlds__simplify__simplify_goal_unify__Globals_44;
            MR_Word check_hlds__simplify__simplify_goal_unify__SpecialPreds_45;
            MR_Word check_hlds__simplify__simplify_goal_unify__CanCompareCompoundValues_46;
            MR_Integer check_hlds__simplify__simplify_goal_unify__V_104_104;

            {
              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__simplify__simplify_goal_unify__Type_29, &check_hlds__simplify__simplify_goal_unify__TypeCtor_40, &check_hlds__simplify__simplify_goal_unify__TypeArgs_41);
            }
            {
              parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal_unify__Detism_42, check_hlds__simplify__simplify_goal_unify__CanFail_18, (MR_Integer) 1);
            }
            {
              check_hlds__unify_proc__lookup_mode_num_5_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__TypeCtor_40, check_hlds__simplify__simplify_goal_unify__UnifyMode_17, check_hlds__simplify__simplify_goal_unify__Detism_42, &check_hlds__simplify__simplify_goal_unify__ProcId_43);
            }
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, &check_hlds__simplify__simplify_goal_unify__Globals_44);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_unify__Globals_44, (MR_Integer) 273, &check_hlds__simplify__simplify_goal_unify__SpecialPreds_45);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_unify__Globals_44, (MR_Integer) 269, &check_hlds__simplify__simplify_goal_unify__CanCompareCompoundValues_46);
            }
            {
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__simplify__simplify_goal_unify__V_104_104);
            }
            check_hlds__simplify__simplify_goal_unify__succeeded = (check_hlds__simplify__simplify_goal_unify__ProcId_43 == check_hlds__simplify__simplify_goal_unify__V_104_104);
            if (check_hlds__simplify__simplify_goal_unify__succeeded)
              {
                check_hlds__simplify__simplify_goal_unify__succeeded = (check_hlds__simplify__simplify_goal_unify__CanCompareCompoundValues_46 == (MR_Integer) 1);
                if (check_hlds__simplify__simplify_goal_unify__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_unify__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__Type_29);
                  }
              }
            if (check_hlds__simplify__simplify_goal_unify__succeeded)
              {
                check_hlds__simplify__simplify_goal_unify__ExtraGoals_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  check_hlds__simplify__simplify_goal_unify__call_builtin_compound_eq_5_p_0(check_hlds__simplify__simplify_goal_unify__XVar_15, check_hlds__simplify__simplify_goal_unify__YVar_16, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__Call_35);
                }
                *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54;
                *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52;
              }
            else
              {
                MR_Integer check_hlds__simplify__simplify_goal_unify__V_105_105;

                {
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__simplify__simplify_goal_unify__V_105_105);
                }
                check_hlds__simplify__simplify_goal_unify__succeeded = (check_hlds__simplify__simplify_goal_unify__ProcId_43 == check_hlds__simplify__simplify_goal_unify__V_105_105);
                if (check_hlds__simplify__simplify_goal_unify__succeeded)
                  switch (check_hlds__simplify__simplify_goal_unify__SpecialPreds_45) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      check_hlds__simplify__simplify_goal_unify__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 1:
                      {
                        check_hlds__simplify__simplify_goal_unify__succeeded = hlds__special_pred__special_pred_is_generated_lazily_2_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__TypeCtor_40);
                      }
                      break;
                  }
                if (check_hlds__simplify__simplify_goal_unify__succeeded)
                  {
                    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47;
                    MR_Word check_hlds__simplify__simplify_goal_unify__V_75_75;
                    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVar_88;
                    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVarPrime_48;
                    MR_Word check_hlds__simplify__simplify_goal_unify__V_78_78;

                    {
                      check_hlds__simplify__simplify_goal_unify__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_75_75, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Type_29));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(check_hlds__simplify__simplify_goal_unify__V_75_75, &check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47, &check_hlds__simplify__simplify_goal_unify__ExtraGoals_34, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);
                    }
                    check_hlds__simplify__simplify_goal_unify__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__simplify_goal_unify__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_unify__TypeInfoVarPrime_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47, (MR_Integer) 0)));
                        check_hlds__simplify__simplify_goal_unify__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__TypeInfoVars_47, (MR_Integer) 1)));
                        check_hlds__simplify__simplify_goal_unify__succeeded = (check_hlds__simplify__simplify_goal_unify__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    if (check_hlds__simplify__simplify_goal_unify__succeeded)
                      check_hlds__simplify__simplify_goal_unify__TypeInfoVar_88 = check_hlds__simplify__simplify_goal_unify__TypeInfoVarPrime_48;
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_unify", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.process_compl_unify\'/14", (MR_String) "more than one typeinfo for one type var");
                          return;
                        }
                      }
                    {
                      check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_p_0(check_hlds__simplify__simplify_goal_unify__TypeInfoVar_88, check_hlds__simplify__simplify_goal_unify__XVar_15, check_hlds__simplify__simplify_goal_unify__YVar_16, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__Call_35);
                    }
                    *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52;
                  }
                else
                  {
                    MR_Word check_hlds__simplify__simplify_goal_unify__CallGoalInfo0_49;
                    MR_Word check_hlds__simplify__simplify_goal_unify__CallGoalInfo1_50;
                    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_82_82;
                    MR_Word check_hlds__simplify__simplify_goal_unify__Call0_89;
                    MR_Word check_hlds__simplify__simplify_goal_unify__Call1_90;
                    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_91;

                    {
                      check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(check_hlds__simplify__simplify_goal_unify__TypeArgs_41, &check_hlds__simplify__simplify_goal_unify__TypeInfoVars_91, &check_hlds__simplify__simplify_goal_unify__ExtraGoals_34, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_54, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_82_82);
                    }
                    {
                      check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(check_hlds__simplify__simplify_goal_unify__TypeCtor_40, check_hlds__simplify__simplify_goal_unify__TypeInfoVars_91, check_hlds__simplify__simplify_goal_unify__XVar_15, check_hlds__simplify__simplify_goal_unify__YVar_16, check_hlds__simplify__simplify_goal_unify__ProcId_43, check_hlds__simplify__simplify_goal_unify__ModuleInfo_27, check_hlds__simplify__simplify_goal_unify__UnifyContext_20, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, &check_hlds__simplify__simplify_goal_unify__Call0_89, &check_hlds__simplify__simplify_goal_unify__CallGoalInfo0_49);
                    }
                    {
                      check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(check_hlds__simplify__simplify_goal_unify__Call0_89, &check_hlds__simplify__simplify_goal_unify__Call1_90, check_hlds__simplify__simplify_goal_unify__CallGoalInfo0_49, &check_hlds__simplify__simplify_goal_unify__CallGoalInfo1_50, check_hlds__simplify__simplify_goal_unify__NestedContext0_23, check_hlds__simplify__simplify_goal_unify__InstMap0_24, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_52, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_53, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_82_82, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_55);
                    }
                    {
                      check_hlds__simplify__simplify_goal_unify__Call_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Call_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Call1_90));
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__Call_35, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__CallGoalInfo1_50));
                    }
                  }
              }
          }
      }
    {
      check_hlds__simplify__simplify_goal_unify__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_85_85, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Call_35));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_unify__Conjuncts_51 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_unify__ExtraGoals_34, check_hlds__simplify__simplify_goal_unify__V_85_85);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__simplify_goal_unify__Conjuncts_51, check_hlds__simplify__simplify_goal_unify__GoalInfo0_21, check_hlds__simplify__simplify_goal_unify__Goal_22);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__IntroducedFrom__pred__make_type_info_vars__335__1_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__PolySpecs_20,
  MR_Word check_hlds__simplify__simplify_goal_unify__HeadVar__2_41)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;

    {
      check_hlds__simplify__simplify_goal_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_unify_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__simplify_goal_unify__PolySpecs_20)), ((MR_Box) (check_hlds__simplify__simplify_goal_unify__HeadVar__2_41)));
    }
    return check_hlds__simplify__simplify_goal_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__get_type_info_locn_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeVar_8,
  MR_Word check_hlds__simplify__simplify_goal_unify__Kind_9,
  MR_Word check_hlds__simplify__simplify_goal_unify__Context_10,
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoVar_11,
  MR_Word * check_hlds__simplify__simplify_goal_unify__Goals_12,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_18,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_19)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps_14;
    MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_15;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_18, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps_14);
    }
    {
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(check_hlds__simplify__simplify_goal_unify__RttiVarMaps_14, check_hlds__simplify__simplify_goal_unify__TypeVar_8, &check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_15);
    }
    if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_15)) == (MR_mktag((MR_Integer) 0))))
      {
        *check_hlds__simplify__simplify_goal_unify__TypeInfoVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_15, (MR_Integer) 0)));
        *check_hlds__simplify__simplify_goal_unify__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_19 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_18;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_unify__TypeClassInfoVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_15, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_goal_unify__Index_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__TypeInfoLocn_15, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_31;
        MR_Word check_hlds__simplify__simplify_goal_unify__VarSet0_32;
        MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes0_33;
        MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_34;
        MR_Word check_hlds__simplify__simplify_goal_unify__VarSet_35;
        MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes_36;
        MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps_37;
        MR_Word check_hlds__simplify__simplify_goal_unify__V_38_38;
        MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_28_39;
        MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_29_40;

        {
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_18, &check_hlds__simplify__simplify_goal_unify__ModuleInfo_31);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_18, &check_hlds__simplify__simplify_goal_unify__VarSet0_32);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_18, &check_hlds__simplify__simplify_goal_unify__VarTypes0_33);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_18, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_34);
        }
        {
          check_hlds__simplify__simplify_goal_unify__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_38_38, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Index_17));
        }
        {
          check_hlds__polymorphism__gen_extract_type_info_14_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_31, check_hlds__simplify__simplify_goal_unify__TypeVar_8, check_hlds__simplify__simplify_goal_unify__Kind_9, check_hlds__simplify__simplify_goal_unify__TypeClassInfoVar_16, check_hlds__simplify__simplify_goal_unify__V_38_38, check_hlds__simplify__simplify_goal_unify__Context_10, check_hlds__simplify__simplify_goal_unify__Goals_12, check_hlds__simplify__simplify_goal_unify__TypeInfoVar_11, check_hlds__simplify__simplify_goal_unify__VarSet0_32, &check_hlds__simplify__simplify_goal_unify__VarSet_35, check_hlds__simplify__simplify_goal_unify__VarTypes0_33, &check_hlds__simplify__simplify_goal_unify__VarTypes_36, check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_34, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps_37);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_unify__VarTypes_36, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_18, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_28_39);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_unify__VarSet_35, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_28_39, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_29_40);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_unify__RttiVarMaps_37, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_29_40, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_19);
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_unify__closure_arg)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
    MR_Box check_hlds__simplify__simplify_goal_unify__closure = check_hlds__simplify__simplify_goal_unify__closure_arg;

    {
      check_hlds__simplify__simplify_goal_unify__succeeded = check_hlds__simplify__simplify_goal_unify__IntroducedFrom__pred__make_type_info_vars__335__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__closure, (MR_Integer) 4))));
    }
    return check_hlds__simplify__simplify_goal_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__Types_6,
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoVars_7,
  MR_Word * check_hlds__simplify__simplify_goal_unify__TypeInfoGoals_8,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_26,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_27)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_unify__VarSet0_10;
    MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes0_11;
    MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_12;
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo0_13;
    MR_Word check_hlds__simplify__simplify_goal_unify__PredId_14;
    MR_Integer check_hlds__simplify__simplify_goal_unify__ProcId_15;
    MR_Word check_hlds__simplify__simplify_goal_unify__Context_19;
    MR_Word check_hlds__simplify__simplify_goal_unify__PolySpecs_20;
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo1_21;
    MR_Word check_hlds__simplify__simplify_goal_unify__VarTypes_22;
    MR_Word check_hlds__simplify__simplify_goal_unify__VarSet_23;
    MR_Word check_hlds__simplify__simplify_goal_unify__RttiVarMaps_24;
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_25;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_28_28;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_29_29;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_30_30;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_31_31;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_32_32;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_33_33;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_34_34;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_35_35;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_36_36;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_37_37;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_42_42;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_43_43;
    MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_44_44;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_unify__VarSet0_10);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_unify__VarTypes0_11);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_12);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_unify__ModuleInfo0_13);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_unify__PredId_14, &check_hlds__simplify__simplify_goal_unify__ProcId_15);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo0_13, check_hlds__simplify__simplify_goal_unify__PredId_14, check_hlds__simplify__simplify_goal_unify__ProcId_15, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_28_28, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_29_29);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__simplify__simplify_goal_unify__VarTypes0_11, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_29_29, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_30_30);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_unify__VarSet0_10, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_30_30, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_31_31);
    }
    {
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_unify__RttiVarMaps0_12, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_31_31, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_32_32);
    }
    {
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo0_13, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_28_28, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_33_33);
    }
    {
      mercury__term__context_init_1_p_0(&check_hlds__simplify__simplify_goal_unify__Context_19);
    }
    {
      check_hlds__polymorphism__polymorphism_make_type_info_vars_6_p_0(check_hlds__simplify__simplify_goal_unify__Types_6, check_hlds__simplify__simplify_goal_unify__Context_19, check_hlds__simplify__simplify_goal_unify__TypeInfoVars_7, check_hlds__simplify__simplify_goal_unify__TypeInfoGoals_8, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_33_33, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_34_34);
    }
    {
      check_hlds__polymorphism__poly_info_extract_7_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PolyInfo_34_34, &check_hlds__simplify__simplify_goal_unify__PolySpecs_20, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_28_28, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_35_35, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_32_32, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_36_36, &check_hlds__simplify__simplify_goal_unify__ModuleInfo1_21);
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_37_37, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_unify_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_37_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__make_type_info_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_37_37, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__PolySpecs_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_37_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(check_hlds__simplify__simplify_goal_unify__V_37_37, (MR_String) "check_hlds.simplify.simplify_goal_unify", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.make_type_info_vars\'/5", (MR_String) "got errors while making type_info_var");
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_36_36, &check_hlds__simplify__simplify_goal_unify__VarTypes_22);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_36_36, &check_hlds__simplify__simplify_goal_unify__VarSet_23);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_36_36, &check_hlds__simplify__simplify_goal_unify__RttiVarMaps_24);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_unify__VarTypes_22, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_26, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_42_42);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_unify__VarSet_23, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_42_42, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_43_43);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_unify__RttiVarMaps_24, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_43_43, &check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_44_44);
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__simplify__simplify_goal_unify__PredId_14, check_hlds__simplify__simplify_goal_unify__ProcId_15, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_PredInfo_35_35, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_ProcInfo_36_36, check_hlds__simplify__simplify_goal_unify__ModuleInfo1_21, &check_hlds__simplify__simplify_goal_unify__ModuleInfo_25);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_25, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_44_44, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_27);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_builtin_compound_eq_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_6,
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_7,
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_8,
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo_9,
  MR_Word * check_hlds__simplify__simplify_goal_unify__Call_10)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_unify__Context_11;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_12_12;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_18_18;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_20_20;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_21_21;

    {
      check_hlds__simplify__simplify_goal_unify__Context_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo_9);
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_12_12 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_21_21, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_7));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_18_18, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_6));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_18_18, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_21_21));
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_20_20 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__simplify_goal_unify__V_12_12, (MR_String) "builtin_compound_eq", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 0, check_hlds__simplify__simplify_goal_unify__V_18_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__simplify_goal_unify__V_20_20, check_hlds__simplify__simplify_goal_unify__ModuleInfo_8, check_hlds__simplify__simplify_goal_unify__Context_11, check_hlds__simplify__simplify_goal_unify__Call_10);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_unify__call_specific_unify_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeCtor_11,
  MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_12,
  MR_Word check_hlds__simplify__simplify_goal_unify__XVar_13,
  MR_Word check_hlds__simplify__simplify_goal_unify__YVar_14,
  MR_Integer check_hlds__simplify__simplify_goal_unify__ProcId_15,
  MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_16,
  MR_Word check_hlds__simplify__simplify_goal_unify__Context_17,
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_18,
  MR_Word * check_hlds__simplify__simplify_goal_unify__CallExpr_19,
  MR_Word * check_hlds__simplify__simplify_goal_unify__CallGoalInfo_20)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_unify__ArgVars_21;
    MR_Word check_hlds__simplify__simplify_goal_unify__SpecialPredMaps_22;
    MR_Word check_hlds__simplify__simplify_goal_unify__UnifyMap_23;
    MR_Word check_hlds__simplify__simplify_goal_unify__PredId_24;
    MR_Word check_hlds__simplify__simplify_goal_unify__PredInfo_25;
    MR_Word check_hlds__simplify__simplify_goal_unify__ModuleName_26;
    MR_String check_hlds__simplify__simplify_goal_unify__PredName_27;
    MR_Word check_hlds__simplify__simplify_goal_unify__SymName_28;
    MR_Word check_hlds__simplify__simplify_goal_unify__CallContext_29;
    MR_Word check_hlds__simplify__simplify_goal_unify__NonLocals0_30;
    MR_Word check_hlds__simplify__simplify_goal_unify__NonLocals_31;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_32_32;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_33_33;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_35_35;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_37_37;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_38_38;
    MR_Word check_hlds__simplify__simplify_goal_unify__V_39_39;
    MR_Box check_hlds__simplify__simplify_goal_unify__conv0_PredId_24;

    {
      check_hlds__simplify__simplify_goal_unify__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_33_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_14));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_32_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_32_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_33_33));
    }
    {
      check_hlds__simplify__simplify_goal_unify__ArgVars_21 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__simplify_goal_unify_scalar_common_1[0], check_hlds__simplify__simplify_goal_unify__TypeInfoVars_12, check_hlds__simplify__simplify_goal_unify__V_32_32);
    }
    {
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_16, &check_hlds__simplify__simplify_goal_unify__SpecialPredMaps_22);
    }
    check_hlds__simplify__simplify_goal_unify__UnifyMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__SpecialPredMaps_22, (MR_Integer) 0)));
    check_hlds__simplify__simplify_goal_unify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__SpecialPredMaps_22, (MR_Integer) 1)));
    check_hlds__simplify__simplify_goal_unify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__SpecialPredMaps_22, (MR_Integer) 2)));
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__simplify__simplify_goal_unify__UnifyMap_23, ((MR_Box) (check_hlds__simplify__simplify_goal_unify__TypeCtor_11)), &check_hlds__simplify__simplify_goal_unify__conv0_PredId_24);
    }
    check_hlds__simplify__simplify_goal_unify__PredId_24 = ((MR_Word) check_hlds__simplify__simplify_goal_unify__conv0_PredId_24);
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_16, check_hlds__simplify__simplify_goal_unify__PredId_24, &check_hlds__simplify__simplify_goal_unify__PredInfo_25);
    }
    {
      check_hlds__simplify__simplify_goal_unify__ModuleName_26 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__simplify_goal_unify__PredInfo_25);
    }
    {
      check_hlds__simplify__simplify_goal_unify__PredName_27 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__simplify_goal_unify__PredInfo_25);
    }
    {
      check_hlds__simplify__simplify_goal_unify__SymName_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__SymName_28, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__ModuleName_26));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__SymName_28, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__PredName_27));
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_35_35, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__YVar_14));
    }
    {
      check_hlds__simplify__simplify_goal_unify__CallContext_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__CallContext_29, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__XVar_13));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__CallContext_29, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_35_35));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__CallContext_29, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Context_17));
    }
    {
      check_hlds__simplify__simplify_goal_unify__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_37_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__CallContext_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__simplify__simplify_goal_unify__CallExpr_19 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__PredId_24));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__ProcId_15));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__ArgVars_21));
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_37_37));
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__SymName_28));
    }
    {
      check_hlds__simplify__simplify_goal_unify__NonLocals0_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo0_18);
    }
    {
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_unify__TypeInfoVars_12, check_hlds__simplify__simplify_goal_unify__NonLocals0_30, &check_hlds__simplify__simplify_goal_unify__NonLocals_31);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__simplify__simplify_goal_unify__NonLocals_31, check_hlds__simplify__simplify_goal_unify__GoalInfo0_18, check_hlds__simplify__simplify_goal_unify__CallGoalInfo_20);
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_unify__simplify_goal_unify_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_unify__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_unify__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_unify__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_unify__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_unify__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61,
  MR_Word check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62,
  MR_Word * check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_unify__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_unify__LHSVar0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_goal_unify__RHS0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_unify__UnifyMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_goal_unify__Unification0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_goal_unify__UnifyContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, (MR_Integer) 4)));

    switch (MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__RHS0_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfo_82_82;
          MR_Word check_hlds__simplify__simplify_goal_unify__V_81_81;

          check_hlds__simplify__simplify_goal_unify__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__RHS0_20)) == (MR_mktag((MR_Integer) 0)));
          if (check_hlds__simplify__simplify_goal_unify__succeeded)
            {
              check_hlds__simplify__simplify_goal_unify__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 0)));
              check_hlds__simplify__simplify_goal_unify__TypeInfo_82_82 = (MR_Word) &check_hlds__simplify__simplify_goal_unify_scalar_common_1[0];
              {
                check_hlds__simplify__simplify_goal_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_goal_unify__TypeInfo_82_82, ((MR_Box) (check_hlds__simplify__simplify_goal_unify__LHSVar0_19)), ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_81_81)));
              }
            }
          if (check_hlds__simplify__simplify_goal_unify__succeeded)
            {
              MR_Word check_hlds__simplify__simplify_goal_unify__V_64_64;
              MR_Word check_hlds__simplify__simplify_goal_unify__Context_78;

              {
                check_hlds__simplify__simplify_goal_unify__Context_78 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo0_13);
              }
              {
                check_hlds__simplify__simplify_goal_unify__V_64_64 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_unify__Context_78);
              }
              *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_64_64, (MR_Integer) 0)));
              *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__V_64_64, (MR_Integer) 1)));
              *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62;
              *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60;
            }
          else
            {
              MR_Word check_hlds__simplify__simplify_goal_unify__ComplMode_50;
              MR_Word check_hlds__simplify__simplify_goal_unify__CanFail_51;
              MR_Word check_hlds__simplify__simplify_goal_unify__TypeInfoVars_52;

              check_hlds__simplify__simplify_goal_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__Unification0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_unify__Unification0_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (check_hlds__simplify__simplify_goal_unify__succeeded)
                {
                  check_hlds__simplify__simplify_goal_unify__ComplMode_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_unify__Unification0_22, (MR_Integer) 1)));
                  check_hlds__simplify__simplify_goal_unify__CanFail_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_unify__Unification0_22, (MR_Integer) 2)));
                  check_hlds__simplify__simplify_goal_unify__TypeInfoVars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_unify__Unification0_22, (MR_Integer) 3)));
                  if (((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_unify__RHS0_20)) == (MR_mktag((MR_Integer) 1))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_unify", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_unify.simplify_goal_unify\'/10", (MR_String) "invalid RHS for complicated unify");
                        return;
                      }
                    }
                  else
                    {
                      MR_Word check_hlds__simplify__simplify_goal_unify__V_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 0)));
                      MR_Word check_hlds__simplify__simplify_goal_unify__GoalExpr1_54;

                      {
                        check_hlds__simplify__simplify_goal_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_14_p_0(check_hlds__simplify__simplify_goal_unify__LHSVar0_19, check_hlds__simplify__simplify_goal_unify__V_53, check_hlds__simplify__simplify_goal_unify__ComplMode_50, check_hlds__simplify__simplify_goal_unify__CanFail_51, check_hlds__simplify__simplify_goal_unify__UnifyContext_23, check_hlds__simplify__simplify_goal_unify__GoalInfo0_13, &check_hlds__simplify__simplify_goal_unify__GoalExpr1_54, check_hlds__simplify__simplify_goal_unify__NestedContext0_15, check_hlds__simplify__simplify_goal_unify__InstMap0_16, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63);
                      }
                      *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__GoalExpr1_54, (MR_Integer) 0)));
                      *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__GoalExpr1_54, (MR_Integer) 1)));
                    }
                }
              else
                {
                  {
                    check_hlds__simplify__simplify_goal_unify__succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62);
                  }
                  if (check_hlds__simplify__simplify_goal_unify__succeeded)
                    {
                      check_hlds__simplify__common__common_optimise_unification_10_p_0(check_hlds__simplify__simplify_goal_unify__Unification0_22, check_hlds__simplify__simplify_goal_unify__UnifyMode_21, check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, check_hlds__simplify__simplify_goal_unify__GoalExpr_12, check_hlds__simplify__simplify_goal_unify__GoalInfo0_13, check_hlds__simplify__simplify_goal_unify__GoalInfo_14, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63);
                    }
                  else
                    {
                      {
                        check_hlds__simplify__simplify_goal_unify__succeeded = check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62);
                      }
                      if (!(check_hlds__simplify__simplify_goal_unify__succeeded))
                        {
                          check_hlds__simplify__simplify_goal_unify__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62);
                        }
                      if (check_hlds__simplify__simplify_goal_unify__succeeded)
                        {
                          MR_Word check_hlds__simplify__simplify_goal_unify___GoalExpr1_58;
                          MR_Word check_hlds__simplify__simplify_goal_unify___GoalInfo1_59;

                          {
                            check_hlds__simplify__common__common_optimise_unification_10_p_0(check_hlds__simplify__simplify_goal_unify__Unification0_22, check_hlds__simplify__simplify_goal_unify__UnifyMode_21, check_hlds__simplify__simplify_goal_unify__GoalExpr0_11, &check_hlds__simplify__simplify_goal_unify___GoalExpr1_58, check_hlds__simplify__simplify_goal_unify__GoalInfo0_13, &check_hlds__simplify__simplify_goal_unify___GoalInfo1_59, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63);
                          }
                          *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = check_hlds__simplify__simplify_goal_unify__GoalExpr0_11;
                          *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = check_hlds__simplify__simplify_goal_unify__GoalInfo0_13;
                        }
                      else
                        {
                          *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = check_hlds__simplify__simplify_goal_unify__GoalExpr0_11;
                          *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = check_hlds__simplify__simplify_goal_unify__GoalInfo0_13;
                          *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62;
                          *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60;
                        }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__simplify__simplify_goal_unify__Purity_24 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word check_hlds__simplify__simplify_goal_unify__Groundness_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_goal_unify__PredOrFunc_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__simplify__simplify_goal_unify__NonLocals_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__simplify_goal_unify__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 3)));
          MR_Word check_hlds__simplify__simplify_goal_unify__Modes_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 4)));
          MR_Word check_hlds__simplify__simplify_goal_unify__LambdaDeclaredDetism_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 5)));
          MR_Word check_hlds__simplify__simplify_goal_unify__LambdaGoal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS0_20, (MR_Integer) 6)));
          MR_Word check_hlds__simplify__simplify_goal_unify__LambdaCodeModel_33;
          MR_Word check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34;
          MR_Word check_hlds__simplify__simplify_goal_unify__InsideDuplForSwitch_36;
          MR_Integer check_hlds__simplify__simplify_goal_unify__NumEnclosingLambdas0_37;
          MR_Word check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39;
          MR_Word check_hlds__simplify__simplify_goal_unify__ModuleInfo_40;
          MR_Word check_hlds__simplify__simplify_goal_unify__LambdaInstMap0_41;
          MR_Word check_hlds__simplify__simplify_goal_unify__LambdaCommon0_42;
          MR_Word check_hlds__simplify__simplify_goal_unify__LambdaGoal_43;
          MR_Word check_hlds__simplify__simplify_goal_unify__RHS_45;
          MR_Integer check_hlds__simplify__simplify_goal_unify__V_75_75;
          MR_Word check_hlds__simplify__simplify_goal_unify___ProcModelNon_38;
          MR_Word check_hlds__simplify__simplify_goal_unify__V_44_44;

          {
            hlds__code_model__determinism_to_code_model_2_p_0(check_hlds__simplify__simplify_goal_unify__LambdaDeclaredDetism_31, &check_hlds__simplify__simplify_goal_unify__LambdaCodeModel_33);
          }
          switch (check_hlds__simplify__simplify_goal_unify__LambdaCodeModel_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__simplify__simplify_goal_unify__Context_35;
                MR_Word check_hlds__simplify__simplify_goal_unify__V_74_74;

                {
                  check_hlds__simplify__simplify_goal_unify__Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_unify__GoalInfo0_13);
                }
                {
                  check_hlds__simplify__simplify_goal_unify__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__V_74_74, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Context_35));
                }
                {
                  check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_74_74));
                }
              }
              break;
          }
          check_hlds__simplify__simplify_goal_unify__InsideDuplForSwitch_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__NestedContext0_15, (MR_Integer) 0)));
          check_hlds__simplify__simplify_goal_unify__NumEnclosingLambdas0_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__NestedContext0_15, (MR_Integer) 1)));
          check_hlds__simplify__simplify_goal_unify___ProcModelNon_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__NestedContext0_15, (MR_Integer) 2)));
          check_hlds__simplify__simplify_goal_unify__V_75_75 = (check_hlds__simplify__simplify_goal_unify__NumEnclosingLambdas0_37 + (MR_Integer) 1);
          {
            check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__InsideDuplForSwitch_36));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__V_75_75));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__ProcIsModelNon_34));
          }
          {
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, &check_hlds__simplify__simplify_goal_unify__ModuleInfo_40);
          }
          {
            hlds__instmap__pre_lambda_update_5_p_0(check_hlds__simplify__simplify_goal_unify__ModuleInfo_40, check_hlds__simplify__simplify_goal_unify__Vars_29, check_hlds__simplify__simplify_goal_unify__Modes_30, check_hlds__simplify__simplify_goal_unify__InstMap0_16, &check_hlds__simplify__simplify_goal_unify__LambdaInstMap0_41);
          }
          {
            check_hlds__simplify__simplify_goal_unify__LambdaCommon0_42 = check_hlds__simplify__common__common_info_init_0_f_0();
          }
          {
            check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_unify__LambdaGoal0_32, &check_hlds__simplify__simplify_goal_unify__LambdaGoal_43, check_hlds__simplify__simplify_goal_unify__LambdaNestedContext_39, check_hlds__simplify__simplify_goal_unify__LambdaInstMap0_41, check_hlds__simplify__simplify_goal_unify__LambdaCommon0_42, &check_hlds__simplify__simplify_goal_unify__V_44_44, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_0_62, check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Info_63);
          }
          {
            check_hlds__simplify__simplify_goal_unify__RHS_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS_45, 0) = ((MR_Box) ((check_hlds__simplify__simplify_goal_unify__Purity_24 | ((((check_hlds__simplify__simplify_goal_unify__Groundness_25 << (MR_Integer) 2)) | ((check_hlds__simplify__simplify_goal_unify__PredOrFunc_26 << (MR_Integer) 3)))))));
            MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS_45, 1) = (MR_Integer) 0;
            MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS_45, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__NonLocals_28));
            MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS_45, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Vars_29));
            MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS_45, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Modes_30));
            MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS_45, 5) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__LambdaDeclaredDetism_31));
            MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_unify__RHS_45, 6) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__LambdaGoal_43));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__simplify__simplify_goal_unify__GoalExpr_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__LHSVar0_19));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__RHS_45));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__UnifyMode_21));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__Unification0_22));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_goal_unify__UnifyContext_23));
          }
          *check_hlds__simplify__simplify_goal_unify__GoalInfo_14 = check_hlds__simplify__simplify_goal_unify__GoalInfo0_13;
          *check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_61 = check_hlds__simplify__simplify_goal_unify__STATE_VARIABLE_Common_0_60;
        }
        break;
    }
  }
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
