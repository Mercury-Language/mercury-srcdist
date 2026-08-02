/*
** Automatically generated from `hlds_code_util.m'
** by the Mercury compiler,
** version rotd-2026-08-02
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


// :- module hlds.hlds_code_util.
// :- implementation.

/*
INIT mercury__hlds__hlds_code_util__init
ENDINIT
*/

#include "hlds.hlds_code_util.mih"


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
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_common_inst_vars_3_p_0(
  MR_Word A_4,
  MR_Word A_2,
  MR_Word * A_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(
  MR_Word RenamingA_4,
  MR_Word RenamingB_5,
  MR_Word * Result_6);

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word Modes_8,
  MR_Integer * MatchingProcId_9);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_insts_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstA_6,
  MR_Word InstB_7,
  MR_Word * Renaming_8);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_functor_lists_with_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_functor_lists_with_renaming_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Renaming_0_4,
  MR_Word * STATE_VARIABLE_Renaming_5);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Renaming_0_4,
  MR_Word * STATE_VARIABLE_Renaming_5);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ModesA_6,
  MR_Word ModesB_7,
  MR_Word * Renaming_8);

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_loop_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Modes_7,
  MR_Word HeadVar__3_3,
  MR_Integer * MatchingProcId_10,
  MR_Word * MatchingProcInfo_11);

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_4[1][5];

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_5[2][6];




