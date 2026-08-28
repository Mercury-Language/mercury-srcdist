/*
** Automatically generated from `unused_args_base_ops.m'
** by the Mercury compiler,
** version rotd-2026-08-28
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


// :- module transform_hlds.unused_args_base_ops.
// :- implementation.

/*
INIT mercury__transform_hlds__unused_args_base_ops__init
ENDINIT
*/

#include "transform_hlds.unused_args_base_ops.mih"


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
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_base_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_base_ops__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_base_ops__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_base_ops__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__field_types_arg_var_in_proc_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_functor_desc_arg_var_in_proc_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_stag_ordered_arg_var_in_proc_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_ptag_ordered_arg_var_in_proc_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_name_ordered_arg_var_in_proc_0[1];

static const MR_Integer transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__functor_number_map_arg_var_in_proc_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_base_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_base_ops__tree234__ti_tree234_2hlds__pred_proc_id__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_base_ops__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_base_ops__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0;

static const MR_PseudoTypeInfo transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__field_types_required_by_0_0[2];

static const MR_DuFunctorDesc transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_functor_desc_required_by_0_0;

static const MR_DuFunctorDescPtr transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_stag_ordered_required_by_0_0[1];

static const MR_DuPtagLayout transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_ptag_ordered_required_by_0[1];

static const MR_DuFunctorDescPtr transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_name_ordered_required_by_0[1];

static const MR_Integer transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__functor_number_map_required_by_0[1];

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_arg_var_in_proc_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word ArgVarInProc_8);

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_var_requiring_vars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_var_requiring_vars_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleInfo_10,
  MR_Word VarTable_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevNotRequiredVars_0_26,
  MR_Word * STATE_VARIABLE_RevNotRequiredVars_27);

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_local_var_usage_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_local_var_usage_map_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Word PredProcId_9,
  MR_Word LocalVarUsageMap_10);

static void MR_CALL 
transform_hlds__unused_args_base_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_115_112_101_99_105_102_105_101_100_95_112_111_115_105_116_105_111_110_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word List0_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_global_var_usage_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____arg_var_in_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____arg_var_in_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____global_var_usage_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____global_var_usage_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____local_var_usage_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____local_var_usage_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____required_by_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____required_by_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_3[1][9];

static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_4[1][11];

static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_5[1][8];




static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__unused_args_base_ops_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_base_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_base_ops__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__unused_args_base_ops__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__unused_args_base_ops__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__field_types_arg_var_in_proc_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_functor_desc_arg_var_in_proc_0_0 = {
  (MR_String) "arg_var_in_proc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__field_types_arg_var_in_proc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_stag_ordered_arg_var_in_proc_0_0[1] = { &transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_functor_desc_arg_var_in_proc_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_ptag_ordered_arg_var_in_proc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_stag_ordered_arg_var_in_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_name_ordered_arg_var_in_proc_0[1] = { &transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_functor_desc_arg_var_in_proc_0_0 };

static const MR_Integer transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__functor_number_map_arg_var_in_proc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args_base_ops____Unify____arg_var_in_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_base_ops____Compare____arg_var_in_proc_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_base_ops",
  (MR_String) "arg_var_in_proc",
  { transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_name_ordered_arg_var_in_proc_0 },
  { transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_ptag_ordered_arg_var_in_proc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__functor_number_map_arg_var_in_proc_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_base_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__unused_args_base_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__unused_args_base_ops__tree234__ti_tree234_2hlds__pred_proc_id__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__unused_args_base_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_global_var_usage_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args_base_ops____Unify____global_var_usage_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_base_ops____Compare____global_var_usage_map_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_base_ops",
  (MR_String) "global_var_usage_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__tree234__ti_tree234_2hlds__pred_proc_id__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_local_var_usage_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__unused_args_base_ops____Unify____local_var_usage_map_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_base_ops____Compare____local_var_usage_map_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_base_ops",
  (MR_String) "local_var_usage_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_base_ops__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__unused_args_base_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__unused_args_base_ops__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0) }
};

static const MR_PseudoTypeInfo transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__field_types_required_by_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__unused_args_base_ops__set_ordlist__ti_set_ordlist_1transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0)
};

