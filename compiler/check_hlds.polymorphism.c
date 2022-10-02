/*
** Automatically generated from `polymorphism.m'
** by the Mercury compiler,
** version rotd-2022-10-02
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


// :- module check_hlds.polymorphism.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism__init
ENDINIT
*/

#include "check_hlds.polymorphism.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.introduce_exists_casts.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.polymorphism_clause.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__256__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__254__1_2_p_0(
  MR_Word Specs_7,
  MR_Word HeadVar__2_16);

static void MR_CALL 
check_hlds__polymorphism__increment_arg_nums_3_p_0(
  MR_Integer Inc_4,
  MR_Word FSV0_5,
  MR_Word * FSV_6);

static void MR_CALL 
check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(
  MR_Word ExtraArgModes_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10);

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_SafeToContinue_0_16,
  MR_Word * STATE_VARIABLE_SafeToContinue_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_update_arg_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_update_arg_types_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_37,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[1][10];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[3][3];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[2][5];




static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_2[0])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[0])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[2])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__256__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20)
{
  MR_bool succeeded = (SafeToContinue_6 == HeadVar__2_20);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__254__1_2_p_0(
  MR_Word Specs_7,
  MR_Word HeadVar__2_16)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]), ((MR_Box) (Specs_7)), ((MR_Box) (HeadVar__2_16)));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism__increment_arg_nums_3_p_0(
  MR_Integer Inc_4,
  MR_Word FSV0_5,
  MR_Word * FSV_6)
{
  MR_Integer OrigFormatStrArgNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FSV0_5, (MR_Integer) 0))));
  MR_Integer OrigValuesListArgNum_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FSV0_5, (MR_Integer) 1))));
  MR_Integer CurFormatStrArgNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FSV0_5, (MR_Integer) 2))));
  MR_Integer CurValuesListArgNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FSV0_5, (MR_Integer) 3))));
  MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) CurFormatStrArgNum_9 + (MR_Unsigned) Inc_4);
  MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) CurValuesListArgNum_10 + (MR_Unsigned) Inc_4);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *FSV_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OrigFormatStrArgNum_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigValuesListArgNum_8));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
  }
}

