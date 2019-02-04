/*
** Automatically generated from `ctgc.livedata.m'
** by the Mercury compiler,
** version rotd-2018-04-16
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
#include "hlds.const_struct.mih"
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
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.datastruct.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
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
transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__345__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
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
  MR_Word ProcInfo_7,
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

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_3[3][5];

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_4[4][8];

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_5[1][1];

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_6[1][7];




static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_4[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__livedata_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__livedata__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__livedata__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__livedata__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_unit_selector_0
  }
};

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0 = {
  (MR_String) "livedata_bottom",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1 = {
  (MR_String) "livedata_top",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0
};

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2 = {
  (MR_String) "livedata_live",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_livedata_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0[2] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_0,
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1[1] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_livedata_0_2
};

static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_livedata_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.livedata",
  (MR_String) "livedata",
  {     transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_livedata_0 },
  {     transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_livedata_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_livedata_0
};

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0 = {
  (MR_String) "nodes_all_live",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__livedata__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0
};

static const MR_DuFunctorDesc transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1 = {
  (MR_String) "nodes_are_live",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__field_types_nodes_are_not_live_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0[1] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1[1] = {
  &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_functor_desc_nodes_are_not_live_result_0_1
};

static const MR_DuPtagLayout transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_stag_ordered_nodes_are_not_live_result_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.livedata",
  (MR_String) "nodes_are_not_live_result",
  {     transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_name_ordered_nodes_are_not_live_result_0 },
  {     transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__du_ptag_ordered_nodes_are_not_live_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__functor_number_map_nodes_are_not_live_result_0
};

static void MR_CALL 
transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__345__1_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Xsx_11,
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  *LambdaHeadVar__2_26 = transform_hlds__ctgc__datastruct__datastruct_termshift_4_f_0(ModuleInfo_6, ProcInfo_7, LambdaHeadVar__1_25, Xsx_11);
}

void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_9_9 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_11 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_10 == CastY_11);
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
          {
            MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Var_13)), ((MR_Box) (ArgY1_9)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_26;

    transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__345__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv3_LambdaHeadVar__2_26);
    *wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_26));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__5_5;

    succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv2_HeadVar__5_5);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_26;

    transform_hlds__ctgc__livedata__IntroducedFrom__pred__one_of_vars_is_live_ordered__345__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_26);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_26));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_return_selector_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__5_5);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__datastruct__datastruct_same_vars_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Datastructs0_8,
  MR_Word PairXY_9,
  MR_Word * Datastructs_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_30_41;
    MR_Word TypeCtorInfo_30_70;
    MR_Word L1_11;
    MR_Word L2_15;
    MR_Word Xsx_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PairXY_9, (MR_Integer) 0)));
    MR_Word Ysy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), PairXY_9, (MR_Integer) 1)));
    MR_Word Y_List_24;
    MR_Word Var_31;
    MR_Word Xsx_51;
    MR_Word Ysy_52;
    MR_Word Y_List_53;
    MR_Word Var_60;
    MR_Word FY_List_25;
    MR_Word Var_32;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word FY_List_54;
    MR_Word Var_61;
    MR_Word Var_55;
    MR_Word Var_56;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Ysy_23));
    }
    TypeCtorInfo_30_41 = (MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;
    mercury__list__filter_3_p_0(TypeCtorInfo_30_41, Var_31, Datastructs0_8, &Y_List_24);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (Ysy_23));
    }
    mercury__list__filter_3_p_0(TypeCtorInfo_30_41, Var_32, Y_List_24, &FY_List_25);
    succeeded = ((MR_tag((MR_Word) FY_List_25)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), FY_List_25, (MR_Integer) 0)));
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), FY_List_25, (MR_Integer) 1)));
      {
        L1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), L1_11, 0) = ((MR_Box) (Xsx_22));
        MR_hl_field(MR_mktag(1), L1_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word TypeInfo_34_45;
      MR_Word SelectorList_29;
      MR_Word Var_34;
      MR_Word Var_35;

      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (ModuleInfo_6));
        MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (ProcInfo_7));
        MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (Ysy_23));
      }
      TypeInfo_34_45 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[2];
      mercury__list__filter_map_3_p_0(TypeCtorInfo_30_41, TypeInfo_34_45, Var_34, Y_List_24, &SelectorList_29);
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_4));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ModuleInfo_6));
        MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (ProcInfo_7));
        MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (Xsx_22));
      }
      mercury__list__map_3_p_0(TypeInfo_34_45, TypeCtorInfo_30_41, Var_35, SelectorList_29, &L1_11);
    }
    Ysy_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), PairXY_9, (MR_Integer) 0)));
    Xsx_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), PairXY_9, (MR_Integer) 1)));
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Ysy_52));
    }
    TypeCtorInfo_30_70 = (MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;
    mercury__list__filter_3_p_0(TypeCtorInfo_30_70, Var_60, Datastructs0_8, &Y_List_53);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (ProcInfo_7));
      MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) (Ysy_52));
    }
    mercury__list__filter_3_p_0(TypeCtorInfo_30_70, Var_61, Y_List_53, &FY_List_54);
    succeeded = ((MR_tag((MR_Word) FY_List_54)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), FY_List_54, (MR_Integer) 0)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), FY_List_54, (MR_Integer) 1)));
      {
        L2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), L2_15, 0) = ((MR_Box) (Xsx_51));
        MR_hl_field(MR_mktag(1), L2_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_Word TypeInfo_34_74;
      MR_Word SelectorList_58;
      MR_Word Var_63;
      MR_Word Var_64;

      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_7));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ModuleInfo_6));
        MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (ProcInfo_7));
        MR_hl_field(MR_mktag(0), Var_63, 5) = ((MR_Box) (Ysy_52));
      }
      TypeInfo_34_74 = (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[2];
      mercury__list__filter_map_3_p_0(TypeCtorInfo_30_70, TypeInfo_34_74, Var_63, Y_List_53, &SelectorList_58);
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0_8));
        MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (ModuleInfo_6));
        MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (ProcInfo_7));
        MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) (Xsx_51));
      }
      mercury__list__map_3_p_0(TypeInfo_34_74, TypeCtorInfo_30_70, Var_64, SelectorList_58, &L2_15);
    }
    *Datastructs_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0, L1_11, L2_15);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(
  MR_Word ProgVars_3,
  MR_Word Datastruct_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Datastruct_4, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Datastruct_4, (MR_Integer) 1)));

    succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], ((MR_Box) (Var_5)), ProgVars_3);
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__livedata__nodes_are_not_live_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
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
          {
            *Result_10 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__ctgc__livedata_scalar_common_5[0]);
          }
          break;
        case (MR_Integer) 1:
          *Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LiveDatastructs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveData_9, (MR_Integer) 0)));
        MR_Word SubsumedNodes_12;

        transform_hlds__ctgc__datastruct__datastructs_that_are_subsumed_by_list_5_p_0(ModuleInfo_6, ProcInfo_7, DeadNodes_8, LiveDatastructs_11, &SubsumedNodes_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SubsumedNodes_12));
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
  {
    MR_bool succeeded;
    MR_Word LiveData_12;

    succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(LocalSharing_10);
    if (succeeded)
      LiveData_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    else
    {
      succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_p_0(LocalSharing_10);
      if (succeeded)
      {
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (LuData_9));
        }
        LiveData_12 = transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(ModuleInfo_7, ProcInfo_8, LiveData0_11, Var_16);
      }
      else
      {
        MR_Word LuLiveData_14;
        MR_Word Data1_31;

        Data1_31 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(ModuleInfo_7, ProcInfo_8, LocalSharing_10, LuData_9);
        {
          LuLiveData_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LuLiveData_14, 0) = ((MR_Box) (Data1_31));
        }
        switch (MR_tag((MR_Word) LiveData0_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(LiveData0_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                LiveData_12 = LuLiveData_14;
                break;
              case (MR_Integer) 1:
                LiveData_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Data0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveData0_11, (MR_Integer) 0)));
              MR_Word Data2_32;
              MR_Word Var_33;

              Data2_32 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(ModuleInfo_7, ProcInfo_8, LocalSharing_10, Data0_24);
              Var_33 = transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(ModuleInfo_7, ProcInfo_8, Data1_31, Data2_32);
              {
                LiveData_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), LiveData_12, 0) = ((MR_Box) (Var_33));
              }
            }
            break;
        }
      }
    }
    return LiveData_12;
  }
}

static void MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Datastructs_10;

    transform_hlds__ctgc__livedata__one_of_vars_is_live_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv2_Datastructs_10);
    *wrapper_arg_2 = ((MR_Box) (conv2_Datastructs_10));
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word GoalInfo_8,
  MR_Word SharingAs_9)
{
  {
    MR_bool succeeded;
    MR_Word LiveData_10;
    MR_Word TypeCtorInfo_21_21;
    MR_Word Lfu_11;
    MR_Word Lbu_12;
    MR_Word Lu_13;
    MR_Word Var_17;

    Lfu_11 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(GoalInfo_8);
    Lbu_12 = hlds__hlds_goal__goal_info_get_lbu_1_f_0(GoalInfo_8);
    TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    Var_17 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_21_21, Lfu_11, Lbu_12);
    Lu_13 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_21_21, Var_17);
    succeeded = (Lu_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(SharingAs_9);
      if (succeeded)
        LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      else
      {
        succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_bottom_1_p_0(SharingAs_9);
        if (succeeded)
        {
          MR_Word Var_23;

          Var_23 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], (MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[2], Lu_13);
          {
            LiveData_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LiveData_10, 0) = ((MR_Box) (Var_23));
          }
        }
        else
        {
          MR_Word SharingDomain_14;

          SharingDomain_14 = transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(SharingAs_9);
          switch (MR_tag((MR_Word) SharingDomain_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.livedata", (MR_String) "function \140transform_hlds.ctgc.livedata.livedata_init_at_goal\'/4", (MR_String) "unexpected SharingDomain");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeCtorInfo_17_40 = (MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;
                MR_Word SharingPairs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), SharingDomain_14, (MR_Integer) 0)));
                MR_Word LIVE1_35;
                MR_Word LIVE2_36;
                MR_Word Var_38;
                MR_Word DatastructsLists_48;
                MR_Word Var_49;

                LIVE1_35 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], TypeCtorInfo_17_40, (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[3], Lu_13);
                {
                  Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[1]));
                  MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0_3));
                  MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ModuleInfo_6));
                  MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (ProcInfo_7));
                  MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) (LIVE1_35));
                }
                mercury__list__map_3_p_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], Var_49, SharingPairs_15, &DatastructsLists_48);
                mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0, DatastructsLists_48, &LIVE2_36);
                Var_38 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_17_40, LIVE1_35, LIVE2_36);
                {
                  LiveData_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), LiveData_10, 0) = ((MR_Box) (Var_38));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.livedata", (MR_String) "function \140transform_hlds.ctgc.livedata.livedata_init_at_goal\'/4", (MR_String) "unexpected SharingDomain");
              }
              break;
          }
        }
      }
    }
    return LiveData_10;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__livedata__list_contains_datastruct_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_project_2_f_0(
  MR_Word ProgVars_4,
  MR_Word LiveData_5)
{
  {
    MR_bool succeeded;
    MR_Word ProjectedLiveData_6;

    switch (MR_tag((MR_Word) LiveData_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(LiveData_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveData_5, (MR_Integer) 0)));
          MR_Word FilteredData_8;
          MR_Word Var_11;

          {
            Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_project_2_f_0_1));
            MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (ProgVars_4));
          }
          mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0, Var_11, Data_7, &FilteredData_8);
          if ((FilteredData_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              ProjectedLiveData_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ProjectedLiveData_6, 0) = ((MR_Box) (FilteredData_8));
            }
        }
        break;
    }
    return ProjectedLiveData_6;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_subsumes_datastruct_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word LiveData_7,
  MR_Word Datastruct_8)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__datastruct__datastruct_refers_to_topcell_1_p_0(Datastruct_8);
    if (succeeded)
      if ((LiveData_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
        succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) LiveData_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word Data_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveData_7, (MR_Integer) 0)));

        succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0, ((MR_Box) (Datastruct_8)), Data_11);
      }
      else
        succeeded = MR_FALSE;
    else
    if ((LiveData_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) LiveData_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Data_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveData_7, (MR_Integer) 0)));

      succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_list_4_p_0(ModuleInfo_5, ProcInfo_6, Datastruct_8, Data_17);
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_subsumes_prog_var_2_p_0(
  MR_Word LiveData_3,
  MR_Word ProgVar_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;

    Var_5 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(ProgVar_4);
    if ((LiveData_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) LiveData_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Data_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveData_3, (MR_Integer) 0)));

      succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0, ((MR_Box) (Var_5)), Data_8);
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LiveData_10;

    conv0_LiveData_10 = transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LiveData_10));
    return wrapper_arg_3;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word LiveDataList_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word TypeCtorInfo_10_10 = (MR_Word) &transform_hlds__ctgc__livedata__transform_hlds__ctgc__livedata__type_ctor_info_livedata_0;
    MR_Word Var_8;
    MR_Box conv1_HeadVar__4_4;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&transform_hlds__ctgc__livedata_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (transform_hlds__ctgc__livedata__livedata_least_upper_bound_list_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_8, 4) = ((MR_Box) (ProcInfo_6));
    }
    conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0(TypeCtorInfo_10_10, TypeCtorInfo_10_10, Var_8, LiveDataList_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    HeadVar__4_4 = ((MR_Word) conv1_HeadVar__4_4);
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_least_upper_bound_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word LiveData1_8,
  MR_Word LiveData2_9)
{
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
            LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Data1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveData1_8, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) LiveData2_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(LiveData2_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  LiveData_10 = LiveData1_8;
                  break;
                case (MR_Integer) 1:
                  LiveData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Data2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), LiveData2_9, (MR_Integer) 0)));
                MR_Word Var_13;

                Var_13 = transform_hlds__ctgc__datastruct__datastruct_lists_least_upper_bound_4_f_0(ModuleInfo_6, ProcInfo_7, Data1_11, Data2_12);
                {
                  LiveData_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), LiveData_10, 0) = ((MR_Box) (Var_13));
                }
              }
              break;
          }
        }
        break;
    }
    return LiveData_10;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_get_datastructs_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Box conv0_HeadVar__2_2;

              conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[1], (MR_String) "transform_hlds.ctgc.livedata", (MR_String) "function \140transform_hlds.ctgc.livedata.livedata_get_datastructs\'/1", (MR_String) "livedata_get_datastructs: livedata is top.");
              HeadVar__2_2 = ((MR_Word) conv0_HeadVar__2_2);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        break;
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_is_top_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));

    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__livedata__livedata_is_bottom_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_as_top_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_datastructs_1_f_0(
  MR_Word Data_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Data_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_from_vars_1_f_0(
  MR_Word LiveVars_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    Var_4 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__livedata_scalar_common_1[0], (MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__livedata_scalar_common_2[1], LiveVars_3);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__livedata__livedata_init_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____livedata_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__livedata____Unify____livedata_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____livedata_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__livedata____Compare____livedata_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__livedata____Unify____nodes_are_not_live_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__livedata____Compare____nodes_are_not_live_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