static const MR_DuFunctorDesc transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_functor_desc_required_by_0_0 = {
  (MR_String) "required_by",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__field_types_required_by_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_stag_ordered_required_by_0_0[1] = { &transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_functor_desc_required_by_0_0 };

static const MR_DuPtagLayout transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_ptag_ordered_required_by_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_stag_ordered_required_by_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_name_ordered_required_by_0[1] = { &transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_functor_desc_required_by_0_0 };

static const MR_Integer transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__functor_number_map_required_by_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__unused_args_base_ops____Unify____required_by_0_0_10001)),
  ((MR_Box) (transform_hlds__unused_args_base_ops____Compare____required_by_0_0_10001)),
  (MR_String) "transform_hlds.unused_args_base_ops",
  (MR_String) "required_by",
  { transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_name_ordered_required_by_0 },
  { transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__du_ptag_ordered_required_by_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__functor_number_map_required_by_0,

};

void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____required_by_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____required_by_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____local_var_usage_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____local_var_usage_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____global_var_usage_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____global_var_usage_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____arg_var_in_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__pred_proc_id____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____arg_var_in_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__pred_proc_id____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_arg_var_in_proc_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word ArgVarInProc_8)
{
  MR_Word PredProcId_10 = ((MR_Word) ((MR_hl_field(0, ArgVarInProc_8, 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, ArgVarInProc_8, 1))));
  MR_String PredProcIdStr_12;
  MR_Word ProcInfo_13;
  MR_Word VarTable_14;
  MR_String VarStr_15;

  PredProcIdStr_12 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(ModuleInfo_7, PredProcId_10);
  hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_7, PredProcId_10, &ProcInfo_13);
  hlds__hlds_proc__proc_info_get_var_table_2_p_0(ProcInfo_13, &VarTable_14);
  VarStr_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_14, (MR_Integer) 1, Var_11);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "      ");
  mercury__io__write_string_4_p_0(Stream_6, PredProcIdStr_12);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_6, VarStr_15);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_var_requiring_vars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  transform_hlds__unused_args_base_ops__write_arg_var_in_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_var_requiring_vars_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleInfo_10,
  MR_Word VarTable_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevNotRequiredVars_0_26,
  MR_Word * STATE_VARIABLE_RevNotRequiredVars_27)
{
  MR_bool succeeded;
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Word RequiringVars_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_Word LocalVarSet_16 = ((MR_Word) ((MR_hl_field(0, RequiringVars_13, 0))));
  MR_Word ArgVarInProcsSet_17 = ((MR_Word) ((MR_hl_field(0, RequiringVars_13, 1))));
  MR_Word LocalVars_18;
  MR_Word ArgVarsInProcs_19;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), LocalVarSet_16, &LocalVars_18);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0), ArgVarInProcsSet_17, &ArgVarsInProcs_19);
  succeeded = (LocalVars_18 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ArgVarsInProcs_19 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevNotRequiredVars_27 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevNotRequiredVars_0_26));
    }
  else
  {
    MR_String VarStr_20;

    VarStr_20 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_11, (MR_Integer) 1, Var_12);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "  requiring vars of ");
    mercury__io__write_string_4_p_0(Stream_9, VarStr_20);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":\n");
    if (!((LocalVars_18 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String LocalVarsStr_23;

      LocalVarsStr_23 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_11, (MR_Integer) 1, LocalVars_18);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "    variables: ");
      mercury__io__write_string_4_p_0(Stream_9, LocalVarsStr_23);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
    if (!((ArgVarsInProcs_19 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_45;
      MR_Box conv0_STATE_VARIABLE_IO_29;

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "    procedure arguments:\n");
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_45, 0) = ((MR_Box) (&transform_hlds__unused_args_base_ops_scalar_common_5[0]));
        MR_hl_field(0, Var_45, 1) = ((MR_Box) (transform_hlds__unused_args_base_ops__write_var_requiring_vars_8_p_0_1));
        MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_45, 3) = ((MR_Box) (Stream_9));
        MR_hl_field(0, Var_45, 4) = ((MR_Box) (ModuleInfo_10));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, ArgVarsInProcs_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_29);
    }
    *STATE_VARIABLE_RevNotRequiredVars_27 = STATE_VARIABLE_RevNotRequiredVars_0_26;
  }
}

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_local_var_usage_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RevNotRequiredVars_27;

  transform_hlds__unused_args_base_ops__write_var_requiring_vars_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevNotRequiredVars_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevNotRequiredVars_27));
}

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_local_var_usage_map_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Word PredProcId_9,
  MR_Word LocalVarUsageMap_10)
{
  MR_String PredProcIdStr_12;
  MR_Word LocalVarUsages_13;
  MR_Word ProcInfo_14;
  MR_Word VarTable_15;
  MR_Word RevNotRequiredVars_16;
  MR_Word NotRequiredVars_17;
  MR_Word Var_28;
  MR_Box conv2_RevNotRequiredVars_16;
  MR_Box conv1_STATE_VARIABLE_IO_2_30;

  PredProcIdStr_12 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(ModuleInfo_8, PredProcId_9);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_7, PredProcIdStr_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ":\n");
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), LocalVarUsageMap_10, &LocalVarUsages_13);
  hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_8, PredProcId_9, &ProcInfo_14);
  hlds__hlds_proc__proc_info_get_var_table_2_p_0(ProcInfo_14, &VarTable_15);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__unused_args_base_ops_scalar_common_4[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__unused_args_base_ops__write_local_var_usage_map_6_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (Stream_7));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Var_28, 5) = ((MR_Box) (VarTable_15));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_2[1]), (MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, LocalVarUsages_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevNotRequiredVars_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_2_30);
  RevNotRequiredVars_16 = ((MR_Word) (conv2_RevNotRequiredVars_16));
  mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), RevNotRequiredVars_16, &NotRequiredVars_17);
  if (!((NotRequiredVars_17 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String NotRequiredVarsStr_20;

    NotRequiredVarsStr_20 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_15, (MR_Integer) 1, NotRequiredVars_17);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "  not required but present vars: ");
    mercury__io__write_string_4_p_0(Stream_7, NotRequiredVarsStr_20);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  }
  mercury__io__nl_3_p_0(Stream_7);
}

