/*
** Automatically generated from `ctgc.livedata.m'
** by the Mercury compiler,
** version rotd-2025-10-02
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


// :- module transform_hlds.ctgc.livedata.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__livedata__init
ENDINIT
*/

#include "transform_hlds.ctgc.livedata.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "counter.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "term.mih"
#include "term_context.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
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
#include "recompilation.record_uses.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.ctgc.datastruct.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1[1];

static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_livedata_0[3];

static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_livedata_0[3];

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0[2];

static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0[2];

static void MR_CALL 
transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__346__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word Xsx_11,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word Datastructs0_8,
  MR_Word PairXY_9,
  MR_Word * Datastructs_10);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(
  MR_Word ProgVars_3,
  MR_Word Datastruct_4);

static void MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_2[4][3];

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_4[3][5];

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_5[4][8];

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_6[1][7];




static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_5[4][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0) }
};

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0 = {
  (MR_String) "livedata_bottom",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1 = {
  (MR_String) "livedata_top",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0) }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2[1] = { (MR_PseudoTypeInfo) (&transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0) };

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2 = {
  (MR_String) "livedata_live",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0[2] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1[1] = { &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2 };

static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_livedata_0[3] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1
};

static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_livedata_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.livedata",
  (MR_String) "livedata",
  { transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_livedata_0 },
  { transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_livedata_0,

};

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0 = {
  (MR_String) "nodes_all_live",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1[1] = { (MR_PseudoTypeInfo) (&transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0) };

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1 = {
  (MR_String) "nodes_are_live",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0[1] = { &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1[1] = { &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1 };

static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0[2] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1
};

static const MR_Integer transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_nodes_are_not_live_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.livedata",
  (MR_String) "nodes_are_not_live_result",
  { transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0 },
  { transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0,

};

static void MR_CALL 
transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__346__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word Xsx_11,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  *LambdaHeadVar__2_26 = transform_hlds__ctgc__datastruct__datastruct_termshift_4_f_0(ModuleInfo_6, VarTable_7, LambdaHeadVar__1_25, Xsx_11);
}

void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_9_9;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_9_9 = (MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_26;

  transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__346__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_LambdaHeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_26));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;

  succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_26;

  transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__346__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word Datastructs0_8,
  MR_Word PairXY_9,
  MR_Word * Datastructs_10)
{
  MR_bool succeeded;
  MR_Word L1_11;
  MR_Word L2_15;
  MR_Word Xsx_17 = ((MR_Word) ((MR_hl_field(0, PairXY_9, 0))));
  MR_Word Ysy_18 = ((MR_Word) ((MR_hl_field(0, PairXY_9, 1))));
  MR_Word Y_List_19;
  MR_Word Var_24;
  MR_Word Xsx_31;
  MR_Word Ysy_32;
  MR_Word Y_List_33;
  MR_Word Var_38;
  MR_Word FY_List_20;
  MR_Word Var_25;
  MR_Word FY_List_34;
  MR_Word Var_39;

  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[2]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (Ysy_18));
  }
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_24, Datastructs0_8, &Y_List_19);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_6[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (Ysy_18));
  }
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_25, Y_List_19, &FY_List_20);
  succeeded = (FY_List_20 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    {
      L1_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, L1_11, 0) = ((MR_Box) (Xsx_17));
      MR_hl_field(1, L1_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Word SelectorList_23;
    MR_Word Var_27;
    MR_Word Var_28;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_5[2]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(0, Var_27, 4) = ((MR_Box) (VarTable_7));
      MR_hl_field(0, Var_27, 5) = ((MR_Box) (Ysy_18));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[2]), Var_27, Y_List_19, &SelectorList_23);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_5[3]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (VarTable_7));
      MR_hl_field(0, Var_28, 5) = ((MR_Box) (Xsx_17));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_28, SelectorList_23, &L1_11);
  }
  Ysy_32 = ((MR_Word) ((MR_hl_field(0, PairXY_9, 0))));
  Xsx_31 = ((MR_Word) ((MR_hl_field(0, PairXY_9, 1))));
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[2]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Ysy_32));
  }
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_38, Datastructs0_8, &Y_List_33);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_6[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) (VarTable_7));
    MR_hl_field(0, Var_39, 5) = ((MR_Box) (Ysy_32));
  }
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_39, Y_List_33, &FY_List_34);
  succeeded = (FY_List_34 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    {
      L2_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, L2_15, 0) = ((MR_Box) (Xsx_31));
      MR_hl_field(1, L2_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Word SelectorList_37;
    MR_Word Var_41;
    MR_Word Var_42;

    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_5[2]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(0, Var_41, 4) = ((MR_Box) (VarTable_7));
      MR_hl_field(0, Var_41, 5) = ((MR_Box) (Ysy_32));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[2]), Var_41, Y_List_33, &SelectorList_37);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_5[3]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(0, Var_42, 4) = ((MR_Box) (VarTable_7));
      MR_hl_field(0, Var_42, 5) = ((MR_Box) (Xsx_31));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_42, SelectorList_37, &L2_15);
  }
  *Datastructs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), L1_11, L2_15);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(
  MR_Word ProgVars_3,
  MR_Word Datastruct_4)
{
  MR_bool succeeded;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Datastruct_4, 0))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[0]), ((MR_Box) (Var_5)), ProgVars_3);
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__livedata__nodes_are_not_live_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word DeadNodes_8,
  MR_Word LiveData_9,
  MR_Word * Result_10)
{
  switch (MR_tag((MR_Word) LiveData_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(LiveData_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Result_10 = (MR_Word) (MR_mkword(1, &transform_hlds__ctgc__livedata_scalar_common_3[0]));
          break;
        case (MR_Integer) 1:
          *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LiveDatastructs_11 = ((MR_Word) ((MR_hl_field(1, LiveData_9, 0))));
        MR_Word SubsumedNodes_12;

        transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0(ModuleInfo_6, VarTable_7, DeadNodes_8, LiveDatastructs_11, &SubsumedNodes_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SubsumedNodes_12));
        }
      }
      break;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_add_liveness_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word ProcInfo_8,
  MR_Word LuData_9,
  MR_Word LocalSharing_10,
  MR_Word LiveData0_11)
{
  MR_bool succeeded;
  MR_Word LiveData_12;

  succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(LocalSharing_10);
  if (succeeded)
    LiveData_12 = (MR_Word) ((MR_Unsigned) 4U);
  else
  {
    succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_p_0(LocalSharing_10);
    if (succeeded)
    {
      MR_Word VarTable_13;
      MR_Word Var_17;

      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable_13);
      {
        Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_17, 0) = ((MR_Box) (LuData_9));
      }
      LiveData_12 = transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(ModuleInfo_7, VarTable_13, LiveData0_11, Var_17);
    }
    else
    {
      MR_Word LuLiveData_15;
      MR_Word VarTable_18;
      MR_Word Data1_21;

      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_8, &VarTable_18);
      Data1_21 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(ModuleInfo_7, ProcInfo_8, LocalSharing_10, LuData_9);
      {
        LuLiveData_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LuLiveData_15, 0) = ((MR_Box) (Data1_21));
      }
      switch (MR_tag((MR_Word) LiveData0_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(LiveData0_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              LiveData_12 = LuLiveData_15;
              break;
            case (MR_Integer) 1:
              LiveData_12 = (MR_Word) ((MR_Unsigned) 4U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Data0_19 = ((MR_Word) ((MR_hl_field(1, LiveData0_11, 0))));
            MR_Word Data2_22;
            MR_Word Var_23;

            Data2_22 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(ModuleInfo_7, ProcInfo_8, LocalSharing_10, Data0_19);
            Var_23 = transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(ModuleInfo_7, VarTable_18, Data1_21, Data2_22);
            {
              LiveData_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, LiveData_12, 0) = ((MR_Box) (Var_23));
            }
          }
          break;
      }
    }
  }
  return LiveData_12;
}