static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_code_util_scalar_common_3[2])))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_1[1])),
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_code_util__match_corresponding_bound_functor_lists_with_renaming_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_code_util_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) (&hlds__hlds_code_util_scalar_common_3[0])) },
  /* row   2 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_code_util_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&hlds__hlds_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001)),
  ((MR_Box) (hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001)),
  (MR_String) "hlds.hlds_code_util",
  (MR_String) "inst_var_renaming",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_code_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_common_inst_vars_3_p_0(
  MR_Word A_4,
  MR_Word A_2,
  MR_Word * A_3)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]), ((MR_Box) (A_2)), ((MR_Box) (A_4)));
  if (succeeded)
  {
    *A_3 = A_4;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_A_3;

  succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_A_3);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_A_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(
  MR_Word RenamingA_4,
  MR_Word RenamingB_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

  succeeded = mercury__map__union_4_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]), (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]), (MR_Word) (&hlds__hlds_code_util_scalar_common_2[7]), RenamingA_4, RenamingB_5, Result_6);
  return succeeded;
}

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Procs_6,
  MR_Word Modes0_7,
  MR_Integer * ProcId_8)
{
  MR_bool succeeded;
  MR_Word Modes_9;

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_code_util_scalar_common_2[6]), Modes0_7, &Modes_9);
  succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(ModuleInfo_5, Procs_6, Modes_9, ProcId_8);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  succeeded = hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word Modes_8,
  MR_Integer * MatchingProcId_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Proc_6;
    MR_Word Procs_7;
    MR_Integer ProcId_10;
    MR_Word ProcInfo_11;
    MR_Word ArgModes_12;
    MR_Word TypeInfo_16_18;
    MR_Word TypeInfo_17_19;
    MR_Word Renamings_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Box conv1_Var_13;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Proc_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Procs_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ProcId_10 = ((MR_Integer) ((MR_hl_field(0, Proc_6, 0))));
      ProcInfo_11 = ((MR_Word) ((MR_hl_field(0, Proc_6, 1))));
      hlds__hlds_proc_util__proc_info_declared_argmodes_2_p_0(ProcInfo_11, &ArgModes_12);
      Var_15 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(ModuleInfo_5, Modes_8, ArgModes_12, Var_15, &Renamings_14);
      if (succeeded)
      {
        Var_16 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[5]);
        TypeInfo_16_18 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
        Var_17 = mercury__map__init_0_f_0(TypeInfo_16_18, TypeInfo_16_18);
        TypeInfo_17_19 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]);
        succeeded = mercury__list__foldl_4_p_3(TypeInfo_17_19, TypeInfo_17_19, Var_16, Renamings_14, ((MR_Box) (Var_17)), &conv1_Var_13);
        if (succeeded)
          succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        *MatchingProcId_9 = ProcId_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Procs_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_insts_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word InstA_6,
  MR_Word InstB_7,
  MR_Word * Renaming_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstA_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(InstA_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_42_42;

            succeeded = (InstB_7 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeInfo_42_42 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
              mercury__map__init_1_p_0(TypeInfo_42_42, TypeInfo_42_42, Renaming_8);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_41_41;

            succeeded = (InstB_7 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              TypeInfo_41_41 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
              mercury__map__init_1_p_0(TypeInfo_41_41, TypeInfo_41_41, Renaming_8);
              succeeded = MR_TRUE;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_35 = ((MR_Unsigned) ((MR_hl_field(1, InstA_6, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfoA_36 = ((MR_Word) ((MR_hl_field(1, InstA_6, 1))));
        MR_Word HOInstInfoB_37;
        MR_Word Var_47;

        succeeded = ((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_47 = ((MR_Unsigned) ((MR_hl_field(1, InstB_7, 0))) & (MR_Integer) 7);
          HOInstInfoB_37 = ((MR_Word) ((MR_hl_field(1, InstB_7, 1))));
          succeeded = (Uniq_35 == Var_47);
          if (succeeded)
          {
            if ((HOInstInfoA_36 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word TypeInfo_17_94;

              succeeded = (HOInstInfoB_37 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeInfo_17_94 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                *Renaming_8 = mercury__map__init_0_f_0(TypeInfo_17_94, TypeInfo_17_94);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word PredInstInfoA_86 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_36), (MR_Integer) 1));
              MR_Word PredInstInfoB_87;
              MR_Word PredOrFunc_88;
              MR_Word ModesA_89;
              MR_Word Detism_91;
              MR_Word ModesB_92;
              MR_Word Var_95;
              MR_Word Var_96;

              succeeded = (HOInstInfoB_37 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PredInstInfoB_87 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_37), (MR_Integer) 1));
                PredOrFunc_88 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfoA_86, 0))) & (MR_Integer) 1);
                ModesA_89 = ((MR_Word) ((MR_hl_field(0, PredInstInfoA_86, 1))));
                Detism_91 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfoA_86, 3))) & (MR_Integer) 7);
                Var_95 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfoB_87, 0))) & (MR_Integer) 1);
                ModesB_92 = ((MR_Word) ((MR_hl_field(0, PredInstInfoB_87, 1))));
                Var_96 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfoB_87, 3))) & (MR_Integer) 7);
                succeeded = (PredOrFunc_88 == Var_95);
                if (succeeded)
                {
                  succeeded = (Detism_91 == Var_96);
                  if (succeeded)
                    succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(ModuleInfo_5, ModesA_89, ModesB_92, Renaming_8);
                }
              }
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_43_43;
        MR_Word BoundFunctorsA_13 = ((MR_Word) ((MR_hl_field(2, InstA_6, 2))));
        MR_Word BoundFunctorsB_15;
        MR_Word Var_30;
        MR_Word Uniq_38 = ((MR_Unsigned) ((MR_hl_field(2, InstA_6, 0))) & (MR_Integer) 7);
        MR_Word Var_48;

        succeeded = ((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_48 = ((MR_Unsigned) ((MR_hl_field(2, InstB_7, 0))) & (MR_Integer) 7);
          BoundFunctorsB_15 = ((MR_Word) ((MR_hl_field(2, InstB_7, 2))));
          succeeded = (Uniq_38 == Var_48);
          if (succeeded)
          {
            TypeInfo_43_43 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
            Var_30 = mercury__map__init_0_f_0(TypeInfo_43_43, TypeInfo_43_43);
            succeeded = hlds__hlds_code_util__match_corresponding_bound_functor_lists_with_renaming_5_p_0(ModuleInfo_5, BoundFunctorsA_13, BoundFunctorsB_15, Var_30, Renaming_8);
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstA_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstNameA_28 = ((MR_Word) ((MR_hl_field(3, InstA_6, 1))));
            MR_Word InstNameB_29;

            succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstB_7, 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              InstNameB_29 = ((MR_Word) ((MR_hl_field(3, InstB_7, 1))));
              switch (MR_tag((MR_Word) InstNameA_28)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word TypeInfo_29_81;
                    MR_Word Name_61 = ((MR_Word) ((MR_hl_field(0, InstNameA_28, 0))));
                    MR_Word ArgsA_62 = ((MR_Word) ((MR_hl_field(0, InstNameA_28, 1))));
                    MR_Word ArgsB_63;
                    MR_Word Var_80;
                    MR_Word Var_83;

                    succeeded = ((MR_tag((MR_Word) InstNameB_29)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_83 = ((MR_Word) ((MR_hl_field(0, InstNameB_29, 0))));
                      ArgsB_63 = ((MR_Word) ((MR_hl_field(0, InstNameB_29, 1))));
                      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_61, Var_83);
                      if (succeeded)
                      {
                        TypeInfo_29_81 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                        Var_80 = mercury__map__init_0_f_0(TypeInfo_29_81, TypeInfo_29_81);
                        succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(ModuleInfo_5, ArgsA_62, ArgsB_63, Var_80, Renaming_8);
                      }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word TypeInfo_30_82;

                    succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstNameB_29, InstNameA_28);
                    if (succeeded)
                    {
                      TypeInfo_30_82 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                      *Renaming_8 = mercury__map__init_0_f_0(TypeInfo_30_82, TypeInfo_30_82);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, InstNameA_28, 0))))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        MR_Word TypeInfo_30_82;

                        succeeded = parse_tree__prog_data____Unify____inst_name_0_0(InstNameB_29, InstNameA_28);
                        if (succeeded)
                        {
                          TypeInfo_30_82 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                          *Renaming_8 = mercury__map__init_0_f_0(TypeInfo_30_82, TypeInfo_30_82);
                          succeeded = MR_TRUE;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_45_45;
            MR_Word InstVarSetA_18 = ((MR_Word) ((MR_hl_field(3, InstA_6, 1))));
            MR_Word SpecInstA_19 = ((MR_Word) ((MR_hl_field(3, InstA_6, 2))));
            MR_Word InstVarSetB_20;
            MR_Word SpecInstB_21;
            MR_Word Renaming0_22;
            MR_Word ListVarA_23;
            MR_Word ListVarB_24;
            MR_Word VarA_39;
            MR_Word VarB_40;
            MR_Word VarA0_25;
            MR_Word VarB0_26;
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word SpecVarB_27;
            MR_Box conv0_SpecVarB_27;

            succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstB_7, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              InstVarSetB_20 = ((MR_Word) ((MR_hl_field(3, InstB_7, 1))));
              SpecInstB_21 = ((MR_Word) ((MR_hl_field(3, InstB_7, 2))));
              succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(ModuleInfo_5, SpecInstA_19, SpecInstB_21, &Renaming0_22);
              if (succeeded)
              {
                TypeInfo_45_45 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                ListVarA_23 = mercury__set__to_sorted_list_1_f_0(TypeInfo_45_45, InstVarSetA_18);
                ListVarB_24 = mercury__set__to_sorted_list_1_f_0(TypeInfo_45_45, InstVarSetB_20);
                succeeded = (ListVarA_23 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  VarA0_25 = ((MR_Word) ((MR_hl_field(1, ListVarA_23, 0))));
                  Var_31 = ((MR_Word) ((MR_hl_field(1, ListVarA_23, 1))));
                  succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (ListVarB_24 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      VarB0_26 = ((MR_Word) ((MR_hl_field(1, ListVarB_24, 0))));
                      Var_32 = ((MR_Word) ((MR_hl_field(1, ListVarB_24, 1))));
                      succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
                if (succeeded)
                {
                  VarA_39 = VarA0_25;
                  VarB_40 = VarB0_26;
                }
                else
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_code_util.match_insts_with_renaming\'/4", (MR_String) "non-singleton sets");
                succeeded = mercury__map__search_3_p_0(TypeInfo_45_45, TypeInfo_45_45, Renaming0_22, ((MR_Box) (VarA_39)), &conv0_SpecVarB_27);
                if (succeeded)
                {
                  SpecVarB_27 = ((MR_Word) (conv0_SpecVarB_27));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]), ((MR_Box) (VarB_40)), ((MR_Box) (SpecVarB_27)));
                  if (succeeded)
                  {
                    *Renaming_8 = Renaming0_22;
                    succeeded = MR_TRUE;
                  }
                }
                else
                {
                  mercury__map__det_insert_4_p_0(TypeInfo_45_45, TypeInfo_45_45, ((MR_Box) (VarA_39)), ((MR_Box) (VarB_40)), Renaming0_22, Renaming_8);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_9 = ((MR_Unsigned) ((MR_hl_field(3, InstA_6, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfoA_10 = ((MR_Word) ((MR_hl_field(3, InstA_6, 2))));
            MR_Word HOInstInfoB_11;
            MR_Word Var_46;

            succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstB_7, 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Var_46 = ((MR_Unsigned) ((MR_hl_field(3, InstB_7, 1))) & (MR_Integer) 7);
              HOInstInfoB_11 = ((MR_Word) ((MR_hl_field(3, InstB_7, 2))));
              succeeded = (Uniq_9 == Var_46);
              if (succeeded)
              {
                if ((HOInstInfoA_10 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word TypeInfo_17_58;

                  succeeded = (HOInstInfoB_11 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeInfo_17_58 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
                    *Renaming_8 = mercury__map__init_0_f_0(TypeInfo_17_58, TypeInfo_17_58);
                    succeeded = MR_TRUE;
                  }
                }
                else
                {
                  MR_Word PredInstInfoA_50 = (MR_Word) (MR_body((MR_Word) (HOInstInfoA_10), (MR_Integer) 1));
                  MR_Word PredInstInfoB_51;
                  MR_Word PredOrFunc_52;
                  MR_Word ModesA_53;
                  MR_Word Detism_55;
                  MR_Word ModesB_56;
                  MR_Word Var_59;
                  MR_Word Var_60;

                  succeeded = (HOInstInfoB_11 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PredInstInfoB_51 = (MR_Word) (MR_body((MR_Word) (HOInstInfoB_11), (MR_Integer) 1));
                    PredOrFunc_52 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfoA_50, 0))) & (MR_Integer) 1);
                    ModesA_53 = ((MR_Word) ((MR_hl_field(0, PredInstInfoA_50, 1))));
                    Detism_55 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfoA_50, 3))) & (MR_Integer) 7);
                    Var_59 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfoB_51, 0))) & (MR_Integer) 1);
                    ModesB_56 = ((MR_Word) ((MR_hl_field(0, PredInstInfoB_51, 1))));
                    Var_60 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfoB_51, 3))) & (MR_Integer) 7);
                    succeeded = (PredOrFunc_52 == Var_59);
                    if (succeeded)
                    {
                      succeeded = (Detism_55 == Var_60);
                      if (succeeded)
                        succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(ModuleInfo_5, ModesA_53, ModesB_56, Renaming_8);
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_44_44;
            MR_Word VarA_16 = ((MR_Word) ((MR_hl_field(3, InstA_6, 1))));
            MR_Word VarB_17;

            succeeded = ((((MR_tag((MR_Word) InstB_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstB_7, 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              VarB_17 = ((MR_Word) ((MR_hl_field(3, InstB_7, 1))));
              TypeInfo_44_44 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
              *Renaming_8 = mercury__map__singleton_2_f_0(TypeInfo_44_44, TypeInfo_44_44, ((MR_Box) (VarA_16)), ((MR_Box) (VarB_17)));
              succeeded = MR_TRUE;
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_functor_lists_with_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_A_3;

  succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_A_3);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_A_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_bound_functor_lists_with_renaming_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Renaming_0_4,
  MR_Word * STATE_VARIABLE_Renaming_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Renaming_5 = STATE_VARIABLE_Renaming_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_11_28;
      MR_Word A_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word As_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word B_13;
      MR_Word Bs_14;
      MR_Word ConsId_16;
      MR_Word ArgsA_17;
      MR_Word ArgsB_18;
      MR_Word Renaming0_19;
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_Renaming_1_23;
      MR_Word Var_25;
      MR_Word Var_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_4;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        Bs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        ConsId_16 = ((MR_Word) ((MR_hl_field(0, A_11, 0))));
        ArgsA_17 = ((MR_Word) ((MR_hl_field(0, A_11, 1))));
        Var_25 = ((MR_Word) ((MR_hl_field(0, B_13, 0))));
        ArgsB_18 = ((MR_Word) ((MR_hl_field(0, B_13, 1))));
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_16, Var_25);
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
          Var_22 = mercury__map__init_0_f_0(TypeInfo_24_24, TypeInfo_24_24);
          succeeded = hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(ModuleInfo_1, ArgsA_17, ArgsB_18, Var_22, &Renaming0_19);
          if (succeeded)
          {
            Var_27 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[4]);
            TypeInfo_11_28 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
            succeeded = mercury__map__union_4_p_0(TypeInfo_11_28, TypeInfo_11_28, Var_27, Renaming0_19, STATE_VARIABLE_Renaming_0_4, &STATE_VARIABLE_Renaming_1_23);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = As_12;
              next_value_of_HeadVar__3_3 = Bs_14;
              next_value_of_STATE_VARIABLE_Renaming_0_4 = STATE_VARIABLE_Renaming_1_23;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_Renaming_0_4 = next_value_of_STATE_VARIABLE_Renaming_0_4;
              continue;
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_A_3;

  succeeded = hlds__hlds_code_util__merge_common_inst_vars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_A_3);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_A_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__match_corresponding_inst_lists_with_renaming_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Renaming_0_4,
  MR_Word * STATE_VARIABLE_Renaming_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Renaming_5 = STATE_VARIABLE_Renaming_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeInfo_11_21;
      MR_Word A_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word As_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word B_13;
      MR_Word Bs_14;
      MR_Word Renaming0_16;
      MR_Word STATE_VARIABLE_Renaming_1_19;
      MR_Word Var_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Renaming_0_4;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        B_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        Bs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(ModuleInfo_1, A_11, B_13, &Renaming0_16);
        if (succeeded)
        {
          Var_20 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[3]);
          TypeInfo_11_21 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
          succeeded = mercury__map__union_4_p_0(TypeInfo_11_21, TypeInfo_11_21, Var_20, Renaming0_16, STATE_VARIABLE_Renaming_0_4, &STATE_VARIABLE_Renaming_1_19);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = As_12;
            next_value_of_HeadVar__3_3 = Bs_14;
            next_value_of_STATE_VARIABLE_Renaming_0_4 = STATE_VARIABLE_Renaming_1_19;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            STATE_VARIABLE_Renaming_0_4 = next_value_of_STATE_VARIABLE_Renaming_0_4;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__5_5 = HeadVar__4_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeInfo_28_28;
      MR_Word ModeA_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ModesA_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ModeB_13;
      MR_Word ModesB_14;
      MR_Word InstAInitial_16;
      MR_Word InstAFinal_17;
      MR_Word InstBInitial_18;
      MR_Word InstBFinal_19;
      MR_Word InitialSubst_20;
      MR_Word FinalSubst_21;
      MR_Word Var_24;
      MR_Word STATE_VARIABLE_Substs_1_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModeB_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        ModesB_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        succeeded = hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, ModeA_11, &InstAInitial_16, &InstAFinal_17);
        if (succeeded)
        {
          succeeded = hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, ModeB_13, &InstBInitial_18, &InstBFinal_19);
          if (succeeded)
          {
            succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(ModuleInfo_1, InstAInitial_16, InstBInitial_18, &InitialSubst_20);
            if (succeeded)
            {
              succeeded = hlds__hlds_code_util__match_insts_with_renaming_4_p_0(ModuleInfo_1, InstAFinal_17, InstBFinal_19, &FinalSubst_21);
              if (succeeded)
              {
                Var_27 = (MR_Word) ((MR_Unsigned) 0U);
                TypeInfo_28_28 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]);
                {
                  Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_26, 0) = ((MR_Box) (FinalSubst_21));
                  MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_27));
                }
                {
                  Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_24, 0) = ((MR_Box) (InitialSubst_20));
                  MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_26));
                }
                mercury__list__append_3_p_1(TypeInfo_28_28, Var_24, HeadVar__4_4, &STATE_VARIABLE_Substs_1_25);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__2_2 = ModesA_12;
                next_value_of_HeadVar__3_3 = ModesB_14;
                next_value_of_HeadVar__4_4 = STATE_VARIABLE_Substs_1_25;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                HeadVar__4_4 = next_value_of_HeadVar__4_4;
                continue;
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  succeeded = hlds__hlds_code_util__merge_inst_var_renamings_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_with_renaming_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ModesA_6,
  MR_Word ModesB_7,
  MR_Word * Renaming_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_17_17;
  MR_Word Renamings_9;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Box conv1_Renaming_8;

  succeeded = hlds__hlds_code_util__mode_list_matches_with_renaming_2_5_p_0(ModuleInfo_5, ModesA_6, ModesB_7, (MR_Word) ((MR_Unsigned) 0U), &Renamings_9);
  if (succeeded)
  {
    Var_11 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[2]);
    TypeInfo_16_16 = (MR_Word) (&hlds__hlds_code_util_scalar_common_1[1]);
    Var_12 = mercury__map__init_0_f_0(TypeInfo_16_16, TypeInfo_16_16);
    TypeInfo_17_17 = (MR_Word) (&hlds__hlds_code_util_scalar_common_2[0]);
    succeeded = mercury__list__foldl_4_p_3(TypeInfo_17_17, TypeInfo_17_17, Var_11, Renamings_9, ((MR_Box) (Var_12)), &conv1_Renaming_8);
    if (succeeded)
    {
      *Renaming_8 = ((MR_Word) (conv1_Renaming_8));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcTable_7,
  MR_Word Modes0_8,
  MR_Integer * MatchingProcId_9,
  MR_Word * MatchingProcInfo_10)
{
  MR_bool succeeded;
  MR_Word Modes_11;
  MR_Word ProcPairs_12;

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_code_util_scalar_common_2[1]), Modes0_8, &Modes_11);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_7, &ProcPairs_12);
  succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_loop_5_p_0(ModuleInfo_6, Modes_11, ProcPairs_12, MatchingProcId_9, MatchingProcInfo_10);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_code_util__get_procedure_matching_argmodes_loop_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Modes_7,
  MR_Word HeadVar__3_3,
  MR_Integer * MatchingProcId_10,
  MR_Word * MatchingProcInfo_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ProcPair_8;
    MR_Word ProcPairs_9;
    MR_Integer ProcId_12;
    MR_Word ProcInfo_13;
    MR_Word ArgModes_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      ProcPair_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      ProcPairs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      ProcId_12 = ((MR_Integer) ((MR_hl_field(0, ProcPair_8, 0))));
      ProcInfo_13 = ((MR_Word) ((MR_hl_field(0, ProcPair_8, 1))));
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_13, &ArgModes_14);
      succeeded = hlds__hlds_code_util__mode_list_matches_3_p_0(ModuleInfo_6, Modes_7, ArgModes_14);
      if (succeeded)
      {
        *MatchingProcId_10 = ProcId_12;
        *MatchingProcInfo_11 = ProcInfo_13;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = ProcPairs_9;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_code_util__mode_list_matches_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    else
    {
      MR_Word Mode1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Modes1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Mode2_8;
      MR_Word Modes2_9;
      MR_Word Inst1_10;
      MR_Word Inst2_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Mode2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        Modes2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        succeeded = hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, Mode1_6, &Inst1_10, &Inst2_11);
        if (succeeded)
        {
          succeeded = hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, Mode2_8, &Var_12, &Var_13);
          if (succeeded)
          {
            succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst1_10, Var_12);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(Inst2_11, Var_13);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__2_2 = Modes1_7;
                next_value_of_HeadVar__3_3 = Modes2_9;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                continue;
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0(
  MR_Word InstanceTable_6,
  MR_Word Constraint_7,
  MR_Word InstanceId_8,
  MR_Word InstanceTypes_9)
{
  MR_Word ConsId_10;
  MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(0, Constraint_7, 0))));
  MR_Word ConstraintArgTypes_12 = ((MR_Word) ((MR_hl_field(0, Constraint_7, 1))));
  MR_Word ClassId_13;
  MR_Word InstanceList_14;
  MR_Integer InstanceNum_15;
  MR_Word InstanceDefn_16;
  MR_Word InstanceModuleName_17;
  MR_String InstanceString_18;
  MR_Integer Var_19;
  MR_Box conv0_InstanceList_14;
  MR_Box conv1_InstanceDefn_16;

  Var_19 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstraintArgTypes_12);
  {
    ClassId_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClassId_13, 0) = ((MR_Box) (ClassName_11));
    MR_hl_field(0, ClassId_13, 1) = ((MR_Box) (Var_19));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_code_util_scalar_common_1[0]), InstanceTable_6, ((MR_Box) (ClassId_13)), &conv0_InstanceList_14);
  InstanceList_14 = ((MR_Word) (conv0_InstanceList_14));
  InstanceNum_15 = (MR_Integer) (InstanceId_8);
  mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceList_14, InstanceNum_15, &conv1_InstanceDefn_16);
  InstanceDefn_16 = ((MR_Word) (conv1_InstanceDefn_16));
  InstanceModuleName_17 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_16, 0))));
  hlds__pred_name__make_instance_string_2_p_0(InstanceTypes_9, &InstanceString_18);
  {
    ConsId_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, ConsId_10, 1) = ((MR_Box) (InstanceModuleName_17));
    MR_hl_field(3, ConsId_10, 2) = ((MR_Box) (ClassId_13));
    MR_hl_field(3, ConsId_10, 3) = ((MR_Box) (InstanceNum_15));
    MR_hl_field(3, ConsId_10, 4) = ((MR_Box) (InstanceString_18));
  }
  return ConsId_10;
}

MR_Word MR_CALL 
hlds__hlds_code_util__type_ctor_info_cons_id_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_Word ConsId_4;
  MR_Word ModuleName_5;
  MR_String Name_6;
  MR_Integer Arity_7;

  hlds__type_util__type_ctor_module_name_arity_4_p_0(TypeCtor_3, &ModuleName_5, &Name_6, &Arity_7);
  {
    ConsId_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConsId_4, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, ConsId_4, 1) = ((MR_Box) (ModuleName_5));
    MR_hl_field(3, ConsId_4, 2) = ((MR_Box) (Name_6));
    MR_hl_field(3, ConsId_4, 3) = ((MR_Box) (Arity_7));
  }
  return ConsId_4;
}

MR_Word MR_CALL 
hlds__hlds_code_util__cons_id_to_tag_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word ConsId_5)
{
  MR_bool succeeded;
  MR_Word ConsTag_6;

  switch (MR_tag((MR_Word) ConsId_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ConsTag_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_code_util_scalar_common_1[3]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word DuCtor_40 = (MR_Word) (MR_body((MR_Word) (ConsId_5), (MR_Integer) 1));
        MR_Word ConsRepn_41;

        hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_4, DuCtor_40, &ConsRepn_41);
        ConsTag_6 = ((MR_Word) ((MR_hl_field(0, ConsRepn_41, 3))));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ShroudedPredProcId_23 = (MR_Word) (MR_body((MR_Word) (ConsId_5), (MR_Integer) 2));
        MR_Word PredId_24;
        MR_Integer ProcId_25;
        MR_Word Var_55;

        Var_55 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_23);
        PredId_24 = ((MR_Word) ((MR_hl_field(0, Var_55, 0))));
        ProcId_25 = ((MR_Integer) ((MR_hl_field(0, Var_55, 1))));
        {
          ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (PredId_24));
          MR_hl_field(3, ConsTag_6, 2) = ((MR_Box) (ProcId_25));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ConsTag_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_code_util_scalar_common_1[3]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_59;
            MR_Word ShroudedPredProcId_67 = ((MR_Word) ((MR_hl_field(3, ConsId_5, 1))));
            MR_Word PredId_68;
            MR_Integer ProcId_69;

            Var_59 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_67);
            PredId_68 = ((MR_Word) ((MR_hl_field(0, Var_59, 0))));
            ProcId_69 = ((MR_Integer) ((MR_hl_field(0, Var_59, 1))));
            {
              ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (PredId_68));
              MR_hl_field(3, ConsTag_6, 2) = ((MR_Box) (ProcId_69));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_61;
            MR_Word ShroudedPredProcId_73 = ((MR_Word) ((MR_hl_field(3, ConsId_5, 1))));
            MR_Word PredId_74;
            MR_Integer ProcId_75;

            Var_61 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_73);
            PredId_74 = ((MR_Word) ((MR_hl_field(0, Var_61, 0))));
            ProcId_75 = ((MR_Integer) ((MR_hl_field(0, Var_61, 1))));
            {
              ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (PredId_74));
              MR_hl_field(3, ConsTag_6, 2) = ((MR_Box) (ProcId_75));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_60;
            MR_Word ShroudedPredProcId_70 = ((MR_Word) ((MR_hl_field(3, ConsId_5, 1))));
            MR_Word PredId_71;
            MR_Integer ProcId_72;

            Var_60 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_70);
            PredId_71 = ((MR_Word) ((MR_hl_field(0, Var_60, 0))));
            ProcId_72 = ((MR_Integer) ((MR_hl_field(0, Var_60, 1))));
            {
              ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (PredId_71));
              MR_hl_field(3, ConsTag_6, 2) = ((MR_Box) (ProcId_72));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Globals_38;
            MR_Word TargetLang_39;
            MR_Integer Arity_76 = ((MR_Integer) ((MR_hl_field(3, ConsId_5, 1))));

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_38);
            libs__globals__get_target_2_p_0(Globals_38, &TargetLang_39);
            switch (TargetLang_39) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = (Arity_76 == (MR_Integer) 0);
                  if (succeeded)
                    ConsTag_6 = (MR_Word) (MR_mkword(1, &hlds__hlds_code_util_scalar_common_3[1]));
                  else
                    ConsTag_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_code_util_scalar_common_1[2]));
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                ConsTag_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_code_util_scalar_common_1[2]));
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_7 = ((MR_Word) ((MR_hl_field(3, ConsId_5, 1))));

            switch (MR_tag((MR_Word) IntConst_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer Int_8 = ((MR_Integer) ((MR_hl_field(0, IntConst_7, 0))));
                  MR_Word Var_42;

                  {
                    Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_42, 0) = ((MR_Box) (Int_8));
                  }
                  {
                    ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_42));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned UInt_9 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_7, 0))));
                  MR_Word Var_43;

                  {
                    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_43, 0) = ((MR_Box) (UInt_9));
                  }
                  {
                    ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_43));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  int8_t Int8_10 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_7, 0)));
                  MR_Word Var_44;

                  {
                    Var_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_44, 0) = ((MR_Box) (MR_Word) (Int8_10));
                  }
                  {
                    ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_44));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, IntConst_7, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      uint8_t UInt8_11 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_7, 1)));
                      MR_Word Var_45;

                      {
                        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, Var_45, 1) = ((MR_Box) (MR_Word) (UInt8_11));
                      }
                      {
                        ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_45));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      int16_t Int16_12 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_7, 1)));
                      MR_Word Var_46;

                      {
                        Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_46, 1) = ((MR_Box) (MR_Word) (Int16_12));
                      }
                      {
                        ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_46));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      uint16_t UInt16_13 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_7, 1)));
                      MR_Word Var_47;

                      {
                        Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, Var_47, 1) = ((MR_Box) (MR_Word) (UInt16_13));
                      }
                      {
                        ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_47));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      int32_t Int32_14 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_7, 1)));
                      MR_Word Var_48;

                      {
                        Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, Var_48, 1) = ((MR_Box) (MR_Word) (Int32_14));
                      }
                      {
                        ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_48));
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      uint32_t UInt32_15 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_7, 1)));
                      MR_Word Var_49;

                      {
                        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, Var_49, 1) = ((MR_Box) (MR_Word) (UInt32_15));
                      }
                      {
                        ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_49));
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      int64_t Int64_16 = MR_unbox_int64((MR_hl_field(3, IntConst_7, 1)));
                      MR_Word Var_50;

                      {
                        Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, Var_50, 1) = MR_box_int64(Int64_16);
                      }
                      {
                        ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_50));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      uint64_t UInt64_17 = MR_unbox_uint64((MR_hl_field(3, IntConst_7, 1)));
                      MR_Word Var_51;

                      {
                        Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, Var_51, 1) = MR_box_uint64(UInt64_17);
                      }
                      {
                        ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_51));
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_18 = MR_unbox_float((MR_hl_field(3, ConsId_5, 1)));

            {
              ConsTag_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ConsTag_6, 0) = MR_box_float(Float_18);
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_19 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_5, 1)));
            MR_Integer CharCode_20;
            MR_Word Var_52;

            mercury__char__to_int_2_p_0(Char_19, &CharCode_20);
            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_52, 0) = ((MR_Box) (CharCode_20));
            }
            {
              ConsTag_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ConsTag_6, 0) = ((MR_Box) (Var_52));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String String_21 = ((MR_String) ((MR_hl_field(3, ConsId_5, 1))));

            {
              ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (String_21));
            }
          }
          break;
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_code_util.cons_id_to_tag\'/2", (MR_String) "implementation_defined_const");
          break;
        case (MR_Integer) 10:
          {
            MR_Word ModuleName_26 = ((MR_Word) ((MR_hl_field(3, ConsId_5, 1))));
            MR_String TypeName_27 = ((MR_String) ((MR_hl_field(3, ConsId_5, 2))));
            MR_Integer Arity_28 = ((MR_Integer) ((MR_hl_field(3, ConsId_5, 3))));

            {
              ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (ModuleName_26));
              MR_hl_field(3, ConsTag_6, 2) = ((MR_Box) (TypeName_27));
              MR_hl_field(3, ConsTag_6, 3) = ((MR_Box) (Arity_28));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ClassName_29 = ((MR_Word) ((MR_hl_field(3, ConsId_5, 2))));
            MR_String EncodedArgs_31 = ((MR_String) ((MR_hl_field(3, ConsId_5, 4))));
            MR_Word ModuleName_66 = ((MR_Word) ((MR_hl_field(3, ConsId_5, 1))));

            {
              ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (ModuleName_66));
              MR_hl_field(3, ConsTag_6, 2) = ((MR_Box) (ClassName_29));
              MR_hl_field(3, ConsTag_6, 3) = ((MR_Box) (EncodedArgs_31));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer TIConstNum_33 = ((MR_Integer) ((MR_hl_field(3, ConsId_5, 1))));

            {
              ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (TIConstNum_33));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer TCIConstNum_34 = ((MR_Integer) ((MR_hl_field(3, ConsId_5, 1))));

            {
              ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (TCIConstNum_34));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer ConstNum_35 = ((MR_Integer) ((MR_hl_field(3, ConsId_5, 1))));
            MR_Word SubConsId_36 = ((MR_Word) ((MR_hl_field(3, ConsId_5, 2))));
            MR_Word SubConsTag_37;

            SubConsTag_37 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_4, SubConsId_36);
            {
              ConsTag_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConsTag_6, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, ConsTag_6, 1) = ((MR_Box) (ConstNum_35));
              MR_hl_field(3, ConsTag_6, 2) = ((MR_Box) (SubConsTag_37));
            }
          }
          break;
      }
      break;
  }
  return ConsTag_6;
}

static MR_bool MR_CALL 
hlds__hlds_code_util____Unify____inst_var_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_code_util____Unify____inst_var_renaming_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_code_util____Compare____inst_var_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_code_util____Compare____inst_var_renaming_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_code_util__init(void)
{
}

void mercury__hlds__hlds_code_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__hlds_code_util__hlds__hlds_code_util__type_ctor_info_inst_var_renaming_0);
}

void mercury__hlds__hlds_code_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_code_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_code_util.