void MR_CALL 
transform_hlds__unused_args_base_ops__remove_specified_positions_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word ArgNumsToRemove_4,
  MR_Word STATE_VARIABLE_List_0_6,
  MR_Word * STATE_VARIABLE_List_7)
{
  transform_hlds__unused_args_base_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_115_112_101_99_105_102_105_101_100_95_112_111_115_105_116_105_111_110_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(ArgNumsToRemove_4, (MR_Integer) 1, STATE_VARIABLE_List_0_6, STATE_VARIABLE_List_7);
}

static void MR_CALL 
transform_hlds__unused_args_base_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_115_112_101_99_105_102_105_101_100_95_112_111_115_105_116_105_111_110_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word List0_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((List0_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = List0_3;
  else
  {
    MR_Box Head0_11 = (MR_hl_field(1, List0_3, 0));
    MR_Word Tail0_12 = ((MR_Word) ((MR_hl_field(1, List0_3, 1))));

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = List0_3;
    else
    {
      MR_Word Tail_16;
      MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);

      transform_hlds__unused_args_base_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_115_112_101_99_105_102_105_101_100_95_112_111_115_105_116_105_111_110_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(HeadVar__1_1, Var_17, Tail0_12, &Tail_16);
      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (HeadVar__2_2)), HeadVar__1_1);
      if (succeeded)
        *HeadVar__4_4 = Tail_16;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = Head0_11;
          MR_hl_field(1, base, 1) = ((MR_Box) (Tail_16));
        }
    }
  }
}

static void MR_CALL 
transform_hlds__unused_args_base_ops__write_global_var_usage_map_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  transform_hlds__unused_args_base_ops__write_local_var_usage_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
transform_hlds__unused_args_base_ops__write_global_var_usage_map_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word GlobalVarUsageMap_8)
{
  MR_Word Var_12;
  MR_Box conv0_STATE_VARIABLE_IO_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&transform_hlds__unused_args_base_ops_scalar_common_3[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (transform_hlds__unused_args_base_ops__write_global_var_usage_map_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (ModuleInfo_7));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, GlobalVarUsageMap_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

MR_bool MR_CALL 
transform_hlds__unused_args_base_ops__local_var_is_used_2_p_0(
  MR_Word LocalVarUsageMap_3,
  MR_Word Var_4)
{
  MR_bool succeeded;

  succeeded = mercury__map__contains_2_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), LocalVarUsageMap_3, ((MR_Box) (Var_4)));
  succeeded = !(succeeded);
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__unused_args_base_ops__proc_arg_var_is_used_3_p_0(
  MR_Word GlobalVarUsageMap_4,
  MR_Word PredProcId_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_10_10;
  MR_Word TypeCtorInfo_11_11;
  MR_Word LocalVarUsageMap_7;
  MR_Box conv0_LocalVarUsageMap_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_2[0]), GlobalVarUsageMap_4, ((MR_Box) (PredProcId_5)), &conv0_LocalVarUsageMap_7);
  if (succeeded)
  {
    LocalVarUsageMap_7 = ((MR_Word) (conv0_LocalVarUsageMap_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeInfo_10_10 = (MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]);
    TypeCtorInfo_11_11 = (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0);
    succeeded = mercury__map__contains_2_p_0(TypeInfo_10_10, TypeCtorInfo_11_11, LocalVarUsageMap_7, ((MR_Box) (Var_6)));
  }
  succeeded = !(succeeded);
  return succeeded;
}

