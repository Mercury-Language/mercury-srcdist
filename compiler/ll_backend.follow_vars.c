/*
** Automatically generated from `follow_vars.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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


/* :- module ll_backend.follow_vars. */
/* :- implementation. */

/*
INIT mercury__ll_backend__follow_vars__init
ENDINIT
*/

#include "ll_backend.follow_vars.mih"


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
#include "hlds.arg_info.mih"
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
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 ll_backend__follow_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__follow_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0;

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
  MR_Word ll_backend__follow_vars__VarTypes_3,
  MR_Word ll_backend__follow_vars__HeadVar__4_4,
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_6,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_8,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_10,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
  MR_Word ll_backend__follow_vars__VarTypes_3,
  MR_Word ll_backend__follow_vars__ModuleInfo_4,
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
  MR_Word * ll_backend__follow_vars__HeadVar__6_6,
  MR_Integer ll_backend__follow_vars__HeadVar__7_7,
  MR_Integer * ll_backend__follow_vars__HeadVar__8_8,
  MR_Integer ll_backend__follow_vars__HeadVar__9_9,
  MR_Integer * ll_backend__follow_vars__HeadVar__10_10);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
  MR_Word ll_backend__follow_vars__VarTypes_3,
  MR_Word ll_backend__follow_vars__HeadVar__4_4,
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
  MR_Word * ll_backend__follow_vars__FollowVarsMap_6,
  MR_Integer ll_backend__follow_vars__HeadVar__7_7,
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_8,
  MR_Integer ll_backend__follow_vars__HeadVar__9_9,
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_10);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word ll_backend__follow_vars__HeadVar__2_2,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_4,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextReg_6);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_3,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_call_7_p_0(
  MR_Word ll_backend__follow_vars__PredId_8,
  MR_Integer ll_backend__follow_vars__ProcId_9,
  MR_Word ll_backend__follow_vars__Args_10,
  MR_Word ll_backend__follow_vars__ModuleInfo_11,
  MR_Word * ll_backend__follow_vars__FollowVarsMap_12,
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_13,
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_14);

static MR_bool MR_CALL 
ll_backend__follow_vars__is_reg_r_arg_1_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0_1(
  MR_Box ll_backend__follow_vars__closure_arg,
  MR_Box ll_backend__follow_vars__wrapper_arg_1);

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(
  MR_Word ll_backend__follow_vars__GoalExpr0_13,
  MR_Word * ll_backend__follow_vars__GoalExpr_14,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113,
  MR_Word ll_backend__follow_vars__VarTypes_16,
  MR_Word ll_backend__follow_vars__ModuleInfo_17,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);

static void MR_CALL 
ll_backend__follow_vars__find_final_follow_vars_2_7_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word ll_backend__follow_vars__HeadVar__2_2,
  MR_Word * ll_backend__follow_vars__HeadVar__3_3,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7);


static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_3[1][4];




