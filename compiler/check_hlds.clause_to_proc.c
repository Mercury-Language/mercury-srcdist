/*
** Automatically generated from `clause_to_proc.m'
** by the Mercury compiler,
** version 2018-10-03
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


// :- module check_hlds.clause_to_proc.
// :- implementation.

/*
INIT mercury__check_hlds__clause_to_proc__init
ENDINIT
*/

#include "check_hlds.clause_to_proc.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

static const MR_EnumFunctorDesc check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_0;

static const MR_EnumFunctorDesc check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_1;

static const MR_EnumFunctorDescPtr check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_value_ordered_maybe_in_in_mode_0[2];

static const MR_EnumFunctorDescPtr check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_name_ordered_maybe_in_in_mode_0[2];

static const MR_Integer check_hlds__clause_to_proc__check_hlds__clause_to_proc__functor_number_map_maybe_in_in_mode_0[2];

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__205__1_2_p_0(
  MR_Word MaybeTraceRuntimeCond_35,
  MR_Word HeadVar__2_99);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__204__1_2_p_0(
  MR_Word ExtraArgs_34,
  MR_Word HeadVar__2_94);

static void MR_CALL 
check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__clause_to_proc__set_arg_names_3_p_0(
  MR_Word Arg_4,
  MR_Word STATE_VARIABLE_Vars_0_10,
  MR_Word * STATE_VARIABLE_Vars_11);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__mode_initial_inst_is_ground_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4);

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_table_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredTable_0_10,
  MR_Word * STATE_VARIABLE_PredTable_11);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_maybe_imported_proc_in_proc_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word ClausesInfo_10,
  MR_Word _PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_19,
  MR_Word * STATE_VARIABLE_ProcInfo_20);

static void MR_CALL 
check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_112_121_95_99_108_97_117_115_101_115_95_116_111_95_109_97_121_98_101_95_105_109_112_111_114_116_101_100_95_112_114_111_99_95_105_110_95_112_114_111_99_95_105_110_102_111_95_95_91_52_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word ClausesInfo_10,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_19,
  MR_Word * STATE_VARIABLE_ProcInfo_20);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__clause_to_proc__accumulate_disjunction_purity_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Purity_0_2,
  MR_Word * STATE_VARIABLE_Purity_3);

static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Integer ProcId_8,
  MR_Word Clauses_9,
  MR_Word * MatchingClauses_10);

static void MR_CALL 
check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_109_97_116_99_104_105_110_103_95_117_110_105_102_121_95_99_108_97_117_115_101_115_95_97_99_99_95_95_91_50_93_95_48_5_p_0(
  MR_Word MaybeInInMode_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevMatchingClauses_0_4,
  MR_Word * STATE_VARIABLE_RevMatchingClauses_5);