void MR_CALL 
transform_hlds__unused_args_base_ops__record_var_as_used_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_6,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_7)
{
  mercury__map__delete_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), ((MR_Box) (Var_4)), STATE_VARIABLE_LocalVarUsageMap_0_6, STATE_VARIABLE_LocalVarUsageMap_7);
}

void MR_CALL 
transform_hlds__unused_args_base_ops__record_vars_as_used_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_6,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_7)
{
  mercury__map__delete_list_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), Vars_4, STATE_VARIABLE_LocalVarUsageMap_0_6, STATE_VARIABLE_LocalVarUsageMap_7);
}

void MR_CALL 
transform_hlds__unused_args_base_ops__local_vars_are_required_by_proc_arg_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_4 = STATE_VARIABLE_LocalVarUsageMap_0_3;
    else
    {
      MR_Word LocalVar_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word LocalVars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;

      transform_hlds__unused_args_base_ops__local_var_is_required_by_proc_arg_4_p_0(LocalVar_9, HeadVar__2_2, STATE_VARIABLE_LocalVarUsageMap_0_3, &STATE_VARIABLE_LocalVarUsageMap_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LocalVars_10;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3 = STATE_VARIABLE_LocalVarUsageMap_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LocalVarUsageMap_0_3 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__unused_args_base_ops__local_var_is_required_by_proc_arg_4_p_0(
  MR_Word LocalVar_5,
  MR_Word ArgVarInProc_6,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_13,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_14)
{
  MR_bool succeeded;
  MR_Word RequiredBy0_8;
  MR_Box conv0_RequiredBy0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), STATE_VARIABLE_LocalVarUsageMap_0_13, ((MR_Box) (LocalVar_5)), &conv0_RequiredBy0_8);
  if (succeeded)
  {
    RequiredBy0_8 = ((MR_Word) (conv0_RequiredBy0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word RequiringLocalVars_9 = ((MR_Word) ((MR_hl_field(0, RequiredBy0_8, 0))));
    MR_Word RequiringProcArgs0_10 = ((MR_Word) ((MR_hl_field(0, RequiredBy0_8, 1))));
    MR_Word RequiringProcArgs_11;
    MR_Word RequiredBy_12;

    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0), ((MR_Box) (ArgVarInProc_6)), RequiringProcArgs0_10, &RequiringProcArgs_11);
    {
      RequiredBy_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RequiredBy_12, 0) = ((MR_Box) (RequiringLocalVars_9));
      MR_hl_field(0, RequiredBy_12, 1) = ((MR_Box) (RequiringProcArgs_11));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), ((MR_Box) (LocalVar_5)), ((MR_Box) (RequiredBy_12)), STATE_VARIABLE_LocalVarUsageMap_0_13, STATE_VARIABLE_LocalVarUsageMap_14);
  }
  else
    *STATE_VARIABLE_LocalVarUsageMap_14 = STATE_VARIABLE_LocalVarUsageMap_0_13;
}

