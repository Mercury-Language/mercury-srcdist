/*
** Automatically generated from `simplify_goal_conj.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module check_hlds.simplify.simplify_goal_conj. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__simplify_goal_conj__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_conj.mih"


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
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
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



struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s {
  MR_bool check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded;
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20;
  jmp_buf check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__commit_0;
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__GoalInfo_58;
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Detism_59;
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_61_61;
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_62_62;
  MR_Word check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_64_64;
  MR_Box check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__conv0_V_61_61;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6_6,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_9_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Trace_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_7,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_9);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_conj__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjInfo_6,
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_7,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_8,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Subn_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__Var0_5,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Var_6);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_3(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_2(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_4(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[1][6];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_conj_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__simplify_goal_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_conj",
  (MR_String) "var_renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_goal_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

    {
      check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_goal_conj__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(&check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_goal_conj__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6_6,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              *check_hlds__simplify__simplify_goal_conj__Goals_3 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1);
            }
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9;
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__SubGoals_32;
            MR_Word check_hlds__simplify__simplify_goal_conj__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__V_58_58;
            MR_Word check_hlds__simplify__simplify_goal_conj__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 1)));

            check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_57_57)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_57_57, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_57_57, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_conj__SubGoals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_57_57, (MR_Integer) 2)));
                check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_58_58 == (MR_Integer) 0);
              }
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_34;

                {
                  check_hlds__simplify__simplify_goal_conj__Goals1_34 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__SubGoals_32, check_hlds__simplify__simplify_goal_conj__Goals0_25);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_conj__Goals1_34;

                  check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal1_36;
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_61_61;
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_62_62;
                MR_Word check_hlds__simplify__simplify_goal_conj__SubGoals1_37;
                MR_Word check_hlds__simplify__simplify_goal_conj__V_63_63;
                MR_Word check_hlds__simplify__simplify_goal_conj__V_64_64;
                MR_Word check_hlds__simplify__simplify_goal_conj__V_38_38;

                {
                  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_24, &check_hlds__simplify__simplify_goal_conj__Goal1_36, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, check_hlds__simplify__simplify_goal_conj__HeadVar__6_6, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_61_61, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_62_62);
                }
                check_hlds__simplify__simplify_goal_conj__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_conj__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_63_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_63_63, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_conj__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_63_63, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_conj__SubGoals1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_63_63, (MR_Integer) 2)));
                    check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_64_64 == (MR_Integer) 0);
                  }
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                  {
                    MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_78;

                    {
                      check_hlds__simplify__simplify_goal_conj__Goals1_78 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__SubGoals1_37, check_hlds__simplify__simplify_goal_conj__Goals0_25);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_conj__Goals1_78;
                      MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_62_62;

                      check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9;
                      check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_39;

                    {
                      hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal1_36, check_hlds__simplify__simplify_goal_conj__HeadVar__6_6, &check_hlds__simplify__simplify_goal_conj__InstMap1_39);
                    }
                    {
                      check_hlds__simplify__simplify_goal_conj__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__simplify__simplify_goal_conj__InstMap1_39);
                    }
                    if (!(check_hlds__simplify__simplify_goal_conj__succeeded))
                      {
                        MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 1)));
                        MR_Word check_hlds__simplify__simplify_goal_conj__Detism1_42;
                        MR_Word check_hlds__simplify__simplify_goal_conj__V_94_94;
                        MR_Word check_hlds__simplify__simplify_goal_conj__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 0)));
                        MR_Word check_hlds__simplify__simplify_goal_conj__V_43_43;

                        {
                          check_hlds__simplify__simplify_goal_conj__Detism1_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo1_41);
                        }
                        {
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_conj__Detism1_42, &check_hlds__simplify__simplify_goal_conj__V_43_43, &check_hlds__simplify__simplify_goal_conj__V_94_94);
                        }
                        check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_Integer) 0 == check_hlds__simplify__simplify_goal_conj__V_94_94);
                      }
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                      {
                        MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_92_92;
                        MR_Word check_hlds__simplify__simplify_goal_conj__DeletedCallCallees0_44;
                        MR_Word check_hlds__simplify__simplify_goal_conj__SubGoalCalledProcs_45;
                        MR_Word check_hlds__simplify__simplify_goal_conj__DeletedCallCallees_46;
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_70_70;
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_73_80;

                        {
                          check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_62_62, &check_hlds__simplify__simplify_goal_conj__DeletedCallCallees0_44);
                        }
                        {
                          check_hlds__simplify__simplify_goal_conj__SubGoalCalledProcs_45 = hlds__goal_util__goals_proc_refs_1_f_0(check_hlds__simplify__simplify_goal_conj__Goals0_25);
                        }
                        {
                          mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__simplify__simplify_goal_conj__SubGoalCalledProcs_45, check_hlds__simplify__simplify_goal_conj__DeletedCallCallees0_44, &check_hlds__simplify__simplify_goal_conj__DeletedCallCallees_46);
                        }
                        {
                          check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(check_hlds__simplify__simplify_goal_conj__DeletedCallCallees_46, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_62_62, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_10);
                        }
                        check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_92_92 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                        {
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_70_70 = mercury__cord__snoc_2_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_92_92, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal1_36)));
                        }
                        {
                          MR_Word check_hlds__simplify__simplify_goal_conj__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 0)));
                          MR_Word check_hlds__simplify__simplify_goal_conj__V_72_72;
                          MR_Word check_hlds__simplify__simplify_goal_conj__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal1_36, (MR_Integer) 1)));

                          check_hlds__simplify__simplify_goal_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_71_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_71_71, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (check_hlds__simplify__simplify_goal_conj__succeeded)
                            {
                              check_hlds__simplify__simplify_goal_conj__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_71_71, (MR_Integer) 1)));
                              check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                        if (!(check_hlds__simplify__simplify_goal_conj__succeeded))
                          check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__Goals0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_73_80 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_70_70;
                        else
                          {
                            MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 1)));
                            MR_Word check_hlds__simplify__simplify_goal_conj__Context_50;
                            MR_Word check_hlds__simplify__simplify_goal_conj__FailGoal_51;
                            MR_Word check_hlds__simplify__simplify_goal_conj__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal0_24, (MR_Integer) 0)));

                            {
                              check_hlds__simplify__simplify_goal_conj__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_49);
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__FailGoal_51 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_50);
                            }
                            {
                              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_73_80 = mercury__cord__snoc_2_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_92_92, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_70_70, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__FailGoal_51)));
                            }
                          }
                        {
                          *check_hlds__simplify__simplify_goal_conj__Goals_3 = mercury__cord__list_1_f_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_92_92, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_73_80);
                        }
                        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_61_61;
                      }
                    else
                      {
                        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_73_81;

                        {
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_73_81 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal1_36)));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0__tmp_copy_1 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_73_81;
                          MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2 = check_hlds__simplify__simplify_goal_conj__Goals0_25;
                          MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__6__tmp_copy_6 = check_hlds__simplify__simplify_goal_conj__InstMap1_39;
                          MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0__tmp_copy_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_61_61;
                          MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_62_62;

                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0__tmp_copy_9;
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0__tmp_copy_7;
                          check_hlds__simplify__simplify_goal_conj__HeadVar__6_6 = check_hlds__simplify__simplify_goal_conj__HeadVar__6__tmp_copy_6;
                          check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = check_hlds__simplify__simplify_goal_conj__HeadVar__2__tmp_copy_2;
                          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0_1 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_PrevGoals_0__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj____Compare____var_renaming_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_4 = check_hlds__simplify__simplify_goal_conj__HeadVar__2_2;
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_5 = check_hlds__simplify__simplify_goal_conj__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_2[0], check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_conj____Unify____var_renaming_0_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_3 = check_hlds__simplify__simplify_goal_conj__HeadVar__1_1;
    MR_Word check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_4 = check_hlds__simplify__simplify_goal_conj__HeadVar__2_2;

    {
      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_2[0], ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__simplify_goal_conj__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__1_1,
  MR_Word * check_hlds__simplify__simplify_goal_conj__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__3_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__4_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

    if ((check_hlds__simplify__simplify_goal_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_conj__Goal_16;
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals_17;
        MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_23;
        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26;
        MR_Word check_hlds__simplify__simplify_goal_conj___Common1_22;

        {
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_14, &check_hlds__simplify__simplify_goal_conj__Goal_16, check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, check_hlds__simplify__simplify_goal_conj__HeadVar__4_4, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, &check_hlds__simplify__simplify_goal_conj___Common1_22, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_6, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26);
        }
        {
          hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal_16, check_hlds__simplify__simplify_goal_conj__HeadVar__4_4, &check_hlds__simplify__simplify_goal_conj__InstMap1_23);
        }
        {
          check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_15, &check_hlds__simplify__simplify_goal_conj__Goals_17, check_hlds__simplify__simplify_goal_conj__HeadVar__3_3, check_hlds__simplify__simplify_goal_conj__InstMap1_23, check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_26, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__simplify_goal_conj__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_17));
        }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_9_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Trace_1,
  MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_2,
  MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_3,
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5_5,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_7,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

        if ((check_hlds__simplify__simplify_goal_conj__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_9 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8;
            *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_7 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__Goals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_32_32;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64;
            MR_Word check_hlds__simplify__simplify_goal_conj__Unif_48;
            MR_Word check_hlds__simplify__simplify_goal_conj__LeftVar0_51;
            MR_Word check_hlds__simplify__simplify_goal_conj__RightVar0_52;
            MR_Word check_hlds__simplify__simplify_goal_conj__LeftVar_53;
            MR_Word check_hlds__simplify__simplify_goal_conj__RightVar_54;
            MR_Word check_hlds__simplify__simplify_goal_conj__CanElimRight_56;
            MR_Word check_hlds__simplify__simplify_goal_conj__ElimVar_57;
            MR_Word check_hlds__simplify__simplify_goal_conj__ReplacementVar_58;
            MR_Word check_hlds__simplify__simplify_goal_conj__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_24, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_conj__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__Goal_24, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_conj__V_45_45;
            MR_Word check_hlds__simplify__simplify_goal_conj__V_46_46;
            MR_Word check_hlds__simplify__simplify_goal_conj__V_47_47;
            MR_Word check_hlds__simplify__simplify_goal_conj__V_49_49;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_34_63;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_62;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_78;
            MR_Word check_hlds__simplify__simplify_goal_conj__V_61_61;
            MR_String check_hlds__simplify__simplify_goal_conj__Name_74;
            MR_String check_hlds__simplify__simplify_goal_conj__Suffix_75;
            MR_String check_hlds__simplify__simplify_goal_conj__V_77_77;
            MR_Integer check_hlds__simplify__simplify_goal_conj__V_76_76;
            MR_Word check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_85;
            MR_String check_hlds__simplify__simplify_goal_conj__Name_81;
            MR_String check_hlds__simplify__simplify_goal_conj__Suffix_82;
            MR_String check_hlds__simplify__simplify_goal_conj__V_84_84;
            MR_Integer check_hlds__simplify__simplify_goal_conj__V_83_83;

            check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__V_59_59)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_conj__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_conj__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 2)));
                check_hlds__simplify__simplify_goal_conj__Unif_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 3)));
                check_hlds__simplify__simplify_goal_conj__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__V_59_59, (MR_Integer) 4)));
                check_hlds__simplify__simplify_goal_conj__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_conj__Unif_48)) == (MR_mktag((MR_Integer) 2)));
                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_conj__LeftVar0_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_conj__Unif_48, (MR_Integer) 0)));
                    check_hlds__simplify__simplify_goal_conj__RightVar0_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__simplify_goal_conj__Unif_48, (MR_Integer) 1)));
                    {
                      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8, check_hlds__simplify__simplify_goal_conj__LeftVar0_51, &check_hlds__simplify__simplify_goal_conj__LeftVar_53);
                    }
                    {
                      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8, check_hlds__simplify__simplify_goal_conj__RightVar0_52, &check_hlds__simplify__simplify_goal_conj__RightVar_54);
                    }
                    check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_34_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_34_63, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4, check_hlds__simplify__simplify_goal_conj__RightVar_54);
                    }
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                      check_hlds__simplify__simplify_goal_conj__CanElimRight_56 = (MR_Integer) 0;
                    else
                      check_hlds__simplify__simplify_goal_conj__CanElimRight_56 = (MR_Integer) 1;
                    check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      check_hlds__simplify__simplify_goal_conj__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_33_62, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_4, check_hlds__simplify__simplify_goal_conj__LeftVar_53);
                    }
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__CanElimRight_56 == (MR_Integer) 1);
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
                            check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
                            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
                          }
                      }
                    else
                      {
                        switch (check_hlds__simplify__simplify_goal_conj__CanElimRight_56) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
                              check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_String check_hlds__simplify__simplify_goal_conj__Name_67;
                              MR_String check_hlds__simplify__simplify_goal_conj__Suffix_68;
                              MR_String check_hlds__simplify__simplify_goal_conj__V_70_70;
                              MR_Integer check_hlds__simplify__simplify_goal_conj__V_69_69;

                              {
                                check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_conj__VarSet_3, check_hlds__simplify__simplify_goal_conj__LeftVar_53, &check_hlds__simplify__simplify_goal_conj__Name_67);
                              }
                              if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_conj__V_70_70 = (MR_String) "HeadVar__";
                                  {
                                    check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__V_70_70, &check_hlds__simplify__simplify_goal_conj__Suffix_68, check_hlds__simplify__simplify_goal_conj__Name_67);
                                  }
                                  if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                    {
                                      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_68, &check_hlds__simplify__simplify_goal_conj__V_69_69);
                                    }
                                  check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                                }
                              if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
                                  check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
                                }
                              else
                                {
                                  check_hlds__simplify__simplify_goal_conj__ElimVar_57 = check_hlds__simplify__simplify_goal_conj__LeftVar_53;
                                  check_hlds__simplify__simplify_goal_conj__ReplacementVar_58 = check_hlds__simplify__simplify_goal_conj__RightVar_54;
                                }
                            }
                            break;
                        }
                        check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
                      }
                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
                        {
                          mercury__map__det_insert_4_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64, check_hlds__simplify__simplify_goal_conj__TypeInfo_35_64, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__ElimVar_57)), ((MR_Box) (check_hlds__simplify__simplify_goal_conj__ReplacementVar_58)), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_32_32);
                        }
                        {
                          check_hlds__simplify__simplify_goal_conj__V_61_61 = libs__trace_params__trace_level_needs_meaningful_var_names_1_f_0(check_hlds__simplify__simplify_goal_conj__Trace_1);
                        }
                        check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__V_61_61 == (MR_Integer) 1);
                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_conj__succeeded = (check_hlds__simplify__simplify_goal_conj__TraceOptimized_2 == (MR_Integer) 0);
                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
                              {
                                check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                {
                                  check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_78, check_hlds__simplify__simplify_goal_conj__VarSet_3, check_hlds__simplify__simplify_goal_conj__ElimVar_57, &check_hlds__simplify__simplify_goal_conj__Name_74);
                                }
                                if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                  {
                                    check_hlds__simplify__simplify_goal_conj__V_77_77 = (MR_String) "HeadVar__";
                                    {
                                      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__V_77_77, &check_hlds__simplify__simplify_goal_conj__Suffix_75, check_hlds__simplify__simplify_goal_conj__Name_74);
                                    }
                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_75, &check_hlds__simplify__simplify_goal_conj__V_76_76);
                                      }
                                    check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                                    if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                      {
                                        check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                        {
                                          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__varset__search_name_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeCtorInfo_9_85, check_hlds__simplify__simplify_goal_conj__VarSet_3, check_hlds__simplify__simplify_goal_conj__ReplacementVar_58, &check_hlds__simplify__simplify_goal_conj__Name_81);
                                        }
                                        if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                          {
                                            check_hlds__simplify__simplify_goal_conj__V_84_84 = (MR_String) "HeadVar__";
                                            {
                                              check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__append_3_p_1(check_hlds__simplify__simplify_goal_conj__V_84_84, &check_hlds__simplify__simplify_goal_conj__Suffix_82, check_hlds__simplify__simplify_goal_conj__Name_81);
                                            }
                                            if (check_hlds__simplify__simplify_goal_conj__succeeded)
                                              {
                                                check_hlds__simplify__simplify_goal_conj__succeeded = mercury__string__to_int_2_p_0(check_hlds__simplify__simplify_goal_conj__Suffix_82, &check_hlds__simplify__simplify_goal_conj__V_83_83);
                                              }
                                            check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                                          }
                                        check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                                      }
                                  }
                              }
                          }
                        check_hlds__simplify__simplify_goal_conj__succeeded = !(check_hlds__simplify__simplify_goal_conj__succeeded);
                      }
                  }
              }
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_32_32;
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6;
              }
            else
              {
                {
                  check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_24));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6));
                }
                check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__simplify_goal_conj__HeadVar__5__tmp_copy_5 = check_hlds__simplify__simplify_goal_conj__Goals_25;
              MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0__tmp_copy_6 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_33_33;
              MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0__tmp_copy_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_34_34;

              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0_8 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Subn_0__tmp_copy_8;
              check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0_6 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_RevGoals_0__tmp_copy_6;
              check_hlds__simplify__simplify_goal_conj__HeadVar__5_5 = check_hlds__simplify__simplify_goal_conj__HeadVar__5__tmp_copy_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_conj__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_conj__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_conj__wrapper_arg_2)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_conj__closure = check_hlds__simplify__simplify_goal_conj__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_conj__conv0_Var_6;

    {
      check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__simplify__simplify_goal_conj__wrapper_arg_1), &check_hlds__simplify__simplify_goal_conj__conv0_Var_6);
    }
    *check_hlds__simplify__simplify_goal_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__conv0_Var_6));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__ConjInfo_6,
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_7,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Goals_8,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37;
    MR_Word check_hlds__simplify__simplify_goal_conj__ConjNonLocals_10;
    MR_Word check_hlds__simplify__simplify_goal_conj__Subn0_11;
    MR_Word check_hlds__simplify__simplify_goal_conj__ModuleInfo_12;
    MR_Word check_hlds__simplify__simplify_goal_conj__Globals_13;
    MR_Word check_hlds__simplify__simplify_goal_conj__TraceLevel_14;
    MR_Word check_hlds__simplify__simplify_goal_conj__TraceOptimized_15;
    MR_Word check_hlds__simplify__simplify_goal_conj__VarSet0_16;
    MR_Word check_hlds__simplify__simplify_goal_conj__RevGoals_17;
    MR_Word check_hlds__simplify__simplify_goal_conj__Subn1_18;

    {
      check_hlds__simplify__simplify_goal_conj__ConjNonLocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_conj__ConjInfo_6);
    }
    check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
    {
      mercury__map__init_1_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, &check_hlds__simplify__simplify_goal_conj__Subn0_11);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27, &check_hlds__simplify__simplify_goal_conj__ModuleInfo_12);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_goal_conj__ModuleInfo_12, &check_hlds__simplify__simplify_goal_conj__Globals_13);
    }
    {
      libs__globals__get_trace_level_2_p_0(check_hlds__simplify__simplify_goal_conj__Globals_13, &check_hlds__simplify__simplify_goal_conj__TraceLevel_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_goal_conj__Globals_13, (MR_Integer) 122, &check_hlds__simplify__simplify_goal_conj__TraceOptimized_15);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27, &check_hlds__simplify__simplify_goal_conj__VarSet0_16);
    }
    {
      check_hlds__simplify__simplify_goal_conj__find_excess_assigns_in_conj_9_p_0(check_hlds__simplify__simplify_goal_conj__TraceLevel_14, check_hlds__simplify__simplify_goal_conj__TraceOptimized_15, check_hlds__simplify__simplify_goal_conj__VarSet0_16, check_hlds__simplify__simplify_goal_conj__ConjNonLocals_10, check_hlds__simplify__simplify_goal_conj__Goals0_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_conj__RevGoals_17, check_hlds__simplify__simplify_goal_conj__Subn0_11, &check_hlds__simplify__simplify_goal_conj__Subn1_18);
    }
    {
      check_hlds__simplify__simplify_goal_conj__succeeded = mercury__map__is_empty_1_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__Subn1_18);
    }
    if (check_hlds__simplify__simplify_goal_conj__succeeded)
      {
        *check_hlds__simplify__simplify_goal_conj__Goals_8 = check_hlds__simplify__simplify_goal_conj__Goals0_7;
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40;
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47;
        MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_19;
        MR_Word check_hlds__simplify__simplify_goal_conj__Subn_20;
        MR_Word check_hlds__simplify__simplify_goal_conj__RemovedVars_21;
        MR_Word check_hlds__simplify__simplify_goal_conj__VarSet_22;
        MR_Word check_hlds__simplify__simplify_goal_conj__VarTypes0_23;
        MR_Word check_hlds__simplify__simplify_goal_conj__VarTypes_24;
        MR_Word check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_25;
        MR_Word check_hlds__simplify__simplify_goal_conj__RttiVarMaps_26;
        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_32_32;
        MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_33_33;
        MR_Word check_hlds__simplify__simplify_goal_conj__V_34_34;
        MR_Word check_hlds__simplify__simplify_goal_conj__V_35_35;
        MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44;

        {
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__simplify_goal_conj__RevGoals_17, &check_hlds__simplify__simplify_goal_conj__Goals1_19);
        }
        {
          check_hlds__simplify__simplify_goal_conj__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_44_44, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_conj_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_44_44, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_44_44, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Subn1_18));
        }
        check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
        {
          mercury__map__map_values_only_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_47, check_hlds__simplify__simplify_goal_conj__V_44_44, check_hlds__simplify__simplify_goal_conj__Subn1_18, &check_hlds__simplify__simplify_goal_conj__Subn_20);
        }
        {
          hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_conj__Subn_20, check_hlds__simplify__simplify_goal_conj__Goals1_19, check_hlds__simplify__simplify_goal_conj__Goals_8);
        }
        {
          mercury__map__keys_2_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__TypeInfo_37_37, check_hlds__simplify__simplify_goal_conj__Subn0_11, &check_hlds__simplify__simplify_goal_conj__RemovedVars_21);
        }
        {
          mercury__varset__delete_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_conj__RemovedVars_21, check_hlds__simplify__simplify_goal_conj__VarSet0_16, &check_hlds__simplify__simplify_goal_conj__VarSet_22);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_conj__VarSet_22, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_27, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_32_32);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_32_32, &check_hlds__simplify__simplify_goal_conj__VarTypes0_23);
        }
        {
          hlds__vartypes__delete_var_types_3_p_0(check_hlds__simplify__simplify_goal_conj__RemovedVars_21, check_hlds__simplify__simplify_goal_conj__VarTypes0_23, &check_hlds__simplify__simplify_goal_conj__VarTypes_24);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_conj__VarTypes_24, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_32_32, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_33_33);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_33_33, &check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_25);
        }
        check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[1];
        {
          check_hlds__simplify__simplify_goal_conj__V_34_34 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40, check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40);
        }
        {
          check_hlds__simplify__simplify_goal_conj__V_35_35 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_40_40, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
        {
          hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__simplify__simplify_goal_conj__V_34_34, check_hlds__simplify__simplify_goal_conj__V_35_35, check_hlds__simplify__simplify_goal_conj__Subn_20, check_hlds__simplify__simplify_goal_conj__RttiVarMaps0_25, &check_hlds__simplify__simplify_goal_conj__RttiVarMaps_26);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(check_hlds__simplify__simplify_goal_conj__RttiVarMaps_26, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_33_33, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_28);
        }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__find_renamed_var_3_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Subn_4,
  MR_Word check_hlds__simplify__simplify_goal_conj__Var0_5,
  MR_Word * check_hlds__simplify__simplify_goal_conj__Var_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;
        MR_Word check_hlds__simplify__simplify_goal_conj__Var1_7;
        MR_Word check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8 = (MR_Word) &check_hlds__simplify__simplify_goal_conj_scalar_common_1[0];
        MR_Box check_hlds__simplify__simplify_goal_conj__conv0_Var1_7;

        {
          check_hlds__simplify__simplify_goal_conj__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8, check_hlds__simplify__simplify_goal_conj__TypeInfo_8_8, check_hlds__simplify__simplify_goal_conj__Subn_4, ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Var0_5)), &check_hlds__simplify__simplify_goal_conj__conv0_Var1_7);
        }
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
          {
            check_hlds__simplify__simplify_goal_conj__Var1_7 = ((MR_Word) check_hlds__simplify__simplify_goal_conj__conv0_Var1_7);
            check_hlds__simplify__simplify_goal_conj__succeeded = MR_TRUE;
          }
        if (check_hlds__simplify__simplify_goal_conj__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__simplify_goal_conj__Var0__tmp_copy_5 = check_hlds__simplify__simplify_goal_conj__Var1_7;

              check_hlds__simplify__simplify_goal_conj__Var0_5 = check_hlds__simplify__simplify_goal_conj__Var0__tmp_copy_5;
            }
            continue;
          }
        else
          *check_hlds__simplify__simplify_goal_conj__Var_6 = check_hlds__simplify__simplify_goal_conj__Var0_5;
      }
      break;
    }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_11,
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_conj__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_conj__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_conj__succeeded;

    if ((check_hlds__simplify__simplify_goal_conj__Goals0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__Context_19;
        MR_Word check_hlds__simplify__simplify_goal_conj__V_43_43;

        {
          check_hlds__simplify__simplify_goal_conj__Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
        }
        {
          check_hlds__simplify__simplify_goal_conj__V_43_43 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_19);
        }
        *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_43_43, (MR_Integer) 0)));
        *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_43_43, (MR_Integer) 1)));
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27;
        *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29;
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_conj__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 0)));

        if ((check_hlds__simplify__simplify_goal_conj__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoal_21;
            MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22;
            MR_Word check_hlds__simplify__simplify_goal_conj__V_39_39;
            MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41;

            {
              check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__V_45_45, &check_hlds__simplify__simplify_goal_conj__V_39_39, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41);
            }
            check_hlds__simplify__simplify_goal_conj__SingleGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_39_39, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_39_39, (MR_Integer) 1)));
            {
              check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_22, check_hlds__simplify__simplify_goal_conj__SingleGoal_21, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_41_41, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
            }
          }
        else
          {
            {
              check_hlds__simplify__simplify_goal_conj__succeeded = check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29);
            }
            if (check_hlds__simplify__simplify_goal_conj__succeeded)
              {
                check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_11, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals_26;
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34;
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal0_52;
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_53;
                MR_Word check_hlds__simplify__simplify_goal_conj__Goal_54;
                MR_Word check_hlds__simplify__simplify_goal_conj__Goals_55;
                MR_Word check_hlds__simplify__simplify_goal_conj__InstMap1_61;
                MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64;
                MR_Word check_hlds__simplify__simplify_goal_conj___Common1_60;

                *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = check_hlds__simplify__simplify_goal_conj__GoalInfo0_13;
                check_hlds__simplify__simplify_goal_conj__Goal0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_conj__Goals0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals0_11, (MR_Integer) 1)));
                {
                  check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_conj__Goal0_52, &check_hlds__simplify__simplify_goal_conj__Goal_54, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, &check_hlds__simplify__simplify_goal_conj___Common1_60, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_29, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64);
                }
                {
                  hlds__goal_util__update_instmap_3_p_0(check_hlds__simplify__simplify_goal_conj__Goal_54, check_hlds__simplify__simplify_goal_conj__InstMap0_16, &check_hlds__simplify__simplify_goal_conj__InstMap1_61);
                }
                {
                  check_hlds__simplify__simplify_goal_conj__simplify_par_conjuncts_7_p_0(check_hlds__simplify__simplify_goal_conj__Goals0_53, &check_hlds__simplify__simplify_goal_conj__Goals_55, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap1_61, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_26_64, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34);
                }
                {
                  check_hlds__simplify__simplify_goal_conj__Goals_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_26, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goal_54));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_conj__Goals_26, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_55));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__Goals_26));
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_34_34, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_30);
                }
                *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_28 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_27;
              }
          }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_3(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

    (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_61_61 = ((MR_Word) (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__conv0_V_61_61);
    {
      check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_2(check_hlds__simplify__simplify_goal_conj__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_2(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

    {
      MR_Word check_hlds__simplify__simplify_goal_conj___GoalExpr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_61_61, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__simplify_goal_conj__V_60_60;

      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__GoalInfo_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_61_61, (MR_Integer) 1)));
      {
        (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Detism_59 = hlds__hlds_goal__goal_info_get_determinism_1_f_0((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__GoalInfo_58);
      }
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_62_62 = (MR_Integer) 3;
      {
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Detism_59, &check_hlds__simplify__simplify_goal_conj__V_60_60, &(check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_64_64);
      }
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = ((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_62_62 == (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__V_64_64);
      if ((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
        {
          check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_1(check_hlds__simplify__simplify_goal_conj__env_ptr);
        }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_4(
  void * check_hlds__simplify__simplify_goal_conj__env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s * check_hlds__simplify__simplify_goal_conj__env_ptr = (struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s *) check_hlds__simplify__simplify_goal_conj__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__conv0_V_61_61, (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20, check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_3, check_hlds__simplify__simplify_goal_conj__env_ptr);
          }
        }
        (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__simplify__simplify_goal_conj__env_ptr)->check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_conj__Goals0_11,
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_conj__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_conj__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_conj__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_conj__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_33,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_34,
  MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36)
{
  {
    struct check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0_s check_hlds__simplify__simplify_goal_conj__env;

    {
      MR_Word check_hlds__simplify__simplify_goal_conj__Goals1_19;
      MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37;
      MR_Word check_hlds__simplify__simplify_goal_conj__V_38_38;
      MR_Word check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;

      {
        (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35);
      }
      if ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
        {
          check_hlds__simplify__simplify_goal_conj__excess_assigns_in_conj_5_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__Goals0_11, &check_hlds__simplify__simplify_goal_conj__Goals1_19, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37);
        }
      else
        {
          check_hlds__simplify__simplify_goal_conj__Goals1_19 = check_hlds__simplify__simplify_goal_conj__Goals0_11;
          check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_0_35;
        }
      {
        check_hlds__simplify__simplify_goal_conj__V_38_38 = mercury__cord__empty_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
      }
      {
        check_hlds__simplify__simplify_goal_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_10_p_0(check_hlds__simplify__simplify_goal_conj__V_38_38, check_hlds__simplify__simplify_goal_conj__Goals1_19, &(check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20, check_hlds__simplify__simplify_goal_conj__NestedContext0_15, check_hlds__simplify__simplify_goal_conj__InstMap0_16, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_0_33, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Common_34, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_37_37, &check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40);
      }
      if (((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word check_hlds__simplify__simplify_goal_conj__Context_21;
          MR_Word check_hlds__simplify__simplify_goal_conj__V_51_51;

          {
            check_hlds__simplify__simplify_goal_conj__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
          }
          {
            check_hlds__simplify__simplify_goal_conj__V_51_51 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_conj__Context_21);
          }
          *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_51_51, (MR_Integer) 0)));
          *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_51_51, (MR_Integer) 1)));
          *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;
        }
      else
        {
          MR_Word check_hlds__simplify__simplify_goal_conj__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__simplify_goal_conj__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20, (MR_Integer) 0)));

          if ((check_hlds__simplify__simplify_goal_conj__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_55_55, (MR_Integer) 0)));
              MR_Word check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__V_55_55, (MR_Integer) 1)));

              {
                check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, check_hlds__simplify__simplify_goal_conj__SingleGoalInfo_24, check_hlds__simplify__simplify_goal_conj__SingleGoalExpr_23, check_hlds__simplify__simplify_goal_conj__GoalExpr_12, check_hlds__simplify__simplify_goal_conj__GoalInfo_14, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40, check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36);
              }
            }
          else
            {
              MR_Word check_hlds__simplify__simplify_goal_conj__Detism_28;
              MR_Word check_hlds__simplify__simplify_goal_conj__CanFail_29;
              MR_Word check_hlds__simplify__simplify_goal_conj__V_42_42;
              MR_Word check_hlds__simplify__simplify_goal_conj__V_53_53;

              {
                check_hlds__simplify__simplify_goal_conj__Detism_28 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_conj__GoalInfo0_13);
              }
              {
                (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40);
              }
              if ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
                {
                  check_hlds__simplify__simplify_goal_conj__V_42_42 = (MR_Integer) 0;
                  {
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__simplify__simplify_goal_conj__Detism_28, &check_hlds__simplify__simplify_goal_conj__CanFail_29, &check_hlds__simplify__simplify_goal_conj__V_53_53);
                  }
                  (check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded = (check_hlds__simplify__simplify_goal_conj__V_42_42 == check_hlds__simplify__simplify_goal_conj__V_53_53);
                  if ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
                    {
                      check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_4(&check_hlds__simplify__simplify_goal_conj__env);
                    }
                }
              if ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__succeeded)
                {
                  MR_Word check_hlds__simplify__simplify_goal_conj__InnerDetism_30;
                  MR_Word check_hlds__simplify__simplify_goal_conj__InnerInfo_31;
                  MR_Word check_hlds__simplify__simplify_goal_conj__InnerGoal_32;
                  MR_Word check_hlds__simplify__simplify_goal_conj__V_44_44;

                  {
                    parse_tree__prog_data__determinism_components_3_p_1(&check_hlds__simplify__simplify_goal_conj__InnerDetism_30, check_hlds__simplify__simplify_goal_conj__CanFail_29, (MR_Integer) 3);
                  }
                  {
                    hlds__hlds_goal__goal_info_set_determinism_3_p_0(check_hlds__simplify__simplify_goal_conj__InnerDetism_30, check_hlds__simplify__simplify_goal_conj__GoalInfo0_13, &check_hlds__simplify__simplify_goal_conj__InnerInfo_31);
                  }
                  {
                    check_hlds__simplify__simplify_goal_conj__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_44_44, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_conj__V_44_44, 2) = ((MR_Box) ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20));
                  }
                  {
                    check_hlds__simplify__simplify_goal_conj__InnerGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__InnerGoal_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__V_44_44));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_conj__InnerGoal_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__InnerInfo_31));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_conj_scalar_common_1[2])));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_conj__InnerGoal_32));
                  }
                }
              else
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__simplify__simplify_goal_conj__GoalExpr_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((check_hlds__simplify__simplify_goal_conj__env).check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0_env_0__Goals_20));
                  }
                }
              *check_hlds__simplify__simplify_goal_conj__GoalInfo_14 = check_hlds__simplify__simplify_goal_conj__GoalInfo0_13;
              *check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_36 = check_hlds__simplify__simplify_goal_conj__STATE_VARIABLE_Info_40_40;
            }
        }
    }
  }
}

void mercury__check_hlds__simplify__simplify_goal_conj__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_conj__check_hlds__simplify__simplify_goal_conj__type_ctor_info_var_renaming_0);
}

void mercury__check_hlds__simplify__simplify_goal_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_goal_conj. */
