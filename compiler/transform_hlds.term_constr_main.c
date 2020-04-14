/*
** Automatically generated from `term_constr_main.m'
** by the Mercury compiler,
** version rotd-2020-04-14
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module transform_hlds.term_constr_main.
// :- implementation.

/*
INIT mercury__transform_hlds__term_constr_main__init
ENDINIT
*/

#include "transform_hlds.term_constr_main.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_build.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_fixpoint.mih"
#include "transform_hlds.term_constr_initial.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_pass2.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data_pragma__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0__plain_list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__247__1_2_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__229__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PPId_4);

static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PPId_4);

static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PPId_4);

static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
  MR_Word TerminationInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14);

static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0(
  MR_Word BuildOpts_9,
  MR_Word FixpointOpts_10,
  MR_Word Pass2Opts_11,
  MR_Word SCCEntryPoints_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_2[1][11];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_4[1][7];




static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_2[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0)),
    ((MR_Box) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__term_constr_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_main_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_main__parse_tree__prog_data_pragma__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0__plain_list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_main____vpti_pred_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_main__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_main__parse_tree__prog_data_pragma__pti_generic_termination_info_2__plain_transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0__plain_list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_term_reason_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_main__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)
  }
};

static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__247__1_2_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_58)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), HeadVar__1_44, ((MR_Box) (HeadVar__2_58)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__229__1_2_p_0(
  MR_Word HeadVar__1_38,
  MR_Word HeadVar__2_54)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), HeadVar__1_38, ((MR_Box) (HeadVar__2_54)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PPId_4)
{
  {
    MR_bool succeeded;
    MR_Word ProcInfo_6;
    MR_Word TermInfo_7;
    MR_Word Var_5;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_3, PPId_4, &Var_5, &ProcInfo_6);
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_6, &TermInfo_7);
    {
      MR_Word Var_9;

      Var_9 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(TermInfo_7);
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (!(succeeded))
    {
      MR_Word Var_8;

      Var_8 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(TermInfo_7);
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_term_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PPId_4)
{
  {
    MR_bool succeeded;
    MR_Word ProcInfo_6;
    MR_Word TermInfo_7;
    MR_Word Var_9;
    MR_Word Var_5;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_3, PPId_4, &Var_5, &ProcInfo_6);
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_6, &TermInfo_7);
    Var_9 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(TermInfo_7);
    succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main__has_arg_size_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word PPId_4)
{
  {
    MR_bool succeeded;
    MR_Word ProcInfo_6;
    MR_Word TermInfo_7;
    MR_Word Var_9;
    MR_Word Var_5;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_3, PPId_4, &Var_5, &ProcInfo_6);
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_6, &TermInfo_7);
    Var_9 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(TermInfo_7);
    succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(
  MR_Word TerminationInfo_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  {
    MR_Word PredInfo_8;
    MR_Word ProcInfo0_9;
    MR_Word Term2Info0_10;
    MR_Word Term2Info_11;
    MR_Word ProcInfo_12;
    MR_Word Var_15;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_13, PPId_6, &PredInfo_8, &ProcInfo0_9);
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_9, &Term2Info0_10);
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (TerminationInfo_5));
    }
    transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(Var_15, Term2Info0_10, &Term2Info_11);
    hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(Term2Info_11, ProcInfo0_9, &ProcInfo_12);
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_6, PredInfo_8, ProcInfo_12, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
  }
}

static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_14;

    transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_14));
  }
}