void MR_CALL 
transform_hlds__unused_args_base_ops__local_vars_are_required_by_local_var_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word RequiringVar_2,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_3,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LocalVarUsageMap_4 = STATE_VARIABLE_LocalVarUsageMap_0_3;
    else
    {
      MR_Word LocalVar_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word LocalVars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_LocalVarUsageMap_1_20;
      MR_Word RequiredBy0_13;
      MR_Box conv0_RequiredBy0_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), STATE_VARIABLE_LocalVarUsageMap_0_3, ((MR_Box) (LocalVar_9)), &conv0_RequiredBy0_13);
      if (succeeded)
      {
        RequiredBy0_13 = ((MR_Word) (conv0_RequiredBy0_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word RequiringLocalVars0_14 = ((MR_Word) ((MR_hl_field(0, RequiredBy0_13, 0))));
        MR_Word RequiringProcArgs_15 = ((MR_Word) ((MR_hl_field(0, RequiredBy0_13, 1))));
        MR_Word RequiringLocalVars_16;
        MR_Word RequiredBy_17;

        mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), ((MR_Box) (RequiringVar_2)), RequiringLocalVars0_14, &RequiringLocalVars_16);
        {
          RequiredBy_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RequiredBy_17, 0) = ((MR_Box) (RequiringLocalVars_16));
          MR_hl_field(0, RequiredBy_17, 1) = ((MR_Box) (RequiringProcArgs_15));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), ((MR_Box) (LocalVar_9)), ((MR_Box) (RequiredBy_17)), STATE_VARIABLE_LocalVarUsageMap_0_3, &STATE_VARIABLE_LocalVarUsageMap_1_20);
      }
      else
        STATE_VARIABLE_LocalVarUsageMap_1_20 = STATE_VARIABLE_LocalVarUsageMap_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LocalVars_10;
      next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3 = STATE_VARIABLE_LocalVarUsageMap_1_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LocalVarUsageMap_0_3 = next_value_of_STATE_VARIABLE_LocalVarUsageMap_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__unused_args_base_ops__local_var_is_required_by_local_vars_4_p_0(
  MR_Word LocalVar_5,
  MR_Word NewRequiringVars_6,
  MR_Word STATE_VARIABLE_LocalVarUsageMap_0_13,
  MR_Word * STATE_VARIABLE_LocalVarUsageMap_14)
{
  MR_bool succeeded;
  MR_Word RequiredBy0_8;
  MR_Box conv0_RequiredBy0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), STATE_VARIABLE_LocalVarUsageMap_0_13, ((MR_Box) (LocalVar_5)), &conv0_RequiredBy0_8);
  if (succeeded)
  {
    RequiredBy0_8 = ((MR_Word) (conv0_RequiredBy0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word RequiringLocalVars0_9 = ((MR_Word) ((MR_hl_field(0, RequiredBy0_8, 0))));
    MR_Word RequiringProcArgs_10 = ((MR_Word) ((MR_hl_field(0, RequiredBy0_8, 1))));
    MR_Word RequiringLocalVars_11;
    MR_Word RequiredBy_12;

    mercury__set__insert_list_3_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), NewRequiringVars_6, RequiringLocalVars0_9, &RequiringLocalVars_11);
    {
      RequiredBy_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RequiredBy_12, 0) = ((MR_Box) (RequiringLocalVars_11));
      MR_hl_field(0, RequiredBy_12, 1) = ((MR_Box) (RequiringProcArgs_10));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&transform_hlds__unused_args_base_ops_scalar_common_1[0]), (MR_Word) (&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0), ((MR_Box) (LocalVar_5)), ((MR_Box) (RequiredBy_12)), STATE_VARIABLE_LocalVarUsageMap_0_13, STATE_VARIABLE_LocalVarUsageMap_14);
  }
  else
    *STATE_VARIABLE_LocalVarUsageMap_14 = STATE_VARIABLE_LocalVarUsageMap_0_13;
}

static MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____arg_var_in_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_base_ops____Unify____arg_var_in_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____arg_var_in_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_base_ops____Compare____arg_var_in_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____global_var_usage_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_base_ops____Unify____global_var_usage_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____global_var_usage_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_base_ops____Compare____global_var_usage_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____local_var_usage_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_base_ops____Unify____local_var_usage_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____local_var_usage_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_base_ops____Compare____local_var_usage_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__unused_args_base_ops____Unify____required_by_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__unused_args_base_ops____Unify____required_by_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__unused_args_base_ops____Compare____required_by_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__unused_args_base_ops____Compare____required_by_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__unused_args_base_ops__init(void)
{
}

void mercury__transform_hlds__unused_args_base_ops__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_arg_var_in_proc_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_global_var_usage_map_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_local_var_usage_map_0);
  MR_register_type_ctor_info(&transform_hlds__unused_args_base_ops__transform_hlds__unused_args_base_ops__type_ctor_info_required_by_0);
}

void mercury__transform_hlds__unused_args_base_ops__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__unused_args_base_ops__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.unused_args_base_ops.
