/*
** Automatically generated from `clause_to_proc.m'
** by the Mercury compiler,
** version rotd-2025-11-16
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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0;

static const MR_EnumFunctorDesc check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_0;

static const MR_EnumFunctorDesc check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_1;

static const MR_EnumFunctorDescPtr check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_ordinal_ordered_maybe_in_in_mode_0[2];

static const MR_EnumFunctorDescPtr check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_name_ordered_maybe_in_in_mode_0[2];

static const MR_Integer check_hlds__clause_to_proc__check_hlds__clause_to_proc__functor_number_map_maybe_in_in_mode_0[2];

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__184__1_2_p_0(
  MR_Word MaybeTraceRuntimeCond_34,
  MR_Word HeadVar__2_94);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__183__1_2_p_0(
  MR_Word ExtraArgs_33,
  MR_Word HeadVar__2_90);

static void MR_CALL 
check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__clause_to_proc__set_arg_names_3_p_0(
  MR_Word Arg_4,
  MR_Word STATE_VARIABLE_VarTable_0_10,
  MR_Word * STATE_VARIABLE_VarTable_11);

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_id_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_id_table_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_PredIdTable_0_8,
  MR_Word * STATE_VARIABLE_PredIdTable_9);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_maybe_imported_proc_in_proc_info_6_p_0(
  MR_Word PredInfo_7,
  MR_Word ClausesInfo_8,
  MR_Word _PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17);

static void MR_CALL 
check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_112_121_95_99_108_97_117_115_101_115_95_116_111_95_109_97_121_98_101_95_105_109_112_111_114_116_101_100_95_112_114_111_99_95_105_110_95_112_114_111_99_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0(
  MR_Word PredInfo_7,
  MR_Word ClausesInfo_8,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_in_pred_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_in_pred_info_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_PredInfo_0_9,
  MR_Word * STATE_VARIABLE_PredInfo_10);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_109_97_116_99_104_105_110_103_95_117_110_105_102_121_95_99_108_97_117_115_101_115_95_97_99_99_95_95_91_50_93_95_48_5_p_0(
  MR_Word MaybeInInMode_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevMatchingClauses_0_4,
  MR_Word * STATE_VARIABLE_RevMatchingClauses_5);

static void MR_CALL 
check_hlds__clause_to_proc__accumulate_disjunction_purity_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Purity_0_2,
  MR_Word * STATE_VARIABLE_Purity_3);

static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Warnings_0_4,
  MR_Word * STATE_VARIABLE_Warnings_5);

static void MR_CALL 
check_hlds__clause_to_proc__select_matching_nonunify_clauses_acc_4_p_0(
  MR_Integer ProcId_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevMatchingClauses_0_3,
  MR_Word * STATE_VARIABLE_RevMatchingClauses_4);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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


static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_1[4][3];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_2[4][2];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_3[3][6];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_4[1][9];

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_5[2][5];




static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_3[0])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_for_all_valid_procs_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_3[1])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_3[2])),
    ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_3[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__clause_to_proc_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0)),
    ((MR_Box) (&check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__clause_to_proc__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_expr_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__clause_to_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&check_hlds__clause_to_proc__parse_tree__prog_data__ti_trace_expr_1parse_tree__prog_data__type_ctor_info_trace_runtime_0) }
};

static const MR_EnumFunctorDesc check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_0 = {
  (MR_String) "not_in_in_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_functor_desc_maybe_in_in_mode_0_1 = {
  (MR_String) "in_in_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_ordinal_ordered_maybe_in_in_mode_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0_10001)),
  ((MR_Box) (check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0_10001)),
  (MR_String) "check_hlds.clause_to_proc",
  (MR_String) "maybe_in_in_mode",
  { check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_name_ordered_maybe_in_in_mode_0 },
  { check_hlds__clause_to_proc__check_hlds__clause_to_proc__enum_ordinal_ordered_maybe_in_in_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__clause_to_proc__check_hlds__clause_to_proc__functor_number_map_maybe_in_in_mode_0,

};

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__184__1_2_p_0(
  MR_Word MaybeTraceRuntimeCond_34,
  MR_Word HeadVar__2_94)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[2]), ((MR_Box) (MaybeTraceRuntimeCond_34)), ((MR_Box) (HeadVar__2_94)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__183__1_2_p_0(
  MR_Word ExtraArgs_33,
  MR_Word HeadVar__2_90)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[0]), ((MR_Box) (ExtraArgs_33)), ((MR_Box) (HeadVar__2_90)));
  return succeeded;
}

static void MR_CALL 
check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__clause_to_proc__set_arg_names_3_p_0(
  MR_Word Arg_4,
  MR_Word STATE_VARIABLE_VarTable_0_10,
  MR_Word * STATE_VARIABLE_VarTable_11)
{
  MR_Word Var_6;
  MR_Word MaybeNameMode_7;

  Var_6 = hlds__hlds_goal__foreign_arg_var_1_f_0(Arg_4);
  MaybeNameMode_7 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(Arg_4);
  if ((MaybeNameMode_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_VarTable_11 = STATE_VARIABLE_VarTable_0_10;
  else
  {
    MR_String Name_8;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, MaybeNameMode_7, 0))));

    Name_8 = ((MR_String) ((MR_hl_field(0, Var_12, 0))));
    parse_tree__var_table__update_var_name_4_p_0(Var_6, Name_8, STATE_VARIABLE_VarTable_0_10, STATE_VARIABLE_VarTable_11);
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_id_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcInfo_17;

  check_hlds__clause_to_proc__copy_clauses_to_maybe_imported_proc_in_proc_info_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcInfo_17));
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_id_table_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_PredIdTable_0_8,
  MR_Word * STATE_VARIABLE_PredIdTable_9)
{
  MR_bool succeeded;
  MR_Word PredInfo0_6;
  MR_Box conv0_PredInfo0_6;
  MR_Word PredMarkers_12;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredIdTable_0_8, ((MR_Box) (PredId_4)), &conv0_PredInfo0_6);
  PredInfo0_6 = ((MR_Word) (conv0_PredInfo0_6));
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_6, &PredMarkers_12);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(PredMarkers_12, (MR_Integer) 12);
  succeeded = !(succeeded);
  if (succeeded)
  {
    MR_Word PredInfo_7;
    MR_Word ClausesInfo_14;
    MR_Word ProcMap0_15;
    MR_Word ProcMap_16;
    MR_Word Var_17;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_6, &ClausesInfo_14);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_6, &ProcMap0_15);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[0]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_id_table_3_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (PredInfo0_6));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (ClausesInfo_14));
      MR_hl_field(0, Var_17, 5) = ((MR_Box) (PredId_4));
    }
    mercury__map__map_values_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_17, ProcMap0_15, &ProcMap_16);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_16, PredInfo0_6, &PredInfo_7);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_4)), ((MR_Box) (PredInfo_7)), STATE_VARIABLE_PredIdTable_0_8, STATE_VARIABLE_PredIdTable_9);
  }
  else
    *STATE_VARIABLE_PredIdTable_9 = STATE_VARIABLE_PredIdTable_0_8;
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_maybe_imported_proc_in_proc_info_6_p_0(
  MR_Word PredInfo_7,
  MR_Word ClausesInfo_8,
  MR_Word _PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17)
{
  check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_112_121_95_99_108_97_117_115_101_115_95_116_111_95_109_97_121_98_101_95_105_109_112_111_114_116_101_100_95_112_114_111_99_95_105_110_95_112_114_111_99_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0(PredInfo_7, ClausesInfo_8, ProcId_10, STATE_VARIABLE_ProcInfo_0_16, STATE_VARIABLE_ProcInfo_17);
}

static void MR_CALL 
check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_112_121_95_99_108_97_117_115_101_115_95_116_111_95_109_97_121_98_101_95_105_109_112_111_114_116_101_100_95_112_114_111_99_95_105_110_95_112_114_111_99_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0(
  MR_Word PredInfo_7,
  MR_Word ClausesInfo_8,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_7);
  if (!(succeeded))
  {
    MR_Integer Var_21;

    succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_7);
    if (succeeded)
    {
      hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_21);
      succeeded = (ProcId_10 == Var_21);
    }
  }
  if (succeeded)
  {
    MR_Word HeadVars_12;
    MR_Word HeadVarList_13;
    MR_Word VarTable_14;
    MR_Word RttiVarMaps_15;
    MR_Word STATE_VARIABLE_ProcInfo_1_18;
    MR_Word STATE_VARIABLE_ProcInfo_2_19;

    hlds__hlds_clauses__clauses_info_get_arg_vector_2_p_0(ClausesInfo_8, &HeadVars_12);
    HeadVarList_13 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[3]), HeadVars_12);
    hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo_8, &VarTable_14);
    hlds__hlds_clauses__clauses_info_get_rtti_varmaps_2_p_0(ClausesInfo_8, &RttiVarMaps_15);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVarList_13, STATE_VARIABLE_ProcInfo_0_16, &STATE_VARIABLE_ProcInfo_1_18);
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_14, STATE_VARIABLE_ProcInfo_1_18, &STATE_VARIABLE_ProcInfo_2_19);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_15, STATE_VARIABLE_ProcInfo_2_19, STATE_VARIABLE_ProcInfo_17);
  }
  else
    check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0(PredInfo_7, ProcId_10, STATE_VARIABLE_ProcInfo_0_16, STATE_VARIABLE_ProcInfo_17);
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_in_pred_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_17;

  check_hlds__clause_to_proc__copy_clauses_to_maybe_imported_proc_in_proc_info_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_17));
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_in_pred_info_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_PredInfo_0_9,
  MR_Word * STATE_VARIABLE_PredInfo_10)
{
  MR_Word ClausesInfo_6;
  MR_Word ProcMap0_7;
  MR_Word ProcMap_8;
  MR_Word Var_11;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_9, &ClausesInfo_6);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_9, &ProcMap0_7);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_procs_in_pred_info_3_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (STATE_VARIABLE_PredInfo_0_9));
    MR_hl_field(0, Var_11, 4) = ((MR_Box) (ClausesInfo_6));
    MR_hl_field(0, Var_11, 5) = ((MR_Box) (PredId_4));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_11, ProcMap0_7, &ProcMap_8);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_8, STATE_VARIABLE_PredInfo_0_9, STATE_VARIABLE_PredInfo_10);
}

MR_bool MR_CALL 
check_hlds__clause_to_proc__should_copy_clauses_to_procs_1_p_0(
  MR_Word PredInfo_2)
{
  MR_bool succeeded;
  MR_Word PredMarkers_3;

  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_2, &PredMarkers_3);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(PredMarkers_3, (MR_Integer) 12);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__184__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__clause_to_proc__IntroducedFrom__pred__copy_clauses_to_proc_in_proc_info__183__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_VarTable_11;

  check_hlds__clause_to_proc__set_arg_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_VarTable_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_VarTable_11));
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0(
  MR_Word PredInfo_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_80,
  MR_Word * STATE_VARIABLE_ProcInfo_81)
{
  MR_bool succeeded;
  MR_Word ClausesInfo_8;
  MR_Word VarTable0_11;
  MR_Word RttiVarMaps_12;
  MR_Word HeadVars_14;
  MR_Word ClausesRep0_15;
  MR_Word Clauses_19;
  MR_Word MatchingClauses_20;
  MR_Word ClausesDisjunctsCord_21;
  MR_Word StateVarWarnings_22;
  MR_Word ClausesDisjuncts_25;
  MR_Word VarTable_36;
  MR_Word Goal_67;
  MR_Word HeadVarList_79;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_ProcInfo_1_84;
  MR_Word Origin_136;
  MR_Word RevMatchingClauses_140;
  MR_Word Var_141;
  MR_Word Var_142;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_5, &ClausesInfo_8);
  VarTable0_11 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_8, 2))));
  RttiVarMaps_12 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_8, 3))));
  HeadVars_14 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_8, 5))));
  ClausesRep0_15 = ((MR_Word) ((MR_hl_field(0, ClausesInfo_8, 6))));
  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_15, &Clauses_19);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_5, &Origin_136);
  succeeded = ((MR_tag((MR_Word) Origin_136)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_141 = ((MR_Word) ((MR_hl_field(1, Origin_136, 0))));
    succeeded = ((MR_tag((MR_Word) Var_141)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_142 = ((MR_Unsigned) ((MR_hl_field(0, Var_141, 0))) & (MR_Integer) 3);
      succeeded = (Var_142 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word MaybeInInMode_139;
    MR_Integer Var_144;

    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_144);
    succeeded = (ProcId_6 == Var_144);
    if (succeeded)
      MaybeInInMode_139 = (MR_Integer) 1;
    else
      MaybeInInMode_139 = (MR_Integer) 0;
    check_hlds__clause_to_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_109_97_116_99_104_105_110_103_95_117_110_105_102_121_95_99_108_97_117_115_101_115_95_97_99_99_95_95_91_50_93_95_48_5_p_0(MaybeInInMode_139, Clauses_19, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingClauses_140);
  }
  else
    check_hlds__clause_to_proc__select_matching_nonunify_clauses_acc_4_p_0(ProcId_6, Clauses_19, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingClauses_140);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), RevMatchingClauses_140, &MatchingClauses_20);
  Var_82 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
  check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_5_p_0(MatchingClauses_20, Var_82, &ClausesDisjunctsCord_21, (MR_Word) ((MR_Unsigned) 0U), &StateVarWarnings_22);
  if ((StateVarWarnings_22 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ProcInfo_1_84 = STATE_VARIABLE_ProcInfo_0_80;
  else
    hlds__hlds_pred__proc_info_set_statevar_warnings_3_p_0(StateVarWarnings_22, STATE_VARIABLE_ProcInfo_0_80, &STATE_VARIABLE_ProcInfo_1_84);
  ClausesDisjuncts_25 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ClausesDisjunctsCord_21);
  if ((ClausesDisjuncts_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_73;
    MR_Word NonLocalVars_74;
    MR_Word InstMapDelta_76;
    MR_Word GoalInfo_78;
    MR_Word Var_96;
    MR_Word Var_98;

    hlds__hlds_pred__proc_info_get_context_2_p_0(STATE_VARIABLE_ProcInfo_1_84, &Context_73);
    VarTable_36 = VarTable0_11;
    Var_96 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[3]), HeadVars_14);
    NonLocalVars_74 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_96);
    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_76);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocalVars_74, InstMapDelta_76, (MR_Integer) 6, (MR_Integer) 0, Context_73, &GoalInfo_78);
    {
      Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_98, 1) = ((MR_Box) (ClausesDisjuncts_25));
    }
    {
      Goal_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_67, 0) = ((MR_Box) (Var_98));
      MR_hl_field(0, Goal_67, 1) = ((MR_Box) (GoalInfo_78));
    }
  }
  else
  {
    MR_Word Var_132 = ((MR_Word) ((MR_hl_field(1, ClausesDisjuncts_25, 1))));
    MR_Word Var_133 = ((MR_Word) ((MR_hl_field(1, ClausesDisjuncts_25, 0))));
    MR_Word Var_134 = ((MR_Word) ((MR_hl_field(0, Var_133, 1))));
    MR_Word Var_135 = ((MR_Word) ((MR_hl_field(0, Var_133, 0))));

    if ((Var_132 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      switch (MR_tag((MR_Word) Var_135)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          VarTable_36 = VarTable0_11;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Var_135, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
              VarTable_36 = VarTable0_11;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Args_32 = ((MR_Word) ((MR_hl_field(3, Var_135, 4))));
                MR_Word ExtraArgs_33 = ((MR_Word) ((MR_hl_field(3, Var_135, 5))));
                MR_Word MaybeTraceRuntimeCond_34 = ((MR_Word) ((MR_hl_field(3, Var_135, 6))));
                MR_Word Var_87;
                MR_Word Var_91;
                MR_Box conv1_VarTable_36;

                mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&check_hlds__clause_to_proc_scalar_common_1[3]), Args_32, ((MR_Box) (VarTable0_11)), &conv1_VarTable_36);
                VarTable_36 = ((MR_Word) (conv1_VarTable_36));
                {
                  Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_5[0]));
                  MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0_2));
                  MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_87, 3) = ((MR_Box) (ExtraArgs_33));
                  MR_hl_field(0, Var_87, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_87, (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc_in_proc_info\'/4", (MR_String) "extra_args");
                {
                  Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_91, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_5[1]));
                  MR_hl_field(0, Var_91, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0_3));
                  MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_91, 3) = ((MR_Box) (MaybeTraceRuntimeCond_34));
                  MR_hl_field(0, Var_91, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_91, (MR_String) "predicate \140check_hlds.clause_to_proc.copy_clauses_to_proc_in_proc_info\'/4", (MR_String) "trace runtime cond");
              }
              break;
          }
          break;
      }
      Goal_67 = Var_133;
    }
    else
    {
      MR_Word Context_110;
      MR_Word NonLocalVars_111;
      MR_Word DisjunctionPurity_112;
      MR_Word InstMapDelta_113;
      MR_Word GoalInfo_115;
      MR_Word Var_116;
      MR_Word Var_118;
      MR_Word Disjunct_156;
      MR_Word Disjuncts_157;
      MR_Word DisjunctPurity_158;
      MR_Word STATE_VARIABLE_Purity_1_161;

      Context_110 = hlds__hlds_goal__goal_info_get_context_1_f_0(Var_134);
      VarTable_36 = VarTable0_11;
      Var_116 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[3]), HeadVars_14);
      NonLocalVars_111 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_116);
      Disjunct_156 = ((MR_Word) ((MR_hl_field(1, ClausesDisjuncts_25, 0))));
      Disjuncts_157 = ((MR_Word) ((MR_hl_field(1, ClausesDisjuncts_25, 1))));
      DisjunctPurity_158 = hlds__hlds_goal__goal_get_purity_1_f_0(Disjunct_156);
      STATE_VARIABLE_Purity_1_161 = parse_tree__prog_data__worst_purity_2_f_0((MR_Integer) 0, DisjunctPurity_158);
      check_hlds__clause_to_proc__accumulate_disjunction_purity_3_p_0(Disjuncts_157, STATE_VARIABLE_Purity_1_161, &DisjunctionPurity_112);
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&InstMapDelta_113);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocalVars_111, InstMapDelta_113, (MR_Integer) 6, DisjunctionPurity_112, Context_110, &GoalInfo_115);
      {
        Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_118, 1) = ((MR_Box) (ClausesDisjuncts_25));
      }
      {
        Goal_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_67, 0) = ((MR_Box) (Var_118));
        MR_hl_field(0, Goal_67, 1) = ((MR_Box) (GoalInfo_115));
      }
    }
  }
  HeadVarList_79 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__clause_to_proc_scalar_common_2[3]), HeadVars_14);
  hlds__hlds_pred__proc_info_set_body_6_p_0(VarTable_36, HeadVarList_79, Goal_67, RttiVarMaps_12, STATE_VARIABLE_ProcInfo_1_84, STATE_VARIABLE_ProcInfo_81);
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
      MR_Word Clause_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Clauses_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ApplicableProcIds_16 = ((MR_Word) ((MR_hl_field(0, Clause_13, 0))));
      MR_Word STATE_VARIABLE_RevMatchingClauses_1_20;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevMatchingClauses_0_4;

      switch (MR_tag((MR_Word) ApplicableProcIds_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplicableProcIds_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_RevMatchingClauses_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_20, 0) = ((MR_Box) (Clause_13));
                MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_20, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_4));
              }
              break;
            case (MR_Integer) 1:
              switch (MaybeInInMode_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_RevMatchingClauses_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_20, 0) = ((MR_Box) (Clause_13));
                    MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_20, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_4));
                  }
                  break;
                case (MR_Integer) 0:
                  STATE_VARIABLE_RevMatchingClauses_1_20 = STATE_VARIABLE_RevMatchingClauses_0_4;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MaybeInInMode_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  STATE_VARIABLE_RevMatchingClauses_1_20 = STATE_VARIABLE_RevMatchingClauses_0_4;
                  break;
                case (MR_Integer) 0:
                  {
                    STATE_VARIABLE_RevMatchingClauses_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_20, 0) = ((MR_Box) (Clause_13));
                    MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_20, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_4));
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.clause_to_proc.select_matching_unify_clauses_acc\'/5", (MR_String) "non unify mode");
            return;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Clauses_14;
      next_value_of_STATE_VARIABLE_RevMatchingClauses_0_4 = STATE_VARIABLE_RevMatchingClauses_1_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevMatchingClauses_0_4 = next_value_of_STATE_VARIABLE_RevMatchingClauses_0_4;
      continue;
    }
    break;
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
      MR_Word Disjunct_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Disjuncts_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word DisjunctPurity_10;
      MR_Word STATE_VARIABLE_Purity_1_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Purity_0_2;

      DisjunctPurity_10 = hlds__hlds_goal__goal_get_purity_1_f_0(Disjunct_7);
      STATE_VARIABLE_Purity_1_13 = parse_tree__prog_data__worst_purity_2_f_0(STATE_VARIABLE_Purity_0_2, DisjunctPurity_10);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Disjuncts_8;
      next_value_of_STATE_VARIABLE_Purity_0_2 = STATE_VARIABLE_Purity_1_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Purity_0_2 = next_value_of_STATE_VARIABLE_Purity_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__get_clause_disjuncts_and_warnings_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Warnings_0_4,
  MR_Word * STATE_VARIABLE_Warnings_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Warnings_5 = STATE_VARIABLE_Warnings_0_4;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      MR_Word HeadClause_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TailClauses_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word HeadGoal0_16;
      MR_Word HeadWarnings_20;
      MR_Word STATE_VARIABLE_Disjuncts_1_26;
      MR_Word STATE_VARIABLE_Warnings_1_29;
      MR_Word HeadDisjuncts0_17;
      MR_Word Var_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Warnings_0_4;

      HeadGoal0_16 = hlds__hlds_clauses__clause_body_1_f_0(HeadClause_12);
      Var_25 = ((MR_Word) ((MR_hl_field(0, HeadGoal0_16, 0))));
      succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        HeadDisjuncts0_17 = ((MR_Word) ((MR_hl_field(3, Var_25, 1))));
        mercury__cord__snoc_list_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadDisjuncts0_17, HeadVar__2_2, &STATE_VARIABLE_Disjuncts_1_26);
      }
      else
      {
        MR_Word HeadGoal_19;

        hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 0, HeadGoal0_16, &HeadGoal_19);
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (HeadGoal_19)), HeadVar__2_2, &STATE_VARIABLE_Disjuncts_1_26);
      }
      HeadWarnings_20 = ((MR_Word) ((MR_hl_field(0, HeadClause_12, 4))));
      STATE_VARIABLE_Warnings_1_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadWarnings_20, STATE_VARIABLE_Warnings_0_4);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TailClauses_13;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_Disjuncts_1_26;
      next_value_of_STATE_VARIABLE_Warnings_0_4 = STATE_VARIABLE_Warnings_1_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Warnings_0_4 = next_value_of_STATE_VARIABLE_Warnings_0_4;
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
      MR_Word Clause_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Clauses_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ApplicableProcIds_13 = ((MR_Word) ((MR_hl_field(0, Clause_10, 0))));
      MR_Word STATE_VARIABLE_RevMatchingClauses_1_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevMatchingClauses_0_3;

      switch (MR_tag((MR_Word) ApplicableProcIds_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplicableProcIds_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_RevMatchingClauses_1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_17, 0) = ((MR_Box) (Clause_10));
                MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_17, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_3));
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.clause_to_proc.select_matching_nonunify_clauses_acc\'/4", (MR_String) "unify mode");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(1, ApplicableProcIds_13, 0))));

            succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_1)), ProcIds_14);
            if (succeeded)
              {
                STATE_VARIABLE_RevMatchingClauses_1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_17, 0) = ((MR_Box) (Clause_10));
                MR_hl_field(1, STATE_VARIABLE_RevMatchingClauses_1_17, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingClauses_0_3));
              }
            else
              STATE_VARIABLE_RevMatchingClauses_1_17 = STATE_VARIABLE_RevMatchingClauses_0_3;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Clauses_11;
      next_value_of_STATE_VARIABLE_RevMatchingClauses_0_3 = STATE_VARIABLE_RevMatchingClauses_1_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevMatchingClauses_0_3 = next_value_of_STATE_VARIABLE_RevMatchingClauses_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PredIdTable_9;

  check_hlds__clause_to_proc__copy_pred_clauses_to_nonmethod_procs_in_pred_id_table_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredIdTable_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredIdTable_9));
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_nonmethod_procs_for_preds_in_module_info_3_p_0(
  MR_Word PredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredIdTable0_6;
  MR_Word PredIdTable_7;
  MR_Box conv1_PredIdTable_7;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredIdTable0_6);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__clause_to_proc_scalar_common_1[0]), (MR_Word) (&check_hlds__clause_to_proc_scalar_common_1[2]), PredIds_4, ((MR_Box) (PredIdTable0_6)), &conv1_PredIdTable_7);
  PredIdTable_7 = ((MR_Word) (conv1_PredIdTable_7));
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_7, STATE_VARIABLE_ModuleInfo_0_8, STATE_VARIABLE_ModuleInfo_9);
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcInfo_17;

  check_hlds__clause_to_proc__copy_clauses_to_maybe_imported_proc_in_proc_info_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcInfo_17));
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_Word PredIdTable0_6;
  MR_Word PredInfo0_7;
  MR_Word PredInfo_8;
  MR_Word PredIdTable_9;
  MR_Word ClausesInfo_14;
  MR_Word ProcMap0_15;
  MR_Word ProcMap_16;
  MR_Word Var_17;
  MR_Box conv0_PredInfo0_7;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &PredIdTable0_6);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_6, ((MR_Box) (PredId_4)), &conv0_PredInfo0_7);
  PredInfo0_7 = ((MR_Word) (conv0_PredInfo0_7));
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_7, &ClausesInfo_14);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_7, &ProcMap0_15);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__clause_to_proc_scalar_common_4[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (PredInfo0_7));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (ClausesInfo_14));
    MR_hl_field(0, Var_17, 5) = ((MR_Box) (PredId_4));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Var_17, ProcMap0_15, &ProcMap_16);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_16, PredInfo0_7, &PredInfo_8);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_4)), ((MR_Box) (PredInfo_8)), PredIdTable0_6, &PredIdTable_9);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_9, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
}

static void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_for_all_valid_procs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PredInfo_10;

  check_hlds__clause_to_proc__copy_clauses_to_procs_in_pred_info_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredInfo_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredInfo_10));
}

void MR_CALL 
check_hlds__clause_to_proc__copy_clauses_to_proc_for_all_valid_procs_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  MR_Word PredIdTable0_4;
  MR_Word PredIdTable_5;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_6, &PredIdTable0_4);
  mercury__map__map_values_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&check_hlds__clause_to_proc_scalar_common_1[1]), PredIdTable0_4, &PredIdTable_5);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_5, STATE_VARIABLE_ModuleInfo_0_6, STATE_VARIABLE_ModuleInfo_7);
}

static MR_bool MR_CALL 
check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__clause_to_proc____Unify____maybe_in_in_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__clause_to_proc____Compare____maybe_in_in_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