static void MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Datastructs_10;

  transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Datastructs_10);
  *wrapper_arg_2 = ((MR_Box) (conv2_Datastructs_10));
}

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word GoalInfo_8,
  MR_Word SharingAs_9)
{
  MR_bool succeeded;
  MR_Word LiveData_10;
  MR_Word Lfu_11;
  MR_Word Lbu_12;
  MR_Word Lu_13;
  MR_Word Var_17;

  Lfu_11 = transform_hlds__ctgc__util__goal_info_get_lfu_1_f_0(GoalInfo_8);
  Lbu_12 = transform_hlds__ctgc__util__goal_info_get_lbu_1_f_0(GoalInfo_8);
  Var_17 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Lfu_11, Lbu_12);
  Lu_13 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_17);
  succeeded = (Lu_13 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    LiveData_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(SharingAs_9);
    if (succeeded)
      LiveData_10 = (MR_Word) ((MR_Unsigned) 4U);
    else
    {
      succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_p_0(SharingAs_9);
      if (succeeded)
      {
        MR_Word Var_21;

        Var_21 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_2[2]), Lu_13);
        {
          LiveData_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LiveData_10, 0) = ((MR_Box) (Var_21));
        }
      }
      else
      {
        MR_Word SharingDomain_14;

        SharingDomain_14 = transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(SharingAs_9);
        switch (MR_tag((MR_Word) SharingDomain_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.livedata.livedata_init_at_goal\'/4", (MR_String) "unexpected SharingDomain");
            break;
          case (MR_Integer) 1:
            {
              MR_Word SharingPairs_15 = ((MR_Word) ((MR_hl_field(1, SharingDomain_14, 0))));
              MR_Word LIVE1_25;
              MR_Word LIVE2_26;
              MR_Word Var_28;
              MR_Word DatastructsLists_31;
              MR_Word Var_32;

              LIVE1_25 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_2[3]), Lu_13);
              {
                Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_32, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_5[1]));
                MR_hl_field(0, Var_32, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3));
                MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_32, 3) = ((MR_Box) (ModuleInfo_6));
                MR_hl_field(0, Var_32, 4) = ((MR_Box) (VarTable_7));
                MR_hl_field(0, Var_32, 5) = ((MR_Box) (LIVE1_25));
              }
              mercury__list__map_3_p_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_2[0]), (MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[1]), Var_32, SharingPairs_15, &DatastructsLists_31);
              mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), DatastructsLists_31, &LIVE2_26);
              Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), LIVE1_25, LIVE2_26);
              {
                LiveData_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, LiveData_10, 0) = ((MR_Box) (Var_28));
              }
            }
            break;
        }
      }
    }
  }
  return LiveData_10;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0(
  MR_Word ProgVars_4,
  MR_Word LiveData_5)
{
  MR_bool succeeded;
  MR_Word ProjectedLiveData_6;

  switch (MR_tag((MR_Word) LiveData_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(LiveData_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ProjectedLiveData_6 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          ProjectedLiveData_6 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Data_7 = ((MR_Word) ((MR_hl_field(1, LiveData_5, 0))));
        MR_Word FilteredData_8;
        MR_Word Var_11;

        {
          Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_11, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[1]));
          MR_hl_field(0, Var_11, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_project_2_f_0_1));
          MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_11, 3) = ((MR_Box) (ProgVars_4));
        }
        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_11, Data_7, &FilteredData_8);
        if ((FilteredData_8 == (MR_Word) ((MR_Unsigned) 0U)))
          ProjectedLiveData_6 = (MR_Word) ((MR_Unsigned) 0U);
        else
          {
            ProjectedLiveData_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ProjectedLiveData_6, 0) = ((MR_Box) (FilteredData_8));
          }
      }
      break;
  }
  return ProjectedLiveData_6;
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word LiveData_7,
  MR_Word Datastruct_8)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_p_0(Datastruct_8);
  if (succeeded)
    if ((LiveData_7 == (MR_Word) ((MR_Unsigned) 4U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) LiveData_7)) == (MR_Integer) 1))
    {
      MR_Word Data_9 = ((MR_Word) ((MR_hl_field(1, LiveData_7, 0))));

      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (Datastruct_8)), Data_9);
    }
    else
      succeeded = MR_FALSE;
  else
  if ((LiveData_7 == (MR_Word) ((MR_Unsigned) 4U)))
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) LiveData_7)) == (MR_Integer) 1))
  {
    MR_Word Data_11 = ((MR_Word) ((MR_hl_field(1, LiveData_7, 0))));

    succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0(ModuleInfo_5, VarTable_6, Datastruct_8, Data_11);
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_p_0(
  MR_Word LiveData_3,
  MR_Word ProgVar_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  Var_5 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(ProgVar_4);
  if ((LiveData_3 == (MR_Word) ((MR_Unsigned) 4U)))
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) LiveData_3)) == (MR_Integer) 1))
  {
    MR_Word Data_6 = ((MR_Word) ((MR_hl_field(1, LiveData_3, 0))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ((MR_Box) (Var_5)), Data_6);
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_LiveData_10;

  conv0_LiveData_10 = transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LiveData_10));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word LiveDataList_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;
  MR_Box conv1_HeadVar__4_4;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_5[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_8, 4) = ((MR_Box) (VarTable_6));
  }
  conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0((MR_Word) (&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0), (MR_Word) (&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0), Var_8, LiveDataList_7, ((MR_Box) ((MR_Unsigned) 0U)));
  HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
  return HeadVar__4_4;
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word LiveData1_8,
  MR_Word LiveData2_9)
{
  MR_Word LiveData_10;

  switch (MR_tag((MR_Word) LiveData1_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(LiveData1_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          LiveData_10 = LiveData2_9;
          break;
        case (MR_Integer) 1:
          LiveData_10 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Data1_11 = ((MR_Word) ((MR_hl_field(1, LiveData1_8, 0))));

        switch (MR_tag((MR_Word) LiveData2_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(LiveData2_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                LiveData_10 = LiveData1_8;
                break;
              case (MR_Integer) 1:
                LiveData_10 = (MR_Word) ((MR_Unsigned) 4U);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Data2_12 = ((MR_Word) ((MR_hl_field(1, LiveData2_9, 0))));
              MR_Word Var_13;

              Var_13 = transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(ModuleInfo_6, VarTable_7, Data1_11, Data2_12);
              {
                LiveData_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, LiveData_10, 0) = ((MR_Box) (Var_13));
              }
            }
            break;
        }
      }
      break;
  }
  return LiveData_10;
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_get_datastructs_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Box conv0_HeadVar__2_2;

            conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[1]), (MR_String) "function \140transform_hlds.ctgc.livedata.livedata_get_datastructs\'/1", (MR_String) "livedata_get_datastructs: livedata is top.");
            HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      break;
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_is_top_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 4U));

  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_is_bottom_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_as_top_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 4U);
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_datastructs_1_f_0(
  MR_Word Data_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Data_3));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0(
  MR_Word LiveVars_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  Var_4 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__livedata_scalar_common_2[1]), LiveVars_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__livedata____Unify____livedata_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__livedata____Compare____livedata_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__ctgc__livedata__init(void)
{
}

void mercury__transform_hlds__ctgc__livedata__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0);
  MR_register_type_ctor_info(&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_nodes_are_not_live_result_0);
}

void mercury__transform_hlds__ctgc__livedata__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__livedata__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.livedata.
