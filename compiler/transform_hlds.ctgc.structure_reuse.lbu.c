/*
** Automatically generated from `structure_reuse.lbu.m'
** by the Mercury compiler,
** version rotd-2017-10-08
** configured for x86_64-pc-linux-gnu.
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


// :- module transform_hlds.ctgc.structure_reuse.lbu.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__lbu__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.lbu.mih"


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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
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
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTypes_8,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13,
  MR_Word STATE_VARIABLE_LBU_0_14,
  MR_Word * STATE_VARIABLE_LBU_15);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTypes_8,
  MR_Word STATE_VARIABLE_Case_0_16,
  MR_Word * STATE_VARIABLE_Case_17,
  MR_Word STATE_VARIABLE_LBU_0_18,
  MR_Word * STATE_VARIABLE_LBU_19);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_2_6_p_0(
  MR_Word VarTypes_7,
  MR_Word Info0_8,
  MR_Word STATE_VARIABLE_Expr_0_67,
  MR_Word * STATE_VARIABLE_Expr_68,
  MR_Word STATE_VARIABLE_LBU_0_69,
  MR_Word * STATE_VARIABLE_LBU_70);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_TopGoal_0_13,
  MR_Word * STATE_VARIABLE_TopGoal_14,
  MR_Word STATE_VARIABLE_LBU_0_15,
  MR_Word * STATE_VARIABLE_LBU_16);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_Goals_0_10,
  MR_Word * STATE_VARIABLE_Goals_11,
  MR_Word STATE_VARIABLE_LBU_0_12,
  MR_Word * STATE_VARIABLE_LBU_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_Cases_0_10,
  MR_Word * STATE_VARIABLE_Cases_11,
  MR_Word STATE_VARIABLE_LBU_0_12,
  MR_Word * STATE_VARIABLE_LBU_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_Goals_0_9,
  MR_Word * STATE_VARIABLE_Goals_10,
  MR_Word STATE_VARIABLE_LBU_0_11,
  MR_Word * STATE_VARIABLE_LBU_12);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(
  MR_Word HeadVar__1_1);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_2[1][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[2][9];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__lbu__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__lbu__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__lbu__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTypes_8,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13,
  MR_Word STATE_VARIABLE_LBU_0_14,
  MR_Word * STATE_VARIABLE_LBU_15)
{
  {
    MR_Word NewLBU_11;
    MR_Word Expr0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 0)));
    MR_Word Info0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_12, (MR_Integer) 1)));
    MR_Word Expr_28;
    MR_Word Info_29;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_LBU_18_31;
    MR_Word ResPoint_38;

    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Info0_27, &ResPoint_38);
    if ((ResPoint_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      Var_30 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    else
    {
      MR_Word ResVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResPoint_38, (MR_Integer) 0)));
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResPoint_38, (MR_Integer) 1)));

      Var_30 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_8, ResVars_39);
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_30, LBU0_7, &STATE_VARIABLE_LBU_18_31);
    transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_2_6_p_0(VarTypes_8, Info0_27, Expr0_26, &Expr_28, STATE_VARIABLE_LBU_18_31, &NewLBU_11);
    hlds__hlds_goal__goal_info_set_lbu_3_p_0(NewLBU_11, Info0_27, &Info_29);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Goal_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Expr_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Info_29));
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NewLBU_11, STATE_VARIABLE_LBU_0_14, STATE_VARIABLE_LBU_15);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(
  MR_Word LBU0_7,
  MR_Word VarTypes_8,
  MR_Word STATE_VARIABLE_Case_0_16,
  MR_Word * STATE_VARIABLE_Case_17,
  MR_Word STATE_VARIABLE_LBU_0_18,
  MR_Word * STATE_VARIABLE_LBU_19)
{
  {
    MR_Word MainConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_16, (MR_Integer) 0)));
    MR_Word OtherConsIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_16, (MR_Integer) 1)));
    MR_Word Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_16, (MR_Integer) 2)));
    MR_Word Goal_14;
    MR_Word NewLBU_15;
    MR_Word Expr0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0)));
    MR_Word Info0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1)));
    MR_Word Expr_32;
    MR_Word Info_33;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_LBU_18_35;
    MR_Word ResPoint_42;

    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Info0_31, &ResPoint_42);
    if ((ResPoint_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      Var_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    else
    {
      MR_Word ResVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResPoint_42, (MR_Integer) 0)));
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResPoint_42, (MR_Integer) 1)));

      Var_34 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_8, ResVars_43);
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_34, LBU0_7, &STATE_VARIABLE_LBU_18_35);
    transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_2_6_p_0(VarTypes_8, Info0_31, Expr0_30, &Expr_32, STATE_VARIABLE_LBU_18_35, &NewLBU_15);
    hlds__hlds_goal__goal_info_set_lbu_3_p_0(NewLBU_15, Info0_31, &Info_33);
    {
      Goal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_14, 0) = ((MR_Box) (Expr_32));
      MR_hl_field(MR_mktag(0), Goal_14, 1) = ((MR_Box) (Info_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Case_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_14));
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NewLBU_15, STATE_VARIABLE_LBU_0_18, STATE_VARIABLE_LBU_19);
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_information_3_p_0(
  MR_Word _ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12)
{
  transform_hlds__ctgc__structure_reuse__lbu__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_99_107_119_97_114_100_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(STATE_VARIABLE_ProcInfo_0_11, STATE_VARIABLE_ProcInfo_12);
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_99_107_119_97_114_100_95_117_115_101_95_105_110_102_111_114_109_97_116_105_111_110_95_95_91_49_93_95_48_3_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12)
{
  {
    MR_Word Goal0_6;
    MR_Word VarTypes_7;
    MR_Word LBU0_8;
    MR_Word Goal_9;
    MR_Word _LBU_10;
    MR_Word Expr0_22;
    MR_Word Info0_23;
    MR_Word Expr_24;
    MR_Word Info_25;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_LBU_18_27;
    MR_Word ResPoint_34;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &Goal0_6);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &VarTypes_7);
    LBU0_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    Expr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0)));
    Info0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1)));
    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Info0_23, &ResPoint_34);
    if ((ResPoint_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      Var_26 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    else
    {
      MR_Word ResVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResPoint_34, (MR_Integer) 0)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResPoint_34, (MR_Integer) 1)));

      Var_26 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_7, ResVars_35);
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_26, LBU0_8, &STATE_VARIABLE_LBU_18_27);
    transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_2_6_p_0(VarTypes_7, Info0_23, Expr0_22, &Expr_24, STATE_VARIABLE_LBU_18_27, &_LBU_10);
    hlds__hlds_goal__goal_info_set_lbu_3_p_0(_LBU_10, Info0_23, &Info_25);
    {
      Goal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_9, 0) = ((MR_Box) (Expr_24));
      MR_hl_field(MR_mktag(0), Goal_9, 1) = ((MR_Box) (Info_25));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_9, STATE_VARIABLE_ProcInfo_0_11, STATE_VARIABLE_ProcInfo_12);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_2_6_p_0(
  MR_Word VarTypes_7,
  MR_Word Info0_8,
  MR_Word STATE_VARIABLE_Expr_0_67,
  MR_Word * STATE_VARIABLE_Expr_68,
  MR_Word STATE_VARIABLE_LBU_0_69,
  MR_Word * STATE_VARIABLE_LBU_70)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) STATE_VARIABLE_Expr_0_67)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_44 = (MR_Word) MR_body(((MR_Word) STATE_VARIABLE_Expr_0_67), (MR_Integer) 0);
          MR_Word SubGoal_46;
          MR_Word Var_47;

          transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_7, SubGoal0_44, &SubGoal_46, STATE_VARIABLE_LBU_0_69, &Var_47);
          *STATE_VARIABLE_LBU_70 = STATE_VARIABLE_LBU_0_69;
          *STATE_VARIABLE_Expr_68 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_46);
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Expr_68 = STATE_VARIABLE_Expr_0_67;
          *STATE_VARIABLE_LBU_70 = STATE_VARIABLE_LBU_0_69;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Det_22;

          Det_22 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(Info0_8);
          succeeded = transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(Det_22);
          if (succeeded)
          {
            MR_Word PreBirths_23;
            MR_Word PostBirths_24;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;

            hlds__hlds_llds__goal_info_get_pre_births_2_p_0(Info0_8, &PreBirths_23);
            hlds__hlds_llds__goal_info_get_post_births_2_p_0(Info0_8, &PostBirths_24);
            Var_90 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(Info0_8);
            Var_92 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_7, PreBirths_23);
            Var_94 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_7, PostBirths_24);
            {
              Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (STATE_VARIABLE_LBU_0_69));
              MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
            }
            {
              Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_93));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
            }
            *STATE_VARIABLE_LBU_70 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_89);
          }
          else
            *STATE_VARIABLE_LBU_70 = STATE_VARIABLE_LBU_0_69;
          *STATE_VARIABLE_Expr_68 = STATE_VARIABLE_Expr_0_67;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_Expr_68 = STATE_VARIABLE_Expr_0_67;
              *STATE_VARIABLE_LBU_70 = STATE_VARIABLE_LBU_0_69;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Expr_68 = STATE_VARIABLE_Expr_0_67;
              *STATE_VARIABLE_LBU_70 = STATE_VARIABLE_LBU_0_69;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
              MR_Word Goals0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 2)));
              MR_Word Goals_39;

              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(VarTypes_7, Goals0_38, &Goals_39, STATE_VARIABLE_LBU_0_69, STATE_VARIABLE_LBU_70);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_68 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_37));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_39));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
              MR_Word Goals_98;

              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(VarTypes_7, Goals0_97, &Goals_98, STATE_VARIABLE_LBU_0_69, STATE_VARIABLE_LBU_70);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_68 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_98));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word A_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
              MR_Word B_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 2)));
              MR_Word Cases0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 3)));
              MR_Word Cases_43;

              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(VarTypes_7, Cases0_42, &Cases_43, STATE_VARIABLE_LBU_0_69, STATE_VARIABLE_LBU_70);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_68 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (A_40));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (B_41));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_43));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
              MR_Word SubGoal0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 2)));
              MR_Word SubGoal_100;
              MR_Word Var_77;
              MR_Word Var_49;

              succeeded = ((((MR_tag((MR_Word) Reason_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_48, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_48, (MR_Integer) 1)));
                Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_48, (MR_Integer) 2)));
                succeeded = (Var_77 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                SubGoal_100 = SubGoal0_99;
                *STATE_VARIABLE_LBU_70 = STATE_VARIABLE_LBU_0_69;
              }
              else
                transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_7, SubGoal0_99, &SubGoal_100, STATE_VARIABLE_LBU_0_69, STATE_VARIABLE_LBU_70);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_68 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_48));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_100));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 1)));
              MR_Word Cond0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 2)));
              MR_Word Then0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 3)));
              MR_Word Else0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), STATE_VARIABLE_Expr_0_67, (MR_Integer) 4)));
              MR_Word Cond_54;
              MR_Word CondGoal0_56;
              MR_Word CondInfo0_57;
              MR_Word InfoTmp_58;
              MR_Word CondTmp_59;
              MR_Word LBU0T_61;
              MR_Word Then_62;
              MR_Word LBUT_63;
              MR_Word Else_64;
              MR_Word LBUE_65;
              MR_Word Var_55;
              MR_Word Var_60;

              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_7, Cond0_51, &Cond_54, STATE_VARIABLE_LBU_0_69, &Var_55);
              CondGoal0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond0_51, (MR_Integer) 0)));
              CondInfo0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond0_51, (MR_Integer) 1)));
              hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), CondInfo0_57, &InfoTmp_58);
              {
                CondTmp_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CondTmp_59, 0) = ((MR_Box) (CondGoal0_56));
                MR_hl_field(MR_mktag(0), CondTmp_59, 1) = ((MR_Box) (InfoTmp_58));
              }
              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_7, CondTmp_59, &Var_60, STATE_VARIABLE_LBU_0_69, &LBU0T_61);
              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_7, Then0_52, &Then_62, LBU0T_61, &LBUT_63);
              transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(VarTypes_7, Else0_53, &Else_64, STATE_VARIABLE_LBU_0_69, &LBUE_65);
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, LBUT_63, LBUE_65, STATE_VARIABLE_LBU_70);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Expr_68 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_50));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_54));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_62));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_64));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.lbu", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.lbu.backward_use_in_goal_2\'/6", (MR_String) "shorthand");
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
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_TopGoal_0_13,
  MR_Word * STATE_VARIABLE_TopGoal_14,
  MR_Word STATE_VARIABLE_LBU_0_15,
  MR_Word * STATE_VARIABLE_LBU_16)
{
  {
    MR_Word Expr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TopGoal_0_13, (MR_Integer) 0)));
    MR_Word Info0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_TopGoal_0_13, (MR_Integer) 1)));
    MR_Word Expr_11;
    MR_Word Info_12;
    MR_Word Var_17;
    MR_Word STATE_VARIABLE_LBU_18_18;
    MR_Word ResPoint_25;

    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(Info0_10, &ResPoint_25);
    if ((ResPoint_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      Var_17 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    else
    {
      MR_Word ResVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResPoint_25, (MR_Integer) 0)));
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResPoint_25, (MR_Integer) 1)));

      Var_17 = check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(VarTypes_6, ResVars_26);
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_17, STATE_VARIABLE_LBU_0_15, &STATE_VARIABLE_LBU_18_18);
    transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_2_6_p_0(VarTypes_6, Info0_10, Expr0_9, &Expr_11, STATE_VARIABLE_LBU_18_18, STATE_VARIABLE_LBU_16);
    hlds__hlds_goal__goal_info_set_lbu_3_p_0(*STATE_VARIABLE_LBU_16, Info0_10, &Info_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TopGoal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Expr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Info_12));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Goal_13;
    MR_Word conv0_STATE_VARIABLE_LBU_15;

    transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_goal_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_STATE_VARIABLE_Goal_13, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_LBU_15);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_13));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_LBU_15));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_Goals_0_10,
  MR_Word * STATE_VARIABLE_Goals_11,
  MR_Word STATE_VARIABLE_LBU_0_12,
  MR_Word * STATE_VARIABLE_LBU_13)
{
  {
    MR_Word TypeCtorInfo_21_21;
    MR_Word Var_14;
    MR_Box conv2_STATE_VARIABLE_LBU_13;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_disj_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (STATE_VARIABLE_LBU_0_12));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarTypes_6));
    }
    TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    mercury__list__map_foldl_5_p_0(TypeCtorInfo_21_21, TypeCtorInfo_21_21, (MR_Word) &transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[0], Var_14, STATE_VARIABLE_Goals_0_10, STATE_VARIABLE_Goals_11, ((MR_Box) (STATE_VARIABLE_LBU_0_12)), &conv2_STATE_VARIABLE_LBU_13);
    *STATE_VARIABLE_LBU_13 = ((MR_Word) conv2_STATE_VARIABLE_LBU_13);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Case_17;
    MR_Word conv0_STATE_VARIABLE_LBU_19;

    transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_STATE_VARIABLE_Case_17, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_LBU_19);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Case_17));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_LBU_19));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_Cases_0_10,
  MR_Word * STATE_VARIABLE_Cases_11,
  MR_Word STATE_VARIABLE_LBU_0_12,
  MR_Word * STATE_VARIABLE_LBU_13)
{
  {
    MR_Word TypeCtorInfo_21_21;
    MR_Word Var_14;
    MR_Box conv2_STATE_VARIABLE_LBU_13;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_cases_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (STATE_VARIABLE_LBU_0_12));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (VarTypes_6));
    }
    TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
    mercury__list__map_foldl_5_p_0(TypeCtorInfo_21_21, TypeCtorInfo_21_21, (MR_Word) &transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[0], Var_14, STATE_VARIABLE_Cases_0_10, STATE_VARIABLE_Cases_11, ((MR_Box) (STATE_VARIABLE_LBU_0_12)), &conv2_STATE_VARIABLE_LBU_13);
    *STATE_VARIABLE_LBU_13 = ((MR_Word) conv2_STATE_VARIABLE_LBU_13);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TopGoal_14;
    MR_Word conv0_STATE_VARIABLE_LBU_16;

    transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_STATE_VARIABLE_TopGoal_14, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_LBU_16);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_TopGoal_14));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_LBU_16));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0(
  MR_Word VarTypes_6,
  MR_Word STATE_VARIABLE_Goals_0_9,
  MR_Word * STATE_VARIABLE_Goals_10,
  MR_Word STATE_VARIABLE_LBU_0_11,
  MR_Word * STATE_VARIABLE_LBU_12)
{
  {
    MR_Word TypeCtorInfo_20_20;
    MR_Word Var_13;
    MR_Box conv2_STATE_VARIABLE_LBU_12;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__lbu_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__lbu__backward_use_in_conj_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (VarTypes_6));
    }
    TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    mercury__list__map_foldl_5_p_0(TypeCtorInfo_20_20, TypeCtorInfo_20_20, (MR_Word) &transform_hlds__ctgc__structure_reuse__lbu_scalar_common_1[0], Var_13, STATE_VARIABLE_Goals_0_9, STATE_VARIABLE_Goals_10, ((MR_Box) (STATE_VARIABLE_LBU_0_11)), &conv2_STATE_VARIABLE_LBU_12);
    *STATE_VARIABLE_LBU_12 = ((MR_Word) conv2_STATE_VARIABLE_LBU_12);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__lbu__detism_allows_multiple_solns_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;

    if (((MR_Integer) 60 & (((MR_Integer) 1 << HeadVar__1_1))))
    {
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

void mercury__transform_hlds__ctgc__structure_reuse__lbu__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__lbu__init_type_tables(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__lbu__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__lbu__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.lbu.