static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__follow_vars_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__follow_vars_scalar_common_3[0])),
    ((MR_Box) (ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__follow_vars_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__follow_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__follow_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__follow_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__follow_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
  MR_Word ll_backend__follow_vars__VarTypes_3,
  MR_Word ll_backend__follow_vars__HeadVar__4_4,
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_6,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_8,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_10,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11)
{
  {
    MR_bool ll_backend__follow_vars__succeeded;

    if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__follow_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_10;
        *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_8;
        *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_6;
      }
    else
      {
        MR_Word ll_backend__follow_vars__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__follow_vars__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__follow_vars__Goal_26;
        MR_Word ll_backend__follow_vars__Goals_27;
        MR_Word ll_backend__follow_vars__AttachToNext_50;
        MR_Word ll_backend__follow_vars__Goal1_51;
        MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_59_59;
        MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_60_60;
        MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_61_61;
        MR_Word ll_backend__follow_vars__GoalExpr0_74;
        MR_Word ll_backend__follow_vars__GoalInfo0_75;
        MR_Word ll_backend__follow_vars__GoalExpr_76;
        MR_Word ll_backend__follow_vars__GoalInfo_77;
        MR_Word ll_backend__follow_vars__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_24, (MR_Integer) 0)));
        MR_Word ll_backend__follow_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_24, (MR_Integer) 1)));

        if (((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_34)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word ll_backend__follow_vars__BuiltinState_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 3)));
            MR_Word ll_backend__follow_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 0)));
            MR_Integer ll_backend__follow_vars__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 1)));
            MR_Word ll_backend__follow_vars__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 2)));
            MR_Word ll_backend__follow_vars__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 4)));
            MR_Word ll_backend__follow_vars__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 5)));

            ll_backend__follow_vars__succeeded = (ll_backend__follow_vars__BuiltinState_39 == (MR_Integer) 0);
          }
        else
        if (((MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__follow_vars__Unification_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 3)));
            MR_Word ll_backend__follow_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 0)));
            MR_Word ll_backend__follow_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 1)));
            MR_Word ll_backend__follow_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 2)));
            MR_Word ll_backend__follow_vars__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_34, (MR_Integer) 4)));
            MR_Word ll_backend__follow_vars__V_47_47;
            MR_Word ll_backend__follow_vars__V_48_48;
            MR_Word ll_backend__follow_vars__V_49_49;

            ll_backend__follow_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_vars__Unification_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Unification_45, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ll_backend__follow_vars__succeeded)
              {
                ll_backend__follow_vars__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Unification_45, (MR_Integer) 1)));
                ll_backend__follow_vars__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Unification_45, (MR_Integer) 2)));
                ll_backend__follow_vars__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Unification_45, (MR_Integer) 3)));
              }
            ll_backend__follow_vars__succeeded = !(ll_backend__follow_vars__succeeded);
          }
        else
          ll_backend__follow_vars__succeeded = MR_FALSE;
        if (ll_backend__follow_vars__succeeded)
          ll_backend__follow_vars__AttachToNext_50 = (MR_Integer) 0;
        else
          ll_backend__follow_vars__AttachToNext_50 = (MR_Integer) 1;
        {
          ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(ll_backend__follow_vars__Goals0_25, &ll_backend__follow_vars__Goals_27, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__HeadVar__4_4, ll_backend__follow_vars__AttachToNext_50, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_6, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_59_59, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_8, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_60_60, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_10, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_61_61);
        }
        ll_backend__follow_vars__GoalExpr0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_24, (MR_Integer) 0)));
        ll_backend__follow_vars__GoalInfo0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_24, (MR_Integer) 1)));
        {
          ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(ll_backend__follow_vars__GoalExpr0_74, &ll_backend__follow_vars__GoalExpr_76, ll_backend__follow_vars__GoalInfo0_75, &ll_backend__follow_vars__GoalInfo_77, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__HeadVar__4_4, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_59_59, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_60_60, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_61_61, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11);
        }
        {
          ll_backend__follow_vars__Goal1_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_51, 0) = ((MR_Box) (ll_backend__follow_vars__GoalExpr_76));
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_51, 1) = ((MR_Box) (ll_backend__follow_vars__GoalInfo_77));
        }
        switch (ll_backend__follow_vars__HeadVar__5_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__follow_vars__Goal_26 = ll_backend__follow_vars__Goal1_51;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__follow_vars__FollowVars_52;
              MR_Word ll_backend__follow_vars__V_65_65;

              {
                ll_backend__follow_vars__FollowVars_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_52, 0) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_7));
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_52, 1) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_9));
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_52, 2) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_11));
              }
              {
                ll_backend__follow_vars__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_65_65, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVars_52));
              }
              {
                hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_65_65, ll_backend__follow_vars__Goal1_51, &ll_backend__follow_vars__Goal_26);
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__follow_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_vars__Goal_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_vars__Goals_27));
        }
      }
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
  MR_Word ll_backend__follow_vars__VarTypes_3,
  MR_Word ll_backend__follow_vars__ModuleInfo_4,
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
  MR_Word * ll_backend__follow_vars__HeadVar__6_6,
  MR_Integer ll_backend__follow_vars__HeadVar__7_7,
  MR_Integer * ll_backend__follow_vars__HeadVar__8_8,
  MR_Integer ll_backend__follow_vars__HeadVar__9_9,
  MR_Integer * ll_backend__follow_vars__HeadVar__10_10)
{
  {
    MR_bool ll_backend__follow_vars__succeeded;

    if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__follow_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__follow_vars__HeadVar__10_10 = ll_backend__follow_vars__HeadVar__9_9;
        *ll_backend__follow_vars__HeadVar__8_8 = ll_backend__follow_vars__HeadVar__7_7;
        *ll_backend__follow_vars__HeadVar__6_6 = ll_backend__follow_vars__HeadVar__5_5;
      }
    else
      {
        MR_Word ll_backend__follow_vars__Case0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__follow_vars__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__follow_vars__Case_24;
        MR_Word ll_backend__follow_vars__Cases_25;
        MR_Word ll_backend__follow_vars__MainConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case0_22, (MR_Integer) 0)));
        MR_Word ll_backend__follow_vars__OtherConsIds_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case0_22, (MR_Integer) 1)));
        MR_Word ll_backend__follow_vars__Goal0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case0_22, (MR_Integer) 2)));
        MR_Word ll_backend__follow_vars__Goal1_37;
        MR_Word ll_backend__follow_vars__FollowVars_38;
        MR_Word ll_backend__follow_vars__Goal_39;
        MR_Word ll_backend__follow_vars__V_43_43;
        MR_Word ll_backend__follow_vars__GoalExpr0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_36, (MR_Integer) 0)));
        MR_Word ll_backend__follow_vars__GoalInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_36, (MR_Integer) 1)));
        MR_Word ll_backend__follow_vars__GoalExpr_54;
        MR_Word ll_backend__follow_vars__GoalInfo_55;
        MR_Word ll_backend__follow_vars___FollowVarsMap_40;
        MR_Integer ll_backend__follow_vars___NextNonReservedR_41;
        MR_Integer ll_backend__follow_vars___NextNonReservedF_42;

        {
          ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(ll_backend__follow_vars__GoalExpr0_52, &ll_backend__follow_vars__GoalExpr_54, ll_backend__follow_vars__GoalInfo0_53, &ll_backend__follow_vars__GoalInfo_55, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__ModuleInfo_4, ll_backend__follow_vars__HeadVar__5_5, ll_backend__follow_vars__HeadVar__6_6, ll_backend__follow_vars__HeadVar__7_7, ll_backend__follow_vars__HeadVar__8_8, ll_backend__follow_vars__HeadVar__9_9, ll_backend__follow_vars__HeadVar__10_10);
        }
        {
          ll_backend__follow_vars__Goal1_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_37, 0) = ((MR_Box) (ll_backend__follow_vars__GoalExpr_54));
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_37, 1) = ((MR_Box) (ll_backend__follow_vars__GoalInfo_55));
        }
        {
          ll_backend__follow_vars__FollowVars_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_38, 0) = ((MR_Box) (*ll_backend__follow_vars__HeadVar__6_6));
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_38, 1) = ((MR_Box) (*ll_backend__follow_vars__HeadVar__8_8));
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_38, 2) = ((MR_Box) (*ll_backend__follow_vars__HeadVar__10_10));
        }
        {
          ll_backend__follow_vars__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_43_43, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVars_38));
        }
        {
          hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_43_43, ll_backend__follow_vars__Goal1_37, &ll_backend__follow_vars__Goal_39);
        }
        {
          ll_backend__follow_vars__Case_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case_24, 0) = ((MR_Box) (ll_backend__follow_vars__MainConsId_34));
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case_24, 1) = ((MR_Box) (ll_backend__follow_vars__OtherConsIds_35));
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Case_24, 2) = ((MR_Box) (ll_backend__follow_vars__Goal_39));
        }
        {
          ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(ll_backend__follow_vars__Cases0_23, &ll_backend__follow_vars__Cases_25, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__ModuleInfo_4, ll_backend__follow_vars__HeadVar__5_5, &ll_backend__follow_vars___FollowVarsMap_40, *ll_backend__follow_vars__HeadVar__8_8, &ll_backend__follow_vars___NextNonReservedR_41, *ll_backend__follow_vars__HeadVar__10_10, &ll_backend__follow_vars___NextNonReservedF_42);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__follow_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_vars__Case_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_vars__Cases_25));
        }
      }
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
  MR_Word ll_backend__follow_vars__VarTypes_3,
  MR_Word ll_backend__follow_vars__HeadVar__4_4,
  MR_Word ll_backend__follow_vars__HeadVar__5_5,
  MR_Word * ll_backend__follow_vars__FollowVarsMap_6,
  MR_Integer ll_backend__follow_vars__HeadVar__7_7,
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_8,
  MR_Integer ll_backend__follow_vars__HeadVar__9_9,
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_10)
{
  {
    MR_bool ll_backend__follow_vars__succeeded;

    if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__follow_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__follow_vars__FollowVarsMap_6 = ll_backend__follow_vars__HeadVar__5_5;
        *ll_backend__follow_vars__NextNonReservedR_8 = ll_backend__follow_vars__HeadVar__7_7;
        *ll_backend__follow_vars__NextNonReservedF_10 = ll_backend__follow_vars__HeadVar__9_9;
      }
    else
      {
        MR_Word ll_backend__follow_vars__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__follow_vars__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__follow_vars__Goal_18;
        MR_Word ll_backend__follow_vars__Goals_19;
        MR_Word ll_backend__follow_vars__Goal1_28;
        MR_Word ll_backend__follow_vars__FollowVars_29;
        MR_Word ll_backend__follow_vars__V_33_33;
        MR_Word ll_backend__follow_vars__GoalExpr0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_16, (MR_Integer) 0)));
        MR_Word ll_backend__follow_vars__GoalInfo0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal0_16, (MR_Integer) 1)));
        MR_Word ll_backend__follow_vars__GoalExpr_44;
        MR_Word ll_backend__follow_vars__GoalInfo_45;
        MR_Word ll_backend__follow_vars___FollowVarsMap_30;
        MR_Integer ll_backend__follow_vars___NextNonReservedR_31;
        MR_Integer ll_backend__follow_vars___NextNonReservedF_32;

        {
          ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(ll_backend__follow_vars__GoalExpr0_42, &ll_backend__follow_vars__GoalExpr_44, ll_backend__follow_vars__GoalInfo0_43, &ll_backend__follow_vars__GoalInfo_45, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__HeadVar__4_4, ll_backend__follow_vars__HeadVar__5_5, ll_backend__follow_vars__FollowVarsMap_6, ll_backend__follow_vars__HeadVar__7_7, ll_backend__follow_vars__NextNonReservedR_8, ll_backend__follow_vars__HeadVar__9_9, ll_backend__follow_vars__NextNonReservedF_10);
        }
        {
          ll_backend__follow_vars__Goal1_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_28, 0) = ((MR_Box) (ll_backend__follow_vars__GoalExpr_44));
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__Goal1_28, 1) = ((MR_Box) (ll_backend__follow_vars__GoalInfo_45));
        }
        {
          ll_backend__follow_vars__FollowVars_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_29, 0) = ((MR_Box) (*ll_backend__follow_vars__FollowVarsMap_6));
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_29, 1) = ((MR_Box) (*ll_backend__follow_vars__NextNonReservedR_8));
          MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVars_29, 2) = ((MR_Box) (*ll_backend__follow_vars__NextNonReservedF_10));
        }
        {
          ll_backend__follow_vars__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_33_33, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVars_29));
        }
        {
          hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_33_33, ll_backend__follow_vars__Goal1_28, &ll_backend__follow_vars__Goal_18);
        }
        {
          ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(ll_backend__follow_vars__Goals0_17, &ll_backend__follow_vars__Goals_19, ll_backend__follow_vars__VarTypes_3, ll_backend__follow_vars__HeadVar__4_4, ll_backend__follow_vars__HeadVar__5_5, &ll_backend__follow_vars___FollowVarsMap_30, ll_backend__follow_vars__HeadVar__7_7, &ll_backend__follow_vars___NextNonReservedR_31, ll_backend__follow_vars__HeadVar__9_9, &ll_backend__follow_vars___NextNonReservedF_32);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__follow_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__follow_vars__Goal_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__follow_vars__Goals_19));
        }
      }
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word ll_backend__follow_vars__HeadVar__2_2,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_4,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextReg_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__follow_vars__succeeded;

        if ((ll_backend__follow_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__follow_vars__STATE_VARIABLE_NextReg_6 = ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5;
            *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_4 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3;
          }
        else
          {
            MR_Word ll_backend__follow_vars__InVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__follow_vars__InVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__follow_vars__Locn_19;
            MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_25_25;
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextReg_26_26;
            MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_24_24;

            {
              ll_backend__follow_vars__Locn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_19, 0) = ((MR_Box) (ll_backend__follow_vars__HeadVar__1_1));
              MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_19, 1) = ((MR_Box) (ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5));
            }
            {
              ll_backend__follow_vars__succeeded = mercury__map__insert_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__follow_vars__InVar_15)), ((MR_Box) (ll_backend__follow_vars__Locn_19)), ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_24_24);
            }
            if (ll_backend__follow_vars__succeeded)
              ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_25_25 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_24_24;
            else
              ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_25_25 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3;
            ll_backend__follow_vars__STATE_VARIABLE_NextReg_26_26 = (ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__follow_vars__HeadVar__2__tmp_copy_2 = ll_backend__follow_vars__InVars_16;
              MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0__tmp_copy_3 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_25_25;
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextReg_0__tmp_copy_5 = ll_backend__follow_vars__STATE_VARIABLE_NextReg_26_26;

              ll_backend__follow_vars__STATE_VARIABLE_NextReg_0_5 = ll_backend__follow_vars__STATE_VARIABLE_NextReg_0__tmp_copy_5;
              ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_3 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0__tmp_copy_3;
              ll_backend__follow_vars__HeadVar__2_2 = ll_backend__follow_vars__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_3,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__follow_vars__succeeded;

        if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
            *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_3 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2;
          }
        else
          {
            MR_Word ll_backend__follow_vars__ArgVar_17;
            MR_Word ll_backend__follow_vars__ArgLoc_18;
            MR_Word ll_backend__follow_vars__Mode_19;
            MR_Word ll_backend__follow_vars__ArgsInfos_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__follow_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__follow_vars__V_34_34;
            MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36;
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38;
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41;

            ll_backend__follow_vars__ArgVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_33_33, (MR_Integer) 0)));
            ll_backend__follow_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_33_33, (MR_Integer) 1)));
            ll_backend__follow_vars__ArgLoc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_34_34, (MR_Integer) 0)));
            ll_backend__follow_vars__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_34_34, (MR_Integer) 1)));
            switch (ll_backend__follow_vars__Mode_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__follow_vars__RegType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__ArgLoc_18, (MR_Integer) 0)));
                  MR_Integer ll_backend__follow_vars__RegNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__ArgLoc_18, (MR_Integer) 1)));
                  MR_Word ll_backend__follow_vars__Locn_26;
                  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35;

                  {
                    ll_backend__follow_vars__Locn_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_26, 0) = ((MR_Box) (ll_backend__follow_vars__RegType_24));
                    MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_26, 1) = ((MR_Box) (ll_backend__follow_vars__RegNum_25));
                  }
                  {
                    ll_backend__follow_vars__succeeded = mercury__map__insert_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__follow_vars__ArgVar_17)), ((MR_Box) (ll_backend__follow_vars__Locn_26)), ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35);
                  }
                  if (ll_backend__follow_vars__succeeded)
                    ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35;
                  else
                    ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2;
                  switch (ll_backend__follow_vars__RegType_24) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Integer ll_backend__follow_vars__V_37_37 = (ll_backend__follow_vars__RegNum_25 + (MR_Integer) 1);

                        {
                          mercury__int__max_3_p_0(ll_backend__follow_vars__V_37_37, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38);
                        }
                        ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__follow_vars__V_40_40 = (ll_backend__follow_vars__RegNum_25 + (MR_Integer) 1);

                        {
                          mercury__int__max_3_p_0(ll_backend__follow_vars__V_40_40, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41);
                        }
                        ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2;
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
                }
                break;
              case (MR_Integer) 2:
                {
                  ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2;
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__follow_vars__HeadVar__1__tmp_copy_1 = ll_backend__follow_vars__ArgsInfos_20;
              MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0__tmp_copy_2 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_36_36;
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0__tmp_copy_4 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_41_41;
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0__tmp_copy_6 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_38_38;

              ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0__tmp_copy_6;
              ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0__tmp_copy_4;
              ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_2 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0__tmp_copy_2;
              ll_backend__follow_vars__HeadVar__1_1 = ll_backend__follow_vars__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_call_7_p_0(
  MR_Word ll_backend__follow_vars__PredId_8,
  MR_Integer ll_backend__follow_vars__ProcId_9,
  MR_Word ll_backend__follow_vars__Args_10,
  MR_Word ll_backend__follow_vars__ModuleInfo_11,
  MR_Word * ll_backend__follow_vars__FollowVarsMap_12,
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_13,
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_14)
{
  {
    MR_bool ll_backend__follow_vars__succeeded;
    MR_Word ll_backend__follow_vars__TypeInfo_22_22;
    MR_Word ll_backend__follow_vars__ProcInfo_16;
    MR_Word ll_backend__follow_vars__ArgInfo_17;
    MR_Word ll_backend__follow_vars__ArgsInfos_18;
    MR_Word ll_backend__follow_vars__V_19_19;
    MR_Word ll_backend__follow_vars__V_15_15;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__follow_vars__ModuleInfo_11, ll_backend__follow_vars__PredId_8, ll_backend__follow_vars__ProcId_9, &ll_backend__follow_vars__V_15_15, &ll_backend__follow_vars__ProcInfo_16);
    }
    {
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__follow_vars__ProcInfo_16, &ll_backend__follow_vars__ArgInfo_17);
    }
    ll_backend__follow_vars__TypeInfo_22_22 = (MR_Word) &ll_backend__follow_vars_scalar_common_1[0];
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(ll_backend__follow_vars__TypeInfo_22_22, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__follow_vars__Args_10, ll_backend__follow_vars__ArgInfo_17, &ll_backend__follow_vars__ArgsInfos_18);
    }
    {
      ll_backend__follow_vars__V_19_19 = mercury__map__init_0_f_0(ll_backend__follow_vars__TypeInfo_22_22, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
    }
    {
      ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(ll_backend__follow_vars__ArgsInfos_18, ll_backend__follow_vars__V_19_19, ll_backend__follow_vars__FollowVarsMap_12, (MR_Integer) 1, ll_backend__follow_vars__NextNonReservedR_13, (MR_Integer) 1, ll_backend__follow_vars__NextNonReservedF_14);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__follow_vars__is_reg_r_arg_1_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1)
{
  {
    MR_bool ll_backend__follow_vars__succeeded;
    MR_Word ll_backend__follow_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__follow_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_5_5, (MR_Integer) 0)));
    MR_Word ll_backend__follow_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_6_6, (MR_Integer) 0)));
    MR_Word ll_backend__follow_vars__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__follow_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_5_5, (MR_Integer) 1)));
    MR_Integer ll_backend__follow_vars__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_6_6, (MR_Integer) 1)));

    ll_backend__follow_vars__succeeded = (ll_backend__follow_vars__V_7_7 == (MR_Integer) 0);
    return ll_backend__follow_vars__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0_1(
  MR_Box ll_backend__follow_vars__closure_arg,
  MR_Box ll_backend__follow_vars__wrapper_arg_1)
{
  {
    MR_bool ll_backend__follow_vars__succeeded;
    MR_Box ll_backend__follow_vars__closure = ll_backend__follow_vars__closure_arg;

    {
      ll_backend__follow_vars__succeeded = ll_backend__follow_vars__is_reg_r_arg_1_p_0(((MR_Word) ll_backend__follow_vars__wrapper_arg_1));
    }
    return ll_backend__follow_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(
  MR_Word ll_backend__follow_vars__GoalExpr0_13,
  MR_Word * ll_backend__follow_vars__GoalExpr_14,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113,
  MR_Word ll_backend__follow_vars__VarTypes_16,
  MR_Word ll_backend__follow_vars__ModuleInfo_17,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119)
{
  {
    MR_bool ll_backend__follow_vars__succeeded;

    switch (MR_tag((MR_Word) ll_backend__follow_vars__GoalExpr0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__follow_vars__SubGoal0_53 = (MR_Word) MR_body(((MR_Word) ll_backend__follow_vars__GoalExpr0_13), (MR_Integer) 0);
          MR_Word ll_backend__follow_vars__SubGoal_54;

          {
            ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__SubGoal0_53, &ll_backend__follow_vars__SubGoal_54, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
          }
          *ll_backend__follow_vars__GoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__follow_vars__SubGoal_54);
          *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__follow_vars__Unification_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
          MR_Word ll_backend__follow_vars__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)));
          MR_Word ll_backend__follow_vars__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
          MR_Word ll_backend__follow_vars__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
          MR_Word ll_backend__follow_vars__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 4)));
          MR_Word ll_backend__follow_vars__RVar_64;
          MR_Word ll_backend__follow_vars__DesiredLoc_65;
          MR_Word ll_backend__follow_vars__TypeInfo_174_174;
          MR_Word ll_backend__follow_vars__TypeCtorInfo_175_175;
          MR_Word ll_backend__follow_vars__LVar_63;
          MR_Box ll_backend__follow_vars__conv0_DesiredLoc_65;

          *ll_backend__follow_vars__GoalExpr_14 = ll_backend__follow_vars__GoalExpr0_13;
          ll_backend__follow_vars__succeeded = ((MR_tag((MR_Word) ll_backend__follow_vars__Unification_61)) == (MR_mktag((MR_Integer) 2)));
          if (ll_backend__follow_vars__succeeded)
            {
              ll_backend__follow_vars__LVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__Unification_61, (MR_Integer) 0)));
              ll_backend__follow_vars__RVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__Unification_61, (MR_Integer) 1)));
              ll_backend__follow_vars__TypeInfo_174_174 = (MR_Word) &ll_backend__follow_vars_scalar_common_1[0];
              ll_backend__follow_vars__TypeCtorInfo_175_175 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
              {
                ll_backend__follow_vars__succeeded = mercury__map__search_3_p_0(ll_backend__follow_vars__TypeInfo_174_174, ll_backend__follow_vars__TypeCtorInfo_175_175, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ((MR_Box) (ll_backend__follow_vars__LVar_63)), &ll_backend__follow_vars__conv0_DesiredLoc_65);
              }
              if (ll_backend__follow_vars__succeeded)
                {
                  ll_backend__follow_vars__DesiredLoc_65 = ((MR_Word) ll_backend__follow_vars__conv0_DesiredLoc_65);
                  ll_backend__follow_vars__succeeded = MR_TRUE;
                }
            }
          if (ll_backend__follow_vars__succeeded)
            {
              {
                mercury__map__set_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__follow_vars__RVar_64)), ((MR_Box) (ll_backend__follow_vars__DesiredLoc_65)), ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115);
              }
            }
          else
            *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
          *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
          *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
          *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__follow_vars__PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)));
          MR_Integer ll_backend__follow_vars__ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
          MR_Word ll_backend__follow_vars__Args_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
          MR_Word ll_backend__follow_vars__State_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
          MR_Word ll_backend__follow_vars___UC_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 4)));
          MR_Word ll_backend__follow_vars___Name_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 5)));

          *ll_backend__follow_vars__GoalExpr_14 = ll_backend__follow_vars__GoalExpr0_13;
          switch (ll_backend__follow_vars__State_69) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
                *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
                *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                ll_backend__follow_vars__find_follow_vars_in_call_7_p_0(ll_backend__follow_vars__PredId_66, ll_backend__follow_vars__ProcId_67, ll_backend__follow_vars__Args_68, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
              }
              break;
          }
          *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__follow_vars__GenericCall_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word ll_backend__follow_vars__Modes_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
              MR_Word ll_backend__follow_vars__MaybeArgRegs_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 4)));
              MR_Word ll_backend__follow_vars__Det_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 5)));
              MR_Word ll_backend__follow_vars__Args_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));

              *ll_backend__follow_vars__GoalExpr_14 = ll_backend__follow_vars__GoalExpr0_13;
              switch (MR_tag((MR_Word) ll_backend__follow_vars__GenericCall_72)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__follow_vars__TypeInfo_178_178;
                    MR_Word ll_backend__follow_vars__TypeCtorInfo_179_179;
                    MR_Word ll_backend__follow_vars__CodeModel_85;
                    MR_Word ll_backend__follow_vars__Types_86;
                    MR_Word ll_backend__follow_vars__ArgRegTypes_87;
                    MR_Word ll_backend__follow_vars__ArgInfos_88;
                    MR_Word ll_backend__follow_vars__ArgsInfos_89;
                    MR_Word ll_backend__follow_vars__InVarInfos_90;
                    MR_Word ll_backend__follow_vars__InVarInfosR_92;
                    MR_Word ll_backend__follow_vars__InVarInfosF_93;
                    MR_Word ll_backend__follow_vars__InVarsR_94;
                    MR_Word ll_backend__follow_vars__InVarsF_95;
                    MR_Word ll_backend__follow_vars__Globals_96;
                    MR_Word ll_backend__follow_vars__SpecifierArgInfos_98;
                    MR_Integer ll_backend__follow_vars__FirstInputR_99;
                    MR_Integer ll_backend__follow_vars__V_124_124;
                    MR_Integer ll_backend__follow_vars__V_125_125;
                    MR_Word ll_backend__follow_vars__V_126_126;
                    MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_127_127;
                    MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_131_131;
                    MR_Word ll_backend__follow_vars__V_91_91;
                    MR_Word ll_backend__follow_vars__V_97_97;
                    MR_Word ll_backend__follow_vars__V_100_100;
                    MR_Integer ll_backend__follow_vars__V_102_102;
                    MR_Integer ll_backend__follow_vars__V_103_103;

                    {
                      hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__follow_vars__Det_172, &ll_backend__follow_vars__CodeModel_85);
                    }
                    {
                      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__Args_173, &ll_backend__follow_vars__Types_86);
                    }
                    {
                      hlds__arg_info__generic_call_arg_reg_types_6_p_0(ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__GenericCall_72, ll_backend__follow_vars__Args_173, ll_backend__follow_vars__MaybeArgRegs_74, &ll_backend__follow_vars__ArgRegTypes_87);
                    }
                    {
                      hlds__arg_info__make_arg_infos_6_p_0(ll_backend__follow_vars__Types_86, ll_backend__follow_vars__Modes_73, ll_backend__follow_vars__ArgRegTypes_87, ll_backend__follow_vars__CodeModel_85, ll_backend__follow_vars__ModuleInfo_17, &ll_backend__follow_vars__ArgInfos_88);
                    }
                    ll_backend__follow_vars__TypeInfo_178_178 = (MR_Word) &ll_backend__follow_vars_scalar_common_1[0];
                    ll_backend__follow_vars__TypeCtorInfo_179_179 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0;
                    {
                      mercury__assoc_list__from_corresponding_lists_3_p_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__TypeCtorInfo_179_179, ll_backend__follow_vars__Args_173, ll_backend__follow_vars__ArgInfos_88, &ll_backend__follow_vars__ArgsInfos_89);
                    }
                    {
                      hlds__arg_info__partition_args_3_p_0(ll_backend__follow_vars__ArgsInfos_89, &ll_backend__follow_vars__InVarInfos_90, &ll_backend__follow_vars__V_91_91);
                    }
                    {
                      mercury__list__filter_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_2[0], (MR_Word) &ll_backend__follow_vars_scalar_common_2[1], ll_backend__follow_vars__InVarInfos_90, &ll_backend__follow_vars__InVarInfosR_92, &ll_backend__follow_vars__InVarInfosF_93);
                    }
                    {
                      mercury__assoc_list__keys_2_p_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__TypeCtorInfo_179_179, ll_backend__follow_vars__InVarInfosR_92, &ll_backend__follow_vars__InVarsR_94);
                    }
                    {
                      mercury__assoc_list__keys_2_p_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__TypeCtorInfo_179_179, ll_backend__follow_vars__InVarInfosF_93, &ll_backend__follow_vars__InVarsF_95);
                    }
                    {
                      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__follow_vars__ModuleInfo_17, &ll_backend__follow_vars__Globals_96);
                    }
                    {
                      ll_backend__follow_vars__V_124_124 = mercury__list__length_1_f_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__InVarsR_94);
                    }
                    {
                      ll_backend__follow_vars__V_125_125 = mercury__list__length_1_f_0(ll_backend__follow_vars__TypeInfo_178_178, ll_backend__follow_vars__InVarsF_95);
                    }
                    {
                      ll_backend__call_gen__generic_call_info_8_p_0(ll_backend__follow_vars__Globals_96, ll_backend__follow_vars__GenericCall_72, ll_backend__follow_vars__V_124_124, ll_backend__follow_vars__V_125_125, &ll_backend__follow_vars__V_97_97, &ll_backend__follow_vars__SpecifierArgInfos_98, &ll_backend__follow_vars__FirstInputR_99, &ll_backend__follow_vars__V_100_100);
                    }
                    {
                      ll_backend__follow_vars__V_126_126 = mercury__map__init_0_f_0(ll_backend__follow_vars__TypeInfo_178_178, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
                    }
                    {
                      ll_backend__follow_vars__find_follow_vars_from_arginfo_7_p_0(ll_backend__follow_vars__SpecifierArgInfos_98, ll_backend__follow_vars__V_126_126, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_127_127, (MR_Integer) 1, &ll_backend__follow_vars__V_102_102, (MR_Integer) 1, &ll_backend__follow_vars__V_103_103);
                    }
                    {
                      ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0((MR_Integer) 0, ll_backend__follow_vars__InVarsR_94, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_127_127, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_131_131, ll_backend__follow_vars__FirstInputR_99, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117);
                    }
                    {
                      ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_p_0((MR_Integer) 1, ll_backend__follow_vars__InVarsF_95, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_131_131, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, (MR_Integer) 1, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
                    *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
                    *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
                  }
                  break;
              }
              *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__follow_vars__GoalExpr_14 = ll_backend__follow_vars__GoalExpr0_13;
              *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
              *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
              *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
              *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__follow_vars__ConjType_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word ll_backend__follow_vars__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
              MR_Word ll_backend__follow_vars__Goals_23;

              switch (ll_backend__follow_vars__ConjType_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(ll_backend__follow_vars__Goals0_22, &ll_backend__follow_vars__Goals_23, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      ll_backend__follow_vars__find_follow_vars_in_conj_11_p_0(ll_backend__follow_vars__Goals0_22, &ll_backend__follow_vars__Goals_23, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, (MR_Integer) 0, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__follow_vars__GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__ConjType_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__follow_vars__Goals_23));
              }
              *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__follow_vars__Goals0_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word ll_backend__follow_vars__Goals_169;

              {
                hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113);
              }
              {
                ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_p_0(ll_backend__follow_vars__Goals0_168, &ll_backend__follow_vars__Goals_169, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__follow_vars__GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__Goals_169));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__follow_vars__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word ll_backend__follow_vars__Det_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
              MR_Word ll_backend__follow_vars__Cases0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
              MR_Word ll_backend__follow_vars__Cases_27;

              {
                hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113);
              }
              {
                ll_backend__follow_vars__find_follow_vars_in_cases_10_p_0(ll_backend__follow_vars__Cases0_26, &ll_backend__follow_vars__Cases_27, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__follow_vars__GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__Var_24));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__follow_vars__Det_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__follow_vars__Cases_27));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__follow_vars__Reason_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word ll_backend__follow_vars__SubGoal0_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
              MR_Word ll_backend__follow_vars__SubGoal_171;
              MR_Word ll_backend__follow_vars__FGT_57;
              MR_Word ll_backend__follow_vars__V_56_56;

              ll_backend__follow_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__follow_vars__Reason_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Reason_55, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (ll_backend__follow_vars__succeeded)
                {
                  ll_backend__follow_vars__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Reason_55, (MR_Integer) 1)));
                  ll_backend__follow_vars__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__Reason_55, (MR_Integer) 2)));
                  switch (ll_backend__follow_vars__FGT_57) {
                    default:
                      ll_backend__follow_vars__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      ll_backend__follow_vars__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      ll_backend__follow_vars__succeeded = MR_TRUE;
                      break;
                  }
                }
              if (ll_backend__follow_vars__succeeded)
                {
                  ll_backend__follow_vars__SubGoal_171 = ll_backend__follow_vars__SubGoal0_170;
                  *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118;
                  *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116;
                  *ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114;
                }
              else
                {
                  ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__SubGoal0_170, &ll_backend__follow_vars__SubGoal_171, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__follow_vars__GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__Reason_55));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__follow_vars__SubGoal_171));
              }
              *ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113 = ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__follow_vars__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 1)));
              MR_Word ll_backend__follow_vars__Cond0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 2)));
              MR_Word ll_backend__follow_vars__Then0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 3)));
              MR_Word ll_backend__follow_vars__Else0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__follow_vars__GoalExpr0_13, (MR_Integer) 4)));
              MR_Word ll_backend__follow_vars__Then1_35;
              MR_Word ll_backend__follow_vars__FollowVarsMapThen_36;
              MR_Integer ll_backend__follow_vars__NextNonReservedThenR_37;
              MR_Integer ll_backend__follow_vars__NextNonReservedThenF_38;
              MR_Word ll_backend__follow_vars__FollowVarsThen_39;
              MR_Word ll_backend__follow_vars__Then_40;
              MR_Word ll_backend__follow_vars__Cond1_41;
              MR_Word ll_backend__follow_vars__FollowVarsCond_45;
              MR_Word ll_backend__follow_vars__Cond_46;
              MR_Word ll_backend__follow_vars__Else1_47;
              MR_Word ll_backend__follow_vars__FollowVarsMapElse_48;
              MR_Integer ll_backend__follow_vars__NextNonReservedElseR_49;
              MR_Integer ll_backend__follow_vars__NextNonReservedElseF_50;
              MR_Word ll_backend__follow_vars__FollowVarsElse_51;
              MR_Word ll_backend__follow_vars__Else_52;
              MR_Word ll_backend__follow_vars__V_146_146;
              MR_Word ll_backend__follow_vars__V_147_147;
              MR_Word ll_backend__follow_vars__V_148_148;

              {
                ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__Then0_30, &ll_backend__follow_vars__Then1_35, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, &ll_backend__follow_vars__FollowVarsMapThen_36, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, &ll_backend__follow_vars__NextNonReservedThenR_37, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, &ll_backend__follow_vars__NextNonReservedThenF_38);
              }
              {
                ll_backend__follow_vars__FollowVarsThen_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsThen_39, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsMapThen_36));
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsThen_39, 1) = ((MR_Box) (ll_backend__follow_vars__NextNonReservedThenR_37));
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsThen_39, 2) = ((MR_Box) (ll_backend__follow_vars__NextNonReservedThenF_38));
              }
              {
                ll_backend__follow_vars__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_146_146, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsThen_39));
              }
              {
                hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_146_146, ll_backend__follow_vars__Then1_35, &ll_backend__follow_vars__Then_40);
              }
              {
                ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__Cond0_29, &ll_backend__follow_vars__Cond1_41, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__FollowVarsMapThen_36, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115, ll_backend__follow_vars__NextNonReservedThenR_37, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117, ll_backend__follow_vars__NextNonReservedThenF_38, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119);
              }
              {
                ll_backend__follow_vars__FollowVarsCond_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsCond_45, 0) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_115));
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsCond_45, 1) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_117));
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsCond_45, 2) = ((MR_Box) (*ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_119));
              }
              {
                ll_backend__follow_vars__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_147_147, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsCond_45));
              }
              {
                hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_147_147, ll_backend__follow_vars__Cond1_41, &ll_backend__follow_vars__Cond_46);
              }
              {
                ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__follow_vars__Else0_31, &ll_backend__follow_vars__Else1_47, ll_backend__follow_vars__VarTypes_16, ll_backend__follow_vars__ModuleInfo_17, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, &ll_backend__follow_vars__FollowVarsMapElse_48, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_116, &ll_backend__follow_vars__NextNonReservedElseR_49, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_118, &ll_backend__follow_vars__NextNonReservedElseF_50);
              }
              {
                ll_backend__follow_vars__FollowVarsElse_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsElse_51, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsMapElse_48));
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsElse_51, 1) = ((MR_Box) (ll_backend__follow_vars__NextNonReservedElseR_49));
                MR_hl_field(MR_mktag(0), ll_backend__follow_vars__FollowVarsElse_51, 2) = ((MR_Box) (ll_backend__follow_vars__NextNonReservedElseF_50));
              }
              {
                ll_backend__follow_vars__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__follow_vars__V_148_148, 0) = ((MR_Box) (ll_backend__follow_vars__FollowVarsElse_51));
              }
              {
                hlds__hlds_llds__goal_set_follow_vars_3_p_0(ll_backend__follow_vars__V_148_148, ll_backend__follow_vars__Else1_47, &ll_backend__follow_vars__Else_52);
              }
              {
                hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_114, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_0_112, ll_backend__follow_vars__STATE_VARIABLE_GoalInfo_113);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__follow_vars__GoalExpr_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__follow_vars__Vars_28));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__follow_vars__Cond_46));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__follow_vars__Then_40));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__follow_vars__Else_52));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.follow_vars", (MR_String) "predicate \140ll_backend.follow_vars.find_follow_vars_in_goal_expr\'/12", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__follow_vars__find_final_follow_vars_2_7_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word ll_backend__follow_vars__HeadVar__2_2,
  MR_Word * ll_backend__follow_vars__HeadVar__3_3,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__follow_vars__succeeded;

        if ((ll_backend__follow_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_7 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
            *ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_5 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
            *ll_backend__follow_vars__HeadVar__3_3 = ll_backend__follow_vars__HeadVar__2_2;
          }
        else
          {
            MR_Word ll_backend__follow_vars__ArgLoc_17;
            MR_Word ll_backend__follow_vars__Mode_18;
            MR_Word ll_backend__follow_vars__Var_19;
            MR_Word ll_backend__follow_vars__ArgInfoVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__follow_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__follow_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_33_33, (MR_Integer) 0)));
            MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35;
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37;
            MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40;

            ll_backend__follow_vars__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_33_33, (MR_Integer) 1)));
            ll_backend__follow_vars__ArgLoc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_34_34, (MR_Integer) 0)));
            ll_backend__follow_vars__Mode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__V_34_34, (MR_Integer) 1)));
            switch (ll_backend__follow_vars__Mode_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35 = ll_backend__follow_vars__HeadVar__2_2;
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__follow_vars__RegType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__ArgLoc_17, (MR_Integer) 0)));
                  MR_Integer ll_backend__follow_vars__RegNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__ArgLoc_17, (MR_Integer) 1)));
                  MR_Word ll_backend__follow_vars__Locn_26;

                  {
                    ll_backend__follow_vars__Locn_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_26, 0) = ((MR_Box) (ll_backend__follow_vars__RegType_24));
                    MR_hl_field(MR_mktag(1), ll_backend__follow_vars__Locn_26, 1) = ((MR_Box) (ll_backend__follow_vars__RegNum_25));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__follow_vars_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__follow_vars__Var_19)), ((MR_Box) (ll_backend__follow_vars__Locn_26)), ll_backend__follow_vars__HeadVar__2_2, &ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35);
                  }
                  switch (ll_backend__follow_vars__RegType_24) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Integer ll_backend__follow_vars__V_36_36 = (ll_backend__follow_vars__RegNum_25 + (MR_Integer) 1);

                        {
                          mercury__int__max_3_p_0(ll_backend__follow_vars__V_36_36, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37);
                        }
                        ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__follow_vars__V_39_39 = (ll_backend__follow_vars__RegNum_25 + (MR_Integer) 1);

                        {
                          mercury__int__max_3_p_0(ll_backend__follow_vars__V_39_39, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4, &ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40);
                        }
                        ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35 = ll_backend__follow_vars__HeadVar__2_2;
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4;
                  ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__follow_vars__HeadVar__1__tmp_copy_1 = ll_backend__follow_vars__ArgInfoVars_20;
              MR_Word ll_backend__follow_vars__HeadVar__2__tmp_copy_2 = ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_35_35;
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0__tmp_copy_4 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_40_40;
              MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0__tmp_copy_6 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_37_37;

              ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_6 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0__tmp_copy_6;
              ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_4 = ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0__tmp_copy_4;
              ll_backend__follow_vars__HeadVar__2_2 = ll_backend__follow_vars__HeadVar__2__tmp_copy_2;
              ll_backend__follow_vars__HeadVar__1_1 = ll_backend__follow_vars__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(
  MR_Word ll_backend__follow_vars__HeadVar__1_1,
  MR_Word * ll_backend__follow_vars__HeadVar__2_2,
  MR_Word ll_backend__follow_vars__VarTypes_15,
  MR_Word ll_backend__follow_vars__ModuleInfo_16,
  MR_Word ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_20,
  MR_Word * ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_21,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_22,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_23,
  MR_Integer ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_24,
  MR_Integer * ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_25)
{
  {
    MR_bool ll_backend__follow_vars__succeeded;
    MR_Word ll_backend__follow_vars__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__follow_vars__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__follow_vars__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__follow_vars__GoalExpr_13;
    MR_Word ll_backend__follow_vars__GoalInfo_14;

    {
      ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_p_0(ll_backend__follow_vars__GoalExpr0_11, &ll_backend__follow_vars__GoalExpr_13, ll_backend__follow_vars__GoalInfo0_12, &ll_backend__follow_vars__GoalInfo_14, ll_backend__follow_vars__VarTypes_15, ll_backend__follow_vars__ModuleInfo_16, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_0_20, ll_backend__follow_vars__STATE_VARIABLE_FollowVarsMap_21, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_0_22, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedR_23, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_0_24, ll_backend__follow_vars__STATE_VARIABLE_NextNonReservedF_25);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__follow_vars__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__follow_vars__GoalExpr_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__follow_vars__GoalInfo_14));
    }
  }
}