static void MR_CALL 
check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(
  MR_Word ExtraArgModes_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(STATE_VARIABLE_ProcInfo_0_9);
  if (succeeded)
  {
    MR_Word ArgModes1_6;
    MR_Word ExtraArgModesList_7;
    MR_Word ArgModes_8;

    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_9, &ArgModes1_6);
    ExtraArgModesList_7 = hlds__hlds_args__poly_arg_vector_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModes_4);
    ArgModes_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModesList_7, ArgModes1_6);
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_8, STATE_VARIABLE_ProcInfo_0_9, STATE_VARIABLE_ProcInfo_10);
  }
  else
    *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_0_9;
}

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_10;

  check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_10));
}

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_SafeToContinue_0_16,
  MR_Word * STATE_VARIABLE_SafeToContinue_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  MR_bool succeeded;
  MR_Word PredInfo_12;
  MR_Word PredModule_13;
  MR_String PredName_14;
  MR_Integer PredArity_15;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredId_8, &PredInfo_12);
  PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
  PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
  PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_12);
  succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_13, PredName_14, PredArity_15);
  if (succeeded)
  {
    *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
    *STATE_VARIABLE_SafeToContinue_17 = STATE_VARIABLE_SafeToContinue_0_16;
  }
  else
  {
    MR_Word PredInfo0_26;
    MR_Word ClausesInfo0_27;
    MR_Word PolyInfo0_28;
    MR_Word ExtraArgModes_29;
    MR_Word ClausesInfo_30;
    MR_Word PolyInfo_31;
    MR_Word ConstStructDb_32;
    MR_Word TypeVarSet_33;
    MR_Word PredInfo1_34;
    MR_Word PredInfo2_35;
    MR_Word PredSpecs_36;
    MR_Word ProcMap0_37;
    MR_Word ProcMap_38;
    MR_Word PredInfo_39;
    MR_Word STATE_VARIABLE_ModuleInfo_36_40;
    MR_Word STATE_VARIABLE_ModuleInfo_37_41;
    MR_Word Var_42;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredId_8, &PredInfo0_26);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_26, &ClausesInfo0_27);
    check_hlds__polymorphism_info__init_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredInfo0_26, ClausesInfo0_27, &PolyInfo0_28);
    check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0(PredInfo0_26, &ExtraArgModes_29, ClausesInfo0_27, &ClausesInfo_30, PolyInfo0_28, &PolyInfo_31);
    check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(PolyInfo_31, &STATE_VARIABLE_ModuleInfo_36_40);
    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(PolyInfo_31, &ConstStructDb_32);
    hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_32, STATE_VARIABLE_ModuleInfo_36_40, &STATE_VARIABLE_ModuleInfo_37_41);
    check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(PolyInfo_31, &TypeVarSet_33);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_33, PredInfo0_26, &PredInfo1_34);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_30, PredInfo1_34, &PredInfo2_35);
    check_hlds__polymorphism_info__poly_info_get_errors_2_p_0(PolyInfo_31, &PredSpecs_36);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo2_35, &ProcMap0_37);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ExtraArgModes_29));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_42, ProcMap0_37, &ProcMap_38);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_38, PredInfo2_35, &PredInfo_39);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_39, STATE_VARIABLE_ModuleInfo_37_41, STATE_VARIABLE_ModuleInfo_21);
    if ((PredSpecs_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      *STATE_VARIABLE_SafeToContinue_17 = STATE_VARIABLE_SafeToContinue_0_16;
    }
    else
    {
      *STATE_VARIABLE_Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PredSpecs_36, STATE_VARIABLE_Specs_0_18);
      *STATE_VARIABLE_SafeToContinue_17 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__256__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__254__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_10;

  check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_10));
}