static void MR_CALL 
check_hlds__clause_to_proc__select_matching_nonunify_clauses_acc_4_p_0(
  MR_Integer ProcId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevMatchingClauses_0_3,
  MR_Word * STATE_VARIABLE_RevMatchingClauses_4);

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_in_pred_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_in_pred_table_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredTable_0_10,
  MR_Word * STATE_VARIABLE_PredTable_11);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_for_all_valid_procs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_1[2][3];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_2[5][2];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_3[1][7];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_4[1][10];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_5[3][5];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_6[0])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_0 = {
  (MR_String) "not_in_in_mode",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_1 = {
  (MR_String) "in_in_mode",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_value_ordered_maybe_in_in_mode_0[2] = {
  &check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_0,
  &check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_name_ordered_maybe_in_in_mode_0[2] = {
  &check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_1,
  &check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_0
};

static const MR_Integer check_hlds__clause_to_proc__check_hlds__clause_to_proc__functor_number_map_maybe_in_in_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__clause_to_proc__check_hlds__clause_to_proc__type_ctor_info_maybe_in_in_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0_10001)),
  ((MR_Box) (check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0_10001)),
  (MR_String) "check_hlds.clause_to_proc",
  (MR_String) "maybe_in_in_mode",
  {     check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_name_ordered_maybe_in_in_mode_0 },
  {     check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_value_ordered_maybe_in_in_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__clause_to_proc__check_hlds__clause_to_proc__functor_number_map_maybe_in_in_mode_0
};

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__205__1_2_p_0(
  MR_Word MaybeTraceRuntimeCond_35,
  MR_Word HeadVar__2_99)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[3]), ((MR_Box) (MaybeTraceRuntimeCond_35)), ((MR_Box) (HeadVar__2_99)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__204__1_2_p_0(
  MR_Word ExtraArgs_34,
  MR_Word HeadVar__2_94)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[1]), ((MR_Box) (ExtraArgs_34)), ((MR_Box) (HeadVar__2_94)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__set_arg_names_3_p_0(
  MR_Word Arg_4,
  MR_Word STATE_VARIABLE_Vars_0_10,
  MR_Word * STATE_VARIABLE_Vars_11)
{
  {
    MR_Word Var_6;
    MR_Word MaybeNameMode_7;

    Var_6 = hlds__hlds_goal__foreign_arg_var_1_f_0(Arg_4);
    MaybeNameMode_7 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(Arg_4);
    if ((MaybeNameMode_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vars_11 = STATE_VARIABLE_Vars_0_10;
    else
    {
      MR_String Name_8;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameMode_7, (MR_Integer) 0))));

      Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
      mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, Name_8, STATE_VARIABLE_Vars_0_10, STATE_VARIABLE_Vars_11);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__mode_initial_inst_is_ground_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Mode_4)
{
  {
    MR_bool succeeded;
    MR_Word InitialInst_5;

    InitialInst_5 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(ModuleInfo_3, Mode_4);
    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_3, InitialInst_5);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ProcInfo_20;

    check_hlds__clause_to_proc__copy_clauses_to_maybe_imported_proc_in_proc_info_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcInfo_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcInfo_20));
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_table_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredTable_0_10,
  MR_Word * STATE_VARIABLE_PredTable_11)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo0_8;
    MR_Box conv0_PredInfo0_8;
    MR_Word PredMarkers_16;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_10, ((MR_Box) (PredId_6)), &conv0_PredInfo0_8);
    PredInfo0_8 = ((MR_Word) (conv0_PredInfo0_8));
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_8, &PredMarkers_16);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_16, (MR_Integer) 11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word PredInfo_9;
      MR_Word ClausesInfo_23;
      MR_Word ProcMap0_24;
      MR_Word ProcMap_25;
      MR_Word Var_26;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_8, &ClausesInfo_23);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_8, &ProcMap0_24);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_table_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModuleInfo_5));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (PredInfo0_8));
        MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (ClausesInfo_23));
        MR_hl_field(MR_mktag(0), Var_26, 6) = ((MR_Box) (PredId_6));
      }
      mercury__map__map_values_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_26, ProcMap0_24, &ProcMap_25);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_25, PredInfo0_8, &PredInfo_9);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_9)), STATE_VARIABLE_PredTable_0_10, STATE_VARIABLE_PredTable_11);
    }
    else
      *STATE_VARIABLE_PredTable_11 = STATE_VARIABLE_PredTable_0_10;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_maybe_imported_proc_in_proc_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word ClausesInfo_10,
  MR_Word _PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_19,
  MR_Word * STATE_VARIABLE_ProcInfo_20)
{
  check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_112_121_95_99_108_97_117_115_101_115_95_116_111_95_109_97_121_98_101_95_105_109_112_111_114_116_101_100_95_112_114_111_99_95_105_110_95_112_114_111_99_95_105_110_102_111_95_95_91_52_93_95_48_7_p_0(ModuleInfo_8, PredInfo_9, ClausesInfo_10, ProcId_12, STATE_VARIABLE_ProcInfo_0_19, STATE_VARIABLE_ProcInfo_20);
}