static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_14;

    transform_hlds__term_constr_main__set_termination_info_for_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_14));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__247__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_main__has_term_info_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_main__IntroducedFrom__pred__term2_analyse_scc__229__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_main__has_arg_size_info_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_main__proc_needs_ar_built_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_scc_8_p_0(
  MR_Word BuildOpts_9,
  MR_Word FixpointOpts_10,
  MR_Word Pass2Opts_11,
  MR_Word SCCEntryPoints_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word SCC_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCEntryPoints_12, (MR_Integer) 0))));
    MR_Word NeedsAR_16;
    MR_Word NeedsAREntryPoints_17;
    MR_Word BuildErrors_18;
    MR_Word NeedsArgSize_19;
    MR_Word FixpointErrors_20;
    MR_Word Pass1Errors_21;
    MR_Word MaybeEarlyPass2Result_22;
    MR_Word Globals_25;
    MR_Word ArgSizeOnly_26;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_ModuleInfo_40_40;
    MR_Word Var_50;
    MR_Word Var_51;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_31));
    }
    mercury__set__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_35, SCC_15, &NeedsAR_16);
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCEntryPoints_12, (MR_Integer) 1))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCEntryPoints_12, (MR_Integer) 2))));
    {
      NeedsAREntryPoints_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NeedsAREntryPoints_17, 0) = ((MR_Box) (NeedsAR_16));
      MR_hl_field(MR_mktag(0), NeedsAREntryPoints_17, 1) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), NeedsAREntryPoints_17, 2) = ((MR_Box) (Var_51));
    }
    transform_hlds__term_constr_build__term_constr_build_abstract_scc_5_p_0(BuildOpts_9, NeedsAREntryPoints_17, &BuildErrors_18, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_36_36);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_36_36));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_3));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Var_38));
    }
    mercury__set__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_37, NeedsAR_16, &NeedsArgSize_19);
    transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(FixpointOpts_10, NeedsArgSize_19, (MR_Integer) 1, &FixpointErrors_20, STATE_VARIABLE_ModuleInfo_36_36, &STATE_VARIABLE_ModuleInfo_40_40);
    Pass1Errors_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0), BuildErrors_18, FixpointErrors_20);
    if ((Pass1Errors_21 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeEarlyPass2Result_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_41;

      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Pass1Errors_21));
      }
      {
        MaybeEarlyPass2Result_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeEarlyPass2Result_22, 0) = ((MR_Box) (Var_41));
      }
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_40_40, &Globals_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 457, &ArgSizeOnly_26);
    switch (ArgSizeOnly_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NeedsTerm_27;
          MR_Word Var_43;
          MR_Word Var_44;

          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_4));
            MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_40_40));
          }
          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_5));
            MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Var_44));
          }
          mercury__set__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_43, NeedsAR_16, &NeedsTerm_27);
          if ((MaybeEarlyPass2Result_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Pass2Result_28;
            MR_Word Var_66;
            MR_Box conv1_STATE_VARIABLE_ModuleInfo_32;

            transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0(Pass2Opts_11, NeedsTerm_27, STATE_VARIABLE_ModuleInfo_40_40, &Pass2Result_28);
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_6));
              MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Pass2Result_28));
            }
            mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_66, NeedsTerm_27, ((MR_Box) (STATE_VARIABLE_ModuleInfo_40_40)), &conv1_STATE_VARIABLE_ModuleInfo_32);
            *STATE_VARIABLE_ModuleInfo_32 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_32));
            if (((MR_tag((MR_Word) Pass2Result_28)) == (MR_Integer) 1))
            {
              MR_Word Errors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Pass2Result_28, (MR_Integer) 0))));

              transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0(*STATE_VARIABLE_ModuleInfo_32, NeedsTerm_27, Errors_29, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
            }
            else
              *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
          }
          else
          {
            MR_Word Pass2Result_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEarlyPass2Result_22, (MR_Integer) 0))));
            MR_Word Errors_74;
            MR_Word Var_75;
            MR_Box conv3_STATE_VARIABLE_ModuleInfo_32;

            {
              Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_scc_8_p_0_7));
              MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Pass2Result_73));
            }
            mercury__set__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_75, NeedsTerm_27, ((MR_Box) (STATE_VARIABLE_ModuleInfo_40_40)), &conv3_STATE_VARIABLE_ModuleInfo_32);
            *STATE_VARIABLE_ModuleInfo_32 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_32));
            Errors_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Pass2Result_73, (MR_Integer) 0))));
            transform_hlds__term_constr_errors__maybe_report_term2_errors_5_p_0(*STATE_VARIABLE_ModuleInfo_32, NeedsTerm_27, Errors_74, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_40_40;
          *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_32;
    MR_Word conv0_STATE_VARIABLE_Specs_34;

    transform_hlds__term_constr_main__term2_analyse_scc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_32, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_34);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_32));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_34));
  }
}