void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  MR_bool succeeded;
  MR_Word SafeToContinue_6;
  MR_Word Specs_7;
  MR_Word ExistsPredIds_8;
  MR_Word STATE_VARIABLE_ModuleInfo_12_12;
  MR_Word Var_13;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_ModuleInfo_22_22;
  MR_Word STATE_VARIABLE_ModuleInfo_23_23;
  MR_Word PredInfo0_32;
  MR_Word ClausesInfo0_33;
  MR_Word PolyInfo0_34;
  MR_Word ExtraArgModes_35;
  MR_Word ClausesInfo_36;
  MR_Word PolyInfo_37;
  MR_Word ConstStructDb_38;
  MR_Word TypeVarSet_39;
  MR_Word PredInfo1_40;
  MR_Word PredInfo2_41;
  MR_Word PredSpecs_42;
  MR_Word ProcMap0_43;
  MR_Word ProcMap_44;
  MR_Word PredInfo_45;
  MR_Word STATE_VARIABLE_ModuleInfo_36_46;
  MR_Word STATE_VARIABLE_ModuleInfo_37_47;
  MR_Word Var_48;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_10;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_9, PredId_4, &PredInfo0_32);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_32, &ClausesInfo0_33);
  check_hlds__polymorphism_info__init_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_9, PredInfo0_32, ClausesInfo0_33, &PolyInfo0_34);
  check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0(PredInfo0_32, &ExtraArgModes_35, ClausesInfo0_33, &ClausesInfo_36, PolyInfo0_34, &PolyInfo_37);
  check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(PolyInfo_37, &STATE_VARIABLE_ModuleInfo_36_46);
  check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(PolyInfo_37, &ConstStructDb_38);
  hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_38, STATE_VARIABLE_ModuleInfo_36_46, &STATE_VARIABLE_ModuleInfo_37_47);
  check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(PolyInfo_37, &TypeVarSet_39);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_39, PredInfo0_32, &PredInfo1_40);
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_36, PredInfo1_40, &PredInfo2_41);
  check_hlds__polymorphism_info__poly_info_get_errors_2_p_0(PolyInfo_37, &PredSpecs_42);
  if ((PredSpecs_42 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SafeToContinue_6 = (MR_Integer) 0;
    Specs_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    SafeToContinue_6 = (MR_Integer) 1;
    Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PredSpecs_42, (MR_Word) ((MR_Unsigned) 0U));
  }
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo2_41, &ProcMap0_43);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[1]));
    MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (ExtraArgModes_35));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_48, ProcMap0_43, &ProcMap_44);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_44, PredInfo2_41, &PredInfo_45);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_45, STATE_VARIABLE_ModuleInfo_37_47, &STATE_VARIABLE_ModuleInfo_12_12);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2));
    MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Specs_7));
    MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_13, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[1]));
    MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3));
    MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (SafeToContinue_6));
    MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
  check_hlds__polymorphism__polymorphism_update_arg_types_5_p_0(PredId_4, (MR_Word) ((MR_Unsigned) 0U), &ExistsPredIds_8, STATE_VARIABLE_ModuleInfo_12_12, &STATE_VARIABLE_ModuleInfo_22_22);
  check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0(PredId_4, STATE_VARIABLE_ModuleInfo_22_22, &STATE_VARIABLE_ModuleInfo_23_23);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[2]), ExistsPredIds_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_23_23)), &conv2_STATE_VARIABLE_ModuleInfo_10);
  *STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_10));
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_update_arg_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FSV_6;

  check_hlds__polymorphism__increment_arg_nums_3_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_FSV_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_FSV_6));
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_update_arg_types_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_37,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40)
{
  MR_bool succeeded;
  MR_Word PredInfo0_10;
  MR_Word ClausesInfo0_11;
  MR_Word VarTable0_12;
  MR_Word HeadVars_13;
  MR_Word ExtraHeadVarList_14;
  MR_Word OldHeadVarList_15;
  MR_Word TypeVarSet_16;
  MR_Word ExistQVars_17;
  MR_Word ArgTypes0_18;
  MR_Integer NumExtraHeadVars_19;
  MR_Word PredInfo2_20;
  MR_Word PredInfo3_35;
  MR_Word PredInfo_36;
  MR_Word Subn_34;
  MR_Word OldHeadVarTypes_33;
  MR_Word TypeInfo_52_52;
  MR_Word TypeCtorInfo_53_53;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_39, PredId_6, &PredInfo0_10);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_10, &ClausesInfo0_11);
  hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo0_11, &VarTable0_12);
  hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo0_11, &HeadVars_13);
  hlds__hlds_args__proc_arg_vector_partition_poly_args_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), HeadVars_13, &ExtraHeadVarList_14, &OldHeadVarList_15);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo0_10, &TypeVarSet_16, &ExistQVars_17, &ArgTypes0_18);
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ExtraHeadVarList_14, &NumExtraHeadVars_19);
  if ((ExtraHeadVarList_14 == (MR_Word) ((MR_Unsigned) 0U)))
    PredInfo2_20 = PredInfo0_10;
  else
  {
    MR_Word ExtraArgTypes_23;
    MR_Word ArgTypes_24;
    MR_Word PredInfo1_25;
    MR_Word MaybeFormatCall1_26;

    parse_tree__var_table__lookup_var_types_3_p_0(VarTable0_12, ExtraHeadVarList_14, &ExtraArgTypes_23);
    ArgTypes_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraArgTypes_23, ArgTypes0_18);
    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_16, ExistQVars_17, ArgTypes_24, PredInfo0_10, &PredInfo1_25);
    hlds__hlds_pred__pred_info_get_format_call_2_p_0(PredInfo1_25, &MaybeFormatCall1_26);
    if ((MaybeFormatCall1_26 == (MR_Word) ((MR_Unsigned) 0U)))
      PredInfo2_20 = PredInfo1_25;
    else
    {
      MR_Word Context_27;
      MR_Word OoMFormatStrsValues1_28;
      MR_Word OoMFormatStrsValues2_29;
      MR_Word MaybeFormatCall2_30;
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFormatCall1_26, (MR_Integer) 0))));
      MR_Word Var_45;
      MR_Word Var_46;

      Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
      OoMFormatStrsValues1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1))));
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_update_arg_types_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (NumExtraHeadVars_19));
      }
      mercury__one_or_more__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), Var_45, OoMFormatStrsValues1_28, &OoMFormatStrsValues2_29);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Context_27));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (OoMFormatStrsValues2_29));
      }
      {
        MaybeFormatCall2_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeFormatCall2_30, 0) = ((MR_Box) (Var_46));
      }
      hlds__hlds_pred__pred_info_set_format_call_3_p_0(MaybeFormatCall2_30, PredInfo1_25, &PredInfo2_20);
    }
  }
  succeeded = (ExistQVars_17 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable0_12, OldHeadVarList_15, &OldHeadVarTypes_33);
    succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(ArgTypes0_18, OldHeadVarTypes_33, &Subn_34);
    if (succeeded)
    {
      TypeInfo_52_52 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]);
      TypeCtorInfo_53_53 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      succeeded = mercury__map__is_empty_1_p_0(TypeInfo_52_52, TypeCtorInfo_53_53, Subn_34);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_set_existq_tvar_binding_3_p_0(Subn_34, PredInfo2_20, &PredInfo3_35);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ExistsCastPredIds_38 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ExistsCastPredIds_0_37));
    }
  }
  else
  {
    PredInfo3_35 = PredInfo2_20;
    *STATE_VARIABLE_ExistsCastPredIds_38 = STATE_VARIABLE_ExistsCastPredIds_0_37;
  }
  hlds__hlds_pred__pred_info_set_polymorphism_added_args_3_p_0(NumExtraHeadVars_19, PredInfo3_35, &PredInfo_36);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_6, PredInfo_36, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40);
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ExistsCastPredIds_38;
  MR_Word conv6_STATE_VARIABLE_ModuleInfo_40;

  check_hlds__polymorphism__polymorphism_update_arg_types_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ExistsCastPredIds_38, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_ModuleInfo_40);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ExistsCastPredIds_38));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_40));
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_SafeToContinue_17;
  MR_Word conv1_STATE_VARIABLE_Specs_19;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_21;

  check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_SafeToContinue_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_19, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_ModuleInfo_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_SafeToContinue_17));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_19));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_21));
}