static void MR_CALL 
check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_112_121_95_99_108_97_117_115_101_115_95_116_111_95_109_97_121_98_101_95_105_109_112_111_114_116_101_100_95_112_114_111_99_95_105_110_95_112_114_111_99_95_105_110_102_111_95_95_91_52_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word ClausesInfo_10,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_19,
  MR_Word * STATE_VARIABLE_ProcInfo_20)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_9);
    if (!(succeeded))
    {
      MR_Integer Var_27;

      succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_9);
      if (succeeded)
      {
        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_27);
        succeeded = (ProcId_12 == Var_27);
      }
    }
    if (succeeded)
    {
      MR_Word HeadVars_14;
      MR_Word HeadVarList_15;
      MR_Word VarSet_16;
      MR_Word VarTypes_17;
      MR_Word RttiVarMaps_18;
      MR_Word STATE_VARIABLE_ProcInfo_21_21;
      MR_Word STATE_VARIABLE_ProcInfo_22_22;
      MR_Word STATE_VARIABLE_ProcInfo_23_23;

      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo_10, &HeadVars_14);
      HeadVarList_15 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[4]), HeadVars_14);
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo_10, &VarSet_16);
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_10, &VarTypes_17);
      hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_p_0(ClausesInfo_10, &RttiVarMaps_18);
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVarList_15, STATE_VARIABLE_ProcInfo_0_19, &STATE_VARIABLE_ProcInfo_21_21);
      hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_16, STATE_VARIABLE_ProcInfo_21_21, &STATE_VARIABLE_ProcInfo_22_22);
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_17, STATE_VARIABLE_ProcInfo_22_22, &STATE_VARIABLE_ProcInfo_23_23);
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_18, STATE_VARIABLE_ProcInfo_23_23, STATE_VARIABLE_ProcInfo_20);
    }
    else
      check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0(ModuleInfo_8, PredInfo_9, ProcId_12, STATE_VARIABLE_ProcInfo_0_19, STATE_VARIABLE_ProcInfo_20);
  }
}

