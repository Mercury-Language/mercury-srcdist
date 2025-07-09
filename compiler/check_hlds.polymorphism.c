/*
** Automatically generated from `polymorphism.m'
** by the Mercury compiler,
** version rotd-2025-07-09
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.introduce_exists_casts.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__maybe__pti_maybe_1__plain_io__type_ctor_info_text_output_stream_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__257__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__255__1_2_p_0(
  MR_Word Specs_7,
  MR_Word HeadVar__2_16);

static void MR_CALL 
check_hlds__polymorphism__increment_arg_nums_3_p_0(
  MR_Integer Inc_4,
  MR_Word FSV0_5,
  MR_Word * FSV_6);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_update_arg_types_6_p_0(
  MR_Word MaybeProgressStream_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_42,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45);

static void MR_CALL 
check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(
  MR_Word ExtraArgModes_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10);

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_SafeToContinue_0_18,
  MR_Word * STATE_VARIABLE_SafeToContinue_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_112_114_101_100_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_112_114_101_100_95_95_91_49_93_95_48_8_p_0(
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_SafeToContinue_0_18,
  MR_Word * STATE_VARIABLE_SafeToContinue_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

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
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_117_112_100_97_116_101_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_117_112_100_97_116_101_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_42,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[4][2];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[1][11];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[1][9];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[3][6];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[2][5];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[1][3];




static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
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

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__polymorphism__maybe__pti_maybe_1__plain_io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[3][6] = {
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

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[2])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
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


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__maybe__pti_maybe_1__plain_io__type_ctor_info_text_output_stream_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__257__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20)
{
  MR_bool succeeded = (SafeToContinue_6 == HeadVar__2_20);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__255__1_2_p_0(
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
  MR_Integer OrigFormatStrArgNum_7 = ((MR_Integer) ((MR_hl_field(0, FSV0_5, 0))));
  MR_Integer OrigValuesListArgNum_8 = ((MR_Integer) ((MR_hl_field(0, FSV0_5, 1))));
  MR_Integer CurFormatStrArgNum_9 = ((MR_Integer) ((MR_hl_field(0, FSV0_5, 2))));
  MR_Integer CurValuesListArgNum_10 = ((MR_Integer) ((MR_hl_field(0, FSV0_5, 3))));
  MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) CurFormatStrArgNum_9 + (MR_Unsigned) Inc_4);
  MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) CurValuesListArgNum_10 + (MR_Unsigned) Inc_4);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *FSV_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (OrigFormatStrArgNum_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (OrigValuesListArgNum_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_update_arg_types_6_p_0(
  MR_Word MaybeProgressStream_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_42,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45)
{
  check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_117_112_100_97_116_101_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(PredId_8, STATE_VARIABLE_ExistsCastPredIds_0_42, STATE_VARIABLE_ExistsCastPredIds_43, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45);
}

static void MR_CALL 
check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(
  MR_Word ExtraArgModes_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10)
{
  MR_Word ArgModes1_6;
  MR_Word ExtraArgModesList_7;
  MR_Word ArgModes_8;

  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_9, &ArgModes1_6);
  ExtraArgModesList_7 = hlds__hlds_args__poly_arg_vector_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModes_4);
  ArgModes_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModesList_7, ArgModes1_6);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_8, STATE_VARIABLE_ProcInfo_0_9, STATE_VARIABLE_ProcInfo_10);
}

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_SafeToContinue_0_18,
  MR_Word * STATE_VARIABLE_SafeToContinue_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_112_114_101_100_95_95_91_49_93_95_48_8_p_0(PredId_10, STATE_VARIABLE_SafeToContinue_0_18, STATE_VARIABLE_SafeToContinue_19, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_112_114_101_100_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_10;

  check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_10));
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_112_114_101_100_95_95_91_49_93_95_48_8_p_0(
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_SafeToContinue_0_18,
  MR_Word * STATE_VARIABLE_SafeToContinue_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_bool succeeded;
  MR_Word PredInfo_14;
  MR_Word PredModule_15;
  MR_String PredName_16;
  MR_Integer PredFormArityInt_17;
  MR_Word Var_24;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_22, PredId_10, &PredInfo_14);
  PredModule_15 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_14);
  PredName_16 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_14);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_14, &Var_24);
  PredFormArityInt_17 = (MR_Integer) (Var_24);
  succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_15, PredName_16, PredFormArityInt_17);
  if (succeeded)
  {
    *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
    *STATE_VARIABLE_SafeToContinue_19 = STATE_VARIABLE_SafeToContinue_0_18;
  }
  else
  {
    MR_Word PredInfo0_29;
    MR_Word ClausesInfo0_30;
    MR_Word PolyInfo0_31;
    MR_Word ExtraArgModes_32;
    MR_Word ClausesInfo_33;
    MR_Word PolyInfo_34;
    MR_Word ConstStructDb_35;
    MR_Word TypeVarSet_36;
    MR_Word PredInfo1_37;
    MR_Word PredInfo2_38;
    MR_Word PredSpecs_39;
    MR_Word ProcMap0_40;
    MR_Word ProcMap_41;
    MR_Word PredInfo_42;
    MR_Word STATE_VARIABLE_ModuleInfo_1_43;
    MR_Word STATE_VARIABLE_ModuleInfo_2_44;
    MR_Word Var_45;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_22, PredId_10, &PredInfo0_29);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_29, &ClausesInfo0_30);
    check_hlds__polymorphism_info__init_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_22, PredInfo0_29, ClausesInfo0_30, &PolyInfo0_31);
    check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0(PredInfo0_29, &ExtraArgModes_32, ClausesInfo0_30, &ClausesInfo_33, PolyInfo0_31, &PolyInfo_34);
    check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(PolyInfo_34, &STATE_VARIABLE_ModuleInfo_1_43);
    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(PolyInfo_34, &ConstStructDb_35);
    hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_35, STATE_VARIABLE_ModuleInfo_1_43, &STATE_VARIABLE_ModuleInfo_2_44);
    check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(PolyInfo_34, &TypeVarSet_36);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_36, PredInfo0_29, &PredInfo1_37);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_33, PredInfo1_37, &PredInfo2_38);
    check_hlds__polymorphism_info__poly_info_get_errors_2_p_0(PolyInfo_34, &PredSpecs_39);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo2_38, &ProcMap0_40);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[1]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_112_114_101_100_95_95_91_49_93_95_48_8_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (ExtraArgModes_32));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_45, ProcMap0_40, &ProcMap_41);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_41, PredInfo2_38, &PredInfo_42);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_10, PredInfo_42, STATE_VARIABLE_ModuleInfo_2_44, STATE_VARIABLE_ModuleInfo_23);
    if ((PredSpecs_39 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
      *STATE_VARIABLE_SafeToContinue_19 = STATE_VARIABLE_SafeToContinue_0_18;
    }
    else
    {
      *STATE_VARIABLE_Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PredSpecs_39, STATE_VARIABLE_Specs_0_20);
      *STATE_VARIABLE_SafeToContinue_19 = (MR_Integer) 1;
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

  succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__257__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__255__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
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

  check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_10);
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
  MR_Word STATE_VARIABLE_ModuleInfo_1_12;
  MR_Word Var_13;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_ModuleInfo_2_23;
  MR_Word STATE_VARIABLE_ModuleInfo_3_24;
  MR_Word PredInfo0_33;
  MR_Word ClausesInfo0_34;
  MR_Word PolyInfo0_35;
  MR_Word ExtraArgModes_36;
  MR_Word ClausesInfo_37;
  MR_Word PolyInfo_38;
  MR_Word ConstStructDb_39;
  MR_Word TypeVarSet_40;
  MR_Word PredInfo1_41;
  MR_Word PredInfo2_42;
  MR_Word PredSpecs_43;
  MR_Word ProcMap0_44;
  MR_Word ProcMap_45;
  MR_Word PredInfo_46;
  MR_Word STATE_VARIABLE_ModuleInfo_1_47;
  MR_Word STATE_VARIABLE_ModuleInfo_2_48;
  MR_Word Var_49;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_10;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_9, PredId_4, &PredInfo0_33);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_33, &ClausesInfo0_34);
  check_hlds__polymorphism_info__init_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_9, PredInfo0_33, ClausesInfo0_34, &PolyInfo0_35);
  check_hlds__polymorphism_clause__polymorphism_process_clause_info_6_p_0(PredInfo0_33, &ExtraArgModes_36, ClausesInfo0_34, &ClausesInfo_37, PolyInfo0_35, &PolyInfo_38);
  check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(PolyInfo_38, &STATE_VARIABLE_ModuleInfo_1_47);
  check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(PolyInfo_38, &ConstStructDb_39);
  hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_39, STATE_VARIABLE_ModuleInfo_1_47, &STATE_VARIABLE_ModuleInfo_2_48);
  check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(PolyInfo_38, &TypeVarSet_40);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_40, PredInfo0_33, &PredInfo1_41);
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_37, PredInfo1_41, &PredInfo2_42);
  check_hlds__polymorphism_info__poly_info_get_errors_2_p_0(PolyInfo_38, &PredSpecs_43);
  if ((PredSpecs_43 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SafeToContinue_6 = (MR_Integer) 0;
    Specs_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    SafeToContinue_6 = (MR_Integer) 1;
    Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), PredSpecs_43, (MR_Word) ((MR_Unsigned) 0U));
  }
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo2_42, &ProcMap0_44);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[1]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (ExtraArgModes_36));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_49, ProcMap0_44, &ProcMap_45);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_45, PredInfo2_42, &PredInfo_46);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_46, STATE_VARIABLE_ModuleInfo_2_48, &STATE_VARIABLE_ModuleInfo_1_12);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Specs_7));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_13, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[1]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (SafeToContinue_6));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
  check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_117_112_100_97_116_101_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(PredId_4, (MR_Word) ((MR_Unsigned) 0U), &ExistsPredIds_8, STATE_VARIABLE_ModuleInfo_1_12, &STATE_VARIABLE_ModuleInfo_2_23);
  check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0(PredId_4, STATE_VARIABLE_ModuleInfo_2_23, &STATE_VARIABLE_ModuleInfo_3_24);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_6[0]), ExistsPredIds_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_3_24)), &conv2_STATE_VARIABLE_ModuleInfo_10);
  *STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_10));
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_117_112_100_97_116_101_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FSV_6;

  check_hlds__polymorphism__increment_arg_nums_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_FSV_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_FSV_6));
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_117_112_100_97_116_101_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_42,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_43,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45)
{
  MR_bool succeeded;
  MR_Word PredInfo0_13;
  MR_Word ClausesInfo0_14;
  MR_Word VarTable0_15;
  MR_Word HeadVars_16;
  MR_Word ExtraHeadVarList_17;
  MR_Word OldHeadVarList_18;
  MR_Word TypeVarSet_19;
  MR_Word ExistQVars_20;
  MR_Word ArgTypes0_21;
  MR_Integer NumExtraHeadVars_22;
  MR_Word PredInfo2_23;
  MR_Word PredInfo3_40;
  MR_Word PredInfo_41;
  MR_Word Subn_39;
  MR_Word OldHeadVarTypes_38;
  MR_Word TypeInfo_55_55;
  MR_Word TypeCtorInfo_56_56;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_44, PredId_8, &PredInfo0_13);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_13, &ClausesInfo0_14);
  hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo0_14, &VarTable0_15);
  hlds__hlds_clauses__clauses_info_get_arg_vector_2_p_0(ClausesInfo0_14, &HeadVars_16);
  hlds__hlds_args__proc_arg_vector_partition_poly_args_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), HeadVars_16, &ExtraHeadVarList_17, &OldHeadVarList_18);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo0_13, &TypeVarSet_19, &ExistQVars_20, &ArgTypes0_21);
  mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ExtraHeadVarList_17, &NumExtraHeadVars_22);
  if ((ExtraHeadVarList_17 == (MR_Word) ((MR_Unsigned) 0U)))
    PredInfo2_23 = PredInfo0_13;
  else
  {
    MR_Word ExtraArgTypes_26;
    MR_Word ArgTypes_27;
    MR_Word PredInfo1_28;
    MR_Word MaybeFormatCall1_29;

    parse_tree__var_table__lookup_var_types_3_p_0(VarTable0_15, ExtraHeadVarList_17, &ExtraArgTypes_26);
    ArgTypes_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraArgTypes_26, ArgTypes0_21);
    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_19, ExistQVars_20, ArgTypes_27, PredInfo0_13, &PredInfo1_28);
    hlds__hlds_pred__pred_info_get_format_call_info_2_p_0(PredInfo1_28, &MaybeFormatCall1_29);
    if ((MaybeFormatCall1_29 == (MR_Word) ((MR_Unsigned) 0U)))
      PredInfo2_23 = PredInfo1_28;
    else
    {
      MR_Word FormatCall1_30 = ((MR_Word) ((MR_hl_field(1, MaybeFormatCall1_29, 0))));
      MR_Word Context_31 = ((MR_Word) ((MR_hl_field(0, FormatCall1_30, 0))));
      MR_Word OoMFormatStrsValues1_32 = ((MR_Word) ((MR_hl_field(0, FormatCall1_30, 1))));
      MR_Word OoMFormatStrsValues2_33;
      MR_Word FormatCall2_34;
      MR_Word MaybeFormatCall2_35;
      MR_Word Var_49;

      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[0]));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_117_112_100_97_116_101_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0_1));
        MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_49, 3) = ((MR_Box) (NumExtraHeadVars_22));
      }
      mercury__one_or_more__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0), Var_49, OoMFormatStrsValues1_32, &OoMFormatStrsValues2_33);
      {
        FormatCall2_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FormatCall2_34, 0) = ((MR_Box) (Context_31));
        MR_hl_field(0, FormatCall2_34, 1) = ((MR_Box) (OoMFormatStrsValues2_33));
      }
      {
        MaybeFormatCall2_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeFormatCall2_35, 0) = ((MR_Box) (FormatCall2_34));
      }
      hlds__hlds_pred__pred_info_set_format_call_info_3_p_0(MaybeFormatCall2_35, PredInfo1_28, &PredInfo2_23);
    }
  }
  succeeded = (ExistQVars_20 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable0_15, OldHeadVarList_18, &OldHeadVarTypes_38);
    succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(ArgTypes0_21, OldHeadVarTypes_38, &Subn_39);
    if (succeeded)
    {
      TypeInfo_55_55 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]);
      TypeCtorInfo_56_56 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      succeeded = mercury__map__is_empty_1_p_0(TypeInfo_55_55, TypeCtorInfo_56_56, Subn_39);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    hlds__hlds_pred__pred_info_set_existq_tvar_binding_3_p_0(Subn_39, PredInfo2_23, &PredInfo3_40);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ExistsCastPredIds_43 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PredId_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ExistsCastPredIds_0_42));
    }
  }
  else
  {
    PredInfo3_40 = PredInfo2_23;
    *STATE_VARIABLE_ExistsCastPredIds_43 = STATE_VARIABLE_ExistsCastPredIds_0_42;
  }
  hlds__hlds_pred__pred_info_set_polymorphism_added_args_3_p_0(NumExtraHeadVars_22, PredInfo3_40, &PredInfo_41);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, PredInfo_41, STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45);
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ExistsCastPredIds_43;
  MR_Word conv6_STATE_VARIABLE_ModuleInfo_45;

  check_hlds__polymorphism__polymorphism_update_arg_types_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ExistsCastPredIds_43, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_ModuleInfo_45);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ExistsCastPredIds_43));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_45));
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_6_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_SafeToContinue_19;
  MR_Word conv1_STATE_VARIABLE_Specs_21;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_23;

  check_hlds__polymorphism__maybe_polymorphism_process_pred_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_SafeToContinue_19, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_21, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_ModuleInfo_23);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_SafeToContinue_19));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_21));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_23));
}

void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word * ExistsCastPredIds_9,
  MR_Word * SafeToContinue_10,
  MR_Word * Specs_11)
{
  MR_Word PredIdTable0_12;
  MR_Word PredIds0_13;
  MR_Word PredIdTable1_14;
  MR_Word PredIds1_15;
  MR_Word Var_18;
  MR_Word STATE_VARIABLE_ModuleInfo_1_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Box conv5_SafeToContinue_10;
  MR_Box conv4_Specs_11;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_21;
  MR_Box conv9_ExistsCastPredIds_9;
  MR_Box conv8_STATE_VARIABLE_ModuleInfo_17;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &PredIdTable0_12);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_12, &PredIds0_13);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_2[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ProgressStream_7));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_18, PredIds0_13, ((MR_Box) ((MR_Integer) 0)), &conv5_SafeToContinue_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv3_STATE_VARIABLE_ModuleInfo_1_21);
  *SafeToContinue_10 = ((MR_Word) (conv5_SafeToContinue_10));
  *Specs_11 = ((MR_Word) (conv4_Specs_11));
  STATE_VARIABLE_ModuleInfo_1_21 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_21));
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_1_21, &PredIdTable1_14);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable1_14, &PredIds1_15);
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (ProgressStream_7));
  }
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_3[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_6_p_0_2));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (Var_25));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_22, PredIds1_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv9_ExistsCastPredIds_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_21)), &conv8_STATE_VARIABLE_ModuleInfo_17);
  *ExistsCastPredIds_9 = ((MR_Word) (conv9_ExistsCastPredIds_9));
  *STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_17));
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