void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word * ExistsCastPredIds_7,
  MR_Word * SafeToContinue_8,
  MR_Word * Specs_9)
{
  MR_Word PredIdTable0_10;
  MR_Word PredIds0_11;
  MR_Word PredIdTable1_12;
  MR_Word PredIds1_13;
  MR_Word STATE_VARIABLE_ModuleInfo_19_19;
  MR_Box conv5_SafeToContinue_8;
  MR_Box conv4_Specs_9;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_19_19;
  MR_Box conv9_ExistsCastPredIds_7;
  MR_Box conv8_STATE_VARIABLE_ModuleInfo_15;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &PredIdTable0_10);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_10, &PredIds0_11);
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[0]), PredIds0_11, ((MR_Box) ((MR_Integer) 0)), &conv5_SafeToContinue_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_19_19);
  *SafeToContinue_8 = ((MR_Word) (conv5_SafeToContinue_8));
  *Specs_9 = ((MR_Word) (conv4_Specs_9));
  STATE_VARIABLE_ModuleInfo_19_19 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_19_19));
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_19_19, &PredIdTable1_12);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable1_12, &PredIds1_13);
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[1]), PredIds1_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv9_ExistsCastPredIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_19_19)), &conv8_STATE_VARIABLE_ModuleInfo_15);
  *ExistsCastPredIds_7 = ((MR_Word) (conv9_ExistsCastPredIds_7));
  *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_15));
}

void mercury__check_hlds__polymorphism__init(void)
{
}

void mercury__check_hlds__polymorphism__init_type_tables(void)
{
}

void mercury__check_hlds__polymorphism__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism.