MR_bool MR_CALL 
check_hlds__clause_to_proc__should_copy_clauses_to_procs_1_p_0(
  MR_Word PredInfo_2)
{
  {
    MR_bool succeeded;
    MR_Word PredMarkers_3;

    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_2, &PredMarkers_3);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_3, (MR_Integer) 11);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredTable_11;

    check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_table_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredTable_11));
  }
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0(
  MR_Word PredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredTable0_6;
    MR_Word PredTable_7;
    MR_Word Var_10;
    MR_Box conv1_PredTable_7;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredTable0_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__clause_to_proc_scalar_common_1[0]), Var_10, PredIds_4, ((MR_Box) (PredTable0_6)), &conv1_PredTable_7);
    PredTable_7 = ((MR_Word) (conv1_PredTable_7));
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__205__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__204__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Vars_11;

    check_hlds__clause_to_proc__set_arg_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Vars_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Vars_11));
  }
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_81,
  MR_Word * STATE_VARIABLE_ProcInfo_82)
{
  {
    MR_bool succeeded;
    MR_Word ClausesInfo_10;
    MR_Word VarSet0_11;
    MR_Word VarTypes_14;
    MR_Word HeadVars_15;
    MR_Word ClausesRep0_16;
    MR_Word RttiInfo_18;
    MR_Word Clauses_21;
    MR_Word MatchingClauses_22;
    MR_Word ClausesDisjuncts_23;
    MR_Word StateVarWarnings_24;
    MR_Word VarSet_37;
    MR_Word Goal_68;
    MR_Word HeadVarList_80;
    MR_Word STATE_VARIABLE_ProcInfo_83_83;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_7, &ClausesInfo_10);
    VarSet0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_10, (MR_Integer) 0))));
    VarTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_10, (MR_Integer) 3))));
    HeadVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_10, (MR_Integer) 4))));
    ClausesRep0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_10, (MR_Integer) 5))));
    RttiInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo_10, (MR_Integer) 7))));
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_16, &Clauses_21);
    check_hlds__clause_to_proc__select_matching_clauses_5_p_0(ModuleInfo_6, PredInfo_7, ProcId_8, Clauses_21, &MatchingClauses_22);
    check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(MatchingClauses_22, &ClausesDisjuncts_23, &StateVarWarnings_24);
    if ((StateVarWarnings_24 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ProcInfo_83_83 = STATE_VARIABLE_ProcInfo_0_81;
    else
      hlds__hlds_pred__proc_info_set_statevar_warnings_3_p_0(StateVarWarnings_24, STATE_VARIABLE_ProcInfo_0_81, &STATE_VARIABLE_ProcInfo_83_83);
    if ((ClausesDisjuncts_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Context_74;
      MR_Word NonLocalVars_75;
      MR_Word InstMapDelta_77;
      MR_Word GoalInfo_79;
      MR_Word Var_85;
      MR_Word Var_87;

      hlds__hlds_pred__proc_info_get_context_2_p_0(STATE_VARIABLE_ProcInfo_83_83, &Context_74);
      VarSet_37 = VarSet0_11;
      Var_85 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[4]), HeadVars_15);
      NonLocalVars_75 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_85);
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_77);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocalVars_75, InstMapDelta_77, (MR_Integer) 6, (MR_Integer) 0, Context_74, &GoalInfo_79);
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (ClausesDisjuncts_23));
      }
      {
        Goal_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_68, 0) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), Goal_68, 1) = ((MR_Box) (GoalInfo_79));
      }
    }
    else
    {
      MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClausesDisjuncts_23, (MR_Integer) 1))));
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClausesDisjuncts_23, (MR_Integer) 0))));
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_134, (MR_Integer) 1))));
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_134, (MR_Integer) 0))));

      if ((Var_133 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        switch (MR_tag((MR_Word) Var_136)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            VarSet_37 = VarSet0_11;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            VarSet_37 = VarSet0_11;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_136, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                VarSet_37 = VarSet0_11;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_136, (MR_Integer) 4))));
                  MR_Word ExtraArgs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_136, (MR_Integer) 5))));
                  MR_Word MaybeTraceRuntimeCond_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_136, (MR_Integer) 6))));
                  MR_Word Var_90;
                  MR_Word Var_95;
                  MR_Box conv1_VarSet_37;

                  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[0]), (MR_Word) (&check_hlds__clause_to_proc_scalar_common_1[1]), Args_33, ((MR_Box) (VarSet0_11)), &conv1_VarSet_37);
                  VarSet_37 = ((MR_Word) (conv1_VarSet_37));
                  {
                    Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_5[1]));
                    MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (ExtraArgs_34));
                    MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_4_p_0(Var_90, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc_in_proc_info\'/5", (MR_String) "extra_args");
                  {
                    Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_5[2]));
                    MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_5_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (MaybeTraceRuntimeCond_35));
                    MR_hl_field(MR_mktag(0), Var_95, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_4_p_0(Var_95, (MR_String) "check_hlds.clause_to_proc", (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc_in_proc_info\'/5", (MR_String) "trace runtime cond");
                }
                break;
            }
            break;
        }
        Goal_68 = Var_134;
      }
      else
      {
        MR_Word Context_111;
        MR_Word NonLocalVars_112;
        MR_Word DisjunctionPurity_113;
        MR_Word InstMapDelta_114;
        MR_Word GoalInfo_116;
        MR_Word Var_117;
        MR_Word Var_119;
        MR_Word Disjunct_151;
        MR_Word Disjuncts_152;
        MR_Word DisjunctPurity_154;
        MR_Word STATE_VARIABLE_Purity_13_157;

        Context_111 = hlds__hlds_goal__goal_info_get_context_1_f_0(Var_135);
        VarSet_37 = VarSet0_11;
        Var_117 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[4]), HeadVars_15);
        NonLocalVars_112 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_117);
        Disjunct_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClausesDisjuncts_23, (MR_Integer) 0))));
        Disjuncts_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClausesDisjuncts_23, (MR_Integer) 1))));
        DisjunctPurity_154 = hlds__hlds_goal__goal_get_purity_1_f_0(Disjunct_151);
        STATE_VARIABLE_Purity_13_157 = parse_tree__prog_data__worst_purity_2_f_0((MR_Integer) 0, DisjunctPurity_154);
        check_hlds__clause_to_proc__accumulate_disjunction_purity_3_p_0(Disjuncts_152, STATE_VARIABLE_Purity_13_157, &DisjunctionPurity_113);
        hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_114);
        hlds__hlds_goal__goal_info_init_6_p_0(NonLocalVars_112, InstMapDelta_114, (MR_Integer) 6, DisjunctionPurity_113, Context_111, &GoalInfo_116);
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (ClausesDisjuncts_23));
        }
        {
          Goal_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Goal_68, 0) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(0), Goal_68, 1) = ((MR_Box) (GoalInfo_116));
        }
      }
    }
    HeadVarList_80 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[4]), HeadVars_15);
    hlds__hlds_pred__proc_info_set_body_7_p_0(VarSet_37, VarTypes_14, HeadVarList_80, Goal_68, RttiInfo_18, STATE_VARIABLE_ProcInfo_83_83, STATE_VARIABLE_ProcInfo_82);
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__accumulate_disjunction_purity_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Purity_0_2,
  MR_Word * STATE_VARIABLE_Purity_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Purity_3 = STATE_VARIABLE_Purity_0_2;
    else
    {
      MR_Word Disjunct_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Disjuncts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word DisjunctPurity_10;
      MR_Word STATE_VARIABLE_Purity_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_2;

      DisjunctPurity_10 = hlds__hlds_goal__goal_get_purity_1_f_0(Disjunct_7);
      STATE_VARIABLE_Purity_13_13 = parse_tree__prog_data__worst_purity_2_f_0(STATE_VARIABLE_Purity_0_2, DisjunctPurity_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Disjuncts_8;
      next_value_of_STATE_VARIABLE_Purity_0_2 = STATE_VARIABLE_Purity_13_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Purity_0_2 = next_value_of_STATE_VARIABLE_Purity_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Clause_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Clauses_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_8;
    MR_Word FirstDisjuncts_9;
    MR_Word FirstWarnings_10;
    MR_Word LaterDisjuncts_11;
    MR_Word LaterWarnings_12;

    Goal_8 = hlds__hlds_clauses__clause_body_1_f_0(Clause_4);
    hlds__hlds_goal__goal_to_disj_list_2_p_0(Goal_8, &FirstDisjuncts_9);
    FirstWarnings_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_4, (MR_Integer) 4))));
    check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_3_p_0(Clauses_5, &LaterDisjuncts_11, &LaterWarnings_12);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FirstDisjuncts_9, LaterDisjuncts_11);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), FirstWarnings_10, LaterWarnings_12);
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__clause_to_proc__mode_initial_inst_is_ground_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__select_matching_clauses_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Integer ProcId_8,
  MR_Word Clauses_9,
  MR_Word * MatchingClauses_10)
{
  {
    MR_bool succeeded;
    MR_Word Origin_11;
    MR_Word RevMatchingClauses_17;
    MR_Word Var_18;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_7, &Origin_11);
    succeeded = ((MR_tag((MR_Word) Origin_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Origin_11, (MR_Integer) 0))) & (MR_Integer) 3);
      succeeded = (Var_18 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word ProcInfo_14;
      MR_Word ArgModes_15;
      MR_Word MaybeInInMode_16;
      MR_Word Var_19;

      hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_7, ProcId_8, &ProcInfo_14);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_14, &ArgModes_15);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__clause_to_proc__select_matching_clauses_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_6));
      }
      succeeded = mercury__list__all_true_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_19, ArgModes_15);
      if (succeeded)
        MaybeInInMode_16 = (MR_Integer) 1;
      else
        MaybeInInMode_16 = (MR_Integer) 0;
      check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_109_97_116_99_104_105_110_103_95_117_110_105_102_121_95_99_108_97_117_115_101_115_95_97_99_99_95_95_91_50_93_95_48_5_p_0(MaybeInInMode_16, Clauses_9, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingClauses_17);
    }
    else
      check_hlds__clause_to_proc__select_matching_nonunify_clauses_acc_4_p_0(ProcId_8, Clauses_9, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingClauses_17);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), RevMatchingClauses_17, MatchingClauses_10);
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_109_97_116_99_104_105_110_103_95_117_110_105_102_121_95_99_108_97_117_115_101_115_95_97_99_99_95_95_91_50_93_95_48_5_p_0(
  MR_Word MaybeInInMode_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevMatchingClauses_0_4,
  MR_Word * STATE_VARIABLE_RevMatchingClauses_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevMatchingClauses_5 = STATE_VARIABLE_RevMatchingClauses_0_4;
    else
    {
      MR_Word Clause_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Clauses_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ApplicableProcIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_13, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevMatchingClauses_24_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevMatchingClauses_0_4;

      switch (MR_tag((MR_Word) ApplicableProcIds_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplicableProcIds_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_RevMatchingClauses_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_24_24, 0) = ((MR_Box) (Clause_13));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_24_24, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_4));
              }
              break;
            case (MR_Integer) 1:
              switch (MaybeInInMode_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_RevMatchingClauses_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_24_24, 0) = ((MR_Box) (Clause_13));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_24_24, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_4));
                  }
                  break;
                case (MR_Integer) 0:
                  STATE_VARIABLE_RevMatchingClauses_24_24 = STATE_VARIABLE_RevMatchingClauses_0_4;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MaybeInInMode_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  STATE_VARIABLE_RevMatchingClauses_24_24 = STATE_VARIABLE_RevMatchingClauses_0_4;
                  break;
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_RevMatchingClauses_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_24_24, 0) = ((MR_Box) (Clause_13));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_24_24, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_4));
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.clause_to_proc.select_matching_unify_clauses_acc\'/5", (MR_String) "non unify mode");
              return;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Clauses_14;
      next_value_of_STATE_VARIABLE_RevMatchingClauses_0_4 = STATE_VARIABLE_RevMatchingClauses_24_24;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevMatchingClauses_0_4 = next_value_of_STATE_VARIABLE_RevMatchingClauses_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__select_matching_nonunify_clauses_acc_4_p_0(
  MR_Integer ProcId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevMatchingClauses_0_3,
  MR_Word * STATE_VARIABLE_RevMatchingClauses_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevMatchingClauses_4 = STATE_VARIABLE_RevMatchingClauses_0_3;
    else
    {
      MR_Word Clause_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Clauses_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ApplicableProcIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_10, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevMatchingClauses_20_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevMatchingClauses_0_3;

      switch (MR_tag((MR_Word) ApplicableProcIds_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplicableProcIds_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_RevMatchingClauses_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_20_20, 0) = ((MR_Box) (Clause_10));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_20_20, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_3));
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.clause_to_proc.select_matching_nonunify_clauses_acc\'/4", (MR_String) "unify mode");
                  return;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ApplicableProcIds_13, (MR_Integer) 0))));

            succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_1)), ProcIds_14);
            if (succeeded)
              {
                STATE_VARIABLE_RevMatchingClauses_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_20_20, 0) = ((MR_Box) (Clause_10));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevMatchingClauses_20_20, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_3));
              }
            else
              STATE_VARIABLE_RevMatchingClauses_20_20 = STATE_VARIABLE_RevMatchingClauses_0_3;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Clauses_11;
      next_value_of_STATE_VARIABLE_RevMatchingClauses_0_3 = STATE_VARIABLE_RevMatchingClauses_20_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevMatchingClauses_0_3 = next_value_of_STATE_VARIABLE_RevMatchingClauses_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredTable0_6;
    MR_Word PredTable_7;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredTable0_6);
    check_hlds__clause_to_proc__copy_pred_clauses_to_procs_in_pred_table_4_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, PredTable0_6, &PredTable_7);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_in_pred_table_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ProcInfo_20;

    check_hlds__clause_to_proc__copy_clauses_to_maybe_imported_proc_in_proc_info_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcInfo_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcInfo_20));
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_procs_in_pred_table_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredTable_0_10,
  MR_Word * STATE_VARIABLE_PredTable_11)
{
  {
    MR_Word PredInfo0_8;
    MR_Word PredInfo_9;
    MR_Word ClausesInfo_20;
    MR_Word ProcMap0_21;
    MR_Word ProcMap_22;
    MR_Word Var_23;
    MR_Box conv0_PredInfo0_8;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_10, ((MR_Box) (PredId_6)), &conv0_PredInfo0_8);
    PredInfo0_8 = ((MR_Word) (conv0_PredInfo0_8));
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_8, &ClausesInfo_20);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_8, &ProcMap0_21);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_pred_clauses_to_procs_in_pred_table_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (PredInfo0_8));
      MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (ClausesInfo_20));
      MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (PredId_6));
    }
    mercury__map__map_values_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_23, ProcMap0_21, &ProcMap_22);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_22, PredInfo0_8, &PredInfo_9);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_9)), STATE_VARIABLE_PredTable_0_10, STATE_VARIABLE_PredTable_11);
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_for_all_valid_procs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PredTable_11;

    check_hlds__clause_to_proc__copy_pred_clauses_to_procs_in_pred_table_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredTable_11));
  }
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_for_all_valid_procs_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  {
    MR_Word PredTable0_4;
    MR_Word PredIds_5;
    MR_Word PredTable_6;
    MR_Word Var_9;
    MR_Box conv1_PredTable_6;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &PredTable0_4);
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_4, &PredIds_5);
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_for_all_valid_procs_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__clause_to_proc_scalar_common_1[0]), Var_9, PredIds_5, ((MR_Box) (PredTable0_4)), &conv1_PredTable_6);
    PredTable_6 = ((MR_Word) (conv1_PredTable_6));
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_6, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8);
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__clause_to_proc__init(void)
{
}

void mercury__check_hlds__clause_to_proc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__clause_to_proc__check_hlds__clause_to_proc__type_ctor_info_maybe_in_in_mode_0);
}

void mercury__check_hlds__clause_to_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__clause_to_proc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.clause_to_proc.