void MR_CALL 
ll_backend__follow_vars__find_final_follow_vars_4_p_0(
  MR_Word ll_backend__follow_vars__ProcInfo_5,
  MR_Word * ll_backend__follow_vars__FollowVarsMap_6,
  MR_Integer * ll_backend__follow_vars__NextNonReservedR_7,
  MR_Integer * ll_backend__follow_vars__NextNonReservedF_8)
{
  {
    MR_bool ll_backend__follow_vars__succeeded;
    MR_Word ll_backend__follow_vars__TypeInfo_16_16;
    MR_Word ll_backend__follow_vars__ArgInfo_9;
    MR_Word ll_backend__follow_vars__HeadVars_10;
    MR_Word ll_backend__follow_vars__ArgInfoHeadVars_11;
    MR_Word ll_backend__follow_vars__FollowVarsMap0_12;

    {
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__follow_vars__ProcInfo_5, &ll_backend__follow_vars__ArgInfo_9);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__follow_vars__ProcInfo_5, &ll_backend__follow_vars__HeadVars_10);
    }
    ll_backend__follow_vars__TypeInfo_16_16 = (MR_Word) &ll_backend__follow_vars_scalar_common_1[0];
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__follow_vars__TypeInfo_16_16, ll_backend__follow_vars__ArgInfo_9, ll_backend__follow_vars__HeadVars_10, &ll_backend__follow_vars__ArgInfoHeadVars_11);
    }
    {
      mercury__map__init_1_p_0(ll_backend__follow_vars__TypeInfo_16_16, (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, &ll_backend__follow_vars__FollowVarsMap0_12);
    }
    {
      ll_backend__follow_vars__find_final_follow_vars_2_7_p_0(ll_backend__follow_vars__ArgInfoHeadVars_11, ll_backend__follow_vars__FollowVarsMap0_12, ll_backend__follow_vars__FollowVarsMap_6, (MR_Integer) 1, ll_backend__follow_vars__NextNonReservedR_7, (MR_Integer) 1, ll_backend__follow_vars__NextNonReservedF_8);
    }
  }
}

void mercury__ll_backend__follow_vars__init(void)
{
}

void mercury__ll_backend__follow_vars__init_type_tables(void)
{
}

void mercury__ll_backend__follow_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.follow_vars. */