void MR_CALL 
transform_hlds__term_constr_main__term2_analyse_module_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word * Specs_5)
{
  {
    MR_Word Globals_6;
    MR_Word Norm_7;
    MR_Word FunctorInfo_8;
    MR_Word Fail_9;
    MR_Word ArgSizeOnly_10;
    MR_Word BuildOptions_11;
    MR_Integer MaxSize_12;
    MR_Integer CutOff_13;
    MR_Word Widening_14;
    MR_Word FixpointOptions_15;
    MR_Word Pass2Options_16;
    MR_Word DepInfo_17;
    MR_Word BottomUpSCCsEntryPoints_18;
    MR_Word ProcAnalysisKinds0_19;
    MR_Word ProcAnalysisKinds_20;
    MR_Word STATE_VARIABLE_ModuleInfo_27_27;
    MR_Word STATE_VARIABLE_ModuleInfo_28_28;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_ModuleInfo_30_30;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_30_30;
    MR_Box conv2_Specs_5;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_21, &Globals_6);
    libs__globals__get_termination2_norm_2_p_0(Globals_6, &Norm_7);
    FunctorInfo_8 = transform_hlds__term_norm__set_functor_info_2_f_0(STATE_VARIABLE_ModuleInfo_0_21, Norm_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 458, &Fail_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 457, &ArgSizeOnly_10);
    BuildOptions_11 = transform_hlds__term_constr_build__term_build_options_init_3_f_0(FunctorInfo_8, Fail_9, ArgSizeOnly_10);
    libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 459, &MaxSize_12);
    libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 456, &CutOff_13);
    Widening_14 = (MR_Word) (CutOff_13);
    FixpointOptions_15 = transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_f_0(Widening_14, MaxSize_12);
    Pass2Options_16 = transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(MaxSize_12);
    transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0(STATE_VARIABLE_ModuleInfo_0_21, &STATE_VARIABLE_ModuleInfo_27_27);
    hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_27_27, &STATE_VARIABLE_ModuleInfo_28_28, &DepInfo_17);
    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(STATE_VARIABLE_ModuleInfo_28_28, DepInfo_17, &BottomUpSCCsEntryPoints_18);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__term_constr_main_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__term_constr_main__term2_analyse_module_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (BuildOptions_11));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (FixpointOptions_15));
      MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (Pass2Options_16));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_dependency_graph__hlds__hlds_dependency_graph__type_ctor_info_scc_with_entry_points_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__term_constr_main_scalar_common_1[0]), Var_29, BottomUpSCCsEntryPoints_18, ((MR_Box) (STATE_VARIABLE_ModuleInfo_28_28)), &conv3_STATE_VARIABLE_ModuleInfo_30_30, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Specs_5);
    STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_30_30));
    *Specs_5 = ((MR_Word) (conv2_Specs_5));
    hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(STATE_VARIABLE_ModuleInfo_30_30, &ProcAnalysisKinds0_19);
    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), ((MR_Box) ((MR_Integer) 4)), ProcAnalysisKinds0_19, &ProcAnalysisKinds_20);
    hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(ProcAnalysisKinds_20, STATE_VARIABLE_ModuleInfo_30_30, STATE_VARIABLE_ModuleInfo_22);
  }
}

void mercury__transform_hlds__term_constr_main__init(void)
{
}

void mercury__transform_hlds__term_constr_main__init_type_tables(void)
{
}

void mercury__transform_hlds__term_constr_main__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_main__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_main.
